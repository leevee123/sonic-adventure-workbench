"""Resolve game-local paths and separately installed development tools."""
from pathlib import Path
import json
WB=Path(__file__).resolve().parent
settings=json.loads((WB/'local-paths.json').read_text())
TOOLCHAIN=Path(settings['toolchain'])
WORK=Path(settings['build_work'])
GHIDRA_RUNTIME=TOOLCHAIN/'ghidra-runtime'
