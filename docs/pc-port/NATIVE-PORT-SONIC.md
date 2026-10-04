# Native port status and integration requirements

The distributed runtime translates the main GameCube DOL into native x64 code. Dynamically loaded RELs still use fallback execution. A full native port requires more than compiling the previously exported REL pseudocode or renaming the launcher.

The audit on 2026-10-03 found these issues in the pinned RecompCore integration:

* `StaticRecompCore_SMC.cpp::RefreshRelSections` scans guest RAM for module headers. It does not track the retail loader's link/unlink list or prove that an image is currently linked. Reused allocations and stale module copies must invalidate coverage.
* `TranslateRelAddress` handles external reads/writes, but `GXRuntime/include/core/cpu.h::get_ram_ptr` serves ordinary MEM1 accesses directly. Virtual linked addresses that lie in MEM1 bypass that translation. The metadata currently describes executable sections only; relocated data pointers also need a consistent mapping.
* The generated REL relocation stream embeds linked target addresses. LR/CTR values, function pointers, self-relative code and calls crossing module boundaries need verified conversion between native virtual addresses and runtime addresses. Mapping only the dispatch PC is insufficient.
* First-use hashes of relocated text cannot establish that translated instructions match that text. Validation must account for every relocation and compare against the expected linked image. A zero hash accepting arbitrary first-use bytes is insufficient for correctness.
* Nine research event modules contain 18 branch relocations to unaligned or non-code targets in the proposed static layout. The named Ghidra analysis stubs are not executable implementations and must never be used in a playable release.

The research layout and old Wind-pinned C outputs use a different ABI from the current runtime and cannot be inserted into the shipped native DLL. All 268 retail modules were decoded and verified locally; 253 code-bearing modules were exported for analysis, six are data-only, and nine await relocation analysis.

Required milestones: identify retail OSLink/OSUnlink and allocations; implement section bindings including data and BSS; translate every memory/control-flow path consistently; verify relocated code; compare native instructions/state with the reference execution; test module replacement and save-state restore; then exercise every character, stage, cutscene, save/load and audio path. Until those pass, releases are marked previews with the working fallback enabled.
