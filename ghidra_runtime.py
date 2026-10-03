"""Start portable Ghidra with all caches and settings inside this workspace."""
import os
from pathlib import Path
from workbench_paths import GHIDRA_RUNTIME

WB=Path(__file__).resolve().parent
TOOLS=Path(r'C:\decomp\sonic-adventure-gc')
GHIDRA=TOOLS/'ghidra_12.1.4_PUBLIC'
def start():
    os.environ['JAVA_HOME']=str(TOOLS/'jdk-21.0.12.1+1')
    os.environ['JAVA_HOME_OVERRIDE']=os.environ['JAVA_HOME']
    os.environ['GHIDRA_INSTALL_DIR']=str(GHIDRA)
    import pyghidra
    if pyghidra.started(): return
    from pyghidra.launcher import HeadlessPyGhidraLauncher
    runtime=GHIDRA_RUNTIME
    for part in ('user','settings','cache','temp'): (runtime/part).mkdir(parents=True,exist_ok=True)
    launcher=HeadlessPyGhidraLauncher(verbose=False,install_dir=GHIDRA)
    launcher.vm_args += ['-Xmx8G','-XX:ParallelGCThreads=4','-XX:CICompilerCount=4','-Duser.name=sonic-workbench',
        f'-Duser.home={runtime/"user"}',f'-Dapplication.settingsdir={runtime/"settings"}',
        f'-Dapplication.cachedir={runtime/"cache"}',f'-Dapplication.tempdir={runtime/"temp"}']
    launcher.start()
