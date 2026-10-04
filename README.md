Sonic Adventure DX for Windows — recomp preview 0.6.0



Run SonicAdventureDX-Setup.exe and select a legally dumped USA GameCube GXSE8P revision 0 ISO/GCM/RVZ. The download contains no game data; the game dump is required to play. Setup includes ModernGekko, its system resources, DolRecomp, DolphinTool, an x64 compiler and app-local Visual C++ runtime libraries. It extracts your dump and builds the native DOL module on your PC. No Visual Studio, Python or additional downloads are needed. Setup needs Windows 10/11 x64, .NET Framework 4.7+ (normally present), and a GPU with Vulkan support. First setup takes several minutes and may take longer on slower PCs.



The default install folder is %LOCALAPPDATA%/Programs/SonicAdventureDX. Setup adds an Installed apps entry with an uninstaller and offers Start-menu and desktop shortcuts. New installs store saves, controls, settings, caches and logs separately in %LOCALAPPDATA%/SonicAdventureDX/<installation id>; the launcher opens the actual Saves and Logs folders. Uninstall removes recorded installation files and keeps your saves, original dump and custom files. Installing into a protected folder requires permission to write there; the default per-user location needs no administrator rights.



To update, close the game and launcher, run Setup, and select the existing game folder. The button changes to Update game. The installer verifies and reuses the game import and native module, preserves settings/controls/saves, and backs up replaced files. Failed/cancelled updates roll back replaced files. Existing portable workbenches keep their original save paths. An unrelated nonempty folder is refused.



Settings includes Widescreen (16:9 projection expansion) and Instant Light Dash (Y; keyboard S by default). Both default to OFF and apply next launch. The dash uses the original Sonic action; traversal still needs rings. Controls supports Xbox XInput and keyboard. Fast uses the JIT CPU; Native uses locally translated DOL code with fallback for RELs.



Custom levels + Creator opens the level library: install a .sadxlevel package, choose a level, and Play level. Skyline Sprint is included automatically. Create level / Edit selected opens the visual creator with colored boxes and ramps, grid snapping, drag placement, numeric sizing/rotation, undo/redo, start/finish markers, Test Play and export. Sonic uses the original collision/movement engine on your geometry. Right stick rotates the custom camera; Z / Xbox RB restarts; falling respawns; the finish returns to the launcher. Story saves stay separate. The first version supports Sonic and 96 pieces; models/textures, enemies, rings and scripts are not yet supported. See CUSTOM-LEVELS.md for the guide and format.



Multiplayer adds experimental local split screen for two Xbox controllers. Open Multiplayer, select two-player mode and assign the pads. Sonic action stages and custom levels use two Sonics with separate orbit cameras; hubs, bosses and other campaigns retain one view. Co-op selects Fast mode automatically. The original HUD/progression is shared. See MULTIPLAYER.md for controls and current limits.

This remains a playable experimental hybrid. Native REL integration, full stage/character regression coverage and complete source recovery remain unfinished. See VERIFICATION.md for actual tests and NATIVE-PORT.md for integration requirements. Corresponding runtime and launcher/setup source is included under source/ and published on GitHub. Your imported game and saves stay local. This installer uses a GameCube dump; a Steam SADX install cannot replace it.

