"""Explicit research layout: keep all REL text within branch reach of main.dol.

These are analysis addresses. A native runtime must bind the sections to actual
guest allocations; they are not a claim about retail module residency.
"""
import json, struct
from pathlib import Path

WB=Path(__file__).resolve().parent
def u32(data,off): return struct.unpack_from('>I',data,off)[0]
def align(n,a=32): return (n+a-1)//a*a

def build():
    dol=(WB/'prepared/main.dol').read_bytes()
    dol_end=max([u32(dol,0x48+i*4)+u32(dol,0x90+i*4) for i in range(18) if u32(dol,0x90+i*4)]+[u32(dol,0xD8)+u32(dol,0xDC)])
    code=align(max(0x80400000,dol_end)); code_start=code; data=0x90000000
    modules=[];lines=[]
    files=sorted((WB/'prepared/rels').glob('*.rel'),key=lambda p:u32(p.read_bytes(),0))
    for file in files:
        b=file.read_bytes(); mid=u32(b,0); count=u32(b,12); table=u32(b,16)
        sections=[]; text_i=data_i=bss_i=0
        for i in range(count):
            raw,size=struct.unpack_from('>II',b,table+i*8);off=raw&~1;execute=bool(raw&1)
            if not size: sections.append({'index':i,'address':0,'size':0}); continue
            if execute:
                address=code;code=align(code+size);name=f'{file.stem}_.text{text_i}';text_i+=1
            else:
                address=data;data=align(data+size)
                if off: name=f'{file.stem}_.data{data_i}';data_i+=1
                else: name=f'{file.stem}_.uninitialized{bss_i}';bss_i+=1
            sections.append({'index':i,'address':address,'size':size,'file_offset':off,'executable':execute,'block':name})
            lines.append(f'{mid} {i} {address:08X}')
        prolog=b[0x30];entry=sections[prolog]['address']+u32(b,0x34) if prolog else 0
        modules.append({'module_id':mid,'file':file.name,'entry_point':entry,'sections':sections})
    if code-0x80000000>=0x2000000: raise ValueError('REL code exceeds relative branch reach of DOL')
    spans=sorted((s['address'],s['address']+s['size']) for m in modules for s in m['sections'] if s['size'])
    if any(a[1]>b[0] for a,b in zip(spans,spans[1:])): raise ValueError('overlapping sections')
    result={'purpose':'research/static CPU translation; requires runtime section binding','code_start':code_start,'code_end':code,'data_start':0x90000000,'data_end':data,'modules':modules}
    (WB/'section-layout.json').write_text(json.dumps(result,indent=2))
    (WB/'section-layout.txt').write_text('\n'.join(lines)+'\n')
    print(f'{len(modules)} modules; code {code_start:#x}..{code:#x}; data 0x90000000..{data:#x}')
    return result

if __name__=='__main__': build()
