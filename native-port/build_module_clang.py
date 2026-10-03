"""Rebuild the optimized native DOL DLL with Clang and ThinLTO.

Use --compiler to select another installed Windows x64 llvm-mingw compiler.
The build does not replace the packaged DLL until it has been validated.
"""
import argparse
import json
import os
from pathlib import Path
import subprocess
import sys

WB=Path(__file__).resolve().parent.parent
sys.path.insert(0,str(WB))
from workbench_paths import TOOLCHAIN as TOOLS,WORK
ROOT=WB


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--compiler',type=Path)
    parser.add_argument('--jobs',type=int,default=4)
    parser.add_argument('--configure-only',action='store_true')
    args=parser.parse_args()
    manifest=json.loads((WB/'native-port/compiler.json').read_text())
    compiler=args.compiler or Path(manifest['executable'])
    if not compiler.is_file():
        parser.error('Installed clang.exe was not found; supply --compiler with its path.')
    donor=WB/'native-port/ModernGekko/vendor/dolphin'
    build=WORK/'sadx-module-clang'
    cmake=TOOLS/'python-env/Scripts/cmake.exe'
    env=dict(os.environ)
    temp=WORK/'runtime-temp'
    temp.mkdir(parents=True,exist_ok=True)
    env['TEMP']=env['TMP']=str(temp)
    env['PATH']=str(compiler.parent)+';'+env.get('PATH','')
    config=[str(cmake),'-S',str(donor/'module-template'),'-B',str(build),'-G','Ninja',
        '-DCMAKE_C_COMPILER='+str(compiler.resolve()),
        '-DCMAKE_MAKE_PROGRAM='+str(TOOLS/'python-env/Scripts/ninja.exe'),
        '-DCMAKE_BUILD_TYPE=Release','-DGAME_ID=GXSE8P',
        '-DGENERATED_DIR='+str(WB/'native-port/generated/generated'),
        '-DGXRUNTIME_DIR='+str(donor/'GXRuntime'),
        '-DCHASSIS_ABI_DIR='+str(donor/'Source/Core/Core/PowerPC/StaticRecomp'),
        '-DPython3_EXECUTABLE='+str(TOOLS/'python-env/Scripts/python.exe'),
        '-DRECOMPCORE_MODULE_OPT_LEVEL=3','-DRECOMPCORE_MODULE_ENABLE_IPO=ON']
    subprocess.run(config,env=env,cwd=ROOT,check=True)
    if not args.configure_only:
        subprocess.run([str(cmake),'--build',str(build),'-j',str(args.jobs)],
                       env=env,cwd=ROOT,check=True)
        print(build/'gGXSE8P_recomp.dll')


if __name__=='__main__':
    main()
