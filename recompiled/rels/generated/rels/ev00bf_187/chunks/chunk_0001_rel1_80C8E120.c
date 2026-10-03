// DolRecomp output
#include "../generated.h"

void func_80C8E120(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C8E120[1363] = {
        &&label_80C8E120,
        &&label_80C8E124,
        &&label_80C8E128,
        &&label_80C8E12C,
        &&label_80C8E130,
        &&label_80C8E134,
        &&label_80C8E138,
        &&label_80C8E13C,
        &&label_80C8E140,
        &&label_80C8E144,
        &&label_80C8E148,
        &&label_80C8E14C,
        &&label_80C8E150,
        &&label_80C8E154,
        &&label_80C8E158,
        &&label_80C8E15C,
        &&label_80C8E160,
        &&label_80C8E164,
        &&label_80C8E168,
        &&label_80C8E16C,
        &&label_80C8E170,
        &&label_80C8E174,
        &&label_80C8E178,
        &&label_80C8E17C,
        &&label_80C8E180,
        &&label_80C8E184,
        &&label_80C8E188,
        &&label_80C8E18C,
        &&label_80C8E190,
        &&label_80C8E194,
        &&label_80C8E198,
        &&label_80C8E19C,
        &&label_80C8E1A0,
        &&label_80C8E1A4,
        &&label_80C8E1A8,
        &&label_80C8E1AC,
        &&label_80C8E1B0,
        &&label_80C8E1B4,
        &&label_80C8E1B8,
        &&label_80C8E1BC,
        &&label_80C8E1C0,
        &&label_80C8E1C4,
        &&label_80C8E1C8,
        &&label_80C8E1CC,
        &&label_80C8E1D0,
        &&label_80C8E1D4,
        &&label_80C8E1D8,
        &&label_80C8E1DC,
        &&label_80C8E1E0,
        &&label_80C8E1E4,
        &&label_80C8E1E8,
        &&label_80C8E1EC,
        &&label_80C8E1F0,
        &&label_80C8E1F4,
        &&label_80C8E1F8,
        &&label_80C8E1FC,
        &&label_80C8E200,
        &&label_80C8E204,
        &&label_80C8E208,
        &&label_80C8E20C,
        &&label_80C8E210,
        &&label_80C8E214,
        &&label_80C8E218,
        &&label_80C8E21C,
        &&label_80C8E220,
        &&label_80C8E224,
        &&label_80C8E228,
        &&label_80C8E22C,
        &&label_80C8E230,
        &&label_80C8E234,
        &&label_80C8E238,
        &&label_80C8E23C,
        &&label_80C8E240,
        &&label_80C8E244,
        &&label_80C8E248,
        &&label_80C8E24C,
        &&label_80C8E250,
        &&label_80C8E254,
        &&label_80C8E258,
        &&label_80C8E25C,
        &&label_80C8E260,
        &&label_80C8E264,
        &&label_80C8E268,
        &&label_80C8E26C,
        &&label_80C8E270,
        &&label_80C8E274,
        &&label_80C8E278,
        &&label_80C8E27C,
        &&label_80C8E280,
        &&label_80C8E284,
        &&label_80C8E288,
        &&label_80C8E28C,
        &&label_80C8E290,
        &&label_80C8E294,
        &&label_80C8E298,
        &&label_80C8E29C,
        &&label_80C8E2A0,
        &&label_80C8E2A4,
        &&label_80C8E2A8,
        &&label_80C8E2AC,
        &&label_80C8E2B0,
        &&label_80C8E2B4,
        &&label_80C8E2B8,
        &&label_80C8E2BC,
        &&label_80C8E2C0,
        &&label_80C8E2C4,
        &&label_80C8E2C8,
        &&label_80C8E2CC,
        &&label_80C8E2D0,
        &&label_80C8E2D4,
        &&label_80C8E2D8,
        &&label_80C8E2DC,
        &&label_80C8E2E0,
        &&label_80C8E2E4,
        &&label_80C8E2E8,
        &&label_80C8E2EC,
        &&label_80C8E2F0,
        &&label_80C8E2F4,
        &&label_80C8E2F8,
        &&label_80C8E2FC,
        &&label_80C8E300,
        &&label_80C8E304,
        &&label_80C8E308,
        &&label_80C8E30C,
        &&label_80C8E310,
        &&label_80C8E314,
        &&label_80C8E318,
        &&label_80C8E31C,
        &&label_80C8E320,
        &&label_80C8E324,
        &&label_80C8E328,
        &&label_80C8E32C,
        &&label_80C8E330,
        &&label_80C8E334,
        &&label_80C8E338,
        &&label_80C8E33C,
        &&label_80C8E340,
        &&label_80C8E344,
        &&label_80C8E348,
        &&label_80C8E34C,
        &&label_80C8E350,
        &&label_80C8E354,
        &&label_80C8E358,
        &&label_80C8E35C,
        &&label_80C8E360,
        &&label_80C8E364,
        &&label_80C8E368,
        &&label_80C8E36C,
        &&label_80C8E370,
        &&label_80C8E374,
        &&label_80C8E378,
        &&label_80C8E37C,
        &&label_80C8E380,
        &&label_80C8E384,
        &&label_80C8E388,
        &&label_80C8E38C,
        &&label_80C8E390,
        &&label_80C8E394,
        &&label_80C8E398,
        &&label_80C8E39C,
        &&label_80C8E3A0,
        &&label_80C8E3A4,
        &&label_80C8E3A8,
        &&label_80C8E3AC,
        &&label_80C8E3B0,
        &&label_80C8E3B4,
        &&label_80C8E3B8,
        &&label_80C8E3BC,
        &&label_80C8E3C0,
        &&label_80C8E3C4,
        &&label_80C8E3C8,
        &&label_80C8E3CC,
        &&label_80C8E3D0,
        &&label_80C8E3D4,
        &&label_80C8E3D8,
        &&label_80C8E3DC,
        &&label_80C8E3E0,
        &&label_80C8E3E4,
        &&label_80C8E3E8,
        &&label_80C8E3EC,
        &&label_80C8E3F0,
        &&label_80C8E3F4,
        &&label_80C8E3F8,
        &&label_80C8E3FC,
        &&label_80C8E400,
        &&label_80C8E404,
        &&label_80C8E408,
        &&label_80C8E40C,
        &&label_80C8E410,
        &&label_80C8E414,
        &&label_80C8E418,
        &&label_80C8E41C,
        &&label_80C8E420,
        &&label_80C8E424,
        &&label_80C8E428,
        &&label_80C8E42C,
        &&label_80C8E430,
        &&label_80C8E434,
        &&label_80C8E438,
        &&label_80C8E43C,
        &&label_80C8E440,
        &&label_80C8E444,
        &&label_80C8E448,
        &&label_80C8E44C,
        &&label_80C8E450,
        &&label_80C8E454,
        &&label_80C8E458,
        &&label_80C8E45C,
        &&label_80C8E460,
        &&label_80C8E464,
        &&label_80C8E468,
        &&label_80C8E46C,
        &&label_80C8E470,
        &&label_80C8E474,
        &&label_80C8E478,
        &&label_80C8E47C,
        &&label_80C8E480,
        &&label_80C8E484,
        &&label_80C8E488,
        &&label_80C8E48C,
        &&label_80C8E490,
        &&label_80C8E494,
        &&label_80C8E498,
        &&label_80C8E49C,
        &&label_80C8E4A0,
        &&label_80C8E4A4,
        &&label_80C8E4A8,
        &&label_80C8E4AC,
        &&label_80C8E4B0,
        &&label_80C8E4B4,
        &&label_80C8E4B8,
        &&label_80C8E4BC,
        &&label_80C8E4C0,
        &&label_80C8E4C4,
        &&label_80C8E4C8,
        &&label_80C8E4CC,
        &&label_80C8E4D0,
        &&label_80C8E4D4,
        &&label_80C8E4D8,
        &&label_80C8E4DC,
        &&label_80C8E4E0,
        &&label_80C8E4E4,
        &&label_80C8E4E8,
        &&label_80C8E4EC,
        &&label_80C8E4F0,
        &&label_80C8E4F4,
        &&label_80C8E4F8,
        &&label_80C8E4FC,
        &&label_80C8E500,
        &&label_80C8E504,
        &&label_80C8E508,
        &&label_80C8E50C,
        &&label_80C8E510,
        &&label_80C8E514,
        &&label_80C8E518,
        &&label_80C8E51C,
        &&label_80C8E520,
        &&label_80C8E524,
        &&label_80C8E528,
        &&label_80C8E52C,
        &&label_80C8E530,
        &&label_80C8E534,
        &&label_80C8E538,
        &&label_80C8E53C,
        &&label_80C8E540,
        &&label_80C8E544,
        &&label_80C8E548,
        &&label_80C8E54C,
        &&label_80C8E550,
        &&label_80C8E554,
        &&label_80C8E558,
        &&label_80C8E55C,
        &&label_80C8E560,
        &&label_80C8E564,
        &&label_80C8E568,
        &&label_80C8E56C,
        &&label_80C8E570,
        &&label_80C8E574,
        &&label_80C8E578,
        &&label_80C8E57C,
        &&label_80C8E580,
        &&label_80C8E584,
        &&label_80C8E588,
        &&label_80C8E58C,
        &&label_80C8E590,
        &&label_80C8E594,
        &&label_80C8E598,
        &&label_80C8E59C,
        &&label_80C8E5A0,
        &&label_80C8E5A4,
        &&label_80C8E5A8,
        &&label_80C8E5AC,
        &&label_80C8E5B0,
        &&label_80C8E5B4,
        &&label_80C8E5B8,
        &&label_80C8E5BC,
        &&label_80C8E5C0,
        &&label_80C8E5C4,
        &&label_80C8E5C8,
        &&label_80C8E5CC,
        &&label_80C8E5D0,
        &&label_80C8E5D4,
        &&label_80C8E5D8,
        &&label_80C8E5DC,
        &&label_80C8E5E0,
        &&label_80C8E5E4,
        &&label_80C8E5E8,
        &&label_80C8E5EC,
        &&label_80C8E5F0,
        &&label_80C8E5F4,
        &&label_80C8E5F8,
        &&label_80C8E5FC,
        &&label_80C8E600,
        &&label_80C8E604,
        &&label_80C8E608,
        &&label_80C8E60C,
        &&label_80C8E610,
        &&label_80C8E614,
        &&label_80C8E618,
        &&label_80C8E61C,
        &&label_80C8E620,
        &&label_80C8E624,
        &&label_80C8E628,
        &&label_80C8E62C,
        &&label_80C8E630,
        &&label_80C8E634,
        &&label_80C8E638,
        &&label_80C8E63C,
        &&label_80C8E640,
        &&label_80C8E644,
        &&label_80C8E648,
        &&label_80C8E64C,
        &&label_80C8E650,
        &&label_80C8E654,
        &&label_80C8E658,
        &&label_80C8E65C,
        &&label_80C8E660,
        &&label_80C8E664,
        &&label_80C8E668,
        &&label_80C8E66C,
        &&label_80C8E670,
        &&label_80C8E674,
        &&label_80C8E678,
        &&label_80C8E67C,
        &&label_80C8E680,
        &&label_80C8E684,
        &&label_80C8E688,
        &&label_80C8E68C,
        &&label_80C8E690,
        &&label_80C8E694,
        &&label_80C8E698,
        &&label_80C8E69C,
        &&label_80C8E6A0,
        &&label_80C8E6A4,
        &&label_80C8E6A8,
        &&label_80C8E6AC,
        &&label_80C8E6B0,
        &&label_80C8E6B4,
        &&label_80C8E6B8,
        &&label_80C8E6BC,
        &&label_80C8E6C0,
        &&label_80C8E6C4,
        &&label_80C8E6C8,
        &&label_80C8E6CC,
        &&label_80C8E6D0,
        &&label_80C8E6D4,
        &&label_80C8E6D8,
        &&label_80C8E6DC,
        &&label_80C8E6E0,
        &&label_80C8E6E4,
        &&label_80C8E6E8,
        &&label_80C8E6EC,
        &&label_80C8E6F0,
        &&label_80C8E6F4,
        &&label_80C8E6F8,
        &&label_80C8E6FC,
        &&label_80C8E700,
        &&label_80C8E704,
        &&label_80C8E708,
        &&label_80C8E70C,
        &&label_80C8E710,
        &&label_80C8E714,
        &&label_80C8E718,
        &&label_80C8E71C,
        &&label_80C8E720,
        &&label_80C8E724,
        &&label_80C8E728,
        &&label_80C8E72C,
        &&label_80C8E730,
        &&label_80C8E734,
        &&label_80C8E738,
        &&label_80C8E73C,
        &&label_80C8E740,
        &&label_80C8E744,
        &&label_80C8E748,
        &&label_80C8E74C,
        &&label_80C8E750,
        &&label_80C8E754,
        &&label_80C8E758,
        &&label_80C8E75C,
        &&label_80C8E760,
        &&label_80C8E764,
        &&label_80C8E768,
        &&label_80C8E76C,
        &&label_80C8E770,
        &&label_80C8E774,
        &&label_80C8E778,
        &&label_80C8E77C,
        &&label_80C8E780,
        &&label_80C8E784,
        &&label_80C8E788,
        &&label_80C8E78C,
        &&label_80C8E790,
        &&label_80C8E794,
        &&label_80C8E798,
        &&label_80C8E79C,
        &&label_80C8E7A0,
        &&label_80C8E7A4,
        &&label_80C8E7A8,
        &&label_80C8E7AC,
        &&label_80C8E7B0,
        &&label_80C8E7B4,
        &&label_80C8E7B8,
        &&label_80C8E7BC,
        &&label_80C8E7C0,
        &&label_80C8E7C4,
        &&label_80C8E7C8,
        &&label_80C8E7CC,
        &&label_80C8E7D0,
        &&label_80C8E7D4,
        &&label_80C8E7D8,
        &&label_80C8E7DC,
        &&label_80C8E7E0,
        &&label_80C8E7E4,
        &&label_80C8E7E8,
        &&label_80C8E7EC,
        &&label_80C8E7F0,
        &&label_80C8E7F4,
        &&label_80C8E7F8,
        &&label_80C8E7FC,
        &&label_80C8E800,
        &&label_80C8E804,
        &&label_80C8E808,
        &&label_80C8E80C,
        &&label_80C8E810,
        &&label_80C8E814,
        &&label_80C8E818,
        &&label_80C8E81C,
        &&label_80C8E820,
        &&label_80C8E824,
        &&label_80C8E828,
        &&label_80C8E82C,
        &&label_80C8E830,
        &&label_80C8E834,
        &&label_80C8E838,
        &&label_80C8E83C,
        &&label_80C8E840,
        &&label_80C8E844,
        &&label_80C8E848,
        &&label_80C8E84C,
        &&label_80C8E850,
        &&label_80C8E854,
        &&label_80C8E858,
        &&label_80C8E85C,
        &&label_80C8E860,
        &&label_80C8E864,
        &&label_80C8E868,
        &&label_80C8E86C,
        &&label_80C8E870,
        &&label_80C8E874,
        &&label_80C8E878,
        &&label_80C8E87C,
        &&label_80C8E880,
        &&label_80C8E884,
        &&label_80C8E888,
        &&label_80C8E88C,
        &&label_80C8E890,
        &&label_80C8E894,
        &&label_80C8E898,
        &&label_80C8E89C,
        &&label_80C8E8A0,
        &&label_80C8E8A4,
        &&label_80C8E8A8,
        &&label_80C8E8AC,
        &&label_80C8E8B0,
        &&label_80C8E8B4,
        &&label_80C8E8B8,
        &&label_80C8E8BC,
        &&label_80C8E8C0,
        &&label_80C8E8C4,
        &&label_80C8E8C8,
        &&label_80C8E8CC,
        &&label_80C8E8D0,
        &&label_80C8E8D4,
        &&label_80C8E8D8,
        &&label_80C8E8DC,
        &&label_80C8E8E0,
        &&label_80C8E8E4,
        &&label_80C8E8E8,
        &&label_80C8E8EC,
        &&label_80C8E8F0,
        &&label_80C8E8F4,
        &&label_80C8E8F8,
        &&label_80C8E8FC,
        &&label_80C8E900,
        &&label_80C8E904,
        &&label_80C8E908,
        &&label_80C8E90C,
        &&label_80C8E910,
        &&label_80C8E914,
        &&label_80C8E918,
        &&label_80C8E91C,
        &&label_80C8E920,
        &&label_80C8E924,
        &&label_80C8E928,
        &&label_80C8E92C,
        &&label_80C8E930,
        &&label_80C8E934,
        &&label_80C8E938,
        &&label_80C8E93C,
        &&label_80C8E940,
        &&label_80C8E944,
        &&label_80C8E948,
        &&label_80C8E94C,
        &&label_80C8E950,
        &&label_80C8E954,
        &&label_80C8E958,
        &&label_80C8E95C,
        &&label_80C8E960,
        &&label_80C8E964,
        &&label_80C8E968,
        &&label_80C8E96C,
        &&label_80C8E970,
        &&label_80C8E974,
        &&label_80C8E978,
        &&label_80C8E97C,
        &&label_80C8E980,
        &&label_80C8E984,
        &&label_80C8E988,
        &&label_80C8E98C,
        &&label_80C8E990,
        &&label_80C8E994,
        &&label_80C8E998,
        &&label_80C8E99C,
        &&label_80C8E9A0,
        &&label_80C8E9A4,
        &&label_80C8E9A8,
        &&label_80C8E9AC,
        &&label_80C8E9B0,
        &&label_80C8E9B4,
        &&label_80C8E9B8,
        &&label_80C8E9BC,
        &&label_80C8E9C0,
        &&label_80C8E9C4,
        &&label_80C8E9C8,
        &&label_80C8E9CC,
        &&label_80C8E9D0,
        &&label_80C8E9D4,
        &&label_80C8E9D8,
        &&label_80C8E9DC,
        &&label_80C8E9E0,
        &&label_80C8E9E4,
        &&label_80C8E9E8,
        &&label_80C8E9EC,
        &&label_80C8E9F0,
        &&label_80C8E9F4,
        &&label_80C8E9F8,
        &&label_80C8E9FC,
        &&label_80C8EA00,
        &&label_80C8EA04,
        &&label_80C8EA08,
        &&label_80C8EA0C,
        &&label_80C8EA10,
        &&label_80C8EA14,
        &&label_80C8EA18,
        &&label_80C8EA1C,
        &&label_80C8EA20,
        &&label_80C8EA24,
        &&label_80C8EA28,
        &&label_80C8EA2C,
        &&label_80C8EA30,
        &&label_80C8EA34,
        &&label_80C8EA38,
        &&label_80C8EA3C,
        &&label_80C8EA40,
        &&label_80C8EA44,
        &&label_80C8EA48,
        &&label_80C8EA4C,
        &&label_80C8EA50,
        &&label_80C8EA54,
        &&label_80C8EA58,
        &&label_80C8EA5C,
        &&label_80C8EA60,
        &&label_80C8EA64,
        &&label_80C8EA68,
        &&label_80C8EA6C,
        &&label_80C8EA70,
        &&label_80C8EA74,
        &&label_80C8EA78,
        &&label_80C8EA7C,
        &&label_80C8EA80,
        &&label_80C8EA84,
        &&label_80C8EA88,
        &&label_80C8EA8C,
        &&label_80C8EA90,
        &&label_80C8EA94,
        &&label_80C8EA98,
        &&label_80C8EA9C,
        &&label_80C8EAA0,
        &&label_80C8EAA4,
        &&label_80C8EAA8,
        &&label_80C8EAAC,
        &&label_80C8EAB0,
        &&label_80C8EAB4,
        &&label_80C8EAB8,
        &&label_80C8EABC,
        &&label_80C8EAC0,
        &&label_80C8EAC4,
        &&label_80C8EAC8,
        &&label_80C8EACC,
        &&label_80C8EAD0,
        &&label_80C8EAD4,
        &&label_80C8EAD8,
        &&label_80C8EADC,
        &&label_80C8EAE0,
        &&label_80C8EAE4,
        &&label_80C8EAE8,
        &&label_80C8EAEC,
        &&label_80C8EAF0,
        &&label_80C8EAF4,
        &&label_80C8EAF8,
        &&label_80C8EAFC,
        &&label_80C8EB00,
        &&label_80C8EB04,
        &&label_80C8EB08,
        &&label_80C8EB0C,
        &&label_80C8EB10,
        &&label_80C8EB14,
        &&label_80C8EB18,
        &&label_80C8EB1C,
        &&label_80C8EB20,
        &&label_80C8EB24,
        &&label_80C8EB28,
        &&label_80C8EB2C,
        &&label_80C8EB30,
        &&label_80C8EB34,
        &&label_80C8EB38,
        &&label_80C8EB3C,
        &&label_80C8EB40,
        &&label_80C8EB44,
        &&label_80C8EB48,
        &&label_80C8EB4C,
        &&label_80C8EB50,
        &&label_80C8EB54,
        &&label_80C8EB58,
        &&label_80C8EB5C,
        &&label_80C8EB60,
        &&label_80C8EB64,
        &&label_80C8EB68,
        &&label_80C8EB6C,
        &&label_80C8EB70,
        &&label_80C8EB74,
        &&label_80C8EB78,
        &&label_80C8EB7C,
        &&label_80C8EB80,
        &&label_80C8EB84,
        &&label_80C8EB88,
        &&label_80C8EB8C,
        &&label_80C8EB90,
        &&label_80C8EB94,
        &&label_80C8EB98,
        &&label_80C8EB9C,
        &&label_80C8EBA0,
        &&label_80C8EBA4,
        &&label_80C8EBA8,
        &&label_80C8EBAC,
        &&label_80C8EBB0,
        &&label_80C8EBB4,
        &&label_80C8EBB8,
        &&label_80C8EBBC,
        &&label_80C8EBC0,
        &&label_80C8EBC4,
        &&label_80C8EBC8,
        &&label_80C8EBCC,
        &&label_80C8EBD0,
        &&label_80C8EBD4,
        &&label_80C8EBD8,
        &&label_80C8EBDC,
        &&label_80C8EBE0,
        &&label_80C8EBE4,
        &&label_80C8EBE8,
        &&label_80C8EBEC,
        &&label_80C8EBF0,
        &&label_80C8EBF4,
        &&label_80C8EBF8,
        &&label_80C8EBFC,
        &&label_80C8EC00,
        &&label_80C8EC04,
        &&label_80C8EC08,
        &&label_80C8EC0C,
        &&label_80C8EC10,
        &&label_80C8EC14,
        &&label_80C8EC18,
        &&label_80C8EC1C,
        &&label_80C8EC20,
        &&label_80C8EC24,
        &&label_80C8EC28,
        &&label_80C8EC2C,
        &&label_80C8EC30,
        &&label_80C8EC34,
        &&label_80C8EC38,
        &&label_80C8EC3C,
        &&label_80C8EC40,
        &&label_80C8EC44,
        &&label_80C8EC48,
        &&label_80C8EC4C,
        &&label_80C8EC50,
        &&label_80C8EC54,
        &&label_80C8EC58,
        &&label_80C8EC5C,
        &&label_80C8EC60,
        &&label_80C8EC64,
        &&label_80C8EC68,
        &&label_80C8EC6C,
        &&label_80C8EC70,
        &&label_80C8EC74,
        &&label_80C8EC78,
        &&label_80C8EC7C,
        &&label_80C8EC80,
        &&label_80C8EC84,
        &&label_80C8EC88,
        &&label_80C8EC8C,
        &&label_80C8EC90,
        &&label_80C8EC94,
        &&label_80C8EC98,
        &&label_80C8EC9C,
        &&label_80C8ECA0,
        &&label_80C8ECA4,
        &&label_80C8ECA8,
        &&label_80C8ECAC,
        &&label_80C8ECB0,
        &&label_80C8ECB4,
        &&label_80C8ECB8,
        &&label_80C8ECBC,
        &&label_80C8ECC0,
        &&label_80C8ECC4,
        &&label_80C8ECC8,
        &&label_80C8ECCC,
        &&label_80C8ECD0,
        &&label_80C8ECD4,
        &&label_80C8ECD8,
        &&label_80C8ECDC,
        &&label_80C8ECE0,
        &&label_80C8ECE4,
        &&label_80C8ECE8,
        &&label_80C8ECEC,
        &&label_80C8ECF0,
        &&label_80C8ECF4,
        &&label_80C8ECF8,
        &&label_80C8ECFC,
        &&label_80C8ED00,
        &&label_80C8ED04,
        &&label_80C8ED08,
        &&label_80C8ED0C,
        &&label_80C8ED10,
        &&label_80C8ED14,
        &&label_80C8ED18,
        &&label_80C8ED1C,
        &&label_80C8ED20,
        &&label_80C8ED24,
        &&label_80C8ED28,
        &&label_80C8ED2C,
        &&label_80C8ED30,
        &&label_80C8ED34,
        &&label_80C8ED38,
        &&label_80C8ED3C,
        &&label_80C8ED40,
        &&label_80C8ED44,
        &&label_80C8ED48,
        &&label_80C8ED4C,
        &&label_80C8ED50,
        &&label_80C8ED54,
        &&label_80C8ED58,
        &&label_80C8ED5C,
        &&label_80C8ED60,
        &&label_80C8ED64,
        &&label_80C8ED68,
        &&label_80C8ED6C,
        &&label_80C8ED70,
        &&label_80C8ED74,
        &&label_80C8ED78,
        &&label_80C8ED7C,
        &&label_80C8ED80,
        &&label_80C8ED84,
        &&label_80C8ED88,
        &&label_80C8ED8C,
        &&label_80C8ED90,
        &&label_80C8ED94,
        &&label_80C8ED98,
        &&label_80C8ED9C,
        &&label_80C8EDA0,
        &&label_80C8EDA4,
        &&label_80C8EDA8,
        &&label_80C8EDAC,
        &&label_80C8EDB0,
        &&label_80C8EDB4,
        &&label_80C8EDB8,
        &&label_80C8EDBC,
        &&label_80C8EDC0,
        &&label_80C8EDC4,
        &&label_80C8EDC8,
        &&label_80C8EDCC,
        &&label_80C8EDD0,
        &&label_80C8EDD4,
        &&label_80C8EDD8,
        &&label_80C8EDDC,
        &&label_80C8EDE0,
        &&label_80C8EDE4,
        &&label_80C8EDE8,
        &&label_80C8EDEC,
        &&label_80C8EDF0,
        &&label_80C8EDF4,
        &&label_80C8EDF8,
        &&label_80C8EDFC,
        &&label_80C8EE00,
        &&label_80C8EE04,
        &&label_80C8EE08,
        &&label_80C8EE0C,
        &&label_80C8EE10,
        &&label_80C8EE14,
        &&label_80C8EE18,
        &&label_80C8EE1C,
        &&label_80C8EE20,
        &&label_80C8EE24,
        &&label_80C8EE28,
        &&label_80C8EE2C,
        &&label_80C8EE30,
        &&label_80C8EE34,
        &&label_80C8EE38,
        &&label_80C8EE3C,
        &&label_80C8EE40,
        &&label_80C8EE44,
        &&label_80C8EE48,
        &&label_80C8EE4C,
        &&label_80C8EE50,
        &&label_80C8EE54,
        &&label_80C8EE58,
        &&label_80C8EE5C,
        &&label_80C8EE60,
        &&label_80C8EE64,
        &&label_80C8EE68,
        &&label_80C8EE6C,
        &&label_80C8EE70,
        &&label_80C8EE74,
        &&label_80C8EE78,
        &&label_80C8EE7C,
        &&label_80C8EE80,
        &&label_80C8EE84,
        &&label_80C8EE88,
        &&label_80C8EE8C,
        &&label_80C8EE90,
        &&label_80C8EE94,
        &&label_80C8EE98,
        &&label_80C8EE9C,
        &&label_80C8EEA0,
        &&label_80C8EEA4,
        &&label_80C8EEA8,
        &&label_80C8EEAC,
        &&label_80C8EEB0,
        &&label_80C8EEB4,
        &&label_80C8EEB8,
        &&label_80C8EEBC,
        &&label_80C8EEC0,
        &&label_80C8EEC4,
        &&label_80C8EEC8,
        &&label_80C8EECC,
        &&label_80C8EED0,
        &&label_80C8EED4,
        &&label_80C8EED8,
        &&label_80C8EEDC,
        &&label_80C8EEE0,
        &&label_80C8EEE4,
        &&label_80C8EEE8,
        &&label_80C8EEEC,
        &&label_80C8EEF0,
        &&label_80C8EEF4,
        &&label_80C8EEF8,
        &&label_80C8EEFC,
        &&label_80C8EF00,
        &&label_80C8EF04,
        &&label_80C8EF08,
        &&label_80C8EF0C,
        &&label_80C8EF10,
        &&label_80C8EF14,
        &&label_80C8EF18,
        &&label_80C8EF1C,
        &&label_80C8EF20,
        &&label_80C8EF24,
        &&label_80C8EF28,
        &&label_80C8EF2C,
        &&label_80C8EF30,
        &&label_80C8EF34,
        &&label_80C8EF38,
        &&label_80C8EF3C,
        &&label_80C8EF40,
        &&label_80C8EF44,
        &&label_80C8EF48,
        &&label_80C8EF4C,
        &&label_80C8EF50,
        &&label_80C8EF54,
        &&label_80C8EF58,
        &&label_80C8EF5C,
        &&label_80C8EF60,
        &&label_80C8EF64,
        &&label_80C8EF68,
        &&label_80C8EF6C,
        &&label_80C8EF70,
        &&label_80C8EF74,
        &&label_80C8EF78,
        &&label_80C8EF7C,
        &&label_80C8EF80,
        &&label_80C8EF84,
        &&label_80C8EF88,
        &&label_80C8EF8C,
        &&label_80C8EF90,
        &&label_80C8EF94,
        &&label_80C8EF98,
        &&label_80C8EF9C,
        &&label_80C8EFA0,
        &&label_80C8EFA4,
        &&label_80C8EFA8,
        &&label_80C8EFAC,
        &&label_80C8EFB0,
        &&label_80C8EFB4,
        &&label_80C8EFB8,
        &&label_80C8EFBC,
        &&label_80C8EFC0,
        &&label_80C8EFC4,
        &&label_80C8EFC8,
        &&label_80C8EFCC,
        &&label_80C8EFD0,
        &&label_80C8EFD4,
        &&label_80C8EFD8,
        &&label_80C8EFDC,
        &&label_80C8EFE0,
        &&label_80C8EFE4,
        &&label_80C8EFE8,
        &&label_80C8EFEC,
        &&label_80C8EFF0,
        &&label_80C8EFF4,
        &&label_80C8EFF8,
        &&label_80C8EFFC,
        &&label_80C8F000,
        &&label_80C8F004,
        &&label_80C8F008,
        &&label_80C8F00C,
        &&label_80C8F010,
        &&label_80C8F014,
        &&label_80C8F018,
        &&label_80C8F01C,
        &&label_80C8F020,
        &&label_80C8F024,
        &&label_80C8F028,
        &&label_80C8F02C,
        &&label_80C8F030,
        &&label_80C8F034,
        &&label_80C8F038,
        &&label_80C8F03C,
        &&label_80C8F040,
        &&label_80C8F044,
        &&label_80C8F048,
        &&label_80C8F04C,
        &&label_80C8F050,
        &&label_80C8F054,
        &&label_80C8F058,
        &&label_80C8F05C,
        &&label_80C8F060,
        &&label_80C8F064,
        &&label_80C8F068,
        &&label_80C8F06C,
        &&label_80C8F070,
        &&label_80C8F074,
        &&label_80C8F078,
        &&label_80C8F07C,
        &&label_80C8F080,
        &&label_80C8F084,
        &&label_80C8F088,
        &&label_80C8F08C,
        &&label_80C8F090,
        &&label_80C8F094,
        &&label_80C8F098,
        &&label_80C8F09C,
        &&label_80C8F0A0,
        &&label_80C8F0A4,
        &&label_80C8F0A8,
        &&label_80C8F0AC,
        &&label_80C8F0B0,
        &&label_80C8F0B4,
        &&label_80C8F0B8,
        &&label_80C8F0BC,
        &&label_80C8F0C0,
        &&label_80C8F0C4,
        &&label_80C8F0C8,
        &&label_80C8F0CC,
        &&label_80C8F0D0,
        &&label_80C8F0D4,
        &&label_80C8F0D8,
        &&label_80C8F0DC,
        &&label_80C8F0E0,
        &&label_80C8F0E4,
        &&label_80C8F0E8,
        &&label_80C8F0EC,
        &&label_80C8F0F0,
        &&label_80C8F0F4,
        &&label_80C8F0F8,
        &&label_80C8F0FC,
        &&label_80C8F100,
        &&label_80C8F104,
        &&label_80C8F108,
        &&label_80C8F10C,
        &&label_80C8F110,
        &&label_80C8F114,
        &&label_80C8F118,
        &&label_80C8F11C,
        &&label_80C8F120,
        &&label_80C8F124,
        &&label_80C8F128,
        &&label_80C8F12C,
        &&label_80C8F130,
        &&label_80C8F134,
        &&label_80C8F138,
        &&label_80C8F13C,
        &&label_80C8F140,
        &&label_80C8F144,
        &&label_80C8F148,
        &&label_80C8F14C,
        &&label_80C8F150,
        &&label_80C8F154,
        &&label_80C8F158,
        &&label_80C8F15C,
        &&label_80C8F160,
        &&label_80C8F164,
        &&label_80C8F168,
        &&label_80C8F16C,
        &&label_80C8F170,
        &&label_80C8F174,
        &&label_80C8F178,
        &&label_80C8F17C,
        &&label_80C8F180,
        &&label_80C8F184,
        &&label_80C8F188,
        &&label_80C8F18C,
        &&label_80C8F190,
        &&label_80C8F194,
        &&label_80C8F198,
        &&label_80C8F19C,
        &&label_80C8F1A0,
        &&label_80C8F1A4,
        &&label_80C8F1A8,
        &&label_80C8F1AC,
        &&label_80C8F1B0,
        &&label_80C8F1B4,
        &&label_80C8F1B8,
        &&label_80C8F1BC,
        &&label_80C8F1C0,
        &&label_80C8F1C4,
        &&label_80C8F1C8,
        &&label_80C8F1CC,
        &&label_80C8F1D0,
        &&label_80C8F1D4,
        &&label_80C8F1D8,
        &&label_80C8F1DC,
        &&label_80C8F1E0,
        &&label_80C8F1E4,
        &&label_80C8F1E8,
        &&label_80C8F1EC,
        &&label_80C8F1F0,
        &&label_80C8F1F4,
        &&label_80C8F1F8,
        &&label_80C8F1FC,
        &&label_80C8F200,
        &&label_80C8F204,
        &&label_80C8F208,
        &&label_80C8F20C,
        &&label_80C8F210,
        &&label_80C8F214,
        &&label_80C8F218,
        &&label_80C8F21C,
        &&label_80C8F220,
        &&label_80C8F224,
        &&label_80C8F228,
        &&label_80C8F22C,
        &&label_80C8F230,
        &&label_80C8F234,
        &&label_80C8F238,
        &&label_80C8F23C,
        &&label_80C8F240,
        &&label_80C8F244,
        &&label_80C8F248,
        &&label_80C8F24C,
        &&label_80C8F250,
        &&label_80C8F254,
        &&label_80C8F258,
        &&label_80C8F25C,
        &&label_80C8F260,
        &&label_80C8F264,
        &&label_80C8F268,
        &&label_80C8F26C,
        &&label_80C8F270,
        &&label_80C8F274,
        &&label_80C8F278,
        &&label_80C8F27C,
        &&label_80C8F280,
        &&label_80C8F284,
        &&label_80C8F288,
        &&label_80C8F28C,
        &&label_80C8F290,
        &&label_80C8F294,
        &&label_80C8F298,
        &&label_80C8F29C,
        &&label_80C8F2A0,
        &&label_80C8F2A4,
        &&label_80C8F2A8,
        &&label_80C8F2AC,
        &&label_80C8F2B0,
        &&label_80C8F2B4,
        &&label_80C8F2B8,
        &&label_80C8F2BC,
        &&label_80C8F2C0,
        &&label_80C8F2C4,
        &&label_80C8F2C8,
        &&label_80C8F2CC,
        &&label_80C8F2D0,
        &&label_80C8F2D4,
        &&label_80C8F2D8,
        &&label_80C8F2DC,
        &&label_80C8F2E0,
        &&label_80C8F2E4,
        &&label_80C8F2E8,
        &&label_80C8F2EC,
        &&label_80C8F2F0,
        &&label_80C8F2F4,
        &&label_80C8F2F8,
        &&label_80C8F2FC,
        &&label_80C8F300,
        &&label_80C8F304,
        &&label_80C8F308,
        &&label_80C8F30C,
        &&label_80C8F310,
        &&label_80C8F314,
        &&label_80C8F318,
        &&label_80C8F31C,
        &&label_80C8F320,
        &&label_80C8F324,
        &&label_80C8F328,
        &&label_80C8F32C,
        &&label_80C8F330,
        &&label_80C8F334,
        &&label_80C8F338,
        &&label_80C8F33C,
        &&label_80C8F340,
        &&label_80C8F344,
        &&label_80C8F348,
        &&label_80C8F34C,
        &&label_80C8F350,
        &&label_80C8F354,
        &&label_80C8F358,
        &&label_80C8F35C,
        &&label_80C8F360,
        &&label_80C8F364,
        &&label_80C8F368,
        &&label_80C8F36C,
        &&label_80C8F370,
        &&label_80C8F374,
        &&label_80C8F378,
        &&label_80C8F37C,
        &&label_80C8F380,
        &&label_80C8F384,
        &&label_80C8F388,
        &&label_80C8F38C,
        &&label_80C8F390,
        &&label_80C8F394,
        &&label_80C8F398,
        &&label_80C8F39C,
        &&label_80C8F3A0,
        &&label_80C8F3A4,
        &&label_80C8F3A8,
        &&label_80C8F3AC,
        &&label_80C8F3B0,
        &&label_80C8F3B4,
        &&label_80C8F3B8,
        &&label_80C8F3BC,
        &&label_80C8F3C0,
        &&label_80C8F3C4,
        &&label_80C8F3C8,
        &&label_80C8F3CC,
        &&label_80C8F3D0,
        &&label_80C8F3D4,
        &&label_80C8F3D8,
        &&label_80C8F3DC,
        &&label_80C8F3E0,
        &&label_80C8F3E4,
        &&label_80C8F3E8,
        &&label_80C8F3EC,
        &&label_80C8F3F0,
        &&label_80C8F3F4,
        &&label_80C8F3F8,
        &&label_80C8F3FC,
        &&label_80C8F400,
        &&label_80C8F404,
        &&label_80C8F408,
        &&label_80C8F40C,
        &&label_80C8F410,
        &&label_80C8F414,
        &&label_80C8F418,
        &&label_80C8F41C,
        &&label_80C8F420,
        &&label_80C8F424,
        &&label_80C8F428,
        &&label_80C8F42C,
        &&label_80C8F430,
        &&label_80C8F434,
        &&label_80C8F438,
        &&label_80C8F43C,
        &&label_80C8F440,
        &&label_80C8F444,
        &&label_80C8F448,
        &&label_80C8F44C,
        &&label_80C8F450,
        &&label_80C8F454,
        &&label_80C8F458,
        &&label_80C8F45C,
        &&label_80C8F460,
        &&label_80C8F464,
        &&label_80C8F468,
        &&label_80C8F46C,
        &&label_80C8F470,
        &&label_80C8F474,
        &&label_80C8F478,
        &&label_80C8F47C,
        &&label_80C8F480,
        &&label_80C8F484,
        &&label_80C8F488,
        &&label_80C8F48C,
        &&label_80C8F490,
        &&label_80C8F494,
        &&label_80C8F498,
        &&label_80C8F49C,
        &&label_80C8F4A0,
        &&label_80C8F4A4,
        &&label_80C8F4A8,
        &&label_80C8F4AC,
        &&label_80C8F4B0,
        &&label_80C8F4B4,
        &&label_80C8F4B8,
        &&label_80C8F4BC,
        &&label_80C8F4C0,
        &&label_80C8F4C4,
        &&label_80C8F4C8,
        &&label_80C8F4CC,
        &&label_80C8F4D0,
        &&label_80C8F4D4,
        &&label_80C8F4D8,
        &&label_80C8F4DC,
        &&label_80C8F4E0,
        &&label_80C8F4E4,
        &&label_80C8F4E8,
        &&label_80C8F4EC,
        &&label_80C8F4F0,
        &&label_80C8F4F4,
        &&label_80C8F4F8,
        &&label_80C8F4FC,
        &&label_80C8F500,
        &&label_80C8F504,
        &&label_80C8F508,
        &&label_80C8F50C,
        &&label_80C8F510,
        &&label_80C8F514,
        &&label_80C8F518,
        &&label_80C8F51C,
        &&label_80C8F520,
        &&label_80C8F524,
        &&label_80C8F528,
        &&label_80C8F52C,
        &&label_80C8F530,
        &&label_80C8F534,
        &&label_80C8F538,
        &&label_80C8F53C,
        &&label_80C8F540,
        &&label_80C8F544,
        &&label_80C8F548,
        &&label_80C8F54C,
        &&label_80C8F550,
        &&label_80C8F554,
        &&label_80C8F558,
        &&label_80C8F55C,
        &&label_80C8F560,
        &&label_80C8F564,
        &&label_80C8F568,
        &&label_80C8F56C,
        &&label_80C8F570,
        &&label_80C8F574,
        &&label_80C8F578,
        &&label_80C8F57C,
        &&label_80C8F580,
        &&label_80C8F584,
        &&label_80C8F588,
        &&label_80C8F58C,
        &&label_80C8F590,
        &&label_80C8F594,
        &&label_80C8F598,
        &&label_80C8F59C,
        &&label_80C8F5A0,
        &&label_80C8F5A4,
        &&label_80C8F5A8,
        &&label_80C8F5AC,
        &&label_80C8F5B0,
        &&label_80C8F5B4,
        &&label_80C8F5B8,
        &&label_80C8F5BC,
        &&label_80C8F5C0,
        &&label_80C8F5C4,
        &&label_80C8F5C8,
        &&label_80C8F5CC,
        &&label_80C8F5D0,
        &&label_80C8F5D4,
        &&label_80C8F5D8,
        &&label_80C8F5DC,
        &&label_80C8F5E0,
        &&label_80C8F5E4,
        &&label_80C8F5E8,
        &&label_80C8F5EC,
        &&label_80C8F5F0,
        &&label_80C8F5F4,
        &&label_80C8F5F8,
        &&label_80C8F5FC,
        &&label_80C8F600,
        &&label_80C8F604,
        &&label_80C8F608,
        &&label_80C8F60C,
        &&label_80C8F610,
        &&label_80C8F614,
        &&label_80C8F618,
        &&label_80C8F61C,
        &&label_80C8F620,
        &&label_80C8F624,
        &&label_80C8F628,
        &&label_80C8F62C,
        &&label_80C8F630,
        &&label_80C8F634,
        &&label_80C8F638,
        &&label_80C8F63C,
        &&label_80C8F640,
        &&label_80C8F644,
        &&label_80C8F648,
        &&label_80C8F64C,
        &&label_80C8F650,
        &&label_80C8F654,
        &&label_80C8F658,
        &&label_80C8F65C,
        &&label_80C8F660,
        &&label_80C8F664,
        &&label_80C8F668
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C8E120u && pc <= 0x80C8F668u && ((pc - 0x80C8E120u) & 3u) == 0u)
            goto *pc_table_80C8E120[(pc - 0x80C8E120u) >> 2];
    }
    return;
