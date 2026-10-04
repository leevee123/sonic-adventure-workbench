// SPDX-License-Identifier: GPL-3.0-or-later
using System;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Reflection;
using System.Windows.Forms;
namespace SonicLauncher {
static class LevelChecks {
 static int checks;
 static void Require(bool value,string message){if(!value)throw new Exception(message);checks++;}
 static void Reject(Action a,string message){bool rejected=false;try{a();}catch(InvalidDataException){rejected=true;}Require(rejected,message);}
 static void Mouse(LevelCanvas c,string method,int x,int y){typeof(LevelCanvas).GetMethod(method,BindingFlags.NonPublic|BindingFlags.Instance).Invoke(c,new object[]{new MouseEventArgs(MouseButtons.Left,1,x,y,0)});}
 [STAThread] public static int Main(string[] args){try{
  string root=Path.GetFullPath(args[0]);Directory.CreateDirectory(root);var game=new Game(root,Path.Combine(root,"user"),Path.Combine(root,"profile"));var d=LevelDocument.Starter();LevelFiles.Validate(d);
  string zip=Path.Combine(root,"starter.sadxlevel");LevelFiles.Export(d,zip);var round=LevelFiles.Read(zip);Require(round.Pieces.Count==5&&round.Finish.Y==30,"Package round trip");
  Require(Math.Abs(LevelFiles.Surface(d,0,100).Value-15)<.001,"Ramp surface midpoint");d.Pieces[1].Rotation=90;Require(Math.Abs(LevelFiles.Surface(d,0,100).Value-15)<.001,"Rotated ramp midpoint");d.Pieces[1].Rotation=0;
  d.Name="";Require(LevelFiles.Copy(d).Name=="","Draft with temporarily empty name");Reject(()=>LevelFiles.Validate(d),"Unnamed playable level accepted");d.Name="Skyline Sprint";
  var bad=LevelFiles.Copy(d);bad.Id="../escape";Reject(()=>LevelFiles.Install(game,bad),"Path traversal ID accepted");bad=LevelFiles.Copy(d);bad.Spawn.X=3000;Reject(()=>LevelFiles.Validate(bad),"Unsupported spawn accepted");bad=LevelFiles.Copy(d);bad.Pieces[0].Width=float.NaN;Reject(()=>LevelFiles.Validate(bad),"Nonfinite geometry accepted");bad=LevelFiles.Copy(d);while(bad.Pieces.Count<=96)bad.Pieces.Add(new LevelPiece());Reject(()=>LevelFiles.Validate(bad),"Excessive geometry accepted");
  string malicious=Path.Combine(root,"bad.sadxlevel");using(var z=ZipFile.Open(malicious,ZipArchiveMode.Create)){z.CreateEntry("../level.json");}Reject(()=>LevelFiles.Read(malicious),"Archive traversal accepted");File.Delete(malicious);using(var z=ZipFile.Open(malicious,ZipArchiveMode.Create)){z.CreateEntry("level.json");z.CreateEntry("run.exe");}Reject(()=>LevelFiles.Read(malicious),"Executable entry accepted");
  string original=Path.Combine(game.User,"story-save.gci");Directory.CreateDirectory(game.User);File.WriteAllText(original,"unchanged");LevelFiles.Install(game,round);int invalid;Require(LevelFiles.Installed(game,out invalid).Count==1&&invalid==0,"Library install/list");round.Name="Updated title";LevelFiles.Install(game,round);Require(LevelFiles.Installed(game,out invalid).Single().Name=="Updated title","Replacing installed package");Require(File.ReadAllText(original)=="unchanged","Installing level changed story save");
  byte[] binary=File.ReadAllBytes(LevelFiles.Binary(game,round));Require(binary.Length==220&&BitConverter.ToUInt32(binary,12)==5&&BitConverter.ToSingle(binary,32)==30,"Runtime binary count/goal/layout");var session=LevelFiles.PlayGame(game);Require(session.User!=game.User&&File.ReadAllText(original)=="unchanged","Custom session isolation");
  using(var c=new LevelCanvas{Document=LevelDocument.Empty(),Width=600,Height=400,TopView=true,Tool=1}){c.Fit();int n=c.Document.Pieces.Count;Mouse(c,"OnMouseDown",300,200);Require(c.Document.Pieces.Count==n+1&&c.Document.Pieces.Last().Kind=="box","Click placement");c.Tool=0;Mouse(c,"OnMouseDown",300,200);int i=c.Selected;Require(i>=0,"Click selection");float x=c.Document.Pieces[i].Position.X;Mouse(c,"OnMouseMove",340,200);float first=c.Document.Pieces[i].Position.X;Mouse(c,"OnMouseMove",340,200);Require(first!=x&&c.Document.Pieces[i].Position.X==first,"Drag accumulates or does not move");Mouse(c,"OnMouseUp",340,200);c.Tool=3;Mouse(c,"OnMouseDown",300,200);Require(c.Selected==-2&&c.Document.Spawn.Y>=5,"Start placement over surface");}
  using(var editor=new LevelEditorForm(game,LevelDocument.Starter(),true)){var field=typeof(LevelEditorForm).GetField("name",BindingFlags.Instance|BindingFlags.NonPublic);((TextBox)field.GetValue(editor)).Text="";((TextBox)field.GetValue(editor)).Text="Renamed";var undo=typeof(LevelEditorForm).GetMethod("Undo",BindingFlags.Instance|BindingFlags.NonPublic);undo.Invoke(editor,new object[]{false});Require(editor.Document.Name=="","Undo to draft state");undo.Invoke(editor,new object[]{false});Require(editor.Document.Name=="Skyline Sprint","Undo original metadata");undo.Invoke(editor,new object[]{true});Require(editor.Document.Name=="","Redo draft state");var finish=editor.Controls.OfType<ActionButton>().Single(b=>b.Text=="Place finish");typeof(Button).GetMethod("OnClick",BindingFlags.Instance|BindingFlags.NonPublic).Invoke(finish,new object[]{EventArgs.Empty});var canvas=(LevelCanvas)typeof(LevelEditorForm).GetField("canvas",BindingFlags.Instance|BindingFlags.NonPublic).GetValue(editor);Require(canvas.TopView&&canvas.Tool==4,"Marker tool automatic top view");}
  Console.WriteLine("PASS "+checks+" custom level package, bounds, installation, session isolation, placement, dragging and undo checks");return 0;
 }catch(Exception e){Console.Error.WriteLine(e);return 1;}}
}}
