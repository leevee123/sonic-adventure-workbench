"""Measure this prototype using a fixed gameplay save and the runtime command API.

Run with the workbench's Python environment. Logs, memory samples, a screenshot,
and the measured wall times are retained in a fresh --output directory.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import subprocess
import struct
import time

WB = Path(__file__).resolve().parent.parent


def sha256(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--exe', type=Path, default=WB/'native-port/bin/moderngekko-run.exe')
    p.add_argument('--module', type=Path, default=WB/'native-port/bin/gGXSE8P_recomp.dll')
    p.add_argument('--user-dir', type=Path, default=WB/'native-port/runtime-user')
    p.add_argument('--state', type=Path)
    p.add_argument('--output', type=Path, required=True)
    p.add_argument('--frames', type=int, default=360)
    p.add_argument('--repeat', type=int, default=1)
    p.add_argument('--profile', action='store_true')
    p.add_argument('--jit', action='store_true', help='Use the hardware runtime JIT CPU instead of the native DOL module')
    p.add_argument('--validate-input', action='store_true',
                   help='Verify jump and movement using the supplied Chaos 0 gameplay save')
    a = p.parse_args()
    if a.validate_input and not a.state:
        p.error('--validate-input requires the Chaos 0 gameplay --state')
    a.output = a.output.resolve()
    a.output.mkdir(parents=True, exist_ok=False)
    (a.output/'commands').mkdir()
    env = dict(os.environ)
    if a.profile:
        env['STATICRECOMP_DISPATCH_SAMPLES'] = '1'
    env['MODERNGEKKO_STATICRECOMP'] = '0' if a.jit else '1'
    result = {'exe':str(a.exe.resolve()), 'exe_sha256':sha256(a.exe),
              'module':str(a.module.resolve()), 'module_sha256':sha256(a.module),
              'user_dir':str(a.user_dir.resolve()), 'frames':a.frames,
              'state':str(a.state.resolve()) if a.state else None,
              'state_sha256':sha256(a.state) if a.state else None,
              'profile':a.profile, 'cpu_mode':'jit' if a.jit else 'native_dol', 'runs':[]}
    sequence = 0
    started = time.perf_counter()
    with (a.output/'runtime.log').open('w', encoding='utf-8') as log:
        proc = subprocess.Popen([str(a.exe.resolve()), '--game',str(WB/'disc'),
            '--module',str(a.module.resolve()), '--user-dir',str(a.user_dir.resolve()),
            '--headless', '--graphics','Vulkan', '--audio','Null',
            '--automation-dir',str(a.output)], cwd=WB/'native-port/bin', env=env,
            stdout=log, stderr=subprocess.STDOUT,
            creationflags=subprocess.CREATE_NO_WINDOW)

        def status():
            try:
                return dict(line.split('=',1) for line in
                    (a.output/'status.txt').read_text().splitlines() if '=' in line)
            except (FileNotFoundError, PermissionError):
                return {}

        def until(condition, timeout=90):
            deadline = time.perf_counter()+timeout
            while time.perf_counter()<deadline:
                if condition():
                    return
                if proc.poll() is not None:
                    raise RuntimeError(f'Runtime exited early: {proc.returncode}')
                time.sleep(.025)
            raise TimeoutError('Runtime command/status deadline exceeded')

        def command(op, **fields):
            nonlocal sequence
            sequence += 1
            name=f'{sequence:04d}-{op}.txt'
            temporary=a.output/'commands'/(name+'.pending')
            temporary.write_text('\n'.join([f'command={op}']+
                [f'{key}={value}' for key,value in fields.items()])+'\n')
            temporary.rename(a.output/'commands'/name)
            until(lambda:(a.output/'processed'/name).exists() or
                         (a.output/'failed'/name).exists())
            if (a.output/'failed'/name).exists():
                raise RuntimeError(f'{name} failed: {status()}')
            until(lambda:int(status().get('processed_commands','0'))>=sequence)

        try:
            until(lambda:status().get('booted')=='1')
            result['booted_ms']=round((time.perf_counter()-started)*1000,2)
            until(lambda:int(status().get('frame_count','0'))>0)
            result['first_frame_ms']=round((time.perf_counter()-started)*1000,2)
            command('pause')
            for trial in range(a.repeat):
                if a.state:
                    load_start=time.perf_counter()
                    command('load_state', path=a.state.resolve())
                    # State::LoadAs runs through the CPU-thread guard; pause again
                    # and wait for the loaded frame counter to reach status.txt.
                    command('pause')
                    time.sleep(.3)
                    result['runs'].append({'load_state_ms':round(
                        (time.perf_counter()-load_start)*1000,2)})
                else:
                    result['runs'].append({})
                command('resume')
                command('pad_frames', port=0, frames=60)
                command('pause')
                before=status()
                command('read_memory', address='0x807fd6a0', size=64,
                        path=a.output/f'player-{trial}-before.bin')
                command('resume')
                sample_start=time.perf_counter()
                command('pad_frames', port=0, frames=a.frames, main_x=.8)
                command('pause')
                wall_ms=(time.perf_counter()-sample_start)*1000
                command('read_memory', address='0x807fd6a0', size=64,
                        path=a.output/f'player-{trial}-after.bin')
                after=status()
                delta=int(after['frame_count'])-int(before['frame_count'])
                result['runs'][-1].update({'wall_ms':round(wall_ms,2),
                    'actual_frames':delta, 'frames_per_second':round(delta*1000/wall_ms,3),
                    'before':before, 'after':after})
                print(json.dumps({'trial':trial,**{key:result['runs'][-1][key]
                    for key in ['wall_ms','actual_frames','frames_per_second']}}),flush=True)
            if a.validate_input:
                def player(label):
                    sample=a.output/(label+'.bin')
                    command('read_memory', address='0x807fd6a0', size=64,path=sample)
                    data=sample.read_bytes()
                    return {'mode':data[0], 'position':list(struct.unpack('>fff',data[32:44]))}
                command('load_state',path=a.state.resolve())
                command('pause')
                command('resume')
                command('pad_frames',port=0,frames=30)
                command('pause')
                jump_before=player('jump-before')
                command('resume')
                command('pad_frames',port=0,frames=14,a=1)
                command('pause')
                jump_after=player('jump-after')
                rise=jump_after['position'][1]-jump_before['position'][1]
                assert rise>5, f'Jump did not produce the expected rise: {rise}'
                command('screenshot',path=a.output/'jump.png')
                command('resume')
                command('pad_frames',port=0,frames=80,main_x=.8)
                command('pause')
                move_after=player('move-after')
                displacement=sum((move_after['position'][i]-jump_after['position'][i])**2
                                 for i in [0,2])**.5
                assert displacement>10, f'Movement did not change position: {displacement}'
                result['input_validation']={'jump_before':jump_before,'jump_after':jump_after,
                    'jump_rise':rise,'move_after':move_after,'horizontal_displacement':displacement}
                print(json.dumps({'input_validation':result['input_validation']}),flush=True)
            command('screenshot',path=a.output/'gameplay.png')
            command('resume')
            command('pad_frames', port=0, frames=3)
            command('pause')
            command('stop')
            result['exit_code']=proc.wait(timeout=30)
            if result['exit_code']:
                raise RuntimeError(f'Runtime exited with {result["exit_code"]}')
        except BaseException as error:
            result['error']=repr(error)
            if proc.poll() is None:
                try:
                    command('stop')
                    proc.wait(timeout=15)
                except Exception:
                    proc.terminate()
                    proc.wait(timeout=15)
            result['exit_code']=proc.returncode
            raise
        finally:
            result['total_ms']=round((time.perf_counter()-started)*1000,2)
            (a.output/'benchmark.json').write_text(json.dumps(result,indent=2)+'\n')
    runtime_log=(a.output/'runtime.log').read_text(encoding='utf-8')
    found=re.search(r'\[staticrecomp\] shutdown: (.*)',runtime_log)
    if found:
        result['counters']={key:int(value) for key,value in
            re.findall(r'(\w+)=(\d+)',found.group(1))}
        assert result['counters']['smc_failed']==0
    (a.output/'benchmark.json').write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps({key:result[key] for key in
        ['booted_ms','first_frame_ms','exit_code']}),flush=True)


if __name__=='__main__':
    main()