label_80C8E120:
    ctx->pc = 0x80C8E120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E120: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E124:
    ctx->pc = 0x80C8E124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E124u)) return;
    // 80C8E124: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C8E128:
    ctx->pc = 0x80C8E128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E128: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E12C:
    ctx->pc = 0x80C8E12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E12Cu)) return;
    // 80C8E12C: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x80C8E12Cu)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_80C8E130:
    ctx->pc = 0x80C8E130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E130u)) return;
    // 80C8E130: fmr    f2, f29
    if (!ppc_fp_available_inline(ctx, 0x80C8E130u)) return;
    ctx->fpr[2] = ctx->fpr[29];

label_80C8E134:
    ctx->pc = 0x80C8E134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E134u)) return;
    // 80C8E134: bl      0x80401910
    {
            ctx->lr = 0x80C8E138u;
            ctx->pc = 0x80401910u;
            return;
    }

label_80C8E138:
    ctx->pc = 0x80C8E138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E138: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E13C:
    ctx->pc = 0x80C8E13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E13C: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E140:
    ctx->pc = 0x80C8E140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E140: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E144:
    ctx->pc = 0x80C8E144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E144u)) return;
    // 80C8E144: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C8E148:
    ctx->pc = 0x80C8E148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E148: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E14C:
    ctx->pc = 0x80C8E14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E14C: stw     r26, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E150:
    ctx->pc = 0x80C8E150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E150u)) return;
    // 80C8E150: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C8E154:
    ctx->pc = 0x80C8E154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E154: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E158:
    ctx->pc = 0x80C8E158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E158: stw     r28, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E15C:
    ctx->pc = 0x80C8E15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E15C: lwzx    r3, r30, r29
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E160:
    ctx->pc = 0x80C8E160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E160u)) return;
    // 80C8E160: cmplwi  r3, 0x0000
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

label_80C8E164:
    ctx->pc = 0x80C8E164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E164u)) return;
    // 80C8E164: bc    12, 2, 0x80C8E174
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E174;
        }
    }

label_80C8E168:
    ctx->pc = 0x80C8E168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E168: li      r0, 13
    ctx->gpr[0] = (u32)(s32)(13);

label_80C8E16C:
    ctx->pc = 0x80C8E16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E16C: lwz     r3, 32(r3)
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
label_80C8E170:
    ctx->pc = 0x80C8E170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8E170: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E174:
    ctx->pc = 0x80C8E174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E174: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C8E174u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E178:
    ctx->pc = 0x80C8E178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E178: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E178u)) return;
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
label_80C8E17C:
    ctx->pc = 0x80C8E17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E17C: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E17Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C8E17Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E180:
    ctx->pc = 0x80C8E180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E180: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E180u)) return;
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
label_80C8E184:
    ctx->pc = 0x80C8E184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E184: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C8E184u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E188:
    ctx->pc = 0x80C8E188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E188: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E188u)) return;
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
label_80C8E18C:
    ctx->pc = 0x80C8E18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E18Cu)) return;
    // 80C8E18C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80C8E190:
    ctx->pc = 0x80C8E190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E190u)) return;
    // 80C8E190: bl      0x80006E14
    {
            ctx->lr = 0x80C8E194u;
            ctx->pc = 0x80006E14u;
            return;
    }

label_80C8E194:
    ctx->pc = 0x80C8E194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E194: lwz     r0, 100(r1)
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
label_80C8E198:
    ctx->pc = 0x80C8E198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E198: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E19C:
    ctx->pc = 0x80C8E19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E19Cu)) return;
    // 80C8E19C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C8E1A0:
    ctx->pc = 0x80C8E1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1A0u)) return;
    // 80C8E1A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8E1A4:
    ctx->pc = 0x80C8E1A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E1A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E1A4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1A8:
    ctx->pc = 0x80C8E1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E1A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1AC:
    ctx->pc = 0x80C8E1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E1AC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1B0:
    ctx->pc = 0x80C8E1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E1B0: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E1B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1B4:
    ctx->pc = 0x80C8E1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E1B4: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E1B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C8E1B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1B8:
    ctx->pc = 0x80C8E1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E1B8: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E1B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1BC:
    ctx->pc = 0x80C8E1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E1BC: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E1BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C8E1BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1C0:
    ctx->pc = 0x80C8E1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E1C0: stfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E1C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1C4:
    ctx->pc = 0x80C8E1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E1C4: psq_st   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E1C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C8E1C4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E1C8:
    ctx->pc = 0x80C8E1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1C8u)) return;
    // 80C8E1C8: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8E1CC:
    ctx->pc = 0x80C8E1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1CCu)) return;
    // 80C8E1CC: bl      0x80006DD0
    {
            ctx->lr = 0x80C8E1D0u;
            ctx->pc = 0x80006DD0u;
            return;
    }

