using System;
using System.IO;
using System.Linq;
using System.Threading;
namespace SonicLauncher {
static class UpdateChecks {
[STAThread] public static int Main(string[] args) {
try {
string root=Path.GetFullPath(args[0]);var game=new Game(root);string user=game.User,profile=game.ProfileDirectory;
string module=DiscImport.Hash(game.Module),dol=DiscImport.Hash(Path.Combine(root,"disc","sys","main.dol"));
Directory.CreateDirectory(user);Directory.CreateDirectory(profile);File.WriteAllText(game.Config,"[Video]\nwidescreen=true\n[Gameplay]\ninstant_light_dash=true\n");File.WriteAllText(game.Preferences,"[Launcher]\nmode=native\n");
string save=Path.Combine(user,"GC","test-card.gci");Directory.CreateDirectory(Path.GetDirectoryName(save));File.WriteAllText(save,"preserve memory card");
string runner=DiscImport.Hash(game.Runner),launcher=DiscImport.Hash(Path.Combine(root,"Sonic Launcher.exe"));var cancel=new CancellationTokenSource();
bool rejected=false;try {SetupService.Update(root,(n,s)=>{if(n>10&&s.StartsWith("Updating"))cancel.Cancel();},cancel.Token);}catch(OperationCanceledException){rejected=true;}
if(!rejected||DiscImport.Hash(game.Runner)!=runner||DiscImport.Hash(Path.Combine(root,"Sonic Launcher.exe"))!=launcher||File.Exists(Path.Combine(root,"installation.ini")))throw new Exception("Cancelled update did not roll back");
SetupService.Update(root,(n,s)=>{},CancellationToken.None);game=new Game(root);
if(game.User!=user||game.ProfileDirectory!=profile||DiscImport.Hash(game.Module)!=module||DiscImport.Hash(Path.Combine(root,"disc","sys","main.dol"))!=dol||File.ReadAllText(save)!="preserve memory card"||new Ini(game.Config).Get("Gameplay","instant_light_dash","")!="true"||new Ini(game.Preferences).Get("Launcher","mode","")!="native")throw new Exception("Update lost game data, settings or saves");
if(!File.Exists(Path.Combine(root,"Uninstall Sonic Adventure DX.exe")))throw new Exception("Update omitted uninstaller");
Console.WriteLine("PASS cancelled update rollback, module/DOL preservation, save preservation, settings/mode preservation, legacy paths and installed uninstaller");return 0;
}catch(Exception ex){Console.Error.WriteLine(ex);return 1;}
}
}}
