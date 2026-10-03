// DolRecomp output
#include "../generated.h"

void func_80C5E2A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C5E2A0[996] = {
        &&label_80C5E2A0,
        &&label_80C5E2A4,
        &&label_80C5E2A8,
        &&label_80C5E2AC,
        &&label_80C5E2B0,
        &&label_80C5E2B4,
        &&label_80C5E2B8,
        &&label_80C5E2BC,
        &&label_80C5E2C0,
        &&label_80C5E2C4,
        &&label_80C5E2C8,
        &&label_80C5E2CC,
        &&label_80C5E2D0,
        &&label_80C5E2D4,
        &&label_80C5E2D8,
        &&label_80C5E2DC,
        &&label_80C5E2E0,
        &&label_80C5E2E4,
        &&label_80C5E2E8,
        &&label_80C5E2EC,
        &&label_80C5E2F0,
        &&label_80C5E2F4,
        &&label_80C5E2F8,
        &&label_80C5E2FC,
        &&label_80C5E300,
        &&label_80C5E304,
        &&label_80C5E308,
        &&label_80C5E30C,
        &&label_80C5E310,
        &&label_80C5E314,
        &&label_80C5E318,
        &&label_80C5E31C,
        &&label_80C5E320,
        &&label_80C5E324,
        &&label_80C5E328,
        &&label_80C5E32C,
        &&label_80C5E330,
        &&label_80C5E334,
        &&label_80C5E338,
        &&label_80C5E33C,
        &&label_80C5E340,
        &&label_80C5E344,
        &&label_80C5E348,
        &&label_80C5E34C,
        &&label_80C5E350,
        &&label_80C5E354,
        &&label_80C5E358,
        &&label_80C5E35C,
        &&label_80C5E360,
        &&label_80C5E364,
        &&label_80C5E368,
        &&label_80C5E36C,
        &&label_80C5E370,
        &&label_80C5E374,
        &&label_80C5E378,
        &&label_80C5E37C,
        &&label_80C5E380,
        &&label_80C5E384,
        &&label_80C5E388,
        &&label_80C5E38C,
        &&label_80C5E390,
        &&label_80C5E394,
        &&label_80C5E398,
        &&label_80C5E39C,
        &&label_80C5E3A0,
        &&label_80C5E3A4,
        &&label_80C5E3A8,
        &&label_80C5E3AC,
        &&label_80C5E3B0,
        &&label_80C5E3B4,
        &&label_80C5E3B8,
        &&label_80C5E3BC,
        &&label_80C5E3C0,
        &&label_80C5E3C4,
        &&label_80C5E3C8,
        &&label_80C5E3CC,
        &&label_80C5E3D0,
        &&label_80C5E3D4,
        &&label_80C5E3D8,
        &&label_80C5E3DC,
        &&label_80C5E3E0,
        &&label_80C5E3E4,
        &&label_80C5E3E8,
        &&label_80C5E3EC,
        &&label_80C5E3F0,
        &&label_80C5E3F4,
        &&label_80C5E3F8,
        &&label_80C5E3FC,
        &&label_80C5E400,
        &&label_80C5E404,
        &&label_80C5E408,
        &&label_80C5E40C,
        &&label_80C5E410,
        &&label_80C5E414,
        &&label_80C5E418,
        &&label_80C5E41C,
        &&label_80C5E420,
        &&label_80C5E424,
        &&label_80C5E428,
        &&label_80C5E42C,
        &&label_80C5E430,
        &&label_80C5E434,
        &&label_80C5E438,
        &&label_80C5E43C,
        &&label_80C5E440,
        &&label_80C5E444,
        &&label_80C5E448,
        &&label_80C5E44C,
        &&label_80C5E450,
        &&label_80C5E454,
        &&label_80C5E458,
        &&label_80C5E45C,
        &&label_80C5E460,
        &&label_80C5E464,
        &&label_80C5E468,
        &&label_80C5E46C,
        &&label_80C5E470,
        &&label_80C5E474,
        &&label_80C5E478,
        &&label_80C5E47C,
        &&label_80C5E480,
        &&label_80C5E484,
        &&label_80C5E488,
        &&label_80C5E48C,
        &&label_80C5E490,
        &&label_80C5E494,
        &&label_80C5E498,
        &&label_80C5E49C,
        &&label_80C5E4A0,
        &&label_80C5E4A4,
        &&label_80C5E4A8,
        &&label_80C5E4AC,
        &&label_80C5E4B0,
        &&label_80C5E4B4,
        &&label_80C5E4B8,
        &&label_80C5E4BC,
        &&label_80C5E4C0,
        &&label_80C5E4C4,
        &&label_80C5E4C8,
        &&label_80C5E4CC,
        &&label_80C5E4D0,
        &&label_80C5E4D4,
        &&label_80C5E4D8,
        &&label_80C5E4DC,
        &&label_80C5E4E0,
        &&label_80C5E4E4,
        &&label_80C5E4E8,
        &&label_80C5E4EC,
        &&label_80C5E4F0,
        &&label_80C5E4F4,
        &&label_80C5E4F8,
        &&label_80C5E4FC,
        &&label_80C5E500,
        &&label_80C5E504,
        &&label_80C5E508,
        &&label_80C5E50C,
        &&label_80C5E510,
        &&label_80C5E514,
        &&label_80C5E518,
        &&label_80C5E51C,
        &&label_80C5E520,
        &&label_80C5E524,
        &&label_80C5E528,
        &&label_80C5E52C,
        &&label_80C5E530,
        &&label_80C5E534,
        &&label_80C5E538,
        &&label_80C5E53C,
        &&label_80C5E540,
        &&label_80C5E544,
        &&label_80C5E548,
        &&label_80C5E54C,
        &&label_80C5E550,
        &&label_80C5E554,
        &&label_80C5E558,
        &&label_80C5E55C,
        &&label_80C5E560,
        &&label_80C5E564,
        &&label_80C5E568,
        &&label_80C5E56C,
        &&label_80C5E570,
        &&label_80C5E574,
        &&label_80C5E578,
        &&label_80C5E57C,
        &&label_80C5E580,
        &&label_80C5E584,
        &&label_80C5E588,
        &&label_80C5E58C,
        &&label_80C5E590,
        &&label_80C5E594,
        &&label_80C5E598,
        &&label_80C5E59C,
        &&label_80C5E5A0,
        &&label_80C5E5A4,
        &&label_80C5E5A8,
        &&label_80C5E5AC,
        &&label_80C5E5B0,
        &&label_80C5E5B4,
        &&label_80C5E5B8,
        &&label_80C5E5BC,
        &&label_80C5E5C0,
        &&label_80C5E5C4,
        &&label_80C5E5C8,
        &&label_80C5E5CC,
        &&label_80C5E5D0,
        &&label_80C5E5D4,
        &&label_80C5E5D8,
        &&label_80C5E5DC,
        &&label_80C5E5E0,
        &&label_80C5E5E4,
        &&label_80C5E5E8,
        &&label_80C5E5EC,
        &&label_80C5E5F0,
        &&label_80C5E5F4,
        &&label_80C5E5F8,
        &&label_80C5E5FC,
        &&label_80C5E600,
        &&label_80C5E604,
        &&label_80C5E608,
        &&label_80C5E60C,
        &&label_80C5E610,
        &&label_80C5E614,
        &&label_80C5E618,
        &&label_80C5E61C,
        &&label_80C5E620,
        &&label_80C5E624,
        &&label_80C5E628,
        &&label_80C5E62C,
        &&label_80C5E630,
        &&label_80C5E634,
        &&label_80C5E638,
        &&label_80C5E63C,
        &&label_80C5E640,
        &&label_80C5E644,
        &&label_80C5E648,
        &&label_80C5E64C,
        &&label_80C5E650,
        &&label_80C5E654,
        &&label_80C5E658,
        &&label_80C5E65C,
        &&label_80C5E660,
        &&label_80C5E664,
        &&label_80C5E668,
        &&label_80C5E66C,
        &&label_80C5E670,
        &&label_80C5E674,
        &&label_80C5E678,
        &&label_80C5E67C,
        &&label_80C5E680,
        &&label_80C5E684,
        &&label_80C5E688,
        &&label_80C5E68C,
        &&label_80C5E690,
        &&label_80C5E694,
        &&label_80C5E698,
        &&label_80C5E69C,
        &&label_80C5E6A0,
        &&label_80C5E6A4,
        &&label_80C5E6A8,
        &&label_80C5E6AC,
        &&label_80C5E6B0,
        &&label_80C5E6B4,
        &&label_80C5E6B8,
        &&label_80C5E6BC,
        &&label_80C5E6C0,
        &&label_80C5E6C4,
        &&label_80C5E6C8,
        &&label_80C5E6CC,
        &&label_80C5E6D0,
        &&label_80C5E6D4,
        &&label_80C5E6D8,
        &&label_80C5E6DC,
        &&label_80C5E6E0,
        &&label_80C5E6E4,
        &&label_80C5E6E8,
        &&label_80C5E6EC,
        &&label_80C5E6F0,
        &&label_80C5E6F4,
        &&label_80C5E6F8,
        &&label_80C5E6FC,
        &&label_80C5E700,
        &&label_80C5E704,
        &&label_80C5E708,
        &&label_80C5E70C,
        &&label_80C5E710,
        &&label_80C5E714,
        &&label_80C5E718,
        &&label_80C5E71C,
        &&label_80C5E720,
        &&label_80C5E724,
        &&label_80C5E728,
        &&label_80C5E72C,
        &&label_80C5E730,
        &&label_80C5E734,
        &&label_80C5E738,
        &&label_80C5E73C,
        &&label_80C5E740,
        &&label_80C5E744,
        &&label_80C5E748,
        &&label_80C5E74C,
        &&label_80C5E750,
        &&label_80C5E754,
        &&label_80C5E758,
        &&label_80C5E75C,
        &&label_80C5E760,
        &&label_80C5E764,
        &&label_80C5E768,
        &&label_80C5E76C,
        &&label_80C5E770,
        &&label_80C5E774,
        &&label_80C5E778,
        &&label_80C5E77C,
        &&label_80C5E780,
        &&label_80C5E784,
        &&label_80C5E788,
        &&label_80C5E78C,
        &&label_80C5E790,
        &&label_80C5E794,
        &&label_80C5E798,
        &&label_80C5E79C,
        &&label_80C5E7A0,
        &&label_80C5E7A4,
        &&label_80C5E7A8,
        &&label_80C5E7AC,
        &&label_80C5E7B0,
        &&label_80C5E7B4,
        &&label_80C5E7B8,
        &&label_80C5E7BC,
        &&label_80C5E7C0,
        &&label_80C5E7C4,
        &&label_80C5E7C8,
        &&label_80C5E7CC,
        &&label_80C5E7D0,
        &&label_80C5E7D4,
        &&label_80C5E7D8,
        &&label_80C5E7DC,
        &&label_80C5E7E0,
        &&label_80C5E7E4,
        &&label_80C5E7E8,
        &&label_80C5E7EC,
        &&label_80C5E7F0,
        &&label_80C5E7F4,
        &&label_80C5E7F8,
        &&label_80C5E7FC,
        &&label_80C5E800,
        &&label_80C5E804,
        &&label_80C5E808,
        &&label_80C5E80C,
        &&label_80C5E810,
        &&label_80C5E814,
        &&label_80C5E818,
        &&label_80C5E81C,
        &&label_80C5E820,
        &&label_80C5E824,
        &&label_80C5E828,
        &&label_80C5E82C,
        &&label_80C5E830,
        &&label_80C5E834,
        &&label_80C5E838,
        &&label_80C5E83C,
        &&label_80C5E840,
        &&label_80C5E844,
        &&label_80C5E848,
        &&label_80C5E84C,
        &&label_80C5E850,
        &&label_80C5E854,
        &&label_80C5E858,
        &&label_80C5E85C,
        &&label_80C5E860,
        &&label_80C5E864,
        &&label_80C5E868,
        &&label_80C5E86C,
        &&label_80C5E870,
        &&label_80C5E874,
        &&label_80C5E878,
        &&label_80C5E87C,
        &&label_80C5E880,
        &&label_80C5E884,
        &&label_80C5E888,
        &&label_80C5E88C,
        &&label_80C5E890,
        &&label_80C5E894,
        &&label_80C5E898,
        &&label_80C5E89C,
        &&label_80C5E8A0,
        &&label_80C5E8A4,
        &&label_80C5E8A8,
        &&label_80C5E8AC,
        &&label_80C5E8B0,
        &&label_80C5E8B4,
        &&label_80C5E8B8,
        &&label_80C5E8BC,
        &&label_80C5E8C0,
        &&label_80C5E8C4,
        &&label_80C5E8C8,
        &&label_80C5E8CC,
        &&label_80C5E8D0,
        &&label_80C5E8D4,
        &&label_80C5E8D8,
        &&label_80C5E8DC,
        &&label_80C5E8E0,
        &&label_80C5E8E4,
        &&label_80C5E8E8,
        &&label_80C5E8EC,
        &&label_80C5E8F0,
        &&label_80C5E8F4,
        &&label_80C5E8F8,
        &&label_80C5E8FC,
        &&label_80C5E900,
        &&label_80C5E904,
        &&label_80C5E908,
        &&label_80C5E90C,
        &&label_80C5E910,
        &&label_80C5E914,
        &&label_80C5E918,
        &&label_80C5E91C,
        &&label_80C5E920,
        &&label_80C5E924,
        &&label_80C5E928,
        &&label_80C5E92C,
        &&label_80C5E930,
        &&label_80C5E934,
        &&label_80C5E938,
        &&label_80C5E93C,
        &&label_80C5E940,
        &&label_80C5E944,
        &&label_80C5E948,
        &&label_80C5E94C,
        &&label_80C5E950,
        &&label_80C5E954,
        &&label_80C5E958,
        &&label_80C5E95C,
        &&label_80C5E960,
        &&label_80C5E964,
        &&label_80C5E968,
        &&label_80C5E96C,
        &&label_80C5E970,
        &&label_80C5E974,
        &&label_80C5E978,
        &&label_80C5E97C,
        &&label_80C5E980,
        &&label_80C5E984,
        &&label_80C5E988,
        &&label_80C5E98C,
        &&label_80C5E990,
        &&label_80C5E994,
        &&label_80C5E998,
        &&label_80C5E99C,
        &&label_80C5E9A0,
        &&label_80C5E9A4,
        &&label_80C5E9A8,
        &&label_80C5E9AC,
        &&label_80C5E9B0,
        &&label_80C5E9B4,
        &&label_80C5E9B8,
        &&label_80C5E9BC,
        &&label_80C5E9C0,
        &&label_80C5E9C4,
        &&label_80C5E9C8,
        &&label_80C5E9CC,
        &&label_80C5E9D0,
        &&label_80C5E9D4,
        &&label_80C5E9D8,
        &&label_80C5E9DC,
        &&label_80C5E9E0,
        &&label_80C5E9E4,
        &&label_80C5E9E8,
        &&label_80C5E9EC,
        &&label_80C5E9F0,
        &&label_80C5E9F4,
        &&label_80C5E9F8,
        &&label_80C5E9FC,
        &&label_80C5EA00,
        &&label_80C5EA04,
        &&label_80C5EA08,
        &&label_80C5EA0C,
        &&label_80C5EA10,
        &&label_80C5EA14,
        &&label_80C5EA18,
        &&label_80C5EA1C,
        &&label_80C5EA20,
        &&label_80C5EA24,
        &&label_80C5EA28,
        &&label_80C5EA2C,
        &&label_80C5EA30,
        &&label_80C5EA34,
        &&label_80C5EA38,
        &&label_80C5EA3C,
        &&label_80C5EA40,
        &&label_80C5EA44,
        &&label_80C5EA48,
        &&label_80C5EA4C,
        &&label_80C5EA50,
        &&label_80C5EA54,
        &&label_80C5EA58,
        &&label_80C5EA5C,
        &&label_80C5EA60,
        &&label_80C5EA64,
        &&label_80C5EA68,
        &&label_80C5EA6C,
        &&label_80C5EA70,
        &&label_80C5EA74,
        &&label_80C5EA78,
        &&label_80C5EA7C,
        &&label_80C5EA80,
        &&label_80C5EA84,
        &&label_80C5EA88,
        &&label_80C5EA8C,
        &&label_80C5EA90,
        &&label_80C5EA94,
        &&label_80C5EA98,
        &&label_80C5EA9C,
        &&label_80C5EAA0,
        &&label_80C5EAA4,
        &&label_80C5EAA8,
        &&label_80C5EAAC,
        &&label_80C5EAB0,
        &&label_80C5EAB4,
        &&label_80C5EAB8,
        &&label_80C5EABC,
        &&label_80C5EAC0,
        &&label_80C5EAC4,
        &&label_80C5EAC8,
        &&label_80C5EACC,
        &&label_80C5EAD0,
        &&label_80C5EAD4,
        &&label_80C5EAD8,
        &&label_80C5EADC,
        &&label_80C5EAE0,
        &&label_80C5EAE4,
        &&label_80C5EAE8,
        &&label_80C5EAEC,
        &&label_80C5EAF0,
        &&label_80C5EAF4,
        &&label_80C5EAF8,
        &&label_80C5EAFC,
        &&label_80C5EB00,
        &&label_80C5EB04,
        &&label_80C5EB08,
        &&label_80C5EB0C,
        &&label_80C5EB10,
        &&label_80C5EB14,
        &&label_80C5EB18,
        &&label_80C5EB1C,
        &&label_80C5EB20,
        &&label_80C5EB24,
        &&label_80C5EB28,
        &&label_80C5EB2C,
        &&label_80C5EB30,
        &&label_80C5EB34,
        &&label_80C5EB38,
        &&label_80C5EB3C,
        &&label_80C5EB40,
        &&label_80C5EB44,
        &&label_80C5EB48,
        &&label_80C5EB4C,
        &&label_80C5EB50,
        &&label_80C5EB54,
        &&label_80C5EB58,
        &&label_80C5EB5C,
        &&label_80C5EB60,
        &&label_80C5EB64,
        &&label_80C5EB68,
        &&label_80C5EB6C,
        &&label_80C5EB70,
        &&label_80C5EB74,
        &&label_80C5EB78,
        &&label_80C5EB7C,
        &&label_80C5EB80,
        &&label_80C5EB84,
        &&label_80C5EB88,
        &&label_80C5EB8C,
        &&label_80C5EB90,
        &&label_80C5EB94,
        &&label_80C5EB98,
        &&label_80C5EB9C,
        &&label_80C5EBA0,
        &&label_80C5EBA4,
        &&label_80C5EBA8,
        &&label_80C5EBAC,
        &&label_80C5EBB0,
        &&label_80C5EBB4,
        &&label_80C5EBB8,
        &&label_80C5EBBC,
        &&label_80C5EBC0,
        &&label_80C5EBC4,
        &&label_80C5EBC8,
        &&label_80C5EBCC,
        &&label_80C5EBD0,
        &&label_80C5EBD4,
        &&label_80C5EBD8,
        &&label_80C5EBDC,
        &&label_80C5EBE0,
        &&label_80C5EBE4,
        &&label_80C5EBE8,
        &&label_80C5EBEC,
        &&label_80C5EBF0,
        &&label_80C5EBF4,
        &&label_80C5EBF8,
        &&label_80C5EBFC,
        &&label_80C5EC00,
        &&label_80C5EC04,
        &&label_80C5EC08,
        &&label_80C5EC0C,
        &&label_80C5EC10,
        &&label_80C5EC14,
        &&label_80C5EC18,
        &&label_80C5EC1C,
        &&label_80C5EC20,
        &&label_80C5EC24,
        &&label_80C5EC28,
        &&label_80C5EC2C,
        &&label_80C5EC30,
        &&label_80C5EC34,
        &&label_80C5EC38,
        &&label_80C5EC3C,
        &&label_80C5EC40,
        &&label_80C5EC44,
        &&label_80C5EC48,
        &&label_80C5EC4C,
        &&label_80C5EC50,
        &&label_80C5EC54,
        &&label_80C5EC58,
        &&label_80C5EC5C,
        &&label_80C5EC60,
        &&label_80C5EC64,
        &&label_80C5EC68,
        &&label_80C5EC6C,
        &&label_80C5EC70,
        &&label_80C5EC74,
        &&label_80C5EC78,
        &&label_80C5EC7C,
        &&label_80C5EC80,
        &&label_80C5EC84,
        &&label_80C5EC88,
        &&label_80C5EC8C,
        &&label_80C5EC90,
        &&label_80C5EC94,
        &&label_80C5EC98,
        &&label_80C5EC9C,
        &&label_80C5ECA0,
        &&label_80C5ECA4,
        &&label_80C5ECA8,
        &&label_80C5ECAC,
        &&label_80C5ECB0,
        &&label_80C5ECB4,
        &&label_80C5ECB8,
        &&label_80C5ECBC,
        &&label_80C5ECC0,
        &&label_80C5ECC4,
        &&label_80C5ECC8,
        &&label_80C5ECCC,
        &&label_80C5ECD0,
        &&label_80C5ECD4,
        &&label_80C5ECD8,
        &&label_80C5ECDC,
        &&label_80C5ECE0,
        &&label_80C5ECE4,
        &&label_80C5ECE8,
        &&label_80C5ECEC,
        &&label_80C5ECF0,
        &&label_80C5ECF4,
        &&label_80C5ECF8,
        &&label_80C5ECFC,
        &&label_80C5ED00,
        &&label_80C5ED04,
        &&label_80C5ED08,
        &&label_80C5ED0C,
        &&label_80C5ED10,
        &&label_80C5ED14,
        &&label_80C5ED18,
        &&label_80C5ED1C,
        &&label_80C5ED20,
        &&label_80C5ED24,
        &&label_80C5ED28,
        &&label_80C5ED2C,
        &&label_80C5ED30,
        &&label_80C5ED34,
        &&label_80C5ED38,
        &&label_80C5ED3C,
        &&label_80C5ED40,
        &&label_80C5ED44,
        &&label_80C5ED48,
        &&label_80C5ED4C,
        &&label_80C5ED50,
        &&label_80C5ED54,
        &&label_80C5ED58,
        &&label_80C5ED5C,
        &&label_80C5ED60,
        &&label_80C5ED64,
        &&label_80C5ED68,
        &&label_80C5ED6C,
        &&label_80C5ED70,
        &&label_80C5ED74,
        &&label_80C5ED78,
        &&label_80C5ED7C,
        &&label_80C5ED80,
        &&label_80C5ED84,
        &&label_80C5ED88,
        &&label_80C5ED8C,
        &&label_80C5ED90,
        &&label_80C5ED94,
        &&label_80C5ED98,
        &&label_80C5ED9C,
        &&label_80C5EDA0,
        &&label_80C5EDA4,
        &&label_80C5EDA8,
        &&label_80C5EDAC,
        &&label_80C5EDB0,
        &&label_80C5EDB4,
        &&label_80C5EDB8,
        &&label_80C5EDBC,
        &&label_80C5EDC0,
        &&label_80C5EDC4,
        &&label_80C5EDC8,
        &&label_80C5EDCC,
        &&label_80C5EDD0,
        &&label_80C5EDD4,
        &&label_80C5EDD8,
        &&label_80C5EDDC,
        &&label_80C5EDE0,
        &&label_80C5EDE4,
        &&label_80C5EDE8,
        &&label_80C5EDEC,
        &&label_80C5EDF0,
        &&label_80C5EDF4,
        &&label_80C5EDF8,
        &&label_80C5EDFC,
        &&label_80C5EE00,
        &&label_80C5EE04,
        &&label_80C5EE08,
        &&label_80C5EE0C,
        &&label_80C5EE10,
        &&label_80C5EE14,
        &&label_80C5EE18,
        &&label_80C5EE1C,
        &&label_80C5EE20,
        &&label_80C5EE24,
        &&label_80C5EE28,
        &&label_80C5EE2C,
        &&label_80C5EE30,
        &&label_80C5EE34,
        &&label_80C5EE38,
        &&label_80C5EE3C,
        &&label_80C5EE40,
        &&label_80C5EE44,
        &&label_80C5EE48,
        &&label_80C5EE4C,
        &&label_80C5EE50,
        &&label_80C5EE54,
        &&label_80C5EE58,
        &&label_80C5EE5C,
        &&label_80C5EE60,
        &&label_80C5EE64,
        &&label_80C5EE68,
        &&label_80C5EE6C,
        &&label_80C5EE70,
        &&label_80C5EE74,
        &&label_80C5EE78,
        &&label_80C5EE7C,
        &&label_80C5EE80,
        &&label_80C5EE84,
        &&label_80C5EE88,
        &&label_80C5EE8C,
        &&label_80C5EE90,
        &&label_80C5EE94,
        &&label_80C5EE98,
        &&label_80C5EE9C,
        &&label_80C5EEA0,
        &&label_80C5EEA4,
        &&label_80C5EEA8,
        &&label_80C5EEAC,
        &&label_80C5EEB0,
        &&label_80C5EEB4,
        &&label_80C5EEB8,
        &&label_80C5EEBC,
        &&label_80C5EEC0,
        &&label_80C5EEC4,
        &&label_80C5EEC8,
        &&label_80C5EECC,
        &&label_80C5EED0,
        &&label_80C5EED4,
        &&label_80C5EED8,
        &&label_80C5EEDC,
        &&label_80C5EEE0,
        &&label_80C5EEE4,
        &&label_80C5EEE8,
        &&label_80C5EEEC,
        &&label_80C5EEF0,
        &&label_80C5EEF4,
        &&label_80C5EEF8,
        &&label_80C5EEFC,
        &&label_80C5EF00,
        &&label_80C5EF04,
        &&label_80C5EF08,
        &&label_80C5EF0C,
        &&label_80C5EF10,
        &&label_80C5EF14,
        &&label_80C5EF18,
        &&label_80C5EF1C,
        &&label_80C5EF20,
        &&label_80C5EF24,
        &&label_80C5EF28,
        &&label_80C5EF2C,
        &&label_80C5EF30,
        &&label_80C5EF34,
        &&label_80C5EF38,
        &&label_80C5EF3C,
        &&label_80C5EF40,
        &&label_80C5EF44,
        &&label_80C5EF48,
        &&label_80C5EF4C,
        &&label_80C5EF50,
        &&label_80C5EF54,
        &&label_80C5EF58,
        &&label_80C5EF5C,
        &&label_80C5EF60,
        &&label_80C5EF64,
        &&label_80C5EF68,
        &&label_80C5EF6C,
        &&label_80C5EF70,
        &&label_80C5EF74,
        &&label_80C5EF78,
        &&label_80C5EF7C,
        &&label_80C5EF80,
        &&label_80C5EF84,
        &&label_80C5EF88,
        &&label_80C5EF8C,
        &&label_80C5EF90,
        &&label_80C5EF94,
        &&label_80C5EF98,
        &&label_80C5EF9C,
        &&label_80C5EFA0,
        &&label_80C5EFA4,
        &&label_80C5EFA8,
        &&label_80C5EFAC,
        &&label_80C5EFB0,
        &&label_80C5EFB4,
        &&label_80C5EFB8,
        &&label_80C5EFBC,
        &&label_80C5EFC0,
        &&label_80C5EFC4,
        &&label_80C5EFC8,
        &&label_80C5EFCC,
        &&label_80C5EFD0,
        &&label_80C5EFD4,
        &&label_80C5EFD8,
        &&label_80C5EFDC,
        &&label_80C5EFE0,
        &&label_80C5EFE4,
        &&label_80C5EFE8,
        &&label_80C5EFEC,
        &&label_80C5EFF0,
        &&label_80C5EFF4,
        &&label_80C5EFF8,
        &&label_80C5EFFC,
        &&label_80C5F000,
        &&label_80C5F004,
        &&label_80C5F008,
        &&label_80C5F00C,
        &&label_80C5F010,
        &&label_80C5F014,
        &&label_80C5F018,
        &&label_80C5F01C,
        &&label_80C5F020,
        &&label_80C5F024,
        &&label_80C5F028,
        &&label_80C5F02C,
        &&label_80C5F030,
        &&label_80C5F034,
        &&label_80C5F038,
        &&label_80C5F03C,
        &&label_80C5F040,
        &&label_80C5F044,
        &&label_80C5F048,
        &&label_80C5F04C,
        &&label_80C5F050,
        &&label_80C5F054,
        &&label_80C5F058,
        &&label_80C5F05C,
        &&label_80C5F060,
        &&label_80C5F064,
        &&label_80C5F068,
        &&label_80C5F06C,
        &&label_80C5F070,
        &&label_80C5F074,
        &&label_80C5F078,
        &&label_80C5F07C,
        &&label_80C5F080,
        &&label_80C5F084,
        &&label_80C5F088,
        &&label_80C5F08C,
        &&label_80C5F090,
        &&label_80C5F094,
        &&label_80C5F098,
        &&label_80C5F09C,
        &&label_80C5F0A0,
        &&label_80C5F0A4,
        &&label_80C5F0A8,
        &&label_80C5F0AC,
        &&label_80C5F0B0,
        &&label_80C5F0B4,
        &&label_80C5F0B8,
        &&label_80C5F0BC,
        &&label_80C5F0C0,
        &&label_80C5F0C4,
        &&label_80C5F0C8,
        &&label_80C5F0CC,
        &&label_80C5F0D0,
        &&label_80C5F0D4,
        &&label_80C5F0D8,
        &&label_80C5F0DC,
        &&label_80C5F0E0,
        &&label_80C5F0E4,
        &&label_80C5F0E8,
        &&label_80C5F0EC,
        &&label_80C5F0F0,
        &&label_80C5F0F4,
        &&label_80C5F0F8,
        &&label_80C5F0FC,
        &&label_80C5F100,
        &&label_80C5F104,
        &&label_80C5F108,
        &&label_80C5F10C,
        &&label_80C5F110,
        &&label_80C5F114,
        &&label_80C5F118,
        &&label_80C5F11C,
        &&label_80C5F120,
        &&label_80C5F124,
        &&label_80C5F128,
        &&label_80C5F12C,
        &&label_80C5F130,
        &&label_80C5F134,
        &&label_80C5F138,
        &&label_80C5F13C,
        &&label_80C5F140,
        &&label_80C5F144,
        &&label_80C5F148,
        &&label_80C5F14C,
        &&label_80C5F150,
        &&label_80C5F154,
        &&label_80C5F158,
        &&label_80C5F15C,
        &&label_80C5F160,
        &&label_80C5F164,
        &&label_80C5F168,
        &&label_80C5F16C,
        &&label_80C5F170,
        &&label_80C5F174,
        &&label_80C5F178,
        &&label_80C5F17C,
        &&label_80C5F180,
        &&label_80C5F184,
        &&label_80C5F188,
        &&label_80C5F18C,
        &&label_80C5F190,
        &&label_80C5F194,
        &&label_80C5F198,
        &&label_80C5F19C,
        &&label_80C5F1A0,
        &&label_80C5F1A4,
        &&label_80C5F1A8,
        &&label_80C5F1AC,
        &&label_80C5F1B0,
        &&label_80C5F1B4,
        &&label_80C5F1B8,
        &&label_80C5F1BC,
        &&label_80C5F1C0,
        &&label_80C5F1C4,
        &&label_80C5F1C8,
        &&label_80C5F1CC,
        &&label_80C5F1D0,
        &&label_80C5F1D4,
        &&label_80C5F1D8,
        &&label_80C5F1DC,
        &&label_80C5F1E0,
        &&label_80C5F1E4,
        &&label_80C5F1E8,
        &&label_80C5F1EC,
        &&label_80C5F1F0,
        &&label_80C5F1F4,
        &&label_80C5F1F8,
        &&label_80C5F1FC,
        &&label_80C5F200,
        &&label_80C5F204,
        &&label_80C5F208,
        &&label_80C5F20C,
        &&label_80C5F210,
        &&label_80C5F214,
        &&label_80C5F218,
        &&label_80C5F21C,
        &&label_80C5F220,
        &&label_80C5F224,
        &&label_80C5F228,
        &&label_80C5F22C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C5E2A0u && pc <= 0x80C5F22Cu && ((pc - 0x80C5E2A0u) & 3u) == 0u)
            goto *pc_table_80C5E2A0[(pc - 0x80C5E2A0u) >> 2];
    }
    return;
