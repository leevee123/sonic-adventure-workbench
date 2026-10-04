// SPDX-License-Identifier: GPL-3.0-or-later
// Compatibility fixes for the pinned GXSE8P revision's two Sonic tasks.
#pragma once
#include "sonic_split_renderer.hpp"
namespace moderngekko::sonic {
class CoopGameplay {
  inline static CoopGameplay* active=nullptr;
  Core::System& system;MultiplayerSession& players;SplitRenderer& renderer;
  bool hooks=false,custom=false,dead=false;
  std::uint32_t stub=0,scratch=0,owner=0,owner_generation=0,foot_stage=~0u,foot_player=0,death_epoch=0;
  struct SetCall {PowerPC::PowerPCState saved;std::uint32_t first,camera;std::array<std::uint32_t,6> camera_data;unsigned phase=0;explicit SetCall(const PowerPC::PowerPCState& p):saved(p){}};
  std::unique_ptr<SetCall> set_call;
  static constexpr auto Text=MultiplayerSession::Text;
  std::uint32_t Read(std::uint32_t a,unsigned n=4)const{return renderer.Read(a,n);}
  void Write(std::uint32_t a,std::uint32_t v,unsigned n=4){renderer.Write(a,v,n);}
  bool Ready()const{return renderer.Ready();}
  void Return(unsigned value=0){auto& p=system.GetPPCState();p.gpr[3]=value;p.npc=p.spr[SPR_LR];}
  void Sound(unsigned tone){GuestCall(system,Text+0x10a480,{tone,0,0});}
  bool Near(std::uint32_t position,float radius)const{
    if(!std::isfinite(radius)||radius<0)return false;
    const float x=SplitRenderer::Float(Read(position)),y=SplitRenderer::Float(Read(position+4)),z=SplitRenderer::Float(Read(position+8));
    for(unsigned i=0;i<2;++i){const auto w=Read(MultiplayerSession::PlayerWorks+i*4);if(!MultiplayerSession::Pointer(w))continue;
      const float px=SplitRenderer::Float(Read(w+32)),py=SplitRenderer::Float(Read(w+36)),pz=SplitRenderer::Float(Read(w+40));
      const auto within=[&](float a,float b,float c){const float dx=x-a,dy=y-b,dz=z-c;return dx*dx+dy*dy+dz*dz<=radius;};
      if(within(px,py,pz)||within(px+std::sin(renderer.yaw[i])*75,py+8+std::tan(renderer.pitch[i])*75,pz+std::cos(renderer.yaw[i])*75))return true;
    }return false;
  }
  void Range(std::uint32_t offset,bool explicit_radius,bool minimum=false){
    auto& p=system.GetPPCState();const auto task=p.gpr[3],work=Read(task+32),condition=Read(task+28);
    if(Ready()&&MultiplayerSession::Pointer(work)){
      float radius=explicit_radius?float(p.ps[1].PS0AsDouble()):condition?SplitRenderer::Float(Read(condition+12)):SplitRenderer::Float(Read(0x80529298));
      if(minimum)radius=std::max(radius,SplitRenderer::Float(Read(0x80529298)));
      if((condition&&(Read(condition+2,2)&8))||radius==0||Near(work+32,radius)){Return();return;}
    }renderer.OriginalEntry(Text+offset);
  }
  void StartSet(){
    if(!Ready()||!stub||set_call){renderer.OriginalEntry(Text+0x105cdc);return;}
    auto& p=system.GetPPCState();set_call=std::make_unique<SetCall>(p);auto& s=*set_call;s.first=Read(MultiplayerSession::PlayerWorks);s.camera=Read(0x806b44b0);
    for(unsigned i=0;i<6;++i)s.camera_data[i]=Read(s.camera+20+i*4);
    p.spr[SPR_LR]=stub;renderer.OriginalEntry(Text+0x105d48);
  }
  void FinishSet(){
    if(!set_call)throw std::runtime_error("Invalid co-op SET continuation.");
    auto& s=*set_call;auto& p=system.GetPPCState();
    if(s.phase++==0&&Ready()){
      // Only repeat the original allocation scan; object simulation still runs
      // once. Loaded SET entries suppress duplicate allocations themselves.
      Write(MultiplayerSession::PlayerWorks,players.other_work);renderer.Camera(1);
      p.spr[SPR_LR]=stub;renderer.OriginalEntry(Text+0x105d48);return;
    }
    Write(MultiplayerSession::PlayerWorks,s.first);for(unsigned i=0;i<6;++i)Write(s.camera+20+i*4,s.camera_data[i]);Write(0x807aa614,1);
    const auto saved=s.saved;std::copy(std::begin(saved.gpr),std::end(saved.gpr),std::begin(p.gpr));std::copy(std::begin(saved.ps),std::end(saved.ps),std::begin(p.ps));
    p.spr[SPR_LR]=saved.spr[SPR_LR];p.spr[SPR_CTR]=saved.spr[SPR_CTR];p.cr=saved.cr;p.fpscr.Hex=saved.fpscr.Hex;
    p.xer_ca=saved.xer_ca;p.xer_so_ov=saved.xer_so_ov;p.xer_stringctrl=saved.xer_stringctrl;p.npc=saved.spr[SPR_LR];set_call.reset();
  }
  void Ring(){
    if(!Ready()||dead)return;const auto task=system.GetPPCState().gpr[3],w=Read(task+32),c=Read(w+56);
    if(!MultiplayerSession::Pointer(w)||Read(w,1)!=1||!MultiplayerSession::Pointer(c)||!(Read(c+4,2)&1))return;
    const auto hit=Read(c+0xa4);if(!MultiplayerSession::Pointer(hit))return;const auto hit_work=Read(hit+0x9c);
    // Retail rings accept slot 1 only when it is Tails. Award a Sonic in that
    // slot through the same shared ring counter and original sound queue.
    if(hit_work==players.other_task){GuestCall(system,Text+0xf2738,{1,0,0});Sound(7);std::fprintf(stderr,"[multiplayer] player two collected ring\n");}
  }
  void Death(){
    if(!Ready()||custom||dead||!scratch)return;const auto w=players.other_work;
    const auto list=Read(0x80592648+Read(0x8074a7c6,2)*4);if(!MultiplayerSession::Pointer(list))return;
    const auto zones=Read(list+Read(0x8074a7c4,2)*4);if(!MultiplayerSession::Pointer(zones))return;
    for(unsigned i=0;i<128;++i){const auto entry=zones+i*8,model=Read(entry+4);if(!model)break;if(!(Read(entry)&1)||!MultiplayerSession::Pointer(model))continue;
      for(unsigned n=0;n<0x50;n+=4)Write(scratch+n,0);for(unsigned n=0;n<12;n+=4)Write(scratch+n,Read(w+32+n));
      GuestCall(system,Text+0x397e8,{scratch,model,0});
      if(Read(scratch+12)==0&&Read(scratch+44)&&std::abs(SplitRenderer::Float(Read(w+36))-SplitRenderer::Float(Read(scratch+60)))<=30){Kill();break;}
    }
  }
  void Kill(){
    if(dead||!Ready())return;dead=true;death_epoch=players.simulation_epoch;const auto w=players.other_work,pw=Read(MultiplayerSession::PlayerPhysics+4);
    Write(w+4,Read(w+4,2)|0x1000,2);Write(w+1,0x32,1);Write(pw+6,Read(pw+6,2)|0x4000,2);Sound(0x5df);
    std::fprintf(stderr,"[multiplayer] player two pit death\n");
  }
public:
  CoopGameplay(Core::System& s,MultiplayerSession& p,SplitRenderer& r,bool authored):system(s),players(p),renderer(r),custom(authored){active=this;}
  ~CoopGameplay(){if(active==this)active=nullptr;}
  bool InCall()const{return bool(set_call);}
  void Tick(){
    if(Read(MultiplayerSession::Main)!=1)return;
    if(!hooks){
      HLE::PatchHostFunction(system,Text+0x105cdc,Set,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0x1049d4,RangeSleep,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0x104cc0,RangeRadius,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0x104e98,RangeMinimum,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0x105094,RangeDefault,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0xeb7bc,RingTask,HLE::HookType::Start);
      HLE::PatchHostFunction(system,Text+0xea654,RingTask,HLE::HookType::Start);
      HLE::PatchHostFunction(system,Text+0xcbd14,Pits,HLE::HookType::Start);
      HLE::PatchHostFunction(system,Text+0xcb99c,Fall,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0xcbc80,DamageDeath,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0x111278,ReleaseModel,HLE::HookType::Replace);
      HLE::PatchHostFunction(system,Text+0xcddb0,ReleaseMorph,HLE::HookType::Replace);hooks=true;
    }
    if(!Ready()||renderer.InPass()||InCall())return;
    if(owner!=players.first_work||owner_generation!=players.generation){if(stub)HLE::UnpatchRange(system,stub,stub+4);stub=GuestCall(system,Text+0x10ef60,{0x60,0,0});if(!MultiplayerSession::Pointer(stub))throw std::runtime_error("Could not allocate co-op continuation.");scratch=stub+16;Write(stub,0x4e800020);HLE::PatchHostFunction(system,stub,SetReturned,HLE::HookType::Replace);owner=players.first_work;owner_generation=players.generation;dead=false;foot_stage=~0u;}
    if(dead&&players.simulation_epoch-death_epoch>=120){
      const auto lives=Read(0x8074c7ad,1);if(!lives){GuestCall(system,Text+0x714ec,{2,0,0});dead=false;return;}
      Write(0x8074c7ad,lives-1,1);Write(0x8074c7a8,0,2);const auto w=players.other_work,pw=Read(MultiplayerSession::PlayerPhysics+4);
      const auto checkpoint=Read(0x807406a4);GuestCall(system,Text+0x6eb6c,{w,0,0});Write(0x807406a4,checkpoint);
      Write(w,1,1);Write(w+1,0,1);Write(w+2,1,1);Write(w+4,0,2);Write(pw+6,Read(pw+6,2)&~0x4000u,2);for(unsigned o=0x38;o<=0x40;o+=4)Write(pw+o,0);
      dead=false;std::fprintf(stderr,"[multiplayer] player two respawn; lives=%u\n",lives-1);
    }
    if(!custom&&renderer.BeachText()&&(foot_stage!=players.stage||foot_player!=players.other_task)){
      const auto task=GuestCall(system,Text+0x10fd60,{2,3,renderer.BeachText()+0x28d4});if(!MultiplayerSession::Pointer(task))throw std::runtime_error("Could not allocate player two footprints.");
      const auto w=Read(task+32);renderer.Put(w+44,1.f);foot_stage=players.stage;foot_player=players.other_task;
      std::fprintf(stderr,"[multiplayer] player two footprints task=%08x act=%u\n",task,players.stage>>16);
    }
  }
  static void Set(const Core::CPUThreadGuard&){if(active)try{active->StartSet();}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void SetReturned(const Core::CPUThreadGuard&){if(active)try{active->FinishSet();}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void RangeSleep(const Core::CPUThreadGuard&){if(active)active->Range(0x1049d4,true);}
  static void RangeRadius(const Core::CPUThreadGuard&){if(active)active->Range(0x104cc0,true);}
  static void RangeMinimum(const Core::CPUThreadGuard&){if(active)active->Range(0x104e98,false,true);}
  static void RangeDefault(const Core::CPUThreadGuard&){if(active)active->Range(0x105094,false);}
  static void RingTask(const Core::CPUThreadGuard&){if(active)try{active->Ring();}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void Pits(const Core::CPUThreadGuard&){if(active)try{active->Death();}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void Fall(const Core::CPUThreadGuard&){if(active)try{if(active->Ready()&&active->system.GetPPCState().gpr[3]==1){active->Kill();active->Return();}else active->renderer.OriginalEntry(Text+0xcb99c);}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void DamageDeath(const Core::CPUThreadGuard&){if(active)try{if(active->Ready()&&active->system.GetPPCState().gpr[3]==1){active->Kill();active->Return();}else active->renderer.OriginalEntry(Text+0xcbc80);}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void ReleaseModel(const Core::CPUThreadGuard&){if(active)try{const auto id=active->system.GetPPCState().gpr[3];bool used=false;for(unsigned i=0;i<2;++i){const auto w=active->Read(MultiplayerSession::PlayerWorks+i*4);used|=MultiplayerSession::Pointer(w)&&active->Read(w+9,1)==0;}
    if((id==0||id==8)&&used)active->Return();else active->renderer.OriginalEntry(Text+0x111278);}catch(const std::exception& e){active->renderer.Fail(e.what());}}
  static void ReleaseMorph(const Core::CPUThreadGuard&){if(active)try{auto& p=active->system.GetPPCState();const auto w=p.gpr[3],pw=p.gpr[5];bool used=false;for(unsigned i=0;i<2;++i){const auto other=active->Read(MultiplayerSession::PlayerWorks+i*4);used|=MultiplayerSession::Pointer(other)&&other!=w&&active->Read(other+9,1)==0;}
    if(MultiplayerSession::Pointer(pw)&&active->Read(pw+0x122,2)==2&&used)active->Return();else active->renderer.OriginalEntry(Text+0xcddb0);}catch(const std::exception& e){active->renderer.Fail(e.what());}}
};
}
