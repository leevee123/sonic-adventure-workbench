using System;
using System.IO;
using Microsoft.Win32;
namespace SonicLauncher {
static class RegistrationChecks {
[STAThread] public static int Main(string[] args) {
string root=Path.GetFullPath(args[0]);
try {
Directory.CreateDirectory(root);File.WriteAllText(Path.Combine(root,"managed.txt"),"fixture");Installation.Write(root,root,new[]{"managed.txt"});
Installation.Register(root,false,false);
using(var key=Registry.CurrentUser.OpenSubKey(Installation.RegistryPath(root)))if(key==null||(string)key.GetValue("DisplayVersion")!=Installation.Version||!((string)key.GetValue("UninstallString")).Contains("--uninstall"))throw new Exception("Installed apps entry is incomplete");
Installation.Uninstall(root);using(var key=Registry.CurrentUser.OpenSubKey(Installation.RegistryPath(root)))if(key!=null)throw new Exception("Uninstall registration remains");
Console.WriteLine("PASS per-user Installed apps registration, version/command and registration removal");return 0;
}catch(Exception ex){Console.Error.WriteLine(ex);return 1;}
finally {Registry.CurrentUser.DeleteSubKeyTree(Installation.RegistryPath(root),false);}
}
}}
