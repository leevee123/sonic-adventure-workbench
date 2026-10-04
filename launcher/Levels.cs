// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Json;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows.Forms;
namespace SonicLauncher {
[DataContract] public sealed class LevelPoint {
    [DataMember(Name="x",IsRequired=true)] public float X;
    [DataMember(Name="y",IsRequired=true)] public float Y;
    [DataMember(Name="z",IsRequired=true)] public float Z;
    public LevelPoint() { } public LevelPoint(float x,float y,float z){X=x;Y=y;Z=z;}
}
[DataContract] public sealed class LevelPiece {
    [DataMember(Name="kind",IsRequired=true)] public string Kind="box";
    [DataMember(Name="position",IsRequired=true)] public LevelPoint Position=new LevelPoint();
    [DataMember(Name="width",IsRequired=true)] public float Width=40;
    [DataMember(Name="height",IsRequired=true)] public float Height=10;
    [DataMember(Name="depth",IsRequired=true)] public float Depth=40;
    [DataMember(Name="rotation",IsRequired=true)] public float Rotation;
    [DataMember(Name="color",IsRequired=true)] public uint Color=0xff3692e6;
}
[DataContract] public sealed class LevelDocument {
    [DataMember(Name="format",IsRequired=true)] public string Format="sadx-workbench-level";
    [DataMember(Name="version",IsRequired=true)] public int Version=1;
    [DataMember(Name="id",IsRequired=true)] public string Id=Guid.NewGuid().ToString("N");
    [DataMember(Name="name",IsRequired=true)] public string Name="My adventure";
    [DataMember(Name="author")] public string Author="";
    [DataMember(Name="spawn",IsRequired=true)] public LevelPoint Spawn=new LevelPoint(0,5,0);
    [DataMember(Name="finish",IsRequired=true)] public LevelPoint Finish=new LevelPoint(0,0,180);
    [DataMember(Name="pieces",IsRequired=true)] public List<LevelPiece> Pieces=new List<LevelPiece>();
    public override string ToString(){return Name;}
    public static LevelDocument Starter() {
        var d=new LevelDocument{Id="skyline-sprint",Name="Skyline Sprint",Author="Workbench"};
        d.Pieces.Add(new LevelPiece{Position=new LevelPoint(0,-10,0),Width=140,Height=10,Depth=140});
        d.Pieces.Add(new LevelPiece{Kind="ramp",Position=new LevelPoint(0,0,100),Width=90,Height=30,Depth=60,Color=0xffef9940});
        d.Pieces.Add(new LevelPiece{Position=new LevelPoint(0,25,160),Width=100,Height=5,Depth=80,Color=0xff66c5ab});
        d.Pieces.Add(new LevelPiece{Position=new LevelPoint(-60,0,30),Width=8,Height=20,Depth=60,Color=0xffa28bff});
        d.Pieces.Add(new LevelPiece{Position=new LevelPoint(60,0,30),Width=8,Height=20,Depth=60,Color=0xffa28bff});
        d.Finish=new LevelPoint(0,30,180);return d;
    }
    public static LevelDocument Empty() {
        var d=new LevelDocument();d.Pieces.Add(new LevelPiece{Position=new LevelPoint(0,-10,0),Width=140,Height=10,Depth=140});d.Finish=new LevelPoint(0,0,50);return d;
    }
}
static class LevelFiles {
    public const int MaxPieces=96;
    static DataContractJsonSerializer Serializer(){return new DataContractJsonSerializer(typeof(LevelDocument));}
    public static byte[] Bytes(LevelDocument d){using(var s=new MemoryStream()){Serializer().WriteObject(s,d);return s.ToArray();}}
    public static LevelDocument Copy(LevelDocument d){return Parse(Bytes(d),false);}
    static bool Finite(float v){return !float.IsNaN(v)&&!float.IsInfinity(v);}
    static void Point(LevelPoint p){if(p==null||!Finite(p.X)||!Finite(p.Y)||!Finite(p.Z)||Math.Abs(p.X)>4000||Math.Abs(p.Y)>4000||Math.Abs(p.Z)>4000)throw new InvalidDataException("Positions must be finite and within -4000 to 4000.");}
    public static void Validate(LevelDocument d,bool playable=true){
        if(d==null||d.Format!="sadx-workbench-level"||d.Version!=1)throw new InvalidDataException("This level format is not supported. Use a Workbench .sadxlevel package or level project.");
        if(d.Id==null||!Regex.IsMatch(d.Id,@"^[a-zA-Z0-9_-]{1,64}$"))throw new InvalidDataException("Invalid level ID.");
        if(d.Name==null||playable&&string.IsNullOrWhiteSpace(d.Name)||d.Name.Length>80||d.Name.Any(char.IsControl)||d.Author!=null&&(d.Author.Length>80||d.Author.Any(char.IsControl)))throw new InvalidDataException("Use a level name and author of up to 80 characters.");
        Point(d.Spawn);Point(d.Finish);
        if(d.Pieces==null||d.Pieces.Count>MaxPieces||playable&&d.Pieces.Count==0)throw new InvalidDataException("A level needs 1 to 96 geometry pieces.");
        foreach(var p in d.Pieces){if(p==null||p.Kind!="box"&&p.Kind!="ramp")throw new InvalidDataException("Only boxes and ramps are supported in this version.");Point(p.Position);
            if(!Finite(p.Width)||!Finite(p.Height)||!Finite(p.Depth)||!Finite(p.Rotation)||p.Width<2||p.Width>1000||p.Height<2||p.Height>1000||p.Depth<2||p.Depth>1000||Math.Abs(p.Rotation)>360)throw new InvalidDataException("Piece sizes must be 2 to 1000; rotation must be -360 to 360.");}
        if(playable){if(!OnSurface(d,d.Spawn,1,60))throw new InvalidDataException("Place the spawn 1 to 60 units above a box or ramp. Use the Spawn tool over a platform.");
            if(!OnSurface(d,d.Finish,-1,10))throw new InvalidDataException("Place the finish on a platform or ramp. Use the Finish tool over a platform.");}
    }
    public static float? Surface(LevelDocument d,float x,float z){
        float? result=null;foreach(var p in d.Pieces){double a=p.Rotation*Math.PI/180,dx=x-p.Position.X,dz=z-p.Position.Z;double xx=dx*Math.Cos(a)-dz*Math.Sin(a),zz=dx*Math.Sin(a)+dz*Math.Cos(a);
            if(Math.Abs(xx)>p.Width/2 || Math.Abs(zz)>p.Depth/2)continue;float y=p.Position.Y+(p.Kind=="ramp"?(float)((zz/p.Depth+.5)*p.Height):p.Height);if(!result.HasValue||y>result)result=y;}return result;
    }
    static bool OnSurface(LevelDocument d,LevelPoint q,float min,float max){var y=Surface(d,q.X,q.Z);return y.HasValue&&q.Y-y.Value>=min&&q.Y-y.Value<=max;}
    public static LevelDocument Parse(byte[] data,bool playable=true){if(data.Length>262144)throw new InvalidDataException("The level project is too large.");using(var s=new MemoryStream(data)){var d=(LevelDocument)Serializer().ReadObject(s);Validate(d,playable);return d;}}
    public static LevelDocument Read(string path,bool playable=true){
        var file=new FileInfo(path);if(file.Length>2097152)throw new InvalidDataException("The level package is too large.");
        if(Path.GetExtension(path).Equals(".sadxlevel",StringComparison.OrdinalIgnoreCase))using(var z=ZipFile.OpenRead(path)){
            if(z.Entries.Count!=1||z.Entries[0].FullName!="level.json"||z.Entries[0].Length>262144)throw new InvalidDataException("A level package must contain only level.json. Scripts, ROM data, and other files are not supported.");
            using(var s=z.Entries[0].Open())using(var mem=new MemoryStream()){var buffer=new byte[8192];int n;while((n=s.Read(buffer,0,buffer.Length))>0){if(mem.Length+n>262144)throw new InvalidDataException("The level project is too large.");mem.Write(buffer,0,n);}return Parse(mem.ToArray(),playable);}}
        return Parse(File.ReadAllBytes(path),playable);
    }
    public static void Save(LevelDocument d,string path){Validate(d,false);Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(path)));string temp=path+"."+Guid.NewGuid().ToString("N")+".pending";
        try{File.WriteAllBytes(temp,Bytes(d));if(File.Exists(path))File.Replace(temp,path,path+".backup");else File.Move(temp,path);}finally{if(File.Exists(temp))File.Delete(temp);}}
    public static void Export(LevelDocument d,string path){Validate(d);string temp=path+"."+Guid.NewGuid().ToString("N")+".pending";
        try{using(var z=ZipFile.Open(temp,ZipArchiveMode.Create)){using(var s=z.CreateEntry("level.json",CompressionLevel.Optimal).Open()){var b=Bytes(d);s.Write(b,0,b.Length);}}
            if(File.Exists(path))File.Replace(temp,path,path+".backup");else File.Move(temp,path);}finally{if(File.Exists(temp))File.Delete(temp);}}
    public static string DirectoryFor(Game game){return Path.Combine(game.User,"CustomLevels");}
    public static string Install(Game game,LevelDocument d){Validate(d);string path=Installation.SafePath(game.User,Path.Combine("CustomLevels","level-"+d.Id,"level.json"));Save(d,path);return path;}
    public static List<LevelDocument> Installed(Game game,out int invalid){invalid=0;var list=new List<LevelDocument>();string root=DirectoryFor(game);Directory.CreateDirectory(root);
        foreach(string folder in System.IO.Directory.GetDirectories(root,"level-*"))try{string p=Installation.SafePath(game.User,Path.Combine("CustomLevels",Path.GetFileName(folder),"level.json"));list.Add(Read(p));}catch{invalid++;}return list.OrderBy(d=>d.Name).ToList();}
    public static string Binary(Game game,LevelDocument d){Validate(d);string folder=Path.Combine(game.User,"CustomPlay");Directory.CreateDirectory(folder);string path=Path.Combine(folder,"level.bin");
        using(var w=new BinaryWriter(File.Create(path))){w.Write(Encoding.ASCII.GetBytes("SALEVEL1"));w.Write(1u);w.Write((uint)d.Pieces.Count);
            foreach(var q in new[]{d.Spawn,d.Finish}){w.Write(q.X);w.Write(q.Y);w.Write(q.Z);}foreach(var p in d.Pieces){w.Write(p.Kind=="ramp"?1u:0u);w.Write(p.Position.X);w.Write(p.Position.Y);w.Write(p.Position.Z);w.Write(p.Width);w.Write(p.Height);w.Write(p.Depth);w.Write(p.Rotation);w.Write(p.Color);}}
        return path;}
    public static Game PlayGame(Game game){string user=Path.Combine(game.User,"CustomPlay","user");Directory.CreateDirectory(user);foreach(var pair in new[]{new[]{game.Config,Path.Combine(user,"config.ini")},new[]{game.InputConfig,Path.Combine(user,"Config","GCPadNew.ini")}}){if(File.Exists(pair[0])){Directory.CreateDirectory(Path.GetDirectoryName(pair[1]));File.Copy(pair[0],pair[1],true);}}
        return new Game(game.Root,user,game.ProfileDirectory);}
}
sealed class LevelsForm:DarkForm {
    readonly Game game;readonly ListBox list;readonly LevelCanvas canvas;readonly ActionButton play,edit;List<LevelDocument> levels;
    string status="Install a .sadxlevel package, or create your own adventure.";
    public LevelDocument SelectedLevel;
    public LevelsForm(Game game,bool preview):base("Sonic Adventure DX | Custom Levels",920,620,preview){this.game=game;
        ButtonAt("\u00d7",866,10,30,30,delegate{Close();}).CloseButton=true;
        list=new ListBox{BackColor=Theme.Panel,ForeColor=Theme.Ink,BorderStyle=BorderStyle.None,Font=Theme.Font(17*S),ItemHeight=(int)(38*S),IntegralHeight=false};list.SetBounds((int)(24*S),(int)(120*S),(int)(280*S),(int)(364*S));Controls.Add(list);
        canvas=new LevelCanvas{ReadOnly=true};canvas.SetBounds((int)(324*S),(int)(120*S),(int)(572*S),(int)(364*S));Controls.Add(canvas);
        list.SelectedIndexChanged+=delegate{canvas.Document=list.SelectedItem as LevelDocument;canvas.Fit();play.Enabled=edit.Enabled=canvas.Document!=null;Invalidate();};
        ButtonAt("Install level...",24,508,190,48,delegate{using(var f=new OpenFileDialog{Title="Install custom level",Filter="Workbench level package (*.sadxlevel)|*.sadxlevel|Level project (*.json)|*.json"})if(f.ShowDialog(this)==DialogResult.OK)Try(delegate{var d=LevelFiles.Read(f.FileName);LevelFiles.Install(game,d);Reload(d.Id);status="Installed "+d.Name;});});
        ButtonAt("Create level",224,508,174,48,delegate{OpenEditor(LevelDocument.Empty());});
        edit=ButtonAt("Edit selected",408,508,174,48,delegate{if(canvas.Document!=null)OpenEditor(LevelFiles.Copy(canvas.Document));});
        play=ButtonAt("PLAY LEVEL",592,508,304,48,delegate{if(canvas.Document!=null){SelectedLevel=canvas.Document;DialogResult=DialogResult.OK;Close();}});play.Primary=true;
        if(preview){levels=new List<LevelDocument>{LevelDocument.Starter()};list.DataSource=levels;list.SelectedIndex=0;}
        else Try(delegate{int invalid;var all=LevelFiles.Installed(game,out invalid);if(all.Count==0&&invalid==0)LevelFiles.Install(game,LevelDocument.Starter());Reload(null);});
    }
    void Try(Action a){try{a();}catch(Exception ex){MessageBox.Show(this,ex.Message,"Custom levels",MessageBoxButtons.OK,MessageBoxIcon.Warning);}Invalidate();}
    void Reload(string id){int invalid;levels=LevelFiles.Installed(game,out invalid);list.DataSource=null;list.DataSource=levels;list.SelectedIndex=levels.Count==0?-1:Math.Max(0,levels.FindIndex(d=>d.Id==id));if(invalid>0)status=invalid+" invalid level(s) skipped. Check the CustomLevels folder.";}
    void OpenEditor(LevelDocument d){using(var editor=new LevelEditorForm(game,d,false)){editor.ShowDialog(this);Reload(d.Id);if(editor.PlayRequested){SelectedLevel=editor.Document;DialogResult=DialogResult.OK;Close();}}}
    protected override void OnPaint(PaintEventArgs e){base.OnPaint(e);var g=e.Graphics;g.ScaleTransform(S,S);Theme.Text(g,"CUSTOM LEVELS",26,Theme.Ink,new RectangleF(24,22,760,40),FontStyle.Bold);
        Theme.Text(g,"Choose an adventure. Build the next one.",14,Theme.Muted,new RectangleF(24,67,800,28));
        var d=canvas.Document;if(d!=null)Theme.Text(g,d.Name+"  /  "+(string.IsNullOrEmpty(d.Author)?"Your creation":d.Author)+"  /  "+d.Pieces.Count+" pieces",12,Theme.Ink,new RectangleF(324,486,572,22));
        Theme.Text(g,status,11,Theme.Muted,new RectangleF(24,572,870,26));}
}
}
