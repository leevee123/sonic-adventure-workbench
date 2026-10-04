// SPDX-License-Identifier: GPL-3.0-or-later
#pragma once
#include "sonic_multiplayer.hpp"
#include "Core/HLE/HLE.h"
#include "Core/HW/GPFifo.h"
#include "Core/HW/Memmap.h"
#include "Core/PowerPC/Interpreter/Interpreter.h"
#include "Core/PowerPC/PowerPC.h"
#include "Core/System.h"
#include <functional>
#include <vector>
namespace moderngekko::sonic {
inline std::uint32_t GuestCall(Core::System& system,std::uint32_t address,std::array<std::uint32_t,3> arguments) {
  auto& ppc=system.GetPPCState();const auto saved=ppc;
  constexpr std::uint32_t sentinel=0x81800000;
  const auto stack=(ppc.gpr[1]-0x400)&~15u;
  if(!system.GetMemory().GetPointerForRange(stack-0x1000,0x1000))throw std::runtime_error("Multiplayer guest stack is unmapped.");
  ppc.gpr[1]=stack;
  for(unsigned i=0;i<arguments.size();++i)ppc.gpr[3+i]=arguments[i];
  ppc.pc=address;ppc.npc=address+4;ppc.spr[SPR_LR]=sentinel;unsigned steps=0;
  std::array<std::uint32_t,64> trace{};
  while(ppc.pc!=sentinel && ++steps<500000 && !(ppc.Exceptions & (EXCEPTION_DSI|EXCEPTION_PROGRAM))){trace[steps%trace.size()]=ppc.pc;system.GetInterpreter().SingleStepInner();}
  const auto result=ppc.gpr[3];const bool success=ppc.pc==sentinel;
  if(!success){std::fprintf(stderr,"[multiplayer] guest call=%08x stopped=%08x steps=%u exceptions=%08x sp=%08x lr=%08x msr=%08x\n",address,ppc.pc,steps,ppc.Exceptions,ppc.gpr[1],ppc.spr[SPR_LR],ppc.msr.Hex);for(unsigned i=0;i<trace.size();++i)std::fprintf(stderr,"%08x%c",trace[(steps+i)%trace.size()],i==trace.size()-1?'\n':' ');}
  std::copy(std::begin(saved.gpr),std::end(saved.gpr),std::begin(ppc.gpr));
  std::copy(std::begin(saved.ps),std::end(saved.ps),std::begin(ppc.ps));
  std::copy(std::begin(saved.spr),std::end(saved.spr),std::begin(ppc.spr));
  ppc.pc=saved.pc;ppc.npc=saved.npc;ppc.cr=saved.cr;ppc.fpscr.Hex=saved.fpscr.Hex;
  ppc.msr.Hex=saved.msr.Hex;ppc.Exceptions=saved.Exceptions;ppc.downcount=saved.downcount;
  ppc.xer_ca=saved.xer_ca;ppc.xer_so_ov=saved.xer_so_ov;ppc.xer_stringctrl=saved.xer_stringctrl;
  if(!success)throw std::runtime_error("Multiplayer guest call failed or timed out.");return result;
}
class SplitRenderer {
  inline static SplitRenderer* active=nullptr;
  Core::System& system;
  MultiplayerSession& players;
  std::uint32_t stub=0,allocation_owner=0,allocation_generation=0,water_effect=0,water_generation=0;
  bool hooks=false,reported=false;
  std::uint32_t input_yaw=0,input_epoch=0;
  std::array<std::uint32_t,2> input_adjusted{};
  struct Frame {std::uint32_t lr,sp,camera,entry,camera_mode;std::array<std::uint32_t,6> saved;unsigned phase=0,view=0;std::unique_ptr<PowerPC::PowerPCState> call;std::array<std::uint32_t,3> pipeline{};std::array<std::uint32_t,6> viewport{};std::uint32_t gx=0,render=0,flags=0;};
  std::vector<Frame> frames;
public:
  std::array<float,2> yaw{3.14159265f,3.14159265f},pitch{.48f,.48f};
  std::function<void(const char*)> failure;
  SplitRenderer(Core::System& s,MultiplayerSession& p):system(s),players(p){active=this;}
  ~SplitRenderer(){if(active==this)active=nullptr;}
  std::uint32_t Read(std::uint32_t a,unsigned n=4)const {const auto* p=system.GetMemory().GetPointerForRange(a,n);if(!p)return 0;std::uint32_t v=0;for(unsigned i=0;i<n;++i)v=(v<<8)|p[i];return v;}
  void Write(std::uint32_t a,std::uint32_t v,unsigned n=4){auto* p=system.GetMemory().GetPointerForRange(a,n);if(!p)throw std::runtime_error("Unmapped multiplayer write.");for(unsigned i=0;i<n;++i)p[i]=v>>(8*(n-1-i));}
  static float Float(std::uint32_t v){float f;std::memcpy(&f,&v,4);return f;}
  void Put(std::uint32_t a,float f){std::uint32_t v;std::memcpy(&v,&f,4);Write(a,v);}
  bool Ready()const {return players.spawned && MultiplayerSession::Pointer(Read(MultiplayerSession::PlayerPhysics+4)) && Read(MultiplayerSession::PlayerWorks)==players.first_work && Read(MultiplayerSession::PlayerWorks+4)==players.other_work && Read(players.other_work,1)!=0 && !(Read(0x8073f3d0,2)|Read(0x8073f3d2,2));}
  void Tick() {
    if(Read(MultiplayerSession::Main)!=1)return;
    if(!hooks) {
      // Task simulation runs once, the original display-only traversal runs twice.
      HLE::PatchHostFunction(system,MultiplayerSession::Text+0x10f51c,BeginDisplay,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,MultiplayerSession::Text+0x10f564,BeginLoop,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,MultiplayerSession::Text+0x1af1c4,Player,HLE::HookType::Start);
      HLE::PatchHostFunction(system,MultiplayerSession::Text+0x79bd0,Input,HLE::HookType::Start);
      HLE::PatchHostFunction(system,MultiplayerSession::Text+0x22398,CameraDisplay,HLE::HookType::Start);
      HLE::PatchHostFunction(system,MultiplayerSession::Text+0x271c4,CameraDisplay,HLE::HookType::Start);
      HLE::PatchHostFunction(system,0x800373e0,ProjectionMatrix,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,0x80037494,ProjectionVector,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,0x80047e78,CameraPosition,HLE::HookType::Start);
      HLE::PatchHostFunction(system,0x80047f00,CameraYaw,HLE::HookType::Start);
      HLE::PatchHostFunction(system,0x80047e98,CameraPitch,HLE::HookType::Start);
      HLE::PatchHostFunction(system,0x80047f68,CameraRoll,HLE::HookType::Start);
      HLE::PatchHostFunction(system,0x80037740,SetViewport,HLE::HookType::Start);
      HLE::PatchHostFunction(system,0x800378a0,SetScissor,HLE::HookType::Start);
      hooks=true;
    }
    if(!Ready())return;
    // Emerald Coast's refraction copies the entire EFB and cannot sample an
    // individual split viewport. Keep ordinary water geometry, omit that effect.
    if(water_generation!=players.generation){
      if(water_effect)HLE::UnpatchRange(system,water_effect,water_effect+4);water_effect=0;water_generation=players.generation;
      if(Read(0x8074a7c6,2)==1)for(std::uint32_t base=0x80860000;base<0x81540000;base+=32){
        if(Read(base)!=16||Read(base+12)!=21||Read(base+16)!=base+0x4c||Read(base+0x4c+2*8+4)!=129532||Read(base+0x4c+6*8+4)!=2479264)continue;
        water_effect=(Read(base+0x4c+2*8)&~1u)+0x1ab30;HLE::PatchHostFunction(system,water_effect,WaterEffect,HLE::HookType::Replace);
        std::fprintf(stderr,"[multiplayer] water refraction disabled at %08x\n",water_effect);break;
      }
    }
    if(allocation_owner!=players.first_work||allocation_generation!=players.generation) {
      if(!frames.empty())throw std::runtime_error("Stage changed during a split render pass.");
      if(stub)HLE::UnpatchRange(system,stub,stub+8);
      stub=GuestCall(system,MultiplayerSession::Text+0x10ef60,{8,0,0});
      if(!MultiplayerSession::Pointer(stub))throw std::runtime_error("Could not allocate split renderer continuation.");
      Write(stub,0x4e800020);Write(stub+4,0x60000000);
      HLE::PatchHostFunction(system,stub,Continue,HLE::HookType::Replace);allocation_owner=players.first_work;allocation_generation=players.generation;
      yaw={3.14159265f,3.14159265f};pitch={.48f,.48f};
    }
    for(unsigned i=0;i<2;++i){const auto stick=[&](unsigned o){int n=Read(0x8074c8e0+i*12+o,1);return n>127?n-256:n;};int x=stick(4),y=stick(5);
      if(std::abs(x)>24)yaw[i]-=x*.0004f;
      if(std::abs(y)>24)pitch[i]=std::clamp(pitch[i]+y*.0002f,.18f,1.1f);
    }
  }
  void Camera(unsigned view) {
    const auto camera=Read(0x806b44b0),work=Read(MultiplayerSession::PlayerWorks+view*4);
    if(!MultiplayerSession::Pointer(camera)||!MultiplayerSession::Pointer(work))throw std::runtime_error("Multiplayer camera is unavailable.");
    const float x=Float(Read(work+32)),y=Float(Read(work+36)),z=Float(Read(work+40));
    if(!std::isfinite(x)||!std::isfinite(y)||!std::isfinite(z))throw std::runtime_error("Multiplayer player position is invalid.");
    const float distance=75;Put(camera+32,x+std::sin(yaw[view])*distance);Put(camera+36,y+8+std::tan(pitch[view])*distance);Put(camera+40,z+std::cos(yaw[view])*distance);
    Write(camera+20,std::uint32_t(std::int32_t(-pitch[view]*65536/(2*3.14159265f))));Write(camera+24,std::uint32_t(std::int32_t(yaw[view]*65536/(2*3.14159265f)))&65535);Write(camera+28,0);
  }
  void CallCamera(unsigned view) {
    Camera(view);CallGuest(MultiplayerSession::Text+0x22398,frames.back().camera);
  }
  void CallGuest(std::uint32_t address,std::uint32_t argument=0) {
    auto& ppc=system.GetPPCState();auto& f=frames.back();
    f.call=std::make_unique<PowerPC::PowerPCState>(ppc);
    ppc.gpr[3]=argument;ppc.spr[SPR_LR]=stub;ppc.npc=address;
  }
  void CameraReturned() {
    auto& ppc=system.GetPPCState();const auto& saved=*frames.back().call;
    std::copy(std::begin(saved.gpr),std::end(saved.gpr),std::begin(ppc.gpr));
    std::copy(std::begin(saved.ps),std::end(saved.ps),std::begin(ppc.ps));
    ppc.spr[SPR_CTR]=saved.spr[SPR_CTR];ppc.spr[SPR_LR]=saved.spr[SPR_LR];
    ppc.cr=saved.cr;ppc.fpscr.Hex=saved.fpscr.Hex;
    ppc.xer_ca=saved.xer_ca;ppc.xer_so_ov=saved.xer_so_ov;ppc.xer_stringctrl=saved.xer_stringctrl;
    frames.back().call.reset();
  }
  void OriginalEntry(std::uint32_t entry) {
    // The two verified functions begin with stwu r1,-frame(r1).
    // Execute that displaced instruction, then resume the original guest code.
    const auto instruction=Read(entry);
    if((instruction&0xffff0000u)!=0x94210000u)throw std::runtime_error("Unsupported task-loop entry instruction.");
    auto& ppc=system.GetPPCState();const auto old=ppc.gpr[1];ppc.gpr[1]+=std::int16_t(instruction&65535);
    Write(ppc.gpr[1],old);ppc.npc=entry+4;
  }
  void Viewport(int view) {
    auto& fifo=system.GetGPFifo();
    const auto number=[&](float n){std::uint32_t v;std::memcpy(&v,&n,4);fifo.Write32(v);};
    const float height=view<0?480.f:240.f,top=view==1?240.f:0.f;
    fifo.Write8(0x10);fifo.Write32((5u<<16)|0x101a);
    number(320);number(-height/2);number(16777215);number(662);number(342+top+height/2);number(16777215);
    const unsigned t=342+unsigned(top),b=t+unsigned(height)-1;
    fifo.Write8(0x61);fifo.Write32((0x20u<<24)|(342u<<12)|t);
    fifo.Write8(0x61);fifo.Write32((0x21u<<24)|(981u<<12)|b);
    const auto cache=Read(system.GetPPCState().gpr[2]-0x79c0);
    if(MultiplayerSession::Pointer(cache))EmitProjection(cache,view>=0);
  }
  void EmitProjection(std::uint32_t cache,bool split) {
    auto& fifo=system.GetGPFifo();const auto type=Read(cache+0x420);
    fifo.Write8(0x10);fifo.Write32((6u<<16)|0x1020);
    for(unsigned i=0;i<6;++i){auto value=Read(cache+0x424+i*4);
      if(split&&type==0&&i==0){float x=Float(value)*.5f;std::memcpy(&value,&x,4);}fifo.Write32(value);}
    fifo.Write32(type);Write(cache+2,1,2);
  }
  void SetProjection(bool vector) {
    auto& ppc=system.GetPPCState();const auto input=ppc.gpr[3],cache=Read(ppc.gpr[2]-0x79c0);
    if(!MultiplayerSession::Pointer(cache)||!system.GetMemory().GetPointerForRange(input,vector?28:48))throw std::runtime_error("Unmapped projection arguments.");
    const auto type=vector?std::uint32_t(Float(Read(input))):ppc.gpr[4];Write(cache+0x420,type);
    const std::array<unsigned,6> indices{0,type==1?3u:2u,5,type==1?7u:6u,10,11};
    for(unsigned i=0;i<6;++i)Write(cache+0x424+i*4,Read(input+(vector?i+1:indices[i])*4));
    EmitProjection(cache,!frames.empty());ppc.npc=ppc.spr[SPR_LR];
  }
  void BeginPass(std::uint32_t entry) {
    auto& ppc=system.GetPPCState();
    if(!frames.empty()||!Ready()||!stub||allocation_owner!=players.first_work||allocation_generation!=players.generation){OriginalEntry(entry);return;}
    const auto camera=Read(0x806b44b0);Frame f{ppc.spr[SPR_LR],ppc.gpr[1],camera,entry,Read(0x806b47f0),{}};
    for(unsigned i=0;i<6;++i)f.saved[i]=Read(camera+20+i*4);
    f.gx=Read(ppc.gpr[2]-0x79c0);if(!MultiplayerSession::Pointer(f.gx))throw std::runtime_error("GX cache is unavailable.");
    for(unsigned i=0;i<3;++i)f.pipeline[i]=Read(f.gx+0x1d0+i*4);
    for(unsigned i=0;i<6;++i)f.viewport[i]=Read(f.gx+0x43c+i*4);
    f.render=Read(ppc.gpr[13]-0x78d8);if(MultiplayerSession::Pointer(f.render))f.flags=Read(f.render+4);
    frames.push_back(std::move(f));CallCamera(0);
    if(!reported){std::fprintf(stderr,"[multiplayer] split renderer active\n");reported=true;}
  }
  void ContinuePass() {
    auto& ppc=system.GetPPCState();
    if(frames.empty()||frames.back().sp!=ppc.gpr[1])throw std::runtime_error("Invalid split render continuation.");
    auto& f=frames.back();
    if(f.phase==0){CameraReturned();f.phase=1;Viewport(0);ppc.spr[SPR_LR]=stub;OriginalEntry(f.entry);}
    // Late/transparent draw calls store view matrices. Flush and clear their
    // queue while its matching viewport is still active, before the next view.
    else if(f.phase==1){f.phase=4;CallGuest(MultiplayerSession::Text+0x2095a0);}
    else if(f.phase==4){CameraReturned();f.phase=5;CallGuest(MultiplayerSession::Text+0x20a588);}
    else if(f.phase==5){CameraReturned();f.phase=2;f.view=1;CallCamera(1);}
    else if(f.phase==2){CameraReturned();f.phase=3;if(MultiplayerSession::Pointer(f.render))Write(f.render+4,f.flags);for(unsigned i=0;i<3;++i){Write(f.gx+0x1d0+i*4,f.pipeline[i]);system.GetGPFifo().Write8(0x61);system.GetGPFifo().Write32(f.pipeline[i]);}Viewport(1);ppc.spr[SPR_LR]=stub;OriginalEntry(MultiplayerSession::Text+0x10f51c);}
    else if(f.phase==3){f.phase=6;CallGuest(MultiplayerSession::Text+0x2095a0);}
    else if(f.phase==6){CameraReturned();f.phase=7;CallGuest(MultiplayerSession::Text+0x20a588);}
    else {CameraReturned();for(unsigned i=0;i<6;++i){Write(f.camera+20+i*4,f.saved[i]);Write(f.gx+0x43c+i*4,f.viewport[i]);}Write(0x806b47f0,f.camera_mode);Viewport(-1);ppc.spr[SPR_LR]=f.lr;ppc.npc=f.lr;frames.pop_back();}
  }
  static void BeginDisplay(const Core::CPUThreadGuard&) {if(active)try{active->BeginPass(MultiplayerSession::Text+0x10f51c);}catch(const std::exception& e){active->Fail(e.what());}}
  static void BeginLoop(const Core::CPUThreadGuard&) {if(active)try{++active->players.simulation_epoch;active->BeginPass(MultiplayerSession::Text+0x10f564);}catch(const std::exception& e){active->Fail(e.what());}}
  static void Continue(const Core::CPUThreadGuard&) {if(active)try{active->ContinuePass();}catch(const std::exception& e){active->Fail(e.what());}}
  static void Input(const Core::CPUThreadGuard&) {if(active&&active->Ready())try{
    // Retail stages often enable only pad 0. Follow that same gameplay gate
    // for pad 1, including its pause/event locks, before the input copy runs.
    active->Write(0x80566be1,active->Read(0x80566be0,1),1);
    active->input_yaw=active->Read(active->Read(0x806b44b0)+24);++active->input_epoch;
  }catch(const std::exception& e){active->Fail(e.what());}}
  static void Player(const Core::CPUThreadGuard&) {if(active && active->Ready())try{
    const auto task=active->system.GetPPCState().gpr[3],work=active->Read(task+32);const auto id=active->Read(work+8,1);
    if(id<2){active->Camera(id);if(active->input_adjusted[id]!=active->input_epoch){
      const auto angle=0x8074cad0+id*8,desired=active->Read(active->Read(0x806b44b0)+24);
      active->Write(angle,(active->Read(angle)+active->input_yaw-desired)&65535);active->input_adjusted[id]=active->input_epoch;
    }}
  }catch(const std::exception& e){active->Fail(e.what());}}
  static void CameraDisplay(const Core::CPUThreadGuard&) {if(active&&active->Ready()&&!active->frames.empty())try{active->Camera(active->frames.back().view);active->Write(0x806b47f0,0);}catch(const std::exception& e){active->Fail(e.what());}}
  static void CameraPosition(const Core::CPUThreadGuard&) {if(active&&active->Ready()&&!active->frames.empty())try{active->Camera(active->frames.back().view);auto& ppc=active->system.GetPPCState();const auto camera=active->Read(0x806b44b0);for(unsigned i=0;i<3;++i)ppc.ps[1+i].SetPS0(double(Float(active->Read(camera+32+i*4))));}catch(const std::exception& e){active->Fail(e.what());}}
  static void CameraAngle(unsigned offset){if(active&&active->Ready()&&!active->frames.empty())try{active->Camera(active->frames.back().view);active->system.GetPPCState().gpr[3]=active->Read(active->Read(0x806b44b0)+offset)&65535;}catch(const std::exception& e){active->Fail(e.what());}}
  static void CameraYaw(const Core::CPUThreadGuard&){CameraAngle(24);}
  static void CameraPitch(const Core::CPUThreadGuard&){CameraAngle(20);}
  static void CameraRoll(const Core::CPUThreadGuard&){CameraAngle(28);}
  static void SetViewport(const Core::CPUThreadGuard&){if(active&&!active->frames.empty()){auto& f=active->frames.back();auto& ppc=active->system.GetPPCState();if(ppc.ps[3].PS0AsDouble()>600&&ppc.ps[4].PS0AsDouble()>400){ppc.ps[2].SetPS0(ppc.ps[2].PS0AsDouble()*.5+(f.view?240:0));ppc.ps[4].SetPS0(ppc.ps[4].PS0AsDouble()*.5);}}}
  static void SetScissor(const Core::CPUThreadGuard&){if(active&&!active->frames.empty()){auto& f=active->frames.back();auto& ppc=active->system.GetPPCState();if(ppc.gpr[5]>600&&ppc.gpr[6]>400){ppc.gpr[4]=ppc.gpr[4]/2+(f.view?240:0);ppc.gpr[6]/=2;}}}
  static void WaterEffect(const Core::CPUThreadGuard&){if(active)try{if(active->Ready())active->system.GetPPCState().npc=active->system.GetPPCState().spr[SPR_LR];else active->OriginalEntry(active->water_effect);}catch(const std::exception& e){active->Fail(e.what());}}
  static void ProjectionMatrix(const Core::CPUThreadGuard&) {if(active)try{active->SetProjection(false);}catch(const std::exception& e){active->Fail(e.what());}}
  static void ProjectionVector(const Core::CPUThreadGuard&) {if(active)try{active->SetProjection(true);}catch(const std::exception& e){active->Fail(e.what());}}
  void Fail(const char* text){if(failure)failure(text);}
};
}
