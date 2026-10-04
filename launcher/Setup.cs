// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.Diagnostics;
using System.Drawing;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Reflection;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace SonicLauncher {
static class SetupService {
public static void Extract(Stream input,string destination,Action<int,string> progress,CancellationToken cancel) {
string prefix=Path.GetFullPath(destination).TrimEnd(Path.DirectorySeparatorChar)+Path.DirectorySeparatorChar;
using(var archive=new ZipArchive(input,ZipArchiveMode.Read)) {
int index=0;
foreach(var entry in archive.Entries) {
cancel.ThrowIfCancellationRequested();
string path=Path.GetFullPath(Path.Combine(destination,entry.FullName.Replace('/',Path.DirectorySeparatorChar)));
if(!path.StartsWith(prefix,StringComparison.OrdinalIgnoreCase))throw new InvalidDataException("Unsafe installer entry.");
if(entry.FullName.EndsWith("/"))Directory.CreateDirectory(path);
else {Directory.CreateDirectory(Path.GetDirectoryName(path));using(var source=entry.Open())using(var file=new FileStream(path,FileMode.CreateNew,FileAccess.Write))source.CopyTo(file);}
progress(++index*10/archive.Entries.Count,"Installing ModernGekko and the included tools...");
}
}
}
public static void Install(string target,string rom,Action<int,string> progress,CancellationToken cancel) {
target=Path.GetFullPath(target).TrimEnd(Path.DirectorySeparatorChar);string parent=Path.GetDirectoryName(target);
if(string.IsNullOrEmpty(parent)||target==Path.GetPathRoot(target))throw new IOException("Choose a game folder inside a drive.");
Installation.SafePath(target,"installation.ini");
if(File.Exists(target))throw new IOException("The installation folder is a file.");
if(Directory.Exists(target)&&Directory.EnumerateFileSystemEntries(target).Any()) {
if(new Game(target).Missing()!=null)throw new IOException("Choose a new or empty folder, or an existing complete Sonic Adventure DX installation.");
Update(target,progress,cancel);return;
}
if(!File.Exists(rom))throw new FileNotFoundException("Select your legally dumped ISO, GCM or RVZ.");
cancel.ThrowIfCancellationRequested();Directory.CreateDirectory(parent);string stage=Path.Combine(parent,".sonic-setup-"+Guid.NewGuid().ToString("N").Substring(0,12));Directory.CreateDirectory(stage);
try {
Stream payload=Assembly.GetExecutingAssembly().GetManifestResourceStream("RuntimePayload");
if(payload==null){string adjacent=Path.Combine(Path.GetDirectoryName(Application.ExecutablePath),"Runtime.zip");if(!File.Exists(adjacent))throw new FileNotFoundException("The runtime payload is missing.",adjacent);payload=File.OpenRead(adjacent);}
using(payload)Extract(payload,stage,progress,cancel);
cancel.ThrowIfCancellationRequested();DiscImport.Import(stage,rom,(n,s)=>progress(10+n*90/100,s),cancel);
var files=Directory.GetFiles(stage,"*",SearchOption.AllDirectories).Select(p=>p.Substring(stage.Length+1)).ToArray();
Installation.Write(stage,target,files);
cancel.ThrowIfCancellationRequested();
if(Directory.Exists(target))Directory.Delete(target);Directory.Move(stage,target);
progress(100,"Installed. Your adventure is ready!");
}catch(OperationCanceledException){if(Directory.Exists(stage))Directory.Delete(stage,true);throw;}
catch(Exception ex){string report=Path.Combine(parent,"SonicAdventureDX-setup-"+DateTime.Now.ToString("yyyyMMdd-HHmmss")+".log");string details=ex.ToString();string importLog=Path.Combine(stage,"installer","import.log");if(File.Exists(importLog))details+="\n\n"+File.ReadAllText(importLog);File.WriteAllText(report,details);if(Directory.Exists(stage))Directory.Delete(stage,true);throw new IOException(ex.Message+"\nSetup log: "+report,ex);}
}
public static void Update(string target,Action<int,string> progress,CancellationToken cancel) {
target=Installation.Canonical(target);Installation.RequireIdle(target);DiscImport.Validate(Path.Combine(target,"disc"));
var game=new Game(target);if(game.Missing()!=null)throw new IOException(game.Missing());
string stage=Path.Combine(Path.GetDirectoryName(target),".sonic-update-"+Guid.NewGuid().ToString("N"));Directory.CreateDirectory(stage);
string backup=Path.Combine(Installation.DataPath(target),"Updates",Installation.Version+"-"+Guid.NewGuid().ToString("N"));
var changed=new System.Collections.Generic.List<Tuple<string,string,bool>>();bool committed=false;
try {
Stream payload=Assembly.GetExecutingAssembly().GetManifestResourceStream("RuntimePayload");
if(payload==null)payload=File.OpenRead(Path.Combine(Path.GetDirectoryName(Application.ExecutablePath),"Runtime.zip"));
using(payload)Extract(payload,stage,progress,cancel);
DiscImport.Run(Path.Combine(stage,"native-port","bin","moderngekko-module-info.exe"),new[]{game.Module},stage,cancel);
var files=Directory.GetFiles(stage,"*",SearchOption.AllDirectories).Select(p=>p.Substring(stage.Length+1)).Where(p=>!p.StartsWith("native-port"+Path.DirectorySeparatorChar+"runtime-user"+Path.DirectorySeparatorChar,StringComparison.OrdinalIgnoreCase)).ToArray();
var owned=new System.Collections.Generic.HashSet<string>(files,StringComparer.OrdinalIgnoreCase);
string previous=Path.Combine(target,"installed-files.txt");if(File.Exists(previous))foreach(string p in File.ReadAllLines(previous)){Installation.SafePath(target,p);owned.Add(p);}
foreach(string p in Directory.GetFiles(Path.Combine(target,"disc"),"*",SearchOption.AllDirectories))owned.Add(p.Substring(target.Length+1));owned.Add("native-port"+Path.DirectorySeparatorChar+"bin"+Path.DirectorySeparatorChar+"gGXSE8P_recomp.dll");
Installation.Write(stage,target,owned,game.User,game.ProfileDirectory);
files=files.Concat(new[]{"installation.ini","installed-files.txt"}).Distinct(StringComparer.OrdinalIgnoreCase).ToArray();
foreach(string p in files){string dest=Installation.SafePath(target,p);if(File.Exists(dest))using(var check=new FileStream(dest,FileMode.Open,FileAccess.ReadWrite,FileShare.None)){} }
Installation.RequireIdle(target);cancel.ThrowIfCancellationRequested();
int done=0;foreach(string p in files) {
cancel.ThrowIfCancellationRequested();string dest=Installation.SafePath(target,p),saved=Installation.SafePath(backup,p),source=Installation.SafePath(stage,p);bool existed=File.Exists(dest);
Directory.CreateDirectory(Path.GetDirectoryName(dest));if(existed){Directory.CreateDirectory(Path.GetDirectoryName(saved));File.Move(dest,saved);}
changed.Add(Tuple.Create(dest,saved,existed));File.Move(source,dest);progress(10+(++done)*85/files.Length,"Updating game files. Your game import and saves are kept...");
}
committed=true;progress(100,"Updated to "+Installation.Version+". Your adventure is ready!");
}finally {
if(!committed)for(int i=changed.Count-1;i>=0;i--){var entry=changed[i];if(File.Exists(entry.Item1))File.Delete(entry.Item1);if(entry.Item3)File.Move(entry.Item2,entry.Item1);}
if(Directory.Exists(stage))Directory.Delete(stage,true);
}
}
}
sealed class SetupForm : DarkForm {
readonly TextBox rom,destination;readonly CheckBox owned,shortcut,menu;readonly ProgressBar progress;readonly Label notice;readonly ActionButton install,cancel;
CancellationTokenSource cancellation;bool busy,complete;string installed;
public SetupForm(bool preview=false):base("Sonic Adventure DX | Install",640,520,preview) {
rom=Field(24,131,480);destination=Field(24,225,480);destination.Text=Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),"Programs","SonicAdventureDX");
ButtonAt("Browse",514,131,102,30,delegate{using(var dialog=new OpenFileDialog{Title="Select your legally dumped GameCube copy",Filter="GameCube dumps|*.iso;*.gcm;*.rvz",CheckFileExists=true})if(dialog.ShowDialog(this)==DialogResult.OK)rom.Text=dialog.FileName;});
ButtonAt("Browse",514,225,102,30,delegate{using(var dialog=new FolderBrowserDialog{Description="Choose a new/empty game folder, or your existing installation to update"})if(dialog.ShowDialog(this)==DialogResult.OK)destination.Text=dialog.SelectedPath;});
owned=new CheckBox{Text="I own this game and supplied my legally dumped copy.",ForeColor=Theme.Ink,BackColor=Theme.Background,AutoSize=true,Font=Theme.Font(13),Location=new Point((int)(24*S),(int)(286*S))};Controls.Add(owned);
shortcut=new CheckBox{Text="Create a desktop shortcut",Checked=true,ForeColor=Theme.Muted,BackColor=Theme.Background,AutoSize=true,Font=Theme.Font(12),Location=new Point((int)(24*S),(int)(320*S))};Controls.Add(shortcut);
menu=new CheckBox{Text="Add to Start menu",Checked=true,ForeColor=Theme.Muted,BackColor=Theme.Background,AutoSize=true,Font=Theme.Font(12),Location=new Point((int)(340*S),(int)(320*S))};Controls.Add(menu);
progress=new ProgressBar{Minimum=0,Maximum=100,Bounds=new Rectangle((int)(24*S),(int)(366*S),(int)(592*S),(int)(12*S))};Controls.Add(progress);
notice=new Label{Text="Includes ModernGekko and build tools. First setup takes a few minutes.",ForeColor=Theme.Muted,Font=Theme.Font(12),BackColor=Theme.Background,Bounds=new Rectangle((int)(24*S),(int)(386*S),(int)(592*S),(int)(34*S))};Controls.Add(notice);
cancel=ButtonAt("Cancel",24,449,120,43,delegate{if(busy){cancellation.Cancel();notice.Text="Cancelling setup...";cancel.Enabled=false;}else Close();});
install=ButtonAt("Install game",158,449,458,43,async delegate{if(complete){Process.Start(new ProcessStartInfo(Path.Combine(installed,"Sonic Launcher.exe")){UseShellExecute=true});Close();return;}await Install();});install.Primary=true;AcceptButton=install;
FormClosing+=delegate(object sender,FormClosingEventArgs e){if(busy){e.Cancel=true;cancellation.Cancel();notice.Text="Cancelling setup...";}};
destination.TextChanged+=delegate {if(busy||complete)return;bool update=false;try{update=new Game(destination.Text).Missing()==null;}catch(ArgumentException){}install.Text=update?"Update game":"Install game";rom.Enabled=!update;owned.Enabled=!update;notice.Text=update?"Update keeps your imported game, controls, settings and saves.":"Includes ModernGekko and build tools. First setup takes a few minutes.";};
}
TextBox Field(int x,int y,int width){var field=new TextBox{Font=Theme.Font(13),BackColor=Theme.Panel,ForeColor=Theme.Ink,BorderStyle=BorderStyle.FixedSingle,Bounds=new Rectangle((int)(x*S),(int)(y*S),(int)(width*S),(int)(30*S))};Controls.Add(field);return field;}
async Task Install() {
bool updating=false;try{updating=new Game(destination.Text).Missing()==null;}catch(ArgumentException){}
if(!updating&&!owned.Checked){notice.Text="Confirm ownership and select your own GameCube dump to continue.";return;}
string target=destination.Text,source=rom.Text;
busy=true;install.Enabled=false;rom.Enabled=false;destination.Enabled=false;owned.Enabled=false;shortcut.Enabled=false;menu.Enabled=false;cancellation=new CancellationTokenSource();
try {
await Task.Run(()=>SetupService.Install(target,source,(n,s)=>{if(!IsDisposed&&IsHandleCreated)BeginInvoke((Action)(()=>{progress.Value=Math.Max(progress.Value,n);notice.Text=s;}));},cancellation.Token));
installed=Path.GetFullPath(target);complete=true;install.Text="Open launcher";cancel.Text="Close";
try{Installation.Register(installed,shortcut.Checked,menu.Checked);}catch(Exception ex){notice.Text="Installed. Windows shortcut/registration stopped: "+ex.Message;}
}catch(OperationCanceledException){notice.Text="Setup cancelled. No game installation was committed.";progress.Value=0;}
catch(Exception ex){notice.Text="Setup stopped. Check the selected dump and folder.";MessageBox.Show(this,ex.Message,"Setup could not finish",MessageBoxButtons.OK,MessageBoxIcon.Error);progress.Value=0;}
finally{busy=false;cancellation.Dispose();install.Enabled=true;cancel.Enabled=true;rom.Enabled=!complete;destination.Enabled=!complete;owned.Enabled=!complete;shortcut.Enabled=!complete;menu.Enabled=!complete;}
}
protected override void OnPaint(PaintEventArgs e){base.OnPaint(e);var g=e.Graphics;g.ScaleTransform(S,S);
Theme.Text(g,"READY FOR ADVENTURE",27,Theme.Ink,new RectangleF(24,18,592,45),FontStyle.Bold);
Theme.Text(g,"Sonic Adventure DX • USA GameCube • Windows x64",12,Theme.Gold,new RectangleF(24,65,592,22));
Theme.Text(g,"YOUR GAMECUBE DUMP",10,Theme.Muted,new RectangleF(24,101,592,24),FontStyle.Bold);
Theme.Text(g,"ISO, GCM or RVZ — GXSE8P revision 0. The download contains no game data.",11,Theme.Muted,new RectangleF(24,168,592,22));
Theme.Text(g,"INSTALL FOLDER",10,Theme.Muted,new RectangleF(24,195,592,24),FontStyle.Bold);
Theme.Text(g,"Recomp preview "+Installation.Version+". Native game-module work is unfinished.",11,Theme.Muted,new RectangleF(24,418,592,22));
}
}
static class SetupProgram {
[STAThread] public static int Main(string[] args) {
AppContext.SetSwitch("Switch.System.IO.UseLegacyPathHandling",false);AppContext.SetSwitch("Switch.System.IO.BlockLongPaths",false);
Application.EnableVisualStyles();Application.SetCompatibleTextRenderingDefault(false);
try {
if(args.Length==3&&args[0]=="--tables"){DiscImport.Tables(args[1],args[2]);return 0;}
if(args.Length==3&&args[0]=="--import"){DiscImport.Import(args[1],args[2],(n,s)=>Console.WriteLine(n+" "+s),CancellationToken.None);return 0;}
if(args.Length==3&&args[0]=="--install"){SetupService.Install(args[1],args[2],(n,s)=>Console.WriteLine(n+" "+s),CancellationToken.None);return 0;}
if(args.Length==2&&args[0]=="--update"){SetupService.Update(args[1],(n,s)=>Console.WriteLine(n+" "+s),CancellationToken.None);return 0;}
if(args.Length==2&&args[0]=="--register"){Installation.Register(args[1],true,true);return 0;}
if(args.Length==2&&args[0]=="--preview"){using(var form=new SetupForm(true))form.Render(args[1]);return 0;}
using(var form=new SetupForm())Application.Run(form);return 0;
}catch(Exception ex){Console.Error.WriteLine(ex.ToString());return 1;}
}
}
}
