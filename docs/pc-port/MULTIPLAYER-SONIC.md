# Local split screen (experimental)

Connect two Xbox or Xbox-compatible XInput controllers. In the launcher, open **Multiplayer**, choose **2-player split screen**, assign different pads, and save. Press buttons in the menu to identify each controller. Press **Play** for the original game, or choose a custom level and press **Play level**. Player one uses the top view; player two uses the bottom view. Each player controls a Sonic with the original movement and collision routines.

In story stages, player two's pit death costs one shared life and clears the shared ring count after the death delay, then respawns that player at the current section's start or checkpoint. Player one remains in place. Player one leads the original section transitions; player two joins the new section. Emerald Coast rings, footprint effects and distant object loading have controlled regression checks.

The right stick turns each player's camera. Player one handles the original menus and pause screen. In custom levels, Xbox RB resets that player, falls return that player to the start, and either player can reach the finish to return both to the launcher.

Split screen automatically uses **Fast** mode. Choose **Single player** to return to your preferred Fast/Native mode. Controller profiles are temporary for the game session; the launcher restores them when the game closes and can recover them on its next start after an interrupted session. Custom levels use separate memory cards as before.

Initial scope is Sonic's ordinary action stages and authored custom levels. Both players share stage progression, objects and the original HUD. Story hubs, bosses, cutscenes and other character campaigns keep the original single-player view. Two-Sonic co-op replaces a normal AI Sonic/Tails companion through its task teardown before registering the second player. Other occupants of player slot two are refused. A complete story playthrough and physical two-controller gameplay have not been verified.

Camera behavior is a basic follow/orbit camera; stage-specific automatic camera sequences, camera collision, every stage gimmick, independent HUDs, second-view shadows and stage-specific object behavior still need broader testing. Emerald Coast's full-screen water refraction is omitted in co-op; ordinary water geometry remains. Save states and netplay cannot be combined with this mode. This is a local co-op preview, and the game remains an experimental recompilation/runtime hybrid rather than a fully decompiled native source port.

Runtime developers can use `--split-screen` with the supported GXSE8P revision 0 import. The launcher also configures both controller ports. See VERIFICATION.md for the actual checks, including their limits.
