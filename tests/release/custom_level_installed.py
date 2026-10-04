"""Exercise original Sonic physics on an authored level; requires a local game import.

Usage: custom_level_installed.py INSTALL OUTPUT STARTER.bin [--native]
The test's temporary player placements isolate ramp/fall/goal collision checks;
jumping and movement are driven by the game's ordinary controller input.
No game files or save states are copied into the test report.
"""
import argparse,json,os,pathlib,struct,subprocess,time
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('root',type=pathlib.Path);parser.add_argument('output',type=pathlib.Path);parser.add_argument('level',type=pathlib.Path);parser.add_argument('--native',action='store_true')
parser.add_argument('--runner',type=pathlib.Path,help='Optional development runner with the existing local game import')
args=parser.parse_args();root=args.root.resolve();out=args.output.resolve();out.mkdir();(out/'commands').mkdir()
env={k.upper():v for k,v in os.environ.items()};env['MODERNGEKKO_STATICRECOMP']='1' if args.native else '0';env['PATH']=env.get('SYSTEMROOT','C:/Windows')+'/System32;'+env.get('SYSTEMROOT','C:/Windows')
seq=0;checks={};runner=args.runner.resolve() if args.runner else root/'native-port/bin/moderngekko-run.exe'
with (out/'runtime.log').open('w') as log:
 p=subprocess.Popen([str(runner),'--game',str(root/'disc'),'--module',str(root/'native-port/bin/gGXSE8P_recomp.dll'),'--user-dir',str(out/'user'),'--headless','--audio','Null','--graphics','Vulkan','--automation-dir',str(out),'--custom-level',str(args.level.resolve())],cwd=runner.parent,env=env,stdout=log,stderr=subprocess.STDOUT)
 def wait(pred,seconds=60):
  deadline=time.monotonic()+seconds
  while not pred():
   if p.poll() is not None:raise RuntimeError('Runtime exited early: '+str(p.returncode))
   if time.monotonic()>deadline:raise TimeoutError('Runtime did not acknowledge command')
   time.sleep(.025)
 def command(text):
  global seq
  seq+=1;name=f'{seq:04d}.txt';temp=out/(name+'.pending');temp.write_text(text+'\n');temp.rename(out/'commands'/name)
  wait(lambda:(out/'processed'/name).exists() or (out/'failed'/name).exists())
  if (out/'failed'/name).exists():raise RuntimeError('Rejected command: '+text)
 def memory(address,n):
  path=out/'read.bin';command(f'command=read_memory\naddress={address:#x}\nsize={n}\npath={path}');return path.read_bytes()
 def write(address,data):command(f'command=write_memory\naddress={address:#x}\ndata={data.hex()}')
 def frames(n,**pad):
  command('command=resume');command('command=pad_frames\nport=0\nframes='+str(n)+''.join('\n'+k+'='+str(v) for k,v in pad.items()));command('command=pause')
 def position():return struct.unpack('>fff',memory(player+32,12))
 def put(x,y,z):
  write(player+32,struct.pack('>fff',x,y,z));write(player,b'\x01');write(player+4,b'\0\0');pw=struct.unpack('>I',memory(0x80845484,4))[0];write(pw+0x38,b'\0'*12)
 def require(name,pred,detail):
  checks[name]=detail
  if not pred:raise AssertionError(name+': '+str(detail))
  print('PASS',name,detail,flush=True)
 try:
  wait(lambda:(out/'status.txt').exists() and 'booted=1' in (out/'status.txt').read_text())
  command('command=pad_frames\nport=0\nframes=240');command('command=pause')
  player=struct.unpack('>I',memory(0x80845480,4))[0];start=position();require('custom geometry startup', '[levels] terrain ready' in (out/'runtime.log').read_text() and abs(start[1]-10000)<1,start)
  command('command=screenshot\npath='+str(out/'game.png'));frames(4)
  frames(10,a=1);jump=position();require('original jump input',jump[1]>start[1]+2,jump);frames(90);landing=position();require('platform collision',abs(landing[1]-10000)<1,landing)
  frames(20,main_y=.5);moved=position();require('original movement input',abs(moved[0]-landing[0])+abs(moved[2]-landing[2])>1,moved)
  frames(3,z=1);frames(60);reset=position();require('controller restart',abs(reset[0])<1 and abs(reset[2])<1 and abs(reset[1]-10000)<1,reset)
  put(0,10050,100);frames(60);ramp=position();require('ramp collision',10010<ramp[1]<10020 and 70<ramp[2]<130,ramp)
  command('command=screenshot\npath='+str(out/'ramp.png'));frames(4)
  camera=struct.unpack('>I',memory(0x806b44b0,4))[0];before=memory(camera+24,4);frames(20,c_x=.7);after=memory(camera+24,4);require('right-stick camera rotation',before!=after,{'before':before.hex(),'after':after.hex()})
  put(500,9800,500);frames(90);fall=position();require('fall respawn',abs(fall[0])<1 and abs(fall[2])<1 and abs(fall[1]-10000)<1,fall)
  put(0,10030,180);command('command=resume');code=p.wait(timeout=30);require('finish returns to launcher',code==0 and '[levels] level cleared' in (out/'runtime.log').read_text(),{'exit':code})
  (out/'verification.json').write_text(json.dumps({'passed':True,'native':args.native,'checks':checks},indent=2));print('ALL PASSED',flush=True)
 finally:
  if p.poll() is None:p.terminate();p.wait(timeout=10)
