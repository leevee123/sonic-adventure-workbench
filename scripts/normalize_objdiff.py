"""Point configured objects at existing split targets; leave unrecovered units unbased."""
from pathlib import Path
import json

project = Path(__file__).resolve().parent.parent/'sadx'
file = project/'objdiff.json'
config = json.loads(file.read_text())
fixed = removed = 0
for unit in config.get('units',[]):
    base = unit.get('base_path')
    if not base:
        continue
    if (project/base).exists():
        continue
    candidate = base.replace('/src/','/mod/')
    if (project/candidate).exists():
        unit['base_path'] = candidate
        fixed += 1
    else:
        unit.pop('base_path',None)
        removed += 1
file.write_text(json.dumps(config,indent=2)+'\n')
print(f'Normalized {fixed} object paths; {removed} units have no recovered source object.')
