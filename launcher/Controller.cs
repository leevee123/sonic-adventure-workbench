using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Windows.Forms;

namespace SonicLauncher
{
    static class Xbox
    {
        [StructLayout(LayoutKind.Sequential)] public struct Pad
        {
            public ushort Buttons;
            public byte LeftTrigger, RightTrigger;
            public short LeftX, LeftY, RightX, RightY;
        }
        [StructLayout(LayoutKind.Sequential)] public struct State
        {
            public uint Packet;
            public Pad Gamepad;
        }
        [DllImport("xinput1_4.dll", EntryPoint="XInputGetState")]
        static extern uint GetState14(uint index, out State state);
        [DllImport("xinput1_3.dll", EntryPoint="XInputGetState")]
        static extern uint GetState13(uint index, out State state);
        [DllImport("xinput9_1_0.dll", EntryPoint="XInputGetState")]
        static extern uint GetState91(uint index, out State state);
        static int library=14;
        public static bool Read(int slot, out State state)
        {
            state=new State();
            if(slot<0 || slot>3)return false;
            try
            {
                if(library==14)return GetState14((uint)slot,out state)==0;
                if(library==13)return GetState13((uint)slot,out state)==0;
                if(library==91)return GetState91((uint)slot,out state)==0;
            }
            catch(DllNotFoundException) { library=library==14?13:library==13?91:0;return Read(slot,out state); }
            catch(EntryPointNotFoundException) { library=library==14?13:library==13?91:0;return Read(slot,out state); }
            return false;
        }
        public static bool Connected(int slot) { State state;return Read(slot,out state); }
        public static int FirstConnected() { for(int i=0;i<4;i++)if(Connected(i))return i;return -1; }
        public static string Device(int slot) { return "XInput/"+slot+"/Gamepad"; }
        public static string Pressed(Pad pad)
        {
            string[] names={"Up","Down","Left","Right","Start","Back","LS","RS","LB","RB","","","A","B","X","Y"};
            var pressed=new List<string>();
            for(int i=0;i<16;i++)if(names[i].Length>0 && (pad.Buttons & (1<<i))!=0)pressed.Add(names[i]);
            if(pad.LeftTrigger>30)pressed.Add("LT");if(pad.RightTrigger>30)pressed.Add("RT");
            return pressed.Count==0?"Press a button to test it":string.Join("  +  ",pressed);
        }
    }

    sealed class InputOptions
    {
        public bool Controller;
        public int Slot;
        public int Deadzone=15;
        public bool Rumble=true;
        public static InputOptions Load(Game game)
        {
            var preferences=new Ini(game.Preferences);var pad=new Ini(game.InputConfig);
            var options=new InputOptions();
            string device=pad.Get("GCPad1","Device","");
            string mode=preferences.Get("Input","mode",device.StartsWith("XInput/",StringComparison.OrdinalIgnoreCase)?"xbox":"keyboard");
            options.Controller=mode=="xbox";
            int value;
            options.Slot=int.TryParse(preferences.Get("Input","slot","0"),out value)?Math.Max(0,Math.Min(3,value)):0;
            options.Deadzone=int.TryParse(preferences.Get("Input","deadzone","15"),out value)?Math.Max(5,Math.Min(25,value)):15;
            options.Rumble=preferences.Get("Input","rumble","true")=="true";
            return options;
        }
        public void Save(Game game)
        {
            var ini=new Ini(game.Preferences);
            ini.Set("Input","mode",Controller?"xbox":"keyboard");ini.Set("Input","slot",Slot.ToString());
            ini.Set("Input","deadzone",Deadzone.ToString());ini.Set("Input","rumble",Rumble?"true":"false");
            ini.Save(game.Preferences);
        }
    }