label_80C5E2A0:
    ctx->pc = 0x80C5E2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5E2A0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2A4:
    ctx->pc = 0x80C5E2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E2A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2A8:
    ctx->pc = 0x80C5E2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E2A8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2AC:
    ctx->pc = 0x80C5E2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5E2AC: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5E2ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2B0:
    ctx->pc = 0x80C5E2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E2B0: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5E2B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C5E2B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2B4:
    ctx->pc = 0x80C5E2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E2B4: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5E2B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2B8:
    ctx->pc = 0x80C5E2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E2B8: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5E2B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C5E2B8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E2BC:
    ctx->pc = 0x80C5E2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2BCu)) return;
    // 80C5E2BC: cmpwi   r3, 2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5E2C0:
    ctx->pc = 0x80C5E2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2C0u)) return;
    // 80C5E2C0: bc    12, 2, 0x80C5EE70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5EE70;
        }
    }

label_80C5E2C4:
    ctx->pc = 0x80C5E2C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E2C4: bc    4, 0, 0x80C5E2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5E2D8;
        }
    }

label_80C5E2C8:
    ctx->pc = 0x80C5E2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E2C8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5E2CC:
    ctx->pc = 0x80C5E2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2CCu)) return;
    // 80C5E2CC: bc    12, 2, 0x80C5EEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5EEF4;
        }
    }

label_80C5E2D0:
    ctx->pc = 0x80C5E2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E2D0: bc    4, 0, 0x80C5E2E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5E2E0;
        }
    }

label_80C5E2D4:
    ctx->pc = 0x80C5E2D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E2D4: b       0x80C5EEF4
    {
            goto label_80C5EEF4;
    }

label_80C5E2D8:
    ctx->pc = 0x80C5E2D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E2D8: cmpwi   r3, 4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5E2DC:
    ctx->pc = 0x80C5E2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2DCu)) return;
    // 80C5E2DC: b       0x80C5EEF4
    {
            goto label_80C5EEF4;
    }

label_80C5E2E0:
    ctx->pc = 0x80C5E2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E2E0: bl      0x8045DE7C
    {
            ctx->lr = 0x80C5E2E4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C5E2E4:
    ctx->pc = 0x80C5E2E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E2E4: bl      0x80460A60
    {
            ctx->lr = 0x80C5E2E8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C5E2E8:
    ctx->pc = 0x80C5E2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E2E8: bl      0x80460A24
    {
            ctx->lr = 0x80C5E2ECu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C5E2EC:
    ctx->pc = 0x80C5E2ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E2EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5E2F0:
    ctx->pc = 0x80C5E2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2F0u)) return;
    // 80C5E2F0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5E2F4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5E2F4:
    ctx->pc = 0x80C5E2F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E2F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E2F8:
    ctx->pc = 0x80C5E2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E2F8u)) return;
    // 80C5E2F8: bl      0x8045EC10
    {
            ctx->lr = 0x80C5E2FCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C5E2FC:
    ctx->pc = 0x80C5E2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E2FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E300:
    ctx->pc = 0x80C5E300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E300u)) return;
    // 80C5E300: bl      0x8045F220
    {
            ctx->lr = 0x80C5E304u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E304:
    ctx->pc = 0x80C5E304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C5E304: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E308:
    ctx->pc = 0x80C5E308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E308u)) return;
    // 80C5E308: addi    r4, r4, 9200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9200);

label_80C5E30C:
    ctx->pc = 0x80C5E30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E30Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E30C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E30Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E310:
    ctx->pc = 0x80C5E310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E310u)) return;
    // 80C5E310: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E314:
    ctx->pc = 0x80C5E314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E314u)) return;
    // 80C5E314: addi    r4, r4, 9204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9204);

label_80C5E318:
    ctx->pc = 0x80C5E318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E318: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E318u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E31C:
    ctx->pc = 0x80C5E31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E31Cu)) return;
    // 80C5E31C: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E320:
    ctx->pc = 0x80C5E320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E320u)) return;
    // 80C5E320: addi    r4, r4, 9208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9208);

label_80C5E324:
    ctx->pc = 0x80C5E324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5E324: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E324u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E328:
    ctx->pc = 0x80C5E328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E328u)) return;
    // 80C5E328: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E32Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E32C:
    ctx->pc = 0x80C5E32Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E32Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E32C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E330:
    ctx->pc = 0x80C5E330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E330u)) return;
    // 80C5E330: bl      0x8045F220
    {
            ctx->lr = 0x80C5E334u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E334:
    ctx->pc = 0x80C5E334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5E334: li      r4, 791
    ctx->gpr[4] = (u32)(s32)(791);

label_80C5E338:
    ctx->pc = 0x80C5E338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E338u)) return;
    // 80C5E338: li      r5, 32525
    ctx->gpr[5] = (u32)(s32)(32525);

label_80C5E33C:
    ctx->pc = 0x80C5E33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E33Cu)) return;
    // 80C5E33C: li      r6, 281
    ctx->gpr[6] = (u32)(s32)(281);

label_80C5E340:
    ctx->pc = 0x80C5E340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E340u)) return;
    // 80C5E340: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E344u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E344:
    ctx->pc = 0x80C5E344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E348:
    ctx->pc = 0x80C5E348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E348u)) return;
    // 80C5E348: bl      0x8045F220
    {
            ctx->lr = 0x80C5E34Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E34C:
    ctx->pc = 0x80C5E34Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C5E34C: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E350:
    ctx->pc = 0x80C5E350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E350u)) return;
    // 80C5E350: addi    r4, r4, 9200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9200);

label_80C5E354:
    ctx->pc = 0x80C5E354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E354: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E354u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E358:
    ctx->pc = 0x80C5E358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E358u)) return;
    // 80C5E358: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E35C:
    ctx->pc = 0x80C5E35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E35Cu)) return;
    // 80C5E35C: addi    r4, r4, 9212
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9212);

label_80C5E360:
    ctx->pc = 0x80C5E360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E360: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E360u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E364:
    ctx->pc = 0x80C5E364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E364u)) return;
    // 80C5E364: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E368:
    ctx->pc = 0x80C5E368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E368u)) return;
    // 80C5E368: addi    r4, r4, 9216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9216);

