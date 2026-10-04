// SPDX-License-Identifier: GPL-3.0-or-later
// Shared-world local multiplayer for the pinned GXSE8P revision 0 runtime.
#pragma once
#include <array>
#include <cstdint>
#include <cmath>
#include <cstring>
#include <stdexcept>
namespace moderngekko::sonic {
struct MultiplayerSession {
  static constexpr std::uint32_t Main=0x802cc040,Text=0x802cc12c;
  static constexpr std::uint32_t PlayerTasks=0x807a82a0,PlayerWorks=0x807a8280,PlayerPhysics=0x807a8240;
  std::uint32_t other_task=0,other_work=0,first_work=0,first_task=0,stage=0,generation=0;
  unsigned wait=0,companion_wait=0,simulation_epoch=0,companion_epoch=0;
  bool spawned=false;
  void Reset(){if(first_work||spawned)++generation;first_work=first_task=other_task=other_work=0;spawned=false;wait=companion_wait=0;companion_epoch=simulation_epoch;}
  static bool Pointer(std::uint32_t p){return p>=0x80004000 && p<0x817fff00 && !(p&3);}
  template<class Read,class Write,class Call> void Tick(Read read,Write write,Call call,bool custom_ready) {
    if(read(Main,4)!=1){Reset();return;}if(!custom_ready)return;
    const auto p=read(PlayerWorks,4),tp=read(PlayerTasks,4);
    if(!Pointer(p)||!Pointer(tp)||!Pointer(read(PlayerPhysics,4))||read(p+9,1)!=0||read(p,1)==0){Reset();return;}
    const auto current_stage=read(0x8074a7c4,4);
    // Initial co-op covers Sonic action stages. Hubs, cutscenes and bosses
    // retain their original single-player tasks and camera.
    if((current_stage&65535)<1||(current_stage&65535)>10){Reset();return;}
    if(spawned && p==first_work && tp==first_task && (current_stage&65535)==(stage&65535) && current_stage!=stage){
      // An act transition keeps the original player tasks alive. Destroying a
      // second Sonic here also destroys shared character model resources.
      stage=current_stage;
      for(unsigned o=20;o<=40;o+=4)write(other_work+o,read(p+o,4),4);
      auto bits=read(p+32,4);float x;std::memcpy(&x,&bits,4);x+=12;std::memcpy(&bits,&x,4);write(other_work+32,bits,4);
      write(other_work,1,1);write(other_work+4,0,2);write(other_work+2,1,1);
      const auto physics=read(PlayerPhysics+4,4);if(Pointer(physics))for(unsigned o=0x38;o<=0x40;o+=4)write(physics+o,0,4);
    }
    if(p!=first_work||tp!=first_task||current_stage!=stage){Reset();first_work=p;first_task=tp;stage=current_stage;++generation;}
    if(spawned)return;
    if(++wait<15)return;
    const auto companion=read(PlayerTasks+4,4);
    if(Pointer(companion)){
      const auto work=read(companion+0x20,4);
      if(!Pointer(work)||companion==tp||read(work+8,1)!=1|| (read(work+9,1)!=0&&read(work+9,1)!=2))throw std::runtime_error("This stage's second character cannot be replaced for co-op.");
      // FreeTask marks the original task for its ordinary destructor on the
      // next simulation step. Wait for deregistration before using slot 1.
      write(companion+0x10,Text+0x10f9f0,4);
      // VI callbacks continue while the game loads or displays a pause menu.
      // Only task simulation gives the marked task a chance to run cleanup.
      if(simulation_epoch!=companion_epoch){companion_epoch=simulation_epoch;
        if(++companion_wait>120)throw std::runtime_error("The story companion did not release player slot 2.");}
      return;
    }
    // The retail task allocator owns the task and all work buffers. Its normal
    // stage teardown also frees the new player; no fabricated RAM allocation.
    other_task=call(Text+0x10fd60,{7,1,Text+0x1af1c4});
    if(!Pointer(other_task))throw std::runtime_error("Could not allocate the second Sonic task.");
    other_work=read(other_task+0x20,4);
    if(!Pointer(other_work))throw std::runtime_error("Second player has invalid work data.");
    write(other_work+8,1,1);write(other_work+9,0,1);write(other_work+2,1,1);
    for(unsigned o=20;o<=40;o+=4)write(other_work+o,read(p+o,4),4);
    auto bits=read(p+32,4);float x;std::memcpy(&x,&bits,4);x+=12;std::memcpy(&bits,&x,4);write(other_work+32,bits,4);
    spawned=true;
  }
};
}