label_80C8E1D0:
    ctx->pc = 0x80C8E1D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E1D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E1D0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8E1D4:
    ctx->pc = 0x80C8E1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1D4u)) return;
    // 80C8E1D4: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C8E1D8:
    ctx->pc = 0x80C8E1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1D8u)) return;
    // 80C8E1D8: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8E1D8u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80C8E1DC:
    ctx->pc = 0x80C8E1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1DCu)) return;
    // 80C8E1DC: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80C8E1DCu)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80C8E1E0:
    ctx->pc = 0x80C8E1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1E0u)) return;
    // 80C8E1E0: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80C8E1E0u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80C8E1E4:
    ctx->pc = 0x80C8E1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1E4u)) return;
    // 80C8E1E4: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C8E1E8:
    ctx->pc = 0x80C8E1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1E8u)) return;
    // 80C8E1E8: bl      0x80C8D238
    {
            ctx->lr = 0x80C8E1ECu;
            ctx->pc = 0x80C8D238u;
            return;
    }

label_80C8E1EC:
    ctx->pc = 0x80C8E1ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E1ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E1EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8E1F0:
    ctx->pc = 0x80C8E1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1F0u)) return;
    // 80C8E1F0: cmpwi   r29, 0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E1F4:
    ctx->pc = 0x80C8E1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1F4u)) return;
    // 80C8E1F4: bc    12, 0, 0x80C8E290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E290;
        }
    }

label_80C8E1F8:
    ctx->pc = 0x80C8E1F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E1F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C8E1F8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C8E1FC:
    ctx->pc = 0x80C8E1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E1FCu)) return;
    // 80C8E1FC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C8E200:
    ctx->pc = 0x80C8E200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E200u)) return;
    // 80C8E200: lis     r5, -32567
    ctx->gpr[5] = ((u32)(s32)(-32567) << 16);

label_80C8E204:
    ctx->pc = 0x80C8E204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E204u)) return;
    // 80C8E204: addi    r5, r5, -6964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6964);

label_80C8E208:
    ctx->pc = 0x80C8E208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E208u)) return;
    // 80C8E208: bl      0x8050FD60
    {
            ctx->lr = 0x80C8E20Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C8E20C:
    ctx->pc = 0x80C8E20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8E20C: rlwinm r30, r29, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80C8E210:
    ctx->pc = 0x80C8E210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E210u)) return;
    // 80C8E210: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E214:
    ctx->pc = 0x80C8E214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E214u)) return;
    // 80C8E214: addi    r31, r4, 24368
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8E218:
    ctx->pc = 0x80C8E218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E218: stwx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E21C:
    ctx->pc = 0x80C8E21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E21Cu)) return;
    // 80C8E21C: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_80C8E220:
    ctx->pc = 0x80C8E220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E220u)) return;
    // 80C8E220: bl      0x8050EF60
    {
            ctx->lr = 0x80C8E224u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80C8E224:
    ctx->pc = 0x80C8E224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8E224: lwzx    r4, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E228:
    ctx->pc = 0x80C8E228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8E228: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E22C:
    ctx->pc = 0x80C8E22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8E22C: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E230:
    ctx->pc = 0x80C8E230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8E230: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E234:
    ctx->pc = 0x80C8E234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8E234: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8E234u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80C8E238:
    ctx->pc = 0x80C8E238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8E238: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8E238u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E23C:
    ctx->pc = 0x80C8E23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8E23C: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E240:
    ctx->pc = 0x80C8E240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8E240: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8E240u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80C8E244:
    ctx->pc = 0x80C8E244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8E244: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8E244u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E248:
    ctx->pc = 0x80C8E248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8E248: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E24C:
    ctx->pc = 0x80C8E24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8E24C: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8E24Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80C8E250:
    ctx->pc = 0x80C8E250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E250: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8E250u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E254:
    ctx->pc = 0x80C8E254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E254: stw     r26, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E258:
    ctx->pc = 0x80C8E258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E258: stw     r27, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E25C:
    ctx->pc = 0x80C8E25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E25C: stfs     f29, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E25Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E260:
    ctx->pc = 0x80C8E260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E260: stfs     f30, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E260u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E264:
    ctx->pc = 0x80C8E264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E264: stfs     f31, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E264u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E268:
    ctx->pc = 0x80C8E268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E268: stw     r28, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E26C:
    ctx->pc = 0x80C8E26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E26Cu)) return;
    // 80C8E26C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C8E270:
    ctx->pc = 0x80C8E270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E270: stw     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E274:
    ctx->pc = 0x80C8E274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E274: stw     r29, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E278:
    ctx->pc = 0x80C8E278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E278: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E27C:
    ctx->pc = 0x80C8E27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E27Cu)) return;
    // 80C8E27C: cmplwi  r3, 0x0000
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

label_80C8E280:
    ctx->pc = 0x80C8E280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E280u)) return;
    // 80C8E280: bc    12, 2, 0x80C8E290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E290;
        }
    }

label_80C8E284:
    ctx->pc = 0x80C8E284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E284: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_80C8E288:
    ctx->pc = 0x80C8E288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E288: lwz     r3, 32(r3)
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
label_80C8E28C:
    ctx->pc = 0x80C8E28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8E28C: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E290:
    ctx->pc = 0x80C8E290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E290: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E290u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C8E290u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E294:
    ctx->pc = 0x80C8E294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E294: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E294u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E298:
    ctx->pc = 0x80C8E298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E298: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C8E298u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E29C:
    ctx->pc = 0x80C8E29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E29Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E29C: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E29Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2A0:
    ctx->pc = 0x80C8E2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E2A0: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E2A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C8E2A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2A4:
    ctx->pc = 0x80C8E2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E2A4: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E2A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2A8:
    ctx->pc = 0x80C8E2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2A8u)) return;
    // 80C8E2A8: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8E2AC:
    ctx->pc = 0x80C8E2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2ACu)) return;
    // 80C8E2AC: bl      0x80006E1C
    {
            ctx->lr = 0x80C8E2B0u;
            ctx->pc = 0x80006E1Cu;
            return;
    }

label_80C8E2B0:
    ctx->pc = 0x80C8E2B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E2B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E2B0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2B4:
    ctx->pc = 0x80C8E2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E2B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2B8:
    ctx->pc = 0x80C8E2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2B8u)) return;
    // 80C8E2B8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80C8E2BC:
    ctx->pc = 0x80C8E2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2BCu)) return;
    // 80C8E2BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8E2C0:
    ctx->pc = 0x80C8E2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E2C0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2C4:
    ctx->pc = 0x80C8E2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E2C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2C8:
    ctx->pc = 0x80C8E2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E2C8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2CC:
    ctx->pc = 0x80C8E2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E2CC: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E2CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2D0:
    ctx->pc = 0x80C8E2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E2D0: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E2D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C8E2D0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2D4:
    ctx->pc = 0x80C8E2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E2D4: stfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E2D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2D8:
    ctx->pc = 0x80C8E2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E2D8: psq_st   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E2D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C8E2D8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2DC:
    ctx->pc = 0x80C8E2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E2DC: stfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E2DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2E0:
    ctx->pc = 0x80C8E2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E2E0: psq_st   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E2E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C8E2E0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E2E4:
    ctx->pc = 0x80C8E2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2E4u)) return;
    // 80C8E2E4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8E2E8:
    ctx->pc = 0x80C8E2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2E8u)) return;
    // 80C8E2E8: bl      0x80006DD0
    {
            ctx->lr = 0x80C8E2ECu;
            ctx->pc = 0x80006DD0u;
            return;
    }

label_80C8E2EC:
    ctx->pc = 0x80C8E2ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E2ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E2EC: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8E2F0:
    ctx->pc = 0x80C8E2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2F0u)) return;
    // 80C8E2F0: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C8E2F4:
    ctx->pc = 0x80C8E2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2F4u)) return;
    // 80C8E2F4: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8E2F4u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80C8E2F8:
    ctx->pc = 0x80C8E2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2F8u)) return;
    // 80C8E2F8: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80C8E2F8u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80C8E2FC:
    ctx->pc = 0x80C8E2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E2FCu)) return;
    // 80C8E2FC: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80C8E2FCu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80C8E300:
    ctx->pc = 0x80C8E300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E300u)) return;
    // 80C8E300: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C8E304:
    ctx->pc = 0x80C8E304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E304u)) return;
    // 80C8E304: bl      0x80C8D238
    {
            ctx->lr = 0x80C8E308u;
            ctx->pc = 0x80C8D238u;
            return;
    }

label_80C8E308:
    ctx->pc = 0x80C8E308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E308: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8E30C:
    ctx->pc = 0x80C8E30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E30Cu)) return;
    // 80C8E30C: cmpwi   r29, 0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E310:
    ctx->pc = 0x80C8E310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E310u)) return;
    // 80C8E310: bc    12, 0, 0x80C8E3AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E3AC;
        }
    }

label_80C8E314:
    ctx->pc = 0x80C8E314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C8E314: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C8E318:
    ctx->pc = 0x80C8E318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E318u)) return;
    // 80C8E318: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C8E31C:
    ctx->pc = 0x80C8E31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E31Cu)) return;
    // 80C8E31C: lis     r5, -32567
    ctx->gpr[5] = ((u32)(s32)(-32567) << 16);

label_80C8E320:
    ctx->pc = 0x80C8E320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E320u)) return;
    // 80C8E320: addi    r5, r5, -6964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6964);

label_80C8E324:
    ctx->pc = 0x80C8E324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E324u)) return;
    // 80C8E324: bl      0x8050FD60
    {
            ctx->lr = 0x80C8E328u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C8E328:
    ctx->pc = 0x80C8E328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8E328: rlwinm r30, r29, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_80C8E32C:
    ctx->pc = 0x80C8E32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E32Cu)) return;
    // 80C8E32C: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E330:
    ctx->pc = 0x80C8E330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E330u)) return;
    // 80C8E330: addi    r31, r4, 24368
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8E334:
    ctx->pc = 0x80C8E334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E334: stwx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E338:
    ctx->pc = 0x80C8E338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E338u)) return;
    // 80C8E338: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_80C8E33C:
    ctx->pc = 0x80C8E33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E33Cu)) return;
    // 80C8E33C: bl      0x8050EF60
    {
            ctx->lr = 0x80C8E340u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80C8E340:
    ctx->pc = 0x80C8E340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8E340: lwzx    r4, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E344:
    ctx->pc = 0x80C8E344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8E344: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E348:
    ctx->pc = 0x80C8E348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8E348: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E34C:
    ctx->pc = 0x80C8E34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8E34C: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E350:
    ctx->pc = 0x80C8E350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8E350: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8E350u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80C8E354:
    ctx->pc = 0x80C8E354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8E354: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8E354u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E358:
    ctx->pc = 0x80C8E358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8E358: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E35C:
    ctx->pc = 0x80C8E35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8E35C: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8E35Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80C8E360:
    ctx->pc = 0x80C8E360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8E360: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8E360u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E364:
    ctx->pc = 0x80C8E364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8E364: lwz     r4, 32(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E368:
    ctx->pc = 0x80C8E368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8E368: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8E368u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80C8E36C:
    ctx->pc = 0x80C8E36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E36C: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8E36Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E370:
    ctx->pc = 0x80C8E370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E370: stw     r26, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E374:
    ctx->pc = 0x80C8E374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E374: stw     r27, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E378:
    ctx->pc = 0x80C8E378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E378: stfs     f29, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E378u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E37C:
    ctx->pc = 0x80C8E37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E37C: stfs     f30, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E37Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E380:
    ctx->pc = 0x80C8E380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E380: stfs     f31, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E380u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E384:
    ctx->pc = 0x80C8E384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E384: stw     r28, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E388:
    ctx->pc = 0x80C8E388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E388u)) return;
    // 80C8E388: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C8E38C:
    ctx->pc = 0x80C8E38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E38C: stw     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E390:
    ctx->pc = 0x80C8E390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E390: stw     r29, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E394:
    ctx->pc = 0x80C8E394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E394: lwzx    r3, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E398:
    ctx->pc = 0x80C8E398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E398u)) return;
    // 80C8E398: cmplwi  r3, 0x0000
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

label_80C8E39C:
    ctx->pc = 0x80C8E39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E39Cu)) return;
    // 80C8E39C: bc    12, 2, 0x80C8E3AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E3AC;
        }
    }

label_80C8E3A0:
    ctx->pc = 0x80C8E3A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E3A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E3A0: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_80C8E3A4:
    ctx->pc = 0x80C8E3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E3A4: lwz     r3, 32(r3)
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
label_80C8E3A8:
    ctx->pc = 0x80C8E3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8E3A8: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3AC:
    ctx->pc = 0x80C8E3ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E3ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E3AC: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E3ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C8E3ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3B0:
    ctx->pc = 0x80C8E3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E3B0: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E3B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3B4:
    ctx->pc = 0x80C8E3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E3B4: psq_l   f30, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E3B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C8E3B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3B8:
    ctx->pc = 0x80C8E3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E3B8: lfd     f30, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E3B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3BC:
    ctx->pc = 0x80C8E3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E3BC: psq_l   f29, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C8E3BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C8E3BCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3C0:
    ctx->pc = 0x80C8E3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E3C0: lfd     f29, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8E3C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3C4:
    ctx->pc = 0x80C8E3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3C4u)) return;
    // 80C8E3C4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8E3C8:
    ctx->pc = 0x80C8E3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3C8u)) return;
    // 80C8E3C8: bl      0x80006E1C
    {
            ctx->lr = 0x80C8E3CCu;
            ctx->pc = 0x80006E1Cu;
            return;
    }

label_80C8E3CC:
    ctx->pc = 0x80C8E3CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E3CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E3CC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3D0:
    ctx->pc = 0x80C8E3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E3D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3D4:
    ctx->pc = 0x80C8E3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3D4u)) return;
    // 80C8E3D4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80C8E3D8:
    ctx->pc = 0x80C8E3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3D8u)) return;
    // 80C8E3D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8E3DC:
    ctx->pc = 0x80C8E3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E3DC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3E0:
    ctx->pc = 0x80C8E3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E3E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3E4:
    ctx->pc = 0x80C8E3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E3E4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3E8:
    ctx->pc = 0x80C8E3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E3E8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3EC:
    ctx->pc = 0x80C8E3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E3EC: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3F0:
    ctx->pc = 0x80C8E3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E3F0: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3F4:
    ctx->pc = 0x80C8E3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E3F4: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E3F8:
    ctx->pc = 0x80C8E3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3F8u)) return;
    // 80C8E3F8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8E3FC:
    ctx->pc = 0x80C8E3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E3FCu)) return;
    // 80C8E3FC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C8E400:
    ctx->pc = 0x80C8E400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E400u)) return;
    // 80C8E400: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8E404:
    ctx->pc = 0x80C8E404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E404u)) return;
    // 80C8E404: addi    r30, r3, 24368
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(24368);

label_80C8E408:
    ctx->pc = 0x80C8E408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E408u)) return;
    // 80C8E408: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80C8E40C:
    ctx->pc = 0x80C8E40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E40C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E410:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E410u)) return;
    // 80C8E410: cmplwi  r3, 0x0000
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

label_80C8E414:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E414u)) return;
    // 80C8E414: bc    12, 2, 0x80C8E434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E434;
        }
    }

label_80C8E418:
    ctx->pc = 0x80C8E418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E418: lwz     r4, 32(r3)
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
label_80C8E41C:
    ctx->pc = 0x80C8E41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E41C: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E420:
    ctx->pc = 0x80C8E420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E420: lwz     r0, 0(r4)
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
label_80C8E424:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E424u)) return;
    // 80C8E424: cmplw   r0, r28
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E428:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E428u)) return;
    // 80C8E428: bc    4, 2, 0x80C8E434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8E434;
        }
    }

label_80C8E42C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E42Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8E42C: bl      0x8050F9F0
    {
            ctx->lr = 0x80C8E430u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80C8E430:
    ctx->pc = 0x80C8E430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8E430: stw     r31, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E434:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8E434: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80C8E438:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E438u)) return;
    // 80C8E438: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80C8E43C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E43Cu)) return;
    // 80C8E43C: cmpwi   r29, 10
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E440:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E440u)) return;
    // 80C8E440: bc    12, 0, 0x80C8E40C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8E40Cu;
                return;
            }
            goto label_80C8E40C;
        }
    }

label_80C8E444:
    ctx->pc = 0x80C8E444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E444: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E448:
    ctx->pc = 0x80C8E448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E448: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E44C:
    ctx->pc = 0x80C8E44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E44C: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E450:
    ctx->pc = 0x80C8E450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E450: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E454:
    ctx->pc = 0x80C8E454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E454: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E458:
    ctx->pc = 0x80C8E458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E458: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E45C:
    ctx->pc = 0x80C8E45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E45Cu)) return;
    // 80C8E45C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8E460:
    ctx->pc = 0x80C8E460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E460u)) return;
    // 80C8E460: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8E464:
    ctx->pc = 0x80C8E464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E464: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E468:
    ctx->pc = 0x80C8E468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E468: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E46C:
    ctx->pc = 0x80C8E46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E46Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E46C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E470:
    ctx->pc = 0x80C8E470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E470: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E474:
    ctx->pc = 0x80C8E474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E474: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E478:
    ctx->pc = 0x80C8E478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E478: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E47C:
    ctx->pc = 0x80C8E47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E47Cu)) return;
    // 80C8E47C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C8E480:
    ctx->pc = 0x80C8E480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E480u)) return;
    // 80C8E480: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8E484:
    ctx->pc = 0x80C8E484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E484u)) return;
    // 80C8E484: addi    r30, r3, 24368
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(24368);

label_80C8E488:
    ctx->pc = 0x80C8E488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E488u)) return;
    // 80C8E488: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80C8E48C:
    ctx->pc = 0x80C8E48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E48C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E490:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E490u)) return;
    // 80C8E490: cmplwi  r3, 0x0000
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

label_80C8E494:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E494u)) return;
    // 80C8E494: bc    12, 2, 0x80C8E4A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E4A0;
        }
    }

label_80C8E498:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8E498: bl      0x8050F9F0
    {
            ctx->lr = 0x80C8E49Cu;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80C8E49C:
    ctx->pc = 0x80C8E49Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E49Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8E49C: stw     r31, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4A0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8E4A0: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80C8E4A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4A4u)) return;
    // 80C8E4A4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80C8E4A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4A8u)) return;
    // 80C8E4A8: cmpwi   r29, 10
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E4AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4ACu)) return;
    // 80C8E4AC: bc    12, 0, 0x80C8E48C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8E48Cu;
                return;
            }
            goto label_80C8E48C;
        }
    }

label_80C8E4B0:
    ctx->pc = 0x80C8E4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E4B0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4B4:
    ctx->pc = 0x80C8E4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E4B4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4B8:
    ctx->pc = 0x80C8E4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E4B8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4BC:
    ctx->pc = 0x80C8E4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E4BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4C0:
    ctx->pc = 0x80C8E4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E4C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4C4:
    ctx->pc = 0x80C8E4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4C4u)) return;
    // 80C8E4C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8E4C8:
    ctx->pc = 0x80C8E4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4C8u)) return;
    // 80C8E4C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8E4CC:
    ctx->pc = 0x80C8E4CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E4CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C8E4CC: lis     r4, -32567
    ctx->gpr[4] = ((u32)(s32)(-32567) << 16);

label_80C8E4D0:
    ctx->pc = 0x80C8E4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4D0u)) return;
    // 80C8E4D0: addi    r0, r4, -6924
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-6924);

label_80C8E4D4:
    ctx->pc = 0x80C8E4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E4D4: stw     r0, 16(r3)
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
label_80C8E4D8:
    ctx->pc = 0x80C8E4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4D8u)) return;
    // 80C8E4D8: lis     r4, -32567
    ctx->gpr[4] = ((u32)(s32)(-32567) << 16);

label_80C8E4DC:
    ctx->pc = 0x80C8E4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4DCu)) return;
    // 80C8E4DC: addi    r0, r4, -4120
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-4120);

label_80C8E4E0:
    ctx->pc = 0x80C8E4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E4E0: stw     r0, 20(r3)
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
label_80C8E4E4:
    ctx->pc = 0x80C8E4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4E4u)) return;
    // 80C8E4E4: lis     r4, -32567
    ctx->gpr[4] = ((u32)(s32)(-32567) << 16);

label_80C8E4E8:
    ctx->pc = 0x80C8E4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4E8u)) return;
    // 80C8E4E8: addi    r0, r4, -4116
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-4116);

label_80C8E4EC:
    ctx->pc = 0x80C8E4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E4EC: stw     r0, 24(r3)
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
label_80C8E4F0:
    ctx->pc = 0x80C8E4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4F0u)) return;
    // 80C8E4F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8E4F4:
    ctx->pc = 0x80C8E4F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E4F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E4F4: stwu     r1, -64(r1)
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
label_80C8E4F8:
    ctx->pc = 0x80C8E4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E4F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E4FC:
    ctx->pc = 0x80C8E4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E4FC: stw     r0, 68(r1)
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
label_80C8E500:
    ctx->pc = 0x80C8E500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E500: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E504:
    ctx->pc = 0x80C8E504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E504: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E508:
    ctx->pc = 0x80C8E508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E508: stw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E50C:
    ctx->pc = 0x80C8E50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E50C: stw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E510:
    ctx->pc = 0x80C8E510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E510: lwz     r31, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E514:
    ctx->pc = 0x80C8E514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E514: lwz     r30, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E518:
    ctx->pc = 0x80C8E518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E518: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E51C:
    ctx->pc = 0x80C8E51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E51C: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E520:
    ctx->pc = 0x80C8E520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E520u)) return;
    // 80C8E520: cmplwi  r0, 0x0000
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

label_80C8E524:
    ctx->pc = 0x80C8E524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E524u)) return;
    // 80C8E524: bc    4, 2, 0x80C8E534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8E534;
        }
    }

label_80C8E528:
    ctx->pc = 0x80C8E528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E528: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80C8E52C:
    ctx->pc = 0x80C8E52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E52C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E530:
    ctx->pc = 0x80C8E530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E530u)) return;
    // 80C8E530: b       0x80C8E578
    {
            goto label_80C8E578;
    }

label_80C8E534:
    ctx->pc = 0x80C8E534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E534: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E538:
    ctx->pc = 0x80C8E538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E538u)) return;
    // 80C8E538: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C8E53C:
    ctx->pc = 0x80C8E53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E53Cu)) return;
    // 80C8E53C: addi    r0, r4, -8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8);

label_80C8E540:
    ctx->pc = 0x80C8E540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E540u)) return;
    // 80C8E540: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E544:
    ctx->pc = 0x80C8E544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E544u)) return;
    // 80C8E544: bc    12, 1, 0x80C8E578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8E578;
        }
    }

label_80C8E548:
    ctx->pc = 0x80C8E548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E548: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E54C:
    ctx->pc = 0x80C8E54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E54Cu)) return;
    // 80C8E54C: addi    r4, r4, 24508
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24508);

label_80C8E550:
    ctx->pc = 0x80C8E550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E550u)) return;
    // 80C8E550: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8E554:
    ctx->pc = 0x80C8E554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E554: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E558:
    ctx->pc = 0x80C8E558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E558: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E55C:
    ctx->pc = 0x80C8E55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E55Cu)) return;
    // 80C8E55C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80C8E560:
    ctx->pc = 0x80C8E560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E560: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E564:
    ctx->pc = 0x80C8E564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E564: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E568:
    ctx->pc = 0x80C8E568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E568u)) return;
    // 80C8E568: cmplwi  r0, 0x0000
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

label_80C8E56C:
    ctx->pc = 0x80C8E56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E56Cu)) return;
    // 80C8E56C: bc    4, 2, 0x80C8E578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8E578;
        }
    }

