// SPDX-License-Identifier: GPL-3.0-or-later
// GXSE8P revision 0: authored geometry, original retail collision/movement.
#pragma once
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <vector>
namespace moderngekko::sonic {
struct LevelPoint { float x{},y{},z{}; };
struct LevelPiece { std::uint32_t kind{}; LevelPoint position; float width{},height{},depth{},yaw{}; std::uint32_t color{}; };
struct Level {
  static constexpr unsigned MaxPieces=96;
  static constexpr float Anchor=10000;
  LevelPoint spawn,goal;
  std::vector<LevelPiece> pieces;
  static Level Load(const std::filesystem::path& path) {
    std::ifstream f(path,std::ios::binary|std::ios::ate);
    if(!f || f.tellg()<40 || f.tellg()>40+MaxPieces*36) throw std::runtime_error("Invalid custom level size.");
    std::vector<unsigned char> b(static_cast<std::size_t>(f.tellg()));f.seekg(0);f.read(reinterpret_cast<char*>(b.data()),b.size());
    if(!f || std::memcmp(b.data(),"SALEVEL1",8)) throw std::runtime_error("Invalid custom level header.");
    unsigned cursor=8;
    auto integer=[&](){if(cursor+4>b.size())throw std::runtime_error("Truncated custom level.");auto* p=b.data()+cursor;cursor+=4;return std::uint32_t(p[0])|(std::uint32_t(p[1])<<8)|(std::uint32_t(p[2])<<16)|(std::uint32_t(p[3])<<24);};
    auto number=[&](){auto v=integer();float n;std::memcpy(&n,&v,4);if(!std::isfinite(n))throw std::runtime_error("Custom level contains a non-finite number.");return n;};
    auto point=[&](){return LevelPoint{number(),number(),number()};};
    auto coordinate=[](LevelPoint p){return std::abs(p.x)<=4000 && std::abs(p.y)<=4000 && std::abs(p.z)<=4000;};
    const auto version=integer(),count=integer();
    if(version!=1 || !count || count>MaxPieces || b.size()!=40+count*36)throw std::runtime_error("Unsupported custom level format or geometry limit.");
    Level l;l.spawn=point();l.goal=point();
    if(!coordinate(l.spawn)||!coordinate(l.goal))throw std::runtime_error("Spawn or finish is outside the level bounds.");
    for(unsigned i=0;i<count;++i){LevelPiece p;p.kind=integer();p.position=point();p.width=number();p.height=number();p.depth=number();p.yaw=number();p.color=integer();
      if(p.kind>1 || !coordinate(p.position) || p.width<2 || p.width>1000 || p.depth<2 || p.depth>1000 || p.height<2 || p.height>1000 || std::abs(p.yaw)>360)throw std::runtime_error("Custom level has invalid geometry.");
      l.pieces.push_back(p);
    }return l;
  }
  // Each mesh is separate for spatial culling. Stay below the retail ray-list
  // capacity, including the three decorative finish-gate pieces.
  std::vector<unsigned char> Terrain(std::uint32_t address) const {
    auto all=pieces;
    all.push_back({0,{goal.x-9,goal.y,goal.z},3,22,3,0,0xffffcf38});
    all.push_back({0,{goal.x+9,goal.y,goal.z},3,22,3,0,0xffffcf38});
    all.push_back({0,{goal.x,goal.y+20,goal.z},21,3,3,0,0xffffcf38});
    constexpr unsigned stride=1536;
    std::vector<unsigned char> b(all.size()*stride+all.size()*36);
    auto u32=[&](unsigned o,std::uint32_t v){for(int i=0;i<4;++i)b.at(o+i)=v>>(24-8*i);};
    auto u16=[&](unsigned o,unsigned v){b.at(o)=v>>8;b.at(o+1)=v;};
    auto fl=[&](unsigned o,float n){std::uint32_t v;std::memcpy(&v,&n,4);u32(o,v);};
    auto vec=[&](unsigned o,LevelPoint p){fl(o,p.x);fl(o+4,p.y);fl(o+8,p.z);};
    const unsigned cols=all.size()*stride;
    for(unsigned i=0;i<all.size();++i){const auto& p=all[i];const unsigned o=i*stride;
      const float x=p.width/2,z=p.depth/2,h=p.height;
      std::array<LevelPoint,8> v={LevelPoint{-x,0,-z},{-x,0,z},{x,0,z},{x,0,-z},{-x,p.kind?0:h,-z},{-x,h,z},{x,h,z},{x,p.kind?0:h,-z}};
      const float a=p.yaw*3.14159265358979f/180,c=std::cos(a),s=std::sin(a);
      for(auto& q:v){float xx=q.x*c+q.z*s;q.z=q.z*c-q.x*s+p.position.z;q.x=xx+p.position.x;q.y+=Anchor+p.position.y;}
      const int faces[6][4]={{4,5,6,7},{3,2,1,0},{0,1,5,4},{2,3,7,6},{3,0,4,7},{1,2,6,5}};
      unsigned vertices=0;
      for(auto& face:faces)for(auto tri: {std::array<int,3>{face[0],face[1],face[2]},std::array<int,3>{face[0],face[2],face[3]}}){
        auto A=v[tri[0]],B=v[tri[1]],C=v[tri[2]];LevelPoint n{(B.y-A.y)*(C.z-A.z)-(B.z-A.z)*(C.y-A.y),(B.z-A.z)*(C.x-A.x)-(B.x-A.x)*(C.z-A.z),(B.x-A.x)*(C.y-A.y)-(B.y-A.y)*(C.x-A.x)};
        float length=std::sqrt(n.x*n.x+n.y*n.y+n.z*n.z);if(length<.001f)continue;n.x/=length;n.y/=length;n.z/=length;
        // GameCube's vertex color byte order is RGBA (not PC ARGB).
        const float shade=.72f+.28f*std::max(0.f,n.y);
        auto col=[&](unsigned shift){return unsigned(((p.color>>shift)&255)*shade);};
        const auto rgba=(col(16)<<24)|(col(8)<<16)|(col(0)<<8)|255;
        for(auto index:tri){vec(o+vertices*12,v[index]);vec(o+432+vertices*12,n);u16(o+864+vertices*2,vertices);u32(o+936+vertices*4,rgba);++vertices;}
      }
      // Ninja Basic attach (40 bytes), meshset (24), material (20), object (52).
      const unsigned mesh=o+1080,mat=o+1104,model=o+1124,obj=o+1164;
      u16(mesh,0);u16(mesh+2,vertices/3);u32(mesh+4,address+o+864);u32(mesh+16,address+o+936);
      u32(mat,0xffffffff);u32(mat+16,0x02000000);
      u32(model,address+o);u32(model+4,address+o+432);u32(model+8,vertices);u32(model+12,address+mesh);u32(model+16,address+mat);u16(model+20,1);u16(model+22,1);
      LevelPoint center{p.position.x,Anchor+p.position.y+h/2,p.position.z};const float radius=std::sqrt(x*x+z*z+h*h/4)+1;
      vec(model+24,center);fl(model+36,radius);u32(obj,7);u32(obj+4,address+model);fl(obj+32,1);fl(obj+36,1);fl(obj+40,1);
      unsigned col=cols+i*36;vec(col,center);fl(col+12,radius);u32(col+24,address+obj);u32(col+32,0x88000001);
    }return b;
  }
};
struct LevelSession {
  Level level;
  bool started=false,injected=false,spawned=false,previous_reset=false,cleared=false;
  unsigned ready_frames=0,finish_frames=0,startup_frames=0;std::uint32_t base=0,player=0;
  float floor=-10000;
  float camera_yaw=3.14159265f,camera_pitch=.48f;
  explicit LevelSession(Level l):level(std::move(l)){floor=level.pieces.front().position.y;for(auto& p:level.pieces)floor=std::min(floor,p.position.y);floor+=Level::Anchor-120;}
  template<class Read,class Write,class Copy> bool Tick(Read read,Write write,Copy copy) {
    if(!injected && ++startup_frames>7200)throw std::runtime_error("Custom level startup timed out. Check the runtime log.");
    // Main REL uses a fixed retail allocation. Wait until its init has reached
    // the title/menu, then enter the game's ordinary Sonic trial-stage loader.
    if(!started){if(read(0x802cc040,4)!=1)return false;const auto mode=read(0x80845938,4);
      if(mode!=1 && mode!=12 && mode!=13)return false;
      if(++ready_frames<30)return false;
      write(0x8074a7a8,1,2);write(0x8074a7aa,3,2);write(0x8074a7ac,0,2); // character/lives
      write(0x8074a7c4,0,2);write(0x8074a7c6,1,2); // act/stage
      write(0x8074a7bc,0,2);write(0x80845938,9,4);started=true;
    }
    if(read(0x8074a7c6,2)!=1 || read(0x8074a7c4,2)!=0)return injected;
    if(injected && (read(base,4)!=16 || read(base+16,4)!=base+0x4c || read(base+0x1b8d68+12,4)!=base+0x30000+(level.pieces.size()+3)*1536))return true;
    if(!injected){
      if(startup_frames%6!=0)return false;
      // Find a LINKED Emerald Coast REL, validating section layout before
      // using its replaceable terrain area. No guessed free-RAM allocation.
      for(std::uint32_t a=0x80860000;a<0x81540000;a+=32){
        if(read(a,4)!=16 || read(a+12,4)!=21)continue;
        const auto t=read(a+16,4);if(t!=a+0x4c || read(t+2*8+4,4)!=129532 || read(t+6*8+4,4)!=2479264 || read(t+6*8,4)!=a+134664)continue;
        if(read(a+0x1b8d68+12,4)!=a+0x1b49e8)continue;
        base=a;const auto buffer=level.Terrain(base+0x30000);copy(base+0x30000,buffer);
        const auto table=base+0x1b8d68;
        write(table,level.pieces.size()+3,2);write(table+2,0,2);write(table+4,0,4);write(table+8,0x461c4000,4); // 10000 clip
        write(table+12,base+0x30000+(level.pieces.size()+3)*1536,4);
        for(unsigned o=16;o<36;o+=4)write(table+o,0,4);
        injected=true;break;
      }
    }
    if(!injected)return false;
    // Original land registration uses this same table. The retail model and
    // collision routines consume our Ninja Basic geometry directly.
    write(0x80754288,base+0x1b8d68,4);
    const auto p=read(0x80845480,4);
    if(p<0x80000000 || p>0x817fff00 || (p&3))return false;
    const auto as_float=[&](std::uint32_t v){float f;std::memcpy(&f,&v,4);return f;};
    const auto position=[&](){return LevelPoint{as_float(read(p+32,4)),as_float(read(p+36,4)),as_float(read(p+40,4))};};
    const auto reset=(read(0x8074c8e0,2)&0x0010)!=0; // Z / Xbox RB
    if(!spawned || p!=player || !std::isfinite(position().y) || position().y<floor || (reset&&!previous_reset)){
      auto s=level.spawn;s.y+=Level::Anchor;
      auto put=[&](std::uint32_t a,float f){std::uint32_t v;std::memcpy(&v,&f,4);write(a,v,4);};
      put(p+32,s.x);put(p+36,s.y);put(p+40,s.z);write(p,1,1);write(p+4,0,2);write(p+16,0,4);write(p+20,0,4);write(p+24,0,4);
      // Sonic's playerwk speed (fn_1_1AF1C4 / PSetPosition), not task pointers.
      const auto pw=read(0x80845484,4);if(pw>=0x80000000 && pw<0x817ffe00 && !(pw&3))for(unsigned o=0x38;o<=0x40;o+=4)write(pw+o,0,4);
      player=p;spawned=true;
    }
    previous_reset=reset;
    auto q=position();
    // The retail stage's camera volumes describe Emerald Coast, not authored
    // platforms. Keep its view-matrix builder and replace only camera task data.
    const auto camera=read(0x806b44b0,4),system=read(0x804e0a60,4);
    if(camera>=0x80000000 && camera<0x817fff00 && !(camera&3) && system==0x806b48bc && read(camera,1)==2){
      const auto stick=[&](std::uint32_t a){int n=int(read(a,1));return n>127?n-256:n;};
      int cx=stick(0x8074c8e4),cy=stick(0x8074c8e5);
      if(std::abs(cx)>24)camera_yaw-=cx*.0004f;
      if(std::abs(cy)>24)camera_pitch=std::clamp(camera_pitch+cy*.0002f,.18f,1.1f);
      const float distance=65,ex=q.x+std::sin(camera_yaw)*distance,ez=q.z+std::cos(camera_yaw)*distance;
      float ey=q.y+8+std::tan(camera_pitch)*distance;
      for(unsigned i=1;i<=8;++i){float x=q.x+(ex-q.x)*i/8,z=q.z+(ez-q.z)*i/8;
        for(auto& p:level.pieces){float a=p.yaw*3.14159265f/180,dx=x-p.position.x,dz=z-p.position.z,xx=dx*std::cos(a)-dz*std::sin(a),zz=dx*std::sin(a)+dz*std::cos(a);
          if(std::abs(xx)<=p.width/2 && std::abs(zz)<=p.depth/2)ey=std::max(ey,Level::Anchor+p.position.y+(p.kind?(zz/p.depth+.5f)*p.height:p.height)+18);}}
      const auto put=[&](std::uint32_t a,float f){std::uint32_t v;std::memcpy(&v,&f,4);write(a,v,4);};
      write(system+12,0,4);put(camera+32,ex);put(camera+36,ey);put(camera+40,ez);
      write(camera+20,std::uint32_t(std::int32_t(-std::atan2(ey-q.y-8,distance)*65536/(2*3.14159265f))),4);
      write(camera+24,std::uint32_t(std::int32_t(camera_yaw*65536/(2*3.14159265f)))&65535,4);write(camera+28,0,4);
    }
    float dx=q.x-level.goal.x,dy=q.y-Level::Anchor-level.goal.y,dz=q.z-level.goal.z;
    if(spawned && std::abs(dx)<7 && dy>=-2 && dy<20 && std::abs(dz)<7)cleared=true;
    return cleared && ++finish_frames>=180;
  }
};
}
