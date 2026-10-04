# Verification: Sonic Adventure DX workbench 0.4.0

Tested on Windows x64 on 2026-10-03. These are development smoke tests, not a complete game playthrough. The 0.4.0 installer uses the same verified runtime and game-module ABI as 0.3.0; runtime tests below describe that implementation.

- 0.4.0 launcher, setup and separate uninstaller compile successfully. Installer preservation/cancellation/version checks: seven passed.
- Installation lifecycle tests passed: installed user/profile directory routing, traversal rejection before removal, managed-file removal, preservation of custom files, and preservation of external and portable save folders.
- A temporary per-user Installed apps registration passed version/uninstall-command checks and was removed successfully. This test needed the normal Windows user context because the automation sandbox blocks writes to that registry area.
- A copied 0.3.0 installation was updated with the embedded payload. Cancelling after replacement began restored the original runner/launcher; successful update preserved the exact module and DOL hashes, memory-card fixture, widescreen/dash settings, selected execution mode and legacy user/profile paths. The uninstaller was installed.
- A fresh embedded 0.4.0 installer successfully extracted the RVZ, compiled all 37 native C files, validated the module and committed the new installation/save-directory records. The first attempt failed because this automation environment contained duplicate Path/PATH entries; a normalized child environment completed with exit code zero. No game import or partial installation remained after the failed attempt.
- The fresh module booted in Native mode with only Windows on PATH, loaded the private Chaos 0 gameplay state and rendered a screenshot; exit code zero, boot about 1.56 seconds, smc_failed=0. The installed launcher also passed ten settings/mode checks, fifteen controller-profile checks, and a Fast-mode boot using its separate per-user data path. Physical controller play and a full playthrough remain untested.

- Launcher build passed with both Launcher.cs and Controller.cs. Settings persistence/mode/user-directory checks: 10 passed. Xbox profile, mappings, deadzone, rumble, preservation and restore checks: 15 passed.
- Runtime build passed with MSVC 14.51 and Windows SDK 10.0.28000.0.
- Final GPU widescreen implementation was tested with Native DOL execution and Fast/JIT execution in Chaos 0 gameplay. Native shutdown reported smc_failed=0. An earlier camera-code patch that caused SMC demotion was removed.
- Pressing Y changed Sonic's original action from mode 1 to mode 6 and produced the retail blue dash trail in both execution modes. In Native testing, position moved from (228.205, 3.907, 235.329) to (294.405, 8.343, 263.292) over the eight commanded frames. With the dash option disabled, the same input did not trigger the action.
- C++ enhancement guards passed: fresh button press, held button suppression, preservation of other status bits, other characters, disabled/hurt/scripted states, null/misaligned/out-of-range work pointers.
- Fast mode timing smoke test: 195 rendered frames / 3.447 seconds, about 56.6 FPS including command overhead. This is one scene and does not establish performance across the game.
- The standalone ROM importer extracted the supplied RVZ, validated GXSE8P revision 0 and both hashes, translated the DOL, compiled 37 C files with bundled LLVM, linked ThinLTO, validated module ABI 3 / CPU ABI 4, and committed the installation. Its newly built module booted and activated the original dash in Native and Fast modes.
- Installer validation/preservation/cancellation checks: 7 passed. ZIP traversal is rejected; existing files and nonempty installations are preserved; missing/unsupported game data is rejected; cancelled extraction leaves no output file; an already cancelled setup leaves no installation or staging directory.
- A fresh self-contained embedded installer completed RVZ extraction and the native build successfully. Dependency inspection identified the Visual C++ CRT imports; app-local x64 redistributables were added to both runner and disc-tool directories. Windows 10/11 provides the Universal CRT.
- Launcher Settings and installer GUI previews were rendered and visually inspected.
- Distribution packaging checks reject ROMs, extracted DOL/REL/assets/saves and the private native game DLL. The locally generated game module and private gameplay test save are excluded.

## Remaining limits

Native REL integration and complete source recovery are unfinished. Native DOL mode still delegates work outside its translated coverage. Fast mode uses the JIT. This release is an experimental playable hybrid, not a finished full native source port.

Full stage/character/save/audio regression coverage, a complete game playthrough, physical Xbox controller gameplay, and ring-chain route behavior with the instant dash still need testing. GPU widescreen expansion can differ from game-specific camera/HUD fixes. Settings take effect on the next launch. Only the matching USA GameCube GXSE8P revision 0 disc is supported by this installer; the Steam PC game is used by the separate AdventureCraft donor bridge, not this GameCube build.

Private test outputs remain in the developer workspace under tests/. Release installation/update checks and hashes are recorded alongside the final installer.
