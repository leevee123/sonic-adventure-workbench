// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.IO;
using System.Linq;
using System.Windows.Forms;
namespace SonicLauncher {
sealed class LevelCanvas:Control {
    public LevelDocument Document;
    public bool ReadOnly,TopView;
    public int Tool,Selected=-1;
    public float Snap=5,Elevation;
    public event Action BeforeChange,Changed,SelectionChanged;
    float zoom=2,centerX,centerZ,centerY;bool dragging,panning;Point last;LevelPoint start,dragOrigin;
    struct Face {public PointF[] Points;public float Depth;public Color Color;public int Piece;}
    List<Face> faces=new List<Face>();
    public LevelCanvas(){SetStyle(ControlStyles.AllPaintingInWmPaint|ControlStyles.UserPaint|ControlStyles.OptimizedDoubleBuffer|ControlStyles.Selectable,true);BackColor=Theme.Panel;TabStop=true;Cursor=Cursors.Cross;AccessibleName="Level geometry canvas";}
    public void Fit(){if(Document==null){Invalidate();return;}var points=Document.Pieces.Select(p=>p.Position).Concat(new[]{Document.Spawn,Document.Finish}).ToArray();centerX=points.Average(p=>p.X);centerZ=points.Average(p=>p.Z);centerY=points.Average(p=>p.Y);
        float extent=Math.Max(100,Document.Pieces.Select(p=>Math.Abs(p.Position.X-centerX)+Math.Abs(p.Position.Z-centerZ)+Math.Max(p.Width,p.Depth)/2+p.Height).DefaultIfEmpty(100).Max());zoom=Math.Max(.15f,Math.Min(4,Math.Min(Width,Height)*.7f/extent));Invalidate();}
    public PointF Project(LevelPoint p){float x=p.X-centerX,z=p.Z-centerZ,y=p.Y-centerY;return TopView?new PointF(Width/2+x*zoom,Height/2-z*zoom):new PointF(Width/2+(x-z)*.70710678f*zoom,Height/2+(x+z)*.3889087f*zoom-y*.85f*zoom);}
    LevelPoint Unproject(Point p,float y){float x=(p.X-Width/2)/zoom,z=(p.Y-Height/2)/zoom;if(TopView)return new LevelPoint(x+centerX,y,centerZ-z);
        float a=x/.70710678f,b=(z+(y-centerY)*.85f)/.3889087f;return new LevelPoint((a+b)/2+centerX,y,(b-a)/2+centerZ);}
    float Round(float n){return Snap<=0?n:(float)(Math.Round(n/Snap)*Snap);}
    public static LevelPoint[] Vertices(LevelPiece p){float x=p.Width/2,z=p.Depth/2,h=p.Height;var v=new[]{new LevelPoint(-x,0,-z),new LevelPoint(-x,0,z),new LevelPoint(x,0,z),new LevelPoint(x,0,-z),new LevelPoint(-x,p.Kind=="ramp"?0:h,-z),new LevelPoint(-x,h,z),new LevelPoint(x,h,z),new LevelPoint(x,p.Kind=="ramp"?0:h,-z)};double a=p.Rotation*Math.PI/180;
        foreach(var q in v){float xx=(float)(q.X*Math.Cos(a)+q.Z*Math.Sin(a));q.Z=(float)(q.Z*Math.Cos(a)-q.X*Math.Sin(a))+p.Position.Z;q.X=xx+p.Position.X;q.Y+=p.Position.Y;}return v;}
    static bool Inside(PointF p,PointF[] polygon){bool hit=false;for(int i=0,j=polygon.Length-1;i<polygon.Length;j=i++)if((polygon[i].Y>p.Y)!=(polygon[j].Y>p.Y)&&p.X<(polygon[j].X-polygon[i].X)*(p.Y-polygon[i].Y)/(polygon[j].Y-polygon[i].Y)+polygon[i].X)hit=!hit;return hit;}
    void MakeFaces(){faces.Clear();if(Document==null)return;int[][] quads={new[]{4,5,6,7},new[]{0,1,5,4},new[]{2,3,7,6},new[]{3,0,4,7},new[]{1,2,6,5}};
        for(int i=0;i<Document.Pieces.Count;i++){var p=Document.Pieces[i];var v=Vertices(p);var color=Color.FromArgb(unchecked((int)(p.Color|0xff000000)));int n=0;
            foreach(var f in quads){if(TopView&&n++>0)continue;var pts=f.Select(j=>Project(v[j])).ToArray();var depth=f.Average(j=>v[j].X+v[j].Z-v[j].Y*.45f);float shade=f==quads[0]?1:.67f;faces.Add(new Face{Points=pts,Depth=depth,Piece=i,Color=Color.FromArgb((int)(color.R*shade),(int)(color.G*shade),(int)(color.B*shade))});}}
        faces=faces.OrderBy(f=>f.Depth).ToList();}
    protected override void OnPaint(PaintEventArgs e){base.OnPaint(e);var g=e.Graphics;g.SmoothingMode=SmoothingMode.AntiAlias;
        using(var b=new LinearGradientBrush(ClientRectangle,Color.FromArgb(24,39,63),Theme.Panel,90))g.FillRectangle(b,ClientRectangle);
        float grid=20;float range=Math.Min(4400,Math.Max(300,Math.Max(Width,Height)/Math.Max(.1f,zoom)));
        using(var pen=new Pen(Color.FromArgb(32,153,187,225)))for(float i=-range;i<=range;i+=grid){g.DrawLine(pen,Project(new LevelPoint(centerX+i,0,centerZ-range)),Project(new LevelPoint(centerX+i,0,centerZ+range)));g.DrawLine(pen,Project(new LevelPoint(centerX-range,0,centerZ+i)),Project(new LevelPoint(centerX+range,0,centerZ+i)));}
        MakeFaces();foreach(var f in faces){using(var b=new SolidBrush(f.Color))g.FillPolygon(b,f.Points);using(var pen=new Pen(f.Piece==Selected?Theme.Gold:Color.FromArgb(80,185,215,244),f.Piece==Selected?2.5f:1))g.DrawPolygon(pen,f.Points);}
        if(Document!=null){Marker(g,Document.Spawn,Color.FromArgb(90,221,161),"START",Selected==-2);Marker(g,Document.Finish,Theme.Gold,"FINISH",Selected==-3);}
        Theme.Text(g,TopView?"TOP  /  +Z ↑":"3D VIEW  /  +Z ↙",10,Theme.Muted,new RectangleF(14,9,200,24),FontStyle.Bold);
        if(!ReadOnly)Theme.Text(g,Tool==0?"Select a piece, then drag to move":Tool==1?"Click to place a box":Tool==2?"Click to place a ramp":Tool==3?"Click a platform to place the start":"Click a platform to place the finish",11,Theme.Ink,new RectangleF(14,Height-32,Width-28,24));}
    void Marker(Graphics g,LevelPoint p,Color color,string text,bool selected){var q=Project(p);using(var b=new SolidBrush(color))g.FillEllipse(b,q.X-6,q.Y-6,12,12);if(selected)using(var pen=new Pen(Theme.Ink,2))g.DrawEllipse(pen,q.X-10,q.Y-10,20,20);Theme.Text(g,text,10,color,new RectangleF(q.X+10,q.Y-13,65,25),FontStyle.Bold);}
    void Before(){if(BeforeChange!=null)BeforeChange();}void Notify(){Invalidate();if(Changed!=null)Changed();}void SelectNotify(){Invalidate();if(SelectionChanged!=null)SelectionChanged();}
    protected override void OnMouseDown(MouseEventArgs e){base.OnMouseDown(e);Focus();last=e.Location;if(ReadOnly)return;if(e.Button==MouseButtons.Right||e.Button==MouseButtons.Middle){panning=true;Capture=true;return;}if(e.Button!=MouseButtons.Left||Document==null)return;
        if(Tool==1||Tool==2){if(Document.Pieces.Count>=LevelFiles.MaxPieces){MessageBox.Show(this,"This version supports up to 96 geometry pieces.","Level editor");return;}Before();var q=Unproject(e.Location,Elevation);q.X=Round(q.X);q.Z=Round(q.Z);Document.Pieces.Add(new LevelPiece{Kind=Tool==2?"ramp":"box",Position=q,Height=Tool==2?20:10,Color=Tool==2?0xffef9940u:0xff3692e6u});Selected=Document.Pieces.Count-1;Notify();SelectNotify();return;}
        if(Tool==3||Tool==4){var q=Unproject(e.Location,Elevation);q.X=Round(q.X);q.Z=Round(q.Z);q.Y=LevelFiles.Surface(Document,q.X,q.Z)??Elevation;Before();if(Tool==3){q.Y+=5;Document.Spawn=q;Selected=-2;}else{Document.Finish=q;Selected=-3;}Notify();SelectNotify();return;}
        int hit=-1;foreach(var pair in new[]{new{P=Document.Spawn,I=-2},new{P=Document.Finish,I=-3}}){var q=Project(pair.P);if(Math.Abs(q.X-e.X)<14&&Math.Abs(q.Y-e.Y)<14)hit=pair.I;}
        if(hit==-1){MakeFaces();for(int i=faces.Count-1;i>=0;i--)if(Inside(e.Location,faces[i].Points)){hit=faces[i].Piece;break;}}
        Selected=hit;SelectNotify();if(hit!=-1){Before();var p=Position();start=Unproject(e.Location,p.Y);dragOrigin=new LevelPoint(p.X,p.Y,p.Z);dragging=true;Capture=true;}}
    LevelPoint Position(){return Selected==-2?Document.Spawn:Selected==-3?Document.Finish:Document.Pieces[Selected].Position;}
    protected override void OnMouseMove(MouseEventArgs e){base.OnMouseMove(e);if(ReadOnly)return;if(panning){var a=Unproject(last,0);var b=Unproject(e.Location,0);centerX+=a.X-b.X;centerZ+=a.Z-b.Z;last=e.Location;Invalidate();}
        else if(dragging&&Selected!=-1){var p=Position();var next=Unproject(e.Location,p.Y);float x=Round(dragOrigin.X+next.X-start.X),z=Round(dragOrigin.Z+next.Z-start.Z);p.X=Math.Max(-4000,Math.Min(4000,x));p.Z=Math.Max(-4000,Math.Min(4000,z));Notify();}}
    protected override void OnMouseUp(MouseEventArgs e){base.OnMouseUp(e);dragging=panning=false;Capture=false;}
    protected override void OnMouseWheel(MouseEventArgs e){base.OnMouseWheel(e);zoom=Math.Max(.1f,Math.Min(12,zoom*(e.Delta>0?1.15f:1/1.15f)));Invalidate();}
}
sealed class LevelEditorForm:DarkForm {
    readonly Game game;readonly LevelCanvas canvas;readonly TextBox name,author;readonly NumericUpDown[] values=new NumericUpDown[7];readonly ActionButton[] tools=new ActionButton[5];readonly ActionButton color;
    readonly Stack<byte[]> undo=new Stack<byte[]>(),redo=new Stack<byte[]>();bool updating,dirty;string file,status="Start with a platform. Add ramps, then place a start and finish.";
    public LevelDocument Document;public bool PlayRequested;
    public LevelEditorForm(Game game,LevelDocument d,bool preview):base("Sonic Adventure DX | Level Creator",1060,720,preview){this.game=game;Document=d;
        ButtonAt("\u00d7",1006,10,30,30,delegate{Close();}).CloseButton=true;
        ButtonAt("New",24,64,70,38,delegate{if(CanDiscard())LoadDocument(LevelDocument.Empty(),null);});
        ButtonAt("Open",104,64,70,38,delegate{if(!CanDiscard())return;using(var f=new OpenFileDialog{Filter="Level project or package|*.json;*.sadxlevel"})if(f.ShowDialog(this)==DialogResult.OK)Try(delegate{LoadDocument(LevelFiles.Read(f.FileName,false),Path.GetExtension(f.FileName)==".json"?f.FileName:null);});});
        ButtonAt("Save",184,64,80,38,delegate{SaveProject(true);});
        ButtonAt("Export...",274,64,100,38,delegate{Try(delegate{SyncName();using(var f=new SaveFileDialog{Filter="Workbench level (*.sadxlevel)|*.sadxlevel",FileName=Document.Name+".sadxlevel"})if(f.ShowDialog(this)==DialogResult.OK){LevelFiles.Export(Document,f.FileName);status="Exported. Share this package; install it from Custom Levels.";}});});
        ButtonAt("Install level",384,64,134,38,delegate{Try(delegate{SyncName();LevelFiles.Install(game,Document);SaveProject(false);status="Installed! Open Custom Levels to select and play it.";});});
        ButtonAt("Undo",528,64,74,38,delegate{Undo(false);});ButtonAt("Redo",612,64,74,38,delegate{Undo(true);});
        var test=ButtonAt("TEST PLAY",846,64,190,38,delegate{Try(delegate{SyncName();LevelFiles.Validate(Document);LevelFiles.Install(game,Document);if(!SaveProject(false))return;if(game.Missing()!=null)throw new IOException(game.Missing());PlayRequested=true;DialogResult=DialogResult.OK;Close();});});test.Primary=true;
        LabelAt("LEVEL NAME",24,116,340,18);name=TextAt(d.Name,24,138,488);name.MaxLength=80;
        LabelAt("CREATOR",528,116,360,18);author=TextAt(d.Author??"",528,138,508);author.MaxLength=80;
        name.TextChanged+=delegate{if(!updating){Remember();Document.Name=name.Text;dirty=true;}};author.TextChanged+=delegate{if(!updating){Remember();Document.Author=author.Text;dirty=true;}};
        canvas=new LevelCanvas{Document=d};canvas.SetBounds((int)(240*S),(int)(184*S),(int)(556*S),(int)(432*S));Controls.Add(canvas);
        canvas.BeforeChange+=Remember;canvas.Changed+=delegate{dirty=true;RefreshProperties();Invalidate();};canvas.SelectionChanged+=RefreshProperties;
        ActionButton view=null;string[] labels={"Select / move","Place box","Place ramp","Place start","Place finish"};for(int i=0;i<5;i++){int j=i;tools[i]=ButtonAt(labels[i],24,184+i*48,198,40,delegate{canvas.Tool=j;if(j>=3&&!canvas.TopView){canvas.TopView=true;view.Text="3D view";canvas.Fit();}for(int k=0;k<tools.Length;k++){tools[k].Selected=k==j;tools[k].Invalidate();}canvas.Invalidate();});}tools[0].Selected=true;
        ButtonAt("Duplicate",24,442,198,38,delegate{Duplicate();});ButtonAt("Delete selected",24,490,198,38,delegate{Delete();});
        ButtonAt("Fit view",24,546,94,38,delegate{canvas.Fit();});view=ButtonAt("Top view",128,546,94,38,null);view.Click+=delegate{canvas.TopView=!canvas.TopView;view.Text=canvas.TopView?"3D view":"Top view";canvas.Fit();};
        LabelAt("GRID SNAP",24,598,92,18);var snap=NumberAt(5,120,592,102,0,40);snap.ValueChanged+=delegate{canvas.Snap=(float)snap.Value;};
        LabelAt("PLACE AT Y",24,640,92,18);var elevation=NumberAt(0,120,633,102,-4000,4000);elevation.ValueChanged+=delegate{canvas.Elevation=(float)elevation.Value;};
        LabelAt("SELECTED PIECE",814,184,222,24);string[] properties={"X position","Y (bottom)","Z position","Width","Height","Depth","Rotation °"};
        for(int i=0;i<7;i++){LabelAt(properties[i],814,220+i*42,104,28);int k=i;values[i]=NumberAt(0,920,220+i*42,116,i==6?-360:i>=3&&i<=5?2:-4000,i==6?360:i>=3&&i<=5?1000:4000);values[i].ValueChanged+=delegate{Property(k);};}
        color=ButtonAt("Piece color",814,528,222,40,delegate{if(canvas.Selected<0)return;using(var f=new ColorDialog{Color=System.Drawing.Color.FromArgb(unchecked((int)Document.Pieces[canvas.Selected].Color))})if(f.ShowDialog(this)==DialogResult.OK){Remember();Document.Pieces[canvas.Selected].Color=unchecked((uint)f.Color.ToArgb());dirty=true;canvas.Invalidate();RefreshProperties();}});
        LabelAt("Ramps rise toward +Z.\nRotate them to change direction.",814,578,222,54);
        ButtonAt("Help",814,640,104,38,delegate{MessageBox.Show(this,"1. Place boxes and ramps in the canvas.\n2. Select a piece and drag it, or adjust the numbers. Y is its bottom height.\n3. Click Place start / finish over a platform in Top view. Start is placed 5 units above it.\n4. Test Play saves and installs your level, then starts Sonic.\n5. Export a .sadxlevel package to share it.\n\nMouse wheel: zoom. Right drag: pan. Delete: remove. Ctrl+D: duplicate. Ctrl+Z / Ctrl+Y: undo / redo.\nGame: Z / Xbox RB restarts at your start. Falling also respawns you.\n\nThis version supports boxes and ramps, up to 96 pieces. It uses Sonic's original physics.","Level creator",MessageBoxButtons.OK,MessageBoxIcon.Information);});
        ButtonAt("Close",932,640,104,38,delegate{Close();});RefreshProperties();canvas.Fit();
    }
    void LabelAt(string text,int x,int y,int w,int h){var l=new Label{Text=text,ForeColor=Theme.Muted,BackColor=Theme.Background,Font=Theme.Font(11*S),AutoSize=false};l.SetBounds((int)(x*S),(int)(y*S),(int)(w*S),(int)(h*S));Controls.Add(l);}
    TextBox TextAt(string text,int x,int y,int w){var t=new TextBox{Text=text,ForeColor=Theme.Ink,BackColor=Theme.Panel,BorderStyle=BorderStyle.FixedSingle,Font=Theme.Font(16*S)};t.SetBounds((int)(x*S),(int)(y*S),(int)(w*S),(int)(30*S));Controls.Add(t);return t;}
    NumericUpDown NumberAt(decimal n,int x,int y,int w,decimal min,decimal max){var v=new NumericUpDown{Minimum=min,Maximum=max,Value=Math.Max(min,Math.Min(max,n)),DecimalPlaces=1,Increment=1,ForeColor=Theme.Ink,BackColor=Theme.Panel,Font=Theme.Font(14*S),BorderStyle=BorderStyle.FixedSingle};v.SetBounds((int)(x*S),(int)(y*S),(int)(w*S),(int)(30*S));Controls.Add(v);return v;}
    void Try(Action a){try{a();}catch(Exception ex){MessageBox.Show(this,ex.Message,"Level creator",MessageBoxButtons.OK,MessageBoxIcon.Warning);}Invalidate();}
    void SyncName(){Document.Name=name.Text;Document.Author=author.Text;}
    void Remember(){if(updating)return;undo.Push(LevelFiles.Bytes(Document));if(undo.Count>100){var keep=undo.Take(100).Reverse().ToArray();undo.Clear();foreach(var b in keep)undo.Push(b);}redo.Clear();}
    void Undo(bool forward){var from=forward?redo:undo;var to=forward?undo:redo;if(from.Count==0)return;to.Push(LevelFiles.Bytes(Document));Document=LevelFiles.Parse(from.Pop(),false);updating=true;name.Text=Document.Name;author.Text=Document.Author??"";updating=false;canvas.Document=Document;canvas.Selected=-1;dirty=true;RefreshProperties();canvas.Invalidate();}
    void LoadDocument(LevelDocument d,string path){Document=d;file=path;undo.Clear();redo.Clear();updating=true;name.Text=d.Name;author.Text=d.Author??"";updating=false;canvas.Document=d;canvas.Selected=-1;canvas.Fit();dirty=false;RefreshProperties();Invalidate();}
    bool SaveProject(bool choose){bool saved=false;Try(delegate{SyncName();if(choose){using(var f=new SaveFileDialog{Filter="Level project (*.json)|*.json",FileName=file??Document.Name+".json",InitialDirectory=Path.Combine(game.User,"LevelProjects")}){Directory.CreateDirectory(f.InitialDirectory);if(f.ShowDialog(this)!=DialogResult.OK)return;file=f.FileName;}}else if(file==null)file=Path.Combine(game.User,"LevelProjects",Document.Id+".json");LevelFiles.Save(Document,file);dirty=false;saved=true;status="Project saved. Install it or export a package when it is ready.";});return saved;}
    bool CanDiscard(){if(!dirty)return true;var answer=MessageBox.Show(this,"Save your project before closing?","Level creator",MessageBoxButtons.YesNoCancel,MessageBoxIcon.Question);return answer==DialogResult.No||answer==DialogResult.Yes&&SaveProject(false);}
    void RefreshProperties(){updating=true;bool piece=canvas.Selected>=0&&canvas.Selected<Document.Pieces.Count;bool marker=canvas.Selected==-2||canvas.Selected==-3;LevelPiece p=piece?Document.Pieces[canvas.Selected]:null;LevelPoint q=piece?p.Position:canvas.Selected==-2?Document.Spawn:Document.Finish;
        float[] data={q.X,q.Y,q.Z,piece?p.Width:2,piece?p.Height:2,piece?p.Depth:2,piece?p.Rotation:0};for(int i=0;i<7;i++){values[i].Enabled=piece||marker&&i<3;values[i].Value=Math.Max(values[i].Minimum,Math.Min(values[i].Maximum,(decimal)data[i]));values[i].AccessibleName=new[]{"X position","Y bottom","Z position","Width","Height","Depth","Rotation"}[i];}color.Enabled=piece;color.Text=piece?"Color  #"+(p.Color&0xffffff).ToString("X6"):"Piece color";color.Invalidate();updating=false;}
    void Property(int index){if(updating)return;bool piece=canvas.Selected>=0;if(!piece&&canvas.Selected!=-2&&canvas.Selected!=-3)return;Remember();float v=(float)values[index].Value;var q=piece?Document.Pieces[canvas.Selected].Position:canvas.Selected==-2?Document.Spawn:Document.Finish;
        if(index==0)q.X=v;else if(index==1)q.Y=v;else if(index==2)q.Z=v;else if(piece){var p=Document.Pieces[canvas.Selected];if(index==3)p.Width=v;else if(index==4)p.Height=v;else if(index==5)p.Depth=v;else p.Rotation=v;}dirty=true;canvas.Invalidate();Invalidate();}
    void Duplicate(){if(canvas.Selected<0||Document.Pieces.Count>=LevelFiles.MaxPieces)return;Remember();var p=LevelFiles.Copy(Document).Pieces[canvas.Selected];p.Position.X=Math.Min(4000,p.Position.X+10);p.Position.Z=Math.Min(4000,p.Position.Z+10);Document.Pieces.Add(p);canvas.Selected=Document.Pieces.Count-1;dirty=true;RefreshProperties();canvas.Invalidate();}
    void Delete(){if(canvas.Selected<0)return;Remember();Document.Pieces.RemoveAt(canvas.Selected);canvas.Selected=-1;dirty=true;RefreshProperties();canvas.Invalidate();Invalidate();}
    protected override void OnKeyDown(KeyEventArgs e){base.OnKeyDown(e);if(e.Control&&e.KeyCode==Keys.S){SaveProject(false);e.SuppressKeyPress=true;}else if(e.Control&&e.KeyCode==Keys.Z){Undo(false);e.SuppressKeyPress=true;}else if(e.Control&&e.KeyCode==Keys.Y){Undo(true);e.SuppressKeyPress=true;}else if(e.Control&&e.KeyCode==Keys.D){Duplicate();e.SuppressKeyPress=true;}else if(e.KeyCode==Keys.Delete&&canvas.Focused){Delete();e.SuppressKeyPress=true;}}
    protected override void OnFormClosing(FormClosingEventArgs e){if(!PlayRequested&&!CanDiscard())e.Cancel=true;base.OnFormClosing(e);}
    protected override void OnPaint(PaintEventArgs e){base.OnPaint(e);var g=e.Graphics;g.ScaleTransform(S,S);Theme.Text(g,"LEVEL CREATOR",24,Theme.Ink,new RectangleF(24,14,800,38),FontStyle.Bold);Theme.Text(g,"Drag to move  ·  Wheel to zoom  ·  Right drag to pan  ·  Ctrl+Z to undo",11,Theme.Muted,new RectangleF(240,629,556,28));Theme.Text(g,Document.Pieces.Count+" / 96 pieces  •  "+(dirty?"Unsaved changes":"Project ready"),11,Theme.Gold,new RectangleF(240,660,556,25));Theme.Text(g,status,11,Theme.Muted,new RectangleF(24,689,1012,22));}
}
}
