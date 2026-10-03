"""Prepare validated DOL/REL inputs; keep original extracted disc files untouched."""
import hashlib, json, re, shutil, struct
from pathlib import Path

ROOT = Path(__file__).resolve().parent

def sacompgc_decode(data, max_size=64*1024*1024):
    # Format behavior checked against https://github.com/X-Hax/SACompGC.
    if data[:8]!=b'SaCompGC': raise ValueError('missing SaCompGC header')
    size=struct.unpack_from('>I',data,8)[0]&0x0fffffff
    if size>max_size: raise ValueError('SaCompGC output limit')
    distance_bits,length_bits=data[12:14]
    pos=16;bits=0;control=0;out=bytearray()
    def read(n):
        nonlocal pos,bits,control
        if bits<n:
            needed=n-bits
            high=control<<needed
            if pos+4>len(data): raise ValueError('truncated SaCompGC input')
            word=struct.unpack_from('>I',data,pos)[0]
            pos+=4;bits=32-needed;control=word>>needed
            return high|(word&((1<<needed)-1))
        result=control&((1<<n)-1);control>>=n;bits-=n;return result
    while len(out)<size:
        if read(1): out.append(read(8))
        else:
            distance=read(distance_bits)+1;length=read(length_bits)+2
            if distance>len(out) or len(out)+length>size: raise ValueError('invalid SaCompGC backreference')
            for _ in range(length): out.append(out[-distance])
    return bytes(out)

def main():
    prepared=ROOT/'prepared';prepared.mkdir(exist_ok=True)
    rels=prepared/'rels';rels.mkdir(exist_ok=True)
    orig=ROOT/'sadx/orig/GXSE8P'
    (orig/'sys').mkdir(parents=True,exist_ok=True);(orig/'files').mkdir(exist_ok=True)
    dol=ROOT/'disc/sys/main.dol'
    shutil.copy2(dol,prepared/'main.dol');shutil.copy2(dol,orig/'sys/main.dol')
    expected={}
    cfg=(ROOT/'sadx/config/GXSE8P/config.yml').read_text()
    for path,sha in re.findall(r'object:\s*(\S+)\s*\n\s*hash:\s*([0-9a-f]+)',cfg): expected[Path(path).name]=sha
    rows=[]
    for src in sorted((ROOT/'disc/files').glob('*.rel')):
        data=src.read_bytes();header=data.find(b'SaCompGC',0,256);compressed=header>=0
        if compressed: data=sacompgc_decode(data[header:])
        sha=hashlib.sha1(data).hexdigest()
        want=expected.get(src.name)
        if want is not None and sha!=want: raise ValueError(f'{src.name}: hash mismatch {sha} != {want}')
        (rels/src.name).write_bytes(data);(orig/'files'/src.name).write_bytes(data)
        rows.append({'file':src.name,'compressed':compressed,'original_bytes':src.stat().st_size,'bytes':len(data),'sha1':sha,'module_id':struct.unpack_from('>I',data)[0],'matched_reference':sha==want if want else None})
        print(f'{src.name}: {len(data)} bytes, validated={sha==want}',flush=True)
    sha=hashlib.sha1(dol.read_bytes()).hexdigest()
    if sha!=expected['main.dol']: raise ValueError('DOL hash mismatch')
    result={'game_id':'GXSE8P','revision':0,'dol_sha1':sha,'module_count':len(rows),'modules':rows}
    (ROOT/'input-manifest.json').write_text(json.dumps(result,indent=2))
    print(f'Validated main.dol and {len(rows)} REL modules',flush=True)

if __name__=='__main__': main()
