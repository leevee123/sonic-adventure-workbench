# Xbox controller option

Open **Sonic Launcher.exe > Controls > Xbox controller > Save controls**, then Play. Connect or turn on the controller first. A dot beside a pad number marks a connected controller. The panel shows button presses, both stick positions, and trigger pressure.

| Game control | Xbox control |
|---|---|
| Movement | Left stick |
| Camera / C-stick | Right stick |
| A / B / X / Y | A / B / X / Y |
| Start / pause | Start / Menu |
| L / R analog and digital triggers | LT / RT |
| Z | RB |
| D-pad | D-pad |

The choice applies to Fast and Native modes and persists between launches. The launcher follows a connected Xbox controller if Windows assigns it a different slot at the next launch. If no controller is connected, Play prompts you to connect one or select Keyboard.

Stick dead zone cycles through 5–25%, initially 15%. Rumble can be enabled or disabled. Selecting Keyboard restores the saved keyboard bindings. Other controller ports, display settings, game files, and saves are preserved. Close the game before changing controls.

The controller backend is XInput, matching the runtime's own XInput device names. No new controller driver or third-party mapper is required for an Xbox-compatible XInput device. The Windows interface is documented in [Microsoft's XInputGetState reference](https://learn.microsoft.com/en-us/windows/win32/api/xinput/nf-xinput-xinputgetstate). DirectInput-only controllers need a separate profile.

Validation: 8 original launcher checks, 15 input/profile checks, a detected physical Xbox controller in slot 1, and a successful game boot with an Xbox profile. The boot test used a copy of user settings and automation for its frames. Physical button-to-game actions and rumble still need a short play test.

Sources: Launcher.cs and Controller.cs. Build with launcher/build.py using the existing Windows .NET Framework compiler.
