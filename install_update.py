"""Install the reviewed controller launcher and relocation fixes; leave game assets and saves alone."""
from pathlib import Path
import argparse
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
import tomllib
from datetime import datetime

HERE = Path(__file__).resolve().parent
TARGET = Path('C:/games/sonic-adventure-workbench')
OLD = Path('C:/Users/naync/Documents/Codex/2026-10-02/using-https-github-com-elliotttate-wind/outputs/sonic-adventure-workbench')
CONFIG = Path('C:/Users/naync/.codex/config.toml')

def digest(file):
    return hashlib.sha256(file.read_bytes()).hexdigest() if file.is_file() else None

def contained(base, name):
    value = (base / name).resolve()
    if not value.is_relative_to(base.resolve()):
        raise RuntimeError(f'Unsafe update path: {name}')
    return value

def verify(target, manifest):
    for row in manifest['files']:
        source = contained(HERE, row.get('source', row['file']))
        destination = contained(target, row['file'])
        if digest(source) != row['sha256_after']:
            raise RuntimeError(f'Update file failed its checksum: {row["file"]}')
        current = digest(destination)
        if current not in (row['sha256_before'], row['sha256_after']):
            raise RuntimeError(f'{row["file"]} changed since this update was prepared. No files were replaced.')

def mcp_update(text):
    section = re.search(r'(?ms)^\[mcp_servers\.ghidra_sonic\]\r?\n.*?(?=^\[|\Z)', text)
    if not section:
        return text, None
    previous = section.group(0)
    updated = previous.replace(OLD.as_posix(), TARGET.as_posix())
    updated = updated.replace(str(OLD).replace('\\', '\\\\'), TARGET.as_posix())
    result = text[:section.start()] + updated + text[section.end():]
    parsed = tomllib.loads(result)
    if parsed['mcp_servers']['ghidra_sonic']['cwd'] != TARGET.as_posix():
        raise RuntimeError('Ghidra MCP has a different custom working directory. No files were replaced.')
    return result, previous if updated != previous else None

def active_processes(target):
    # Enumerate first: Get-Process -Name exits with an error if any requested name is absent.
    # A missing launcher or runner is a normal state, not an installation failure.
    target_text = str(target.resolve()).rstrip('\\/') + '\\'
    target_text = target_text.replace("'", "''")
    command = (
        "$ErrorActionPreference = 'Stop'; "
        "$matches = @(Get-Process | Where-Object { $_.ProcessName -in @('Sonic Launcher','moderngekko-run') } | "
        "Where-Object { $_.Path -and $_.Path.StartsWith('"+target_text+
        "',[System.StringComparison]::OrdinalIgnoreCase) } | Select-Object Id,ProcessName); "
        "ConvertTo-Json -InputObject @($matches) -Compress; exit 0"
    )
    result = subprocess.run(
        ['C:/Windows/System32/WindowsPowerShell/v1.0/powershell.exe', '-NoProfile', '-Command', command],
        capture_output=True, text=True, timeout=20, creationflags=subprocess.CREATE_NO_WINDOW,
    )
    if result.returncode:
        detail = result.stderr.strip() or f'PowerShell exit {result.returncode}'
        raise RuntimeError(f'Could not check running game processes: {detail}')
    values = json.loads(result.stdout or '[]')
    return values if isinstance(values, list) else [values]

def apply(target, manifest, backup):
    verify(target, manifest)
    backup.mkdir(parents=True, exist_ok=False)
    replaced = []
    try:
        for row in manifest['files']:
            destination = contained(target, row['file'])
            if digest(destination) == row['sha256_after']:
                continue
            source = contained(HERE, row.get('source', row['file']))
            previous = contained(backup, row['file'])
            existed = destination.exists()
            if existed:
                previous.parent.mkdir(parents=True, exist_ok=True)
                shutil.copy2(destination, previous)
            destination.parent.mkdir(parents=True, exist_ok=True)
            temporary = destination.with_name(destination.name + '.controller-update-tmp')
            try:
                shutil.copyfile(source, temporary)
                os.replace(temporary, destination)
            finally:
                if temporary.exists():
                    temporary.unlink()
            replaced.append((destination, previous, existed))
        for row in manifest['files']:
            assert digest(contained(target, row['file'])) == row['sha256_after'], row['file']
    except Exception:
        for destination, previous, existed in reversed(replaced):
            if existed:
                shutil.copy2(previous, destination)
            else:
                destination.unlink()
        raise
    return len(replaced)

