# Building the 0.5.0 runtime and installer

The complete ModernGekko source, pinned vendor sources, local changes, and C# launcher/setup sources are in ModernGekko-Source.zip. No generated Sonic module, extracted disc, or game assets are included.

Use Visual Studio with Desktop development with C++, Windows SDK, CMake and Ninja. In an x64 developer terminal, from the extracted ModernGekko source root:

~~~powershell
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release -DMODERNGEKKO_ENABLE_DOLPHIN_RUNTIME=ON -DMODERNGEKKO_ENABLE_DISC_TOOL=ON -DMODERNGEKKO_GAMECUBE_CONTROLLERS=ON -DMODERNGEKKO_REQUIRED_DISC_ID=GXSE8P -DMODERNGEKKO_DEFAULT_WINDOW_TITLE=SonicAdventureDX -DENABLE_QT=OFF -DENABLE_TESTS=OFF -DENABLE_AUTOUPDATE=OFF -DENABLE_ANALYTICS=OFF
cmake --build build --target moderngekko-run moderngekko-module-info dolphin-tool dolrecomp -j 4
~~~

Copy the runtime executables and Dolphin Sys resources alongside the runner. The C# launcher requires Windows x64 .NET Framework 4.7 or later. Its build script needs Python 3 only during development:

~~~powershell
python sonic-launcher/build.py --output dist
python sonic-launcher/build.py --output dist --payload Runtime.zip
~~~

Runtime.zip must contain a reviewed payload without game data in the layout used by the installed release: launcher/uninstaller, runner + Sys resources, disc tool, translator, module-info tool, LLVM-mingw x64 compiler (including its target .cfg files), module-support sources, app-local Visual C++ CRT redistributables, portable default configuration, notices, and complete corresponding source. The release packaging script is included under release-tools/. Its --workbench and --compiler arguments select the prepared runtime source/tool binaries and LLVM distribution; game-generated directories are excluded. Both the launcher and installer builds include Installation.cs.

The local incremental build used MSVC 14.51 and Windows SDK 10.0.28000.0. Its DolphinTool resource-only icon object was omitted after Windows rc.exe rejected the long include list. This affects the CLI icon, not disc extraction. A fresh build on another SDK/compiler has not been verified.

The installer runs DolRecomp with the C backend and the recompcore runtime, generates ABI-4 tables locally, and links the user's native module with LLVM ThinLTO. The bundled compiler needs its target configuration to use compiler-rt/libunwind. No Visual Studio, Python, network download, or external compiler is needed by the end user.

The bundled source and notices describe the respective upstream licenses. ModernGekko and RecompCore changes are GPL-3.0-or-later.

Both C# builds include Levels.cs and LevelEditor.cs; custom terrain lives in src/runtime/sonic_levels.hpp. LevelChecks.cs exercises the editor/package workflow. Compile levels.cpp with the runtime directory on the include path. custom_level_installed.py requires a local game import and the starter binary from --sample-level / --compile-level; use --native to verify native DOL execution.
