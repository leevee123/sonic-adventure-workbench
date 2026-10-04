// USA GXSE8P revision 0 only. Changes guest state on the CPU's VI thread.
#pragma once
#include <array>
#include <cstdint>
namespace moderngekko::sonic {
struct Enhancements {
  bool previous_y = false;
  template<class Read, class Write> bool LightDash(Read read, Write write) {
    const bool down = (read(0x8074c8e0, 2) & 0x0800) != 0;
    const bool pressed = down && !previous_y; previous_y = down;
    if (!pressed || read(0x8079bd19, 1) != 0) return false;
    const std::uint32_t work = read(0x80845480, 4);
    if (work < 0x80000000 || work > 0x817ffff8 || (work & 3)) return false;
    // Original game's instant-dash request. It selects the existing Sonic
    // action; ring traversal and movement remain in the retail engine.
    // Reference: MetalOverlord666's GXSE8P X Instant Lightspeed Dash,
    // https://wiird.gamehacking.org/forum/index.php?topic=9010.0
    const auto flags = read(work + 4, 2);
    // Respect hurt, held objects, scripted paths and disabled controls.
    if (flags & (0x0004 | 0x0800 | 0x1000 | 0x2000 | 0x4000)) return false;
    write(work + 4, flags | 0x0201, 2); return true;
  }
};
}
