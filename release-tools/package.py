"""Build the installer payload without game data from reviewed runtime/tool binaries."""
import argparse,hashlib,json,pathlib,shutil,zipfile
ROOT=pathlib.Path(__file__).resolve().parent
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument("--workbench",type=pathlib.Path,default=pathlib.Path("C:/games/sonic-adventure-workbench"))
parser.add_argument("--compiler",type=pathlib.Path,required=True)
args=parser.parse_args()
WB=args.workbench
COMPILER=args.compiler
PAYLOAD=ROOT/"installer/payload"
if PAYLOAD.exists():
 if not PAYLOAD.resolve().is_relative_to(ROOT.resolve()):raise RuntimeError("Payload cleanup escapes workspace")
 shutil.rmtree(PAYLOAD)
PAYLOAD.mkdir(parents=True,exist_ok=True)
def copy(source,target):
 target=PAYLOAD/target;target.parent.mkdir(parents=True,exist_ok=True)
 if source.is_dir():shutil.copytree(source,target,dirs_exist_ok=True)
 else:shutil.copy2(source,target)
copy(ROOT/"Sonic Launcher.exe",pathlib.Path("Sonic Launcher.exe"))
copy(ROOT/"Uninstall Sonic Adventure DX.exe",pathlib.Path("Uninstall Sonic Adventure DX.exe"))
for name in ["moderngekko-run.exe","dolrecomp.exe","moderngekko-module-info.exe"]:
 copy((ROOT if name=="moderngekko-run.exe" else WB)/"native-port/bin"/name,pathlib.Path("native-port/bin")/name)
copy(WB/"native-port/bin/Sys",pathlib.Path("native-port/bin/Sys"))
copy(ROOT/"installer/disc-tool-build/x64/DolphinTool.exe",pathlib.Path("installer/tools/DolphinTool.exe"))
copy(ROOT/"installer/redistributables/CRT",pathlib.Path("native-port/bin"))
copy(ROOT/"installer/redistributables/CRT",pathlib.Path("installer/tools"))
copy(ROOT/"installer/redistributables/Redist.txt",pathlib.Path("installer/licenses/Visual-Cpp-Redist.txt"))
for name in ["clang.exe","clang-23.exe","ld.lld.exe","x86_64-w64-windows-gnu.cfg","mingw32-common.cfg","libclang-cpp.dll","libLLVM-23.dll","libc++.dll","libunwind.dll","libwinpthread-1.dll","libffi-8.dll"]:
 source=COMPILER/"bin"/name
 if source.exists():copy(source,pathlib.Path("installer/tools/llvm/bin")/name)
for name in ["x86_64-w64-mingw32","include","lib/clang","share/licenses"]:
 source=COMPILER/name
 if source.exists():copy(source,pathlib.Path("installer/tools/llvm")/name)
copy(COMPILER/"LICENSE.TXT",pathlib.Path("installer/tools/llvm/LICENSE.TXT"))
donor=WB/"native-port/ModernGekko/vendor/dolphin"
copy(donor/"module-template/module_export.c",pathlib.Path("installer/module-support/module_export.c"))
copy(donor/"GXRuntime/include",pathlib.Path("installer/module-support/include"))
for name in ["cpu.c","cpu_exception.c","cpu_interpreter.c","cpu_interpreter_table.c","cpu_interpreter_float.c","cpu_interpreter_integer.c"]:
 copy(donor/"GXRuntime/src/core"/name,pathlib.Path("installer/module-support/core")/name)
for p in (donor/"GXRuntime/src/core").glob("*.h"):
 copy(p,pathlib.Path("installer/module-support/core")/p.name)
for p in (donor/"Source/Core/Core/PowerPC/StaticRecomp").glob("*.h"):
 copy(p,pathlib.Path("installer/module-support/abi")/p.name)
