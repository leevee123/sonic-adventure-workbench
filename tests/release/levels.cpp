// SPDX-License-Identifier: GPL-3.0-or-later
#include "sonic_levels.hpp"
#include <iostream>
#include <map>
using namespace moderngekko::sonic;
void require(bool value,const char* message){if(!value)throw std::runtime_error(message);}
int main(int argc,char** argv){try{
 require(argc==2,"Supply an authored SALEVEL1 fixture");auto l=Level::Load(argv[1]);require(l.pieces.size()==5&&l.goal.y==30,"Level binary parity");
 const std::uint32_t address=0x80e714a0;auto b=l.Terrain(address);auto u32=[&](unsigned o){return(std::uint32_t(b.at(o))<<24)|(std::uint32_t(b.at(o+1))<<16)|(b.at(o+2)<<8)|b.at(o+3);};
 require(b.size()==8*1572,"Terrain count and size");require(u32(936)==0x3692e6ff,"GameCube vertex color order");
 for(unsigned i=0;i<8;++i){unsigned o=i*1536;for(unsigned at:{1084u,1096u,1124u,1128u,1136u,1140u,1168u})require(u32(o+at)>=address&&u32(o+at)<address+b.size(),"Mesh pointer escapes terrain buffer");require(u32(8*1536+i*36+32)==0x88000001,"Collision/display flags");}
 while(l.pieces.size()<Level::MaxPieces)l.pieces.push_back(l.pieces[0]);require(l.Terrain(address).size()==99*1572,"Maximum geometry buffer exceeds retail terrain reservation");
 std::map<std::uint32_t,std::uint32_t> m;auto read=[&](auto a,auto size){return m[a];};auto write=[&](auto a,auto v,auto size){m[a]=v;};auto copy=[&](auto a,const auto& buffer){require(a==address,"Unexpected terrain destination");};
 LevelSession session(Level::Load(argv[1]));m[0x802cc040]=1;m[0x80845938]=1;for(int i=0;i<30;++i)session.Tick(read,write,copy);require(session.started&&m[0x80845938]==9,"Fresh stage startup");
 const auto base=address-0x30000,t=base+0x4c;m[base]=16;m[base+12]=21;m[base+16]=t;m[t+20]=129532;m[t+52]=2479264;m[t+48]=base+134664;m[base+0x1b8d68+12]=base+0x1b49e8;
 for(int i=0;i<6;++i)session.Tick(read,write,copy);require(session.injected&&m[base+0x1b8d68]==8,"Validated stage terrain replacement");
 m[base]=0;require(session.Tick(read,write,copy),"Unloaded stage must stop before reusing its memory");
 std::cout<<"PASS binary parity, color layout, mesh pointer bounds, collision flags, 96-piece budget, startup and allocation lifetime guards\n";return 0;
 }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}}
