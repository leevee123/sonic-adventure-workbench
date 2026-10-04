#include "../native-port/ModernGekko/src/runtime/sonic_enhancements.hpp"
#include <cassert>
#include <map>
#include <iostream>
int main() {
  moderngekko::sonic::Enhancements state;
  std::map<unsigned,unsigned> mem;
  const unsigned work=0x807fd6a0;
  mem[0x80845480]=work;mem[work+4]=0x0081;
  unsigned writes=0;
  auto read=[&](unsigned address,unsigned){return mem[address];};
  auto write=[&](unsigned address,unsigned value,unsigned){mem[address]=value;++writes;};
  assert(!state.LightDash(read,write));
  mem[0x8074c8e0]=0x800;
  assert(state.LightDash(read,write)&&mem[work+4]==0x281&&writes==1);
  assert(!state.LightDash(read,write)&&writes==1);
  auto release=[&]{mem[0x8074c8e0]=0;state.LightDash(read,write);mem[0x8074c8e0]=0x800;};
  for(unsigned flags:{0x0004,0x0800,0x1000,0x2000,0x4000}) {
    release();mem[work+4]=flags;assert(!state.LightDash(read,write)&&mem[work+4]==flags);
  }
  mem[work+4]=1;
  for(unsigned character=1;character<=6;++character) {
    release();mem[0x8079bd19]=character;assert(!state.LightDash(read,write));
  }
  mem[0x8079bd19]=0;
  for(unsigned pointer:{0u,0x80000001u,0x817ffffcu,0x90000000u}) {
    release();mem[0x80845480]=pointer;assert(!state.LightDash(read,write));
  }
  assert(writes==1);
  std::cout<<"PASS press edge, held button, flag preservation, script locks, other characters and pointer bounds\n";
}
