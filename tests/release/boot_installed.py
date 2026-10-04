"""Smoke-test an installed native module; game files stay local."""
import argparse,json,os,pathlib,subprocess,time
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument("root",type=pathlib.Path)
parser.add_argument("output",type=pathlib.Path)
parser.add_argument("--state",type=pathlib.Path)
args=parser.parse_args();root=args.root.resolve();out=args.output.resolve();out.mkdir();(out/"commands").mkdir()
env={key.upper():value for key,value in os.environ.items()};env["MODERNGEKKO_STATICRECOMP"]="1";env["PATH"]=env.get("SYSTEMROOT","C:/Windows")+"/System32;"+env.get("SYSTEMROOT","C:/Windows")
runner=root/"native-port/bin/moderngekko-run.exe";started=time.monotonic();sequence=0
with (out/"runtime.log").open("w") as log:
 p=subprocess.Popen([str(runner),"--game",str(root/"disc"),"--module",str(root/"native-port/bin/gGXSE8P_recomp.dll"),"--user-dir",str(out/"user"),"--headless","--audio","Null","--graphics","Vulkan","--automation-dir",str(out)],cwd=runner.parent,env=env,stdout=log,stderr=subprocess.STDOUT)
 def wait(condition):
  deadline=time.monotonic()+60
  while not condition():
   if p.poll() is not None:raise RuntimeError("Runtime exited early: "+str(p.returncode))
   if time.monotonic()>deadline:raise TimeoutError("Runtime command timed out")
   time.sleep(.025)
 def command(text):
  global sequence
  sequence+=1;name=f"{sequence:04d}.txt";temporary=out/(name+".pending");temporary.write_text(text+"\n");temporary.rename(out/"commands"/name)
  wait(lambda:(out/"processed"/name).exists() or (out/"failed"/name).exists())
  if (out/"failed"/name).exists():raise RuntimeError("Runtime rejected command: "+text)
 try:
  wait(lambda:(out/"status.txt").exists() and "booted=1" in (out/"status.txt").read_text());boot=time.monotonic()-started
  if args.state:command("command=load_state\npath="+str(args.state.resolve()))
  command("command=pad_frames\nport=0\nframes=60");command("command=screenshot\npath="+str(out/"game.png"));command("command=pad_frames\nport=0\nframes=4");command("command=stop")
  code=p.wait(timeout=30)
  if code:raise RuntimeError("Native runtime exited with "+str(code))
  result={"passed":True,"exit_code":code,"boot_seconds":boot,"native_module":"locally imported","path":"Windows only","state_loaded":bool(args.state)}
  (out/"verification.json").write_text(json.dumps(result,indent=2));print(json.dumps(result))
 finally:
  if p.poll() is None:p.terminate();p.wait(timeout=10)