label_80C5E36C:
    ctx->pc = 0x80C5E36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5E36C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E36Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E370:
    ctx->pc = 0x80C5E370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E370u)) return;
    // 80C5E370: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E374u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E374:
    ctx->pc = 0x80C5E374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E378:
    ctx->pc = 0x80C5E378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E378u)) return;
    // 80C5E378: bl      0x8045F220
    {
            ctx->lr = 0x80C5E37Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E37C:
    ctx->pc = 0x80C5E37Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E37Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5E37C: li      r4, 457
    ctx->gpr[4] = (u32)(s32)(457);

label_80C5E380:
    ctx->pc = 0x80C5E380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E380u)) return;
    // 80C5E380: li      r5, 32525
    ctx->gpr[5] = (u32)(s32)(32525);

label_80C5E384:
    ctx->pc = 0x80C5E384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E384u)) return;
    // 80C5E384: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E388:
    ctx->pc = 0x80C5E388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E388u)) return;
    // 80C5E388: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E38Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E38C:
    ctx->pc = 0x80C5E38Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E38Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5E38C: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E390:
    ctx->pc = 0x80C5E390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E390u)) return;
    // 80C5E390: addi    r3, r3, -26784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26784);

label_80C5E394:
    ctx->pc = 0x80C5E394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E394u)) return;
    // 80C5E394: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E398:
    ctx->pc = 0x80C5E398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E398u)) return;
    // 80C5E398: addi    r4, r4, 9220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9220);

label_80C5E39C:
    ctx->pc = 0x80C5E39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E39C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E39Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E3A0:
    ctx->pc = 0x80C5E3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3A0u)) return;
    // 80C5E3A0: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E3A4:
    ctx->pc = 0x80C5E3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3A4u)) return;
    // 80C5E3A4: addi    r4, r4, 9224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9224);

label_80C5E3A8:
    ctx->pc = 0x80C5E3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E3A8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E3A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E3AC:
    ctx->pc = 0x80C5E3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3ACu)) return;
    // 80C5E3AC: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E3B0:
    ctx->pc = 0x80C5E3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3B0u)) return;
    // 80C5E3B0: addi    r4, r4, 9228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9228);

label_80C5E3B4:
    ctx->pc = 0x80C5E3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E3B4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E3B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E3B8:
    ctx->pc = 0x80C5E3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3B8u)) return;
    // 80C5E3B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E3BC:
    ctx->pc = 0x80C5E3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3BCu)) return;
    // 80C5E3BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E3C0:
    ctx->pc = 0x80C5E3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3C0u)) return;
    // 80C5E3C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E3C4:
    ctx->pc = 0x80C5E3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3C4u)) return;
    // 80C5E3C4: bl      0x8045F170
    {
            ctx->lr = 0x80C5E3C8u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C5E3C8:
    ctx->pc = 0x80C5E3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5E3C8: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E3CC:
    ctx->pc = 0x80C5E3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3CCu)) return;
    // 80C5E3CC: addi    r3, r3, -26780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26780);

label_80C5E3D0:
    ctx->pc = 0x80C5E3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3D0u)) return;
    // 80C5E3D0: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E3D4:
    ctx->pc = 0x80C5E3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3D4u)) return;
    // 80C5E3D4: addi    r4, r4, 9220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9220);

label_80C5E3D8:
    ctx->pc = 0x80C5E3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E3D8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E3D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E3DC:
    ctx->pc = 0x80C5E3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3DCu)) return;
    // 80C5E3DC: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E3E0:
    ctx->pc = 0x80C5E3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3E0u)) return;
    // 80C5E3E0: addi    r4, r4, 9224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9224);

label_80C5E3E4:
    ctx->pc = 0x80C5E3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E3E4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E3E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E3E8:
    ctx->pc = 0x80C5E3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3E8u)) return;
    // 80C5E3E8: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E3EC:
    ctx->pc = 0x80C5E3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3ECu)) return;
    // 80C5E3EC: addi    r4, r4, 9228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9228);

label_80C5E3F0:
    ctx->pc = 0x80C5E3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E3F0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E3F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E3F4:
    ctx->pc = 0x80C5E3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3F4u)) return;
    // 80C5E3F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E3F8:
    ctx->pc = 0x80C5E3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3F8u)) return;
    // 80C5E3F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E3FC:
    ctx->pc = 0x80C5E3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E3FCu)) return;
    // 80C5E3FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E400:
    ctx->pc = 0x80C5E400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E400u)) return;
    // 80C5E400: bl      0x8045F170
    {
            ctx->lr = 0x80C5E404u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C5E404:
    ctx->pc = 0x80C5E404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5E404: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E408:
    ctx->pc = 0x80C5E408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E408u)) return;
    // 80C5E408: addi    r3, r3, -26776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26776);

label_80C5E40C:
    ctx->pc = 0x80C5E40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E40Cu)) return;
    // 80C5E40C: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E410:
    ctx->pc = 0x80C5E410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E410u)) return;
    // 80C5E410: addi    r4, r4, 9220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9220);

label_80C5E414:
    ctx->pc = 0x80C5E414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E414: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E414u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E418:
    ctx->pc = 0x80C5E418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E418u)) return;
    // 80C5E418: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E41C:
    ctx->pc = 0x80C5E41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E41Cu)) return;
    // 80C5E41C: addi    r4, r4, 9224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9224);

label_80C5E420:
    ctx->pc = 0x80C5E420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E420: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E420u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E424:
    ctx->pc = 0x80C5E424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E424u)) return;
    // 80C5E424: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E428:
    ctx->pc = 0x80C5E428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E428u)) return;
    // 80C5E428: addi    r4, r4, 9228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9228);

label_80C5E42C:
    ctx->pc = 0x80C5E42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E42C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E42Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E430:
    ctx->pc = 0x80C5E430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E430u)) return;
    // 80C5E430: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E434:
    ctx->pc = 0x80C5E434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E434u)) return;
    // 80C5E434: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E438:
    ctx->pc = 0x80C5E438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E438u)) return;
    // 80C5E438: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E43C:
    ctx->pc = 0x80C5E43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E43Cu)) return;
    // 80C5E43C: bl      0x8045F170
    {
            ctx->lr = 0x80C5E440u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C5E440:
    ctx->pc = 0x80C5E440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5E440: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E444:
    ctx->pc = 0x80C5E444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E444u)) return;
    // 80C5E444: addi    r3, r3, -26772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26772);

label_80C5E448:
    ctx->pc = 0x80C5E448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E448u)) return;
    // 80C5E448: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E44C:
    ctx->pc = 0x80C5E44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E44Cu)) return;
    // 80C5E44C: addi    r4, r4, 9220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9220);

label_80C5E450:
    ctx->pc = 0x80C5E450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E450: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E450u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E454:
    ctx->pc = 0x80C5E454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E454u)) return;
    // 80C5E454: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E458:
    ctx->pc = 0x80C5E458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E458u)) return;
    // 80C5E458: addi    r4, r4, 9224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9224);

label_80C5E45C:
    ctx->pc = 0x80C5E45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E45Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E45C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E45Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E460:
    ctx->pc = 0x80C5E460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E460u)) return;
    // 80C5E460: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E464:
    ctx->pc = 0x80C5E464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E464u)) return;
    // 80C5E464: addi    r4, r4, 9228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9228);

label_80C5E468:
    ctx->pc = 0x80C5E468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E468: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E468u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E46C:
    ctx->pc = 0x80C5E46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E46Cu)) return;
    // 80C5E46C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E470:
    ctx->pc = 0x80C5E470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E470u)) return;
    // 80C5E470: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E474:
    ctx->pc = 0x80C5E474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E474u)) return;
    // 80C5E474: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E478:
    ctx->pc = 0x80C5E478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E478u)) return;
    // 80C5E478: bl      0x8045F170
    {
            ctx->lr = 0x80C5E47Cu;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C5E47C:
    ctx->pc = 0x80C5E47Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E47Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5E47C: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E480:
    ctx->pc = 0x80C5E480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E480u)) return;
    // 80C5E480: addi    r3, r3, -26768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26768);

label_80C5E484:
    ctx->pc = 0x80C5E484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E484u)) return;
    // 80C5E484: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E488:
    ctx->pc = 0x80C5E488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E488u)) return;
    // 80C5E488: addi    r4, r4, 9220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9220);

label_80C5E48C:
    ctx->pc = 0x80C5E48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E48C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E48Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E490:
    ctx->pc = 0x80C5E490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E490u)) return;
    // 80C5E490: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E494:
    ctx->pc = 0x80C5E494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E494u)) return;
    // 80C5E494: addi    r4, r4, 9224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9224);

label_80C5E498:
    ctx->pc = 0x80C5E498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E498: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E498u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E49C:
    ctx->pc = 0x80C5E49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E49Cu)) return;
    // 80C5E49C: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E4A0:
    ctx->pc = 0x80C5E4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4A0u)) return;
    // 80C5E4A0: addi    r4, r4, 9228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9228);

label_80C5E4A4:
    ctx->pc = 0x80C5E4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E4A4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E4A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E4A8:
    ctx->pc = 0x80C5E4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4A8u)) return;
    // 80C5E4A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E4AC:
    ctx->pc = 0x80C5E4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4ACu)) return;
    // 80C5E4AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E4B0:
    ctx->pc = 0x80C5E4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4B0u)) return;
    // 80C5E4B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E4B4:
    ctx->pc = 0x80C5E4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4B4u)) return;
    // 80C5E4B4: bl      0x8045F170
    {
            ctx->lr = 0x80C5E4B8u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C5E4B8:
    ctx->pc = 0x80C5E4B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E4B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80C5E4B8: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E4BC:
    ctx->pc = 0x80C5E4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4BCu)) return;
    // 80C5E4BC: addi    r3, r3, -26764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26764);

label_80C5E4C0:
    ctx->pc = 0x80C5E4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4C0u)) return;
    // 80C5E4C0: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E4C4:
    ctx->pc = 0x80C5E4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4C4u)) return;
    // 80C5E4C4: addi    r4, r4, 9220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9220);

label_80C5E4C8:
    ctx->pc = 0x80C5E4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E4C8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E4C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E4CC:
    ctx->pc = 0x80C5E4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4CCu)) return;
    // 80C5E4CC: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E4D0:
    ctx->pc = 0x80C5E4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4D0u)) return;
    // 80C5E4D0: addi    r4, r4, 9224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9224);

label_80C5E4D4:
    ctx->pc = 0x80C5E4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E4D4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E4D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E4D8:
    ctx->pc = 0x80C5E4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4D8u)) return;
    // 80C5E4D8: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E4DC:
    ctx->pc = 0x80C5E4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4DCu)) return;
    // 80C5E4DC: addi    r4, r4, 9228
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9228);

label_80C5E4E0:
    ctx->pc = 0x80C5E4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E4E0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E4E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E4E4:
    ctx->pc = 0x80C5E4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4E4u)) return;
    // 80C5E4E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E4E8:
    ctx->pc = 0x80C5E4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4E8u)) return;
    // 80C5E4E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E4EC:
    ctx->pc = 0x80C5E4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4ECu)) return;
    // 80C5E4EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E4F0:
    ctx->pc = 0x80C5E4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4F0u)) return;
    // 80C5E4F0: bl      0x8045F170
    {
            ctx->lr = 0x80C5E4F4u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C5E4F4:
    ctx->pc = 0x80C5E4F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E4F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E4F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5E4F8:
    ctx->pc = 0x80C5E4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E4F8u)) return;
    // 80C5E4F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5E4FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5E4FC:
    ctx->pc = 0x80C5E4FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E4FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E4FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E500:
    ctx->pc = 0x80C5E500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E500u)) return;
    // 80C5E500: bl      0x8045F220
    {
            ctx->lr = 0x80C5E504u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E504:
    ctx->pc = 0x80C5E504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5E504: bl      0x8045EB8C
    {
            ctx->lr = 0x80C5E508u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C5E508:
    ctx->pc = 0x80C5E508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E508: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E50C:
    ctx->pc = 0x80C5E50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E50Cu)) return;
    // 80C5E50C: bl      0x8045F220
    {
            ctx->lr = 0x80C5E510u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E510:
    ctx->pc = 0x80C5E510u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E510u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C5E510: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C5E514:
    ctx->pc = 0x80C5E514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E514u)) return;
    // 80C5E514: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C5E518:
    ctx->pc = 0x80C5E518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E518u)) return;
    // 80C5E518: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C5E51C:
    ctx->pc = 0x80C5E51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E51Cu)) return;
    // 80C5E51C: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C5E520:
    ctx->pc = 0x80C5E520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E520u)) return;
    // 80C5E520: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5E524:
    ctx->pc = 0x80C5E524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E524u)) return;
    // 80C5E524: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5E528:
    ctx->pc = 0x80C5E528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E528: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5E528u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E52C:
    ctx->pc = 0x80C5E52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E52Cu)) return;
    // 80C5E52C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5E530:
    ctx->pc = 0x80C5E530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E530u)) return;
    // 80C5E530: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C5E534:
    ctx->pc = 0x80C5E534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E534u)) return;
    // 80C5E534: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5E538u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5E538:
    ctx->pc = 0x80C5E538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5E538: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E53C:
    ctx->pc = 0x80C5E53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E53Cu)) return;
    // 80C5E53C: addi    r3, r3, -26784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26784);

label_80C5E540:
    ctx->pc = 0x80C5E540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E540: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E544:
    ctx->pc = 0x80C5E544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E544u)) return;
    // 80C5E544: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E548:
    ctx->pc = 0x80C5E548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E548u)) return;
    // 80C5E548: bl      0x8045EE90
    {
            ctx->lr = 0x80C5E54Cu;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C5E54C:
    ctx->pc = 0x80C5E54Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E54Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5E54C: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E550:
    ctx->pc = 0x80C5E550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E550u)) return;
    // 80C5E550: addi    r3, r3, -26780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26780);

label_80C5E554:
    ctx->pc = 0x80C5E554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E554: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E558:
    ctx->pc = 0x80C5E558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E558u)) return;
    // 80C5E558: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E55C:
    ctx->pc = 0x80C5E55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E55Cu)) return;
    // 80C5E55C: bl      0x8045EE90
    {
            ctx->lr = 0x80C5E560u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C5E560:
    ctx->pc = 0x80C5E560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5E560: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E564:
    ctx->pc = 0x80C5E564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E564u)) return;
    // 80C5E564: addi    r3, r3, -26776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26776);

label_80C5E568:
    ctx->pc = 0x80C5E568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E568: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E56C:
    ctx->pc = 0x80C5E56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E56Cu)) return;
    // 80C5E56C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E570:
    ctx->pc = 0x80C5E570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E570u)) return;
    // 80C5E570: bl      0x8045EE90
    {
            ctx->lr = 0x80C5E574u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C5E574:
    ctx->pc = 0x80C5E574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5E574: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E578:
    ctx->pc = 0x80C5E578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E578u)) return;
    // 80C5E578: addi    r3, r3, -26772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26772);

label_80C5E57C:
    ctx->pc = 0x80C5E57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E57C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E580:
    ctx->pc = 0x80C5E580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E580u)) return;
    // 80C5E580: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E584:
    ctx->pc = 0x80C5E584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E584u)) return;
    // 80C5E584: bl      0x8045EE90
    {
            ctx->lr = 0x80C5E588u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C5E588:
    ctx->pc = 0x80C5E588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5E588: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E58C:
    ctx->pc = 0x80C5E58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E58Cu)) return;
    // 80C5E58C: addi    r3, r3, -26768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26768);

label_80C5E590:
    ctx->pc = 0x80C5E590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E590: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E594:
    ctx->pc = 0x80C5E594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E594u)) return;
    // 80C5E594: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E598:
    ctx->pc = 0x80C5E598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E598u)) return;
    // 80C5E598: bl      0x8045EE90
    {
            ctx->lr = 0x80C5E59Cu;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C5E59C:
    ctx->pc = 0x80C5E59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5E59C: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E5A0:
    ctx->pc = 0x80C5E5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5A0u)) return;
    // 80C5E5A0: addi    r3, r3, -26764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26764);

label_80C5E5A4:
    ctx->pc = 0x80C5E5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5E5A4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5A8:
    ctx->pc = 0x80C5E5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5A8u)) return;
    // 80C5E5A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E5AC:
    ctx->pc = 0x80C5E5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5ACu)) return;
    // 80C5E5AC: bl      0x8045EE90
    {
            ctx->lr = 0x80C5E5B0u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C5E5B0:
    ctx->pc = 0x80C5E5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E5B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E5B4:
    ctx->pc = 0x80C5E5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5B4u)) return;
    // 80C5E5B4: bl      0x8045F220
    {
            ctx->lr = 0x80C5E5B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E5B8:
    ctx->pc = 0x80C5E5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E5B8: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5BC:
    ctx->pc = 0x80C5E5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E5BC: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E5BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5C0:
    ctx->pc = 0x80C5E5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5C0u)) return;
    // 80C5E5C0: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E5C4:
    ctx->pc = 0x80C5E5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5C4u)) return;
    // 80C5E5C4: addi    r3, r3, 9240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9240);

label_80C5E5C8:
    ctx->pc = 0x80C5E5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E5C8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E5C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5CC:
    ctx->pc = 0x80C5E5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5CCu)) return;
    // 80C5E5CC: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E5CCu)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80C5E5D0:
    ctx->pc = 0x80C5E5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5D0u)) return;
    // 80C5E5D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E5D4:
    ctx->pc = 0x80C5E5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5D4u)) return;
    // 80C5E5D4: bl      0x8045F220
    {
            ctx->lr = 0x80C5E5D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E5D8:
    ctx->pc = 0x80C5E5D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E5D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E5D8: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5DC:
    ctx->pc = 0x80C5E5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E5DC: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E5DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5E0:
    ctx->pc = 0x80C5E5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5E0u)) return;
    // 80C5E5E0: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E5E4:
    ctx->pc = 0x80C5E5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5E4u)) return;
    // 80C5E5E4: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E5E8:
    ctx->pc = 0x80C5E5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E5E8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E5E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5EC:
    ctx->pc = 0x80C5E5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5ECu)) return;
    // 80C5E5EC: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E5ECu)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C5E5F0:
    ctx->pc = 0x80C5E5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5F0u)) return;
    // 80C5E5F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E5F4:
    ctx->pc = 0x80C5E5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5F4u)) return;
    // 80C5E5F4: bl      0x8045F220
    {
            ctx->lr = 0x80C5E5F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E5F8:
    ctx->pc = 0x80C5E5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E5F8: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E5FC:
    ctx->pc = 0x80C5E5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E5FCu)) return;
    // 80C5E5FC: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E600:
    ctx->pc = 0x80C5E600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E600u)) return;
    // 80C5E600: addi    r3, r3, -26784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26784);

