# Sonic Adventure DX workbench

Reverse-engineering tools, recovered and generated code, a GameCube hardware runtime, and a compact Windows launcher for Sonic Adventure DX — Director's Cut (USA, GXSE8P).

This is an experimental hybrid project. The native module translates the DOL executable, while dynamically loaded REL code uses runtime fallback execution. A complete native source port remains unfinished. Matching-source recovery is approximately 0.0235% of whole-game code; generated C and Ghidra pseudocode are research outputs rather than matching recovered source.

## Launcher

Download **Sonic-Launcher-v0.2.1-win-x64.zip** from Releases. Extract it into your prepared workbench folder, beside `disc` and `native-port`, or choose **Game folder** in the launcher.

- Choose **Fast** for the tested JIT runtime or **Native** for the experimental DOL recompilation build.
- Choose **Controls → Xbox controller → Save controls** for an Xbox-compatible XInput controller. Keyboard remains available.
- Controls include live stick/button feedback, a configurable dead zone, and a rumble toggle.
- Settings control resolution, fullscreen, and the frame-rate display.

The launcher requires a prepared local runtime, native module, and game files. The release contains the launcher, with source; game disc files and the compiled retail game module are not included.

Version 0.2.1 fixes the disabled Play button when the update launcher is opened outside the game folder and adds a folder selector. The local installer process check also handles absent processes correctly.

## Source

The complete source archive is **sonic-adventure-workbench-all-source-v0.2.1.zip**, available in Releases. It includes the workbench helpers, launcher source, local patches, matching-project source, generated DOL/REL C, Ghidra pseudocode, and vendored runtime/dependency source. The file inventory is in `source-manifest.json`.

The manual **Import complete workbench source** workflow imports the reviewed source archive into the repository's main branch. It verifies the release archive checksum and preserves its folder structure. It runs only when explicitly dispatched.

Source archives omit disc images, extracted binary game assets, compiled game DLLs, saves, runtime configuration, Ghidra databases/caches, and machine-specific configuration. Prepare your local game inputs separately.

Copy `local-paths.example.json` to `local-paths.json` and set your toolchain/build directory locations before rebuilding the development tools. Detailed local workflow and performance notes are in WORKBENCH.md and PERFORMANCE.md.

## Build the launcher

On Windows with the .NET Framework compiler installed:

```powershell
& "$env:WINDIR\Microsoft.NET\Framework64\v4.0.30319\csc.exe" /nologo /target:winexe /optimize+ /platform:x64 /r:System.Drawing.dll /r:System.Windows.Forms.dll /win32manifest:launcher\app.manifest /win32icon:launcher\ring.ico "/out:Sonic Launcher.exe" launcher\Launcher.cs launcher\Controller.cs
```

## Validation and provenance

Launcher/profile checks pass; the Windows Xbox device was detected; a test copy of the Xbox configuration booted the game successfully. Physical controller gameplay and rumble still need play testing.

The fixed launcher resolves the moved local game folder with Play enabled. Local installer verification covers checksums, backups, repeat installation, and preservation of unrelated MCP settings.

Runtime sources are pinned to ModernGekko, RecompCore, and DolRecomp commits recorded in `native-port/runtime-sources.json`. The architecture reference is [Wind-Waker-Recomp](https://github.com/elliotttate/Wind-Waker-Recomp). The matching-source project is [doldecomp/sadx](https://github.com/doldecomp/sadx). Dependency copyright notices and licenses are retained with their source. No new license is assigned to pre-existing third-party or game-derived source.
