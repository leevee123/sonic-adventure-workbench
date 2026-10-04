# 0.6.0 � Experimental local split screen

The launcher has a Multiplayer menu for two Xbox controllers. Two original Sonic tasks share a world, with independent input and top/bottom cameras in Sonic action stages and custom levels. Simulation runs once while display and transparent queues render per view. Either player can reset, recover from a fall or finish an authored level. The original story HUD and stage progression remain shared.

Co-op selects Fast mode automatically and restores temporary controller profiles after the session, with recovery after interruption. Hubs, bosses, cutscenes and other campaigns retain single-player behavior. Story companions release their original task slot before the co-op player is allocated. Full-screen Emerald Coast refraction is disabled during co-op. Save states/netplay are refused. See MULTIPLAYER.md and VERIFICATION.md for scope and tested behavior.

This remains an experimental runtime/recompilation hybrid. Native REL integration and complete source recovery are unfinished.

# 0.5.0 — Custom levels and visual creator



The launcher can install, preview, select and start custom .sadxlevel packages. A built-in visual editor supports colored boxes and ramps, dragging, grid snapping, sizing/rotation, undo/redo, start/finish markers, Test Play, project saving and package export. Skyline Sprint provides an editable sample.



The GameCube runtime generates terrain for the original render/collision engine, starts a fresh Sonic stage, follows the authored terrain with a custom camera, respawns after falls or Z / Xbox RB, and returns to the launcher at the finish. Custom sessions use separate memory cards and leave the imported disc unchanged. Packages contain authored data only.



Initial limits: Sonic only, 96 pieces, boxes/ramps with flat colors and a plain background. Objects, rings, enemies, imported models/textures, scripts and other characters are not yet supported. The runtime remains an experimental hybrid.



# 0.4.0 — Windows installation lifecycle



The installer now creates a per-user Windows installation, optional Start-menu and desktop shortcuts, and an Installed apps entry with an uninstaller. New installations store controls, settings, shader caches, logs and memory cards in a separate user-data folder, so saves survive uninstalling the application. Existing workbenches retain their original save and profile paths.



Selecting an existing complete installation changes Install to Update. Updates reuse the imported game and native DOL module, check the disc and module ABI, preserve controls/settings/saves, and roll back replaced files if cancelled or interrupted by a copy error. Close the game and launcher before updating. Updating does not need to extract or compile the game again.



Keyboard/Xbox controls, fullscreen, GPU widescreen, and the optional Y-button instant Light Dash remain available. No ROM or game assets are included; first installation requires a legally dumped USA GameCube GXSE8P revision 0 ISO/GCM/RVZ.



The runtime remains the tested 0.3.0 hybrid. This release improves installation and source packaging; it does not claim completed native REL execution or recovered source. Fast mode uses JIT execution. Native mode translates the DOL and falls back outside that coverage. See NATIVE-PORT.md for the native-module audit and remaining work.