label_80C5E604:
    ctx->pc = 0x80C5E604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E604: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E608:
    ctx->pc = 0x80C5E608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E608: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5E608u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E60C:
    ctx->pc = 0x80C5E60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E60Cu)) return;
    // 80C5E60C: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5E60Cu)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80C5E610:
    ctx->pc = 0x80C5E610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E610u)) return;
    // 80C5E610: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5E610u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80C5E614:
    ctx->pc = 0x80C5E614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E614u)) return;
    // 80C5E614: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E618u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E618:
    ctx->pc = 0x80C5E618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5E618: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E61C:
    ctx->pc = 0x80C5E61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E61Cu)) return;
    // 80C5E61C: addi    r3, r3, -26784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26784);

label_80C5E620:
    ctx->pc = 0x80C5E620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E620: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E624:
    ctx->pc = 0x80C5E624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E624u)) return;
    // 80C5E624: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E628:
    ctx->pc = 0x80C5E628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E628u)) return;
    // 80C5E628: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E62C:
    ctx->pc = 0x80C5E62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E62Cu)) return;
    // 80C5E62C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E630:
    ctx->pc = 0x80C5E630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E630u)) return;
    // 80C5E630: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E634u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E634:
    ctx->pc = 0x80C5E634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E634: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E638:
    ctx->pc = 0x80C5E638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E638u)) return;
    // 80C5E638: bl      0x8045F220
    {
            ctx->lr = 0x80C5E63Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E63C:
    ctx->pc = 0x80C5E63Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E63Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E63C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E640:
    ctx->pc = 0x80C5E640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E640: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E640u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E644:
    ctx->pc = 0x80C5E644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E644u)) return;
    // 80C5E644: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E648:
    ctx->pc = 0x80C5E648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E648u)) return;
    // 80C5E648: addi    r3, r3, 9244
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9244);

label_80C5E64C:
    ctx->pc = 0x80C5E64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E64C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E64Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E650:
    ctx->pc = 0x80C5E650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E650u)) return;
    // 80C5E650: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E650u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80C5E654:
    ctx->pc = 0x80C5E654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E654u)) return;
    // 80C5E654: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E658:
    ctx->pc = 0x80C5E658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E658u)) return;
    // 80C5E658: bl      0x8045F220
    {
            ctx->lr = 0x80C5E65Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E65C:
    ctx->pc = 0x80C5E65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E65C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E660:
    ctx->pc = 0x80C5E660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E660: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E660u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E664:
    ctx->pc = 0x80C5E664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E664u)) return;
    // 80C5E664: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E668:
    ctx->pc = 0x80C5E668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E668u)) return;
    // 80C5E668: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E66C:
    ctx->pc = 0x80C5E66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E66C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E66Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E670:
    ctx->pc = 0x80C5E670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E670u)) return;
    // 80C5E670: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E670u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C5E674:
    ctx->pc = 0x80C5E674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E674u)) return;
    // 80C5E674: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E678:
    ctx->pc = 0x80C5E678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E678u)) return;
    // 80C5E678: bl      0x8045F220
    {
            ctx->lr = 0x80C5E67Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E67C:
    ctx->pc = 0x80C5E67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5E67C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E680:
    ctx->pc = 0x80C5E680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E680: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E680u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E684:
    ctx->pc = 0x80C5E684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E684u)) return;
    // 80C5E684: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E688:
    ctx->pc = 0x80C5E688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E688u)) return;
    // 80C5E688: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E68C:
    ctx->pc = 0x80C5E68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E68C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E68Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E690:
    ctx->pc = 0x80C5E690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E690u)) return;
    // 80C5E690: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E690u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80C5E694:
    ctx->pc = 0x80C5E694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E694u)) return;
    // 80C5E694: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E698:
    ctx->pc = 0x80C5E698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E698u)) return;
    // 80C5E698: addi    r3, r3, -26780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26780);

label_80C5E69C:
    ctx->pc = 0x80C5E69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E69C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6A0:
    ctx->pc = 0x80C5E6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6A0u)) return;
    // 80C5E6A0: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5E6A0u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80C5E6A4:
    ctx->pc = 0x80C5E6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6A4u)) return;
    // 80C5E6A4: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5E6A4u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80C5E6A8:
    ctx->pc = 0x80C5E6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6A8u)) return;
    // 80C5E6A8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E6ACu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E6AC:
    ctx->pc = 0x80C5E6ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E6ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5E6AC: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E6B0:
    ctx->pc = 0x80C5E6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6B0u)) return;
    // 80C5E6B0: addi    r3, r3, -26780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26780);

label_80C5E6B4:
    ctx->pc = 0x80C5E6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E6B4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6B8:
    ctx->pc = 0x80C5E6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6B8u)) return;
    // 80C5E6B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E6BC:
    ctx->pc = 0x80C5E6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6BCu)) return;
    // 80C5E6BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E6C0:
    ctx->pc = 0x80C5E6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6C0u)) return;
    // 80C5E6C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E6C4:
    ctx->pc = 0x80C5E6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6C4u)) return;
    // 80C5E6C4: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E6C8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E6C8:
    ctx->pc = 0x80C5E6C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E6C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E6C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E6CC:
    ctx->pc = 0x80C5E6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6CCu)) return;
    // 80C5E6CC: bl      0x8045F220
    {
            ctx->lr = 0x80C5E6D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E6D0:
    ctx->pc = 0x80C5E6D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E6D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E6D0: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6D4:
    ctx->pc = 0x80C5E6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E6D4: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E6D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6D8:
    ctx->pc = 0x80C5E6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6D8u)) return;
    // 80C5E6D8: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E6DC:
    ctx->pc = 0x80C5E6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6DCu)) return;
    // 80C5E6DC: addi    r3, r3, 9252
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9252);

label_80C5E6E0:
    ctx->pc = 0x80C5E6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E6E0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E6E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6E4:
    ctx->pc = 0x80C5E6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6E4u)) return;
    // 80C5E6E4: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E6E4u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80C5E6E8:
    ctx->pc = 0x80C5E6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6E8u)) return;
    // 80C5E6E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E6EC:
    ctx->pc = 0x80C5E6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6ECu)) return;
    // 80C5E6EC: bl      0x8045F220
    {
            ctx->lr = 0x80C5E6F0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E6F0:
    ctx->pc = 0x80C5E6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E6F0: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6F4:
    ctx->pc = 0x80C5E6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E6F4: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E6F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E6F8:
    ctx->pc = 0x80C5E6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6F8u)) return;
    // 80C5E6F8: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E6FC:
    ctx->pc = 0x80C5E6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E6FCu)) return;
    // 80C5E6FC: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E700:
    ctx->pc = 0x80C5E700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E700: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E700u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E704:
    ctx->pc = 0x80C5E704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E704u)) return;
    // 80C5E704: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E704u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C5E708:
    ctx->pc = 0x80C5E708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E708u)) return;
    // 80C5E708: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E70C:
    ctx->pc = 0x80C5E70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E70Cu)) return;
    // 80C5E70C: bl      0x8045F220
    {
            ctx->lr = 0x80C5E710u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E710:
    ctx->pc = 0x80C5E710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5E710: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E714:
    ctx->pc = 0x80C5E714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E714: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E714u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E718:
    ctx->pc = 0x80C5E718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E718u)) return;
    // 80C5E718: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E71C:
    ctx->pc = 0x80C5E71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E71Cu)) return;
    // 80C5E71C: addi    r3, r3, 9248
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9248);

label_80C5E720:
    ctx->pc = 0x80C5E720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E720: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E720u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E724:
    ctx->pc = 0x80C5E724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E724u)) return;
    // 80C5E724: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E724u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80C5E728:
    ctx->pc = 0x80C5E728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E728u)) return;
    // 80C5E728: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E72C:
    ctx->pc = 0x80C5E72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E72Cu)) return;
    // 80C5E72C: addi    r3, r3, -26776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26776);

label_80C5E730:
    ctx->pc = 0x80C5E730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E730: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E734:
    ctx->pc = 0x80C5E734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E734u)) return;
    // 80C5E734: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5E734u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80C5E738:
    ctx->pc = 0x80C5E738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E738u)) return;
    // 80C5E738: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5E738u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80C5E73C:
    ctx->pc = 0x80C5E73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E73Cu)) return;
    // 80C5E73C: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E740u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E740:
    ctx->pc = 0x80C5E740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5E740: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E744:
    ctx->pc = 0x80C5E744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E744u)) return;
    // 80C5E744: addi    r3, r3, -26776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26776);

label_80C5E748:
    ctx->pc = 0x80C5E748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E748: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E74C:
    ctx->pc = 0x80C5E74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E74Cu)) return;
    // 80C5E74C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E750:
    ctx->pc = 0x80C5E750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E750u)) return;
    // 80C5E750: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E754:
    ctx->pc = 0x80C5E754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E754u)) return;
    // 80C5E754: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E758:
    ctx->pc = 0x80C5E758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E758u)) return;
    // 80C5E758: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E75Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E75C:
    ctx->pc = 0x80C5E75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E75C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E760:
    ctx->pc = 0x80C5E760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E760u)) return;
    // 80C5E760: bl      0x8045F220
    {
            ctx->lr = 0x80C5E764u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E764:
    ctx->pc = 0x80C5E764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E764: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E768:
    ctx->pc = 0x80C5E768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E768: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E768u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E76C:
    ctx->pc = 0x80C5E76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E76Cu)) return;
    // 80C5E76C: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E770:
    ctx->pc = 0x80C5E770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E770u)) return;
    // 80C5E770: addi    r3, r3, 9260
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9260);

label_80C5E774:
    ctx->pc = 0x80C5E774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E774: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E774u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E778:
    ctx->pc = 0x80C5E778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E778u)) return;
    // 80C5E778: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E778u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80C5E77C:
    ctx->pc = 0x80C5E77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E77Cu)) return;
    // 80C5E77C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E780:
    ctx->pc = 0x80C5E780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E780u)) return;
    // 80C5E780: bl      0x8045F220
    {
            ctx->lr = 0x80C5E784u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E784:
    ctx->pc = 0x80C5E784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E784: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E788:
    ctx->pc = 0x80C5E788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E788: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E788u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E78C:
    ctx->pc = 0x80C5E78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E78Cu)) return;
    // 80C5E78C: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E790:
    ctx->pc = 0x80C5E790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E790u)) return;
    // 80C5E790: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E794:
    ctx->pc = 0x80C5E794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E794: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E794u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E798:
    ctx->pc = 0x80C5E798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E798u)) return;
    // 80C5E798: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E798u)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C5E79C:
    ctx->pc = 0x80C5E79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E79Cu)) return;
    // 80C5E79C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E7A0:
    ctx->pc = 0x80C5E7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7A0u)) return;
    // 80C5E7A0: bl      0x8045F220
    {
            ctx->lr = 0x80C5E7A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E7A4:
    ctx->pc = 0x80C5E7A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E7A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5E7A4: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E7A8:
    ctx->pc = 0x80C5E7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E7A8: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E7A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E7AC:
    ctx->pc = 0x80C5E7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7ACu)) return;
    // 80C5E7AC: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E7B0:
    ctx->pc = 0x80C5E7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7B0u)) return;
    // 80C5E7B0: addi    r3, r3, 9256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9256);

label_80C5E7B4:
    ctx->pc = 0x80C5E7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E7B4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E7B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E7B8:
    ctx->pc = 0x80C5E7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7B8u)) return;
    // 80C5E7B8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E7B8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80C5E7BC:
    ctx->pc = 0x80C5E7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7BCu)) return;
    // 80C5E7BC: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E7C0:
    ctx->pc = 0x80C5E7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7C0u)) return;
    // 80C5E7C0: addi    r3, r3, -26772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26772);

label_80C5E7C4:
    ctx->pc = 0x80C5E7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E7C4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E7C8:
    ctx->pc = 0x80C5E7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7C8u)) return;
    // 80C5E7C8: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5E7C8u)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80C5E7CC:
    ctx->pc = 0x80C5E7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7CCu)) return;
    // 80C5E7CC: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5E7CCu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80C5E7D0:
    ctx->pc = 0x80C5E7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7D0u)) return;
    // 80C5E7D0: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E7D4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E7D4:
    ctx->pc = 0x80C5E7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5E7D4: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E7D8:
    ctx->pc = 0x80C5E7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7D8u)) return;
    // 80C5E7D8: addi    r3, r3, -26772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26772);

label_80C5E7DC:
    ctx->pc = 0x80C5E7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E7DC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E7E0:
    ctx->pc = 0x80C5E7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7E0u)) return;
    // 80C5E7E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E7E4:
    ctx->pc = 0x80C5E7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7E4u)) return;
    // 80C5E7E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E7E8:
    ctx->pc = 0x80C5E7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7E8u)) return;
    // 80C5E7E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E7EC:
    ctx->pc = 0x80C5E7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7ECu)) return;
    // 80C5E7EC: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E7F0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E7F0:
    ctx->pc = 0x80C5E7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E7F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E7F4:
    ctx->pc = 0x80C5E7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7F4u)) return;
    // 80C5E7F4: bl      0x8045F220
    {
            ctx->lr = 0x80C5E7F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E7F8:
    ctx->pc = 0x80C5E7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E7F8: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E7FC:
    ctx->pc = 0x80C5E7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E7FC: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E7FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E800:
    ctx->pc = 0x80C5E800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E800u)) return;
    // 80C5E800: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E804:
    ctx->pc = 0x80C5E804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E804u)) return;
    // 80C5E804: addi    r3, r3, 9264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9264);

label_80C5E808:
    ctx->pc = 0x80C5E808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E808: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E808u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E80C:
    ctx->pc = 0x80C5E80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E80Cu)) return;
    // 80C5E80C: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E80Cu)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80C5E810:
    ctx->pc = 0x80C5E810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E810u)) return;
    // 80C5E810: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E814:
    ctx->pc = 0x80C5E814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E814u)) return;
    // 80C5E814: bl      0x8045F220
    {
            ctx->lr = 0x80C5E818u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E818:
    ctx->pc = 0x80C5E818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E818: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E81C:
    ctx->pc = 0x80C5E81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E81C: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E81Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E820:
    ctx->pc = 0x80C5E820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E820u)) return;
    // 80C5E820: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E824:
    ctx->pc = 0x80C5E824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E824u)) return;
    // 80C5E824: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E828:
    ctx->pc = 0x80C5E828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E828: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E828u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E82C:
    ctx->pc = 0x80C5E82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E82Cu)) return;
    // 80C5E82C: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E82Cu)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C5E830:
    ctx->pc = 0x80C5E830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E830u)) return;
    // 80C5E830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E834:
    ctx->pc = 0x80C5E834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E834u)) return;
    // 80C5E834: bl      0x8045F220
    {
            ctx->lr = 0x80C5E838u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E838:
    ctx->pc = 0x80C5E838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5E838: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E83C:
    ctx->pc = 0x80C5E83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E83C: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E83Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E840:
    ctx->pc = 0x80C5E840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E840u)) return;
    // 80C5E840: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E844:
    ctx->pc = 0x80C5E844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E844u)) return;
    // 80C5E844: addi    r3, r3, 9256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9256);

label_80C5E848:
    ctx->pc = 0x80C5E848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E848: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E848u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E84C:
    ctx->pc = 0x80C5E84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E84Cu)) return;
    // 80C5E84C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E84Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80C5E850:
    ctx->pc = 0x80C5E850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E850u)) return;
    // 80C5E850: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E854:
    ctx->pc = 0x80C5E854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E854u)) return;
    // 80C5E854: addi    r3, r3, -26768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26768);

label_80C5E858:
    ctx->pc = 0x80C5E858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E858: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E85C:
    ctx->pc = 0x80C5E85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E85Cu)) return;
    // 80C5E85C: fmr    f2, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5E85Cu)) return;
    ctx->fpr[2] = ctx->fpr[30];

label_80C5E860:
    ctx->pc = 0x80C5E860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E860u)) return;
    // 80C5E860: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5E860u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80C5E864:
    ctx->pc = 0x80C5E864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E864u)) return;
    // 80C5E864: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E868u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E868:
    ctx->pc = 0x80C5E868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5E868: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E86C:
    ctx->pc = 0x80C5E86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E86Cu)) return;
    // 80C5E86C: addi    r3, r3, -26768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26768);

label_80C5E870:
    ctx->pc = 0x80C5E870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E870: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E874:
    ctx->pc = 0x80C5E874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E874u)) return;
    // 80C5E874: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E878:
    ctx->pc = 0x80C5E878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E878u)) return;
    // 80C5E878: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E87C:
    ctx->pc = 0x80C5E87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E87Cu)) return;
    // 80C5E87C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E880:
    ctx->pc = 0x80C5E880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E880u)) return;
    // 80C5E880: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E884u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E884:
    ctx->pc = 0x80C5E884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E884: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E888:
    ctx->pc = 0x80C5E888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E888u)) return;
    // 80C5E888: bl      0x8045F220
    {
            ctx->lr = 0x80C5E88Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E88C:
    ctx->pc = 0x80C5E88Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E88Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E88C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E890:
    ctx->pc = 0x80C5E890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E890: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E890u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E894:
    ctx->pc = 0x80C5E894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E894u)) return;
    // 80C5E894: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E898:
    ctx->pc = 0x80C5E898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E898u)) return;
    // 80C5E898: addi    r3, r3, 9272
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9272);

label_80C5E89C:
    ctx->pc = 0x80C5E89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E89C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E89Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8A0:
    ctx->pc = 0x80C5E8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8A0u)) return;
    // 80C5E8A0: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5E8A0u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_80C5E8A4:
    ctx->pc = 0x80C5E8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8A4u)) return;
    // 80C5E8A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E8A8:
    ctx->pc = 0x80C5E8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8A8u)) return;
    // 80C5E8A8: bl      0x8045F220
    {
            ctx->lr = 0x80C5E8ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E8AC:
    ctx->pc = 0x80C5E8ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E8ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E8AC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8B0:
    ctx->pc = 0x80C5E8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5E8B0: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E8B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8B4:
    ctx->pc = 0x80C5E8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8B4u)) return;
    // 80C5E8B4: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E8B8:
    ctx->pc = 0x80C5E8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8B8u)) return;
    // 80C5E8B8: addi    r3, r3, 9236
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9236);

label_80C5E8BC:
    ctx->pc = 0x80C5E8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E8BC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E8BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8C0:
    ctx->pc = 0x80C5E8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8C0u)) return;
    // 80C5E8C0: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E8C0u)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80C5E8C4:
    ctx->pc = 0x80C5E8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8C4u)) return;
    // 80C5E8C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5E8C8:
    ctx->pc = 0x80C5E8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8C8u)) return;
    // 80C5E8C8: bl      0x8045F220
    {
            ctx->lr = 0x80C5E8CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5E8CC:
    ctx->pc = 0x80C5E8CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E8CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5E8CC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8D0:
    ctx->pc = 0x80C5E8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E8D0: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E8D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8D4:
    ctx->pc = 0x80C5E8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8D4u)) return;
    // 80C5E8D4: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5E8D8:
    ctx->pc = 0x80C5E8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8D8u)) return;
    // 80C5E8D8: addi    r3, r3, 9268
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9268);

label_80C5E8DC:
    ctx->pc = 0x80C5E8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5E8DC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5E8DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8E0:
    ctx->pc = 0x80C5E8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8E0u)) return;
    // 80C5E8E0: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5E8E0u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80C5E8E4:
    ctx->pc = 0x80C5E8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8E4u)) return;
    // 80C5E8E4: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E8E8:
    ctx->pc = 0x80C5E8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8E8u)) return;
    // 80C5E8E8: addi    r3, r3, -26764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26764);

