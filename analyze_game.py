"""Analyze saved GameCube imports, apply reference symbols, and export pseudocode."""
import argparse,csv,json,re,hashlib
from ghidra_runtime import start,WB,GHIDRA

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--program',choices=['main.dol','_Main.rel'])
    args=parser.parse_args()
    start()
    import pyghidra
    from ghidra_headless_mcp.backend import GhidraBackend
    from ghidra.program.model.address import AddressSet
    from ghidra.program.model.symbol import SourceType
    from ghidra.app.decompiler import DecompInterface
    from ghidra.app.cmd.disassemble import DisassembleCommand
    from ghidra.util.task import ConsoleTaskMonitor
    from relocations import apply_to_ghidra
    backend=GhidraBackend(pyghidra,install_dir=GHIDRA)
    project=WB/'ghidra-projects';cfg=WB/'sadx/config/GXSE8P'
    modules=[]
    for part in (cfg/'config.yml').read_text().split('\n- ')[1:]:
        obj=re.search(r'object:\s*orig/GXSE8P/files/(\S+)',part)
        sym=re.search(r'symbols:\s*config/GXSE8P/(\S+)',part)
        if obj and sym: modules.append((obj[1],cfg/sym[1]))
    export=WB/'decompiled';export.mkdir(exist_ok=True);summaries=[]
    for filename in ([args.program] if args.program else ['main.dol','_Main.rel']):
        print('Opening saved '+filename,flush=True)
        result=backend.session_open_existing(str(project),'SonicAdventureDX_Research',program_name=filename,read_only=False,update_analysis=False)
        sid=result['session_id'];record=backend._sessions[sid];program=record.program
        memory=program.getMemory();space=program.getAddressFactory().getDefaultAddressSpace();monitor=ConsoleTaskMonitor()
        symbol_sets=[('main.dol',cfg/'symbols.txt')]
        if filename=='_Main.rel':
            layout_text=(WB/'section-layout.json').read_text();layout=json.loads(layout_text)
            fingerprint=hashlib.sha256(layout_text.encode()).hexdigest()
            opts=program.getOptions('Sonic Workbench')
            if str(opts.getString('LayoutHash',''))!=fingerprint:
                print('Applying compact research layout and validating relocations',flush=True)
                report=apply_to_ghidra(program,layout)
                tx=program.startTransaction('Record research layout')
                opts.setString('LayoutHash',fingerprint);program.endTransaction(tx,True)
                print(f'Layout applied; {len(report["unresolved_relocations"])} explicitly unresolved branch calls',flush=True)
            symbol_sets+=modules
        (export/(filename+'-blocks.json')).write_text(json.dumps([{'name':str(b.getName()),'start':str(b.getStart()),'size':int(b.getSize()),'execute':bool(b.isExecute())} for b in memory.getBlocks()],indent=2))
        functions=[];symbol_errors=[]
        for module,symbols in symbol_sets:
            for line in symbols.read_text().splitlines():
                m=re.match(r'(.+?) = ([^:]+):0x([0-9A-Fa-f]+);.*type:function.*size:0x([0-9A-Fa-f]+)',line)
                if not m: continue
                name,section,offset,size=m[1],m[2],int(m[3],16),int(m[4],16)
                if not size: continue
                if module=='main.dol': address=offset
                else:
                    block=memory.getBlock(module[:-4]+'_'+section+'0')
                    if block is None:
                        symbol_errors.append({'name':name,'module':module,'reason':'missing section '+section});continue
                    address=int(block.getStart().getOffset())+offset
                functions.append((name,address,size,module))
        if filename=='_Main.rel':
            audit=json.loads((WB/'relocation-audit.json').read_text())
            functions += [(s['name'],s['address'],4,'unresolved-analysis-stubs') for s in audit['analysis_stubs']]
        tx=program.startTransaction('Apply doldecomp/sadx function symbols');imported=0
        try:
            fm=program.getFunctionManager()
            for i,(name,address,size,module) in enumerate(functions):
                addr=space.getAddress(address)
                if not memory.contains(addr): continue
                try:
                    body=AddressSet(addr,addr.add(size-1))
                    DisassembleCommand(addr,body,True).applyTo(program,monitor)
                    fun=fm.getFunctionAt(addr)
                    if fun is None: fun=fm.createFunction(name,addr,body,SourceType.IMPORTED)
                    else: fun.setName(name,SourceType.IMPORTED)
                    imported+=1
                except Exception as exc: symbol_errors.append({'name':name,'module':module,'reason':str(exc)})
                if i%2000==0: print(f'{filename}: symbols {i+1}/{len(functions)}',flush=True)
        finally: program.endTransaction(tx,True)
        backend.session_save(sid)
        print(f'{filename}: imported {imported} symbols; analyzing',flush=True)
        analysis=backend.analysis_update_and_wait(sid);backend.session_save(sid)
        dest=export/filename;dest.mkdir(exist_ok=True)
        decomp=DecompInterface();decomp.openProgram(program);rows=[];failures=[]
        with (dest/'pseudocode.c').open('w',encoding='utf-8',newline='\n') as out:
            out.write('/* Ghidra research pseudocode, not recovered buildable source. REL programs use explicit analysis addresses; UNRESOLVED_* functions mark unvalidated relocations. */\n')
            for i,fun in enumerate(program.getFunctionManager().getFunctions(True)):
                addr=str(fun.getEntryPoint());name=str(fun.getName());block=memory.getBlock(fun.getEntryPoint())
                r=decomp.decompileFunction(fun,15,monitor);success=r.decompileCompleted() and r.getDecompiledFunction() is not None
                if success: out.write(f'\n/* {addr} {name} */\n'+str(r.getDecompiledFunction().getC()).replace('\r\n','\n').replace('\r','\n')+'\n')
                else: failures.append({'address':addr,'name':name,'error':str(r.getErrorMessage())})
                rows.append({'address':addr,'name':name,'block':str(block.getName()) if block else '', 'size':int(fun.getBody().getNumAddresses()),'decompiled':bool(success)})
                if i%250==0:
                    out.flush();print(f'{filename}: exported {i+1} functions',flush=True)
                    (dest/'progress.json').write_text(json.dumps({'functions_processed':i+1,'failures':len(failures)}))
        decomp.dispose()
        with (dest/'functions.csv').open('w',newline='',encoding='utf-8') as f:
            writer=csv.DictWriter(f,fieldnames=['address','name','block','size','decompiled']);writer.writeheader();writer.writerows(rows)
        summary={'program':filename,'language':str(program.getLanguageID()),'reference_functions':len(functions),'imported_symbols':imported,'functions':len(rows),'decompiled':len(rows)-len(failures),'failures':failures,'symbol_errors':symbol_errors,'analysis':analysis}
        (dest/'summary.json').write_text(json.dumps(summary,indent=2,default=str));summaries.append(summary)
        print(f'{filename}: finished {summary["decompiled"]}/{len(rows)}',flush=True);backend.session_close(sid)
    backend.shutdown();(export/'run-summary.json').write_text(json.dumps(summaries,indent=2,default=str))

if __name__=='__main__': main()