label_80C8E570:
    ctx->pc = 0x80C8E570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8E570: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80C8E574:
    ctx->pc = 0x80C8E574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8E574: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E578:
    ctx->pc = 0x80C8E578u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E578u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E578: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E57C:
    ctx->pc = 0x80C8E57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E57Cu)) return;
    // 80C8E57C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80C8E580:
    ctx->pc = 0x80C8E580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E580u)) return;
    // 80C8E580: cmplwi  r0, 0x0018
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0018u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E584:
    ctx->pc = 0x80C8E584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E584u)) return;
    // 80C8E584: bc    12, 1, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E588:
    ctx->pc = 0x80C8E588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E588: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E58C:
    ctx->pc = 0x80C8E58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E58Cu)) return;
    // 80C8E58C: addi    r4, r4, 24408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24408);

label_80C8E590:
    ctx->pc = 0x80C8E590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E590u)) return;
    // 80C8E590: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8E594:
    ctx->pc = 0x80C8E594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E594: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E598:
    ctx->pc = 0x80C8E598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8E598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E598: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E59C:
    ctx->pc = 0x80C8E59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E59Cu)) return;
    // 80C8E59C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80C8E5A0:
    ctx->pc = 0x80C8E5A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E5A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E5A0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80C8E5A4:
    ctx->pc = 0x80C8E5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E5A4: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5A8:
    ctx->pc = 0x80C8E5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5A8u)) return;
    // 80C8E5A8: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E5AC:
    ctx->pc = 0x80C8E5ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 42u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E5ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 42u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C8E5AC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8E5B0:
    ctx->pc = 0x80C8E5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C8E5B0: lfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_80C8E5B4:
    ctx->pc = 0x80C8E5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5B4u)) return;
    // 80C8E5B4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E5B4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E5B8:
    ctx->pc = 0x80C8E5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C8E5B8: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5BC:
    ctx->pc = 0x80C8E5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C8E5BC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8E5C0:
    ctx->pc = 0x80C8E5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C8E5C0: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80C8E5C4:
    ctx->pc = 0x80C8E5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5C4u)) return;
    // 80C8E5C4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E5C4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E5C8:
    ctx->pc = 0x80C8E5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C8E5C8: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5CC:
    ctx->pc = 0x80C8E5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8E5CC: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8E5D0:
    ctx->pc = 0x80C8E5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8E5D0: lfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80C8E5D4:
    ctx->pc = 0x80C8E5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5D4u)) return;
    // 80C8E5D4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E5D4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E5D8:
    ctx->pc = 0x80C8E5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8E5D8: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5DC:
    ctx->pc = 0x80C8E5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8E5DC: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8E5E0:
    ctx->pc = 0x80C8E5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8E5E0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5E4:
    ctx->pc = 0x80C8E5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8E5E4: lwz     r3, 32(r3)
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
label_80C8E5E8:
    ctx->pc = 0x80C8E5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8E5E8: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5EC:
    ctx->pc = 0x80C8E5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8E5EC: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8E5F0:
    ctx->pc = 0x80C8E5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8E5F0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5F4:
    ctx->pc = 0x80C8E5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8E5F4: lwz     r3, 32(r3)
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
label_80C8E5F8:
    ctx->pc = 0x80C8E5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8E5F8: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E5FC:
    ctx->pc = 0x80C8E5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8E5FC: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E5FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8E600:
    ctx->pc = 0x80C8E600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8E600: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E604:
    ctx->pc = 0x80C8E604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8E604: lwz     r3, 32(r3)
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
label_80C8E608:
    ctx->pc = 0x80C8E608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8E608: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E60C:
    ctx->pc = 0x80C8E60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8E60C: lwz     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E610:
    ctx->pc = 0x80C8E610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8E610: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E614:
    ctx->pc = 0x80C8E614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8E614: lwz     r3, 32(r3)
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
label_80C8E618:
    ctx->pc = 0x80C8E618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8E618: stw     r0, 20(r3)
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
label_80C8E61C:
    ctx->pc = 0x80C8E61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8E61C: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E620:
    ctx->pc = 0x80C8E620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E620: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E624:
    ctx->pc = 0x80C8E624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E624: lwz     r3, 32(r3)
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
label_80C8E628:
    ctx->pc = 0x80C8E628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E628: stw     r0, 24(r3)
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
label_80C8E62C:
    ctx->pc = 0x80C8E62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E62C: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E630:
    ctx->pc = 0x80C8E630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E630: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E634:
    ctx->pc = 0x80C8E634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E634: lwz     r3, 32(r3)
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
label_80C8E638:
    ctx->pc = 0x80C8E638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E638: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E63C:
    ctx->pc = 0x80C8E63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E63C: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E640:
    ctx->pc = 0x80C8E640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E640u)) return;
    // 80C8E640: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8E644:
    ctx->pc = 0x80C8E644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E644: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E648:
    ctx->pc = 0x80C8E648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E648: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E64C:
    ctx->pc = 0x80C8E64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E64Cu)) return;
    // 80C8E64C: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E650:
    ctx->pc = 0x80C8E650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E650u)) return;
    // 80C8E650: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E654:
    ctx->pc = 0x80C8E654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E654: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80C8E658:
    ctx->pc = 0x80C8E658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E658: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E65C:
    ctx->pc = 0x80C8E65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E65Cu)) return;
    // 80C8E65C: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E660:
    ctx->pc = 0x80C8E660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8E660: cmplwi  r3, 0x0000
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

label_80C8E664:
    ctx->pc = 0x80C8E664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E664u)) return;
    // 80C8E664: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E668:
    ctx->pc = 0x80C8E668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E668: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8E66C:
    ctx->pc = 0x80C8E66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E66C: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E670:
    ctx->pc = 0x80C8E670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E670u)) return;
    // 80C8E670: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8E674:
    ctx->pc = 0x80C8E674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E674u)) return;
    // 80C8E674: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E678:
    ctx->pc = 0x80C8E678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E678u)) return;
    // 80C8E678: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8E67C:
    ctx->pc = 0x80C8E67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E67C: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E680:
    ctx->pc = 0x80C8E680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E680u)) return;
    // 80C8E680: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8E684u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8E684:
    ctx->pc = 0x80C8E684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8E684: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E688:
    ctx->pc = 0x80C8E688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E688: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80C8E68C:
    ctx->pc = 0x80C8E68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E68C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E690:
    ctx->pc = 0x80C8E690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E690u)) return;
    // 80C8E690: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E694:
    ctx->pc = 0x80C8E694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 54u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 54u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80C8E694: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E694u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8E698:
    ctx->pc = 0x80C8E698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80C8E698: lfs     f0, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E698u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
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
label_80C8E69C:
    ctx->pc = 0x80C8E69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E69Cu)) return;
    // 80C8E69C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E69Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E6A0:
    ctx->pc = 0x80C8E6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80C8E6A0: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6A4:
    ctx->pc = 0x80C8E6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C8E6A4: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8E6A8:
    ctx->pc = 0x80C8E6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80C8E6A8: lfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6A8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80C8E6AC:
    ctx->pc = 0x80C8E6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6ACu)) return;
    // 80C8E6AC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E6ACu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E6B0:
    ctx->pc = 0x80C8E6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80C8E6B0: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6B4:
    ctx->pc = 0x80C8E6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80C8E6B4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6B4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8E6B8:
    ctx->pc = 0x80C8E6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C8E6B8: lfs     f0, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6B8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
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
label_80C8E6BC:
    ctx->pc = 0x80C8E6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6BCu)) return;
    // 80C8E6BC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E6BCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E6C0:
    ctx->pc = 0x80C8E6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80C8E6C0: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E6C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6C4:
    ctx->pc = 0x80C8E6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C8E6C4: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6C8:
    ctx->pc = 0x80C8E6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C8E6C8: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6CC:
    ctx->pc = 0x80C8E6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6CCu)) return;
    // 80C8E6CC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8E6D0:
    ctx->pc = 0x80C8E6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C8E6D0: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6D4:
    ctx->pc = 0x80C8E6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C8E6D4: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6D8:
    ctx->pc = 0x80C8E6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C8E6D8: lwz     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6DC:
    ctx->pc = 0x80C8E6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6DCu)) return;
    // 80C8E6DC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8E6E0:
    ctx->pc = 0x80C8E6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C8E6E0: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6E4:
    ctx->pc = 0x80C8E6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8E6E4: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6E8:
    ctx->pc = 0x80C8E6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8E6E8: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6EC:
    ctx->pc = 0x80C8E6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6ECu)) return;
    // 80C8E6EC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8E6F0:
    ctx->pc = 0x80C8E6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8E6F0: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6F4:
    ctx->pc = 0x80C8E6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8E6F4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6F8:
    ctx->pc = 0x80C8E6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8E6F8: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E6FC:
    ctx->pc = 0x80C8E6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8E6FC: lwz     r3, 32(r3)
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
label_80C8E700:
    ctx->pc = 0x80C8E700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E700u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8E700: stw     r0, 20(r3)
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
label_80C8E704:
    ctx->pc = 0x80C8E704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8E704: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E708:
    ctx->pc = 0x80C8E708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8E708: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E70C:
    ctx->pc = 0x80C8E70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8E70C: lwz     r3, 32(r3)
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
label_80C8E710:
    ctx->pc = 0x80C8E710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8E710: stw     r0, 24(r3)
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
label_80C8E714:
    ctx->pc = 0x80C8E714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8E714: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E718:
    ctx->pc = 0x80C8E718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8E718: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E71C:
    ctx->pc = 0x80C8E71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8E71C: lwz     r3, 32(r3)
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
label_80C8E720:
    ctx->pc = 0x80C8E720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8E720: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E724:
    ctx->pc = 0x80C8E724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8E724: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E724u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8E728:
    ctx->pc = 0x80C8E728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8E728: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E72C:
    ctx->pc = 0x80C8E72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8E72C: lwz     r3, 32(r3)
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
label_80C8E730:
    ctx->pc = 0x80C8E730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8E730: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E730u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E734:
    ctx->pc = 0x80C8E734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8E734: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E734u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8E738:
    ctx->pc = 0x80C8E738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E738: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E73C:
    ctx->pc = 0x80C8E73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E73C: lwz     r3, 32(r3)
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
label_80C8E740:
    ctx->pc = 0x80C8E740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E740: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E740u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E744:
    ctx->pc = 0x80C8E744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E744: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E744u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8E748:
    ctx->pc = 0x80C8E748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E748: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E74C:
    ctx->pc = 0x80C8E74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E74C: lwz     r3, 32(r3)
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
label_80C8E750:
    ctx->pc = 0x80C8E750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E750: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E750u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E754:
    ctx->pc = 0x80C8E754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E754: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E758:
    ctx->pc = 0x80C8E758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E758u)) return;
    // 80C8E758: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8E75C:
    ctx->pc = 0x80C8E75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E75C: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E760:
    ctx->pc = 0x80C8E760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E760: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E764:
    ctx->pc = 0x80C8E764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E764u)) return;
    // 80C8E764: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E768:
    ctx->pc = 0x80C8E768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E768u)) return;
    // 80C8E768: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E76C:
    ctx->pc = 0x80C8E76Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E76Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E76C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80C8E770:
    ctx->pc = 0x80C8E770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E770: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E774:
    ctx->pc = 0x80C8E774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E774u)) return;
    // 80C8E774: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E778:
    ctx->pc = 0x80C8E778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8E778: cmplwi  r3, 0x0000
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

label_80C8E77C:
    ctx->pc = 0x80C8E77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E77Cu)) return;
    // 80C8E77C: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E780:
    ctx->pc = 0x80C8E780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E780: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8E784:
    ctx->pc = 0x80C8E784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E784: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E788:
    ctx->pc = 0x80C8E788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E788u)) return;
    // 80C8E788: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8E78C:
    ctx->pc = 0x80C8E78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E78Cu)) return;
    // 80C8E78C: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E790:
    ctx->pc = 0x80C8E790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E790u)) return;
    // 80C8E790: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8E794:
    ctx->pc = 0x80C8E794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E794: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E798:
    ctx->pc = 0x80C8E798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E798u)) return;
    // 80C8E798: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8E79Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8E79C:
    ctx->pc = 0x80C8E79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8E79C: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E7A0:
    ctx->pc = 0x80C8E7A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E7A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E7A0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_80C8E7A4:
    ctx->pc = 0x80C8E7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E7A4: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7A8:
    ctx->pc = 0x80C8E7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7A8u)) return;
    // 80C8E7A8: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E7AC:
    ctx->pc = 0x80C8E7ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 45u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E7ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 45u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C8E7AC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7B0:
    ctx->pc = 0x80C8E7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80C8E7B0: lwz     r3, 32(r3)
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
label_80C8E7B4:
    ctx->pc = 0x80C8E7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80C8E7B4: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7B4u)) return;
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
label_80C8E7B8:
    ctx->pc = 0x80C8E7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C8E7B8: lfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7B8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_80C8E7BC:
    ctx->pc = 0x80C8E7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7BCu)) return;
    // 80C8E7BC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E7BCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E7C0:
    ctx->pc = 0x80C8E7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80C8E7C0: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7C4:
    ctx->pc = 0x80C8E7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C8E7C4: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7C8:
    ctx->pc = 0x80C8E7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C8E7C8: lwz     r3, 32(r3)
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
label_80C8E7CC:
    ctx->pc = 0x80C8E7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C8E7CC: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7CCu)) return;
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
label_80C8E7D0:
    ctx->pc = 0x80C8E7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80C8E7D0: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
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
label_80C8E7D4:
    ctx->pc = 0x80C8E7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7D4u)) return;
    // 80C8E7D4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E7D4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E7D8:
    ctx->pc = 0x80C8E7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8E7D8: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7DC:
    ctx->pc = 0x80C8E7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8E7DC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7E0:
    ctx->pc = 0x80C8E7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80C8E7E0: lwz     r3, 32(r3)
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
label_80C8E7E4:
    ctx->pc = 0x80C8E7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8E7E4: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7E4u)) return;
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
label_80C8E7E8:
    ctx->pc = 0x80C8E7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8E7E8: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
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
label_80C8E7EC:
    ctx->pc = 0x80C8E7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7ECu)) return;
    // 80C8E7EC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E7ECu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E7F0:
    ctx->pc = 0x80C8E7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8E7F0: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7F4:
    ctx->pc = 0x80C8E7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8E7F4: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E7F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8E7F8:
    ctx->pc = 0x80C8E7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8E7F8: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E7FC:
    ctx->pc = 0x80C8E7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E7FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8E7FC: lwz     r3, 32(r3)
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
label_80C8E800:
    ctx->pc = 0x80C8E800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8E800: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E800u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E804:
    ctx->pc = 0x80C8E804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8E804: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E804u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8E808:
    ctx->pc = 0x80C8E808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8E808: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E80C:
    ctx->pc = 0x80C8E80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8E80C: lwz     r3, 32(r3)
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
label_80C8E810:
    ctx->pc = 0x80C8E810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8E810: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E810u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E814:
    ctx->pc = 0x80C8E814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8E814: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E814u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8E818:
    ctx->pc = 0x80C8E818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8E818: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E81C:
    ctx->pc = 0x80C8E81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8E81C: lwz     r3, 32(r3)
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
label_80C8E820:
    ctx->pc = 0x80C8E820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8E820: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E820u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E824:
    ctx->pc = 0x80C8E824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8E824: lwz     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E828:
    ctx->pc = 0x80C8E828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8E828: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E82C:
    ctx->pc = 0x80C8E82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E82C: lwz     r3, 32(r3)
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
label_80C8E830:
    ctx->pc = 0x80C8E830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E830: stw     r0, 20(r3)
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
label_80C8E834:
    ctx->pc = 0x80C8E834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E834: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E838:
    ctx->pc = 0x80C8E838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E838: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E83C:
    ctx->pc = 0x80C8E83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E83C: lwz     r3, 32(r3)
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
label_80C8E840:
    ctx->pc = 0x80C8E840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E840: stw     r0, 24(r3)
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
label_80C8E844:
    ctx->pc = 0x80C8E844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E844: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E848:
    ctx->pc = 0x80C8E848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E848: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E84C:
    ctx->pc = 0x80C8E84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E84C: lwz     r3, 32(r3)
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
label_80C8E850:
    ctx->pc = 0x80C8E850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E850: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E854:
    ctx->pc = 0x80C8E854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E854: lwz     r4, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E858:
    ctx->pc = 0x80C8E858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E858u)) return;
    // 80C8E858: cmpwi   r4, -1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E85C:
    ctx->pc = 0x80C8E85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E85Cu)) return;
    // 80C8E85C: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E860:
    ctx->pc = 0x80C8E860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8E860: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E864:
    ctx->pc = 0x80C8E864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E864u)) return;
    // 80C8E864: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8E868:
    ctx->pc = 0x80C8E868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E868: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E86C:
    ctx->pc = 0x80C8E86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E86Cu)) return;
    // 80C8E86C: cmpw    r0, r4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E870:
    ctx->pc = 0x80C8E870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E870u)) return;
    // 80C8E870: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E874:
    ctx->pc = 0x80C8E874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E874: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_80C8E878:
    ctx->pc = 0x80C8E878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E878: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E87C:
    ctx->pc = 0x80C8E87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E87Cu)) return;
    // 80C8E87C: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E880:
    ctx->pc = 0x80C8E880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8E880: cmplwi  r3, 0x0000
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

label_80C8E884:
    ctx->pc = 0x80C8E884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E884u)) return;
    // 80C8E884: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E888:
    ctx->pc = 0x80C8E888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E888: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8E88C:
    ctx->pc = 0x80C8E88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E88C: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E890:
    ctx->pc = 0x80C8E890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E890u)) return;
    // 80C8E890: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8E894:
    ctx->pc = 0x80C8E894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E894u)) return;
    // 80C8E894: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E898:
    ctx->pc = 0x80C8E898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E898u)) return;
    // 80C8E898: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8E89C:
    ctx->pc = 0x80C8E89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E89Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E89C: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8A0:
    ctx->pc = 0x80C8E8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8A0u)) return;
    // 80C8E8A0: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8E8A4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8E8A4:
    ctx->pc = 0x80C8E8A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E8A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8E8A4: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E8A8:
    ctx->pc = 0x80C8E8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E8A8: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_80C8E8AC:
    ctx->pc = 0x80C8E8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E8AC: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8B0:
    ctx->pc = 0x80C8E8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8B0u)) return;
    // 80C8E8B0: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E8B4:
    ctx->pc = 0x80C8E8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 66u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 66u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 80C8E8B4: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8B8:
    ctx->pc = 0x80C8E8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 80C8E8B8: lwz     r3, 32(r3)
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
label_80C8E8BC:
    ctx->pc = 0x80C8E8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 63u : 0u;
    // 80C8E8BC: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8BCu)) return;
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
label_80C8E8C0:
    ctx->pc = 0x80C8E8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 80C8E8C0: lfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_80C8E8C4:
    ctx->pc = 0x80C8E8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8C4u)) return;
    // 80C8E8C4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E8C4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E8C8:
    ctx->pc = 0x80C8E8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 80C8E8C8: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8CC:
    ctx->pc = 0x80C8E8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80C8E8CC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8D0:
    ctx->pc = 0x80C8E8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80C8E8D0: lwz     r3, 32(r3)
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
label_80C8E8D4:
    ctx->pc = 0x80C8E8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80C8E8D4: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8D4u)) return;
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
label_80C8E8D8:
    ctx->pc = 0x80C8E8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80C8E8D8: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8D8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
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
label_80C8E8DC:
    ctx->pc = 0x80C8E8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8DCu)) return;
    // 80C8E8DC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E8DCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E8E0:
    ctx->pc = 0x80C8E8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80C8E8E0: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8E4:
    ctx->pc = 0x80C8E8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80C8E8E4: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8E8:
    ctx->pc = 0x80C8E8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80C8E8E8: lwz     r3, 32(r3)
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
label_80C8E8EC:
    ctx->pc = 0x80C8E8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C8E8EC: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8ECu)) return;
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
label_80C8E8F0:
    ctx->pc = 0x80C8E8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80C8E8F0: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8F0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
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
label_80C8E8F4:
    ctx->pc = 0x80C8E8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8F4u)) return;
    // 80C8E8F4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8E8F4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8E8F8:
    ctx->pc = 0x80C8E8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80C8E8F8: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E8F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E8FC:
    ctx->pc = 0x80C8E8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80C8E8FC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E900:
    ctx->pc = 0x80C8E900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80C8E900: lwz     r3, 32(r3)
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
label_80C8E904:
    ctx->pc = 0x80C8E904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80C8E904: lwz     r3, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E908:
    ctx->pc = 0x80C8E908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C8E908: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E90C:
    ctx->pc = 0x80C8E90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E90Cu)) return;
    // 80C8E90C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8E910:
    ctx->pc = 0x80C8E910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80C8E910: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E914:
    ctx->pc = 0x80C8E914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C8E914: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E918:
    ctx->pc = 0x80C8E918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C8E918: lwz     r3, 32(r3)
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
label_80C8E91C:
    ctx->pc = 0x80C8E91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E91Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80C8E91C: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E920:
    ctx->pc = 0x80C8E920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C8E920: lwz     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E924:
    ctx->pc = 0x80C8E924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E924u)) return;
    // 80C8E924: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8E928:
    ctx->pc = 0x80C8E928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E928u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C8E928: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E92C:
    ctx->pc = 0x80C8E92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E92Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80C8E92C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E930:
    ctx->pc = 0x80C8E930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C8E930: lwz     r3, 32(r3)
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
label_80C8E934:
    ctx->pc = 0x80C8E934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8E934: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E938:
    ctx->pc = 0x80C8E938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8E938: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E93C:
    ctx->pc = 0x80C8E93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E93Cu)) return;
    // 80C8E93C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8E940:
    ctx->pc = 0x80C8E940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8E940: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E944:
    ctx->pc = 0x80C8E944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8E944: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E944u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8E948:
    ctx->pc = 0x80C8E948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8E948: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E94C:
    ctx->pc = 0x80C8E94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8E94C: lwz     r3, 32(r3)
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
label_80C8E950:
    ctx->pc = 0x80C8E950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8E950: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E950u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E954:
    ctx->pc = 0x80C8E954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8E954: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E954u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8E958:
    ctx->pc = 0x80C8E958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8E958: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E95C:
    ctx->pc = 0x80C8E95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8E95C: lwz     r3, 32(r3)
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
label_80C8E960:
    ctx->pc = 0x80C8E960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8E960: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E960u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E964:
    ctx->pc = 0x80C8E964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8E964: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8E964u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8E968:
    ctx->pc = 0x80C8E968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8E968: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E96C:
    ctx->pc = 0x80C8E96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8E96C: lwz     r3, 32(r3)
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
label_80C8E970:
    ctx->pc = 0x80C8E970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8E970: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8E970u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E974:
    ctx->pc = 0x80C8E974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8E974: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E978:
    ctx->pc = 0x80C8E978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8E978: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E97C:
    ctx->pc = 0x80C8E97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8E97C: lwz     r3, 32(r3)
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
label_80C8E980:
    ctx->pc = 0x80C8E980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8E980: stw     r0, 20(r3)
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
label_80C8E984:
    ctx->pc = 0x80C8E984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8E984: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E988:
    ctx->pc = 0x80C8E988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8E988: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E98C:
    ctx->pc = 0x80C8E98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8E98C: lwz     r3, 32(r3)
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
label_80C8E990:
    ctx->pc = 0x80C8E990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8E990: stw     r0, 24(r3)
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
label_80C8E994:
    ctx->pc = 0x80C8E994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8E994: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E998:
    ctx->pc = 0x80C8E998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8E998: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E99C:
    ctx->pc = 0x80C8E99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8E99C: lwz     r3, 32(r3)
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
label_80C8E9A0:
    ctx->pc = 0x80C8E9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8E9A0: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9A4:
    ctx->pc = 0x80C8E9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E9A4: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9A8:
    ctx->pc = 0x80C8E9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9A8u)) return;
    // 80C8E9A8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8E9AC:
    ctx->pc = 0x80C8E9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8E9AC: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9B0:
    ctx->pc = 0x80C8E9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8E9B0: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9B4:
    ctx->pc = 0x80C8E9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9B4u)) return;
    // 80C8E9B4: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8E9B8:
    ctx->pc = 0x80C8E9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9B8u)) return;
    // 80C8E9B8: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E9BC:
    ctx->pc = 0x80C8E9BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E9BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E9BC: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_80C8E9C0:
    ctx->pc = 0x80C8E9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E9C0: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9C4:
    ctx->pc = 0x80C8E9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9C4u)) return;
    // 80C8E9C4: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E9C8:
    ctx->pc = 0x80C8E9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8E9C8: cmplwi  r3, 0x0000
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

