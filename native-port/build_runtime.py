"""Build the pinned ModernGekko chassis using the installed Visual C++ tools."""
import os,subprocess,sys
from pathlib import Path
WB=Path(__file__).resolve().parent.parent
sys.path.insert(0,str(WB))
from workbench_paths import TOOLCHAIN as TOOLS,WORK
WORK.mkdir(parents=True,exist_ok=True)
ROOT=WB
vs=Path('C:/Program Files/Microsoft Visual Studio/18/Community')
batch=vs/'VC/Auxiliary/Build/vcvars64.bat'
env_script=WORK/'collect-msvc-env.cmd'
env_script.write_text(f'@echo off\ncall "{batch}" >nul\nif errorlevel 1 exit /b 1\nset\n')
probe=subprocess.run(['cmd.exe','/d','/c',str(env_script)],cwd=ROOT,
    env={k.upper():v for k,v in os.environ.items()},capture_output=True,text=True)
if probe.returncode: raise RuntimeError('Visual C++ environment could not be initialized: '+probe.stderr)
env={k.upper():v for k,v in os.environ.items()}
for line in probe.stdout.splitlines():
    key,sep,value=line.partition('=')
    if sep and key: env[key.upper()]=value
temp=WORK/'runtime-temp';temp.mkdir(exist_ok=True);env['TEMP']=env['TMP']=str(temp)
env['PATH']=str(TOOLS/'python-env/Scripts')+';'+env.get('PATH','')
cmake=TOOLS/'python-env/Scripts/cmake.exe';build=WORK/'moderngekko-msvc'
args=[str(cmake),'-S',str(WB/'native-port/ModernGekko'),'-B',str(build),'-G','Ninja',
    '-DCMAKE_C_COMPILER=cl','-DCMAKE_CXX_COMPILER=cl','-DCMAKE_BUILD_TYPE=Release',
    '-DCMAKE_OBJECT_PATH_MAX=180','-DBUILD_TESTING=OFF','-DMODERNGEKKO_GAMECUBE_CONTROLLERS=ON',
    '-DMODERNGEKKO_REQUIRED_DISC_ID=GXSE8P','-DMODERNGEKKO_FRONTEND_NAME=SonicAdventureDX',
    '-DMODERNGEKKO_LAUNCHER_OUTPUT_NAME=SonicAdventureDX','-DMODERNGEKKO_USER_DIRECTORY_NAME=sonic-adventure-recomp',
    '-DMODERNGEKKO_DEFAULT_WINDOW_TITLE=SonicAdventureDX','-DDOLRECOMP_WARNINGS_AS_ERRORS=OFF','-DUSE_SYSTEM_LIBS=OFF']
if '--module' in sys.argv:
    donor=WB/'native-port/ModernGekko/vendor/dolphin'
    build=WORK/'sadx-module-native'
    args=[str(cmake),'-S',str(donor/'module-template'),'-B',str(build),'-G','Ninja',
        '-DCMAKE_C_COMPILER=cl','-DCMAKE_BUILD_TYPE=Release','-DGAME_ID=GXSE8P',
        '-DGENERATED_DIR='+str(WB/'native-port/generated/generated'),
        '-DGXRUNTIME_DIR='+str(donor/'GXRuntime'),
        '-DCHASSIS_ABI_DIR='+str(donor/'Source/Core/Core/PowerPC/StaticRecomp'),
        '-DPython3_EXECUTABLE='+str(TOOLS/'python-env/Scripts/python.exe')]
r=subprocess.run(args,env=env,cwd=ROOT)
if r.returncode: raise SystemExit(r.returncode)
if '--configure-only' not in sys.argv:
    command=[str(cmake),'--build',str(build),'-j','6']
    if '--runner' in sys.argv: command+=['--target','moderngekko-run']
    raise SystemExit(subprocess.run(command,env=env,cwd=ROOT).returncode)
