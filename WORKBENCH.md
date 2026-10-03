# Sonic Adventure DX reverse-engineering workbench

Ghidra, a headless MCP server, the GameCube matching-decompilation project, and a Windows prototype are installed and built for your USA GameCube disc (`GXSE8P`, revision 0). The prototype reaches Sonic's story and the Chaos 0 boss fight. Automated movement and jumping have been verified through the game's controller path. The optimized native DOL build runs this benchmark about 57% faster; an optional JIT launcher sustains approximately 60 fps in the tested sequence. This remains an experimental hybrid runtime, with native REL integration unfinished.

## Open the tools

- **Sonic Launcher.exe** opens the compact Sonic-themed launcher. Fast mode is selected by default. Switch to Native, change image quality or fullscreen, choose keyboard or Xbox controls, or open the saves and logs folders. Click Play to start the game; the launcher returns when the game closes.
- **Run-Prototype.cmd** starts the experimental Windows runtime with the compiled DOL DLL and your extracted game files. Vulkan is the tested graphics backend. Close the game window to stop it.
- **Run-Fast-Prototype.cmd** uses the same runtime, assets, settings, and saves with the JIT CPU. Use it for the fastest tested gameplay. This mode uses emulation rather than the native DOL code.
- **Open-Ghidra.cmd** opens the saved `SonicAdventureDX_Research` project with the same Java settings and GameCube loader as the MCP server.
- **Open-Objdiff.cmd** opens the existing SADX matching-source project. The supplied DOL was rebuilt with its expected SHA-1.

Use **Controls > Xbox controller > Save controls** in the launcher to play with your connected Xbox controller. The Controls panel includes live stick/button feedback, dead-zone adjustment, and a rumble toggle. It retains the keyboard bindings when switching profiles. See `launcher/README.md`.

The prototype includes a keyboard profile: Enter = Start, X = A, Z = B, C = X, S = Y, arrow keys = movement, Q/W = triggers, and I/J/K/L = camera stick. Automated controller input is verified; physical keyboard and gamepad play testing remains to be done. Its files and saves use `native-port/runtime-user`, and its frontend settings are in that folder's `config.ini`. The separate upstream GUI frontend is included in `native-port/bin`; the workspace launchers above supply the prepared paths directly.

## Performance changes

| Measured case | Previous build | Optimized native build |
|---|---:|---:|
| Gameplay throughput, median of three runs | 27.6 fps | 43.4 fps |
| Fixed gameplay sequence, median wall time | 13.28 seconds | 8.55 seconds |
| Launch to first rendered frame, warm cache | 22.05 seconds | 1.49 seconds |

The DOL DLL now uses Clang 23.1.2, `-O3`, and ThinLTO with strict floating-point flags. Local startup avoids two redundant full asset scans and starts shaders asynchronously while retaining the shader cache. DOL structure, disc identity, and DOL/primary REL hashes are still checked; preparation and netplay retain full asset fingerprints. Graphics remain at 3x internal resolution. Read **PERFORMANCE.md** for the measurements, reproduction commands, fast mode, and test limits. In-game level transition times have not yet been measured separately.

## What has been recovered

| Artifact | Result |
|---|---|
| Original executable | SHA-1 `f1f90b94b875e283332e58d830bdaecf7872763a` |
| Compressed modules | All 268 decoded; all match the community project's expected hashes |
| DOL Ghidra export | 2,096 functions; zero decompiler failures |
| Composite DOL + REL Ghidra export | 30,473 functions; zero decompiler failures; includes the DOL and 18 explicit analysis stubs |
| Matching source | 2,428 of 10,351,392 code bytes, approximately 0.0235% across the whole game |
| Wind-reference translator | 20/20 regression tests passed; 128 executions of original memcpy/memset passed on x64 |
| Windows prototype | Current ModernGekko-compatible DOL translated into 30 C chunks and an optimized DLL; interactive Chaos 0 gameplay verified |

Read `decompiled/main.dol/pseudocode.c` and `decompiled/_Main.rel/pseudocode.c` for Ghidra's reconstructed C. These are research outputs; they are not matching, buildable recovered source. Function inventories and export diagnostics are alongside them. `sadx` is the independent community matching-source project; its successful binary rebuild includes assembly for unrecovered code. The objdiff report covers configured units, so its percentage should not be treated as whole-game recovery.