label_80C5E8EC:
    ctx->pc = 0x80C5E8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E8EC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E8F0:
    ctx->pc = 0x80C5E8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8F0u)) return;
    // 80C5E8F0: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80C5E8F0u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80C5E8F4:
    ctx->pc = 0x80C5E8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8F4u)) return;
    // 80C5E8F4: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80C5E8F4u)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80C5E8F8:
    ctx->pc = 0x80C5E8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E8F8u)) return;
    // 80C5E8F8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C5E8FCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C5E8FC:
    ctx->pc = 0x80C5E8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5E8FC: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E900:
    ctx->pc = 0x80C5E900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E900u)) return;
    // 80C5E900: addi    r3, r3, -26764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26764);

label_80C5E904:
    ctx->pc = 0x80C5E904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5E904: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E908:
    ctx->pc = 0x80C5E908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E908u)) return;
    // 80C5E908: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5E90C:
    ctx->pc = 0x80C5E90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E90Cu)) return;
    // 80C5E90C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C5E910:
    ctx->pc = 0x80C5E910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E910u)) return;
    // 80C5E910: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C5E914:
    ctx->pc = 0x80C5E914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E914u)) return;
    // 80C5E914: bl      0x8045EEA8
    {
            ctx->lr = 0x80C5E918u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C5E918:
    ctx->pc = 0x80C5E918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5E918: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5E91C:
    ctx->pc = 0x80C5E91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E91Cu)) return;
    // 80C5E91C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5E920u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5E920:
    ctx->pc = 0x80C5E920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5E920: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E924:
    ctx->pc = 0x80C5E924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E924u)) return;
    // 80C5E924: addi    r3, r3, -26784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26784);

label_80C5E928:
    ctx->pc = 0x80C5E928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E928: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E92C:
    ctx->pc = 0x80C5E92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E92Cu)) return;
    // 80C5E92C: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E930:
    ctx->pc = 0x80C5E930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E930u)) return;
    // 80C5E930: addi    r4, r4, 14200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14200);

label_80C5E934:
    ctx->pc = 0x80C5E934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E934u)) return;
    // 80C5E934: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5E938:
    ctx->pc = 0x80C5E938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E938u)) return;
    // 80C5E938: addi    r5, r5, 10148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10148);

label_80C5E93C:
    ctx->pc = 0x80C5E93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E93Cu)) return;
    // 80C5E93C: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5E940:
    ctx->pc = 0x80C5E940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E940u)) return;
    // 80C5E940: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5E944:
    ctx->pc = 0x80C5E944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E944: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5E944u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E948:
    ctx->pc = 0x80C5E948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E948u)) return;
    // 80C5E948: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5E94C:
    ctx->pc = 0x80C5E94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E94Cu)) return;
    // 80C5E94C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5E950:
    ctx->pc = 0x80C5E950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E950u)) return;
    // 80C5E950: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5E954u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5E954:
    ctx->pc = 0x80C5E954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5E954: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E958:
    ctx->pc = 0x80C5E958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E958u)) return;
    // 80C5E958: addi    r3, r3, -26780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26780);

label_80C5E95C:
    ctx->pc = 0x80C5E95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E95C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E960:
    ctx->pc = 0x80C5E960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E960u)) return;
    // 80C5E960: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E964:
    ctx->pc = 0x80C5E964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E964u)) return;
    // 80C5E964: addi    r4, r4, 18288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18288);

label_80C5E968:
    ctx->pc = 0x80C5E968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E968u)) return;
    // 80C5E968: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5E96C:
    ctx->pc = 0x80C5E96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E96Cu)) return;
    // 80C5E96C: addi    r5, r5, 14236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14236);

label_80C5E970:
    ctx->pc = 0x80C5E970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E970u)) return;
    // 80C5E970: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5E974:
    ctx->pc = 0x80C5E974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E974u)) return;
    // 80C5E974: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5E978:
    ctx->pc = 0x80C5E978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E978: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5E978u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E97C:
    ctx->pc = 0x80C5E97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E97Cu)) return;
    // 80C5E97C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5E980:
    ctx->pc = 0x80C5E980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E980u)) return;
    // 80C5E980: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5E984:
    ctx->pc = 0x80C5E984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E984u)) return;
    // 80C5E984: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5E988u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5E988:
    ctx->pc = 0x80C5E988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5E988: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E98C:
    ctx->pc = 0x80C5E98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E98Cu)) return;
    // 80C5E98C: addi    r3, r3, -26776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26776);

label_80C5E990:
    ctx->pc = 0x80C5E990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E990: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E994:
    ctx->pc = 0x80C5E994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E994u)) return;
    // 80C5E994: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E998:
    ctx->pc = 0x80C5E998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E998u)) return;
    // 80C5E998: addi    r4, r4, 22376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22376);

label_80C5E99C:
    ctx->pc = 0x80C5E99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E99Cu)) return;
    // 80C5E99C: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5E9A0:
    ctx->pc = 0x80C5E9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9A0u)) return;
    // 80C5E9A0: addi    r5, r5, 18324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18324);

label_80C5E9A4:
    ctx->pc = 0x80C5E9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9A4u)) return;
    // 80C5E9A4: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5E9A8:
    ctx->pc = 0x80C5E9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9A8u)) return;
    // 80C5E9A8: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5E9AC:
    ctx->pc = 0x80C5E9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E9AC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5E9ACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E9B0:
    ctx->pc = 0x80C5E9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9B0u)) return;
    // 80C5E9B0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5E9B4:
    ctx->pc = 0x80C5E9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9B4u)) return;
    // 80C5E9B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5E9B8:
    ctx->pc = 0x80C5E9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9B8u)) return;
    // 80C5E9B8: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5E9BCu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5E9BC:
    ctx->pc = 0x80C5E9BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E9BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5E9BC: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E9C0:
    ctx->pc = 0x80C5E9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9C0u)) return;
    // 80C5E9C0: addi    r3, r3, -26772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26772);

label_80C5E9C4:
    ctx->pc = 0x80C5E9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E9C4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E9C8:
    ctx->pc = 0x80C5E9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9C8u)) return;
    // 80C5E9C8: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5E9CC:
    ctx->pc = 0x80C5E9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9CCu)) return;
    // 80C5E9CC: addi    r4, r4, 26464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26464);

label_80C5E9D0:
    ctx->pc = 0x80C5E9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9D0u)) return;
    // 80C5E9D0: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5E9D4:
    ctx->pc = 0x80C5E9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9D4u)) return;
    // 80C5E9D4: addi    r5, r5, 22412
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22412);

label_80C5E9D8:
    ctx->pc = 0x80C5E9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9D8u)) return;
    // 80C5E9D8: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5E9DC:
    ctx->pc = 0x80C5E9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9DCu)) return;
    // 80C5E9DC: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5E9E0:
    ctx->pc = 0x80C5E9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5E9E0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5E9E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E9E4:
    ctx->pc = 0x80C5E9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9E4u)) return;
    // 80C5E9E4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5E9E8:
    ctx->pc = 0x80C5E9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9E8u)) return;
    // 80C5E9E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5E9EC:
    ctx->pc = 0x80C5E9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9ECu)) return;
    // 80C5E9EC: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5E9F0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5E9F0:
    ctx->pc = 0x80C5E9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5E9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5E9F0: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5E9F4:
    ctx->pc = 0x80C5E9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9F4u)) return;
    // 80C5E9F4: addi    r3, r3, -26768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26768);

label_80C5E9F8:
    ctx->pc = 0x80C5E9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5E9F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5E9FC:
    ctx->pc = 0x80C5E9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5E9FCu)) return;
    // 80C5E9FC: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5EA00:
    ctx->pc = 0x80C5EA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA00u)) return;
    // 80C5EA00: addi    r4, r4, 22376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22376);

label_80C5EA04:
    ctx->pc = 0x80C5EA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA04u)) return;
    // 80C5EA04: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EA08:
    ctx->pc = 0x80C5EA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA08u)) return;
    // 80C5EA08: addi    r5, r5, 30588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(30588);

label_80C5EA0C:
    ctx->pc = 0x80C5EA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA0Cu)) return;
    // 80C5EA0C: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5EA10:
    ctx->pc = 0x80C5EA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA10u)) return;
    // 80C5EA10: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5EA14:
    ctx->pc = 0x80C5EA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5EA14: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5EA14u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EA18:
    ctx->pc = 0x80C5EA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA18u)) return;
    // 80C5EA18: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5EA1C:
    ctx->pc = 0x80C5EA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA1Cu)) return;
    // 80C5EA1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5EA20:
    ctx->pc = 0x80C5EA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA20u)) return;
    // 80C5EA20: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5EA24u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5EA24:
    ctx->pc = 0x80C5EA24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EA24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C5EA24: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EA28:
    ctx->pc = 0x80C5EA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA28u)) return;
    // 80C5EA28: addi    r3, r3, -26764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26764);

label_80C5EA2C:
    ctx->pc = 0x80C5EA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5EA2C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EA30:
    ctx->pc = 0x80C5EA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA30u)) return;
    // 80C5EA30: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5EA34:
    ctx->pc = 0x80C5EA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA34u)) return;
    // 80C5EA34: addi    r4, r4, 26464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26464);

label_80C5EA38:
    ctx->pc = 0x80C5EA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA38u)) return;
    // 80C5EA38: lis     r5, -27430
    ctx->gpr[5] = ((u32)(s32)(-27430) << 16);

label_80C5EA3C:
    ctx->pc = 0x80C5EA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA3Cu)) return;
    // 80C5EA3C: addi    r5, r5, -30860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30860);

label_80C5EA40:
    ctx->pc = 0x80C5EA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA40u)) return;
    // 80C5EA40: lis     r6, -27431
    ctx->gpr[6] = ((u32)(s32)(-27431) << 16);

label_80C5EA44:
    ctx->pc = 0x80C5EA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA44u)) return;
    // 80C5EA44: addi    r6, r6, 9232
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(9232);

label_80C5EA48:
    ctx->pc = 0x80C5EA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5EA48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C5EA48u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EA4C:
    ctx->pc = 0x80C5EA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA4Cu)) return;
    // 80C5EA4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C5EA50:
    ctx->pc = 0x80C5EA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA50u)) return;
    // 80C5EA50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5EA54:
    ctx->pc = 0x80C5EA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA54u)) return;
    // 80C5EA54: bl      0x8045EBE4
    {
            ctx->lr = 0x80C5EA58u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C5EA58:
    ctx->pc = 0x80C5EA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EA58: li      r3, 31
    ctx->gpr[3] = (u32)(s32)(31);

label_80C5EA5C:
    ctx->pc = 0x80C5EA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA5Cu)) return;
    // 80C5EA5C: bl      0x80406090
    {
            ctx->lr = 0x80C5EA60u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C5EA60:
    ctx->pc = 0x80C5EA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5EA60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EA64:
    ctx->pc = 0x80C5EA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA64u)) return;
    // 80C5EA64: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C5EA68:
    ctx->pc = 0x80C5EA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA68u)) return;
    // 80C5EA68: li      r5, 12561
    ctx->gpr[5] = (u32)(s32)(12561);

label_80C5EA6C:
    ctx->pc = 0x80C5EA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA6Cu)) return;
    // 80C5EA6C: bl      0x8045C0F8
    {
            ctx->lr = 0x80C5EA70u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C5EA70:
    ctx->pc = 0x80C5EA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5EA70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EA74:
    ctx->pc = 0x80C5EA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA74u)) return;
    // 80C5EA74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5EA78:
    ctx->pc = 0x80C5EA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA78u)) return;
    // 80C5EA78: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EA7C:
    ctx->pc = 0x80C5EA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA7Cu)) return;
    // 80C5EA7C: addi    r5, r5, 9276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9276);

label_80C5EA80:
    ctx->pc = 0x80C5EA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5EA80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EA80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EA84:
    ctx->pc = 0x80C5EA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA84u)) return;
    // 80C5EA84: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EA88:
    ctx->pc = 0x80C5EA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA88u)) return;
    // 80C5EA88: addi    r5, r5, 9280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9280);

label_80C5EA8C:
    ctx->pc = 0x80C5EA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EA8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EA8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EA90:
    ctx->pc = 0x80C5EA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA90u)) return;
    // 80C5EA90: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EA94:
    ctx->pc = 0x80C5EA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA94u)) return;
    // 80C5EA94: addi    r5, r5, 9284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9284);

label_80C5EA98:
    ctx->pc = 0x80C5EA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EA98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EA98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EA9C:
    ctx->pc = 0x80C5EA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EA9Cu)) return;
    // 80C5EA9C: bl      0x8045C750
    {
            ctx->lr = 0x80C5EAA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5EAA0:
    ctx->pc = 0x80C5EAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5EAA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EAA4:
    ctx->pc = 0x80C5EAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAA4u)) return;
    // 80C5EAA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5EAA8:
    ctx->pc = 0x80C5EAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAA8u)) return;
    // 80C5EAA8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C5EAAC:
    ctx->pc = 0x80C5EAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAACu)) return;
    // 80C5EAAC: addi    r5, r6, -4836
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-4836);

label_80C5EAB0:
    ctx->pc = 0x80C5EAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAB0u)) return;
    // 80C5EAB0: addi    r6, r6, -26610
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26610);

label_80C5EAB4:
    ctx->pc = 0x80C5EAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAB4u)) return;
    // 80C5EAB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5EAB8:
    ctx->pc = 0x80C5EAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAB8u)) return;
    // 80C5EAB8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C5EABCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C5EABC:
    ctx->pc = 0x80C5EABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5EABC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EAC0:
    ctx->pc = 0x80C5EAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAC0u)) return;
    // 80C5EAC0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C5EAC4:
    ctx->pc = 0x80C5EAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAC4u)) return;
    // 80C5EAC4: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EAC8:
    ctx->pc = 0x80C5EAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAC8u)) return;
    // 80C5EAC8: addi    r5, r5, 9288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9288);

label_80C5EACC:
    ctx->pc = 0x80C5EACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5EACC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EACCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EAD0:
    ctx->pc = 0x80C5EAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAD0u)) return;
    // 80C5EAD0: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EAD4:
    ctx->pc = 0x80C5EAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAD4u)) return;
    // 80C5EAD4: addi    r5, r5, 9292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9292);

label_80C5EAD8:
    ctx->pc = 0x80C5EAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EAD8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EAD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EADC:
    ctx->pc = 0x80C5EADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EADCu)) return;
    // 80C5EADC: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EAE0:
    ctx->pc = 0x80C5EAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAE0u)) return;
    // 80C5EAE0: addi    r5, r5, 9296
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9296);

label_80C5EAE4:
    ctx->pc = 0x80C5EAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EAE4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EAE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EAE8:
    ctx->pc = 0x80C5EAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAE8u)) return;
    // 80C5EAE8: bl      0x8045C750
    {
            ctx->lr = 0x80C5EAECu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5EAEC:
    ctx->pc = 0x80C5EAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EAEC: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C5EAF0:
    ctx->pc = 0x80C5EAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAF0u)) return;
    // 80C5EAF0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5EAF4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5EAF4:
    ctx->pc = 0x80C5EAF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EAF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5EAF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EAF8:
    ctx->pc = 0x80C5EAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAF8u)) return;
    // 80C5EAF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C5EAFC:
    ctx->pc = 0x80C5EAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EAFCu)) return;
    // 80C5EAFC: li      r5, 9102
    ctx->gpr[5] = (u32)(s32)(9102);

label_80C5EB00:
    ctx->pc = 0x80C5EB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB00u)) return;
    // 80C5EB00: bl      0x8045C0F8
    {
            ctx->lr = 0x80C5EB04u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C5EB04:
    ctx->pc = 0x80C5EB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5EB04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EB08:
    ctx->pc = 0x80C5EB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB08u)) return;
    // 80C5EB08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5EB0C:
    ctx->pc = 0x80C5EB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB0Cu)) return;
    // 80C5EB0C: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EB10:
    ctx->pc = 0x80C5EB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB10u)) return;
    // 80C5EB10: addi    r5, r5, 9300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9300);

label_80C5EB14:
    ctx->pc = 0x80C5EB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5EB14: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EB14u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB18:
    ctx->pc = 0x80C5EB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB18u)) return;
    // 80C5EB18: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EB1C:
    ctx->pc = 0x80C5EB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB1Cu)) return;
    // 80C5EB1C: addi    r5, r5, 9304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9304);

label_80C5EB20:
    ctx->pc = 0x80C5EB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EB20: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EB20u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB24:
    ctx->pc = 0x80C5EB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB24u)) return;
    // 80C5EB24: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EB28:
    ctx->pc = 0x80C5EB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB28u)) return;
    // 80C5EB28: addi    r5, r5, 9308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9308);

label_80C5EB2C:
    ctx->pc = 0x80C5EB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EB2C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EB2Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB30:
    ctx->pc = 0x80C5EB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB30u)) return;
    // 80C5EB30: bl      0x8045C750
    {
            ctx->lr = 0x80C5EB34u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5EB34:
    ctx->pc = 0x80C5EB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5EB34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EB38:
    ctx->pc = 0x80C5EB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB38u)) return;
    // 80C5EB38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5EB3C:
    ctx->pc = 0x80C5EB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB3Cu)) return;
    // 80C5EB3C: li      r5, 5148
    ctx->gpr[5] = (u32)(s32)(5148);

label_80C5EB40:
    ctx->pc = 0x80C5EB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB40u)) return;
    // 80C5EB40: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C5EB44:
    ctx->pc = 0x80C5EB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB44u)) return;
    // 80C5EB44: addi    r6, r6, -27378
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-27378);

label_80C5EB48:
    ctx->pc = 0x80C5EB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB48u)) return;
    // 80C5EB48: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5EB4C:
    ctx->pc = 0x80C5EB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB4Cu)) return;
    // 80C5EB4C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C5EB50u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C5EB50:
    ctx->pc = 0x80C5EB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5EB50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EB54:
    ctx->pc = 0x80C5EB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB54u)) return;
    // 80C5EB54: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80C5EB58:
    ctx->pc = 0x80C5EB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB58u)) return;
    // 80C5EB58: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EB5C:
    ctx->pc = 0x80C5EB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB5Cu)) return;
    // 80C5EB5C: addi    r5, r5, 9312
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9312);

label_80C5EB60:
    ctx->pc = 0x80C5EB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5EB60: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EB60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB64:
    ctx->pc = 0x80C5EB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB64u)) return;
    // 80C5EB64: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EB68:
    ctx->pc = 0x80C5EB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB68u)) return;
    // 80C5EB68: addi    r5, r5, 9304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9304);

label_80C5EB6C:
    ctx->pc = 0x80C5EB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EB6C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EB6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB70:
    ctx->pc = 0x80C5EB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB70u)) return;
    // 80C5EB70: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EB74:
    ctx->pc = 0x80C5EB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB74u)) return;
    // 80C5EB74: addi    r5, r5, 9316
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9316);

