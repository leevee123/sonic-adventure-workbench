"""Private, owned-game shared-world player prototype; never copies game data into releases."""
import argparse,json,math,os,pathlib,struct,subprocess,time
parser=argparse.ArgumentParser();parser.add_argument('output',type=pathlib.Path);parser.add_argument('--native',action='store_true');parser.add_argument('--stage',type=int,choices=range(1,11));parser.add_argument('--inspect-tasks',action='store_true');parser.add_argument('--transition',action='store_true');parser.add_argument('--coast',action='store_true');args=parser.parse_args()
if args.coast and args.stage!=1:parser.error('--coast requires --stage 1')
base=pathlib.Path(__file__).resolve().parent.parent;root=pathlib.Path('C:/games/sonic-adventure-workbench');out=args.output.resolve();out.mkdir();(out/'commands').mkdir()
env={k.upper():v for k,v in os.environ.items()};env['MODERNGEKKO_STATICRECOMP']='1' if args.native else '0';env['PATH']='C:/Windows/System32;C:/Windows'
runner=base/'native-port/bin/moderngekko-run.exe';seq=0
with (out/'runtime.log').open('w') as log:
 launch=[str(runner),'--game',str(root/'disc'),'--module',str(root/'native-port/bin/gGXSE8P_recomp.dll'),'--user-dir',str(out/'user'),'--headless','--audio','Null','--graphics','Vulkan','--automation-dir',str(out),'--split-screen']
 if args.stage is None:launch+=['--custom-level',str(base/'tests/sample-level.bin')]
 p=subprocess.Popen(launch,cwd=runner.parent,env=env,stdout=log,stderr=subprocess.STDOUT)
 def wait(pred,seconds=60):
  deadline=time.monotonic()+seconds
  while not pred():
   if p.poll() is not None:raise RuntimeError('Runtime exited: '+str(p.returncode)+'\n'+(out/'runtime.log').read_text()[-1500:])
   if time.monotonic()>deadline:raise TimeoutError('Runtime command timed out')
   time.sleep(.025)
 def command(text):
  global seq
  seq+=1;name=f'{seq:04d}.txt';temp=out/(name+'.pending');temp.write_text(text+'\n');temp.rename(out/'commands'/name)
  wait(lambda:(out/'processed'/name).exists() or (out/'failed'/name).exists())
  if (out/'failed'/name).exists():raise RuntimeError('Rejected '+text)
 def memory(address,n):
  path=out/'read.bin';command(f'command=read_memory\naddress={address:#x}\nsize={n}\npath={path}');return path.read_bytes()
 def write(address,data):command(f'command=write_memory\naddress={address:#x}\ndata={data.hex()}')
 def frames(n,port=0,**pad):
  command('command=resume');command(f'command=pad_frames\nport={port}\nframes={n}'+''.join('\n'+k+'='+str(v) for k,v in pad.items()));command('command=pause')
 def pos(i):
  w=struct.unpack('>I',memory(0x807a8280+i*4,4))[0];return w,struct.unpack('>fff',memory(w+32,12))
 def word(address,n=4):return int.from_bytes(memory(address,n),'big')
 def teleport(i,xyz):
  work=pos(i)[0];physics=word(0x807a8240+i*4);write(work+32,struct.pack('>fff',*xyz));write(physics+0x38,bytes(12));write(work,bytes([1,0,1]));write(work+4,bytes(2))
 checks={}
 def require(name,predicate,detail):
  checks[name]=detail
  if not predicate:raise AssertionError(name+': '+str(detail))
  print('PASS',name,detail,flush=True)
 try:
  wait(lambda:(out/'status.txt').exists() and 'booted=1' in (out/'status.txt').read_text())
  command('command=pad\nport=1')
  if args.stage is None:frames(330)
  else:
   frames(180)
   for address,value,size in [(0x8074a7a8,1,2),(0x8074a7aa,3,2),(0x8074a7ac,0,2),(0x8074a7c4,0,2),(0x8074a7c6,args.stage,2),(0x8074a7bc,0,2),(0x80845938,9,4)]:write(address,value.to_bytes(size,'big'))
   frames(330)
  a,b=pos(0),pos(1);print('START',a,b,flush=True)
  if args.stage is not None and args.inspect_tasks:
   roots=struct.unpack('>8I',memory(0x807af168,32));tasks=[];seen=set()
   def task_chain(address,level):
    while 0x80004000<=address<0x817fff00 and address not in seen and len(seen)<300:
     seen.add(address);values=struct.unpack('>12I',memory(address,48));tasks.append({'address':hex(address),'level':level,'exec':hex(values[4]),'display':hex(values[5]),'work':hex(values[8])});task_chain(values[3],level);address=values[0]
   for level,address in enumerate(roots):task_chain(address,level)
   (out/'tasks.json').write_text(json.dumps(tasks,indent=2))
  require('two_original_player_tasks',a[0]!=b[0] and all(0x80004000<=v[0]<0x817fff00 for v in [a,b]) and all(math.isfinite(x) for v in [a,b] for x in v[1]),[a,b])
  command('command=screenshot\npath='+str(out/'two-players.png'));frames(4)
  frames(10,port=1,a=1);jump=pos(1);one=pos(0)
  if jump[1][1]<=b[1][1]+5:
   print('INPUT STATE',[(memory(v[0],32).hex(),memory(struct.unpack('>I',memory(0x807a8240+i*4,4))[0],100).hex()) for i,v in enumerate([a,b])],memory(0x8074c8e0,24).hex(),flush=True)
   frames(10,port=0,a=1);print('FIRST PAD',pos(0),pos(1),flush=True)
  require('pad_two_jumps_independently',jump[1][1]>b[1][1]+5 and math.dist(a[1],one[1])<2,[one,jump])
  frames(90,port=1);before=pos(1);frames(30,port=1,main_y=.7);moved=pos(1);one=pos(0)
  require('pad_two_moves_independently',math.dist(before[1],moved[1])>5 and math.dist(a[1],one[1])<2,[one,moved])
  command('command=screenshot\npath='+str(out/'p2-move.png'));frames(4)
  frames(30,port=1,c_x=.8);command('command=screenshot\npath='+str(out/'p2-camera.png'));frames(4,port=1)
  before_camera_move=pos(1);frames(20,port=1,main_y=.7);after_camera_move=pos(1)
  require('movement_uses_player_two_camera',after_camera_move[1][0]<before_camera_move[1][0]-2 and math.dist(pos(0)[1],a[1])<2,[before_camera_move,after_camera_move])
  if args.stage is not None:
   frames(60,port=1);before_pause=[pos(0),pos(1)];frames(6,port=0,start=1);frames(6,port=0);frames(30,port=1,main_y=.7)
   paused=[pos(0),pos(1)];require('pause_stops_both_players',all(math.dist(before_pause[i][1],paused[i][1])<2 for i in range(2)),paused)
   # Automation retains each port's pad state. Release Start on port zero
   # before pressing it again so the game receives a new unpause edge.
   frames(6,port=0,start=1);frames(6,port=0)
   before_unpaused=pos(1);frames(10,port=1,main_y=.7)
   require('unpause_restores_player_two',math.dist(before_unpaused[1],pos(1)[1])>2,[before_unpaused,pos(1)])
   frames(1,port=1)
  if args.coast:
   first=pos(0);teleport(1,(20,4,4));frames(40,port=1,main_y=.7);frames(1,port=1)
   snapshot=memory(0x807a0000,0x60000)
   def peek(address,n=4):
    offset=address-0x807a0000
    return int.from_bytes(snapshot[offset:offset+n],'big') if 0<=offset<=len(snapshot)-n else 0
   beach=int(__import__('re').search(r'water refraction disabled at ([0-9a-f]+)',(out/'runtime.log').read_text())[1],16)-0x1ab30
   roots=[peek(0x807af168+i*4) for i in range(8)];seen=set();footprints=[]
   def effect_chain(task):
    while task and task not in seen and len(seen)<500:
     seen.add(task);work=peek(task+32)
     if peek(task+16)==beach+0x1404 and peek(work+1,1)==1:
      buffer=peek(work+16);footprints.append(peek(buffer+0xaf4))
     effect_chain(peek(task+12));task=peek(task)
   for task in roots:effect_chain(task)
   require('player_two_leaves_original_footprints',any(n>0 for n in footprints),footprints)
   command('command=screenshot\npath='+str(out/'footprints.png'));frames(3,port=1)
   # An ordinary ring over 2,000 units from the stationary first player.
   teleport(1,(1940.61,170.7,964.32));frames(2,port=1)
   ring_task=word(0x807aa61c+137*16+4)
   require('distant_set_object_loads_for_player_two',0x80004000<=ring_task<0x817fff00 and word(ring_task+16)==0x802cc12c+0xeb7bc,hex(ring_task))
   ring_work=word(ring_task+32);xyz=struct.unpack('>fff',memory(ring_work+32,12));rings=word(0x8074c7a8,2)
   teleport(1,(xyz[0],xyz[1]-3,xyz[2]));frames(2,port=1)
   require('player_two_ring_updates_shared_counter',word(0x8074c7a8,2)==rings+1,[rings,word(0x8074c7a8,2)])
   queue=memory(0x807ae878,38*52)
   sound=any(struct.unpack_from('>I',queue,i*52+16)[0]==7 and struct.unpack_from('>I',queue,i*52+4)[0]>0 for i in range(38))
   require('player_two_ring_queues_original_sound',sound,sound)
   lives=word(0x8074c7ad,1);teleport(1,(0,-35,1500));frames(8,port=1)
   require('retail_pit_marks_second_player_dead',bool(word(word(0x807a8244)+6,2)&0x4000),pos(1))
   frames(135,port=1);respawn=pos(1)
   require('pit_respawn_costs_one_shared_life',word(0x8074c7ad,1)==lives-1 and respawn[1][1]>-25 and not(word(word(0x807a8244)+6,2)&0x4000),[lives,word(0x8074c7ad,1),respawn])
   require('second_player_death_preserves_first_player',math.dist(first[1],pos(0)[1])<2,[first,pos(0)])
   before_task=word(0x807a82a4);teleport(0,(5746,406,655));frames(180)
   require('tunnel_loads_next_emerald_coast_section',word(0x8074a7c4,4)==0x10001 and word(0x807a82a4)==before_task,[memory(0x8074a7c4,4).hex(),hex(word(0x807a82a4))])
   before=pos(1);frames(10,port=1,a=1)
   require('second_player_jumps_after_tunnel',pos(1)[1][1]>before[1][1]+5,[before,pos(1)])
   command('command=screenshot\npath='+str(out/'after-tunnel.png'));frames(3,port=1)
  if args.stage is None:
   write(b[0]+36,struct.pack('>f',9000));frames(12,port=1)
   recovered=pos(1);require('player_two_fall_recovery',recovered[1][1]>=9999 and math.dist(pos(0)[1],a[1])<2,recovered)
   frames(10,port=0,a=1);require('pad_one_jumps_independently',pos(0)[1][1]>a[1][1]+5 and abs(pos(1)[1][1]-recovered[1][1])<2,[pos(0),pos(1)])
   frames(90,port=0);frames(5,port=1,main_y=.7);frames(3,port=1,z=1)
   reset=pos(1);require('player_two_reset_button',math.dist((reset[1][0],reset[1][2]),(recovered[1][0],recovered[1][2]))<2 and abs(reset[1][1]-recovered[1][1])<8,reset)
   frames(15,port=1);require('reset_lands_on_geometry',abs(pos(1)[1][1]-recovered[1][1])<2,pos(1))
   goal=struct.unpack_from('<fff',(base/'tests/sample-level.bin').read_bytes(),28)
   physics=struct.unpack('>I',memory(0x807a8244,4))[0]
   write(physics+0x38,bytes(12));write(b[0]+32,struct.pack('>fff',goal[0],goal[1]+10005,goal[2]));frames(4,port=1)
   require('player_one_not_at_finish',math.dist(pos(0)[1],(goal[0],goal[1]+10000,goal[2]))>10,pos(0))
   command('command=resume');p.wait(timeout=30)
   require('player_two_finishes_level','[levels] level cleared' in (out/'runtime.log').read_text(),p.returncode)
  elif args.transition:
   old=pos(1)[0]
   for address,value,size in [(0x8074a7c4,0,2),(0x8074a7c6,2 if args.stage!=2 else 1,2),(0x8074a7bc,0,2),(0x80845938,9,4)]:write(address,value.to_bytes(size,'big'))
   transition=[]
   for i in range(6):
    frames(20,port=1)
    tasks=struct.unpack('>2I',memory(0x807a82a0,8));works=struct.unpack('>2I',memory(0x807a8280,8))
    transition.append({'frames':(i+1)*20,'tasks':list(tasks),'works':list(works),'exec':[memory(t+16,16).hex() if t else '' for t in tasks],'work':[memory(w,16).hex() if w else '' for w in works],'game_mode':memory(0x80845938,4).hex()})
    (out/'transition.json').write_text(json.dumps(transition,indent=2))
   frames(240,port=1);a2,b2=pos(0),pos(1)
   require('fresh_partner_after_stage_change',all(math.isfinite(x) for v in [a2,b2] for x in v[1]) and a2[0]!=b2[0],[a2,b2])
   before=b2;frames(10,port=1,a=1)
   if pos(1)[1][1]<=before[1][1]+5:
    print('STAGE STATE',[(memory(v[0],32).hex(),memory(struct.unpack('>I',memory(0x807a8240+i*4,4))[0],80).hex()) for i,v in enumerate([a2,b2])],flush=True)
    frames(10,port=0,a=1);print('FIRST PAD',pos(0),pos(1),flush=True)
   require('second_pad_after_stage_change',pos(1)[1][1]>before[1][1]+5,[pos(0),pos(1)])
   command('command=screenshot\npath='+str(out/'second-stage.png'));frames(4,port=1)
  require('split_renderer_active','[multiplayer] split renderer active' in (out/'runtime.log').read_text(),True)
  if p.poll() is None:command('command=stop');p.wait(timeout=15)
  runtime_log=(out/'runtime.log').read_text();require('clean_runtime',p.returncode==0 and 'Invalid read' not in runtime_log and 'Invalid write' not in runtime_log and '[multiplayer] failed:' not in runtime_log,p.returncode)
  (out/'verification.json').write_text(json.dumps({'passed':True,'mode':'fast','requested_mode':'native' if args.native else 'fast','stage':args.stage,'checks':checks},indent=2))
 finally:
  if p.poll() is None:p.terminate();p.wait(timeout=10)
