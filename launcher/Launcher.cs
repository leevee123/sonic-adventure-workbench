using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Windows.Forms;

namespace SonicLauncher
{
    static class Theme
    {
        public static readonly Color Background = Color.FromArgb(9, 15, 28);
        public static readonly Color Panel = Color.FromArgb(17, 28, 46);
        public static readonly Color Border = Color.FromArgb(41, 57, 80);
        public static readonly Color Gold = Color.FromArgb(255, 208, 56);
        public static readonly Color Ink = Color.FromArgb(239, 246, 255);
        public static readonly Color Muted = Color.FromArgb(150, 170, 196);
        public static readonly Color Blue = Color.FromArgb(45, 119, 255);
        public static Font Font(float size, FontStyle style = FontStyle.Regular)
        { return new Font("Segoe UI", size, style, GraphicsUnit.Pixel); }
        public static GraphicsPath Rounded(RectangleF r, float radius)
        {
            float d = radius * 2; var p = new GraphicsPath();
            p.AddArc(r.X, r.Y, d, d, 180, 90); p.AddArc(r.Right-d, r.Y, d, d, 270, 90);
            p.AddArc(r.Right-d, r.Bottom-d, d, d, 0, 90); p.AddArc(r.X, r.Bottom-d, d, d, 90, 90);
            p.CloseFigure(); return p;
        }
        public static void Text(Graphics g, string text, float size, Color color, RectangleF box,
                                FontStyle style = FontStyle.Regular, bool center = false)
        {
            using (var font = Font(size, style)) using (var brush = new SolidBrush(color))
            using (var format = new StringFormat { Alignment = center ? StringAlignment.Center : StringAlignment.Near,
                LineAlignment = StringAlignment.Center, Trimming = StringTrimming.EllipsisCharacter,
                FormatFlags = StringFormatFlags.NoWrap }) g.DrawString(text, font, brush, box, format);
        }
        public static void Ring(Graphics g, RectangleF r, float thickness)
        {
            using (var shadow = new Pen(Color.FromArgb(80, 0, 0, 0), thickness+6))
                g.DrawEllipse(shadow, r.X+2, r.Y+4, r.Width, r.Height);
            using (var grad = new LinearGradientBrush(r, Color.FromArgb(255, 244, 164), Color.FromArgb(224, 142, 10), 64))
            using (var pen = new Pen(grad, thickness)) g.DrawEllipse(pen, r);
            using (var highlight = new Pen(Color.FromArgb(250, 255, 247, 208), 2))
                g.DrawArc(highlight, r.X-thickness/4, r.Y-thickness/4, r.Width+thickness/2, r.Height+thickness/2, 190, 110);
        }
        public static Icon MakeIcon()
        {
            using (var bitmap = new Bitmap(64,64)) using (var g = Graphics.FromImage(bitmap))
            {
                g.SmoothingMode = SmoothingMode.AntiAlias;
                using (var p = Rounded(new RectangleF(1,1,62,62),16))
                using (var brush = new LinearGradientBrush(new Rectangle(0,0,64,64), Blue, Color.FromArgb(9, 27, 76), 70))
                    g.FillPath(brush,p);
                Ring(g,new RectangleF(16,13,32,36),6);
                IntPtr handle = bitmap.GetHicon();
                try { using (var icon = Icon.FromHandle(handle)) return (Icon)icon.Clone(); }
                finally { Native.DestroyIcon(handle); }
            }
        }
    }

    static class Native
    {
        [DllImport("user32.dll")] public static extern bool ReleaseCapture();
        [DllImport("user32.dll")] public static extern IntPtr SendMessage(IntPtr hwnd, int msg, IntPtr w, IntPtr l);
        [DllImport("user32.dll")] public static extern bool DestroyIcon(IntPtr icon);
        [DllImport("user32.dll", CharSet=CharSet.Unicode)] public static extern IntPtr FindWindow(string cls, string title);
        [DllImport("user32.dll")] public static extern bool SetForegroundWindow(IntPtr hwnd);
        [DllImport("user32.dll")] public static extern bool ShowWindow(IntPtr hwnd, int command);
        [DllImport("dwmapi.dll")] public static extern int DwmSetWindowAttribute(IntPtr hwnd, int attr, ref int value, int size);
    }

    // Update only our own keys; preserve comments, controller settings, and netplay fields.
    sealed class Ini
    {
        readonly List<string> lines;
        public Ini(string file) { lines = File.Exists(file) ? File.ReadAllLines(file).ToList() : new List<string>(); }
        static string Section(string text)
        { var t=text.Trim(); return t.StartsWith("[") && t.EndsWith("]") ? t.Substring(1,t.Length-2).Trim() : null; }
        public string Get(string section, string key, string fallback)
        {
            string current="";
            foreach (string line in lines)
            {
                string s=Section(line); if (s!=null) { current=s; continue; }
                int equal=line.IndexOf('=');
                if (current.Equals(section,StringComparison.OrdinalIgnoreCase) && equal>0 &&
                    line.Substring(0,equal).Trim().Equals(key,StringComparison.OrdinalIgnoreCase))
                    return line.Substring(equal+1).Trim();
            }
            return fallback;
        }
        public void Set(string section, string key, string value)
        {
            int start=-1, end=lines.Count;
            for (int i=0;i<lines.Count;i++)
            {
                string s=Section(lines[i]);
                if (s==null) continue;
                if (start>=0) { end=i; break; }
                if (s.Equals(section,StringComparison.OrdinalIgnoreCase)) start=i;
            }
            if (start<0) { if(lines.Count>0) lines.Add(""); lines.Add("["+section+"]"); lines.Add(key+"="+value); return; }
            for(int i=start+1;i<end;i++)
            {
                int equal=lines[i].IndexOf('=');
                if(equal>0 && lines[i].Substring(0,equal).Trim().Equals(key,StringComparison.OrdinalIgnoreCase))
                { lines[i]=key+"="+value; return; }
            }
            lines.Insert(end,key+"="+value);
        }
        public List<string> ReadSection(string section)
        {
            var result=new List<string>();bool inside=false;
            foreach(string line in lines)
            {
                string name=Section(line);
                if(name!=null){if(inside)break;inside=name.Equals(section,StringComparison.OrdinalIgnoreCase);continue;}
                if(inside)result.Add(line);
            }
            return result;
        }
        public void ReplaceSection(string section,IEnumerable<string> values)
        {
            int start=-1,end=lines.Count;
            for(int i=0;i<lines.Count;i++)
            {
                string name=Section(lines[i]);if(name==null)continue;
                if(start>=0){end=i;break;}
                if(name.Equals(section,StringComparison.OrdinalIgnoreCase))start=i;
            }
            if(start<0){if(lines.Count>0)lines.Add("");lines.Add("["+section+"]");lines.AddRange(values);}
            else {lines.RemoveRange(start+1,end-start-1);lines.InsertRange(start+1,values);}
        }
        public void Save(string file)
        {
            Directory.CreateDirectory(Path.GetDirectoryName(file));
            string temporary=file+"."+Guid.NewGuid().ToString("N")+".tmp";
            File.WriteAllLines(temporary,lines,new UTF8Encoding(false));
            try { if(File.Exists(file)) File.Replace(temporary,file,file+".launcher-backup"); else File.Move(temporary,file); }
            finally { if(File.Exists(temporary)) File.Delete(temporary); }
        }
    }