label_80C5EB78:
    ctx->pc = 0x80C5EB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EB78: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EB78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB7C:
    ctx->pc = 0x80C5EB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB7Cu)) return;
    // 80C5EB7C: bl      0x8045C750
    {
            ctx->lr = 0x80C5EB80u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5EB80:
    ctx->pc = 0x80C5EB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EB80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EB84:
    ctx->pc = 0x80C5EB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB84u)) return;
    // 80C5EB84: bl      0x8045F220
    {
            ctx->lr = 0x80C5EB88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EB88:
    ctx->pc = 0x80C5EB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EB88: bl      0x8045C034
    {
            ctx->lr = 0x80C5EB8Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C5EB8C:
    ctx->pc = 0x80C5EB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EB8C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EB90:
    ctx->pc = 0x80C5EB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB90u)) return;
    // 80C5EB90: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5EB94:
    ctx->pc = 0x80C5EB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EB94: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EB98:
    ctx->pc = 0x80C5EB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB98u)) return;
    // 80C5EB98: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EB9C:
    ctx->pc = 0x80C5EB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EB9Cu)) return;
    // 80C5EB9C: bc    4, 2, 0x80C5EBB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EBB4;
        }
    }

label_80C5EBA0:
    ctx->pc = 0x80C5EBA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EBA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EBA4:
    ctx->pc = 0x80C5EBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBA4u)) return;
    // 80C5EBA4: bl      0x8045F220
    {
            ctx->lr = 0x80C5EBA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EBA8:
    ctx->pc = 0x80C5EBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EBA8: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5EBAC:
    ctx->pc = 0x80C5EBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBACu)) return;
    // 80C5EBAC: addi    r4, r4, 10096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10096);

label_80C5EBB0:
    ctx->pc = 0x80C5EBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBB0u)) return;
    // 80C5EBB0: bl      0x8045C060
    {
            ctx->lr = 0x80C5EBB4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C5EBB4:
    ctx->pc = 0x80C5EBB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EBB4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EBB8:
    ctx->pc = 0x80C5EBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBB8u)) return;
    // 80C5EBB8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5EBBC:
    ctx->pc = 0x80C5EBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EBBC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EBC0:
    ctx->pc = 0x80C5EBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBC0u)) return;
    // 80C5EBC0: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EBC4:
    ctx->pc = 0x80C5EBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBC4u)) return;
    // 80C5EBC4: bc    4, 2, 0x80C5EBDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EBDC;
        }
    }

label_80C5EBC8:
    ctx->pc = 0x80C5EBC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EBC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EBCC:
    ctx->pc = 0x80C5EBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBCCu)) return;
    // 80C5EBCC: bl      0x8045F220
    {
            ctx->lr = 0x80C5EBD0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EBD0:
    ctx->pc = 0x80C5EBD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EBD0: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5EBD4:
    ctx->pc = 0x80C5EBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBD4u)) return;
    // 80C5EBD4: addi    r4, r4, 10104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10104);

label_80C5EBD8:
    ctx->pc = 0x80C5EBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBD8u)) return;
    // 80C5EBD8: bl      0x8045C060
    {
            ctx->lr = 0x80C5EBDCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C5EBDC:
    ctx->pc = 0x80C5EBDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EBDC: li      r3, 1159
    ctx->gpr[3] = (u32)(s32)(1159);

label_80C5EBE0:
    ctx->pc = 0x80C5EBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBE0u)) return;
    // 80C5EBE0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C5EBE4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C5EBE4:
    ctx->pc = 0x80C5EBE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EBE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C5EBE4: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C5EBE8:
    ctx->pc = 0x80C5EBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBE8u)) return;
    // 80C5EBE8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C5EBEC:
    ctx->pc = 0x80C5EBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBECu)) return;
    // 80C5EBEC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C5EBF0:
    ctx->pc = 0x80C5EBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5EBF0: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EBF4:
    ctx->pc = 0x80C5EBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBF4u)) return;
    // 80C5EBF4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C5EBF8:
    ctx->pc = 0x80C5EBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBF8u)) return;
    // 80C5EBF8: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5EBFC:
    ctx->pc = 0x80C5EBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EBFCu)) return;
    // 80C5EBFC: addi    r4, r4, 9948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9948);

label_80C5EC00:
    ctx->pc = 0x80C5EC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EC00: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EC04:
    ctx->pc = 0x80C5EC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EC04: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EC08:
    ctx->pc = 0x80C5EC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC08u)) return;
    // 80C5EC08: bl      0x8045F608
    {
            ctx->lr = 0x80C5EC0Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C5EC0C:
    ctx->pc = 0x80C5EC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EC0C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EC10:
    ctx->pc = 0x80C5EC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC10u)) return;
    // 80C5EC10: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5EC14:
    ctx->pc = 0x80C5EC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EC14: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EC18:
    ctx->pc = 0x80C5EC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC18u)) return;
    // 80C5EC18: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EC1C:
    ctx->pc = 0x80C5EC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC1Cu)) return;
    // 80C5EC1C: bc    4, 2, 0x80C5EC2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EC2C;
        }
    }

label_80C5EC20:
    ctx->pc = 0x80C5EC20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EC20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EC24:
    ctx->pc = 0x80C5EC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC24u)) return;
    // 80C5EC24: bl      0x8045F220
    {
            ctx->lr = 0x80C5EC28u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EC28:
    ctx->pc = 0x80C5EC28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EC28: bl      0x8045C034
    {
            ctx->lr = 0x80C5EC2Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C5EC2C:
    ctx->pc = 0x80C5EC2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EC2C: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80C5EC30:
    ctx->pc = 0x80C5EC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC30u)) return;
    // 80C5EC30: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5EC34u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5EC34:
    ctx->pc = 0x80C5EC34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EC34: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EC38:
    ctx->pc = 0x80C5EC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC38u)) return;
    // 80C5EC38: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5EC3C:
    ctx->pc = 0x80C5EC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EC3C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EC40:
    ctx->pc = 0x80C5EC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC40u)) return;
    // 80C5EC40: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EC44:
    ctx->pc = 0x80C5EC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC44u)) return;
    // 80C5EC44: bc    4, 2, 0x80C5EC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EC54;
        }
    }

label_80C5EC48:
    ctx->pc = 0x80C5EC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EC48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EC4C:
    ctx->pc = 0x80C5EC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC4Cu)) return;
    // 80C5EC4C: bl      0x8045F220
    {
            ctx->lr = 0x80C5EC50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EC50:
    ctx->pc = 0x80C5EC50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EC50: bl      0x8045C034
    {
            ctx->lr = 0x80C5EC54u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C5EC54:
    ctx->pc = 0x80C5EC54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EC54: bl      0x8045F32C
    {
            ctx->lr = 0x80C5EC58u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C5EC58:
    ctx->pc = 0x80C5EC58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EC58: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C5EC5C:
    ctx->pc = 0x80C5EC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC5Cu)) return;
    // 80C5EC5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5EC60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5EC60:
    ctx->pc = 0x80C5EC60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EC60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EC64:
    ctx->pc = 0x80C5EC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC64u)) return;
    // 80C5EC64: bl      0x8045F220
    {
            ctx->lr = 0x80C5EC68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EC68:
    ctx->pc = 0x80C5EC68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EC68: bl      0x8045C034
    {
            ctx->lr = 0x80C5EC6Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C5EC6C:
    ctx->pc = 0x80C5EC6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EC6C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EC70:
    ctx->pc = 0x80C5EC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC70u)) return;
    // 80C5EC70: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5EC74:
    ctx->pc = 0x80C5EC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EC74: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EC78:
    ctx->pc = 0x80C5EC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC78u)) return;
    // 80C5EC78: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EC7C:
    ctx->pc = 0x80C5EC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC7Cu)) return;
    // 80C5EC7C: bc    4, 2, 0x80C5EC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EC94;
        }
    }

label_80C5EC80:
    ctx->pc = 0x80C5EC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EC80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EC84:
    ctx->pc = 0x80C5EC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC84u)) return;
    // 80C5EC84: bl      0x8045F220
    {
            ctx->lr = 0x80C5EC88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EC88:
    ctx->pc = 0x80C5EC88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EC88: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5EC8C:
    ctx->pc = 0x80C5EC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC8Cu)) return;
    // 80C5EC8C: addi    r4, r4, 10096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10096);

label_80C5EC90:
    ctx->pc = 0x80C5EC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC90u)) return;
    // 80C5EC90: bl      0x8045C060
    {
            ctx->lr = 0x80C5EC94u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C5EC94:
    ctx->pc = 0x80C5EC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EC94: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EC98:
    ctx->pc = 0x80C5EC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC98u)) return;
    // 80C5EC98: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5EC9C:
    ctx->pc = 0x80C5EC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EC9C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ECA0:
    ctx->pc = 0x80C5ECA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECA0u)) return;
    // 80C5ECA0: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5ECA4:
    ctx->pc = 0x80C5ECA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECA4u)) return;
    // 80C5ECA4: bc    4, 2, 0x80C5ECBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5ECBC;
        }
    }

label_80C5ECA8:
    ctx->pc = 0x80C5ECA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ECA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ECA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5ECAC:
    ctx->pc = 0x80C5ECACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECACu)) return;
    // 80C5ECAC: bl      0x8045F220
    {
            ctx->lr = 0x80C5ECB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5ECB0:
    ctx->pc = 0x80C5ECB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ECB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5ECB0: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5ECB4:
    ctx->pc = 0x80C5ECB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECB4u)) return;
    // 80C5ECB4: addi    r4, r4, 10096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10096);

label_80C5ECB8:
    ctx->pc = 0x80C5ECB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECB8u)) return;
    // 80C5ECB8: bl      0x8045C060
    {
            ctx->lr = 0x80C5ECBCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C5ECBC:
    ctx->pc = 0x80C5ECBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ECBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ECBC: li      r3, 1160
    ctx->gpr[3] = (u32)(s32)(1160);

label_80C5ECC0:
    ctx->pc = 0x80C5ECC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECC0u)) return;
    // 80C5ECC0: bl      0x8045BFA0
    {
            ctx->lr = 0x80C5ECC4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C5ECC4:
    ctx->pc = 0x80C5ECC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ECC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C5ECC4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5ECC8:
    ctx->pc = 0x80C5ECC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECC8u)) return;
    // 80C5ECC8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C5ECCC:
    ctx->pc = 0x80C5ECCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5ECCC: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ECD0:
    ctx->pc = 0x80C5ECD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECD0u)) return;
    // 80C5ECD0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C5ECD4:
    ctx->pc = 0x80C5ECD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECD4u)) return;
    // 80C5ECD4: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5ECD8:
    ctx->pc = 0x80C5ECD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECD8u)) return;
    // 80C5ECD8: addi    r3, r3, 9948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9948);

label_80C5ECDC:
    ctx->pc = 0x80C5ECDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5ECDC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ECE0:
    ctx->pc = 0x80C5ECE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5ECE0: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ECE4:
    ctx->pc = 0x80C5ECE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECE4u)) return;
    // 80C5ECE4: bl      0x8045F6FC
    {
            ctx->lr = 0x80C5ECE8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C5ECE8:
    ctx->pc = 0x80C5ECE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ECE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ECE8: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C5ECEC:
    ctx->pc = 0x80C5ECECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECECu)) return;
    // 80C5ECEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5ECF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5ECF0:
    ctx->pc = 0x80C5ECF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ECF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C5ECF0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5ECF4:
    ctx->pc = 0x80C5ECF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECF4u)) return;
    // 80C5ECF4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C5ECF8:
    ctx->pc = 0x80C5ECF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5ECF8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ECFC:
    ctx->pc = 0x80C5ECFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ECFCu)) return;
    // 80C5ECFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C5ED00:
    ctx->pc = 0x80C5ED00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED00u)) return;
    // 80C5ED00: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5ED04:
    ctx->pc = 0x80C5ED04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED04u)) return;
    // 80C5ED04: addi    r3, r3, 9948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9948);

label_80C5ED08:
    ctx->pc = 0x80C5ED08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5ED08: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED0C:
    ctx->pc = 0x80C5ED0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5ED0C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED10:
    ctx->pc = 0x80C5ED10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED10u)) return;
    // 80C5ED10: bl      0x8045F6FC
    {
            ctx->lr = 0x80C5ED14u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C5ED14:
    ctx->pc = 0x80C5ED14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ED14: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80C5ED18:
    ctx->pc = 0x80C5ED18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED18u)) return;
    // 80C5ED18: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5ED1Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5ED1C:
    ctx->pc = 0x80C5ED1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5ED1C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5ED20:
    ctx->pc = 0x80C5ED20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED20u)) return;
    // 80C5ED20: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5ED24:
    ctx->pc = 0x80C5ED24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5ED24: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED28:
    ctx->pc = 0x80C5ED28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED28u)) return;
    // 80C5ED28: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5ED2C:
    ctx->pc = 0x80C5ED2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED2Cu)) return;
    // 80C5ED2C: bc    4, 2, 0x80C5ED3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5ED3C;
        }
    }

label_80C5ED30:
    ctx->pc = 0x80C5ED30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ED30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5ED34:
    ctx->pc = 0x80C5ED34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED34u)) return;
    // 80C5ED34: bl      0x8045F220
    {
            ctx->lr = 0x80C5ED38u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5ED38:
    ctx->pc = 0x80C5ED38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5ED38: bl      0x8045C034
    {
            ctx->lr = 0x80C5ED3Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C5ED3C:
    ctx->pc = 0x80C5ED3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ED3C: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C5ED40:
    ctx->pc = 0x80C5ED40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED40u)) return;
    // 80C5ED40: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5ED44u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5ED44:
    ctx->pc = 0x80C5ED44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5ED44: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5ED48:
    ctx->pc = 0x80C5ED48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED48u)) return;
    // 80C5ED48: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C5ED4C:
    ctx->pc = 0x80C5ED4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5ED4C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED50:
    ctx->pc = 0x80C5ED50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED50u)) return;
    // 80C5ED50: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5ED54:
    ctx->pc = 0x80C5ED54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED54u)) return;
    // 80C5ED54: bc    4, 2, 0x80C5ED64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5ED64;
        }
    }

label_80C5ED58:
    ctx->pc = 0x80C5ED58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ED58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5ED5C:
    ctx->pc = 0x80C5ED5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED5Cu)) return;
    // 80C5ED5C: bl      0x8045F220
    {
            ctx->lr = 0x80C5ED60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5ED60:
    ctx->pc = 0x80C5ED60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5ED60: bl      0x8045C034
    {
            ctx->lr = 0x80C5ED64u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C5ED64:
    ctx->pc = 0x80C5ED64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5ED64: bl      0x8045F32C
    {
            ctx->lr = 0x80C5ED68u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C5ED68:
    ctx->pc = 0x80C5ED68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5ED68: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C5ED6C:
    ctx->pc = 0x80C5ED6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED6Cu)) return;
    // 80C5ED6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5ED70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5ED70:
    ctx->pc = 0x80C5ED70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5ED70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5ED70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5ED74:
    ctx->pc = 0x80C5ED74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED74u)) return;
    // 80C5ED74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5ED78:
    ctx->pc = 0x80C5ED78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED78u)) return;
    // 80C5ED78: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5ED7C:
    ctx->pc = 0x80C5ED7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED7Cu)) return;
    // 80C5ED7C: addi    r5, r5, 9320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9320);

label_80C5ED80:
    ctx->pc = 0x80C5ED80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5ED80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5ED80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED84:
    ctx->pc = 0x80C5ED84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED84u)) return;
    // 80C5ED84: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5ED88:
    ctx->pc = 0x80C5ED88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED88u)) return;
    // 80C5ED88: addi    r5, r5, 9324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9324);

label_80C5ED8C:
    ctx->pc = 0x80C5ED8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5ED8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5ED8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED90:
    ctx->pc = 0x80C5ED90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED90u)) return;
    // 80C5ED90: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5ED94:
    ctx->pc = 0x80C5ED94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED94u)) return;
    // 80C5ED94: addi    r5, r5, 9328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9328);

label_80C5ED98:
    ctx->pc = 0x80C5ED98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5ED98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5ED98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5ED9C:
    ctx->pc = 0x80C5ED9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5ED9Cu)) return;
    // 80C5ED9C: bl      0x8045C750
    {
            ctx->lr = 0x80C5EDA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5EDA0:
    ctx->pc = 0x80C5EDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5EDA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EDA4:
    ctx->pc = 0x80C5EDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDA4u)) return;
    // 80C5EDA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C5EDA8:
    ctx->pc = 0x80C5EDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDA8u)) return;
    // 80C5EDA8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C5EDAC:
    ctx->pc = 0x80C5EDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDACu)) return;
    // 80C5EDAC: addi    r5, r5, -3556
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3556);

label_80C5EDB0:
    ctx->pc = 0x80C5EDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDB0u)) return;
    // 80C5EDB0: li      r6, 29198
    ctx->gpr[6] = (u32)(s32)(29198);

label_80C5EDB4:
    ctx->pc = 0x80C5EDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDB4u)) return;
    // 80C5EDB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5EDB8:
    ctx->pc = 0x80C5EDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDB8u)) return;
    // 80C5EDB8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C5EDBCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C5EDBC:
    ctx->pc = 0x80C5EDBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EDBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EDBC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5EDC0:
    ctx->pc = 0x80C5EDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDC0u)) return;
    // 80C5EDC0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5EDC4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5EDC4:
    ctx->pc = 0x80C5EDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5EDC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EDC8:
    ctx->pc = 0x80C5EDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDC8u)) return;
    // 80C5EDC8: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80C5EDCC:
    ctx->pc = 0x80C5EDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDCCu)) return;
    // 80C5EDCC: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80C5EDD0:
    ctx->pc = 0x80C5EDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDD0u)) return;
    // 80C5EDD0: bl      0x8045C0F8
    {
            ctx->lr = 0x80C5EDD4u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C5EDD4:
    ctx->pc = 0x80C5EDD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EDD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5EDD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EDD8:
    ctx->pc = 0x80C5EDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDD8u)) return;
    // 80C5EDD8: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80C5EDDC:
    ctx->pc = 0x80C5EDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDDCu)) return;
    // 80C5EDDC: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EDE0:
    ctx->pc = 0x80C5EDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDE0u)) return;
    // 80C5EDE0: addi    r5, r5, 9332
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9332);

label_80C5EDE4:
    ctx->pc = 0x80C5EDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5EDE4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EDE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EDE8:
    ctx->pc = 0x80C5EDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDE8u)) return;
    // 80C5EDE8: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EDEC:
    ctx->pc = 0x80C5EDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDECu)) return;
    // 80C5EDEC: addi    r5, r5, 9336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9336);

label_80C5EDF0:
    ctx->pc = 0x80C5EDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EDF0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EDF0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EDF4:
    ctx->pc = 0x80C5EDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDF4u)) return;
    // 80C5EDF4: lis     r5, -27431
    ctx->gpr[5] = ((u32)(s32)(-27431) << 16);

label_80C5EDF8:
    ctx->pc = 0x80C5EDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDF8u)) return;
    // 80C5EDF8: addi    r5, r5, 9340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9340);

