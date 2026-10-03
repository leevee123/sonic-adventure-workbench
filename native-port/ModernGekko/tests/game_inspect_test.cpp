#include "moderngekko/game.hpp"

#include <algorithm>
#include <array>
#include <filesystem>
#include <fstream>
#include <vector>

namespace fs = std::filesystem;

int main()
{
  const fs::path root = fs::temp_directory_path() / "moderngekko-game-inspect-test";
  fs::remove_all(root);
  fs::create_directories(root / "sys");
  fs::create_directories(root / "files");

  std::array<unsigned char, 0x60> boot{};
  const char id[] = "TEST01";
  std::copy_n(id, 6, boot.begin());
  boot[0x18] = 0x5d; boot[0x19] = 0x1c; boot[0x1a] = 0x9e; boot[0x1b] = 0xa3;
  const char name[] = "Synthetic Test Game";
  std::copy_n(name, sizeof(name), boot.begin() + 0x20);
  std::ofstream(root / "sys" / "boot.bin", std::ios::binary)
      .write(reinterpret_cast<const char*>(boot.data()), boot.size());

  std::array<unsigned char, 0x104> dol{};
  dol[0x02] = 0x01;  // Text section 0 file offset: 0x100.
  dol[0x48] = 0x80; dol[0x49] = 0x00; dol[0x4a] = 0x31; dol[0x4b] = 0x00;
  dol[0x93] = 0x04;
  dol[0xe0] = 0x80; dol[0xe1] = 0x00; dol[0xe2] = 0x31; dol[0xe3] = 0x00;
  std::ofstream(root / "sys" / "main.dol", std::ios::binary)
      .write(reinterpret_cast<const char*>(dol.data()), dol.size());

  std::ofstream(root / "files" / "_Main.rel", std::ios::binary) << "REL fixture";
  std::ofstream(root / "files" / "asset.bin", std::ios::binary) << "first asset";
  const auto result = moderngekko::InspectGame(root);
  const auto local = moderngekko::InspectGame(root, false);
  if (!result || !local || result.metadata->assets_sha256.empty() ||
      !local.metadata->assets_sha256.empty() ||
      result.metadata->dol_sha256 != local.metadata->dol_sha256 ||
      result.metadata->rel_sha256 != local.metadata->rel_sha256 ||
      local.metadata->rel_sha256.empty())
    return 2;
  std::ofstream(root / "files" / "asset.bin", std::ios::binary) << "changed asset";
  const auto changed = moderngekko::InspectGame(root);
  if (!changed || changed.metadata->assets_sha256 == result.metadata->assets_sha256)
    return 3;
  dol[0xe0] = 0x90; // Entry outside executable sections must fail in both modes.
  std::ofstream(root / "sys" / "main.dol", std::ios::binary)
      .write(reinterpret_cast<const char*>(dol.data()), dol.size());
  if (moderngekko::InspectGame(root) || moderngekko::InspectGame(root, false))
    return 4;
  fs::remove_all(root);
  if (!result || result.metadata->disc_id != "TEST01" ||
      result.metadata->game_name != "Synthetic Test Game" ||
      result.metadata->platform != moderngekko::GamePlatform::Wii ||
      result.metadata->entry_point != 0x80003100u ||
      result.metadata->dol_sha256 !=
          "ee292f5fc3d0e5cfa32d951bd682a3cd2806c102e4a0a50300a2c480e21bcef6")
    return 1;
  return 0;
}