    sealed class Game
    {
        public readonly string Root;
        readonly string userDirectory,profileDirectory;
        public Game(string root,string userDirectory=null,string profileDirectory=null) { Root=Path.GetFullPath(root);this.userDirectory=userDirectory;this.profileDirectory=profileDirectory; }
        public string User { get { return userDirectory ?? new Ini(Path.Combine(Root,"installation.ini")).Get("Installation","UserDirectory",Path.Combine(Root,"native-port","runtime-user")); } }
        public string Config { get { return Path.Combine(User,"config.ini"); } }
        public string Runner { get { return Path.Combine(Root,"native-port","bin","moderngekko-run.exe"); } }
        public string Module { get { return Path.Combine(Root,"native-port","bin","gGXSE8P_recomp.dll"); } }
        public string Preferences { get { return Path.Combine(ProfileDirectory,"preferences.ini"); } }
        public string InputConfig { get { return Path.Combine(User,"Config","GCPadNew.ini"); } }
        public string ProfileDirectory { get { return profileDirectory ?? new Ini(Path.Combine(Root,"installation.ini")).Get("Installation","ProfileDirectory",Path.Combine(Root,"launcher")); } }
        public static bool IsRunning(Game game)
        {
            foreach(var process in Process.GetProcessesByName("moderngekko-run"))
            {
                using(process)try
                {
                    if(!process.HasExited && string.Equals(process.MainModule.FileName,game.Runner,StringComparison.OrdinalIgnoreCase))return true;
                }
                catch(System.ComponentModel.Win32Exception) { }
                catch(InvalidOperationException) { }
            }
            return false;
        }
        public string Missing()
        {
            foreach(string path in new[]{Runner,Module,Path.Combine(Root,"disc","sys","main.dol"),Path.Combine(Root,"disc","sys","boot.bin")})
                if(!File.Exists(path)) return "Missing "+Path.GetFileName(path)+". Run Setup to import your GameCube dump.";
            return null;
        }
        public void InitializeData()
        {
            if(!File.Exists(Path.Combine(Root,"installation.ini")))return;
            Directory.CreateDirectory(User);
            string defaults=Path.Combine(Root,"native-port","runtime-user","config.ini");
            if(!File.Exists(Config)&&File.Exists(defaults))File.Copy(defaults,Config,false);
        }
        static string Quote(string value) { return "\""+value+"\""; }
        public ProcessStartInfo StartInfo(bool fast, string automation, string customLevel=null,bool splitScreen=false)
        {
            var info=new ProcessStartInfo(Runner);
            info.WorkingDirectory=Path.GetDirectoryName(Runner);
            info.UseShellExecute=false; info.CreateNoWindow=true;
            info.RedirectStandardOutput=true; info.RedirectStandardError=true;
            info.Arguments="--game "+Quote(Path.Combine(Root,"disc"))+" --module "+Quote(Module)+
                " --user-dir "+Quote(User)+" --title \"Sonic Adventure DX\" --graphics Vulkan";
            if(automation!=null) info.Arguments+=" --headless --audio Null --automation-dir "+Quote(automation);
            if(customLevel!=null)info.Arguments+=" --custom-level "+Quote(customLevel);
            if(splitScreen)info.Arguments+=" --split-screen";
            info.EnvironmentVariables["MODERNGEKKO_STATICRECOMP"]=fast?"0":"1";
            // Diagnostics are opt-in for research, not extra work on every Play click.
            foreach(string key in new[]{"STATICRECOMP_TRACE_FILE","STATICRECOMP_DISPATCH_SAMPLES","SONIC_PAD_DIAGNOSTICS"})
                info.EnvironmentVariables.Remove(key);
            return info;
        }
    }