label_80C5EDFC:
    ctx->pc = 0x80C5EDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EDFC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5EDFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EE00:
    ctx->pc = 0x80C5EE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE00u)) return;
    // 80C5EE00: bl      0x8045C750
    {
            ctx->lr = 0x80C5EE04u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C5EE04:
    ctx->pc = 0x80C5EE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5EE04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EE08:
    ctx->pc = 0x80C5EE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE08u)) return;
    // 80C5EE08: li      r4, 300
    ctx->gpr[4] = (u32)(s32)(300);

label_80C5EE0C:
    ctx->pc = 0x80C5EE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE0Cu)) return;
    // 80C5EE0C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C5EE10:
    ctx->pc = 0x80C5EE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE10u)) return;
    // 80C5EE10: addi    r5, r5, -2276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2276);

label_80C5EE14:
    ctx->pc = 0x80C5EE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE14u)) return;
    // 80C5EE14: li      r6, 30222
    ctx->gpr[6] = (u32)(s32)(30222);

label_80C5EE18:
    ctx->pc = 0x80C5EE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE18u)) return;
    // 80C5EE18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C5EE1C:
    ctx->pc = 0x80C5EE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE1Cu)) return;
    // 80C5EE1C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C5EE20u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C5EE20:
    ctx->pc = 0x80C5EE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EE20: li      r3, 140
    ctx->gpr[3] = (u32)(s32)(140);

label_80C5EE24:
    ctx->pc = 0x80C5EE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE24u)) return;
    // 80C5EE24: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5EE28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5EE28:
    ctx->pc = 0x80C5EE28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C5EE28: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5EE2C:
    ctx->pc = 0x80C5EE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE2Cu)) return;
    // 80C5EE2C: addi    r3, r3, 9344
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9344);

label_80C5EE30:
    ctx->pc = 0x80C5EE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5EE30: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5EE30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EE34:
    ctx->pc = 0x80C5EE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE34u)) return;
    // 80C5EE34: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5EE38:
    ctx->pc = 0x80C5EE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE38u)) return;
    // 80C5EE38: addi    r3, r3, 9348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9348);

label_80C5EE3C:
    ctx->pc = 0x80C5EE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5EE3C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5EE3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EE40:
    ctx->pc = 0x80C5EE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE40u)) return;
    // 80C5EE40: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5EE44:
    ctx->pc = 0x80C5EE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE44u)) return;
    // 80C5EE44: addi    r3, r3, 9200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9200);

label_80C5EE48:
    ctx->pc = 0x80C5EE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5EE48: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5EE48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EE4C:
    ctx->pc = 0x80C5EE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE4Cu)) return;
    // 80C5EE4C: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80C5EE4Cu)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80C5EE50:
    ctx->pc = 0x80C5EE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE50u)) return;
    // 80C5EE50: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80C5EE50u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80C5EE54:
    ctx->pc = 0x80C5EE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE54u)) return;
    // 80C5EE54: bl      0x80C5F118
    {
            ctx->lr = 0x80C5EE58u;
            goto label_80C5F118;
    }

label_80C5EE58:
    ctx->pc = 0x80C5EE58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EE58: lis     r4, -27430
    ctx->gpr[4] = ((u32)(s32)(-27430) << 16);

label_80C5EE5C:
    ctx->pc = 0x80C5EE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE5Cu)) return;
    // 80C5EE5C: addi    r4, r4, -26760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26760);

label_80C5EE60:
    ctx->pc = 0x80C5EE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EE60: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EE64:
    ctx->pc = 0x80C5EE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE64u)) return;
    // 80C5EE64: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C5EE68:
    ctx->pc = 0x80C5EE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE68u)) return;
    // 80C5EE68: bl      0x8045F7C8
    {
            ctx->lr = 0x80C5EE6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C5EE6C:
    ctx->pc = 0x80C5EE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EE6C: b       0x80C5EEF4
    {
            goto label_80C5EEF4;
    }

label_80C5EE70:
    ctx->pc = 0x80C5EE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5EE70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EE74:
    ctx->pc = 0x80C5EE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE74u)) return;
    // 80C5EE74: bl      0x8045F220
    {
            ctx->lr = 0x80C5EE78u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C5EE78:
    ctx->pc = 0x80C5EE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EE78: bl      0x8045EFD8
    {
            ctx->lr = 0x80C5EE7Cu;
            ctx->pc = 0x8045EFD8u;
            return;
    }

label_80C5EE7C:
    ctx->pc = 0x80C5EE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5EE7C: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EE80:
    ctx->pc = 0x80C5EE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE80u)) return;
    // 80C5EE80: addi    r3, r3, -26760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26760);

label_80C5EE84:
    ctx->pc = 0x80C5EE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EE84: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EE88:
    ctx->pc = 0x80C5EE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE88u)) return;
    // 80C5EE88: cmplwi  r3, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EE8C:
    ctx->pc = 0x80C5EE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE8Cu)) return;
    // 80C5EE8C: bc    12, 2, 0x80C5EEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5EEA4;
        }
    }

label_80C5EE90:
    ctx->pc = 0x80C5EE90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EE90: bl      0x8050F9E0
    {
            ctx->lr = 0x80C5EE94u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C5EE94:
    ctx->pc = 0x80C5EE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5EE94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5EE98:
    ctx->pc = 0x80C5EE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE98u)) return;
    // 80C5EE98: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EE9C:
    ctx->pc = 0x80C5EE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EE9Cu)) return;
    // 80C5EE9C: addi    r3, r3, -26760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26760);

label_80C5EEA0:
    ctx->pc = 0x80C5EEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5EEA0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EEA4:
    ctx->pc = 0x80C5EEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EEA4: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EEA8:
    ctx->pc = 0x80C5EEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEA8u)) return;
    // 80C5EEA8: addi    r3, r3, -26784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26784);

label_80C5EEAC:
    ctx->pc = 0x80C5EEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEACu)) return;
    // 80C5EEAC: bl      0x8045F070
    {
            ctx->lr = 0x80C5EEB0u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C5EEB0:
    ctx->pc = 0x80C5EEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EEB0: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EEB4:
    ctx->pc = 0x80C5EEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEB4u)) return;
    // 80C5EEB4: addi    r3, r3, -26780
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26780);

label_80C5EEB8:
    ctx->pc = 0x80C5EEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEB8u)) return;
    // 80C5EEB8: bl      0x8045F070
    {
            ctx->lr = 0x80C5EEBCu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C5EEBC:
    ctx->pc = 0x80C5EEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EEBC: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EEC0:
    ctx->pc = 0x80C5EEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEC0u)) return;
    // 80C5EEC0: addi    r3, r3, -26776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26776);

label_80C5EEC4:
    ctx->pc = 0x80C5EEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEC4u)) return;
    // 80C5EEC4: bl      0x8045F070
    {
            ctx->lr = 0x80C5EEC8u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C5EEC8:
    ctx->pc = 0x80C5EEC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EEC8: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EECC:
    ctx->pc = 0x80C5EECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EECCu)) return;
    // 80C5EECC: addi    r3, r3, -26772
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26772);

label_80C5EED0:
    ctx->pc = 0x80C5EED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EED0u)) return;
    // 80C5EED0: bl      0x8045F070
    {
            ctx->lr = 0x80C5EED4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C5EED4:
    ctx->pc = 0x80C5EED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EED4: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EED8:
    ctx->pc = 0x80C5EED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EED8u)) return;
    // 80C5EED8: addi    r3, r3, -26768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26768);

label_80C5EEDC:
    ctx->pc = 0x80C5EEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEDCu)) return;
    // 80C5EEDC: bl      0x8045F070
    {
            ctx->lr = 0x80C5EEE0u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C5EEE0:
    ctx->pc = 0x80C5EEE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EEE0: lis     r3, -27430
    ctx->gpr[3] = ((u32)(s32)(-27430) << 16);

label_80C5EEE4:
    ctx->pc = 0x80C5EEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEE4u)) return;
    // 80C5EEE4: addi    r3, r3, -26764
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-26764);

label_80C5EEE8:
    ctx->pc = 0x80C5EEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEE8u)) return;
    // 80C5EEE8: bl      0x8045F070
    {
            ctx->lr = 0x80C5EEECu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C5EEEC:
    ctx->pc = 0x80C5EEECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EEEC: bl      0x8045DE34
    {
            ctx->lr = 0x80C5EEF0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C5EEF0:
    ctx->pc = 0x80C5EEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EEF0: bl      0x80460A80
    {
            ctx->lr = 0x80C5EEF4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C5EEF4:
    ctx->pc = 0x80C5EEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5EEF4: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5EEF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C5EEF4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EEF8:
    ctx->pc = 0x80C5EEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5EEF8: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5EEF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EEFC:
    ctx->pc = 0x80C5EEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5EEFC: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5EEFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C5EEFCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF00:
    ctx->pc = 0x80C5EF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5EF00: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF04:
    ctx->pc = 0x80C5EF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EF04: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF08:
    ctx->pc = 0x80C5EF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5EF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EF08: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF0C:
    ctx->pc = 0x80C5EF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF0Cu)) return;
    // 80C5EF0C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80C5EF10:
    ctx->pc = 0x80C5EF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF10u)) return;
    // 80C5EF10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5EF14:
    ctx->pc = 0x80C5EF14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EF14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5EF14: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF18:
    ctx->pc = 0x80C5EF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5EF18: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF1C:
    ctx->pc = 0x80C5EF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EF1C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF20:
    ctx->pc = 0x80C5EF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF20u)) return;
    // 80C5EF20: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C5EF24:
    ctx->pc = 0x80C5EF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF24u)) return;
    // 80C5EF24: bl      0x80006DD4
    {
            ctx->lr = 0x80C5EF28u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C5EF28:
    ctx->pc = 0x80C5EF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C5EF28: lwz     r27, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF2C:
    ctx->pc = 0x80C5EF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF2Cu)) return;
    // 80C5EF2C: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5EF30:
    ctx->pc = 0x80C5EF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF30u)) return;
    // 80C5EF30: addi    r3, r3, 9352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9352);

label_80C5EF34:
    ctx->pc = 0x80C5EF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C5EF34: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF38:
    ctx->pc = 0x80C5EF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5EF38: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF38u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF3C:
    ctx->pc = 0x80C5EF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF3Cu)) return;
    // 80C5EF3C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF3Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C5EF40:
    ctx->pc = 0x80C5EF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF40u)) return;
    // 80C5EF40: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C5EF44:
    ctx->pc = 0x80C5EF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5EF44: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF48:
    ctx->pc = 0x80C5EF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5EF48: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF4C:
    ctx->pc = 0x80C5EF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5EF4C: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF4Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF50:
    ctx->pc = 0x80C5EF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF50u)) return;
    // 80C5EF50: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF50u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C5EF54:
    ctx->pc = 0x80C5EF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF54u)) return;
    // 80C5EF54: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF54u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C5EF58:
    ctx->pc = 0x80C5EF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5EF58: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF5C:
    ctx->pc = 0x80C5EF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5EF5C: lwz     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF60:
    ctx->pc = 0x80C5EF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5EF60: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF60u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF64:
    ctx->pc = 0x80C5EF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF64u)) return;
    // 80C5EF64: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF64u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C5EF68:
    ctx->pc = 0x80C5EF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF68u)) return;
    // 80C5EF68: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF68u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C5EF6C:
    ctx->pc = 0x80C5EF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5EF6C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF70:
    ctx->pc = 0x80C5EF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5EF70: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF74:
    ctx->pc = 0x80C5EF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5EF74: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF74u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF78:
    ctx->pc = 0x80C5EF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF78u)) return;
    // 80C5EF78: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF78u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C5EF7C:
    ctx->pc = 0x80C5EF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF7Cu)) return;
    // 80C5EF7C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EF7Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C5EF80:
    ctx->pc = 0x80C5EF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5EF80: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5EF80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF84:
    ctx->pc = 0x80C5EF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5EF84: lwz     r28, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF88:
    ctx->pc = 0x80C5EF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF88u)) return;
    // 80C5EF88: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C5EF8C:
    ctx->pc = 0x80C5EF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF8Cu)) return;
    // 80C5EF8C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C5EF90:
    ctx->pc = 0x80C5EF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5EF90: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EF94:
    ctx->pc = 0x80C5EF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF94u)) return;
    // 80C5EF94: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EF98:
    ctx->pc = 0x80C5EF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EF98u)) return;
    // 80C5EF98: bc    4, 2, 0x80C5F050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5F050;
        }
    }

label_80C5EF9C:
    ctx->pc = 0x80C5EF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EF9C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C5EFA0:
    ctx->pc = 0x80C5EFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFA0u)) return;
    // 80C5EFA0: cmplwi  r0, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EFA4:
    ctx->pc = 0x80C5EFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFA4u)) return;
    // 80C5EFA4: bc    12, 2, 0x80C5F050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C5F050;
        }
    }

label_80C5EFA8:
    ctx->pc = 0x80C5EFA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EFA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C5EFAC:
    ctx->pc = 0x80C5EFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFACu)) return;
    // 80C5EFAC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C5EFB0:
    ctx->pc = 0x80C5EFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFB0u)) return;
    // 80C5EFB0: bl      0x8060F4F8
    {
            ctx->lr = 0x80C5EFB4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C5EFB4:
    ctx->pc = 0x80C5EFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EFB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C5EFB8:
    ctx->pc = 0x80C5EFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFB8u)) return;
    // 80C5EFB8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C5EFBC:
    ctx->pc = 0x80C5EFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFBCu)) return;
    // 80C5EFBC: bl      0x8060F4F8
    {
            ctx->lr = 0x80C5EFC0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C5EFC0:
    ctx->pc = 0x80C5EFC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5EFC0: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C5EFC0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EFC4:
    ctx->pc = 0x80C5EFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFC4u)) return;
    // 80C5EFC4: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5EFC8:
    ctx->pc = 0x80C5EFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFC8u)) return;
    // 80C5EFC8: addi    r3, r3, 9360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9360);

label_80C5EFCC:
    ctx->pc = 0x80C5EFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5EFCC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5EFCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EFD0:
    ctx->pc = 0x80C5EFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFD0u)) return;
    // 80C5EFD0: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EFD0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C5EFD4:
    ctx->pc = 0x80C5EFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFD4u)) return;
    // 80C5EFD4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C5EFD8:
    ctx->pc = 0x80C5EFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFD8u)) return;
    // 80C5EFD8: bc    4, 2, 0x80C5EFEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EFEC;
        }
    }

label_80C5EFDC:
    ctx->pc = 0x80C5EFDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C5EFDC: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5EFE0:
    ctx->pc = 0x80C5EFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFE0u)) return;
    // 80C5EFE0: addi    r3, r3, 9356
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9356);

label_80C5EFE4:
    ctx->pc = 0x80C5EFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5EFE4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5EFE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5EFE8:
    ctx->pc = 0x80C5EFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFE8u)) return;
    // 80C5EFE8: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5EFE8u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C5EFEC:
    ctx->pc = 0x80C5EFECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C5EFEC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C5EFF0:
    ctx->pc = 0x80C5EFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFF0u)) return;
    // 80C5EFF0: cmplwi  r0, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C5EFF4:
    ctx->pc = 0x80C5EFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5EFF4u)) return;
    // 80C5EFF4: bc    4, 1, 0x80C5EFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5EFFC;
        }
    }

label_80C5EFF8:
    ctx->pc = 0x80C5EFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5EFF8: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C5EFFC:
    ctx->pc = 0x80C5EFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5EFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C5EFFC: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5F000:
    ctx->pc = 0x80C5F000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F000u)) return;
    // 80C5F000: addi    r3, r3, 9364
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9364);

label_80C5F004:
    ctx->pc = 0x80C5F004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C5F004: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F004u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F008:
    ctx->pc = 0x80C5F008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F008u)) return;
    // 80C5F008: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5F008u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C5F00C:
    ctx->pc = 0x80C5F00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F00Cu)) return;
    // 80C5F00C: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5F010:
    ctx->pc = 0x80C5F010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F010u)) return;
    // 80C5F010: addi    r3, r3, 9368
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9368);

label_80C5F014:
    ctx->pc = 0x80C5F014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5F014: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F014u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F018:
    ctx->pc = 0x80C5F018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F018u)) return;
    // 80C5F018: lis     r3, -27431
    ctx->gpr[3] = ((u32)(s32)(-27431) << 16);

label_80C5F01C:
    ctx->pc = 0x80C5F01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F01Cu)) return;
    // 80C5F01C: addi    r3, r3, 9372
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9372);

label_80C5F020:
    ctx->pc = 0x80C5F020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5F020: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F020u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F024:
    ctx->pc = 0x80C5F024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F024u)) return;
    // 80C5F024: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C5F028:
    ctx->pc = 0x80C5F028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F028u)) return;
    // 80C5F028: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C5F02C:
    ctx->pc = 0x80C5F02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F02Cu)) return;
    // 80C5F02C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C5F030:
    ctx->pc = 0x80C5F030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F030u)) return;
    // 80C5F030: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C5F034:
    ctx->pc = 0x80C5F034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F034u)) return;
    // 80C5F034: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C5F038:
    ctx->pc = 0x80C5F038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F038u)) return;
    // 80C5F038: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C5F03C:
    ctx->pc = 0x80C5F03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F03Cu)) return;
    // 80C5F03C: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C5F040:
    ctx->pc = 0x80C5F040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F040u)) return;
    // 80C5F040: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C5F044:
    ctx->pc = 0x80C5F044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F044u)) return;
    // 80C5F044: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C5F048:
    ctx->pc = 0x80C5F048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F048u)) return;
    // 80C5F048: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C5F04C:
    ctx->pc = 0x80C5F04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F04Cu)) return;
    // 80C5F04C: bl      0x80C5F20C
    {
            ctx->lr = 0x80C5F050u;
            goto label_80C5F20C;
    }

label_80C5F050:
    ctx->pc = 0x80C5F050u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F050u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5F050: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C5F054:
    ctx->pc = 0x80C5F054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F054u)) return;
    // 80C5F054: bl      0x80006E20
    {
            ctx->lr = 0x80C5F058u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C5F058:
    ctx->pc = 0x80C5F058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F058: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F05C:
    ctx->pc = 0x80C5F05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5F05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F05C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F060:
    ctx->pc = 0x80C5F060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F060u)) return;
    // 80C5F060: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C5F064:
    ctx->pc = 0x80C5F064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F064u)) return;
    // 80C5F064: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F068:
    ctx->pc = 0x80C5F068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5F068: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F06C:
    ctx->pc = 0x80C5F06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5F06C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F070:
    ctx->pc = 0x80C5F070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5F070: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F074:
    ctx->pc = 0x80C5F074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5F074: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F078:
    ctx->pc = 0x80C5F078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5F078: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F078u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F07C:
    ctx->pc = 0x80C5F07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5F07C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F07Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F080:
    ctx->pc = 0x80C5F080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F080u)) return;
    // 80C5F080: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5F080u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C5F084:
    ctx->pc = 0x80C5F084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F084u)) return;
    // 80C5F084: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5F088:
    ctx->pc = 0x80C5F088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F088u)) return;
    // 80C5F088: addi    r4, r4, 9376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9376);