## MCP setup

The server is registered in your Codex configuration as **ghidra_sonic**. Its executable, working directory, and timeout settings are reproduced in `codex-mcp.toml`. The real stdio MCP protocol was tested: initialization, enumeration of 212 tools, opening the saved project, and decompiling retail `memcpy` at `0x800031E8` all succeeded. See `mcp-smoke-test.json` and `mcp-catalog.json`.

Start a fresh Codex chat or reload the app's MCP connection if the new server does not appear in the current chat. Ask it to open existing program `main.dol` or `_Main.rel` in project `SonicAdventureDX_Research`, under this workbench's `ghidra-projects` directory. Useful tools are `project.program.open_existing`, `function.list`, `decomp.function`, and `program.close`; their exact schemas are in the catalog. Close a program session before switching to the GUI because Ghidra locks an open project.

Ghidra 12.1.4 and JDK 21 are installed at `C:/decomp/sonic-adventure-gc` to avoid Java path issues. Its extension settings, cache, and analysis projects are kept in the workspace. The game workbench is now at `C:/games/sonic-adventure-workbench`. Development-tool locations are recorded in `local-paths.json`; Ghidra/Objdiff use the original installed toolchain. The game launcher follows its own folder automatically.

## Native-port boundaries

The tested runtime follows the Wind Waker reference's CPU translation and hardware runtime approach, using pinned DolRecomp, ModernGekko and RecompCore sources. The prototype packages a native **DOL** module and relies on the runtime's fallback execution for dynamically loaded REL code. This is an experimental hybrid build; a complete source port remains unfinished.

The older Wind-pinned translator also exported 253 code-bearing RELs under `recompiled/rels`. Six modules contain data only. Nine event modules failed static relocation validation: 18 branches target a non-code or unaligned address in the proposed static layout. Those modules were excluded from native REL generation. In the Ghidra analysis only, the branches point to clearly named `UNRESOLVED_...` stubs and warning bookmarks. See `relocation-audit.json`. The prepared retail binaries and the original RVZ are unchanged by those analysis stubs.

`section-layout.json` is an analysis layout, with compact code and separate data addresses. It is not a claim about the retail loader's runtime addresses. Native REL integration needs the actual allocation/link/unlink behavior, tested address bindings, resolution of the nine event modules, and coverage of self-modifying code. Memory-card setup, character selection, Sonic's opening story, and Chaos 0 have been exercised. Remaining characters, stages, save/load cycles, audio, and physical controllers require play testing before this can be called a finished port.

## Continue development

- Use the saved Ghidra project and community symbols to trace REL loading and the unresolved event-module calls.
- Extend the runtime-compatible module generation to include tested REL bindings. The older research translator's outputs use a different runtime ABI and cannot be dropped into the current DLL unchanged.
- Compare functions against the original with objdiff as matching source is recovered. Re-running `sadx/configure.py` regenerates its objdiff configuration; normalize paths afterward with `scripts/normalize_objdiff.py`.
- `native-port/build_runtime.py` rebuilds the pinned Windows chassis using the installed Visual C++ tools. Add `--module` to build the native DLL, or `--runner` to rebuild only the runner. Rebuilds use the fresh directory recorded as `build_work` in `local-paths.json`, because CMake build trees retain absolute source paths.
- `native-port/build_module_clang.py` reproduces the optimized DLL with the compiler recorded in `native-port/compiler.json`. `build_runtime.py --module` retains the older MSVC module build for comparison.
- `native-port/benchmark.py` repeats a fixed gameplay sequence and records startup times, rendered frame counts, runtime counters, and screenshots. It can also verify movement and jumping with the supplied Chaos 0 save.

`TOOLS.md` contains the researched tools, original repositories, the Wind Waker reference, and verified X/Twitter leads. Source pins are recorded in toolchain manifests and `native-port/runtime-sources.json`; local source patches are retained under `patches`. Validation logs, screenshots, and the final status are under `verification`.

The local Windows runtime patch creates configuration folders, provides a hidden render window for GPU tests, reports headless startup errors, enables background input during those tests, and implements the startup optimizations above. Setting `SONIC_PAD_DIAGNOSTICS=1` logs changes in the emulated serial controller's buttons. The automation handler also logs sampled pad input. Source patches and fingerprints are retained for reproducibility.