    static class InputProfiles
    {
        static List<string> Keyboard()
        {
            return new List<string>{
                "Device = DInput/0/Keyboard Mouse", "Buttons/A = `X`", "Buttons/B = `Z`", "Buttons/X = `C`", "Buttons/Y = `S`",
                "Buttons/Z = `D`", "Buttons/Start = `RETURN`", "Main Stick/Up = `UP`", "Main Stick/Down = `DOWN`",
                "Main Stick/Left = `LEFT`", "Main Stick/Right = `RIGHT`", "C-Stick/Up = `I`", "C-Stick/Down = `K`",
                "C-Stick/Left = `J`", "C-Stick/Right = `L`", "Triggers/L = `Q`", "Triggers/R = `W`",
                "D-Pad/Up = `T`", "D-Pad/Down = `G`", "D-Pad/Left = `F`", "D-Pad/Right = `H`"
            };
        }
        static List<string> Controller(InputOptions options)
        {
            if(options.Slot<0 || options.Slot>3)throw new ArgumentOutOfRangeException("Slot");
            if(options.Deadzone<5 || options.Deadzone>25)throw new ArgumentOutOfRangeException("Deadzone");
            return new List<string>{
                "Device = "+Xbox.Device(options.Slot),
                "Buttons/A = `Button A`", "Buttons/B = `Button B`", "Buttons/X = `Button X`", "Buttons/Y = `Button Y`",
                "Buttons/Z = `Shoulder R`", "Buttons/Start = Start",
                "Main Stick/Up = `Left Y+`", "Main Stick/Down = `Left Y-`", "Main Stick/Left = `Left X-`", "Main Stick/Right = `Left X+`",
                "Main Stick/Calibration = 100.00", "Main Stick/Dead Zone = "+options.Deadzone.ToString(),
                "C-Stick/Up = `Right Y+`", "C-Stick/Down = `Right Y-`", "C-Stick/Left = `Right X-`", "C-Stick/Right = `Right X+`",
                "C-Stick/Calibration = 100.00", "C-Stick/Dead Zone = "+options.Deadzone.ToString(),
                "Triggers/L = `Trigger L`", "Triggers/R = `Trigger R`", "Triggers/L-Analog = `Trigger L`", "Triggers/R-Analog = `Trigger R`",
                "Triggers/Threshold = 90.00", "Triggers/Dead Zone = 5.00",
                "D-Pad/Up = `Pad N`", "D-Pad/Down = `Pad S`", "D-Pad/Left = `Pad W`", "D-Pad/Right = `Pad E`",
                "Rumble/Motor = "+(options.Rumble?"`Motor L` | `Motor R`":"")
            };
        }
        public static void Apply(Game game, InputOptions options)
        {
            var current=new Ini(game.InputConfig);
            string device=current.Get("GCPad1","Device","");
            string backup=Path.Combine(game.ProfileDirectory,"keyboard-profile.ini");
            if(options.Controller)
            {
                // Capture the user's own keyboard bindings before switching, including extra keys and comments.
                if(device.Equals("DInput/0/Keyboard Mouse",StringComparison.OrdinalIgnoreCase))
                {
                    var keyboard=new Ini(backup);keyboard.ReplaceSection("GCPad1",current.ReadSection("GCPad1"));keyboard.Save(backup);
                }
                current.ReplaceSection("GCPad1",Controller(options));
            }
            else if(!device.Equals("DInput/0/Keyboard Mouse",StringComparison.OrdinalIgnoreCase))
            {
                var keyboard=new Ini(backup);
                var lines=keyboard.ReadSection("GCPad1");
                current.ReplaceSection("GCPad1",lines.Count>0?lines:Keyboard());
            }
            // Replacing player one's section leaves other ports and unrelated settings intact.
            current.Save(game.InputConfig);
            var config=new Ini(game.Config);config.Set("Input","controller",options.Controller?Xbox.Device(options.Slot):"keyboard");
            config.Save(game.Config);options.Save(game);
        }
        public static InputOptions PrepareLaunch(Game game)
        {
            var options=InputOptions.Load(game);
            if(!options.Controller)return options;
            if(!Xbox.Connected(options.Slot))
            {
                int slot=Xbox.FirstConnected();
                if(slot<0)throw new IOException("Turn on and connect your Xbox controller, then click Play again. You can also choose Keyboard in Controls.");
                options.Slot=slot;
            }
            Apply(game,options);return options;
        }
    }

