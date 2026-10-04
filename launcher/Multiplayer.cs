// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.Collections.Generic;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Windows.Forms;
namespace SonicLauncher
{
    static class MultiplayerChecks
    {
        public static int Run(Game source,string output)
        {
            output=Path.GetFullPath(output);if(Directory.Exists(output))return 2;
            var game=new Game(source.Root,Path.Combine(output,"user"),Path.Combine(output,"profile"));
            Directory.CreateDirectory(Path.GetDirectoryName(game.InputConfig));
            File.WriteAllText(game.InputConfig,"# my controls\n[GCPad1]\nDevice=DInput/0/Keyboard Mouse\nButtons/A=`SPACE`\n[GCPad2]\nDevice=Custom/0/Pad\n[GCPad3]\nButtons/A=`CUSTOM`\n");
            File.WriteAllText(game.Config,"# keep settings\n[Video]\nfullscreen=true\n[Netplay]\nnickname=Player\n");
            var options=new MultiplayerOptions{Enabled=true,Player1=2,Player2=0};options.Save(game);
            var checks=new Dictionary<string,bool>();var loaded=MultiplayerOptions.Load(game);
            checks["selection_persists"]=loaded.Enabled&&loaded.Player1==2&&loaded.Player2==0;
            checks["selected_connected_pair"]=loaded.ConnectedPair(new[]{0,2,3}).SequenceEqual(new[]{2,0});
            checks["disconnected_slot_falls_back"]=loaded.ConnectedPair(new[]{1,3}).SequenceEqual(new[]{1,3});
            bool missing=false;try{loaded.ConnectedPair(new[]{1,1});}catch(IOException){missing=true;}checks["requires_two_distinct_pads"]=missing;
            string pad=File.ReadAllText(game.InputConfig),config=File.ReadAllText(game.Config),preferences=File.ReadAllText(game.Preferences);
            using(var scope=new MultiplayerProfileScope(game,loaded,new[]{0,2}))
            {
                var p=new Ini(game.InputConfig);checks["independent_pad_profiles"]=p.Get("GCPad1","Device","")==Xbox.Device(2)&&p.Get("GCPad2","Device","")==Xbox.Device(0);
                checks["third_pad_preserved"]=p.Get("GCPad3","Buttons/A","")=="`CUSTOM`";
                checks["video_and_netplay_preserved"]=new Ini(game.Config).Get("Video","fullscreen","")=="true"&&new Ini(game.Config).Get("Netplay","nickname","")=="Player";
                checks["preferences_unchanged_during_session"]=preferences==File.ReadAllText(game.Preferences);
            }
            checks["profiles_restored_exactly"]=pad==File.ReadAllText(game.InputConfig)&&config==File.ReadAllText(game.Config);
            checks["preferences_restored"]=preferences==File.ReadAllText(game.Preferences);
            var interrupted=new MultiplayerProfileScope(game,loaded,new[]{0,2});MultiplayerProfileScope.Recover(game);
            checks["interrupted_session_recovered"]=pad==File.ReadAllText(game.InputConfig)&&config==File.ReadAllText(game.Config)&&!File.Exists(Path.Combine(game.ProfileDirectory,"multiplayer-recovery","record.ini"));interrupted.Dispose();
            checks["split_flag_opt_in"]=game.StartInfo(true,null,null,true).Arguments.Contains("--split-screen")&&!game.StartInfo(true,null).Arguments.Contains("--split-screen");
            bool duplicate=false;try{new MultiplayerOptions{Enabled=true,Player1=0,Player2=0}.Save(game);}catch(IOException){duplicate=true;}checks["duplicate_assignment_rejected"]=duplicate;
            bool passed=checks.Values.All(v=>v);File.WriteAllText(Path.Combine(output,"multiplayer-test.json"),"{\"passed\":"+(passed?"true":"false")+",\"checks\":{"+string.Join(",",checks.Select(p=>"\""+p.Key+"\":"+(p.Value?"true":"false")))+"}}\n");return passed?0:1;
        }
    }
    sealed class MultiplayerOptions
    {
        public bool Enabled;
        public int Player1,Player2=1;
        public static MultiplayerOptions Load(Game game)
        {
            var ini=new Ini(game.Preferences);int a,b;
            var input=InputOptions.Load(game);
            var result=new MultiplayerOptions();result.Enabled=ini.Get("Multiplayer","enabled","false")=="true";
            result.Player1=int.TryParse(ini.Get("Multiplayer","player1",input.Slot.ToString()),out a)?Math.Max(0,Math.Min(3,a)):0;
            result.Player2=int.TryParse(ini.Get("Multiplayer","player2",(result.Player1==0?1:0).ToString()),out b)?Math.Max(0,Math.Min(3,b)):1;
            return result;
        }
        public void Save(Game game)
        {
            if(Enabled&&Player1==Player2)throw new IOException("Choose a different Xbox controller for each player.");
            var ini=new Ini(game.Preferences);ini.Set("Multiplayer","enabled",Enabled?"true":"false");
            ini.Set("Multiplayer","player1",Player1.ToString());ini.Set("Multiplayer","player2",Player2.ToString());ini.Save(game.Preferences);
        }
        public int[] ConnectedPair(IEnumerable<int> devices)
        {
            var available=devices.Where(i=>i>=0&&i<4).Distinct().ToList();
            if(available.Count<2)throw new IOException("Connect two Xbox controllers, then press Play again. Multiplayer lets you test and assign both pads.");
            int one=available.Contains(Player1)?Player1:available[0];
            int two=available.Contains(Player2)&&Player2!=one?Player2:available.First(i=>i!=one);
            return new[]{one,two};
        }
    }
    // Own the temporary controller overrides for exactly one running session.
    // The original keyboard/controller profiles and preferences are restored.
    sealed class MultiplayerProfileScope : IDisposable
    {
        readonly string pad,config,journal;readonly byte[] savedPad,savedConfig;
        bool disposed;
        public readonly int[] Slots;
        public MultiplayerProfileScope(Game game,MultiplayerOptions options,IEnumerable<int> devices)
        {
            Slots=options.ConnectedPair(devices);pad=game.InputConfig;config=game.Config;
            journal=Path.Combine(game.ProfileDirectory,"multiplayer-recovery");
            savedPad=File.Exists(pad)?File.ReadAllBytes(pad):null;savedConfig=File.Exists(config)?File.ReadAllBytes(config):null;
            if(File.Exists(Path.Combine(journal,"record.ini")))throw new IOException("A previous multiplayer profile needs recovery. Close the game and restart the launcher.");
            try {
                Directory.CreateDirectory(journal);
                if(savedPad!=null)File.WriteAllBytes(Path.Combine(journal,"pad.bin"),savedPad);
                if(savedConfig!=null)File.WriteAllBytes(Path.Combine(journal,"config.bin"),savedConfig);
                var record=new Ini(Path.Combine(journal,"record.ini"));record.Set("Recovery","pad",pad);record.Set("Recovery","config",config);
                record.Set("Recovery","had_pad",savedPad!=null?"true":"false");record.Set("Recovery","had_config",savedConfig!=null?"true":"false");record.Save(Path.Combine(journal,"record.ini"));
                var profile=new Ini(pad);var original=InputOptions.Load(game);
                for(int i=0;i<2;i++)profile.ReplaceSection("GCPad"+(i+1),InputProfiles.ControllerLines(new InputOptions{Controller=true,Slot=Slots[i],Deadzone=original.Deadzone,Rumble=original.Rumble}));
                profile.Save(pad);var ini=new Ini(config);ini.Set("Input","controller",Xbox.Device(Slots[0]));ini.Set("Input","background_input","true");ini.Save(config);
            }catch {Dispose();throw;}
        }
        static void Restore(string path,byte[] data)
        {
            if(data==null){if(File.Exists(path))File.Delete(path);return;}
            string temporary=path+"."+Guid.NewGuid().ToString("N")+".tmp";File.WriteAllBytes(temporary,data);
            try {if(File.Exists(path))File.Replace(temporary,path,null);else File.Move(temporary,path);}
            finally {if(File.Exists(temporary))File.Delete(temporary);}
        }
        static void ClearJournal(string folder){foreach(string name in new[]{"record.ini","pad.bin","config.bin"}){string p=Path.Combine(folder,name);if(File.Exists(p))File.Delete(p);}if(Directory.Exists(folder)&&!Directory.EnumerateFileSystemEntries(folder).Any())Directory.Delete(folder);}
        public static void Recover(Game game)
        {
            string folder=Path.Combine(game.ProfileDirectory,"multiplayer-recovery"),file=Path.Combine(folder,"record.ini");if(!File.Exists(file)||Game.IsRunning(game))return;
            var record=new Ini(file);string p=Path.GetFullPath(record.Get("Recovery","pad","")),c=Path.GetFullPath(record.Get("Recovery","config",""));
            string boundary=Path.GetFullPath(game.User).TrimEnd(Path.DirectorySeparatorChar)+Path.DirectorySeparatorChar;
            if(!p.StartsWith(boundary,StringComparison.OrdinalIgnoreCase)||!c.StartsWith(boundary,StringComparison.OrdinalIgnoreCase)||Path.GetFileName(p)!="GCPadNew.ini"||Path.GetFileName(c)!="config.ini")throw new IOException("The multiplayer recovery paths are invalid.");
            Restore(p,record.Get("Recovery","had_pad","")=="true"?File.ReadAllBytes(Path.Combine(folder,"pad.bin")):null);
            Restore(c,record.Get("Recovery","had_config","")=="true"?File.ReadAllBytes(Path.Combine(folder,"config.bin")):null);ClearJournal(folder);
        }
        public void Dispose(){if(disposed)return;Restore(pad,savedPad);Restore(config,savedConfig);ClearJournal(journal);disposed=true;}
    }
    sealed class MultiplayerForm : DarkForm
    {
        readonly Game game;readonly MultiplayerOptions options;
        readonly ActionButton solo,split;
        readonly ComboBox first=new ComboBox(),second=new ComboBox();
        readonly System.Windows.Forms.Timer timer=new System.Windows.Forms.Timer();
        string firstStatus="",secondStatus="";
        public MultiplayerForm(Game game,bool preview) : base("Sonic Adventure DX | Multiplayer",650,480,preview)
        {
            this.game=game;options=MultiplayerOptions.Load(game);if(preview)options.Enabled=true;
            solo=ButtonAt("Single player",24,82,295,55,delegate{options.Enabled=false;RefreshChoices();});
            split=ButtonAt("2-player split screen",331,82,295,55,delegate{options.Enabled=true;RefreshChoices();});split.Subtitle="Two Xbox controllers";
            Setup(first,24,201,options.Player1);Setup(second,331,201,options.Player2);
            first.SelectedIndexChanged+=delegate{options.Player1=first.SelectedIndex;Poll();};second.SelectedIndexChanged+=delegate{options.Player2=second.SelectedIndex;Poll();};
            ButtonAt("Cancel",24,410,140,44,delegate{DialogResult=DialogResult.Cancel;Close();});
            var save=ButtonAt("Save multiplayer options",176,410,450,44,delegate{
                try {if(Game.IsRunning(game))throw new IOException("Close the game before changing multiplayer options.");options.Save(game);DialogResult=DialogResult.OK;Close();}
                catch(Exception ex){MessageBox.Show(this,ex.Message,"Multiplayer",MessageBoxButtons.OK,MessageBoxIcon.Warning);}
            });save.Primary=true;AcceptButton=save;
            timer.Interval=90;timer.Tick+=delegate{Poll();};if(!preview)timer.Start();RefreshChoices();
        }
        void Setup(ComboBox box,int x,int y,int value)
        {
            box.DropDownStyle=ComboBoxStyle.DropDownList;box.Location=new Point((int)(x*S),(int)(y*S));box.Size=new Size((int)(295*S),(int)(32*S));box.Font=Theme.Font(15*S);
            box.BackColor=Theme.Panel;box.ForeColor=Theme.Ink;box.Items.AddRange(new object[]{"Xbox pad 1","Xbox pad 2","Xbox pad 3","Xbox pad 4"});box.SelectedIndex=value;Controls.Add(box);
            box.DrawMode=DrawMode.OwnerDrawFixed;box.ItemHeight=(int)(24*S);
            box.DrawItem+=delegate(object sender,DrawItemEventArgs e){using(var brush=new SolidBrush(Theme.Panel))e.Graphics.FillRectangle(brush,e.Bounds);if(e.Index>=0)TextRenderer.DrawText(e.Graphics,box.Items[e.Index].ToString(),box.Font,e.Bounds,box.Enabled?Theme.Ink:Theme.Muted,TextFormatFlags.VerticalCenter|TextFormatFlags.Left);e.DrawFocusRectangle();};
        }
        void RefreshChoices(){solo.Selected=!options.Enabled;split.Selected=options.Enabled;solo.Invalidate();split.Invalidate();first.Enabled=second.Enabled=options.Enabled;Poll();}
        void Poll()
        {
            Xbox.State a,b;firstStatus=Xbox.Read(options.Player1,out a)?"Connected | "+Xbox.Pressed(a.Gamepad):"Connect this Xbox controller";
            secondStatus=Xbox.Read(options.Player2,out b)?"Connected | "+Xbox.Pressed(b.Gamepad):"Connect this Xbox controller";Invalidate();
        }
        protected override void OnPaint(PaintEventArgs e)
        {
            base.OnPaint(e);var g=e.Graphics;g.ScaleTransform(S,S);
            Theme.Text(g,"LOCAL MULTIPLAYER",22,Theme.Ink,new RectangleF(24,25,602,39),FontStyle.Bold);
            Theme.Text(g,"PLAYER 1 — TOP SCREEN",13,Theme.Gold,new RectangleF(24,157,295,32),FontStyle.Bold);
            Theme.Text(g,"PLAYER 2 — BOTTOM SCREEN",13,Theme.Gold,new RectangleF(331,157,295,32),FontStyle.Bold);
            Theme.Text(g,firstStatus,12,Theme.Muted,new RectangleF(24,240,295,40));Theme.Text(g,secondStatus,12,Theme.Muted,new RectangleF(331,240,295,40));
            Theme.Text(g,"Press a button to identify each pad. Each player has their own camera.",13,Theme.Ink,new RectangleF(24,292,602,34));
            Theme.Text(g,"Experimental co-op: Sonic action stages + custom levels. Player 1 Start pauses.",12,Theme.Muted,new RectangleF(24,326,602,32));
            Theme.Text(g,"Uses Fast mode. Story hubs, bosses and other characters keep a single view.",12,Theme.Muted,new RectangleF(24,357,602,30));
        }
        protected override void OnFormClosed(FormClosedEventArgs e){timer.Stop();timer.Dispose();base.OnFormClosed(e);}
    }
}
