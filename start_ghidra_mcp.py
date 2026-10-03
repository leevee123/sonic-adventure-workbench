"""STDIO MCP entry point; starts the real JVM lazily after MCP initialization."""
import sys
from ghidra_runtime import start,GHIDRA
import pyghidra

def configured_start(*args,**kwargs):
    start()
    return None

if __name__=='__main__':
    pyghidra.start=configured_start
    from ghidra_headless_mcp.cli import main
    raise SystemExit(main(['--ghidra-install-dir',str(GHIDRA),*sys.argv[1:]]))