    sealed class InputForm : DarkForm
    {
        readonly Game game;
        readonly InputOptions options;
        readonly ActionButton keyboard,controller,deadzone,rumble;
        readonly ActionButton[] slots=new ActionButton[4];
        readonly System.Windows.Forms.Timer poll=new System.Windows.Forms.Timer();
        Xbox.State state;bool connected;
        public InputForm(Game game,bool preview) : base("Sonic Adventure DX | Controls",550,630,preview)
        {
            this.game=game;options=InputOptions.Load(game);
            if(preview)options.Controller=true;
            keyboard=ButtonAt("Keyboard",24,89,245,60,delegate{options.Controller=false;RefreshChoices();});
            keyboard.Subtitle="Arrow keys + action keys";
            controller=ButtonAt("Xbox controller",281,89,245,60,delegate
            {options.Controller=true;int slot=Xbox.FirstConnected();if(slot>=0)options.Slot=slot;RefreshChoices();});
            controller.Subtitle="USB or Bluetooth";
            for(int i=0;i<4;i++){int slot=i;slots[i]=ButtonAt("",24+i*128,192,118,35,delegate{options.Slot=slot;RefreshChoices();});}
            deadzone=ButtonAt("",24,370,245,39,delegate{options.Deadzone=options.Deadzone>=25?5:Math.Min(25,options.Deadzone+5);RefreshChoices();});
            rumble=ButtonAt("",281,370,245,39,delegate{options.Rumble=!options.Rumble;RefreshChoices();});
            ButtonAt("Cancel",24,559,136,43,delegate{DialogResult=DialogResult.Cancel;Close();});
            var save=ButtonAt("Save controls",172,559,354,43,delegate
            {
                try
                {
                    if(Game.IsRunning(game))throw new IOException("Close the game before changing its controls.");
                    InputProfiles.Apply(game,options);DialogResult=DialogResult.OK;Close();
                }
                catch(Exception ex){MessageBox.Show(this,ex.Message,"Couldn't save controls",MessageBoxButtons.OK,MessageBoxIcon.Error);}
            });save.Primary=true;AcceptButton=save;
            RefreshChoices();poll.Interval=75;poll.Tick+=delegate{Poll();};if(!preview)poll.Start();
        }
        void RefreshChoices()
        {
            keyboard.Selected=!options.Controller;controller.Selected=options.Controller;
            keyboard.Invalidate();controller.Invalidate();
            deadzone.Text="Stick dead zone: "+options.Deadzone+"%";deadzone.Enabled=options.Controller;deadzone.Invalidate();
            rumble.Text="Rumble: "+(options.Rumble?"ON":"OFF");rumble.Selected=options.Rumble;rumble.Enabled=options.Controller;rumble.Invalidate();
            Poll();
        }
        void Poll()
        {
            connected=Xbox.Read(options.Slot,out state);
            for(int i=0;i<4;i++)
            {
                slots[i].Text="Pad "+(i+1)+(Xbox.Connected(i)?"  \u2022":"");
                slots[i].Selected=options.Controller && options.Slot==i;slots[i].Enabled=options.Controller;slots[i].Invalidate();
            }
            Invalidate();
        }
        void DrawStick(Graphics g,int x,int y,short rawX,short rawY,string label)
        {
            const int radius=29;
            using(var pen=new Pen(Theme.Border,2))g.DrawEllipse(pen,x-radius,y-radius,radius*2,radius*2);
            using(var pen=new Pen(Color.FromArgb(80,150,170,196)))
            {g.DrawLine(pen,x-radius,y,x+radius,y);g.DrawLine(pen,x,y-radius,x,y+radius);}
            using(var brush=new SolidBrush(connected?Theme.Gold:Theme.Muted))
            g.FillEllipse(brush,x+rawX/32768f*radius-4,y-rawY/32768f*radius-4,8,8);
            Theme.Text(g,label,10,Theme.Muted,new RectangleF(x-55,y+33,110,17),FontStyle.Regular,true);
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);var g=e.Graphics;g.SmoothingMode=SmoothingMode.AntiAlias;g.ScaleTransform(S,S);
            Theme.Text(g,"READY, PLAYER ONE",23,Theme.Ink,new RectangleF(24,20,502,36),FontStyle.Bold);
            Theme.Text(g,"Choose how you play. Applies to Fast and Native.",12,Theme.Muted,new RectangleF(24,56,502,23));
            Theme.Text(g,"CONTROLLER SLOT",10,Theme.Muted,new RectangleF(24,162,502,22),FontStyle.Bold);
            using(var p=Theme.Rounded(new RectangleF(24,240,502,115),10))using(var b=new SolidBrush(Theme.Panel))g.FillPath(b,p);
            Theme.Text(g,options.Controller?(connected?"Controller connected":"No controller in this slot"):"Keyboard selected",13,
                options.Controller && connected?Color.FromArgb(90,221,161):Theme.Ink,new RectangleF(42,251,470,25),FontStyle.Bold);
            if(options.Controller)
            {
                DrawStick(g,76,307,state.Gamepad.LeftX,state.Gamepad.LeftY,"MOVE");
                DrawStick(g,176,307,state.Gamepad.RightX,state.Gamepad.RightY,"CAMERA");
                Theme.Text(g,connected?Xbox.Pressed(state.Gamepad):"Connect your Xbox controller.",11,Theme.Muted,new RectangleF(242,286,262,25));
                Theme.Text(g,"LT "+(state.Gamepad.LeftTrigger*100/255)+"%    RT "+(state.Gamepad.RightTrigger*100/255)+"%",11,Theme.Muted,new RectangleF(242,314,262,23));
            }
            else Theme.Text(g,"Your saved keyboard bindings are kept.",12,Theme.Muted,new RectangleF(42,287,470,35));
            string[,] rows=options.Controller?
                new string[,]{{"Move / camera","Left / right stick"},{"Jump / action","A / B"},{"Pause / X / Y","Start / X / Y"},{"Triggers / Z / D-pad","LT / RT / RB / D-pad"}}:
                new string[,]{{"Move / camera","Arrows / I J K L"},{"Jump / action","X / Z"},{"Pause / X / Y","Enter / C / S"},{"Triggers / Z / D-pad","Q / W / D / T G F H"}};
            for(int i=0;i<4;i++)
            {
                int y=421+i*28;Theme.Text(g,rows[i,0],12,Theme.Muted,new RectangleF(24,y,235,25));
                Theme.Text(g,rows[i,1],12,Theme.Ink,new RectangleF(269,y,257,25),FontStyle.Bold);
            }
            Theme.Text(g,"Connect before Play. A dot marks each connected pad.",10,Theme.Muted,new RectangleF(24,536,502,17));
        }
        protected override void OnFormClosed(FormClosedEventArgs e){poll.Stop();poll.Dispose();base.OnFormClosed(e);}
        protected override void OnKeyDown(KeyEventArgs e){base.OnKeyDown(e);if(e.KeyCode==Keys.Escape)Close();}
    }
}