label_80C8E9CC:
    ctx->pc = 0x80C8E9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9CCu)) return;
    // 80C8E9CC: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8E9D0:
    ctx->pc = 0x80C8E9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8E9D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8E9D4:
    ctx->pc = 0x80C8E9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8E9D4: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9D8:
    ctx->pc = 0x80C8E9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9D8u)) return;
    // 80C8E9D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8E9DC:
    ctx->pc = 0x80C8E9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9DCu)) return;
    // 80C8E9DC: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8E9E0:
    ctx->pc = 0x80C8E9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9E0u)) return;
    // 80C8E9E0: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8E9E4:
    ctx->pc = 0x80C8E9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E9E4: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9E8:
    ctx->pc = 0x80C8E9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9E8u)) return;
    // 80C8E9E8: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8E9ECu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8E9EC:
    ctx->pc = 0x80C8E9ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E9ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8E9EC: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E9F0:
    ctx->pc = 0x80C8E9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8E9F0: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_80C8E9F4:
    ctx->pc = 0x80C8E9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8E9F4: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8E9F8:
    ctx->pc = 0x80C8E9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8E9F8u)) return;
    // 80C8E9F8: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8E9FC:
    ctx->pc = 0x80C8E9FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 60u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8E9FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 60u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 80C8E9FC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA00:
    ctx->pc = 0x80C8EA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 80C8EA00: lwz     r3, 32(r3)
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
label_80C8EA04:
    ctx->pc = 0x80C8EA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 80C8EA04: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA04u)) return;
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
label_80C8EA08:
    ctx->pc = 0x80C8EA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 80C8EA08: lfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA08u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_80C8EA0C:
    ctx->pc = 0x80C8EA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA0Cu)) return;
    // 80C8EA0C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EA0Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EA10:
    ctx->pc = 0x80C8EA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80C8EA10: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA14:
    ctx->pc = 0x80C8EA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80C8EA14: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA18:
    ctx->pc = 0x80C8EA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80C8EA18: lwz     r3, 32(r3)
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
label_80C8EA1C:
    ctx->pc = 0x80C8EA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C8EA1C: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA1Cu)) return;
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
label_80C8EA20:
    ctx->pc = 0x80C8EA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 50u : 0u;
    // 80C8EA20: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA20u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
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
label_80C8EA24:
    ctx->pc = 0x80C8EA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA24u)) return;
    // 80C8EA24: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EA24u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EA28:
    ctx->pc = 0x80C8EA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 80C8EA28: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA2C:
    ctx->pc = 0x80C8EA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 47u : 0u;
    // 80C8EA2C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA30:
    ctx->pc = 0x80C8EA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80C8EA30: lwz     r3, 32(r3)
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
label_80C8EA34:
    ctx->pc = 0x80C8EA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80C8EA34: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA34u)) return;
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
label_80C8EA38:
    ctx->pc = 0x80C8EA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80C8EA38: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA38u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
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
label_80C8EA3C:
    ctx->pc = 0x80C8EA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA3Cu)) return;
    // 80C8EA3C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EA3Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EA40:
    ctx->pc = 0x80C8EA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80C8EA40: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA44:
    ctx->pc = 0x80C8EA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80C8EA44: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA48:
    ctx->pc = 0x80C8EA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80C8EA48: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA4C:
    ctx->pc = 0x80C8EA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA4Cu)) return;
    // 80C8EA4C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8EA50:
    ctx->pc = 0x80C8EA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80C8EA50: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA54:
    ctx->pc = 0x80C8EA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80C8EA54: lwz     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA58:
    ctx->pc = 0x80C8EA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80C8EA58: lwz     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA5C:
    ctx->pc = 0x80C8EA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA5Cu)) return;
    // 80C8EA5C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8EA60:
    ctx->pc = 0x80C8EA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C8EA60: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA64:
    ctx->pc = 0x80C8EA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8EA64: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA68:
    ctx->pc = 0x80C8EA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8EA68: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA6C:
    ctx->pc = 0x80C8EA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA6Cu)) return;
    // 80C8EA6C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8EA70:
    ctx->pc = 0x80C8EA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8EA70: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA74:
    ctx->pc = 0x80C8EA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8EA74: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8EA78:
    ctx->pc = 0x80C8EA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8EA78: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA7C:
    ctx->pc = 0x80C8EA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8EA7C: lwz     r3, 32(r3)
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
label_80C8EA80:
    ctx->pc = 0x80C8EA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8EA80: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA84:
    ctx->pc = 0x80C8EA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8EA84: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8EA88:
    ctx->pc = 0x80C8EA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8EA88: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA8C:
    ctx->pc = 0x80C8EA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8EA8C: lwz     r3, 32(r3)
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
label_80C8EA90:
    ctx->pc = 0x80C8EA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8EA90: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA94:
    ctx->pc = 0x80C8EA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8EA94: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EA94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8EA98:
    ctx->pc = 0x80C8EA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8EA98: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EA9C:
    ctx->pc = 0x80C8EA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EA9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8EA9C: lwz     r3, 32(r3)
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
label_80C8EAA0:
    ctx->pc = 0x80C8EAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8EAA0: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EAA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAA4:
    ctx->pc = 0x80C8EAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8EAA4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAA8:
    ctx->pc = 0x80C8EAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8EAA8: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAAC:
    ctx->pc = 0x80C8EAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8EAAC: lwz     r3, 32(r3)
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
label_80C8EAB0:
    ctx->pc = 0x80C8EAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8EAB0: stw     r0, 20(r3)
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
label_80C8EAB4:
    ctx->pc = 0x80C8EAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8EAB4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAB8:
    ctx->pc = 0x80C8EAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8EAB8: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EABC:
    ctx->pc = 0x80C8EABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8EABC: lwz     r3, 32(r3)
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
label_80C8EAC0:
    ctx->pc = 0x80C8EAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8EAC0: stw     r0, 24(r3)
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
label_80C8EAC4:
    ctx->pc = 0x80C8EAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8EAC4: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAC8:
    ctx->pc = 0x80C8EAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8EAC8: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EACC:
    ctx->pc = 0x80C8EACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8EACC: lwz     r3, 32(r3)
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
label_80C8EAD0:
    ctx->pc = 0x80C8EAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EAD0: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAD4:
    ctx->pc = 0x80C8EAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EAD4: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAD8:
    ctx->pc = 0x80C8EAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAD8u)) return;
    // 80C8EAD8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8EADC:
    ctx->pc = 0x80C8EADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EADC: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAE0:
    ctx->pc = 0x80C8EAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EAE0: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAE4:
    ctx->pc = 0x80C8EAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAE4u)) return;
    // 80C8EAE4: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8EAE8:
    ctx->pc = 0x80C8EAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAE8u)) return;
    // 80C8EAE8: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EAEC:
    ctx->pc = 0x80C8EAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EAEC: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_80C8EAF0:
    ctx->pc = 0x80C8EAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EAF0: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EAF4:
    ctx->pc = 0x80C8EAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAF4u)) return;
    // 80C8EAF4: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EAF8:
    ctx->pc = 0x80C8EAF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EAF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8EAF8: cmplwi  r3, 0x0000
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

label_80C8EAFC:
    ctx->pc = 0x80C8EAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EAFCu)) return;
    // 80C8EAFC: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EB00:
    ctx->pc = 0x80C8EB00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8EB00: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8EB04:
    ctx->pc = 0x80C8EB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EB04: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB08:
    ctx->pc = 0x80C8EB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB08u)) return;
    // 80C8EB08: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8EB0C:
    ctx->pc = 0x80C8EB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB0Cu)) return;
    // 80C8EB0C: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8EB10:
    ctx->pc = 0x80C8EB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB10u)) return;
    // 80C8EB10: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8EB14:
    ctx->pc = 0x80C8EB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EB14: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB18:
    ctx->pc = 0x80C8EB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB18u)) return;
    // 80C8EB18: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8EB1Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8EB1C:
    ctx->pc = 0x80C8EB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8EB1C: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EB20:
    ctx->pc = 0x80C8EB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EB20: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_80C8EB24:
    ctx->pc = 0x80C8EB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EB24: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB28:
    ctx->pc = 0x80C8EB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB28u)) return;
    // 80C8EB28: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EB2C:
    ctx->pc = 0x80C8EB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8EB2C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB30:
    ctx->pc = 0x80C8EB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8EB30: lwz     r4, 32(r3)
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
label_80C8EB34:
    ctx->pc = 0x80C8EB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8EB34: lwz     r3, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB38:
    ctx->pc = 0x80C8EB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8EB38: lwz     r0, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB3C:
    ctx->pc = 0x80C8EB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB3Cu)) return;
    // 80C8EB3C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8EB40:
    ctx->pc = 0x80C8EB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8EB40: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB44:
    ctx->pc = 0x80C8EB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8EB44: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB48:
    ctx->pc = 0x80C8EB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8EB48: lwz     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB4C:
    ctx->pc = 0x80C8EB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB4Cu)) return;
    // 80C8EB4C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8EB50:
    ctx->pc = 0x80C8EB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EB50: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB54:
    ctx->pc = 0x80C8EB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EB54: lwz     r3, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB58:
    ctx->pc = 0x80C8EB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8EB58: lwz     r0, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB5C:
    ctx->pc = 0x80C8EB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB5Cu)) return;
    // 80C8EB5C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C8EB60:
    ctx->pc = 0x80C8EB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EB60: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB64:
    ctx->pc = 0x80C8EB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB64u)) return;
    // 80C8EB64: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8EB68:
    ctx->pc = 0x80C8EB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB68u)) return;
    // 80C8EB68: bl      0x80C8F0A4
    {
            ctx->lr = 0x80C8EB6Cu;
            goto label_80C8F0A4;
    }

label_80C8EB6C:
    ctx->pc = 0x80C8EB6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EB6C: lis     r3, -32758
    ctx->gpr[3] = ((u32)(s32)(-32758) << 16);

label_80C8EB70:
    ctx->pc = 0x80C8EB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB70u)) return;
    // 80C8EB70: addi    r3, r3, 29972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29972);

label_80C8EB74:
    ctx->pc = 0x80C8EB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB74u)) return;
    // 80C8EB74: bl      0x8004B49C
    {
            ctx->lr = 0x80C8EB78u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80C8EB78:
    ctx->pc = 0x80C8EB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EB78: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB7C:
    ctx->pc = 0x80C8EB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB7Cu)) return;
    // 80C8EB7C: cmpwi   r0, 0
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

label_80C8EB80:
    ctx->pc = 0x80C8EB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB80u)) return;
    // 80C8EB80: bc    12, 2, 0x80C8EB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EB90;
        }
    }

label_80C8EB84:
    ctx->pc = 0x80C8EB84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EB84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EB88:
    ctx->pc = 0x80C8EB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB88u)) return;
    // 80C8EB88: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8EB8C:
    ctx->pc = 0x80C8EB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB8Cu)) return;
    // 80C8EB8C: bl      0x8004AFDC
    {
            ctx->lr = 0x80C8EB90u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80C8EB90:
    ctx->pc = 0x80C8EB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EB90: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EB94:
    ctx->pc = 0x80C8EB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB94u)) return;
    // 80C8EB94: cmpwi   r0, 0
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

label_80C8EB98:
    ctx->pc = 0x80C8EB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EB98u)) return;
    // 80C8EB98: bc    12, 2, 0x80C8EBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EBA8;
        }
    }

label_80C8EB9C:
    ctx->pc = 0x80C8EB9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EB9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EB9C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EBA0:
    ctx->pc = 0x80C8EBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBA0u)) return;
    // 80C8EBA0: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8EBA4:
    ctx->pc = 0x80C8EBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBA4u)) return;
    // 80C8EBA4: bl      0x8004B3E0
    {
            ctx->lr = 0x80C8EBA8u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80C8EBA8:
    ctx->pc = 0x80C8EBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EBA8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EBAC:
    ctx->pc = 0x80C8EBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBACu)) return;
    // 80C8EBAC: cmpwi   r0, 0
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

label_80C8EBB0:
    ctx->pc = 0x80C8EBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBB0u)) return;
    // 80C8EBB0: bc    12, 2, 0x80C8EBC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EBC0;
        }
    }

label_80C8EBB4:
    ctx->pc = 0x80C8EBB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EBB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EBB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EBB8:
    ctx->pc = 0x80C8EBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBB8u)) return;
    // 80C8EBB8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8EBBC:
    ctx->pc = 0x80C8EBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBBCu)) return;
    // 80C8EBBC: bl      0x8004AF5C
    {
            ctx->lr = 0x80C8EBC0u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80C8EBC0:
    ctx->pc = 0x80C8EBC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EBC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8EBC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EBC4:
    ctx->pc = 0x80C8EBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBC4u)) return;
    // 80C8EBC4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8EBC8:
    ctx->pc = 0x80C8EBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBC8u)) return;
    // 80C8EBC8: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_80C8EBCC:
    ctx->pc = 0x80C8EBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBCCu)) return;
    // 80C8EBCC: bl      0x8004ABF4
    {
            ctx->lr = 0x80C8EBD0u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C8EBD0:
    ctx->pc = 0x80C8EBD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EBD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8EBD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8EBD4:
    ctx->pc = 0x80C8EBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBD4u)) return;
    // 80C8EBD4: bl      0x8004B504
    {
            ctx->lr = 0x80C8EBD8u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80C8EBD8:
    ctx->pc = 0x80C8EBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8EBD8: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_80C8EBDC:
    ctx->pc = 0x80C8EBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8EBDC: lfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80C8EBE0:
    ctx->pc = 0x80C8EBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBE0u)) return;
    // 80C8EBE0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EBE0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C8EBE4:
    ctx->pc = 0x80C8EBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8EBE4: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EBE8:
    ctx->pc = 0x80C8EBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8EBE8: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_80C8EBEC:
    ctx->pc = 0x80C8EBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8EBEC: lfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80C8EBF0:
    ctx->pc = 0x80C8EBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBF0u)) return;
    // 80C8EBF0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EBF0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C8EBF4:
    ctx->pc = 0x80C8EBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8EBF4: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EBF8:
    ctx->pc = 0x80C8EBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8EBF8: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
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
label_80C8EBFC:
    ctx->pc = 0x80C8EBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8EBFC: lfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EBFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_80C8EC00:
    ctx->pc = 0x80C8EC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC00u)) return;
    // 80C8EC00: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EC00u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C8EC04:
    ctx->pc = 0x80C8EC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8EC04: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC08:
    ctx->pc = 0x80C8EC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8EC08: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8EC0C:
    ctx->pc = 0x80C8EC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8EC0C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC10:
    ctx->pc = 0x80C8EC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8EC10: lwz     r3, 32(r3)
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
label_80C8EC14:
    ctx->pc = 0x80C8EC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8EC14: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC18:
    ctx->pc = 0x80C8EC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8EC18: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8EC1C:
    ctx->pc = 0x80C8EC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8EC1C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC20:
    ctx->pc = 0x80C8EC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8EC20: lwz     r3, 32(r3)
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
label_80C8EC24:
    ctx->pc = 0x80C8EC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8EC24: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC28:
    ctx->pc = 0x80C8EC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8EC28: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8EC2C:
    ctx->pc = 0x80C8EC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8EC2C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC30:
    ctx->pc = 0x80C8EC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8EC30: lwz     r3, 32(r3)
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
label_80C8EC34:
    ctx->pc = 0x80C8EC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EC34: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EC34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC38:
    ctx->pc = 0x80C8EC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EC38: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC3C:
    ctx->pc = 0x80C8EC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC3Cu)) return;
    // 80C8EC3C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8EC40:
    ctx->pc = 0x80C8EC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EC40: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC44:
    ctx->pc = 0x80C8EC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EC44: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC48:
    ctx->pc = 0x80C8EC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC48u)) return;
    // 80C8EC48: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8EC4C:
    ctx->pc = 0x80C8EC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC4Cu)) return;
    // 80C8EC4C: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EC50:
    ctx->pc = 0x80C8EC50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EC50: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_80C8EC54:
    ctx->pc = 0x80C8EC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EC54: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC58:
    ctx->pc = 0x80C8EC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC58u)) return;
    // 80C8EC58: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EC5C:
    ctx->pc = 0x80C8EC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8EC5C: cmplwi  r3, 0x0000
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

label_80C8EC60:
    ctx->pc = 0x80C8EC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC60u)) return;
    // 80C8EC60: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EC64:
    ctx->pc = 0x80C8EC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8EC64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8EC68:
    ctx->pc = 0x80C8EC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EC68: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC6C:
    ctx->pc = 0x80C8EC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC6Cu)) return;
    // 80C8EC6C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8EC70:
    ctx->pc = 0x80C8EC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC70u)) return;
    // 80C8EC70: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8EC74:
    ctx->pc = 0x80C8EC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC74u)) return;
    // 80C8EC74: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8EC78:
    ctx->pc = 0x80C8EC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EC78: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC7C:
    ctx->pc = 0x80C8EC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC7Cu)) return;
    // 80C8EC7C: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8EC80u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8EC80:
    ctx->pc = 0x80C8EC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8EC80: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EC84:
    ctx->pc = 0x80C8EC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EC84: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_80C8EC88:
    ctx->pc = 0x80C8EC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EC88: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC8C:
    ctx->pc = 0x80C8EC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC8Cu)) return;
    // 80C8EC8C: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EC90:
    ctx->pc = 0x80C8EC90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EC90: lwz     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EC94:
    ctx->pc = 0x80C8EC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC94u)) return;
    // 80C8EC94: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80C8EC98:
    ctx->pc = 0x80C8EC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EC98u)) return;
    // 80C8EC98: bl      0x804C90A0
    {
            ctx->lr = 0x80C8EC9Cu;
            ctx->pc = 0x804C90A0u;
            return;
    }

label_80C8EC9C:
    ctx->pc = 0x80C8EC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8EC9C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8ECA0:
    ctx->pc = 0x80C8ECA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8ECA0: lwz     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ECA4:
    ctx->pc = 0x80C8ECA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECA4u)) return;
    // 80C8ECA4: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80C8ECA8:
    ctx->pc = 0x80C8ECA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECA8u)) return;
    // 80C8ECA8: bl      0x804C9040
    {
            ctx->lr = 0x80C8ECACu;
            ctx->pc = 0x804C9040u;
            return;
    }

label_80C8ECAC:
    ctx->pc = 0x80C8ECACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ECACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C8ECAC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8ECB0:
    ctx->pc = 0x80C8ECB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8ECB0: lfs     f0, 332(r28)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECB0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(332);
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
label_80C8ECB4:
    ctx->pc = 0x80C8ECB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECB4u)) return;
    // 80C8ECB4: fneg    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ECB4u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_80C8ECB8:
    ctx->pc = 0x80C8ECB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8ECB8: lfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECB8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_80C8ECBC:
    ctx->pc = 0x80C8ECBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECBCu)) return;
    // 80C8ECBC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ECBCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8ECC0:
    ctx->pc = 0x80C8ECC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8ECC0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ECC4:
    ctx->pc = 0x80C8ECC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8ECC4: lfs     f1, 336(r28)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECC4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(336);
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
label_80C8ECC8:
    ctx->pc = 0x80C8ECC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8ECC8: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECC8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
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
label_80C8ECCC:
    ctx->pc = 0x80C8ECCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECCCu)) return;
    // 80C8ECCC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ECCCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8ECD0:
    ctx->pc = 0x80C8ECD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8ECD0: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ECD4:
    ctx->pc = 0x80C8ECD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8ECD4: lfs     f1, 340(r28)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECD4u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(340);
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
label_80C8ECD8:
    ctx->pc = 0x80C8ECD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8ECD8: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECD8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
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
label_80C8ECDC:
    ctx->pc = 0x80C8ECDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECDCu)) return;
    // 80C8ECDC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ECDCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8ECE0:
    ctx->pc = 0x80C8ECE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8ECE0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8ECE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ECE4:
    ctx->pc = 0x80C8ECE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECE4u)) return;
    // 80C8ECE4: lis     r3, -32758
    ctx->gpr[3] = ((u32)(s32)(-32758) << 16);

label_80C8ECE8:
    ctx->pc = 0x80C8ECE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECE8u)) return;
    // 80C8ECE8: addi    r3, r3, 29972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29972);

label_80C8ECEC:
    ctx->pc = 0x80C8ECECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECECu)) return;
    // 80C8ECEC: bl      0x8004B49C
    {
            ctx->lr = 0x80C8ECF0u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80C8ECF0:
    ctx->pc = 0x80C8ECF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ECF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8ECF0: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ECF4:
    ctx->pc = 0x80C8ECF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8ECF4: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ECF8:
    ctx->pc = 0x80C8ECF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECF8u)) return;
    // 80C8ECF8: cmpwi   r0, 0
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

label_80C8ECFC:
    ctx->pc = 0x80C8ECFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ECFCu)) return;
    // 80C8ECFC: bc    12, 2, 0x80C8ED0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8ED0C;
        }
    }

label_80C8ED00:
    ctx->pc = 0x80C8ED00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8ED00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8ED04:
    ctx->pc = 0x80C8ED04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED04u)) return;
    // 80C8ED04: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8ED08:
    ctx->pc = 0x80C8ED08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED08u)) return;
    // 80C8ED08: bl      0x8004AFDC
    {
            ctx->lr = 0x80C8ED0Cu;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80C8ED0C:
    ctx->pc = 0x80C8ED0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8ED0C: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED10:
    ctx->pc = 0x80C8ED10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8ED10: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED14:
    ctx->pc = 0x80C8ED14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED14u)) return;
    // 80C8ED14: cmpwi   r0, 0
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

label_80C8ED18:
    ctx->pc = 0x80C8ED18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED18u)) return;
    // 80C8ED18: bc    12, 2, 0x80C8ED28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8ED28;
        }
    }

label_80C8ED1C:
    ctx->pc = 0x80C8ED1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8ED1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8ED20:
    ctx->pc = 0x80C8ED20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED20u)) return;
    // 80C8ED20: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8ED24:
    ctx->pc = 0x80C8ED24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED24u)) return;
    // 80C8ED24: bl      0x8004B3E0
    {
            ctx->lr = 0x80C8ED28u;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80C8ED28:
    ctx->pc = 0x80C8ED28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8ED28: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED2C:
    ctx->pc = 0x80C8ED2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8ED2C: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED30:
    ctx->pc = 0x80C8ED30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED30u)) return;
    // 80C8ED30: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_80C8ED34:
    ctx->pc = 0x80C8ED34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED34u)) return;
    // 80C8ED34: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_80C8ED38:
    ctx->pc = 0x80C8ED38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED38u)) return;
    // 80C8ED38: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C8ED3C:
    ctx->pc = 0x80C8ED3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED3Cu)) return;
    // 80C8ED3C: cmpwi   r0, 0
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

label_80C8ED40:
    ctx->pc = 0x80C8ED40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED40u)) return;
    // 80C8ED40: bc    12, 2, 0x80C8ED50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8ED50;
        }
    }

