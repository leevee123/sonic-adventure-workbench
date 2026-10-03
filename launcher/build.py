"""Build the standalone launcher with Windows' existing .NET Framework compiler."""
from pathlib import Path
import subprocess
import sys

HERE=Path(__file__).resolve().parent
WB=HERE.parent
sys.path.insert(0,str(WB))
from workbench_paths import WORK
BUILD=WORK/'sonic-launcher-build'
BUILD.mkdir(parents=True,exist_ok=True)
CSC=Path('C:/Windows/Microsoft.NET/Framework64/v4.0.30319/csc.exe')
COMMON=[str(CSC),'/nologo','/target:winexe','/optimize+','/platform:x64',
        '/r:System.Drawing.dll','/r:System.Windows.Forms.dll',
        '/win32manifest:'+str(HERE/'app.manifest')]
bootstrap=BUILD/'launcher-bootstrap.exe'
subprocess.run(COMMON+['/out:'+str(bootstrap),str(HERE/'Launcher.cs'),str(HERE/'Controller.cs')],check=True)
subprocess.run([str(bootstrap),'--root',str(WB),'--write-icon',str(HERE/'ring.ico')],check=True)
exe=WB/'Sonic Launcher.exe'
subprocess.run(COMMON+['/win32icon:'+str(HERE/'ring.ico'),'/out:'+str(exe),str(HERE/'Launcher.cs')],check=True)
print(exe)
