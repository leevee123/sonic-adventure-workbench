// SPDX-License-Identifier: GPL-3.0-or-later
#include "sonic_multiplayer.hpp"
#include <iostream>
#include <map>
using namespace moderngekko::sonic;
void require(bool value,const char* message){if(!value)throw std::runtime_error(message);}
int main(){try{
  std::map<std::uint32_t,std::uint32_t> memory;
  const std::uint32_t first=0x807e1000,firstTask=0x807e2000,partner=0x807e3000,partnerTask=0x807e4000;
  auto read=[&](auto a,auto){return memory[a];};auto write=[&](auto a,auto v,auto){memory[a]=v;};unsigned allocations=0;
  auto call=[&](std::uint32_t a,std::array<std::uint32_t,3> args){require(a==MultiplayerSession::Text+0x10fd60,"Unexpected allocator");require(args[1]==1,"Wrong task priority");++allocations;return partnerTask;};
  auto setup=[&](){memory.clear();memory[MultiplayerSession::Main]=1;memory[MultiplayerSession::PlayerWorks]=first;memory[MultiplayerSession::PlayerTasks]=firstTask;memory[MultiplayerSession::PlayerPhysics]=0x807e5000;memory[first]=1;memory[0x8074a7c4]=1;memory[partnerTask+32]=partner;memory[first+32]=0x3f800000;};
  setup();MultiplayerSession m;for(int i=0;i<14;++i)m.Tick(read,write,call,true);require(!m.spawned&&allocations==0,"Spawned before player initialization settled");
  m.Tick(read,write,call,true);require(m.spawned&&allocations==1&&memory[partner+8]==1&&memory[partner+9]==0,"Second retail player allocation failed");require(memory[partner+32]==0x41500000,"Partner spawn must avoid overlap");
  m.Tick(read,write,call,true);require(allocations==1,"Duplicate player allocation");auto generation=m.generation;memory[0x8074a7c4]=2;m.Tick(read,write,call,true);require(!m.spawned&&m.generation>generation,"Stage change did not discard stale task state");
  setup();MultiplayerSession companion;allocations=0;memory[MultiplayerSession::PlayerTasks+4]=partnerTask;memory[partner+8]=1;memory[partner+9]=2;
  for(int i=0;i<15;++i)companion.Tick(read,write,call,true);require(allocations==0&&memory[partnerTask+16]==MultiplayerSession::Text+0x10f9f0,"AI companion overwritten before normal teardown");
  for(int i=0;i<240;++i)companion.Tick(read,write,call,true);require(!companion.spawned&&companion.companion_wait==0,"Loading or pause refreshes incorrectly counted as cleanup attempts");
  ++companion.simulation_epoch;companion.Tick(read,write,call,true);require(companion.companion_wait==1,"Simulation cleanup attempt not counted");
  memory[MultiplayerSession::PlayerTasks+4]=0;companion.Tick(read,write,call,true);require(companion.spawned&&allocations==1,"Player slot not used after companion deregistration");
  setup();allocations=0;MultiplayerSession boss;memory[0x8074a7c4]=15;for(int i=0;i<20;++i)boss.Tick(read,write,call,true);require(!boss.spawned&&allocations==0,"Boss or hub unexpectedly changed");
  setup();MultiplayerSession character;memory[first+9]=2;for(int i=0;i<20;++i)character.Tick(read,write,call,true);require(!character.spawned&&allocations==0,"Other character campaign unexpectedly changed");
  setup();MultiplayerSession invalid;memory[MultiplayerSession::PlayerTasks+4]=partnerTask;memory[partner+8]=1;memory[partner+9]=3;bool rejected=false;try{for(int i=0;i<15;++i)invalid.Tick(read,write,call,true);}catch(const std::runtime_error&){rejected=true;}require(rejected&&allocations==0,"Unsupported companion was overwritten");
  setup();MultiplayerSession missing;memory[MultiplayerSession::PlayerPhysics]=0;for(int i=0;i<20;++i)missing.Tick(read,write,call,true);require(!missing.spawned&&allocations==0,"Uninitialized player physics accepted");
  std::cout<<"PASS initialization, distinct spawn, duplicate suppression, stage lifetime, AI teardown, hub/boss preservation, character guard, unsupported companion and missing physics\n";return 0;
}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