for file in ["README.md","THIRD_PARTY.md","VERIFICATION.md","CHANGELOG.md","NATIVE-PORT.md","CUSTOM-LEVELS.md","MULTIPLAYER.md"]:copy(ROOT/file,pathlib.Path(file))
copy(WB/"native-port/moderngekko-pin.txt",pathlib.Path("native-port/moderngekko-pin.txt"))
(PAYLOAD/"native-port/runtime-user").mkdir(parents=True,exist_ok=True)
(PAYLOAD/"native-port/runtime-user/config.ini").write_text("[Video]\nresolution=1920x1080\nfullscreen=false\nshow_fps_in_title=true\nwidescreen=false\n[Gameplay]\ninstant_light_dash=false\n[Input]\ncontroller=keyboard\n")
source_zip=PAYLOAD/"source/ModernGekko-Source.zip";source_zip.parent.mkdir(exist_ok=True)
source_root=WB/"native-port/ModernGekko"
with zipfile.ZipFile(source_zip,"w",zipfile.ZIP_DEFLATED,compresslevel=6) as z:
 for p in source_root.rglob("*"):
  if not p.is_file() or ".git" in p.parts or "Binary" in p.parts:continue
  rel=p.relative_to(source_root)
  if p.suffix.lower() in [".dol",".rel",".rvz",".iso",".gcm",".sav"]:raise RuntimeError("Game data in runtime source: "+str(rel))
  overlay=ROOT/"native-port/ModernGekko"/rel
  z.write(overlay if overlay.is_file() else p,rel.as_posix())
 for new_header in ["sonic_enhancements.hpp","sonic_levels.hpp","sonic_multiplayer.hpp","sonic_split_renderer.hpp"]:
  if not (source_root/"src/runtime"/new_header).exists():z.write(ROOT/"native-port/ModernGekko/src/runtime"/new_header,"src/runtime/"+new_header)
 z.write(ROOT/"package.py","release-tools/package.py")
 z.write(ROOT/"BUILD.md","BUILD-SONIC.md")
 z.write(ROOT/"VERIFICATION.md","VERIFICATION-SONIC.md")
 z.write(ROOT/"tests/enhancements.cpp","sonic-tests/enhancements.cpp")
 z.write(ROOT/"tests/InstallerChecks.cs","sonic-tests/InstallerChecks.cs")
 z.write(ROOT/"tests/InstallationChecks.cs","sonic-tests/InstallationChecks.cs")
 z.write(ROOT/"tests/UpdateChecks.cs","sonic-tests/UpdateChecks.cs")
 z.write(ROOT/"tests/RegistrationChecks.cs","sonic-tests/RegistrationChecks.cs")
 z.write(ROOT/"tests/boot_installed.py","sonic-tests/boot_installed.py")
 for name in ["LevelChecks.cs","levels.cpp","custom_level_installed.py","multiplayer.cpp","multiplayer_probe.py","sample-level.bin"]:z.write(ROOT/"tests"/name,"sonic-tests/"+name)
 z.write(ROOT/"CUSTOM-LEVELS.md","CUSTOM-LEVELS-SONIC.md")
 z.write(ROOT/"MULTIPLAYER.md","MULTIPLAYER-SONIC.md")
 z.write(ROOT/"release.py","release-tools/release.py")
 z.write(ROOT/"CHANGELOG.md","CHANGELOG-SONIC.md")
 z.write(ROOT/"NATIVE-PORT.md","NATIVE-PORT-SONIC.md")
 for p in (ROOT/"launcher").glob("*"):
  if p.is_file() and p.suffix in [".cs",".py",".ps1",".manifest",".ico"]:z.write(p,"sonic-launcher/"+p.name)
shutil.copy2(ROOT/"BUILD.md",PAYLOAD/"source/BUILD.md")
files={}
for p in PAYLOAD.rglob("*"):
 if not p.is_file():continue
 rel=p.relative_to(PAYLOAD).as_posix()
 if p.suffix.lower() in [".dol",".rel",".rvz",".iso",".gcm",".sav",".gci",".pvm"] or p.name=="gGXSE8P_recomp.dll":raise RuntimeError("Private game data in payload: "+rel)
 files[rel]={"bytes":p.stat().st_size,"sha256":hashlib.sha256(p.read_bytes()).hexdigest()}
(PAYLOAD/"installer/payload-manifest.json").write_text(json.dumps(files,indent=2))
with zipfile.ZipFile(ROOT/"Runtime.zip","w",zipfile.ZIP_DEFLATED,compresslevel=6) as z:
 for p in PAYLOAD.rglob("*"):
  if p.is_file():z.write(p,p.relative_to(PAYLOAD).as_posix())
print(json.dumps({"files":len(files),"payload_bytes":sum(v["bytes"] for v in files.values()),"zip_bytes":(ROOT/"Runtime.zip").stat().st_size},indent=2))
