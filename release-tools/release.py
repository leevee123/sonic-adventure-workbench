"""Create and audit the 0.6.1 release artifacts (game dump required)."""
from pathlib import Path
import hashlib, io, json, shutil, zipfile
root=Path(__file__).resolve().parent
dist=root/"dist"
dist.mkdir(exist_ok=True)
forbidden={".dol",".rel",".rvz",".iso",".gcm",".sav",".gci",".pvm"}
def check_names(names,label):
    for name in names:
        if Path(name).suffix.lower() in forbidden or Path(name).name=="gGXSE8P_recomp.dll":
            raise RuntimeError("Private game data in "+label+": "+name)
        if name.startswith(("/", "\\")) or ".." in Path(name).parts:
            raise RuntimeError("Unsafe archive name: "+name)
with zipfile.ZipFile(root/"Runtime.zip") as z:
    check_names(z.namelist(),"runtime payload")
    manifest=json.loads(z.read("installer/payload-manifest.json"))
    for name,record in manifest.items():
        data=z.read(name)
        if len(data)!=record["bytes"] or hashlib.sha256(data).hexdigest()!=record["sha256"]:
            raise RuntimeError("Payload verification failed: "+name)
    with zipfile.ZipFile(io.BytesIO(z.read("source/ModernGekko-Source.zip"))) as source:
        check_names(source.namelist(),"corresponding source")
        if len(source.namelist())!=len(set(source.namelist())):raise RuntimeError("Duplicate source archive entries")
        source_count=len(source.namelist())
release=dist/"v0.6.1"
release.mkdir(exist_ok=True)
shutil.copy2(root/"SonicAdventureDX-Setup.exe",release/"SonicAdventureDX-Setup-0.6.1.exe")
shutil.copy2(root/"installer/payload/source/ModernGekko-Source.zip",release/"ModernGekko-Source-0.6.1.zip")
for name in ["VERIFICATION.md","README.md","CHANGELOG.md","NATIVE-PORT.md","CUSTOM-LEVELS.md","MULTIPLAYER.md"]:shutil.copy2(root/name,release/name)
shutil.copy2(root/"dist/Skyline-Sprint.sadxlevel",release/"Skyline-Sprint.sadxlevel")
hashes={}
for p in sorted(release.iterdir()):
    if p.name in ("SHA256SUMS.txt","package-checks.json"):continue
    hashes[p.name]={"bytes":p.stat().st_size,"sha256":hashlib.sha256(p.read_bytes()).hexdigest()}
(release/"SHA256SUMS.txt").write_text("".join(v["sha256"]+"  "+name+"\n" for name,v in hashes.items()))
report={"runtime_manifest_files":len(manifest),"source_entries":source_count,"private_game_data_in_archives":False,"artifacts":hashes}
(release/"package-checks.json").write_text(json.dumps(report,indent=2))
print(json.dumps(report,indent=2))
