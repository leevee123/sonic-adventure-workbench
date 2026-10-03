"""Validate REL relocations and prepare images for the explicit analysis layout."""
import json, struct
from layout import WB, u32, align

def linked_images(layout):
    modules={m['module_id']:m for m in layout['modules']}
    images={}; audit=[];stubs=[];cursor=align(layout['code_end'])
    for mid,m in modules.items():
        binary=(WB/'prepared/rels'/m['file']).read_bytes()
        for s in m['sections']:
            if s['size'] and s.get('file_offset'):
                images[(mid,s['index'])]=bytearray(binary[s['file_offset']:s['file_offset']+s['size']])
    for mid,m in modules.items():
        b=(WB/'prepared/rels'/m['file']).read_bytes();imp,size=struct.unpack_from('>II',b,0x28)
        for i in range(imp,imp+size,8):
            target_mid,pos=struct.unpack_from('>II',b,i);patch_section=0;offset=0
            while True:
                delta,kind,target_section,addend=struct.unpack_from('>HBBI',b,pos);pos+=8
                if kind==203: break
                if kind==202: patch_section=target_section;offset=0;continue
                offset+=delta
                if kind in (0,201): continue
                sec=m['sections'][patch_section];address=sec['address']+offset
                dest_sec=modules[target_mid]['sections'][target_section] if target_mid else None
                target=dest_sec['address']+addend if dest_sec else addend
                buf=images[(mid,patch_section)]
                needed=2 if kind in (3,4,5,6) else 4
                if offset+needed>len(buf): raise ValueError('relocation patch outside section')
                word=u32(buf,offset) if needed==4 else 0
                reason=None
                if dest_sec and addend>dest_sec['size']: reason='addend outside target section'
                if kind in (10,11,12,13):
                    diff=target-address;limit=0x2000000 if kind==10 else 0x8000
                    if target%4 or (dest_sec and not dest_sec.get('executable')):
                        reason='branch targets non-code or an unaligned address'
                    elif not -limit<=diff<limit: reason='relative branch out of range'
                    if reason:
                        name=f'UNRESOLVED_m{mid}_s{patch_section}_{offset:X}'
                        stub=cursor;cursor+=32
                        stubs.append({'name':name,'address':stub})
                        audit.append({'module_id':mid,'file':m['file'],'section':patch_section,'offset':offset,'patch_address':address,'type':kind,'target_module':target_mid,'target_section':target_section,'addend':addend,'target_address':target,'reason':reason,'analysis_stub':stub})
                        target=stub;diff=target-address
                        if not -limit<=diff<limit: raise ValueError('analysis stub out of branch reach')
                    mask=0x03FFFFFC if kind==10 else 0xFFFC
                    struct.pack_into('>I',buf,offset,(word&~mask)|(diff&mask))
                elif kind==1: struct.pack_into('>I',buf,offset,target&0xffffffff)
                elif kind in (2,7,8,9):
                    mask=0x03FFFFFC if kind==2 else 0xFFFC
                    struct.pack_into('>I',buf,offset,(word&~mask)|(target&mask))
                elif kind in (3,4,5,6):
                    value=target if kind in (3,4) else target>>16 if kind==5 else (target+0x8000)>>16
                    struct.pack_into('>H',buf,offset,value&0xffff)
                else: raise ValueError(f'unsupported relocation {kind}')
    report={'modules':len(modules),'unresolved_relocations':audit,'analysis_stubs':stubs,
        'note':'Unresolved branch calls use explicitly named analysis stubs. These substitutions are for pseudocode inspection only; original inputs are unchanged.'}
    (WB/'relocation-audit.json').write_text(json.dumps(report,indent=2))
    return images,report

def apply_to_ghidra(program,layout):
    import jpype
    from ghidra.util.task import ConsoleTaskMonitor
    from ghidra.program.model.symbol import SourceType
    memory=program.getMemory();space=program.getAddressFactory().getDefaultAddressSpace();monitor=ConsoleTaskMonitor()
    images,report=linked_images(layout)
    tx=program.startTransaction('Relocate modules into explicit research layout')
    try:
        sections=[(m,s) for m in layout['modules'] for s in m['sections'] if s['size']]
        # Stage every REL block away from both its old and final destinations.
        staging=0xA0000000
        for m,s in sections:
            block=memory.getBlock(s['block'])
            if block is None: raise ValueError('missing imported block '+s['block'])
            memory.moveBlock(block,space.getAddress(staging),monitor);staging=align(staging+s['size'])
        for m,s in sections:
            block=memory.getBlock(s['block']);addr=space.getAddress(s['address'])
            memory.moveBlock(block,addr,monitor)
            content=images.get((m['module_id'],s['index']))
            if content is not None: memory.setBytes(addr,jpype.JArray(jpype.JByte)(bytes(content)))
        for stub in report['analysis_stubs']:
            addr=space.getAddress(stub['address'])
            block=memory.createInitializedBlock(stub['name'],addr,4,0,monitor,False)
            block.setExecute(True);memory.setInt(addr,0x4E800020,True)
            program.getBookmarkManager().setBookmark(addr,'Warning','Unresolved REL branch','Research stub: see relocation-audit.json')
    except BaseException:
        program.endTransaction(tx,False);raise
    program.endTransaction(tx,True)
    return report

if __name__=='__main__':
    _,report=linked_images(json.loads((WB/'section-layout.json').read_text()))
    print(f'{report["modules"]} modules; {len(report["unresolved_relocations"])} unresolved branch relocations')
