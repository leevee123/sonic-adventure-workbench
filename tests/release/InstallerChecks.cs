using System;
using System.IO;
using System.IO.Compression;
using System.Text;
using System.Threading;
namespace SonicLauncher {
static class InstallerChecks {
static void Require(bool condition,string message){if(!condition)throw new Exception(message);}
static MemoryStream Zip(string name){var data=new MemoryStream();using(var zip=new ZipArchive(data,ZipArchiveMode.Create,true)){var entry=zip.CreateEntry(name);using(var writer=new StreamWriter(entry.Open()))writer.Write("test");}data.Position=0;return data;}
[STAThread] public static int Main(string[] args){
try{
string root=Path.GetFullPath(args[0]);Directory.CreateDirectory(root);int checks=0;
string extract=Path.Combine(root,"extract");Directory.CreateDirectory(extract);
bool rejected=false;try{using(var zip=Zip("../escaped.txt"))SetupService.Extract(zip,extract,(n,s)=>{},CancellationToken.None);}catch(InvalidDataException){rejected=true;}
Require(rejected&&!File.Exists(Path.Combine(root,"escaped.txt")),"ZIP traversal was not rejected");checks++;
File.WriteAllText(Path.Combine(extract,"existing.txt"),"preserved");rejected=false;try{using(var zip=Zip("existing.txt"))SetupService.Extract(zip,extract,(n,s)=>{},CancellationToken.None);}catch(IOException){rejected=true;}
Require(rejected&&File.ReadAllText(Path.Combine(extract,"existing.txt"))=="preserved","Extraction overwrote an existing file");checks++;
var cancellation=new CancellationTokenSource();cancellation.Cancel();rejected=false;try{using(var zip=Zip("cancelled.txt"))SetupService.Extract(zip,extract,(n,s)=>{},cancellation.Token);}catch(OperationCanceledException){rejected=true;}
Require(rejected&&!File.Exists(Path.Combine(extract,"cancelled.txt")),"Cancelled extraction wrote a file");checks++;
rejected=false;try{SetupService.Install(extract,args[1],(n,s)=>{},CancellationToken.None);}catch(IOException){rejected=true;}
Require(rejected&&File.ReadAllText(Path.Combine(extract,"existing.txt"))=="preserved","Existing install was modified");checks++;
string cancelled=Path.Combine(root,"cancelled-install");rejected=false;try{SetupService.Install(cancelled,args[1],(n,s)=>{},cancellation.Token);}catch(OperationCanceledException){rejected=true;}
Require(rejected&&!Directory.Exists(cancelled)&&Directory.GetDirectories(root,".sonic-setup-*").Length==0,"Cancelled setup left a staging directory");checks++;
string wrong=Path.Combine(root,"wrong-disc");Directory.CreateDirectory(Path.Combine(wrong,"sys"));File.WriteAllBytes(Path.Combine(wrong,"sys","boot.bin"),Encoding.ASCII.GetBytes("GZLE01\0\0"));
rejected=false;try{DiscImport.Validate(wrong);}catch(InvalidDataException){rejected=true;}Require(rejected,"Unsupported disc accepted");checks++;
string missing=Path.Combine(root,"missing-rom");rejected=false;try{SetupService.Install(missing,Path.Combine(root,"absent.rvz"),(n,s)=>{},CancellationToken.None);}catch(FileNotFoundException){rejected=true;}Require(rejected&&!Directory.Exists(missing),"Missing ROM created installation");checks++;
Console.WriteLine("PASS: "+checks+" installer preservation, validation and cancellation checks.");return 0;
}catch(Exception ex){Console.Error.WriteLine(ex);return 1;}
}
}}
