"""Import the DOL and all neighboring REL modules without interactive map prompts."""
import subprocess
from pathlib import Path
from ghidra_runtime import WB,TOOLS,GHIDRA
from workbench_paths import GHIDRA_RUNTIME

project=WB/'ghidra-projects';project.mkdir(exist_ok=True)
runtime=GHIDRA_RUNTIME
scripts=WB/'scripts';scripts.mkdir(exist_ok=True)
common=[str(TOOLS/'jdk-21.0.12.1+1/bin/java.exe'),'-Xmx8G','-XX:ParallelGCThreads=4','-XX:CICompilerCount=4',
    '-Djava.system.class.loader=ghidra.GhidraClassLoader','-Dfile.encoding=UTF8','-Duser.name=sonic-workbench',
    f'-Duser.home={runtime/"user"}',f'-Dapplication.settingsdir={runtime/"settings"}',
    f'-Dapplication.cachedir={runtime/"cache"}',f'-Dapplication.tempdir={runtime/"temp"}',
    '-cp',str(GHIDRA/'Ghidra/Framework/Utility/lib/Utility.jar'),'ghidra.Ghidra','ghidra.app.util.headless.AnalyzeHeadless',
    str(project),'SonicAdventureDX_Research','-noanalysis','-loader','GameCubeLoader',
    '-loader-autoloadMaps','false','-loader-addSystemMemorySections','false','-max-cpu','4']
for name in ('main.dol','_Main.rel'):
    print('Importing '+name,flush=True)
    args=[*common,'-import',str(WB/'ghidra-inputs'/name)]
    r=subprocess.run(args)
    if r.returncode: raise SystemExit(r.returncode)