    sealed class ActionButton : Button
    {
        public string Subtitle="";
        public bool Selected;
        public bool Primary;
        public bool Quiet;
        public bool CloseButton;
        public float PixelScale=1;
        bool hover;
        public ActionButton(string text)
        {
            Text=text; AccessibleName=text; FlatStyle=FlatStyle.Flat;
            FlatAppearance.BorderSize=0; BackColor=Theme.Background;
            Cursor=Cursors.Hand; UseVisualStyleBackColor=false;
            SetStyle(ControlStyles.UserPaint|ControlStyles.AllPaintingInWmPaint|ControlStyles.OptimizedDoubleBuffer,true);
            MouseEnter+=delegate { hover=true; Invalidate(); }; MouseLeave+=delegate { hover=false; Invalidate(); };
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            var g=e.Graphics; g.SmoothingMode=SmoothingMode.AntiAlias;
            g.Clear(BackColor); var r=new RectangleF(1,1,Width-3,Height-3);
            Color fill=Primary ? Theme.Gold : (Selected ? Color.FromArgb(25,43,67) : Theme.Panel);
            if(Quiet) fill=Theme.Background;
            if(hover && Enabled) fill=Primary ? Color.FromArgb(255,225,110) : Color.FromArgb(31,48,72);
            if(CloseButton && hover) fill=Color.FromArgb(125,39,55);
            if(!Enabled) fill=Theme.Panel;
            using(var p=Theme.Rounded(r,10*PixelScale)) using(var b=new SolidBrush(fill)) g.FillPath(b,p);
            if(!Quiet || Focused)
            using(var p=Theme.Rounded(r,10*PixelScale)) using(var pen=new Pen(Selected || Focused ? Theme.Gold : Theme.Border,PixelScale))
                g.DrawPath(pen,p);
            Color ink=Primary && Enabled ? Theme.Background : (Enabled ? Theme.Ink : Theme.Muted);
            if(Subtitle.Length>0)
            {
                Theme.Text(g,Text,16*PixelScale,ink,new RectangleF(18*PixelScale,7*PixelScale,Width-36*PixelScale,27*PixelScale),FontStyle.Bold);
                Theme.Text(g,Subtitle,11*PixelScale,Theme.Muted,new RectangleF(18*PixelScale,33*PixelScale,Width-36*PixelScale,20*PixelScale));
                if(Selected) using(var b=new SolidBrush(Theme.Gold)) g.FillEllipse(b,Width-27*PixelScale,17*PixelScale,7*PixelScale,7*PixelScale);
            }
            else Theme.Text(g,Text,(Primary?20:13)*PixelScale,ink,r,Primary?FontStyle.Bold:FontStyle.Regular,true);
        }
    }

    class DarkForm : Form
    {
        protected float S=1;
        protected int DesignWidth, DesignHeight;
        public DarkForm(string title, int width, int height, bool preview)
        {
            Text=title; DesignWidth=width; DesignHeight=height;
            if(!preview) using(var g=Graphics.FromHwnd(IntPtr.Zero)) S=Math.Max(1,g.DpiX/96);
            if(!preview) S=Math.Min(S,Math.Min((Screen.PrimaryScreen.WorkingArea.Width-32f)/width,
                                             (Screen.PrimaryScreen.WorkingArea.Height-32f)/height));
            AutoScaleMode=AutoScaleMode.None; BackColor=Theme.Background; ForeColor=Theme.Ink;
            FormBorderStyle=FormBorderStyle.None; StartPosition=FormStartPosition.CenterScreen;
            ClientSize=new Size((int)(width*S),(int)(height*S)); DoubleBuffered=true;
            Icon=Theme.MakeIcon(); KeyPreview=true;
        }
        protected override void OnHandleCreated(EventArgs e)
        {
            base.OnHandleCreated(e);
            try { int corner=2, dark=1; Native.DwmSetWindowAttribute(Handle,33,ref corner,4); Native.DwmSetWindowAttribute(Handle,20,ref dark,4); }
            catch(DllNotFoundException) { }
        }
        protected ActionButton ButtonAt(string text, int x,int y,int w,int h, EventHandler click)
        {
            var button=new ActionButton(text); button.PixelScale=S;
            button.Bounds=new Rectangle((int)(x*S),(int)(y*S),(int)(w*S),(int)(h*S));
            if(click!=null) button.Click+=click; Controls.Add(button); return button;
        }
        protected override void OnMouseDown(MouseEventArgs e)
        {
            base.OnMouseDown(e);
            if(e.Button==MouseButtons.Left && e.Y<48*S) { Native.ReleaseCapture(); Native.SendMessage(Handle,0xA1,new IntPtr(2),IntPtr.Zero); }
        }
        public void Render(string file)
        {
            CreateControl(); var unused=Handle; foreach(Control c in Controls) { var handle=c.Handle; } PerformLayout();
            using(var bitmap=new Bitmap(ClientSize.Width,ClientSize.Height))
            {
                DrawToBitmap(bitmap,new Rectangle(Point.Empty,ClientSize));
                // Hidden preview windows don't composite their child HWNDs.
                // Render each actual button through its normal paint path.
                using(var g=Graphics.FromImage(bitmap))foreach(Control c in Controls)
                using(var child=new Bitmap(c.Width,c.Height))
                {c.DrawToBitmap(child,new Rectangle(Point.Empty,c.Size));g.DrawImageUnscaled(child,c.Location);
                 var number=c as NumericUpDown;if(number!=null){using(var b=new SolidBrush(number.BackColor))g.FillRectangle(b,c.Left+3,c.Top+3,c.Width-24,c.Height-6);using(var b=new SolidBrush(number.Enabled?number.ForeColor:Theme.Muted))g.DrawString(number.Value.ToString("F"+number.DecimalPlaces),number.Font,b,c.Left+4,c.Top+3);}
                 var combo=c as ComboBox;if(combo!=null){using(var b=new SolidBrush(combo.BackColor))g.FillRectangle(b,c.Left+3,c.Top+3,c.Width-23,c.Height-6);using(var b=new SolidBrush(combo.Enabled?combo.ForeColor:Theme.Muted))g.DrawString(combo.Text,combo.Font,b,c.Left+6,c.Top+3);}}
                bitmap.Save(file,ImageFormat.Png);
            }
        }
    }