def self_test(manifest):
    folder = HERE / 'verification' / ('installer-fixture-' + datetime.now().strftime('%Y%m%d-%H%M%S-%f'))
    target = folder / 'game'
    for row in manifest['files']:
        if row['sha256_before'] is not None:
            source = contained(TARGET, row['file'])
            if digest(source) != row['sha256_before']:
                raise RuntimeError(f'Test fixture requires the original {row["file"]}')
            destination = contained(target, row['file'])
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(source, destination)
    changed = apply(target, manifest, folder / 'backup')
    verify(target, manifest)
    for row in manifest['files']:
        if row['sha256_before'] is not None:
            assert digest(contained(folder / 'backup', row['file'])) == row['sha256_before']
    sample = '[unrelated]\nkeep = true\n[mcp_servers.ghidra_sonic]\ncommand = "python.exe"\nargs = ["'+OLD.as_posix()+'/start_ghidra_mcp.py"]\ncwd = "'+OLD.as_posix()+'"\n[next]\nkeep = "value"\n'
    migrated, previous = mcp_update(sample)
    assert previous and tomllib.loads(migrated)['unrelated']['keep']
    assert tomllib.loads(migrated)['next']['keep'] == 'value'
    assert tomllib.loads(migrated)['mcp_servers']['ghidra_sonic']['args'] == [TARGET.as_posix()+'/start_ghidra_mcp.py']
    # Re-running an installed update should leave every file as-is.
    repeated = apply(target, manifest, folder / 'repeat-backup')
    assert repeated == 0
    (HERE / 'verification' / 'installer-test.json').write_text(json.dumps({
        'passed': True, 'replaced_files': changed, 'repeat_replaced_files': repeated,
        'checksum_verification': True, 'backup_verification': True, 'mcp_other_sections_preserved': True
    }, indent=2)+'\n')
    print('Installer test passed.')

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('action', choices=['check', 'apply', 'self-test'])
    args = parser.parse_args()
    manifest = json.loads((HERE / 'update-manifest.json').read_text())
    assert manifest['target'] == TARGET.as_posix()
    if args.action == 'self-test':
        self_test(manifest)
        return 0
    verify(TARGET, manifest)
    original_mcp = CONFIG.read_text(encoding='utf-8') if CONFIG.exists() else None
    updated_mcp, old_block = mcp_update(original_mcp) if original_mcp is not None else (None, None)
    if args.action == 'check':
        print(f'Checksums verified for {len(manifest["files"])} files. Ready to install into {TARGET}.')
        return 0
    if active_processes(TARGET):
        raise RuntimeError('Close Sonic Launcher and the game, then run Install Controller Update again.')
    backup = HERE / 'installation-backups' / datetime.now().strftime('%Y%m%d-%H%M%S-%f')
    changed = apply(TARGET, manifest, backup)
    if old_block is not None:
        (backup / 'ghidra-mcp-before.toml').write_text(old_block, encoding='utf-8')
        if CONFIG.read_text(encoding='utf-8') != original_mcp:
            raise RuntimeError('The launcher was installed, but Codex configuration changed during installation. Ghidra MCP was left alone.')
        CONFIG.write_text(updated_mcp, encoding='utf-8', newline='\n')
    print(f'Installed {changed} files. Backups: {backup}')
    print('Open Sonic Launcher, choose Controls > Xbox controller > Save controls, then Play.')
    subprocess.Popen([str(TARGET / 'Sonic Launcher.exe')], cwd=TARGET)
    return 0

if __name__ == '__main__':
    try:
        raise SystemExit(main())
    except Exception as error:
        print(f'Installation stopped: {error}', file=sys.stderr)
        raise SystemExit(1)
