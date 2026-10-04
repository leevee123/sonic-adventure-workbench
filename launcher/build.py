"""Build the Windows launcher, uninstaller and optional installer (game dump required)."""
import argparse
from pathlib import Path
import subprocess
HERE = Path(__file__).resolve().parent
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("--output", type=Path, default=HERE.parent)
parser.add_argument("--payload", type=Path, help="Reviewed Runtime.zip without game data to embed in Setup")
args = parser.parse_args()
args.output.mkdir(parents=True, exist_ok=True)
csc = Path("C:/Windows/Microsoft.NET/Framework64/v4.0.30319/csc.exe")
if not csc.exists():
    raise SystemExit("Windows x64 .NET Framework compiler was not found.")
def win(path):
    return str(path.resolve()).replace("/", "\\")
common = [str(csc), "/nologo", "/target:winexe", "/optimize+", "/platform:x64",
          "/r:System.Drawing.dll", "/r:System.Windows.Forms.dll",
          "/win32manifest:" + win(HERE / "app.manifest"),
          "/win32icon:" + win(HERE / "ring.ico")]
launcher = args.output / "Sonic Launcher.exe"
sources=[win(HERE/name) for name in ("Launcher.cs","Controller.cs","Installation.cs")]
subprocess.run(common + ["/main:SonicLauncher.Program", "/out:" + win(launcher)] + sources, check=True)
print(launcher)
uninstall=args.output/"Uninstall Sonic Adventure DX.exe"
subprocess.run(common+["/main:SonicLauncher.UninstallProgram","/out:"+win(uninstall)]+sources,check=True)
print(uninstall)
if args.payload:
    if not args.payload.is_file():
        raise SystemExit("Runtime payload does not exist.")
    setup = args.output / "SonicAdventureDX-Setup.exe"
    subprocess.run(common + ["/main:SonicLauncher.SetupProgram",
        "/r:System.IO.Compression.dll", "/r:System.IO.Compression.FileSystem.dll",
        "/resource:" + win(args.payload) + ",RuntimePayload", "/out:" + win(setup)] +
        [win(HERE / name) for name in ("Launcher.cs", "Controller.cs", "Installation.cs", "Importer.cs", "Setup.cs")], check=True)
    print(setup)
