using System;
using System.IO;
using System.Linq;
using System.Threading;
namespace SonicLauncher {
static class InstallationChecks {
static void Require(bool condition,string message){if(!condition)throw new Exception(message);}
[STAThread] public static int Main(string[] args) {
try {
string root=Path.GetFullPath(args[0]),data=Path.Combine(root,"saves"),install=Path.Combine(root,"game");Directory.CreateDirectory(install);Directory.CreateDirectory(data);
File.WriteAllText(Path.Combine(install,"managed.txt"),"installer file");File.WriteAllText(Path.Combine(install,"custom.txt"),"user file");File.WriteAllText(Path.Combine(data,"memory-card.gci"),"save data");
Installation.Write(install,install,new[]{"managed.txt"},data,Path.Combine(data,"Launcher"));var game=new Game(install);
Require(game.User==data&&game.ProfileDirectory==Path.Combine(data,"Launcher"),"Installed launcher ignores its save directory");
bool rejected=false;try{Installation.SafePath(install,@"..\escaped.txt");}catch(InvalidDataException){rejected=true;}Require(rejected,"Traversal accepted");
string manifest=Path.Combine(install,"installed-files.txt"),original=File.ReadAllText(manifest);File.AppendAllText(manifest,"..\\escaped.txt\n");
rejected=false;try{Installation.Uninstall(install);}catch(InvalidDataException){rejected=true;}Require(rejected&&File.Exists(Path.Combine(install,"managed.txt")),"Unsafe uninstall changed files");File.WriteAllText(manifest,original);
Installation.Uninstall(install);Require(!File.Exists(Path.Combine(install,"managed.txt")),"Managed file remains");Require(File.ReadAllText(Path.Combine(install,"custom.txt"))=="user file","Uninstall removed custom file");Require(File.ReadAllText(Path.Combine(data,"memory-card.gci"))=="save data","Uninstall removed saves");
string portable=Path.Combine(root,"portable"),portableData=Path.Combine(portable,"native-port","runtime-user");Directory.CreateDirectory(portableData);File.WriteAllText(Path.Combine(portable,"app.txt"),"application");File.WriteAllText(Path.Combine(portableData,"save.gci"),"portable save");
Installation.Write(portable,portable,new[]{"app.txt",Path.Combine("native-port","runtime-user","save.gci")},portableData);
Require(!File.ReadAllText(Path.Combine(portable,"installed-files.txt")).Contains("save.gci"),"Save included in removal record");Installation.Uninstall(portable);Require(File.Exists(Path.Combine(portableData,"save.gci")),"Portable save deleted");
Console.WriteLine("PASS installed save/profile routing, traversal refusal, preflight, managed uninstall, custom file preservation and external/portable save preservation");return 0;
}catch(Exception ex){Console.Error.WriteLine(ex);return 1;}
}
}}
