# Custom levels and Level Creator

Open **Custom levels + Creator** in Sonic Launcher. Select the included **Skyline Sprint** and click **Play level** to try it. To install someone else's creation, choose **Install level...** and select its `.sadxlevel` file. The preview shows the installed geometry; **Edit selected** opens a copy in the creator.

Choose **Create level** for a starter platform. Give it a name, then:

1. Click **Place box** or **Place ramp**, then click the canvas. Select a piece to drag it or change its position, dimensions, rotation and color on the right. Y means the bottom of the piece. Ramps rise toward +Z before rotation.
2. Use **Top view** for a plan view and **3D view** to see heights. Mouse wheel zooms; right or middle drag pans; **Fit view** fits your layout. **Grid snap** aligns placement and movement. **Place at Y** sets the height for new geometry.
3. Click **Place start** or **Place finish**. The creator switches to Top view. Click a platform: start is placed five units above its surface; finish is placed on it. You can also select and reposition either marker. A playable project needs both markers supported by geometry.
4. Click **Test Play** to save the project, install it, and launch the custom stage. After the game closes, open Custom Levels and Edit selected to continue editing. **Install level** saves it to the local library; **Export...** creates a shareable `.sadxlevel` package.

**Ctrl+S** saves; **Ctrl+Z / Ctrl+Y** undo/redo; **Ctrl+D** duplicates the selected piece. **Delete** removes a selected piece when the canvas has focus. **Save** writes an editable JSON project; **Open** accepts projects or exported packages.

Play with your usual keyboard/Xbox controls. The right stick rotates/tilts the custom camera; keyboard camera bindings also work. **Z (GameCube) / Xbox RB** restarts at the start marker. Falling below the level respawns Sonic. Walk through the gold finish gate to clear the level; the game returns to the launcher after about three seconds. Close the game window to leave earlier. The short original Emerald Coast objective card can appear during startup.

## Supported content

This first version plays **Sonic**, uses his original retail movement and collision engine, and supports up to **96 colored boxes and ramps**, plus the generated finish gate. It has a plain background and a camera adapted to the authored terrain. It does not yet provide rings, enemies, moving platforms, imported models/textures, lighting controls, scripts, other characters or Steam SADX mod compatibility. It requires the launcher's matching USA GameCube GXSE8P revision 0 import. Custom play starts fresh; save states and netplay are unsupported.

Projects and installed levels are stored in the launcher's user-data folder under `LevelProjects/` and `CustomLevels/`. Custom play uses `CustomPlay/user/`, separate from story memory cards, while copying your current controls and settings. The original extracted game files are not modified. New installations keep user data after uninstalling; portable installs retain it in their existing runtime-user folder.

## Package and runtime format

A `.sadxlevel` package is a ZIP containing exactly one `level.json`. Only authored geometry/metadata are allowed. The loader rejects extra entries, traversal IDs, non-finite numbers, excessive dimensions and oversized packages. Projects use format `sadx-workbench-level`, version 1. Piece positions and marker coordinates are within -4000..4000; dimensions are 2..1000; yaw rotation is -360..360 degrees.

The launcher converts a validated project to a small little-endian `SALEVEL1` binary: eight-byte signature, version/count as uint32, spawn and finish XYZ float32, then 36 bytes per piece (kind uint32, position XYZ, width/height/depth/yaw float32, ARGB uint32). The runtime validates this again, generates GameCube Ninja Basic terrain and replaces the loaded Emerald Coast act-0 land table for that process. Empty SET/camera-file overlays suppress stock stage objects. Terrain stays within that REL's allocation and the runtime stops when the allocation is unloaded. None of this requires distributing game data.
