// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using Microsoft.Win32;
namespace SonicLauncher {
static class Installation {
    public const string Version="0.5.0";
    public const string Product="SonicAdventureDX.GXSE8P.Workbench";
    public const string Repository="https://github.com/leevee123/sonic-adventure-workbench";
    public static string Canonical(string path) { return Path.GetFullPath(path).TrimEnd(Path.DirectorySeparatorChar); }
    public static string Id(string root) { using(var sha=SHA256.Create())return BitConverter.ToString(sha.ComputeHash(Encoding.UTF8.GetBytes(Canonical(root).ToUpperInvariant()))).Replace("-","").Substring(0,16); }
    public static string DataPath(string root) { return Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),"SonicAdventureDX",Id(root)); }
    public static string SafePath(string root,string relative) {
        root=Canonical(root);string path=Path.GetFullPath(Path.Combine(root,relative));
        if(Path.IsPathRooted(relative)||!path.StartsWith(root+Path.DirectorySeparatorChar,StringComparison.OrdinalIgnoreCase))throw new InvalidDataException("Installation entry leaves its game folder.");
        for(string current=Path.GetDirectoryName(path);current!=null&&current.Length>=root.Length;current=Path.GetDirectoryName(current))
            if(Directory.Exists(current)&&(File.GetAttributes(current)&FileAttributes.ReparsePoint)!=0)throw new IOException("Choose a game folder without directory links.");
        if(File.Exists(path)&&(File.GetAttributes(path)&FileAttributes.ReparsePoint)!=0)throw new IOException("Installation entry is a file link.");
        return path;
    }
    public static void RequireIdle(string root) {
        foreach(string name in new[]{"Sonic Launcher","moderngekko-run"})foreach(var p in Process.GetProcessesByName(name))using(p) {
            try { if(!p.HasExited&&p.MainModule.FileName.StartsWith(Canonical(root)+Path.DirectorySeparatorChar,StringComparison.OrdinalIgnoreCase))throw new IOException("Close the game and launcher before changing this installation."); }
            catch(System.ComponentModel.Win32Exception) { throw new IOException("A game process could not be checked. Close the game and launcher first."); }
            catch(InvalidOperationException) { }
        }
    }
    public static void Write(string folder,string finalRoot,IEnumerable<string> files,string user=null,string profile=null) {
        finalRoot=Canonical(finalRoot);user=user??DataPath(finalRoot);profile=profile??Path.Combine(user,"Launcher");
        var ini=new Ini(Path.Combine(folder,"installation.ini"));ini.Set("Installation","Product",Product);ini.Set("Installation","Root",finalRoot);
        ini.Set("Installation","Version",Version);ini.Set("Installation","UserDirectory",user);ini.Set("Installation","ProfileDirectory",profile);ini.Save(Path.Combine(folder,"installation.ini"));
        var entries=new SortedSet<string>(files,StringComparer.OrdinalIgnoreCase);entries.Add("installation.ini");entries.Add("installed-files.txt");
        string userPrefix=Canonical(user)+Path.DirectorySeparatorChar;
        File.WriteAllLines(Path.Combine(folder,"installed-files.txt"),entries.Where(p=>!SafePath(finalRoot,p).StartsWith(userPrefix,StringComparison.OrdinalIgnoreCase)),new UTF8Encoding(false));
    }
    public static string RegistryPath(string root) { return @"Software\Microsoft\Windows\CurrentVersion\Uninstall\SonicAdventureDX-"+Id(root); }
    public static string MenuPath(string root) { return Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.Programs),"Sonic Adventure DX ("+Id(root).Substring(0,6)+")"); }
    public static void Shortcut(string file,string target,string arguments,string working) {
        Directory.CreateDirectory(Path.GetDirectoryName(file));Type type=Type.GetTypeFromProgID("WScript.Shell");object shell=Activator.CreateInstance(type),link=null;
        try { link=type.InvokeMember("CreateShortcut",BindingFlags.InvokeMethod,null,shell,new object[]{file});Type t=link.GetType();
            t.InvokeMember("TargetPath",BindingFlags.SetProperty,null,link,new object[]{target});t.InvokeMember("Arguments",BindingFlags.SetProperty,null,link,new object[]{arguments});
            t.InvokeMember("WorkingDirectory",BindingFlags.SetProperty,null,link,new object[]{working});t.InvokeMember("IconLocation",BindingFlags.SetProperty,null,link,new object[]{Path.Combine(working,"Sonic Launcher.exe")+",0"});t.InvokeMember("Save",BindingFlags.InvokeMethod,null,link,null);
        } finally {if(link!=null)Marshal.FinalReleaseComObject(link);Marshal.FinalReleaseComObject(shell);}
    }
    public static void Register(string root,bool desktop,bool menu) {
        root=Canonical(root);string uninstall=Path.Combine(root,"Uninstall Sonic Adventure DX.exe");
        using(var key=Registry.CurrentUser.CreateSubKey(RegistryPath(root))) {
            key.SetValue("DisplayName","Sonic Adventure DX — Recomp Preview");key.SetValue("DisplayVersion",Version);key.SetValue("Publisher","Sonic Adventure Workbench contributors");
            key.SetValue("InstallLocation",root);key.SetValue("DisplayIcon",Path.Combine(root,"Sonic Launcher.exe"));key.SetValue("URLInfoAbout",Repository);
            key.SetValue("UninstallString",DiscQuote(uninstall)+" --uninstall "+DiscQuote(root));key.SetValue("NoModify",1,RegistryValueKind.DWord);key.SetValue("NoRepair",1,RegistryValueKind.DWord);
        }
        if(menu) {string folder=MenuPath(root);Shortcut(Path.Combine(folder,"Play Sonic Adventure DX.lnk"),Path.Combine(root,"Sonic Launcher.exe"),"",root);Shortcut(Path.Combine(folder,"Uninstall.lnk"),uninstall,"--uninstall "+DiscQuote(root),root);}
        if(desktop)Shortcut(Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory),"Sonic Adventure DX ("+Id(root).Substring(0,6)+").lnk"),Path.Combine(root,"Sonic Launcher.exe"),"",root);
    }
    static string DiscQuote(string value) { return "\""+value+"\""; }
    public static void Uninstall(string root) {
        root=Canonical(root);var ini=new Ini(Path.Combine(root,"installation.ini"));
        if(root==Path.GetPathRoot(root)||ini.Get("Installation","Product","")!=Product||!string.Equals(Canonical(ini.Get("Installation","Root","")),root,StringComparison.OrdinalIgnoreCase))throw new InvalidDataException("This folder has no matching installation record.");
        RequireIdle(root);string user=Canonical(ini.Get("Installation","UserDirectory",DataPath(root)));string prefix=user+Path.DirectorySeparatorChar;
        var files=File.ReadAllLines(Path.Combine(root,"installed-files.txt")).Select(p=>SafePath(root,p)).ToArray();
        if(files.Any(p=>p.StartsWith(prefix,StringComparison.OrdinalIgnoreCase)))throw new InvalidDataException("The installation record includes save data. Nothing was removed.");
        foreach(string file in files)if(File.Exists(file))using(var check=new FileStream(file,FileMode.Open,FileAccess.ReadWrite,FileShare.None)) { }
        // Delete only recorded installer files. Custom files and saves are retained.
        foreach(string file in files.Where(p=>Path.GetFileName(p)!="installation.ini"&&Path.GetFileName(p)!="installed-files.txt"))if(File.Exists(file))File.Delete(file);
        foreach(string dir in files.Select(Path.GetDirectoryName).Distinct().OrderByDescending(p=>p.Length)) {
            string current=dir;while(current.Length>root.Length&&Directory.Exists(current)&&!Directory.EnumerateFileSystemEntries(current).Any()) {Directory.Delete(current);current=Path.GetDirectoryName(current);}
        }
        File.Delete(Path.Combine(root,"installed-files.txt"));File.Delete(Path.Combine(root,"installation.ini"));
        if(!Directory.EnumerateFileSystemEntries(root).Any())Directory.Delete(root);
        Registry.CurrentUser.DeleteSubKeyTree(RegistryPath(root),false);
        string menu=MenuPath(root);foreach(string name in new[]{"Play Sonic Adventure DX.lnk","Uninstall.lnk"})RemoveOwnedShortcut(Path.Combine(menu,name),root);
        if(Directory.Exists(menu)&&!Directory.EnumerateFileSystemEntries(menu).Any())Directory.Delete(menu);
        RemoveOwnedShortcut(Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.DesktopDirectory),"Sonic Adventure DX ("+Id(root).Substring(0,6)+").lnk"),root);
    }
    static void RemoveOwnedShortcut(string file,string root) {
        if(!File.Exists(file))return;Type type=Type.GetTypeFromProgID("WScript.Shell");object shell=Activator.CreateInstance(type),link=null;
        try {link=type.InvokeMember("CreateShortcut",BindingFlags.InvokeMethod,null,shell,new object[]{file});string target=(string)link.GetType().InvokeMember("TargetPath",BindingFlags.GetProperty,null,link,null);if(target.StartsWith(root+Path.DirectorySeparatorChar,StringComparison.OrdinalIgnoreCase))File.Delete(file);}
        finally{if(link!=null)Marshal.FinalReleaseComObject(link);Marshal.FinalReleaseComObject(shell);}
    }
}
static class UninstallProgram {
    [STAThread] public static int Main(string[] args) {
        try {
            Application.EnableVisualStyles();Application.SetCompatibleTextRenderingDefault(false);
            if(args.Length<2||args[0]!="--uninstall")throw new ArgumentException("Open Uninstall from the installed game folder or Windows Installed apps.");
            string root=Installation.Canonical(args[1]);
            if(Application.ExecutablePath.StartsWith(root+Path.DirectorySeparatorChar,StringComparison.OrdinalIgnoreCase)) {
                string helper=Path.Combine(Path.GetTempPath(),"SonicDX-Uninstall-"+Guid.NewGuid().ToString("N"),"Uninstall.exe");Directory.CreateDirectory(Path.GetDirectoryName(helper));File.Copy(Application.ExecutablePath,helper);
                Process.Start(new ProcessStartInfo(helper,"--uninstall \""+root+"\" --helper"){UseShellExecute=false,CreateNoWindow=true});return 0;
            }
            var record=new Ini(Path.Combine(root,"installation.ini"));string data=record.Get("Installation","UserDirectory",Installation.DataPath(root));
            if(MessageBox.Show("Remove Sonic Adventure DX and its installed game files?\n\nYour original game dump and saves are kept.\nSave folder: "+data,"Uninstall Sonic Adventure DX",MessageBoxButtons.YesNo,MessageBoxIcon.Question)!=DialogResult.Yes)return 0;
            Installation.Uninstall(root);MessageBox.Show("Sonic Adventure DX was uninstalled. Your saves were kept.\n\n"+data,"Sonic Adventure DX");return 0;
        }catch(Exception ex){MessageBox.Show(ex.Message,"Uninstall stopped",MessageBoxButtons.OK,MessageBoxIcon.Error);return 1;}
    }
}
}
