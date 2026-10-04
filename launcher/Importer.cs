// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading;
using System.Threading.Tasks;
namespace SonicLauncher {
static class DiscImport {
public const string DolHash="9b3eb6eb5e5529464d15fc51ba72924fef04dc876642224324d8659d9e7c59f2";
public const string RelHash="5829b76f4a865a1994cbfc74095d7d1ea194f7cedf5311a44f6f9e6541d35820";
public static string Hash(string file) {using(var sha=SHA256.Create())using(var input=File.OpenRead(file))return BitConverter.ToString(sha.ComputeHash(input)).Replace("-","").ToLowerInvariant();}
public static string Quote(string value) {
var b=new StringBuilder("\"");int slashes=0;
foreach(char c in value){if(c=='\\'){slashes++;continue;}if(c=='"'){b.Append('\\',slashes*2+1);b.Append(c);}else{b.Append('\\',slashes);b.Append(c);}slashes=0;}
b.Append('\\',slashes*2);b.Append('"');return b.ToString();
}
public static void Run(string exe,IEnumerable<string> args,string cwd,CancellationToken cancel,Action<string> output=null,IDictionary<string,string> environment=null) {
var info=new ProcessStartInfo(exe,string.Join(" ",args.Select(Quote))){WorkingDirectory=cwd,UseShellExecute=false,CreateNoWindow=true,RedirectStandardOutput=true,RedirectStandardError=true};
if(environment!=null)foreach(var pair in environment)info.EnvironmentVariables[pair.Key]=pair.Value;
using(var p=new Process{StartInfo=info}) {
var tail=new StringBuilder();var gate=new object();
DataReceivedEventHandler receive=delegate(object sender,DataReceivedEventArgs e){if(e.Data==null)return;lock(gate){tail.AppendLine(e.Data);if(tail.Length>24000)tail.Remove(0,tail.Length-16000);}if(output!=null)output(e.Data);};
p.OutputDataReceived+=receive;p.ErrorDataReceived+=receive;cancel.ThrowIfCancellationRequested();p.Start();p.BeginOutputReadLine();p.BeginErrorReadLine();
while(!p.WaitForExit(100)){if(cancel.IsCancellationRequested){try{p.Kill();}catch(InvalidOperationException){}p.WaitForExit();cancel.ThrowIfCancellationRequested();}}
p.WaitForExit();cancel.ThrowIfCancellationRequested();if(p.ExitCode!=0)throw new IOException(Path.GetFileName(exe)+" stopped ("+p.ExitCode+").\n"+tail);
}
}
static uint BE32(byte[] bytes,int offset){if(offset<0||offset+4>bytes.Length)throw new InvalidDataException("Truncated executable.");return ((uint)bytes[offset]<<24)|((uint)bytes[offset+1]<<16)|((uint)bytes[offset+2]<<8)|bytes[offset+3];}
static uint Hex(string s){return uint.Parse(s.StartsWith("0x")?s.Substring(2):s,NumberStyles.HexNumber,CultureInfo.InvariantCulture);}
static ulong Fnv(byte[] d,int start,int length){unchecked{ulong h=0xcbf29ce484222325;for(int i=start;i<start+length;i++)h=(h^d[i])*0x100000001b3;return h;}}
// Equivalent to RecompCore gen_module_tables.py; generated from the local dump.
public static void Tables(string generated,string output) {
string header=File.ReadAllText(Path.Combine(generated,"generated.h"));var ranges=new SortedDictionary<uint,uint>();
foreach(Match m in Regex.Matches(header,@"address >= (0x[0-9A-Fa-f]+)u && address < (0x[0-9A-Fa-f]+)u"))ranges[Hex(m.Groups[1].Value)]=Hex(m.Groups[2].Value);
foreach(Match m in Regex.Matches(header,@"u32\s+offset\s*=\s*address\s*-\s*(0x[0-9A-Fa-f]+)u\s*;\s*if\s*\(\s*offset\s*<\s*(0x[0-9A-Fa-f]+)u")){uint a=Hex(m.Groups[1].Value);ranges[a]=checked(a+Hex(m.Groups[2].Value));}
var functions=Regex.Matches(header,@"void func_([0-9A-Fa-f]{8})\(CPUState\* ctx\);").Cast<Match>().Select(m=>Hex(m.Groups[1].Value)).OrderBy(v=>v).ToArray();
if(ranges.Count==0||functions.Length==0)throw new InvalidDataException("Translator produced no code ranges.");
var chunks=new List<KeyValuePair<uint,uint>>();
for(int i=0;i<functions.Length;i++){uint a=functions[i];var r=ranges.FirstOrDefault(v=>v.Key<=a&&a<v.Value);if(r.Value==0)throw new InvalidDataException("Invalid native chunk.");uint end=r.Value;if(i+1<functions.Length&&functions[i+1]<end)end=functions[i+1];chunks.Add(new KeyValuePair<uint,uint>(a,end));}
var smc=new List<KeyValuePair<uint,uint>>();foreach(string line in File.ReadAllLines(Path.Combine(generated,"generated_smc.txt"))){Match m=Regex.Match(line.Trim(),@"^(0x[0-9A-Fa-f]+)-(0x[0-9A-Fa-f]+)");if(m.Success)smc.Add(new KeyValuePair<uint,uint>(Hex(m.Groups[1].Value),checked(Hex(m.Groups[2].Value)+4)));}
byte[] dol=File.ReadAllBytes(Path.Combine(generated,"main.dol"));var text=new StringBuilder("// Generated locally from the supplied disc.\n");
Action<string,IEnumerable<KeyValuePair<uint,uint>>,string> emit=delegate(string name,IEnumerable<KeyValuePair<uint,uint>> values,string count){var array=values.ToArray();text.Append("static const StaticRecompRange "+name+"[] = {\n");if(array.Length==0)text.Append("{0u,0u},\n");foreach(var r in array)text.AppendFormat("{{0x{0:X8}u,0x{1:X8}u}},\n",r.Key,r.Value);text.Append("};\n#define "+count+" "+array.Length+"u\n");};
emit("s_code_ranges",ranges,"MODULE_CODE_RANGE_COUNT");emit("s_smc_ranges",smc.OrderBy(r=>r.Key),"MODULE_SMC_RANGE_COUNT");emit("s_chunk_ranges",chunks,"MODULE_CHUNK_RANGE_COUNT");text.Append("static const u64 s_chunk_hashes[] = {\n");
foreach(var chunk in chunks){bool found=false;for(int i=0;i<18;i++){uint off=BE32(dol,i*4),a=BE32(dol,0x48+i*4),size=BE32(dol,0x90+i*4);if(a<=chunk.Key&&(ulong)chunk.Value<=(ulong)a+size&&size!=0){ulong lo=(ulong)off+chunk.Key-a,len=chunk.Value-chunk.Key;if(lo+len>(ulong)dol.Length)throw new InvalidDataException("Chunk exceeds executable.");text.AppendFormat("0x{0:X16}u,\n",Fnv(dol,checked((int)lo),checked((int)len)));found=true;break;}}if(!found)throw new InvalidDataException("Chunk is outside executable sections.");}
text.Append("};\n");File.WriteAllText(output,text.ToString(),new UTF8Encoding(false));
}
public static void Validate(string disc) {
byte[] boot=File.ReadAllBytes(Path.Combine(disc,"sys","boot.bin"));if(boot.Length<8||Encoding.ASCII.GetString(boot,0,6)!="GXSE8P"||boot[7]!=0)throw new InvalidDataException("This build supports the USA GameCube release GXSE8P, revision 0. Supply a legally dumped copy of that version.");
if(Hash(Path.Combine(disc,"sys","main.dol"))!=DolHash||Hash(Path.Combine(disc,"files","_Main.rel"))!=RelHash)throw new InvalidDataException("Game hashes differ from the supported disc. Your dump may be another revision, modified, or incomplete.");
}
public static void Import(string root,string rom,Action<int,string> progress,CancellationToken cancel) {
root=Path.GetFullPath(root);rom=Path.GetFullPath(rom);
if(!File.Exists(rom))throw new FileNotFoundException("Select your GameCube dump.");
if(!new[]{".iso",".gcm",".rvz"}.Contains(Path.GetExtension(rom).ToLowerInvariant()))throw new InvalidDataException("Choose a GameCube ISO, GCM or RVZ dump.");
if(Directory.Exists(Path.Combine(root,"disc"))||File.Exists(Path.Combine(root,"native-port","bin","gGXSE8P_recomp.dll")))throw new IOException("A game is already imported here. Choose a fresh folder; imported data and saves are preserved.");
string stage=Path.Combine(root,".import-"+Guid.NewGuid().ToString("N"));Directory.CreateDirectory(stage);
string disc=Path.Combine(stage,"disc"),genRoot=Path.Combine(stage,"native"),gen=Path.Combine(genRoot,"generated"),obj=Path.Combine(stage,"objects");Directory.CreateDirectory(obj);
string tools=Path.Combine(root,"installer","tools"),clang=Path.Combine(tools,"llvm","bin","clang.exe"),support=Path.Combine(root,"installer","module-support");
string logPath=Path.Combine(root,"installer","import.log");Directory.CreateDirectory(Path.GetDirectoryName(logPath));
using(var log=new StreamWriter(logPath,false,new UTF8Encoding(false))) {
var gate=new object();Action<string> output=s=>{lock(gate){log.WriteLine(s);log.Flush();}};
try {
progress(5,"Extracting your GameCube dump...");Run(Path.Combine(tools,"DolphinTool.exe"),new[]{"extract","-i",rom,"-o",disc,"-q"},root,cancel,output);
progress(25,"Checking the game version...");Validate(disc);cancel.ThrowIfCancellationRequested();
progress(30,"Preparing original game code locally...");Run(Path.Combine(root,"native-port","bin","dolrecomp.exe"),new[]{"--gamecube","--cpu","gekko","--backend","c","--runtime","recompcore","-j4",Path.Combine(disc,"sys","main.dol"),genRoot},root,cancel,output,new Dictionary<string,string>{{"DOLRECOMP_C_CHUNK_INSTRUCTIONS","4096"}});
File.Copy(Path.Combine(disc,"sys","main.dol"),Path.Combine(gen,"main.dol"));
Tables(gen,Path.Combine(obj,"module_tables.inc"));
var sources=new List<string>{Path.Combine(support,"module_export.c")};sources.AddRange(Directory.GetFiles(Path.Combine(support,"core"),"*.c"));sources.AddRange(Directory.GetFiles(Path.Combine(gen,"chunks"),"*.c"));
int complete=0;var objects=new string[sources.Count];
Parallel.For(0,sources.Count,new ParallelOptions{CancellationToken=cancel,MaxDegreeOfParallelism=Math.Min(4,Environment.ProcessorCount)},i=>{
string target=Path.Combine(obj,i.ToString("D4")+".o");objects[i]=target;
Run(clang,new[]{"-c","-std=c11","-O3","-flto=thin","-ffp-contract=off","-fno-fast-math","-fvisibility=hidden","-DMODULE_GAME_ID=\"GXSE8P\"","-DDOLRECOMP_CPU_HEADER=\"core/cpu.h\"","-I",gen,"-I",Path.Combine(support,"include"),"-I",Path.Combine(support,"abi"),"-I",obj,sources[i],"-o",target},root,cancel,output);
int done=Interlocked.Increment(ref complete);progress(35+done*50/sources.Count,"Building native code ("+done+" / "+sources.Count+")...");
});
progress(90,"Finishing the native module...");string module=Path.Combine(stage,"gGXSE8P_recomp.dll"),rsp=Path.Combine(obj,"link.rsp");File.WriteAllLines(rsp,objects.Select(p=>"\""+p.Replace('\\','/')+"\""),new UTF8Encoding(false));
Run(clang,new[]{"-shared","-flto=thin","-fuse-ld=lld","--ld-path="+Path.Combine(tools,"llvm","bin","ld.lld.exe"),"@"+rsp,"-o",module},root,cancel,output);
Run(Path.Combine(root,"native-port","bin","moderngekko-module-info.exe"),new[]{module},root,cancel,output);
cancel.ThrowIfCancellationRequested();progress(98,"Saving your installation...");
string destination=Path.Combine(root,"native-port","bin","gGXSE8P_recomp.dll");
File.Move(module,destination);try{Directory.Move(disc,Path.Combine(root,"disc"));}catch{File.Delete(destination);throw;}
File.WriteAllText(Path.Combine(root,"installer","import-complete.txt"),"GXSE8P revision 0\nDOL SHA256="+DolHash+"\nREL SHA256="+RelHash+"\n",new UTF8Encoding(false));
progress(100,"Ready for adventure!");
}finally{if(Directory.Exists(stage))Directory.Delete(stage,true);}
}
}
}
}
