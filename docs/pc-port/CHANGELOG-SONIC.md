# 0.4.0 — Windows installation lifecycle

The installer now creates a per-user Windows installation, optional Start-menu and desktop shortcuts, and an Installed apps entry with an uninstaller. New installations store controls, settings, shader caches, logs and memory cards in a separate user-data folder, so saves survive uninstalling the application. Existing workbenches retain their original save and profile paths.

Selecting an existing complete installation changes Install to Update. Updates reuse the imported game and native DOL module, check the disc and module ABI, preserve controls/settings/saves, and roll back replaced files if cancelled or interrupted by a copy error. Close the game and launcher before updating. Updating does not need to extract or compile the game again.

Keyboard/Xbox controls, fullscreen, GPU widescreen, and the optional Y-button instant Light Dash remain available. No ROM or game assets are included; first installation requires a legally dumped USA GameCube GXSE8P revision 0 ISO/GCM/RVZ.

The runtime remains the tested 0.3.0 hybrid. This release improves installation and source packaging; it does not claim completed native REL execution or recovered source. Fast mode uses JIT execution. Native mode translates the DOL and falls back outside that coverage. See NATIVE-PORT.md for the native-module audit and remaining work.