label_80C8ED44:
    ctx->pc = 0x80C8ED44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8ED44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8ED48:
    ctx->pc = 0x80C8ED48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED48u)) return;
    // 80C8ED48: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8ED4C:
    ctx->pc = 0x80C8ED4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED4Cu)) return;
    // 80C8ED4C: bl      0x8004AF5C
    {
            ctx->lr = 0x80C8ED50u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80C8ED50:
    ctx->pc = 0x80C8ED50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8ED50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8ED54:
    ctx->pc = 0x80C8ED54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED54u)) return;
    // 80C8ED54: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8ED58:
    ctx->pc = 0x80C8ED58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED58u)) return;
    // 80C8ED58: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_80C8ED5C:
    ctx->pc = 0x80C8ED5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED5Cu)) return;
    // 80C8ED5C: bl      0x8004ABF4
    {
            ctx->lr = 0x80C8ED60u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C8ED60:
    ctx->pc = 0x80C8ED60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8ED60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8ED64:
    ctx->pc = 0x80C8ED64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED64u)) return;
    // 80C8ED64: bl      0x8004B504
    {
            ctx->lr = 0x80C8ED68u;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80C8ED68:
    ctx->pc = 0x80C8ED68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8ED68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C8ED68: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_80C8ED6C:
    ctx->pc = 0x80C8ED6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8ED6C: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED70:
    ctx->pc = 0x80C8ED70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8ED70: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80C8ED74:
    ctx->pc = 0x80C8ED74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED74u)) return;
    // 80C8ED74: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ED74u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8ED78:
    ctx->pc = 0x80C8ED78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8ED78: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED7C:
    ctx->pc = 0x80C8ED7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8ED7C: lfs     f2, 284(r28)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED7Cu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(284);
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
label_80C8ED80:
    ctx->pc = 0x80C8ED80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8ED80: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_80C8ED84:
    ctx->pc = 0x80C8ED84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8ED84: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED88:
    ctx->pc = 0x80C8ED88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8ED88: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80C8ED8C:
    ctx->pc = 0x80C8ED8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED8Cu)) return;
    // 80C8ED8C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ED8Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8ED90:
    ctx->pc = 0x80C8ED90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED90u)) return;
    // 80C8ED90: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8ED90u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80C8ED94:
    ctx->pc = 0x80C8ED94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8ED94: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8ED98:
    ctx->pc = 0x80C8ED98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8ED98: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8ED98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
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
label_80C8ED9C:
    ctx->pc = 0x80C8ED9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8ED9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8ED9C: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDA0:
    ctx->pc = 0x80C8EDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8EDA0: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80C8EDA4:
    ctx->pc = 0x80C8EDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDA4u)) return;
    // 80C8EDA4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EDA4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EDA8:
    ctx->pc = 0x80C8EDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8EDA8: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDAC:
    ctx->pc = 0x80C8EDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8EDAC: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8EDB0:
    ctx->pc = 0x80C8EDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8EDB0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDB4:
    ctx->pc = 0x80C8EDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8EDB4: lwz     r3, 32(r3)
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
label_80C8EDB8:
    ctx->pc = 0x80C8EDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8EDB8: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDBC:
    ctx->pc = 0x80C8EDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8EDBC: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8EDC0:
    ctx->pc = 0x80C8EDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8EDC0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDC4:
    ctx->pc = 0x80C8EDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8EDC4: lwz     r3, 32(r3)
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
label_80C8EDC8:
    ctx->pc = 0x80C8EDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8EDC8: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDCC:
    ctx->pc = 0x80C8EDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8EDCC: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8EDD0:
    ctx->pc = 0x80C8EDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8EDD0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDD4:
    ctx->pc = 0x80C8EDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8EDD4: lwz     r3, 32(r3)
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
label_80C8EDD8:
    ctx->pc = 0x80C8EDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EDD8: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EDD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDDC:
    ctx->pc = 0x80C8EDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EDDC: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDE0:
    ctx->pc = 0x80C8EDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDE0u)) return;
    // 80C8EDE0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8EDE4:
    ctx->pc = 0x80C8EDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EDE4: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDE8:
    ctx->pc = 0x80C8EDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EDE8: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDEC:
    ctx->pc = 0x80C8EDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDECu)) return;
    // 80C8EDEC: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8EDF0:
    ctx->pc = 0x80C8EDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDF0u)) return;
    // 80C8EDF0: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EDF4:
    ctx->pc = 0x80C8EDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EDF4: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_80C8EDF8:
    ctx->pc = 0x80C8EDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EDF8: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EDFC:
    ctx->pc = 0x80C8EDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EDFCu)) return;
    // 80C8EDFC: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EE00:
    ctx->pc = 0x80C8EE00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8EE00: cmplwi  r3, 0x0000
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

label_80C8EE04:
    ctx->pc = 0x80C8EE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE04u)) return;
    // 80C8EE04: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EE08:
    ctx->pc = 0x80C8EE08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8EE08: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8EE0C:
    ctx->pc = 0x80C8EE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EE0C: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE10:
    ctx->pc = 0x80C8EE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE10u)) return;
    // 80C8EE10: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8EE14:
    ctx->pc = 0x80C8EE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE14u)) return;
    // 80C8EE14: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8EE18:
    ctx->pc = 0x80C8EE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE18u)) return;
    // 80C8EE18: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8EE1C:
    ctx->pc = 0x80C8EE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EE1C: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE20:
    ctx->pc = 0x80C8EE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE20u)) return;
    // 80C8EE20: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8EE24u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8EE24:
    ctx->pc = 0x80C8EE24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8EE24: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EE28:
    ctx->pc = 0x80C8EE28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EE28: li      r0, 23
    ctx->gpr[0] = (u32)(s32)(23);

label_80C8EE2C:
    ctx->pc = 0x80C8EE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EE2C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE30:
    ctx->pc = 0x80C8EE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE30u)) return;
    // 80C8EE30: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EE34:
    ctx->pc = 0x80C8EE34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EE34: lwz     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE38:
    ctx->pc = 0x80C8EE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE38u)) return;
    // 80C8EE38: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80C8EE3C:
    ctx->pc = 0x80C8EE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE3Cu)) return;
    // 80C8EE3C: bl      0x804C90A0
    {
            ctx->lr = 0x80C8EE40u;
            ctx->pc = 0x804C90A0u;
            return;
    }

label_80C8EE40:
    ctx->pc = 0x80C8EE40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8EE40: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8EE44:
    ctx->pc = 0x80C8EE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EE44: lwz     r0, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE48:
    ctx->pc = 0x80C8EE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE48u)) return;
    // 80C8EE48: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80C8EE4C:
    ctx->pc = 0x80C8EE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE4Cu)) return;
    // 80C8EE4C: bl      0x804C9040
    {
            ctx->lr = 0x80C8EE50u;
            ctx->pc = 0x804C9040u;
            return;
    }

label_80C8EE50:
    ctx->pc = 0x80C8EE50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C8EE50: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8EE54:
    ctx->pc = 0x80C8EE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8EE54: lfs     f0, 344(r29)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE54u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(344);
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
label_80C8EE58:
    ctx->pc = 0x80C8EE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE58u)) return;
    // 80C8EE58: fneg    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EE58u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) ^ 0x8000000000000000ull);

label_80C8EE5C:
    ctx->pc = 0x80C8EE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8EE5C: lfs     f0, 44(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE5Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
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
label_80C8EE60:
    ctx->pc = 0x80C8EE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE60u)) return;
    // 80C8EE60: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EE60u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EE64:
    ctx->pc = 0x80C8EE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8EE64: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE68:
    ctx->pc = 0x80C8EE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8EE68: lfs     f1, 348(r29)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE68u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(348);
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
label_80C8EE6C:
    ctx->pc = 0x80C8EE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8EE6C: lfs     f0, 48(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE6Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
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
label_80C8EE70:
    ctx->pc = 0x80C8EE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE70u)) return;
    // 80C8EE70: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EE70u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EE74:
    ctx->pc = 0x80C8EE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8EE74: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE78:
    ctx->pc = 0x80C8EE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EE78: lfs     f1, 352(r29)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE78u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
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
label_80C8EE7C:
    ctx->pc = 0x80C8EE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EE7C: lfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE7Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
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
label_80C8EE80:
    ctx->pc = 0x80C8EE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE80u)) return;
    // 80C8EE80: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EE80u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EE84:
    ctx->pc = 0x80C8EE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EE84: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EE84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE88:
    ctx->pc = 0x80C8EE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE88u)) return;
    // 80C8EE88: lis     r3, -32758
    ctx->gpr[3] = ((u32)(s32)(-32758) << 16);

label_80C8EE8C:
    ctx->pc = 0x80C8EE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE8Cu)) return;
    // 80C8EE8C: addi    r3, r3, 29972
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29972);

label_80C8EE90:
    ctx->pc = 0x80C8EE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE90u)) return;
    // 80C8EE90: bl      0x8004B49C
    {
            ctx->lr = 0x80C8EE94u;
            ctx->pc = 0x8004B49Cu;
            return;
    }

label_80C8EE94:
    ctx->pc = 0x80C8EE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EE94: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE98:
    ctx->pc = 0x80C8EE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EE98: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EE9C:
    ctx->pc = 0x80C8EE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EE9Cu)) return;
    // 80C8EE9C: cmpwi   r0, 0
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

label_80C8EEA0:
    ctx->pc = 0x80C8EEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEA0u)) return;
    // 80C8EEA0: bc    12, 2, 0x80C8EEB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EEB0;
        }
    }

label_80C8EEA4:
    ctx->pc = 0x80C8EEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EEA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EEA8:
    ctx->pc = 0x80C8EEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEA8u)) return;
    // 80C8EEA8: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8EEAC:
    ctx->pc = 0x80C8EEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEACu)) return;
    // 80C8EEAC: bl      0x8004AFDC
    {
            ctx->lr = 0x80C8EEB0u;
            ctx->pc = 0x8004AFDCu;
            return;
    }

label_80C8EEB0:
    ctx->pc = 0x80C8EEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EEB0: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EEB4:
    ctx->pc = 0x80C8EEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EEB4: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EEB8:
    ctx->pc = 0x80C8EEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEB8u)) return;
    // 80C8EEB8: cmpwi   r0, 0
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

label_80C8EEBC:
    ctx->pc = 0x80C8EEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEBCu)) return;
    // 80C8EEBC: bc    12, 2, 0x80C8EECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EECC;
        }
    }

label_80C8EEC0:
    ctx->pc = 0x80C8EEC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EEC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EEC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EEC4:
    ctx->pc = 0x80C8EEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEC4u)) return;
    // 80C8EEC4: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8EEC8:
    ctx->pc = 0x80C8EEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEC8u)) return;
    // 80C8EEC8: bl      0x8004B3E0
    {
            ctx->lr = 0x80C8EECCu;
            ctx->pc = 0x8004B3E0u;
            return;
    }

label_80C8EECC:
    ctx->pc = 0x80C8EECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EECC: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EED0:
    ctx->pc = 0x80C8EED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EED0: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EED4:
    ctx->pc = 0x80C8EED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EED4u)) return;
    // 80C8EED4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_80C8EED8:
    ctx->pc = 0x80C8EED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EED8u)) return;
    // 80C8EED8: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_80C8EEDC:
    ctx->pc = 0x80C8EEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEDCu)) return;
    // 80C8EEDC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80C8EEE0:
    ctx->pc = 0x80C8EEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEE0u)) return;
    // 80C8EEE0: cmpwi   r0, 0
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

label_80C8EEE4:
    ctx->pc = 0x80C8EEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEE4u)) return;
    // 80C8EEE4: bc    12, 2, 0x80C8EEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EEF4;
        }
    }

label_80C8EEE8:
    ctx->pc = 0x80C8EEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EEE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EEEC:
    ctx->pc = 0x80C8EEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEECu)) return;
    // 80C8EEEC: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80C8EEF0:
    ctx->pc = 0x80C8EEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEF0u)) return;
    // 80C8EEF0: bl      0x8004AF5C
    {
            ctx->lr = 0x80C8EEF4u;
            ctx->pc = 0x8004AF5Cu;
            return;
    }

label_80C8EEF4:
    ctx->pc = 0x80C8EEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8EEF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8EEF8:
    ctx->pc = 0x80C8EEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEF8u)) return;
    // 80C8EEF8: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8EEFC:
    ctx->pc = 0x80C8EEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EEFCu)) return;
    // 80C8EEFC: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_80C8EF00:
    ctx->pc = 0x80C8EF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF00u)) return;
    // 80C8EF00: bl      0x8004ABF4
    {
            ctx->lr = 0x80C8EF04u;
            ctx->pc = 0x8004ABF4u;
            return;
    }

label_80C8EF04:
    ctx->pc = 0x80C8EF04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EF04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8EF04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8EF08:
    ctx->pc = 0x80C8EF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF08u)) return;
    // 80C8EF08: bl      0x8004B504
    {
            ctx->lr = 0x80C8EF0Cu;
            ctx->pc = 0x8004B504u;
            return;
    }

label_80C8EF0C:
    ctx->pc = 0x80C8EF0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EF0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80C8EF0C: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
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
label_80C8EF10:
    ctx->pc = 0x80C8EF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80C8EF10: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF14:
    ctx->pc = 0x80C8EF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80C8EF14: lfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
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
label_80C8EF18:
    ctx->pc = 0x80C8EF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF18u)) return;
    // 80C8EF18: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EF18u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EF1C:
    ctx->pc = 0x80C8EF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8EF1C: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF20:
    ctx->pc = 0x80C8EF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8EF20: lfs     f2, 284(r29)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF20u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
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
label_80C8EF24:
    ctx->pc = 0x80C8EF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8EF24: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
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
label_80C8EF28:
    ctx->pc = 0x80C8EF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8EF28: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF2C:
    ctx->pc = 0x80C8EF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8EF2C: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
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
label_80C8EF30:
    ctx->pc = 0x80C8EF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF30u)) return;
    // 80C8EF30: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EF30u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EF34:
    ctx->pc = 0x80C8EF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF34u)) return;
    // 80C8EF34: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EF34u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_80C8EF38:
    ctx->pc = 0x80C8EF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8EF38: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF3C:
    ctx->pc = 0x80C8EF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8EF3C: lfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
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
label_80C8EF40:
    ctx->pc = 0x80C8EF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8EF40: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF44:
    ctx->pc = 0x80C8EF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8EF44: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_80C8EF48:
    ctx->pc = 0x80C8EF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF48u)) return;
    // 80C8EF48: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8EF48u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8EF4C:
    ctx->pc = 0x80C8EF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8EF4C: stfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF50:
    ctx->pc = 0x80C8EF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C8EF50: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80C8EF54:
    ctx->pc = 0x80C8EF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8EF54: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF58:
    ctx->pc = 0x80C8EF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8EF58: lwz     r3, 32(r3)
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
label_80C8EF5C:
    ctx->pc = 0x80C8EF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8EF5C: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF5Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF60:
    ctx->pc = 0x80C8EF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8EF60: lfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF60u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_80C8EF64:
    ctx->pc = 0x80C8EF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8EF64: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF68:
    ctx->pc = 0x80C8EF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8EF68: lwz     r3, 32(r3)
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
label_80C8EF6C:
    ctx->pc = 0x80C8EF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8EF6C: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF70:
    ctx->pc = 0x80C8EF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8EF70: lfs     f0, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80C8EF74:
    ctx->pc = 0x80C8EF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8EF74: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF78:
    ctx->pc = 0x80C8EF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8EF78: lwz     r3, 32(r3)
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
label_80C8EF7C:
    ctx->pc = 0x80C8EF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EF7C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8EF7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF80:
    ctx->pc = 0x80C8EF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EF80: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF84:
    ctx->pc = 0x80C8EF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF84u)) return;
    // 80C8EF84: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_80C8EF88:
    ctx->pc = 0x80C8EF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EF88: stw     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF8C:
    ctx->pc = 0x80C8EF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EF8C: lwz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EF90:
    ctx->pc = 0x80C8EF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF90u)) return;
    // 80C8EF90: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8EF94:
    ctx->pc = 0x80C8EF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF94u)) return;
    // 80C8EF94: bc    12, 0, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EF98:
    ctx->pc = 0x80C8EF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8EF98: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_80C8EF9C:
    ctx->pc = 0x80C8EF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EF9C: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFA0:
    ctx->pc = 0x80C8EFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFA0u)) return;
    // 80C8EFA0: b       0x80C8EFC8
    {
            goto label_80C8EFC8;
    }

label_80C8EFA4:
    ctx->pc = 0x80C8EFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8EFA4: cmplwi  r3, 0x0000
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

label_80C8EFA8:
    ctx->pc = 0x80C8EFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFA8u)) return;
    // 80C8EFA8: bc    12, 2, 0x80C8EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8EFC8;
        }
    }

label_80C8EFAC:
    ctx->pc = 0x80C8EFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8EFAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C8EFB0:
    ctx->pc = 0x80C8EFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EFB0: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFB4:
    ctx->pc = 0x80C8EFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFB4u)) return;
    // 80C8EFB4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C8EFB8:
    ctx->pc = 0x80C8EFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFB8u)) return;
    // 80C8EFB8: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8EFBC:
    ctx->pc = 0x80C8EFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFBCu)) return;
    // 80C8EFBC: addi    r4, r4, 24368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24368);

label_80C8EFC0:
    ctx->pc = 0x80C8EFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8EFC0: stwx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFC4:
    ctx->pc = 0x80C8EFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFC4u)) return;
    // 80C8EFC4: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8EFC8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8EFC8:
    ctx->pc = 0x80C8EFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8EFC8: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFCC:
    ctx->pc = 0x80C8EFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8EFCC: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFD0:
    ctx->pc = 0x80C8EFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EFD0: lwz     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFD4:
    ctx->pc = 0x80C8EFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EFD4: lwz     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFD8:
    ctx->pc = 0x80C8EFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8EFD8: lwz     r0, 68(r1)
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
label_80C8EFDC:
    ctx->pc = 0x80C8EFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8EFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EFDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFE0:
    ctx->pc = 0x80C8EFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFE0u)) return;
    // 80C8EFE0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C8EFE4:
    ctx->pc = 0x80C8EFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFE4u)) return;
    // 80C8EFE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8EFE8:
    ctx->pc = 0x80C8EFE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8EFE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8EFEC:
    ctx->pc = 0x80C8EFECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8EFECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8EFEC: stwu     r1, -16(r1)
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
label_80C8EFF0:
    ctx->pc = 0x80C8EFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8EFF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8EFF4:
    ctx->pc = 0x80C8EFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8EFF4: stw     r0, 20(r1)
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
label_80C8EFF8:
    ctx->pc = 0x80C8EFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8EFF8: lwz     r3, 32(r3)
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
label_80C8EFFC:
    ctx->pc = 0x80C8EFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8EFFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8EFFC: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F000:
    ctx->pc = 0x80C8F000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F000u)) return;
    // 80C8F000: cmplwi  r3, 0x0000
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

label_80C8F004:
    ctx->pc = 0x80C8F004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F004u)) return;
    // 80C8F004: bc    12, 2, 0x80C8F00C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F00C;
        }
    }

label_80C8F008:
    ctx->pc = 0x80C8F008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F008: bl      0x8050ED40
    {
            ctx->lr = 0x80C8F00Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C8F00C:
    ctx->pc = 0x80C8F00Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F00Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F00C: lwz     r0, 20(r1)
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
label_80C8F010:
    ctx->pc = 0x80C8F010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F010: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F014:
    ctx->pc = 0x80C8F014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F014u)) return;
    // 80C8F014: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F018:
    ctx->pc = 0x80C8F018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F018u)) return;
    // 80C8F018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F01C:
    ctx->pc = 0x80C8F01Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F01Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F01C: stwu     r1, -16(r1)
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
label_80C8F020:
    ctx->pc = 0x80C8F020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F020u)) return;
    // 80C8F020: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F024:
    ctx->pc = 0x80C8F024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F024u)) return;
    // 80C8F024: addi    r3, r3, 96
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(96);

label_80C8F028:
    ctx->pc = 0x80C8F028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F028: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F028u)) return;
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
label_80C8F02C:
    ctx->pc = 0x80C8F02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F02Cu)) return;
    // 80C8F02C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F02Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C8F030:
    ctx->pc = 0x80C8F030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F030u)) return;
    // 80C8F030: bc    4, 1, 0x80C8F09C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F09C;
        }
    }

label_80C8F034:
    ctx->pc = 0x80C8F034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 26u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 26u : 1u;
    // 80C8F034: frsqrte    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8F034u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[1], &result)) ctx->fpr[0] = result; }

label_80C8F038:
    ctx->pc = 0x80C8F038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F038u)) return;
    // 80C8F038: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F03C:
    ctx->pc = 0x80C8F03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F03Cu)) return;
    // 80C8F03C: addi    r3, r3, 80
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(80);

label_80C8F040:
    ctx->pc = 0x80C8F040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C8F040: lfd     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F040u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F044:
    ctx->pc = 0x80C8F044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F044u)) return;
    // 80C8F044: fmul   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F044u)) return;
    ppc_fmul(ctx, 2, 4, 0);

label_80C8F048:
    ctx->pc = 0x80C8F048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F048u)) return;
    // 80C8F048: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F04C:
    ctx->pc = 0x80C8F04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F04Cu)) return;
    // 80C8F04C: addi    r3, r3, 104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(104);

label_80C8F050:
    ctx->pc = 0x80C8F050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8F050: lfd     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F050u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F054:
    ctx->pc = 0x80C8F054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F054u)) return;
    // 80C8F054: fmul   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F054u)) return;
    ppc_fmul(ctx, 0, 0, 0);

label_80C8F058:
    ctx->pc = 0x80C8F058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F058u)) return;
    // 80C8F058: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F058u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80C8F05C:
    ctx->pc = 0x80C8F05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F05Cu)) return;
    // 80C8F05C: fsub   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F05Cu)) return;
    ppc_fsub(ctx, 0, 3, 0);

label_80C8F060:
    ctx->pc = 0x80C8F060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F060u)) return;
    // 80C8F060: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F060u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_80C8F064:
    ctx->pc = 0x80C8F064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F064u)) return;
    // 80C8F064: fmul   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F064u)) return;
    ppc_fmul(ctx, 2, 4, 0);

label_80C8F068:
    ctx->pc = 0x80C8F068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F068u)) return;
    // 80C8F068: fmul   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F068u)) return;
    ppc_fmul(ctx, 0, 0, 0);

label_80C8F06C:
    ctx->pc = 0x80C8F06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F06Cu)) return;
    // 80C8F06C: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F06Cu)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80C8F070:
    ctx->pc = 0x80C8F070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F070u)) return;
    // 80C8F070: fsub   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F070u)) return;
    ppc_fsub(ctx, 0, 3, 0);

label_80C8F074:
    ctx->pc = 0x80C8F074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F074u)) return;
    // 80C8F074: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F074u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_80C8F078:
    ctx->pc = 0x80C8F078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F078u)) return;
    // 80C8F078: fmul   f2, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F078u)) return;
    ppc_fmul(ctx, 2, 4, 0);

label_80C8F07C:
    ctx->pc = 0x80C8F07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F07Cu)) return;
    // 80C8F07C: fmul   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F07Cu)) return;
    ppc_fmul(ctx, 0, 0, 0);

label_80C8F080:
    ctx->pc = 0x80C8F080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F080u)) return;
    // 80C8F080: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F080u)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80C8F084:
    ctx->pc = 0x80C8F084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F084u)) return;
    // 80C8F084: fsub   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F084u)) return;
    ppc_fsub(ctx, 0, 3, 0);

label_80C8F088:
    ctx->pc = 0x80C8F088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F088u)) return;
    // 80C8F088: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F088u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_80C8F08C:
    ctx->pc = 0x80C8F08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F08Cu)) return;
    // 80C8F08C: fmul   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F08Cu)) return;
    ppc_fmul(ctx, 0, 1, 0);

label_80C8F090:
    ctx->pc = 0x80C8F090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F090u)) return;
    // 80C8F090: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F090u)) return;
    ppc_frsp(ctx, 0, 0);

