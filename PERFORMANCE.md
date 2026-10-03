# Sonic Adventure DX prototype performance

Measured locally on October 3, 2026. Both launchers use the extracted USA revision 0 game (`GXSE8P`), Vulkan, the same user directory and saves, and 3x internal resolution. Performance varies with hardware and stage.

| Case | Original native build | Optimized native build | Fast JIT mode |
|---|---:|---:|---:|
| Gameplay throughput, median of three runs | 27.6 fps | 43.4 fps | 60.0 fps |
| Fixed gameplay sequence, median wall time | 13.28 s | 8.55 s | 6.25 s |
| Launch to first rendered frame, warm cache | 22.05 s | 1.49 s | 1.46 s |

The optimized native build increased measured throughput by **57%**, reduced this gameplay sequence's wall time by **36%**, and reduced warm launch time by **93%**. Native gameplay still slows down in this sequence. Fast mode ran at approximately full speed here; this does not establish full speed or correctness across the entire game. Startup measurements are single warm-cache launches for each final case, rather than a multi-launch average. Cold shader compilation and individual level transitions have not been separately benchmarked.

## What changed

- The native DOL DLL was rebuilt with Clang 23.1.2, `-O3`, and ThinLTO. Floating-point contraction and fast-math remain disabled. Its module ABI is 3 and CPU ABI is 4, with a 3,536-byte CPU state. Loading the DLL through the packaged module inspector succeeded.
- Local startup previously computed a hash of every asset in both the runner and runtime. Local launches now avoid those redundant scans while retaining DOL section validation, disc identity, and DOL/primary REL hashes. Preparation and netplay still request complete asset fingerprints. The inspection regression test checks both modes, changed-asset detection for full fingerprints, and rejection of an invalid DOL entry point.
- Shader caching remains enabled, with asynchronous ubershaders and no blocking wait for all shaders before starting.
- `Run-Fast-Prototype.cmd` sets `MODERNGEKKO_STATICRECOMP=0`, selecting the hardware runtime's x64 JIT CPU. This executes emulated GameCube code. `Run-Prototype.cmd` explicitly selects the optimized native DOL module, with JIT fallback for REL code. Both launchers use the same game files and saves.

Internal resolution was retained at 3x, so the comparison does not depend on lowering image quality. No game memory patches, cycle underclock, or disabled cache invalidation were used for these changes.

## Gameplay verification

Memory-card setup, character selection, Sonic's story opening, and the Chaos 0 fight have been exercised. Automated controller commands reach the game's own input path. The final native and JIT input tests record Sonic's coordinates before and after an A-button jump and an analog-stick movement command, with screenshots and clean runtime shutdowns. The native tests reported zero failed self-modifying-code checks.

The packaged keyboard profile maps Enter to Start, X to A, Z to B, and arrow keys to movement. Physical keyboard/gamepad testing, audio, other characters, other stages, and a complete save/load playthrough remain to be checked. Headless benchmarks used no audio output.

## Repeat the measurements

Evidence and the fixed gameplay snapshot are under `verification/performance`. From the workbench directory, use the installed Python environment:

```powershell
$toolchain = (Get-Content 'local-paths.json' -Raw | ConvertFrom-Json).toolchain
& "$toolchain/python-env/Scripts/python.exe" 'native-port/benchmark.py' `
  --state 'verification/performance/chaos-gameplay.sav' `
  --output 'verification/my-native-benchmark' --repeat 3 --profile --validate-input
```

Add `--jit` for fast mode. Each output directory must be new. Stop any other running copy of the game before measuring. The script starts a hidden rendering window, restores the same gameplay save before each trial, runs 60 neutral frames followed by a 360-rendered-frame analog-stick command, and measures wall time. Its file-command barriers add a small amount of overhead; it reports the actual frame-count delta as well as the requested 360 frames. Medians in the table use the same procedure for all modes. Performance sampling was enabled for both native comparison builds.

`benchmark.json` preserves executable/DLL/save hashes, startup measurements, individual runs, actual frame counts, final status, and runtime counters. The command files, logs, screenshots, and read-only player memory samples are alongside it. The input-validation addresses are specific to this Chaos 0 snapshot and should not be reused as generic addresses for another stage or revision.

Use `native-port/build_module_clang.py` to reproduce the optimized DLL. `native-port/compiler.json` records the installed compiler location and fingerprint; `--compiler` can select another installed Windows x64 llvm-mingw Clang. Build output goes to the `sadx-module-clang` folder under the `build_work` directory in `local-paths.json`. Validate a rebuilt module before replacing the packaged DLL. Runtime source changes are retained in `patches/moderngekko-windows-headless.patch`.

The original RVZ is unchanged. This prototype has a native DOL module and runtime REL execution; complete native REL integration and recovered buildable source remain unfinished.
