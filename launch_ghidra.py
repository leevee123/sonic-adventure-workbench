"""Open the installed GUI with the same settings and owner as the MCP server."""
import subprocess
from ghidra_runtime import WB,TOOLS,GHIDRA
from workbench_paths import GHIDRA_RUNTIME
runtime=GHIDRA_RUNTIME
args=[str(TOOLS/'jdk-21.0.12.1+1/bin/java.exe'),'-Xmx8G',
    '-Djava.system.class.loader=ghidra.GhidraClassLoader','-Dfile.encoding=UTF8','-Duser.name=sonic-workbench',
    f'-Duser.home={runtime/"user"}',f'-Dapplication.settingsdir={runtime/"settings"}',
    f'-Dapplication.cachedir={runtime/"cache"}',f'-Dapplication.tempdir={runtime/"temp"}',
    '-cp',str(GHIDRA/'Ghidra/Framework/Utility/lib/Utility.jar'),'ghidra.Ghidra','ghidra.GhidraRun',
    str(WB/'ghidra-projects/SonicAdventureDX_Research.gpr')]
subprocess.Popen(args,cwd=WB,creationflags=subprocess.CREATE_NO_WINDOW)