label_80C8F094:
    ctx->pc = 0x80C8F094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F094: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F094u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F098:
    ctx->pc = 0x80C8F098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8F098: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
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
label_80C8F09C:
    ctx->pc = 0x80C8F09Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F09Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F09C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F0A0:
    ctx->pc = 0x80C8F0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0A0u)) return;
    // 80C8F0A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F0A4:
    ctx->pc = 0x80C8F0A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8F0A4: stwu     r1, -16(r1)
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
label_80C8F0A8:
    ctx->pc = 0x80C8F0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8F0A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F0AC:
    ctx->pc = 0x80C8F0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8F0AC: stw     r0, 20(r1)
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
label_80C8F0B0:
    ctx->pc = 0x80C8F0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F0B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F0B4:
    ctx->pc = 0x80C8F0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0B4u)) return;
    // 80C8F0B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8F0B8:
    ctx->pc = 0x80C8F0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F0B8: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C8F0BC:
    ctx->pc = 0x80C8F0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0BCu)) return;
    // 80C8F0BC: fmuls   f2, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F0BCu)) return;
    ppc_fmuls(ctx, 2, 0, 0);

label_80C8F0C0:
    ctx->pc = 0x80C8F0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F0C0: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80C8F0C4:
    ctx->pc = 0x80C8F0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0C4u)) return;
    // 80C8F0C4: fmuls   f1, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F0C4u)) return;
    ppc_fmuls(ctx, 1, 0, 0);

label_80C8F0C8:
    ctx->pc = 0x80C8F0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F0C8: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80C8F0CC:
    ctx->pc = 0x80C8F0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0CCu)) return;
    // 80C8F0CC: fmuls   f0, f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F0CCu)) return;
    ppc_fmuls(ctx, 0, 0, 0);

label_80C8F0D0:
    ctx->pc = 0x80C8F0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0D0u)) return;
    // 80C8F0D0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F0D0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_80C8F0D4:
    ctx->pc = 0x80C8F0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0D4u)) return;
    // 80C8F0D4: fadds   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F0D4u)) return;
    ppc_fadds(ctx, 1, 2, 0);

label_80C8F0D8:
    ctx->pc = 0x80C8F0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0D8u)) return;
    // 80C8F0D8: bl      0x80C8F01C
    {
            ctx->lr = 0x80C8F0DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8F01Cu;
                return;
            }
            goto label_80C8F01C;
    }

label_80C8F0DC:
    ctx->pc = 0x80C8F0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C8F0DC: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F0E0:
    ctx->pc = 0x80C8F0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0E0u)) return;
    // 80C8F0E0: addi    r3, r3, 96
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(96);

label_80C8F0E4:
    ctx->pc = 0x80C8F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F0E4: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0E4u)) return;
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
label_80C8F0E8:
    ctx->pc = 0x80C8F0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0E8u)) return;
    // 80C8F0E8: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8F0E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_80C8F0EC:
    ctx->pc = 0x80C8F0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0ECu)) return;
    // 80C8F0EC: bc    4, 2, 0x80C8F100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F100;
        }
    }

label_80C8F0F0:
    ctx->pc = 0x80C8F0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F0F0: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F0F4:
    ctx->pc = 0x80C8F0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F0F4: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F0F8:
    ctx->pc = 0x80C8F0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F0F8: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F0F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F0FC:
    ctx->pc = 0x80C8F0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F0FCu)) return;
    // 80C8F0FC: b       0x80C8F134
    {
            goto label_80C8F134;
    }

label_80C8F100:
    ctx->pc = 0x80C8F100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    // 80C8F100: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F104:
    ctx->pc = 0x80C8F104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F104u)) return;
    // 80C8F104: addi    r3, r3, 112
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(112);

label_80C8F108:
    ctx->pc = 0x80C8F108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8F108: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F108u)) return;
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
label_80C8F10C:
    ctx->pc = 0x80C8F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80C8F10Cu)) return;
    // 80C8F10C: fdivs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8F10Cu)) return;
    ppc_fdivs(ctx, 2, 0, 1);

label_80C8F110:
    ctx->pc = 0x80C8F110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F110: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F110u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
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
label_80C8F114:
    ctx->pc = 0x80C8F114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F114u)) return;
    // 80C8F114: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80C8F114u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_80C8F118:
    ctx->pc = 0x80C8F118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F118: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F118u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F11C:
    ctx->pc = 0x80C8F11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F11C: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F11Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_80C8F120:
    ctx->pc = 0x80C8F120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F120u)) return;
    // 80C8F120: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80C8F120u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_80C8F124:
    ctx->pc = 0x80C8F124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F124: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F124u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F128:
    ctx->pc = 0x80C8F128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F128: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F128u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80C8F12C:
    ctx->pc = 0x80C8F12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F12Cu)) return;
    // 80C8F12C: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80C8F12Cu)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_80C8F130:
    ctx->pc = 0x80C8F130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8F130: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80C8F130u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F134:
    ctx->pc = 0x80C8F134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F134: lwz     r31, 12(r1)
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
label_80C8F138:
    ctx->pc = 0x80C8F138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F138: lwz     r0, 20(r1)
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
label_80C8F13C:
    ctx->pc = 0x80C8F13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F13C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F140:
    ctx->pc = 0x80C8F140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F140u)) return;
    // 80C8F140: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F144:
    ctx->pc = 0x80C8F144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F144u)) return;
    // 80C8F144: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F148:
    ctx->pc = 0x80C8F148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F148: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F14C:
    ctx->pc = 0x80C8F14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F14C: stwu     r1, -16(r1)
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
label_80C8F150:
    ctx->pc = 0x80C8F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8F150: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F154:
    ctx->pc = 0x80C8F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F154: stw     r0, 20(r1)
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
label_80C8F158:
    ctx->pc = 0x80C8F158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F158: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F15C:
    ctx->pc = 0x80C8F15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F15Cu)) return;
    // 80C8F15C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8F160:
    ctx->pc = 0x80C8F160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F160u)) return;
    // 80C8F160: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C8F164:
    ctx->pc = 0x80C8F164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F164: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F168:
    ctx->pc = 0x80C8F168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F168: lwz     r6, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F16C:
    ctx->pc = 0x80C8F16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F16C: lwz     r4, 64(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F170:
    ctx->pc = 0x80C8F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F170u)) return;
    // 80C8F170: cmplwi  r4, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8F174:
    ctx->pc = 0x80C8F174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F174u)) return;
    // 80C8F174: bc    12, 2, 0x80C8F188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F188;
        }
    }

label_80C8F178:
    ctx->pc = 0x80C8F178u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F178u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F178: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F17C:
    ctx->pc = 0x80C8F17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F17C: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F180:
    ctx->pc = 0x80C8F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F180: lfs     f1, 60(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C8F180u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
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
label_80C8F184:
    ctx->pc = 0x80C8F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F184u)) return;
    // 80C8F184: bl      0x8048BE20
    {
            ctx->lr = 0x80C8F188u;
            ctx->pc = 0x8048BE20u;
            return;
    }

label_80C8F188:
    ctx->pc = 0x80C8F188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F188: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F18C:
    ctx->pc = 0x80C8F18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F18Cu)) return;
    // 80C8F18C: bl      0x80460B90
    {
            ctx->lr = 0x80C8F190u;
            ctx->pc = 0x80460B90u;
            return;
    }

label_80C8F190:
    ctx->pc = 0x80C8F190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F190: lwz     r31, 12(r1)
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
label_80C8F194:
    ctx->pc = 0x80C8F194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F194: lwz     r0, 20(r1)
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
label_80C8F198:
    ctx->pc = 0x80C8F198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F198: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F19C:
    ctx->pc = 0x80C8F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F19Cu)) return;
    // 80C8F19C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F1A0:
    ctx->pc = 0x80C8F1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1A0u)) return;
    // 80C8F1A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F1A4:
    ctx->pc = 0x80C8F1A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F1A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F1A4: stwu     r1, -16(r1)
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
label_80C8F1A8:
    ctx->pc = 0x80C8F1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F1A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F1AC:
    ctx->pc = 0x80C8F1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F1AC: stw     r0, 20(r1)
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
label_80C8F1B0:
    ctx->pc = 0x80C8F1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1B0u)) return;
    // 80C8F1B0: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F1B4:
    ctx->pc = 0x80C8F1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1B4u)) return;
    // 80C8F1B4: addi    r4, r4, 24560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24560);

label_80C8F1B8:
    ctx->pc = 0x80C8F1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1B8u)) return;
    // 80C8F1B8: bl      0x80C8F14C
    {
            ctx->lr = 0x80C8F1BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8F14Cu;
                return;
            }
            goto label_80C8F14C;
    }

label_80C8F1BC:
    ctx->pc = 0x80C8F1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F1BC: lwz     r0, 20(r1)
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
label_80C8F1C0:
    ctx->pc = 0x80C8F1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F1C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F1C4:
    ctx->pc = 0x80C8F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1C4u)) return;
    // 80C8F1C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F1C8:
    ctx->pc = 0x80C8F1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1C8u)) return;
    // 80C8F1C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F1CC:
    ctx->pc = 0x80C8F1CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F1CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F1CC: stwu     r1, -16(r1)
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
label_80C8F1D0:
    ctx->pc = 0x80C8F1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F1D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F1D4:
    ctx->pc = 0x80C8F1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F1D4: stw     r0, 20(r1)
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
label_80C8F1D8:
    ctx->pc = 0x80C8F1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1D8u)) return;
    // 80C8F1D8: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F1DC:
    ctx->pc = 0x80C8F1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1DCu)) return;
    // 80C8F1DC: addi    r4, r4, 24584
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24584);

label_80C8F1E0:
    ctx->pc = 0x80C8F1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1E0u)) return;
    // 80C8F1E0: bl      0x80C8F14C
    {
            ctx->lr = 0x80C8F1E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8F14Cu;
                return;
            }
            goto label_80C8F14C;
    }

label_80C8F1E4:
    ctx->pc = 0x80C8F1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F1E4: lwz     r0, 20(r1)
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
label_80C8F1E8:
    ctx->pc = 0x80C8F1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F1E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F1EC:
    ctx->pc = 0x80C8F1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1ECu)) return;
    // 80C8F1EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F1F0:
    ctx->pc = 0x80C8F1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1F0u)) return;
    // 80C8F1F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F1F4:
    ctx->pc = 0x80C8F1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F1F4: stwu     r1, -16(r1)
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
label_80C8F1F8:
    ctx->pc = 0x80C8F1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F1F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F1FC:
    ctx->pc = 0x80C8F1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F1FC: stw     r0, 20(r1)
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
label_80C8F200:
    ctx->pc = 0x80C8F200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F200u)) return;
    // 80C8F200: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F204:
    ctx->pc = 0x80C8F204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F204u)) return;
    // 80C8F204: addi    r4, r4, 24608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24608);

label_80C8F208:
    ctx->pc = 0x80C8F208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F208u)) return;
    // 80C8F208: bl      0x80C8F14C
    {
            ctx->lr = 0x80C8F20Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8F14Cu;
                return;
            }
            goto label_80C8F14C;
    }

label_80C8F20C:
    ctx->pc = 0x80C8F20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F20C: lwz     r0, 20(r1)
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
label_80C8F210:
    ctx->pc = 0x80C8F210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F210: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F214:
    ctx->pc = 0x80C8F214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F214u)) return;
    // 80C8F214: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F218:
    ctx->pc = 0x80C8F218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F218u)) return;
    // 80C8F218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F21C:
    ctx->pc = 0x80C8F21Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F21Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F21C: stwu     r1, -16(r1)
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
label_80C8F220:
    ctx->pc = 0x80C8F220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F220: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F224:
    ctx->pc = 0x80C8F224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F224: stw     r0, 20(r1)
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
label_80C8F228:
    ctx->pc = 0x80C8F228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F228: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F22C:
    ctx->pc = 0x80C8F22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F22Cu)) return;
    // 80C8F22C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C8F230:
    ctx->pc = 0x80C8F230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F230u)) return;
    // 80C8F230: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C8F234:
    ctx->pc = 0x80C8F234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F234u)) return;
    // 80C8F234: lis     r5, -32567
    ctx->gpr[5] = ((u32)(s32)(-32567) << 16);

label_80C8F238:
    ctx->pc = 0x80C8F238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F238u)) return;
    // 80C8F238: addi    r5, r5, -3676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3676);

label_80C8F23C:
    ctx->pc = 0x80C8F23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F23Cu)) return;
    // 80C8F23C: bl      0x8050FD60
    {
            ctx->lr = 0x80C8F240u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C8F240:
    ctx->pc = 0x80C8F240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8F240: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8F244:
    ctx->pc = 0x80C8F244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F244: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F248:
    ctx->pc = 0x80C8F248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F248u)) return;
    // 80C8F248: bl      0x80462174
    {
            ctx->lr = 0x80C8F24Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80C8F24C:
    ctx->pc = 0x80C8F24Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F24Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F24C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F250:
    ctx->pc = 0x80C8F250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F250u)) return;
    // 80C8F250: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F254:
    ctx->pc = 0x80C8F254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F254u)) return;
    // 80C8F254: addi    r4, r4, 24632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24632);

label_80C8F258:
    ctx->pc = 0x80C8F258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F258u)) return;
    // 80C8F258: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C8F25C:
    ctx->pc = 0x80C8F25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F25Cu)) return;
    // 80C8F25C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80C8F260:
    ctx->pc = 0x80C8F260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F260u)) return;
    // 80C8F260: bl      0x8041E63C
    {
            ctx->lr = 0x80C8F264u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80C8F264:
    ctx->pc = 0x80C8F264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8F264: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F268:
    ctx->pc = 0x80C8F268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F268: lwz     r31, 12(r1)
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
label_80C8F26C:
    ctx->pc = 0x80C8F26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F26C: lwz     r0, 20(r1)
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
label_80C8F270:
    ctx->pc = 0x80C8F270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F270: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F274:
    ctx->pc = 0x80C8F274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F274u)) return;
    // 80C8F274: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F278:
    ctx->pc = 0x80C8F278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F278u)) return;
    // 80C8F278: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F27C:
    ctx->pc = 0x80C8F27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F27C: stwu     r1, -16(r1)
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
label_80C8F280:
    ctx->pc = 0x80C8F280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F280: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F284:
    ctx->pc = 0x80C8F284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F284: stw     r0, 20(r1)
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
label_80C8F288:
    ctx->pc = 0x80C8F288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F288: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F28C:
    ctx->pc = 0x80C8F28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F28Cu)) return;
    // 80C8F28C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C8F290:
    ctx->pc = 0x80C8F290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F290u)) return;
    // 80C8F290: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C8F294:
    ctx->pc = 0x80C8F294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F294u)) return;
    // 80C8F294: lis     r5, -32567
    ctx->gpr[5] = ((u32)(s32)(-32567) << 16);

label_80C8F298:
    ctx->pc = 0x80C8F298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F298u)) return;
    // 80C8F298: addi    r5, r5, -3636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3636);

label_80C8F29C:
    ctx->pc = 0x80C8F29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F29Cu)) return;
    // 80C8F29C: bl      0x8050FD60
    {
            ctx->lr = 0x80C8F2A0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C8F2A0:
    ctx->pc = 0x80C8F2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8F2A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8F2A4:
    ctx->pc = 0x80C8F2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F2A4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F2A8:
    ctx->pc = 0x80C8F2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2A8u)) return;
    // 80C8F2A8: bl      0x80462174
    {
            ctx->lr = 0x80C8F2ACu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80C8F2AC:
    ctx->pc = 0x80C8F2ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F2ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F2AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F2B0:
    ctx->pc = 0x80C8F2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2B0u)) return;
    // 80C8F2B0: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F2B4:
    ctx->pc = 0x80C8F2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2B4u)) return;
    // 80C8F2B4: addi    r4, r4, 24632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24632);

label_80C8F2B8:
    ctx->pc = 0x80C8F2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2B8u)) return;
    // 80C8F2B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C8F2BC:
    ctx->pc = 0x80C8F2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2BCu)) return;
    // 80C8F2BC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80C8F2C0:
    ctx->pc = 0x80C8F2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2C0u)) return;
    // 80C8F2C0: bl      0x8041E63C
    {
            ctx->lr = 0x80C8F2C4u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80C8F2C4:
    ctx->pc = 0x80C8F2C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F2C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8F2C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F2C8:
    ctx->pc = 0x80C8F2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F2C8: lwz     r31, 12(r1)
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
label_80C8F2CC:
    ctx->pc = 0x80C8F2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F2CC: lwz     r0, 20(r1)
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
label_80C8F2D0:
    ctx->pc = 0x80C8F2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F2D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F2D4:
    ctx->pc = 0x80C8F2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2D4u)) return;
    // 80C8F2D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F2D8:
    ctx->pc = 0x80C8F2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2D8u)) return;
    // 80C8F2D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F2DC:
    ctx->pc = 0x80C8F2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F2DC: stwu     r1, -16(r1)
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
label_80C8F2E0:
    ctx->pc = 0x80C8F2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F2E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F2E4:
    ctx->pc = 0x80C8F2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F2E4: stw     r0, 20(r1)
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
label_80C8F2E8:
    ctx->pc = 0x80C8F2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F2E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F2EC:
    ctx->pc = 0x80C8F2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2ECu)) return;
    // 80C8F2EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C8F2F0:
    ctx->pc = 0x80C8F2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2F0u)) return;
    // 80C8F2F0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C8F2F4:
    ctx->pc = 0x80C8F2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2F4u)) return;
    // 80C8F2F4: lis     r5, -32567
    ctx->gpr[5] = ((u32)(s32)(-32567) << 16);

label_80C8F2F8:
    ctx->pc = 0x80C8F2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2F8u)) return;
    // 80C8F2F8: addi    r5, r5, -3596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3596);

label_80C8F2FC:
    ctx->pc = 0x80C8F2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F2FCu)) return;
    // 80C8F2FC: bl      0x8050FD60
    {
            ctx->lr = 0x80C8F300u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C8F300:
    ctx->pc = 0x80C8F300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8F300: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C8F304:
    ctx->pc = 0x80C8F304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F304: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F308:
    ctx->pc = 0x80C8F308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F308u)) return;
    // 80C8F308: bl      0x80462174
    {
            ctx->lr = 0x80C8F30Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80C8F30C:
    ctx->pc = 0x80C8F30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C8F30C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F310:
    ctx->pc = 0x80C8F310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F310u)) return;
    // 80C8F310: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F314:
    ctx->pc = 0x80C8F314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F314u)) return;
    // 80C8F314: addi    r4, r4, 24632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24632);

label_80C8F318:
    ctx->pc = 0x80C8F318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F318u)) return;
    // 80C8F318: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C8F31C:
    ctx->pc = 0x80C8F31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F31Cu)) return;
    // 80C8F31C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80C8F320:
    ctx->pc = 0x80C8F320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F320u)) return;
    // 80C8F320: bl      0x8041E63C
    {
            ctx->lr = 0x80C8F324u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80C8F324:
    ctx->pc = 0x80C8F324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C8F324: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C8F328:
    ctx->pc = 0x80C8F328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F328: lwz     r31, 12(r1)
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
label_80C8F32C:
    ctx->pc = 0x80C8F32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F32C: lwz     r0, 20(r1)
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
label_80C8F330:
    ctx->pc = 0x80C8F330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F330: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F334:
    ctx->pc = 0x80C8F334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F334u)) return;
    // 80C8F334: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F338:
    ctx->pc = 0x80C8F338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F338u)) return;
    // 80C8F338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F33C:
    ctx->pc = 0x80C8F33Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F33Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F33C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F340:
    ctx->pc = 0x80C8F340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80C8F340: stwu     r1, -64(r1)
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
label_80C8F344:
    ctx->pc = 0x80C8F344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80C8F344: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F348:
    ctx->pc = 0x80C8F348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C8F348: stw     r0, 68(r1)
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
label_80C8F34C:
    ctx->pc = 0x80C8F34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80C8F34C: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F350:
    ctx->pc = 0x80C8F350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80C8F350: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F354:
    ctx->pc = 0x80C8F354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C8F354: stw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F358:
    ctx->pc = 0x80C8F358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C8F358: stw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F35C:
    ctx->pc = 0x80C8F35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C8F35C: lwz     r4, 32(r3)
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
label_80C8F360:
    ctx->pc = 0x80C8F360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F360u)) return;
    // 80C8F360: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F364:
    ctx->pc = 0x80C8F364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F364u)) return;
    // 80C8F364: addi    r3, r3, 120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(120);

label_80C8F368:
    ctx->pc = 0x80C8F368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8F368: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F368u)) return;
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
label_80C8F36C:
    ctx->pc = 0x80C8F36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8F36C: lfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F36Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
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
label_80C8F370:
    ctx->pc = 0x80C8F370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F370u)) return;
    // 80C8F370: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F370u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C8F374:
    ctx->pc = 0x80C8F374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F374u)) return;
    // 80C8F374: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F374u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C8F378:
    ctx->pc = 0x80C8F378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8F378: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F378u)) return;
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
label_80C8F37C:
    ctx->pc = 0x80C8F37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8F37C: lwz     r28, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F380:
    ctx->pc = 0x80C8F380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8F380: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F380u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
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
label_80C8F384:
    ctx->pc = 0x80C8F384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F384u)) return;
    // 80C8F384: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F384u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C8F388:
    ctx->pc = 0x80C8F388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8F388: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F388u)) return;
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
label_80C8F38C:
    ctx->pc = 0x80C8F38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8F38C: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F390:
    ctx->pc = 0x80C8F390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F390: lfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F390u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
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
label_80C8F394:
    ctx->pc = 0x80C8F394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F394u)) return;
    // 80C8F394: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F394u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C8F398:
    ctx->pc = 0x80C8F398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F398: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F398u)) return;
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
label_80C8F39C:
    ctx->pc = 0x80C8F39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F39C: lwz     r30, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F3A0:
    ctx->pc = 0x80C8F3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F3A0: lfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F3A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_80C8F3A4:
    ctx->pc = 0x80C8F3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3A4u)) return;
    // 80C8F3A4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F3A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C8F3A8:
    ctx->pc = 0x80C8F3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F3A8: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F3A8u)) return;
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
label_80C8F3AC:
    ctx->pc = 0x80C8F3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F3AC: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F3B0:
    ctx->pc = 0x80C8F3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3B0u)) return;
    // 80C8F3B0: rlwinm r0, r28, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C8F3B4:
    ctx->pc = 0x80C8F3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3B4u)) return;
    // 80C8F3B4: cmplwi  r0, 0x0000
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

label_80C8F3B8:
    ctx->pc = 0x80C8F3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3B8u)) return;
    // 80C8F3B8: bc    12, 2, 0x80C8F49C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F49C;
        }
    }

label_80C8F3BC:
    ctx->pc = 0x80C8F3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8F3BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C8F3C0:
    ctx->pc = 0x80C8F3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3C0u)) return;
    // 80C8F3C0: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C8F3C4:
    ctx->pc = 0x80C8F3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3C4u)) return;
    // 80C8F3C4: bl      0x8060F4F8
    {
            ctx->lr = 0x80C8F3C8u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C8F3C8:
    ctx->pc = 0x80C8F3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8F3C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C8F3CC:
    ctx->pc = 0x80C8F3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3CCu)) return;
    // 80C8F3CC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C8F3D0:
    ctx->pc = 0x80C8F3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3D0u)) return;
    // 80C8F3D0: bl      0x8060F4F8
    {
            ctx->lr = 0x80C8F3D4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C8F3D4:
    ctx->pc = 0x80C8F3D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F3D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C8F3D4: rlwinm r6, r28, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C8F3D8:
    ctx->pc = 0x80C8F3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3D8u)) return;
    // 80C8F3D8: cmplwi  r6, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80C8F3DC:
    ctx->pc = 0x80C8F3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3DCu)) return;
    // 80C8F3DC: bc    4, 0, 0x80C8F440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F440;
        }
    }

label_80C8F3E0:
    ctx->pc = 0x80C8F3E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F3E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80C8F3E0: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F3E4:
    ctx->pc = 0x80C8F3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3E4u)) return;
    // 80C8F3E4: addi    r3, r3, 124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(124);