label_80C5F08C:
    ctx->pc = 0x80C5F08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F08C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5F08Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F090:
    ctx->pc = 0x80C5F090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F090u)) return;
    // 80C5F090: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5F090u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C5F094:
    ctx->pc = 0x80C5F094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F094u)) return;
    // 80C5F094: bc    4, 1, 0x80C5F0A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5F0A0;
        }
    }

label_80C5F098:
    ctx->pc = 0x80C5F098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C5F098: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5F098u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C5F09C:
    ctx->pc = 0x80C5F09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F09Cu)) return;
    // 80C5F09C: b       0x80C5F0B8
    {
            goto label_80C5F0B8;
    }

label_80C5F0A0:
    ctx->pc = 0x80C5F0A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F0A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5F0A0: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5F0A4:
    ctx->pc = 0x80C5F0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0A4u)) return;
    // 80C5F0A4: addi    r4, r4, 9364
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9364);

label_80C5F0A8:
    ctx->pc = 0x80C5F0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F0A8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5F0A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0AC:
    ctx->pc = 0x80C5F0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0ACu)) return;
    // 80C5F0AC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5F0ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C5F0B0:
    ctx->pc = 0x80C5F0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0B0u)) return;
    // 80C5F0B0: bc    4, 0, 0x80C5F0B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C5F0B8;
        }
    }

label_80C5F0B4:
    ctx->pc = 0x80C5F0B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F0B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5F0B4: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C5F0B4u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C5F0B8:
    ctx->pc = 0x80C5F0B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F0B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5F0B8: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F0B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0BC:
    ctx->pc = 0x80C5F0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0BCu)) return;
    // 80C5F0BC: bl      0x80C5EF14
    {
            ctx->lr = 0x80C5F0C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5EF14u;
                return;
            }
            goto label_80C5EF14;
    }

label_80C5F0C0:
    ctx->pc = 0x80C5F0C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F0C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F0C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0C4:
    ctx->pc = 0x80C5F0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5F0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F0C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0C8:
    ctx->pc = 0x80C5F0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0C8u)) return;
    // 80C5F0C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5F0CC:
    ctx->pc = 0x80C5F0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0CCu)) return;
    // 80C5F0CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F0D0:
    ctx->pc = 0x80C5F0D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F0D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C5F0D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F0D4:
    ctx->pc = 0x80C5F0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5F0D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0D8:
    ctx->pc = 0x80C5F0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5F0D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0DC:
    ctx->pc = 0x80C5F0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5F0DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0E0:
    ctx->pc = 0x80C5F0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0E0u)) return;
    // 80C5F0E0: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C5F0E4:
    ctx->pc = 0x80C5F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0E4u)) return;
    // 80C5F0E4: addi    r0, r4, -3992
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3992);

label_80C5F0E8:
    ctx->pc = 0x80C5F0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5F0E8: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0EC:
    ctx->pc = 0x80C5F0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0ECu)) return;
    // 80C5F0EC: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C5F0F0:
    ctx->pc = 0x80C5F0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0F0u)) return;
    // 80C5F0F0: addi    r0, r4, -4332
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-4332);

label_80C5F0F4:
    ctx->pc = 0x80C5F0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F0F4: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F0F8:
    ctx->pc = 0x80C5F0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0F8u)) return;
    // 80C5F0F8: lis     r4, -32570
    ctx->gpr[4] = ((u32)(s32)(-32570) << 16);

label_80C5F0FC:
    ctx->pc = 0x80C5F0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F0FCu)) return;
    // 80C5F0FC: addi    r0, r4, -3888
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3888);

label_80C5F100:
    ctx->pc = 0x80C5F100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5F100: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F104:
    ctx->pc = 0x80C5F104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F104u)) return;
    // 80C5F104: bl      0x80C5F068
    {
            ctx->lr = 0x80C5F108u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C5F068u;
                return;
            }
            goto label_80C5F068;
    }

label_80C5F108:
    ctx->pc = 0x80C5F108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F108: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F10C:
    ctx->pc = 0x80C5F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5F10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F10C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F110:
    ctx->pc = 0x80C5F110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F110u)) return;
    // 80C5F110: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5F114:
    ctx->pc = 0x80C5F114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F114u)) return;
    // 80C5F114: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F118:
    ctx->pc = 0x80C5F118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C5F118: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F11C:
    ctx->pc = 0x80C5F11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5F11C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F120:
    ctx->pc = 0x80C5F120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5F120: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F124:
    ctx->pc = 0x80C5F124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5F124: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F124u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F128:
    ctx->pc = 0x80C5F128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C5F128: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F128u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C5F128u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F12C:
    ctx->pc = 0x80C5F12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C5F12C: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F12Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F130:
    ctx->pc = 0x80C5F130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5F130: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F130u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C5F130u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F134:
    ctx->pc = 0x80C5F134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5F134: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F134u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F138:
    ctx->pc = 0x80C5F138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5F138: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F138u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C5F138u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F13C:
    ctx->pc = 0x80C5F13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5F13C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F140:
    ctx->pc = 0x80C5F140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5F140: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C5F140u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F144:
    ctx->pc = 0x80C5F144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5F144: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F144u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F148:
    ctx->pc = 0x80C5F148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5F148: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C5F148u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F14C:
    ctx->pc = 0x80C5F14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F14Cu)) return;
    // 80C5F14C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C5F14Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C5F150:
    ctx->pc = 0x80C5F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F150u)) return;
    // 80C5F150: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C5F150u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C5F154:
    ctx->pc = 0x80C5F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F154u)) return;
    // 80C5F154: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C5F154u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C5F158:
    ctx->pc = 0x80C5F158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F158u)) return;
    // 80C5F158: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C5F158u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C5F15C:
    ctx->pc = 0x80C5F15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F15Cu)) return;
    // 80C5F15C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C5F15Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C5F160:
    ctx->pc = 0x80C5F160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F160u)) return;
    // 80C5F160: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C5F164:
    ctx->pc = 0x80C5F164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F164u)) return;
    // 80C5F164: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C5F168:
    ctx->pc = 0x80C5F168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F168u)) return;
    // 80C5F168: lis     r5, -32570
    ctx->gpr[5] = ((u32)(s32)(-32570) << 16);

label_80C5F16C:
    ctx->pc = 0x80C5F16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F16Cu)) return;
    // 80C5F16C: addi    r5, r5, -3884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3884);

label_80C5F170:
    ctx->pc = 0x80C5F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F170u)) return;
    // 80C5F170: bl      0x8050FD60
    {
            ctx->lr = 0x80C5F174u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C5F174:
    ctx->pc = 0x80C5F174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C5F174: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F178:
    ctx->pc = 0x80C5F178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C5F178: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F178u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F17C:
    ctx->pc = 0x80C5F17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C5F17C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F17Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F180:
    ctx->pc = 0x80C5F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C5F180: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F180u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F184:
    ctx->pc = 0x80C5F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C5F184: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F184u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F188:
    ctx->pc = 0x80C5F188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C5F188: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F188u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F18C:
    ctx->pc = 0x80C5F18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F18Cu)) return;
    // 80C5F18C: lis     r4, -27431
    ctx->gpr[4] = ((u32)(s32)(-27431) << 16);

label_80C5F190:
    ctx->pc = 0x80C5F190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F190u)) return;
    // 80C5F190: addi    r4, r4, 9360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9360);

label_80C5F194:
    ctx->pc = 0x80C5F194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C5F194: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C5F194u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F198:
    ctx->pc = 0x80C5F198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C5F198: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C5F198u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F19C:
    ctx->pc = 0x80C5F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C5F19C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F19Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C5F19Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1A0:
    ctx->pc = 0x80C5F1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5F1A0: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1A4:
    ctx->pc = 0x80C5F1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5F1A4: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F1A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C5F1A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1A8:
    ctx->pc = 0x80C5F1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5F1A8: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1AC:
    ctx->pc = 0x80C5F1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5F1AC: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F1ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C5F1ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1B0:
    ctx->pc = 0x80C5F1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5F1B0: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1B4:
    ctx->pc = 0x80C5F1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5F1B4: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F1B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C5F1B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1B8:
    ctx->pc = 0x80C5F1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5F1B8: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1BC:
    ctx->pc = 0x80C5F1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5F1BC: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C5F1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C5F1BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1C0:
    ctx->pc = 0x80C5F1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5F1C0: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1C4:
    ctx->pc = 0x80C5F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F1C4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1C8:
    ctx->pc = 0x80C5F1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5F1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F1C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1CC:
    ctx->pc = 0x80C5F1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1CCu)) return;
    // 80C5F1CC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C5F1D0:
    ctx->pc = 0x80C5F1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1D0u)) return;
    // 80C5F1D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F1D4:
    ctx->pc = 0x80C5F1D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F1D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F1D4: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1D8:
    ctx->pc = 0x80C5F1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5F1D8: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1DC:
    ctx->pc = 0x80C5F1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1DCu)) return;
    // 80C5F1DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F1E0:
    ctx->pc = 0x80C5F1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F1E0: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1E4:
    ctx->pc = 0x80C5F1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5F1E4: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1E8:
    ctx->pc = 0x80C5F1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1E8u)) return;
    // 80C5F1E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F1EC:
    ctx->pc = 0x80C5F1ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F1ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F1EC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1F0:
    ctx->pc = 0x80C5F1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5F1F0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1F4:
    ctx->pc = 0x80C5F1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F1F4: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1F8:
    ctx->pc = 0x80C5F1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5F1F8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F1F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F1FC:
    ctx->pc = 0x80C5F1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F1FCu)) return;
    // 80C5F1FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F200:
    ctx->pc = 0x80C5F200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F200: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F204:
    ctx->pc = 0x80C5F204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5F204: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C5F204u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F208:
    ctx->pc = 0x80C5F208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F208u)) return;
    // 80C5F208: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

label_80C5F20C:
    ctx->pc = 0x80C5F20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F20C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F210:
    ctx->pc = 0x80C5F210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5F210: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F214:
    ctx->pc = 0x80C5F214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F214: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F218:
    ctx->pc = 0x80C5F218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F218u)) return;
    // 80C5F218: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C5F21C:
    ctx->pc = 0x80C5F21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F21Cu)) return;
    // 80C5F21C: bl      0x80607948
    {
            ctx->lr = 0x80C5F220u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C5F220:
    ctx->pc = 0x80C5F220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5F220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5F220: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F224:
    ctx->pc = 0x80C5F224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5F224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5F224: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5F228:
    ctx->pc = 0x80C5F228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F228u)) return;
    // 80C5F228: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5F22C:
    ctx->pc = 0x80C5F22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5F22Cu)) return;
    // 80C5F22C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C5E2A0;
        }
    }

    ctx->pc = 0x80C5F230u;
    return;
return_dispatch_80C5E2A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C5E2E4u: goto label_80C5E2E4;
    case 0x80C5E2E8u: goto label_80C5E2E8;
    case 0x80C5E2ECu: goto label_80C5E2EC;
    case 0x80C5E2F4u: goto label_80C5E2F4;
    case 0x80C5E2FCu: goto label_80C5E2FC;
    case 0x80C5E304u: goto label_80C5E304;
    case 0x80C5E32Cu: goto label_80C5E32C;
    case 0x80C5E334u: goto label_80C5E334;
    case 0x80C5E344u: goto label_80C5E344;
    case 0x80C5E34Cu: goto label_80C5E34C;
    case 0x80C5E374u: goto label_80C5E374;
    case 0x80C5E37Cu: goto label_80C5E37C;
    case 0x80C5E38Cu: goto label_80C5E38C;
    case 0x80C5E3C8u: goto label_80C5E3C8;
    case 0x80C5E404u: goto label_80C5E404;
    case 0x80C5E440u: goto label_80C5E440;
    case 0x80C5E47Cu: goto label_80C5E47C;
    case 0x80C5E4B8u: goto label_80C5E4B8;
    case 0x80C5E4F4u: goto label_80C5E4F4;
    case 0x80C5E4FCu: goto label_80C5E4FC;
    case 0x80C5E504u: goto label_80C5E504;
    case 0x80C5E508u: goto label_80C5E508;
    case 0x80C5E510u: goto label_80C5E510;
    case 0x80C5E538u: goto label_80C5E538;
    case 0x80C5E54Cu: goto label_80C5E54C;
    case 0x80C5E560u: goto label_80C5E560;
    case 0x80C5E574u: goto label_80C5E574;
    case 0x80C5E588u: goto label_80C5E588;
    case 0x80C5E59Cu: goto label_80C5E59C;
    case 0x80C5E5B0u: goto label_80C5E5B0;
    case 0x80C5E5B8u: goto label_80C5E5B8;
    case 0x80C5E5D8u: goto label_80C5E5D8;
    case 0x80C5E5F8u: goto label_80C5E5F8;
    case 0x80C5E618u: goto label_80C5E618;
    case 0x80C5E634u: goto label_80C5E634;
    case 0x80C5E63Cu: goto label_80C5E63C;
    case 0x80C5E65Cu: goto label_80C5E65C;
    case 0x80C5E67Cu: goto label_80C5E67C;
    case 0x80C5E6ACu: goto label_80C5E6AC;
    case 0x80C5E6C8u: goto label_80C5E6C8;
    case 0x80C5E6D0u: goto label_80C5E6D0;
    case 0x80C5E6F0u: goto label_80C5E6F0;
    case 0x80C5E710u: goto label_80C5E710;
    case 0x80C5E740u: goto label_80C5E740;
    case 0x80C5E75Cu: goto label_80C5E75C;
    case 0x80C5E764u: goto label_80C5E764;
    case 0x80C5E784u: goto label_80C5E784;
    case 0x80C5E7A4u: goto label_80C5E7A4;
    case 0x80C5E7D4u: goto label_80C5E7D4;
    case 0x80C5E7F0u: goto label_80C5E7F0;
    case 0x80C5E7F8u: goto label_80C5E7F8;
    case 0x80C5E818u: goto label_80C5E818;
    case 0x80C5E838u: goto label_80C5E838;
    case 0x80C5E868u: goto label_80C5E868;
    case 0x80C5E884u: goto label_80C5E884;
    case 0x80C5E88Cu: goto label_80C5E88C;
    case 0x80C5E8ACu: goto label_80C5E8AC;
    case 0x80C5E8CCu: goto label_80C5E8CC;
    case 0x80C5E8FCu: goto label_80C5E8FC;
    case 0x80C5E918u: goto label_80C5E918;
    case 0x80C5E920u: goto label_80C5E920;
    case 0x80C5E954u: goto label_80C5E954;
    case 0x80C5E988u: goto label_80C5E988;
    case 0x80C5E9BCu: goto label_80C5E9BC;
    case 0x80C5E9F0u: goto label_80C5E9F0;
    case 0x80C5EA24u: goto label_80C5EA24;
    case 0x80C5EA58u: goto label_80C5EA58;
    case 0x80C5EA60u: goto label_80C5EA60;
    case 0x80C5EA70u: goto label_80C5EA70;
    case 0x80C5EAA0u: goto label_80C5EAA0;
    case 0x80C5EABCu: goto label_80C5EABC;
    case 0x80C5EAECu: goto label_80C5EAEC;
    case 0x80C5EAF4u: goto label_80C5EAF4;
    case 0x80C5EB04u: goto label_80C5EB04;
    case 0x80C5EB34u: goto label_80C5EB34;
    case 0x80C5EB50u: goto label_80C5EB50;
    case 0x80C5EB80u: goto label_80C5EB80;
    case 0x80C5EB88u: goto label_80C5EB88;
    case 0x80C5EB8Cu: goto label_80C5EB8C;
    case 0x80C5EBA8u: goto label_80C5EBA8;
    case 0x80C5EBB4u: goto label_80C5EBB4;
    case 0x80C5EBD0u: goto label_80C5EBD0;
    case 0x80C5EBDCu: goto label_80C5EBDC;
    case 0x80C5EBE4u: goto label_80C5EBE4;
    case 0x80C5EC0Cu: goto label_80C5EC0C;
    case 0x80C5EC28u: goto label_80C5EC28;
    case 0x80C5EC2Cu: goto label_80C5EC2C;
    case 0x80C5EC34u: goto label_80C5EC34;
    case 0x80C5EC50u: goto label_80C5EC50;
    case 0x80C5EC54u: goto label_80C5EC54;
    case 0x80C5EC58u: goto label_80C5EC58;
    case 0x80C5EC60u: goto label_80C5EC60;
    case 0x80C5EC68u: goto label_80C5EC68;
    case 0x80C5EC6Cu: goto label_80C5EC6C;
    case 0x80C5EC88u: goto label_80C5EC88;
    case 0x80C5EC94u: goto label_80C5EC94;
    case 0x80C5ECB0u: goto label_80C5ECB0;
    case 0x80C5ECBCu: goto label_80C5ECBC;
    case 0x80C5ECC4u: goto label_80C5ECC4;
    case 0x80C5ECE8u: goto label_80C5ECE8;
    case 0x80C5ECF0u: goto label_80C5ECF0;
    case 0x80C5ED14u: goto label_80C5ED14;
    case 0x80C5ED1Cu: goto label_80C5ED1C;
    case 0x80C5ED38u: goto label_80C5ED38;
    case 0x80C5ED3Cu: goto label_80C5ED3C;
    case 0x80C5ED44u: goto label_80C5ED44;
    case 0x80C5ED60u: goto label_80C5ED60;
    case 0x80C5ED64u: goto label_80C5ED64;
    case 0x80C5ED68u: goto label_80C5ED68;
    case 0x80C5ED70u: goto label_80C5ED70;
    case 0x80C5EDA0u: goto label_80C5EDA0;
    case 0x80C5EDBCu: goto label_80C5EDBC;
    case 0x80C5EDC4u: goto label_80C5EDC4;
    case 0x80C5EDD4u: goto label_80C5EDD4;
    case 0x80C5EE04u: goto label_80C5EE04;
    case 0x80C5EE20u: goto label_80C5EE20;
    case 0x80C5EE28u: goto label_80C5EE28;
    case 0x80C5EE58u: goto label_80C5EE58;
    case 0x80C5EE6Cu: goto label_80C5EE6C;
    case 0x80C5EE78u: goto label_80C5EE78;
    case 0x80C5EE7Cu: goto label_80C5EE7C;
    case 0x80C5EE94u: goto label_80C5EE94;
    case 0x80C5EEB0u: goto label_80C5EEB0;
    case 0x80C5EEBCu: goto label_80C5EEBC;
    case 0x80C5EEC8u: goto label_80C5EEC8;
    case 0x80C5EED4u: goto label_80C5EED4;
    case 0x80C5EEE0u: goto label_80C5EEE0;
    case 0x80C5EEECu: goto label_80C5EEEC;
    case 0x80C5EEF0u: goto label_80C5EEF0;
    case 0x80C5EEF4u: goto label_80C5EEF4;
    case 0x80C5EF28u: goto label_80C5EF28;
    case 0x80C5EFB4u: goto label_80C5EFB4;
    case 0x80C5EFC0u: goto label_80C5EFC0;
    case 0x80C5F050u: goto label_80C5F050;
    case 0x80C5F058u: goto label_80C5F058;
    case 0x80C5F0C0u: goto label_80C5F0C0;
    case 0x80C5F108u: goto label_80C5F108;
    case 0x80C5F174u: goto label_80C5F174;
    case 0x80C5F220u: goto label_80C5F220;
    default: return;
    }
}