    sealed class SettingsForm : DarkForm
    {
        readonly Game game; readonly ActionButton[] quality;
        readonly ActionButton fullscreen, fps, wide, dash;
        int selected; bool isFullscreen, showFps, isWide, instantDash;
        public SettingsForm(Game game,bool preview) : base("Sonic Adventure DX | Settings",560,447,preview)
        {
            this.game=game; var ini=new Ini(game.Config);
            string resolution=ini.Get("Video","resolution","1920x1080");
            selected=resolution=="640x528"?0:resolution=="1280x720"?1:2;
            isFullscreen=ini.Get("Video","fullscreen","false")=="true";
            showFps=ini.Get("Video","show_fps_in_title","true")=="true";
            isWide=ini.Get("Video","widescreen","false")=="true";
            instantDash=ini.Get("Gameplay","instant_light_dash","false")=="true";
            quality=new ActionButton[3];
            string[] names={"1x  Original","2x  Balanced","3x  High"};
            for(int i=0;i<3;i++) { int index=i; quality[i]=ButtonAt(names[i],24+i*174,112,164,42,delegate{selected=index;RefreshChoices();}); }
            fullscreen=ButtonAt("",24,205,250,42,delegate{isFullscreen=!isFullscreen;RefreshChoices();});
            fps=ButtonAt("",286,205,250,42,delegate{showFps=!showFps;RefreshChoices();});
            wide=ButtonAt("",24,265,250,62,delegate{isWide=!isWide;RefreshChoices();});
            wide.Subtitle="16:9 field of view";
            dash=ButtonAt("",286,265,250,62,delegate{instantDash=!instantDash;RefreshChoices();});
            dash.Subtitle="Y button / keyboard S";
            ButtonAt("Cancel",24,378,120,43,delegate{DialogResult=DialogResult.Cancel;Close();});
            var save=ButtonAt("Save settings",154,378,382,43,delegate
            {
                try { var current=new Ini(game.Config); current.Set("Video","resolution",new[]{"640x528","1280x720","1920x1080"}[selected]);
                    current.Set("Video","fullscreen",isFullscreen?"true":"false");
                    current.Set("Video","show_fps_in_title",showFps?"true":"false");
                    current.Set("Video","widescreen",isWide?"true":"false");
                    current.Set("Gameplay","instant_light_dash",instantDash?"true":"false");current.Save(game.Config);
                    DialogResult=DialogResult.OK;Close(); }
                catch(Exception ex) { MessageBox.Show(this,ex.Message,"Couldn't save settings",MessageBoxButtons.OK,MessageBoxIcon.Error); }
            }); save.Primary=true; AcceptButton=save;
            RefreshChoices();
        }
        void RefreshChoices()
        {
            for(int i=0;i<quality.Length;i++){quality[i].Selected=i==selected;quality[i].Invalidate();}
            fullscreen.Text="Fullscreen  "+(isFullscreen?"ON":"OFF"); fullscreen.Selected=isFullscreen; fullscreen.Invalidate();
            fps.Text="Frame rate  "+(showFps?"ON":"OFF"); fps.Selected=showFps; fps.Invalidate();
            wide.Text="Widescreen  "+(isWide?"ON":"OFF");wide.Selected=isWide;wide.Invalidate();
            dash.Text="Instant Light Dash  "+(instantDash?"ON":"OFF");dash.Selected=instantDash;dash.Invalidate();
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e); var g=e.Graphics; g.ScaleTransform(S,S);
            Theme.Text(g,"MAKE IT YOURS",23,Theme.Ink,new RectangleF(24,22,382,38),FontStyle.Bold);
            Theme.Text(g,"IMAGE QUALITY",10,Theme.Muted,new RectangleF(24,80,382,20),FontStyle.Bold);
            Theme.Text(g,"Higher quality uses more graphics power.",11,Theme.Muted,new RectangleF(24,163,512,22));
            Theme.Text(g,"Dash follows nearby rings using the original game action.",11,Theme.Muted,new RectangleF(24,339,512,24));
        }
        protected override void OnKeyDown(KeyEventArgs e) { base.OnKeyDown(e); if(e.KeyCode==Keys.Escape) Close(); }
    }

    sealed class LauncherForm : DarkForm
    {
        public const string WindowTitle="Sonic Adventure DX | Launcher";
        readonly Game game; readonly ActionButton fast,native,play,settings,input,levels,multiplayer;
        readonly System.Windows.Forms.Timer timer;
        bool fastMode=true, hiddenUntilExit;
        string levelFailure;
        Process running; StreamWriter log; string logPath;
        MultiplayerProfileScope multiplayerProfiles;
        readonly object logLock=new object();
        string status="Ready for adventure";
        public LauncherForm(Game game,bool preview) : base(WindowTitle,840,607,preview)
        {
            this.game=game;if(!preview){game.InitializeData();try{MultiplayerProfileScope.Recover(game);}catch(Exception ex){MessageBox.Show(this,ex.Message,"Controller recovery",MessageBoxButtons.OK,MessageBoxIcon.Warning);}}fastMode=new Ini(game.Preferences).Get("Launcher","mode","fast")!="native";
            var min=ButtonAt("\u2013",752,9,30,30,delegate{WindowState=FormWindowState.Minimized;});min.Quiet=true;min.TabStop=false;min.AccessibleName="Minimize";
            var close=ButtonAt("\u00d7",788,9,30,30,delegate{Close();});close.Quiet=true;close.CloseButton=true;close.AccessibleName="Close";
            fast=ButtonAt("Fast",24,297,390,64,delegate{SetMode(true);});fast.Subtitle="Smooth gameplay  \u00b7  Recommended";
            native=ButtonAt("Native",426,297,390,64,delegate{SetMode(false);});native.Subtitle="Native DOL + module fallback";
            play=ButtonAt("PLAY  \u2192",24,378,590,66,delegate{Launch();});play.Primary=true;
            settings=ButtonAt("Settings",626,378,190,66,delegate{using(var dialog=new SettingsForm(game,false)) dialog.ShowDialog(this);});
            input=ButtonAt("Controls",24,459,183,32,delegate{using(var dialog=new InputForm(game,false)) dialog.ShowDialog(this);});input.Quiet=true;
            ButtonAt("Saves folder",221,459,137,32,delegate{OpenFolder(Path.Combine(game.User,"GC"));}).Quiet=true;
            ButtonAt("Game logs",372,459,124,32,delegate{OpenFolder(Path.Combine(game.User,"Logs"));}).Quiet=true;
            levels=ButtonAt("Custom levels + Creator",570,459,246,32,delegate{using(var dialog=new LevelsForm(game,false))if(dialog.ShowDialog(this)==DialogResult.OK)Launch(dialog.SelectedLevel);});
            multiplayer=ButtonAt("Multiplayer",24,503,792,56,delegate{using(var dialog=new MultiplayerForm(game,false))dialog.ShowDialog(this);UpdateMode();});
            AcceptButton=play; UpdateMode();
            string missing=game.Missing(); if(missing!=null) {status=missing; play.Enabled=false;}
            timer=new System.Windows.Forms.Timer(); timer.Interval=250;timer.Tick+=delegate{CheckGame();};timer.Start();
            Shown+=delegate{play.Focus();};
        }
        void UpdateMode() {var mode=MultiplayerOptions.Load(game);fast.Selected=fastMode||mode.Enabled;native.Selected=!fastMode&&!mode.Enabled;native.Enabled=running==null&&!mode.Enabled;fast.Subtitle=mode.Enabled?"Split screen uses Fast gameplay":"Smooth gameplay  \u00b7  Recommended";native.Subtitle=mode.Enabled?"Choose Single player to use Native":"Native DOL + module fallback";fast.Invalidate();native.Invalidate();multiplayer.Selected=mode.Enabled;multiplayer.Subtitle=mode.Enabled?"2 players | two Xbox controllers | top / bottom screens":"Single player | choose two-player split screen here";multiplayer.Invalidate();Invalidate(); }
        void SetMode(bool value)
        {
            fastMode=value;UpdateMode();
            try {var ini=new Ini(game.Preferences);ini.Set("Launcher","mode",value?"fast":"native");ini.Save(game.Preferences);}
            catch(Exception ex){status="Mode selected. Couldn't save preference: "+ex.Message;Invalidate();}
        }
        void OpenFolder(string folder)
        {
            try {Directory.CreateDirectory(folder);Process.Start(new ProcessStartInfo(folder){UseShellExecute=true});}
            catch(Exception ex){MessageBox.Show(this,ex.Message,"Couldn't open folder",MessageBoxButtons.OK,MessageBoxIcon.Error);}
        }
        void AppendLog(object sender,DataReceivedEventArgs e)
        {if(e.Data==null)return; lock(logLock) {if(e.Data.StartsWith("[levels] failed:"))levelFailure=e.Data.Substring(16).Trim();if(e.Data.StartsWith("[multiplayer] failed:"))levelFailure=e.Data.Substring(21).Trim();if(log!=null){log.WriteLine(e.Data);log.Flush();}}}
        void Launch(LevelDocument customLevel=null)
        {
            if(running!=null)return;
            string missing=game.Missing(); if(missing!=null){status=missing;Invalidate();return;}
            foreach(var process in Process.GetProcessesByName("moderngekko-run"))
            {
                using(process) try { if(!process.HasExited && string.Equals(process.MainModule.FileName,game.Runner,StringComparison.OrdinalIgnoreCase))
                    {MessageBox.Show(this,"The game is already running. Switch to its window to continue.","Sonic Adventure DX");return;} }
                catch(System.ComponentModel.Win32Exception) { }
                catch(InvalidOperationException) { }
            }
            try
            {
                levelFailure=null;var inputOptions=InputProfiles.PrepareLaunch(game);
                var multiplayerOptions=MultiplayerOptions.Load(game);bool sessionFast=fastMode||multiplayerOptions.Enabled;
                string dir=Path.Combine(game.User,"Logs");Directory.CreateDirectory(dir);
                logPath=Path.Combine(dir,"launcher-"+DateTime.Now.ToString("yyyyMMdd-HHmmss-fff")+".log");
                log=new StreamWriter(logPath,false,new UTF8Encoding(false));
                log.WriteLine("Sonic Adventure DX launcher | "+(sessionFast?"Fast":"Native")+" | "+DateTime.Now.ToString("O"));log.Flush();
                log.WriteLine("Input: "+(inputOptions.Controller?Xbox.Device(inputOptions.Slot):"Keyboard"));
                var sessionGame=customLevel==null?game:LevelFiles.PlayGame(game);
                if(multiplayerOptions.Enabled)
                {
                    var connected=new List<int>();for(int i=0;i<4;i++){Xbox.State pad;if(Xbox.Read(i,out pad))connected.Add(i);}
                    multiplayerProfiles=new MultiplayerProfileScope(sessionGame,multiplayerOptions,connected);
                    log.WriteLine("Split screen: player 1 = "+Xbox.Device(multiplayerProfiles.Slots[0])+", player 2 = "+Xbox.Device(multiplayerProfiles.Slots[1]));
                }
                string levelFile=customLevel==null?null:LevelFiles.Binary(game,customLevel);
                if(customLevel!=null)log.WriteLine("Custom level: "+customLevel.Name+" | "+customLevel.Id);
                running=new Process();running.StartInfo=sessionGame.StartInfo(sessionFast,null,levelFile,multiplayerOptions.Enabled);
                running.OutputDataReceived+=AppendLog;running.ErrorDataReceived+=AppendLog;
                if(!running.Start())throw new IOException("The game process did not start.");
                running.BeginOutputReadLine();running.BeginErrorReadLine();
                play.Text="IN GAME";play.Enabled=false;fast.Enabled=false;native.Enabled=false;settings.Enabled=false;input.Enabled=false;levels.Enabled=false;multiplayer.Enabled=false;
                status="Adventure in progress";Invalidate();WindowState=FormWindowState.Minimized;
            }
            catch(Exception ex)
            {
                if(running!=null){try{if(!running.HasExited){running.Kill();running.WaitForExit();}}catch(InvalidOperationException){}running.Dispose();running=null;}CloseLog();RestoreProfiles();
                status="Couldn't start the game";Invalidate();
                MessageBox.Show(this,ex.Message,"Sonic Adventure DX",MessageBoxButtons.OK,MessageBoxIcon.Error);
            }
        }
        void CloseLog(){lock(logLock){if(log!=null){log.Dispose();log=null;}}}
        void RestoreProfiles(){if(multiplayerProfiles==null)return;var scope=multiplayerProfiles;multiplayerProfiles=null;try{scope.Dispose();}catch(Exception ex){MessageBox.Show(this,"The game closed, but controller settings could not be restored: "+ex.Message,"Controller settings",MessageBoxButtons.OK,MessageBoxIcon.Warning);}}
        void CheckGame()
        {
            if(running==null || !running.HasExited)return;
            running.WaitForExit();int code=running.ExitCode;running.Dispose();running=null;CloseLog();RestoreProfiles();
            if(hiddenUntilExit){Close();return;}
            play.Text="PLAY  \u2192";play.Enabled=true;fast.Enabled=true;native.Enabled=true;settings.Enabled=true;input.Enabled=true;levels.Enabled=true;multiplayer.Enabled=true;
            status=levelFailure!=null?"Game session failed. Check Game logs.":code==0?"Ready for another adventure":"Game closed unexpectedly. Check Game logs.";
            WindowState=FormWindowState.Normal;Show();Activate();Invalidate();
            UpdateMode();
            if(levelFailure!=null)MessageBox.Show(this,levelFailure,"Game session could not start",MessageBoxButtons.OK,MessageBoxIcon.Warning);
        }
        protected override void OnFormClosing(FormClosingEventArgs e)
        {
            if(running!=null && !running.HasExited && e.CloseReason==CloseReason.UserClosing)
            {hiddenUntilExit=true;e.Cancel=true;Hide();return;}
            timer.Stop();CloseLog();base.OnFormClosing(e);
        }
        protected override void OnVisibleChanged(EventArgs e)
        {base.OnVisibleChanged(e);if(Visible)hiddenUntilExit=false;}
        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);var g=e.Graphics;g.SmoothingMode=SmoothingMode.AntiAlias;g.ScaleTransform(S,S);
            Theme.Ring(g,new RectangleF(27,18,14,17),3);
            Theme.Text(g,"SONIC ADVENTURE DX",11,Theme.Muted,new RectangleF(54,9,330,33),FontStyle.Bold);
            var hero=new RectangleF(18,56,804,220);
            using(var shape=Theme.Rounded(hero,16))
            {
                g.SetClip(shape);
                using(var gradient=new LinearGradientBrush(hero,Color.FromArgb(14,41,89),Color.FromArgb(14,85,206),13))g.FillPath(gradient,shape);
                // Vector artwork: orbiting rings, speed lines and a blue checkerboard.
                using(var brush=new SolidBrush(Color.FromArgb(19,100,168,255)))
                for(int x=440;x<850;x+=26)for(int y=60;y<285;y+=26)if((x/26+y/26)%2==0)g.FillRectangle(brush,x,y,25,25);
                using(var pen=new Pen(Color.FromArgb(40,150,200,255),2))
                for(int i=0;i<7;i++)g.DrawLine(pen,400+i*23,280,635+i*23,44);
                using(var pen=new Pen(Color.FromArgb(40,200,224,255),1))g.DrawEllipse(pen,518,24,278,278);
                Theme.Ring(g,new RectangleF(560,87,139,143),16);
                Theme.Ring(g,new RectangleF(705,190,82,84),10);
                using(var pen=new Pen(Color.FromArgb(210,255,247,217),2))
                {g.DrawLine(pen,701,83,701,101);g.DrawLine(pen,692,92,710,92);}
                g.ResetClip();
            }
            Theme.Text(g,"SONIC",57,Theme.Ink,new RectangleF(42,69,390,73),FontStyle.Bold|FontStyle.Italic);
            Theme.Text(g,"ADVENTURE",36,Theme.Ink,new RectangleF(41,132,407,55),FontStyle.Bold|FontStyle.Italic);
            using(var p=Theme.Rounded(new RectangleF(44,193,46,27),5))using(var b=new SolidBrush(Theme.Gold))g.FillPath(b,p);
            Theme.Text(g,"DX",17,Theme.Background,new RectangleF(44,193,46,27),FontStyle.Bold,true);
            Theme.Text(g,"DIRECTOR'S CUT",10,Theme.Gold,new RectangleF(104,193,271,27),FontStyle.Bold);
            Theme.Text(g,"Your next adventure starts here.",12,Color.FromArgb(198,219,250),new RectangleF(44,233,427,24));
            Theme.Text(g,"CHOOSE YOUR PACE",10,Theme.Muted,new RectangleF(24,274,650,19),FontStyle.Bold);
            using(var pen=new Pen(Theme.Border))g.DrawLine(pen,24,577,816,577);
            using(var b=new SolidBrush(game.Missing()==null?Color.FromArgb(90,221,161):Theme.Gold))g.FillEllipse(b,25,590,5,5);
            Theme.Text(g,status,10,Theme.Muted,new RectangleF(40,582,538,22));
            var options=InputOptions.Load(game);
            bool split=MultiplayerOptions.Load(game).Enabled;Theme.Text(g,(split?"2 PLAYERS":options.Controller?"XBOX":"KEYBOARD")+"  /  "+(fastMode||split?"FAST":"NATIVE"),10,Theme.Muted,new RectangleF(620,582,196,22),FontStyle.Bold);
        }
    }

    static class Program
    {
        [STAThread] static int Main(string[] args)
        {
            Application.EnableVisualStyles();Application.SetCompatibleTextRenderingDefault(false);
            string root=Path.GetDirectoryName(Application.ExecutablePath);
            // Build/test commands may run from a temporary directory.
            if(args.Length>=2 && args[0]=="--root"){root=args[1];args=args.Skip(2).ToArray();}
            var game=new Game(root);
            if(args.Length==2&&args[0]=="--editor-preview"){using(var f=new LevelEditorForm(game,LevelDocument.Starter(),true))f.Render(args[1]);return 0;}
            if(args.Length==2&&args[0]=="--levels-preview"){using(var f=new LevelsForm(game,true))f.Render(args[1]);return 0;}
            if(args.Length==2&&args[0]=="--multiplayer-preview"){using(var f=new MultiplayerForm(game,true))f.Render(args[1]);return 0;}
            if(args.Length==2&&args[0]=="--sample-level"){LevelFiles.Export(LevelDocument.Starter(),args[1]);return 0;}
            if(args.Length==3&&args[0]=="--compile-level"){var d=LevelFiles.Read(args[1]);var g=new Game(root,Path.GetDirectoryName(Path.GetFullPath(args[2])));string p=LevelFiles.Binary(g,d);File.Copy(p,args[2],true);return 0;}
            if(args.Length==2 && args[0]=="--write-icon")
            {using(var icon=Theme.MakeIcon())using(var file=File.Create(args[1]))icon.Save(file);return 0;}
            if(args.Length==2 && args[0]=="--preview")
            {
                Directory.CreateDirectory(args[1]);
                using(var form=new LauncherForm(game,true))form.Render(Path.Combine(args[1],"launcher.png"));
                using(var form=new SettingsForm(game,true))form.Render(Path.Combine(args[1],"settings.png"));
                using(var form=new InputForm(game,true))form.Render(Path.Combine(args[1],"controls.png"));return 0;
            }
            if(args.Length==2 && args[0]=="--controller-smoke-test")return ControllerSmokeTest(game,args[1]);
            if(args.Length==2 && args[0]=="--controller-status")return ControllerStatus(args[1]);
            if(args.Length==2 && args[0]=="--controller-test")return ControllerTest(game,args[1]);
            if(args.Length==2 && args[0]=="--multiplayer-test")return MultiplayerChecks.Run(game,args[1]);
            if(args.Length==2 && args[0]=="--self-test")return SelfTest(game,args[1]);
            if(args.Length==2 && args[0]=="--smoke-test")return SmokeTest(game,args[1]);
            string identity;
            using(var sha=SHA256.Create())identity=BitConverter.ToString(sha.ComputeHash(Encoding.UTF8.GetBytes(root.ToUpperInvariant()))).Replace("-","");
            bool created;
            using(var mutex=new Mutex(true,"Local\\SonicAdventureLauncher-"+identity,out created))
            {
                if(!created){IntPtr window=Native.FindWindow(null,LauncherForm.WindowTitle);if(window!=IntPtr.Zero){Native.ShowWindow(window,9);Native.SetForegroundWindow(window);}return 0;}
                try{using(var form=new LauncherForm(game,false))Application.Run(form);}finally{mutex.ReleaseMutex();}
            }
            return 0;
        }
        static int SelfTest(Game game,string output)
        {
            Directory.CreateDirectory(output);string file=Path.Combine(output,"fixture.ini");
            File.WriteAllText(file,"# keep comment\n[Video]\nresolution=1920x1080\nfullscreen=false\n[Input]\ncontroller=keyboard\n[Netplay]\nnickname=Player\n");
            var ini=new Ini(file);ini.Set("Video","resolution","1280x720");ini.Set("Video","fullscreen","true");ini.Set("Video","show_fps_in_title","false");ini.Set("Video","widescreen","true");ini.Set("Gameplay","instant_light_dash","true");ini.Save(file);
            var read=new Ini(file);var fast=game.StartInfo(true,null);var native=game.StartInfo(false,null);
            bool ok=read.Get("Video","widescreen","")=="true" && read.Get("Gameplay","instant_light_dash","")=="true" && read.Get("Video","resolution","")=="1280x720" && read.Get("Video","fullscreen","")=="true" &&
                read.Get("Input","controller","")=="keyboard" && read.Get("Netplay","nickname","")=="Player" &&
                File.ReadAllText(file).Contains("# keep comment") && fast.EnvironmentVariables["MODERNGEKKO_STATICRECOMP"]=="0" &&
                native.EnvironmentVariables["MODERNGEKKO_STATICRECOMP"]=="1" && fast.Arguments.Contains("--user-dir") && game.Missing()==null;
            File.WriteAllText(Path.Combine(output,"self-test.json"),"{\"passed\":"+(ok?"true":"false")+",\"checks\":10}\n");return ok?0:1;
        }
        static int ControllerSmokeTest(Game game,string output)
        {
            output=Path.GetFullPath(output);if(Directory.Exists(output))return 2;
            var fixture=new Game(game.Root,Path.Combine(output,"runtime-user"),Path.Combine(output,"launcher"));
            Directory.CreateDirectory(Path.GetDirectoryName(fixture.InputConfig));
            foreach(string name in new[]{"Dolphin.ini","GFX.ini"})
            {
                string original=Path.Combine(game.User,"Config",name);
                if(File.Exists(original))File.Copy(original,Path.Combine(fixture.User,"Config",name));
            }
            if(File.Exists(game.Config))File.Copy(game.Config,fixture.Config);
            if(File.Exists(game.InputConfig))File.Copy(game.InputConfig,fixture.InputConfig);
            var options=new InputOptions{Controller=true,Slot=Math.Max(0,Xbox.FirstConnected())};
            InputProfiles.Apply(fixture,options);
            ControllerStatus(Path.Combine(output,"controller-status.json"));
            return SmokeTest(fixture,Path.Combine(output,"boot"));
        }
        static int ControllerStatus(string output)
        {
            Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(output)));
            var slots=new List<string>();
            for(int i=0;i<4;i++)
            {
                Xbox.State state;bool connected=Xbox.Read(i,out state);
                slots.Add("{\"slot\":"+(i+1)+",\"device\":\""+Xbox.Device(i)+"\",\"connected\":"+(connected?"true":"false")+
                    ",\"buttons\":"+state.Gamepad.Buttons+",\"packet\":"+state.Packet+"}");
            }
            File.WriteAllText(output,"{\"controllers\":["+string.Join(",",slots)+"]}\n");return 0;
        }
        static int ControllerTest(Game game,string output)
        {
            output=Path.GetFullPath(output);
            if(Directory.Exists(output))return 2;
            var fixture=new Game(game.Root,Path.Combine(output,"runtime-user"),Path.Combine(output,"launcher"));
            Directory.CreateDirectory(Path.GetDirectoryName(fixture.InputConfig));
            File.WriteAllText(fixture.InputConfig,"# preserve outside section\n[GCPad1]\nDevice = DInput/0/Keyboard Mouse\n# custom keyboard\nButtons/A = `SPACE`\nButtons/B = `Z`\nMain Stick/Up = `UP`\n[ GCPad2 ]\nDevice = DInput/1/Custom\nButtons/A = `CUSTOM`\n");
            File.WriteAllText(fixture.Config,"[Video]\nfullscreen=true\nresolution=1920x1080\n[Netplay]\nnickname=Player\n");
            string[] keyboard=new Ini(fixture.InputConfig).ReadSection("GCPad1").ToArray();
            var checks=new Dictionary<string,bool>();
            var xbox=new InputOptions {Controller=true,Slot=2,Deadzone=20,Rumble=true};
            InputProfiles.Apply(fixture,xbox);
            var read=new Ini(fixture.InputConfig);
            checks["slot_3_device"]=read.Get("GCPad1","Device","")==Xbox.Device(2);
            checks["face_buttons"]=read.Get("GCPad1","Buttons/A","")=="`Button A`" && read.Get("GCPad1","Buttons/B","")=="`Button B`";
            checks["both_sticks"]=read.Get("GCPad1","Main Stick/Right","")=="`Left X+`" && read.Get("GCPad1","C-Stick/Down","")=="`Right Y-`";
            checks["analog_and_digital_triggers"]=read.Get("GCPad1","Triggers/L-Analog","")=="`Trigger L`" && read.Get("GCPad1","Triggers/R","")=="`Trigger R`";
            checks["deadzone"]=read.Get("GCPad1","Main Stick/Dead Zone","")=="20" && read.Get("GCPad1","C-Stick/Dead Zone","")=="20";
            checks["rumble"]=read.Get("GCPad1","Rumble/Motor","").Contains("Motor R");
            checks["other_port_preserved"]=read.Get("GCPad2","Buttons/A","")=="`CUSTOM`";
            checks["fullscreen_and_netplay_preserved"]=new Ini(fixture.Config).Get("Video","fullscreen","")=="true" && new Ini(fixture.Config).Get("Netplay","nickname","")=="Player";
            var saved=InputOptions.Load(fixture);
            checks["choice_persists"]=saved.Controller && saved.Slot==2 && saved.Deadzone==20;
            xbox.Slot=3;xbox.Rumble=false;InputProfiles.Apply(fixture,xbox);
            checks["switch_slot_and_rumble_off"]=new Ini(fixture.InputConfig).Get("GCPad1","Device","")==Xbox.Device(3) && new Ini(fixture.InputConfig).Get("GCPad1","Rumble/Motor","missing")=="";
            var changed=new Ini(fixture.InputConfig);changed.Set("GCPad2","Buttons/B","`NEW`");changed.Save(fixture.InputConfig);
            InputProfiles.Apply(fixture,new InputOptions());
            read=new Ini(fixture.InputConfig);
            checks["custom_keyboard_restored"]=read.ReadSection("GCPad1").SequenceEqual(keyboard);
            checks["later_changes_to_other_port_preserved"]=read.Get("GCPad2","Buttons/B","")=="`NEW`";
            checks["keyboard_mode_restored"]=!InputOptions.Load(fixture).Controller && new Ini(fixture.Config).Get("Input","controller","")=="keyboard";
            var synthetic=new Xbox.Pad { Buttons=0x3010,LeftTrigger=255,RightX=32767 };
            checks["input_test_button_labels"]=Xbox.Pressed(synthetic)=="Start  +  A  +  B  +  LT";
            checks["native_state_layout"]=Marshal.SizeOf(typeof(Xbox.Pad))==12 && Marshal.SizeOf(typeof(Xbox.State))==16;
            bool ok=checks.Values.All(v=>v);
            File.WriteAllText(Path.Combine(output,"controller-test.json"),"{\"passed\":"+(ok?"true":"false")+
                ",\"checks\":{"+string.Join(",",checks.Select(pair=>"\""+pair.Key+"\":"+(pair.Value?"true":"false")))+"}}\n");
            return ok?0:1;
        }
        static Dictionary<string,string> Status(string file)
        {
            var values=new Dictionary<string,string>();
            try{foreach(string line in File.ReadAllLines(file)){int equal=line.IndexOf('=');if(equal>0)values[line.Substring(0,equal)]=line.Substring(equal+1);}}
            catch(IOException){}return values;
        }
        static int SmokeTest(Game game,string output)
        {
            output=Path.GetFullPath(output);if(Directory.Exists(output))return 2;
            Directory.CreateDirectory(Path.Combine(output,"commands"));
            var log=new StringBuilder(); object sync=new object(); int sequence=0;
            using(var proc=new Process())
            {
                proc.StartInfo=game.StartInfo(true,output);
                DataReceivedEventHandler handler=delegate(object sender,DataReceivedEventArgs e){if(e.Data!=null)lock(sync)log.AppendLine(e.Data);};
                proc.OutputDataReceived+=handler;proc.ErrorDataReceived+=handler;
                var watch=Stopwatch.StartNew();proc.Start();proc.BeginOutputReadLine();proc.BeginErrorReadLine();
                Action<Func<bool>> wait=delegate(Func<bool> condition)
                {var limit=Stopwatch.StartNew();while(!condition()){if(proc.HasExited)throw new Exception("Game exited early.");if(limit.Elapsed.TotalSeconds>60)throw new TimeoutException();Thread.Sleep(25);}};
                Action<string> command=delegate(string fields)
                {
                    string name=(++sequence).ToString("D4")+".txt";
                    string file=Path.Combine(output,"commands",name);File.WriteAllText(file+".pending",fields+"\n");File.Move(file+".pending",file);
                    wait(delegate{return File.Exists(Path.Combine(output,"processed",name)) || File.Exists(Path.Combine(output,"failed",name));});
                    if(File.Exists(Path.Combine(output,"failed",name)))throw new Exception("Command failed: "+fields);
                };
                try
                {
                    wait(delegate{var s=Status(Path.Combine(output,"status.txt"));return s.ContainsKey("booted")&&s["booted"]=="1";});
                    long boot=watch.ElapsedMilliseconds;
                    command("command=pad_frames\nport=0\nframes=60");
                    command("command=screenshot\npath="+Path.Combine(output,"game.png"));
                    command("command=pad_frames\nport=0\nframes=3");command("command=stop");
                    if(!proc.WaitForExit(30000))throw new TimeoutException();proc.WaitForExit();
                    File.WriteAllText(Path.Combine(output,"smoke-test.json"),"{\"exit_code\":"+proc.ExitCode+",\"booted_ms\":"+boot+",\"mode\":\"fast\",\"same_launch_configuration\":true}\n");
                    return proc.ExitCode;
                }
                catch(Exception ex)
                {
                    try{if(!proc.HasExited){command("command=stop");proc.WaitForExit(10000);}}catch(Exception){}
                    File.WriteAllText(Path.Combine(output,"failure.txt"),ex.ToString());return 1;
                }
                finally{lock(sync)File.WriteAllText(Path.Combine(output,"runtime.log"),log.ToString());}
            }
        }
    }
}