label_80C8F3E8:
    ctx->pc = 0x80C8F3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8F3E8: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F3E8u)) return;
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
label_80C8F3EC:
    ctx->pc = 0x80C8F3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3ECu)) return;
    // 80C8F3EC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8F3ECu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C8F3F0:
    ctx->pc = 0x80C8F3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3F0u)) return;
    // 80C8F3F0: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F3F4:
    ctx->pc = 0x80C8F3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3F4u)) return;
    // 80C8F3F4: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_80C8F3F8:
    ctx->pc = 0x80C8F3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8F3F8: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F3F8u)) return;
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
label_80C8F3FC:
    ctx->pc = 0x80C8F3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F3FCu)) return;
    // 80C8F3FC: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F400:
    ctx->pc = 0x80C8F400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F400u)) return;
    // 80C8F400: addi    r3, r3, 132
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(132);

label_80C8F404:
    ctx->pc = 0x80C8F404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8F404: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F404u)) return;
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
label_80C8F408:
    ctx->pc = 0x80C8F408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F408u)) return;
    // 80C8F408: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F40C:
    ctx->pc = 0x80C8F40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F40Cu)) return;
    // 80C8F40C: addi    r3, r3, 136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(136);

label_80C8F410:
    ctx->pc = 0x80C8F410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F410: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F410u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C8F414:
    ctx->pc = 0x80C8F414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F414u)) return;
    // 80C8F414: rlwinm r5, r29, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C8F418:
    ctx->pc = 0x80C8F418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F418u)) return;
    // 80C8F418: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C8F41C:
    ctx->pc = 0x80C8F41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F41Cu)) return;
    // 80C8F41C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C8F420:
    ctx->pc = 0x80C8F420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F420u)) return;
    // 80C8F420: rlwinm r3, r6, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80C8F424:
    ctx->pc = 0x80C8F424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F424u)) return;
    // 80C8F424: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C8F428:
    ctx->pc = 0x80C8F428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F428u)) return;
    // 80C8F428: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C8F42C:
    ctx->pc = 0x80C8F42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F42Cu)) return;
    // 80C8F42C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C8F430:
    ctx->pc = 0x80C8F430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F430u)) return;
    // 80C8F430: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C8F434:
    ctx->pc = 0x80C8F434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F434u)) return;
    // 80C8F434: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C8F438:
    ctx->pc = 0x80C8F438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F438u)) return;
    // 80C8F438: bl      0x80C8F648
    {
            ctx->lr = 0x80C8F43Cu;
            goto label_80C8F648;
    }

label_80C8F43C:
    ctx->pc = 0x80C8F43Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F43Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F43C: b       0x80C8F49C
    {
            goto label_80C8F49C;
    }

label_80C8F440:
    ctx->pc = 0x80C8F440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80C8F440: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F444:
    ctx->pc = 0x80C8F444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F444u)) return;
    // 80C8F444: addi    r3, r3, 124
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(124);

label_80C8F448:
    ctx->pc = 0x80C8F448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8F448: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F448u)) return;
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
label_80C8F44C:
    ctx->pc = 0x80C8F44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F44Cu)) return;
    // 80C8F44C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8F44Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C8F450:
    ctx->pc = 0x80C8F450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F450u)) return;
    // 80C8F450: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F454:
    ctx->pc = 0x80C8F454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F454u)) return;
    // 80C8F454: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_80C8F458:
    ctx->pc = 0x80C8F458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C8F458: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F458u)) return;
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
label_80C8F45C:
    ctx->pc = 0x80C8F45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F45Cu)) return;
    // 80C8F45C: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F460:
    ctx->pc = 0x80C8F460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F460u)) return;
    // 80C8F460: addi    r3, r3, 132
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(132);

label_80C8F464:
    ctx->pc = 0x80C8F464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8F464: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F464u)) return;
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
label_80C8F468:
    ctx->pc = 0x80C8F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F468u)) return;
    // 80C8F468: lis     r3, -27402
    ctx->gpr[3] = ((u32)(s32)(-27402) << 16);

label_80C8F46C:
    ctx->pc = 0x80C8F46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F46Cu)) return;
    // 80C8F46C: addi    r3, r3, 136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(136);

label_80C8F470:
    ctx->pc = 0x80C8F470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F470: lfs     f5, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C8F470u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80C8F474:
    ctx->pc = 0x80C8F474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F474u)) return;
    // 80C8F474: rlwinm r5, r29, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C8F478:
    ctx->pc = 0x80C8F478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F478u)) return;
    // 80C8F478: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C8F47C:
    ctx->pc = 0x80C8F47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F47Cu)) return;
    // 80C8F47C: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C8F480:
    ctx->pc = 0x80C8F480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F480u)) return;
    // 80C8F480: rlwinm r3, r6, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_80C8F484:
    ctx->pc = 0x80C8F484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F484u)) return;
    // 80C8F484: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C8F488:
    ctx->pc = 0x80C8F488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F488u)) return;
    // 80C8F488: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C8F48C:
    ctx->pc = 0x80C8F48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F48Cu)) return;
    // 80C8F48C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C8F490:
    ctx->pc = 0x80C8F490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F490u)) return;
    // 80C8F490: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C8F494:
    ctx->pc = 0x80C8F494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F494u)) return;
    // 80C8F494: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C8F498:
    ctx->pc = 0x80C8F498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F498u)) return;
    // 80C8F498: bl      0x8060ADBC
    {
            ctx->lr = 0x80C8F49Cu;
            ctx->pc = 0x8060ADBCu;
            return;
    }

label_80C8F49C:
    ctx->pc = 0x80C8F49Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F49Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F49C: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F4A0:
    ctx->pc = 0x80C8F4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F4A0: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F4A4:
    ctx->pc = 0x80C8F4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F4A4: lwz     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F4A8:
    ctx->pc = 0x80C8F4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F4A8: lwz     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F4AC:
    ctx->pc = 0x80C8F4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F4AC: lwz     r0, 68(r1)
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
label_80C8F4B0:
    ctx->pc = 0x80C8F4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F4B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F4B4:
    ctx->pc = 0x80C8F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4B4u)) return;
    // 80C8F4B4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C8F4B8:
    ctx->pc = 0x80C8F4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4B8u)) return;
    // 80C8F4B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F4BC:
    ctx->pc = 0x80C8F4BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F4BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8F4BC: stwu     r1, -16(r1)
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
label_80C8F4C0:
    ctx->pc = 0x80C8F4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F4C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F4C4:
    ctx->pc = 0x80C8F4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8F4C4: stw     r0, 20(r1)
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
label_80C8F4C8:
    ctx->pc = 0x80C8F4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F4C8: lwz     r5, 32(r3)
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
label_80C8F4CC:
    ctx->pc = 0x80C8F4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F4CC: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F4CCu)) return;
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
label_80C8F4D0:
    ctx->pc = 0x80C8F4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F4D0: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F4D0u)) return;
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
label_80C8F4D4:
    ctx->pc = 0x80C8F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4D4u)) return;
    // 80C8F4D4: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F4D4u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C8F4D8:
    ctx->pc = 0x80C8F4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4D8u)) return;
    // 80C8F4D8: lis     r4, -27402
    ctx->gpr[4] = ((u32)(s32)(-27402) << 16);

label_80C8F4DC:
    ctx->pc = 0x80C8F4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4DCu)) return;
    // 80C8F4DC: addi    r4, r4, 140
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(140);

label_80C8F4E0:
    ctx->pc = 0x80C8F4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F4E0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F4E0u)) return;
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
label_80C8F4E4:
    ctx->pc = 0x80C8F4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4E4u)) return;
    // 80C8F4E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F4E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C8F4E8:
    ctx->pc = 0x80C8F4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4E8u)) return;
    // 80C8F4E8: bc    4, 1, 0x80C8F4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F4F4;
        }
    }

label_80C8F4EC:
    ctx->pc = 0x80C8F4ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F4ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F4EC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F4ECu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C8F4F0:
    ctx->pc = 0x80C8F4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4F0u)) return;
    // 80C8F4F0: b       0x80C8F50C
    {
            goto label_80C8F50C;
    }

label_80C8F4F4:
    ctx->pc = 0x80C8F4F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F4F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C8F4F4: lis     r4, -27402
    ctx->gpr[4] = ((u32)(s32)(-27402) << 16);

label_80C8F4F8:
    ctx->pc = 0x80C8F4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4F8u)) return;
    // 80C8F4F8: addi    r4, r4, 124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(124);

label_80C8F4FC:
    ctx->pc = 0x80C8F4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F4FC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F4FCu)) return;
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
label_80C8F500:
    ctx->pc = 0x80C8F500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F500u)) return;
    // 80C8F500: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F500u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C8F504:
    ctx->pc = 0x80C8F504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F504u)) return;
    // 80C8F504: bc    4, 0, 0x80C8F50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C8F50C;
        }
    }

label_80C8F508:
    ctx->pc = 0x80C8F508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F508: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C8F508u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C8F50C:
    ctx->pc = 0x80C8F50Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F50Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F50C: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F50Cu)) return;
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
label_80C8F510:
    ctx->pc = 0x80C8F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F510u)) return;
    // 80C8F510: bl      0x80C8F340
    {
            ctx->lr = 0x80C8F514u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8F340u;
                return;
            }
            goto label_80C8F340;
    }

label_80C8F514:
    ctx->pc = 0x80C8F514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F514: lwz     r0, 20(r1)
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
label_80C8F518:
    ctx->pc = 0x80C8F518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F518: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F51C:
    ctx->pc = 0x80C8F51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F51Cu)) return;
    // 80C8F51C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F520:
    ctx->pc = 0x80C8F520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F520u)) return;
    // 80C8F520: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F524:
    ctx->pc = 0x80C8F524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C8F524: stwu     r1, -16(r1)
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
label_80C8F528:
    ctx->pc = 0x80C8F528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C8F528: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F52C:
    ctx->pc = 0x80C8F52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C8F52C: stw     r0, 20(r1)
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
label_80C8F530:
    ctx->pc = 0x80C8F530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C8F530: lwz     r5, 32(r3)
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
label_80C8F534:
    ctx->pc = 0x80C8F534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F534u)) return;
    // 80C8F534: lis     r4, -27402
    ctx->gpr[4] = ((u32)(s32)(-27402) << 16);

label_80C8F538:
    ctx->pc = 0x80C8F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F538u)) return;
    // 80C8F538: addi    r4, r4, 124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(124);

label_80C8F53C:
    ctx->pc = 0x80C8F53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C8F53C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F53Cu)) return;
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
label_80C8F540:
    ctx->pc = 0x80C8F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C8F540: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F540u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F544:
    ctx->pc = 0x80C8F544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F544u)) return;
    // 80C8F544: lis     r4, -27402
    ctx->gpr[4] = ((u32)(s32)(-27402) << 16);

label_80C8F548:
    ctx->pc = 0x80C8F548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F548u)) return;
    // 80C8F548: addi    r4, r4, 144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(144);

label_80C8F54C:
    ctx->pc = 0x80C8F54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8F54C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F54Cu)) return;
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
label_80C8F550:
    ctx->pc = 0x80C8F550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F550: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C8F550u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F554:
    ctx->pc = 0x80C8F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F554u)) return;
    // 80C8F554: lis     r4, -32567
    ctx->gpr[4] = ((u32)(s32)(-32567) << 16);

label_80C8F558:
    ctx->pc = 0x80C8F558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F558u)) return;
    // 80C8F558: addi    r0, r4, -2884
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-2884);

label_80C8F55C:
    ctx->pc = 0x80C8F55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F55C: stw     r0, 16(r3)
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
label_80C8F560:
    ctx->pc = 0x80C8F560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F560u)) return;
    // 80C8F560: lis     r4, -32567
    ctx->gpr[4] = ((u32)(s32)(-32567) << 16);

label_80C8F564:
    ctx->pc = 0x80C8F564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F564u)) return;
    // 80C8F564: addi    r0, r4, -3264
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3264);

label_80C8F568:
    ctx->pc = 0x80C8F568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F568: stw     r0, 20(r3)
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
label_80C8F56C:
    ctx->pc = 0x80C8F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F56Cu)) return;
    // 80C8F56C: lis     r4, -32567
    ctx->gpr[4] = ((u32)(s32)(-32567) << 16);

label_80C8F570:
    ctx->pc = 0x80C8F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F570u)) return;
    // 80C8F570: addi    r0, r4, -3268
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3268);

label_80C8F574:
    ctx->pc = 0x80C8F574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C8F574: stw     r0, 24(r3)
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
label_80C8F578:
    ctx->pc = 0x80C8F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F578u)) return;
    // 80C8F578: bl      0x80C8F4BC
    {
            ctx->lr = 0x80C8F57Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C8F4BCu;
                return;
            }
            goto label_80C8F4BC;
    }

label_80C8F57C:
    ctx->pc = 0x80C8F57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F57C: lwz     r0, 20(r1)
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
label_80C8F580:
    ctx->pc = 0x80C8F580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F580: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F584:
    ctx->pc = 0x80C8F584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F584u)) return;
    // 80C8F584: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F588:
    ctx->pc = 0x80C8F588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F588u)) return;
    // 80C8F588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F58C:
    ctx->pc = 0x80C8F58Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F58Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C8F58C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F590:
    ctx->pc = 0x80C8F590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C8F590: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F594:
    ctx->pc = 0x80C8F594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C8F594: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F598:
    ctx->pc = 0x80C8F598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C8F598: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F59C:
    ctx->pc = 0x80C8F59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F59Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C8F59C: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F59Cu)) return;
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
label_80C8F5A0:
    ctx->pc = 0x80C8F5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C8F5A0: stfd     f29, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5A4:
    ctx->pc = 0x80C8F5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5A4u)) return;
    // 80C8F5A4: fmr    f29, f1
    if (!ppc_fp_available_inline(ctx, 0x80C8F5A4u)) return;
    ctx->fpr[29] = ctx->fpr[1];

label_80C8F5A8:
    ctx->pc = 0x80C8F5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5A8u)) return;
    // 80C8F5A8: fmr    f30, f2
    if (!ppc_fp_available_inline(ctx, 0x80C8F5A8u)) return;
    ctx->fpr[30] = ctx->fpr[2];

label_80C8F5AC:
    ctx->pc = 0x80C8F5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5ACu)) return;
    // 80C8F5AC: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80C8F5ACu)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80C8F5B0:
    ctx->pc = 0x80C8F5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5B0u)) return;
    // 80C8F5B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C8F5B4:
    ctx->pc = 0x80C8F5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5B4u)) return;
    // 80C8F5B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C8F5B8:
    ctx->pc = 0x80C8F5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5B8u)) return;
    // 80C8F5B8: lis     r5, -32567
    ctx->gpr[5] = ((u32)(s32)(-32567) << 16);

label_80C8F5BC:
    ctx->pc = 0x80C8F5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5BCu)) return;
    // 80C8F5BC: addi    r5, r5, -2780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2780);

label_80C8F5C0:
    ctx->pc = 0x80C8F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5C0u)) return;
    // 80C8F5C0: bl      0x8050FD60
    {
            ctx->lr = 0x80C8F5C4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C8F5C4:
    ctx->pc = 0x80C8F5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C8F5C4: cmplwi  r3, 0x0000
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

label_80C8F5C8:
    ctx->pc = 0x80C8F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5C8u)) return;
    // 80C8F5C8: bc    12, 2, 0x80C8F5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F5E8;
        }
    }

label_80C8F5CC:
    ctx->pc = 0x80C8F5CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F5CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F5CC: lwz     r4, 32(r3)
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
label_80C8F5D0:
    ctx->pc = 0x80C8F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F5D0: stfs     f29, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5D4:
    ctx->pc = 0x80C8F5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F5D4: stfs     f30, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5D8:
    ctx->pc = 0x80C8F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F5D8: stfs     f31, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5DC:
    ctx->pc = 0x80C8F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5DCu)) return;
    // 80C8F5DC: lis     r4, -27400
    ctx->gpr[4] = ((u32)(s32)(-27400) << 16);

label_80C8F5E0:
    ctx->pc = 0x80C8F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5E0u)) return;
    // 80C8F5E0: addi    r4, r4, 24712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24712);

label_80C8F5E4:
    ctx->pc = 0x80C8F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8F5E4: stw     r3, 0(r4)
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
label_80C8F5E8:
    ctx->pc = 0x80C8F5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F5E8: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5EC:
    ctx->pc = 0x80C8F5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F5EC: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5ECu)) return;
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
label_80C8F5F0:
    ctx->pc = 0x80C8F5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F5F0: lfd     f29, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C8F5F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5F4:
    ctx->pc = 0x80C8F5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F5F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5F8:
    ctx->pc = 0x80C8F5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F5F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F5FC:
    ctx->pc = 0x80C8F5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F5FCu)) return;
    // 80C8F5FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C8F600:
    ctx->pc = 0x80C8F600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F600u)) return;
    // 80C8F600: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F604:
    ctx->pc = 0x80C8F604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C8F604: stwu     r1, -16(r1)
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
label_80C8F608:
    ctx->pc = 0x80C8F608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C8F608: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F60C:
    ctx->pc = 0x80C8F60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C8F60C: stw     r0, 20(r1)
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
label_80C8F610:
    ctx->pc = 0x80C8F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F610u)) return;
    // 80C8F610: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8F614:
    ctx->pc = 0x80C8F614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F614u)) return;
    // 80C8F614: addi    r3, r3, 24712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24712);

label_80C8F618:
    ctx->pc = 0x80C8F618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F618: lwz     r3, 0(r3)
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
label_80C8F61C:
    ctx->pc = 0x80C8F61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F61Cu)) return;
    // 80C8F61C: cmplwi  r3, 0x0000
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

label_80C8F620:
    ctx->pc = 0x80C8F620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F620u)) return;
    // 80C8F620: bc    12, 2, 0x80C8F638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C8F638;
        }
    }

label_80C8F624:
    ctx->pc = 0x80C8F624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C8F624: bl      0x8050F9E0
    {
            ctx->lr = 0x80C8F628u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C8F628:
    ctx->pc = 0x80C8F628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C8F628: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C8F62C:
    ctx->pc = 0x80C8F62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F62Cu)) return;
    // 80C8F62C: lis     r3, -27400
    ctx->gpr[3] = ((u32)(s32)(-27400) << 16);

label_80C8F630:
    ctx->pc = 0x80C8F630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F630u)) return;
    // 80C8F630: addi    r3, r3, 24712
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24712);

label_80C8F634:
    ctx->pc = 0x80C8F634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C8F634: stw     r0, 0(r3)
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
label_80C8F638:
    ctx->pc = 0x80C8F638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F638: lwz     r0, 20(r1)
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
label_80C8F63C:
    ctx->pc = 0x80C8F63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F63C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F640:
    ctx->pc = 0x80C8F640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F640u)) return;
    // 80C8F640: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F644:
    ctx->pc = 0x80C8F644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F644u)) return;
    // 80C8F644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

label_80C8F648:
    ctx->pc = 0x80C8F648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F648: stwu     r1, -16(r1)
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
label_80C8F64C:
    ctx->pc = 0x80C8F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C8F64C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F650:
    ctx->pc = 0x80C8F650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F650: stw     r0, 20(r1)
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
label_80C8F654:
    ctx->pc = 0x80C8F654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F654u)) return;
    // 80C8F654: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C8F658:
    ctx->pc = 0x80C8F658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F658u)) return;
    // 80C8F658: bl      0x80607948
    {
            ctx->lr = 0x80C8F65Cu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C8F65C:
    ctx->pc = 0x80C8F65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C8F65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C8F65C: lwz     r0, 20(r1)
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
label_80C8F660:
    ctx->pc = 0x80C8F660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C8F660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C8F660: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C8F664:
    ctx->pc = 0x80C8F664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F664u)) return;
    // 80C8F664: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C8F668:
    ctx->pc = 0x80C8F668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C8F668u)) return;
    // 80C8F668: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C8E120;
        }
    }

    ctx->pc = 0x80C8F66Cu;
    return;
return_dispatch_80C8E120:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C8E138u: goto label_80C8E138;
    case 0x80C8E194u: goto label_80C8E194;
    case 0x80C8E1D0u: goto label_80C8E1D0;
    case 0x80C8E1ECu: goto label_80C8E1EC;
    case 0x80C8E20Cu: goto label_80C8E20C;
    case 0x80C8E224u: goto label_80C8E224;
    case 0x80C8E2B0u: goto label_80C8E2B0;
    case 0x80C8E2ECu: goto label_80C8E2EC;
    case 0x80C8E308u: goto label_80C8E308;
    case 0x80C8E328u: goto label_80C8E328;
    case 0x80C8E340u: goto label_80C8E340;
    case 0x80C8E3CCu: goto label_80C8E3CC;
    case 0x80C8E430u: goto label_80C8E430;
    case 0x80C8E49Cu: goto label_80C8E49C;
    case 0x80C8E684u: goto label_80C8E684;
    case 0x80C8E79Cu: goto label_80C8E79C;
    case 0x80C8E8A4u: goto label_80C8E8A4;
    case 0x80C8E9ECu: goto label_80C8E9EC;
    case 0x80C8EB1Cu: goto label_80C8EB1C;
    case 0x80C8EB6Cu: goto label_80C8EB6C;
    case 0x80C8EB78u: goto label_80C8EB78;
    case 0x80C8EB90u: goto label_80C8EB90;
    case 0x80C8EBA8u: goto label_80C8EBA8;
    case 0x80C8EBC0u: goto label_80C8EBC0;
    case 0x80C8EBD0u: goto label_80C8EBD0;
    case 0x80C8EBD8u: goto label_80C8EBD8;
    case 0x80C8EC80u: goto label_80C8EC80;
    case 0x80C8EC9Cu: goto label_80C8EC9C;
    case 0x80C8ECACu: goto label_80C8ECAC;
    case 0x80C8ECF0u: goto label_80C8ECF0;
    case 0x80C8ED0Cu: goto label_80C8ED0C;
    case 0x80C8ED28u: goto label_80C8ED28;
    case 0x80C8ED50u: goto label_80C8ED50;
    case 0x80C8ED60u: goto label_80C8ED60;
    case 0x80C8ED68u: goto label_80C8ED68;
    case 0x80C8EE24u: goto label_80C8EE24;
    case 0x80C8EE40u: goto label_80C8EE40;
    case 0x80C8EE50u: goto label_80C8EE50;
    case 0x80C8EE94u: goto label_80C8EE94;
    case 0x80C8EEB0u: goto label_80C8EEB0;
    case 0x80C8EECCu: goto label_80C8EECC;
    case 0x80C8EEF4u: goto label_80C8EEF4;
    case 0x80C8EF04u: goto label_80C8EF04;
    case 0x80C8EF0Cu: goto label_80C8EF0C;
    case 0x80C8EFC8u: goto label_80C8EFC8;
    case 0x80C8F00Cu: goto label_80C8F00C;
    case 0x80C8F0DCu: goto label_80C8F0DC;
    case 0x80C8F188u: goto label_80C8F188;
    case 0x80C8F190u: goto label_80C8F190;
    case 0x80C8F1BCu: goto label_80C8F1BC;
    case 0x80C8F1E4u: goto label_80C8F1E4;
    case 0x80C8F20Cu: goto label_80C8F20C;
    case 0x80C8F240u: goto label_80C8F240;
    case 0x80C8F24Cu: goto label_80C8F24C;
    case 0x80C8F264u: goto label_80C8F264;
    case 0x80C8F2A0u: goto label_80C8F2A0;
    case 0x80C8F2ACu: goto label_80C8F2AC;
    case 0x80C8F2C4u: goto label_80C8F2C4;
    case 0x80C8F300u: goto label_80C8F300;
    case 0x80C8F30Cu: goto label_80C8F30C;
    case 0x80C8F324u: goto label_80C8F324;
    case 0x80C8F3C8u: goto label_80C8F3C8;
    case 0x80C8F3D4u: goto label_80C8F3D4;
    case 0x80C8F43Cu: goto label_80C8F43C;
    case 0x80C8F49Cu: goto label_80C8F49C;
    case 0x80C8F514u: goto label_80C8F514;
    case 0x80C8F57Cu: goto label_80C8F57C;
    case 0x80C8F5C4u: goto label_80C8F5C4;
    case 0x80C8F628u: goto label_80C8F628;
    case 0x80C8F65Cu: goto label_80C8F65C;
    default: return;
    }
}

