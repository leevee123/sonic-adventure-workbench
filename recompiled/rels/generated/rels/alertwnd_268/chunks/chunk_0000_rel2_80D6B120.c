// DolRecomp output
#include "../generated.h"

void func_80D6B120(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D6B120[2082] = {
        &&label_80D6B120,
        &&label_80D6B124,
        &&label_80D6B128,
        &&label_80D6B12C,
        &&label_80D6B130,
        &&label_80D6B134,
        &&label_80D6B138,
        &&label_80D6B13C,
        &&label_80D6B140,
        &&label_80D6B144,
        &&label_80D6B148,
        &&label_80D6B14C,
        &&label_80D6B150,
        &&label_80D6B154,
        &&label_80D6B158,
        &&label_80D6B15C,
        &&label_80D6B160,
        &&label_80D6B164,
        &&label_80D6B168,
        &&label_80D6B16C,
        &&label_80D6B170,
        &&label_80D6B174,
        &&label_80D6B178,
        &&label_80D6B17C,
        &&label_80D6B180,
        &&label_80D6B184,
        &&label_80D6B188,
        &&label_80D6B18C,
        &&label_80D6B190,
        &&label_80D6B194,
        &&label_80D6B198,
        &&label_80D6B19C,
        &&label_80D6B1A0,
        &&label_80D6B1A4,
        &&label_80D6B1A8,
        &&label_80D6B1AC,
        &&label_80D6B1B0,
        &&label_80D6B1B4,
        &&label_80D6B1B8,
        &&label_80D6B1BC,
        &&label_80D6B1C0,
        &&label_80D6B1C4,
        &&label_80D6B1C8,
        &&label_80D6B1CC,
        &&label_80D6B1D0,
        &&label_80D6B1D4,
        &&label_80D6B1D8,
        &&label_80D6B1DC,
        &&label_80D6B1E0,
        &&label_80D6B1E4,
        &&label_80D6B1E8,
        &&label_80D6B1EC,
        &&label_80D6B1F0,
        &&label_80D6B1F4,
        &&label_80D6B1F8,
        &&label_80D6B1FC,
        &&label_80D6B200,
        &&label_80D6B204,
        &&label_80D6B208,
        &&label_80D6B20C,
        &&label_80D6B210,
        &&label_80D6B214,
        &&label_80D6B218,
        &&label_80D6B21C,
        &&label_80D6B220,
        &&label_80D6B224,
        &&label_80D6B228,
        &&label_80D6B22C,
        &&label_80D6B230,
        &&label_80D6B234,
        &&label_80D6B238,
        &&label_80D6B23C,
        &&label_80D6B240,
        &&label_80D6B244,
        &&label_80D6B248,
        &&label_80D6B24C,
        &&label_80D6B250,
        &&label_80D6B254,
        &&label_80D6B258,
        &&label_80D6B25C,
        &&label_80D6B260,
        &&label_80D6B264,
        &&label_80D6B268,
        &&label_80D6B26C,
        &&label_80D6B270,
        &&label_80D6B274,
        &&label_80D6B278,
        &&label_80D6B27C,
        &&label_80D6B280,
        &&label_80D6B284,
        &&label_80D6B288,
        &&label_80D6B28C,
        &&label_80D6B290,
        &&label_80D6B294,
        &&label_80D6B298,
        &&label_80D6B29C,
        &&label_80D6B2A0,
        &&label_80D6B2A4,
        &&label_80D6B2A8,
        &&label_80D6B2AC,
        &&label_80D6B2B0,
        &&label_80D6B2B4,
        &&label_80D6B2B8,
        &&label_80D6B2BC,
        &&label_80D6B2C0,
        &&label_80D6B2C4,
        &&label_80D6B2C8,
        &&label_80D6B2CC,
        &&label_80D6B2D0,
        &&label_80D6B2D4,
        &&label_80D6B2D8,
        &&label_80D6B2DC,
        &&label_80D6B2E0,
        &&label_80D6B2E4,
        &&label_80D6B2E8,
        &&label_80D6B2EC,
        &&label_80D6B2F0,
        &&label_80D6B2F4,
        &&label_80D6B2F8,
        &&label_80D6B2FC,
        &&label_80D6B300,
        &&label_80D6B304,
        &&label_80D6B308,
        &&label_80D6B30C,
        &&label_80D6B310,
        &&label_80D6B314,
        &&label_80D6B318,
        &&label_80D6B31C,
        &&label_80D6B320,
        &&label_80D6B324,
        &&label_80D6B328,
        &&label_80D6B32C,
        &&label_80D6B330,
        &&label_80D6B334,
        &&label_80D6B338,
        &&label_80D6B33C,
        &&label_80D6B340,
        &&label_80D6B344,
        &&label_80D6B348,
        &&label_80D6B34C,
        &&label_80D6B350,
        &&label_80D6B354,
        &&label_80D6B358,
        &&label_80D6B35C,
        &&label_80D6B360,
        &&label_80D6B364,
        &&label_80D6B368,
        &&label_80D6B36C,
        &&label_80D6B370,
        &&label_80D6B374,
        &&label_80D6B378,
        &&label_80D6B37C,
        &&label_80D6B380,
        &&label_80D6B384,
        &&label_80D6B388,
        &&label_80D6B38C,
        &&label_80D6B390,
        &&label_80D6B394,
        &&label_80D6B398,
        &&label_80D6B39C,
        &&label_80D6B3A0,
        &&label_80D6B3A4,
        &&label_80D6B3A8,
        &&label_80D6B3AC,
        &&label_80D6B3B0,
        &&label_80D6B3B4,
        &&label_80D6B3B8,
        &&label_80D6B3BC,
        &&label_80D6B3C0,
        &&label_80D6B3C4,
        &&label_80D6B3C8,
        &&label_80D6B3CC,
        &&label_80D6B3D0,
        &&label_80D6B3D4,
        &&label_80D6B3D8,
        &&label_80D6B3DC,
        &&label_80D6B3E0,
        &&label_80D6B3E4,
        &&label_80D6B3E8,
        &&label_80D6B3EC,
        &&label_80D6B3F0,
        &&label_80D6B3F4,
        &&label_80D6B3F8,
        &&label_80D6B3FC,
        &&label_80D6B400,
        &&label_80D6B404,
        &&label_80D6B408,
        &&label_80D6B40C,
        &&label_80D6B410,
        &&label_80D6B414,
        &&label_80D6B418,
        &&label_80D6B41C,
        &&label_80D6B420,
        &&label_80D6B424,
        &&label_80D6B428,
        &&label_80D6B42C,
        &&label_80D6B430,
        &&label_80D6B434,
        &&label_80D6B438,
        &&label_80D6B43C,
        &&label_80D6B440,
        &&label_80D6B444,
        &&label_80D6B448,
        &&label_80D6B44C,
        &&label_80D6B450,
        &&label_80D6B454,
        &&label_80D6B458,
        &&label_80D6B45C,
        &&label_80D6B460,
        &&label_80D6B464,
        &&label_80D6B468,
        &&label_80D6B46C,
        &&label_80D6B470,
        &&label_80D6B474,
        &&label_80D6B478,
        &&label_80D6B47C,
        &&label_80D6B480,
        &&label_80D6B484,
        &&label_80D6B488,
        &&label_80D6B48C,
        &&label_80D6B490,
        &&label_80D6B494,
        &&label_80D6B498,
        &&label_80D6B49C,
        &&label_80D6B4A0,
        &&label_80D6B4A4,
        &&label_80D6B4A8,
        &&label_80D6B4AC,
        &&label_80D6B4B0,
        &&label_80D6B4B4,
        &&label_80D6B4B8,
        &&label_80D6B4BC,
        &&label_80D6B4C0,
        &&label_80D6B4C4,
        &&label_80D6B4C8,
        &&label_80D6B4CC,
        &&label_80D6B4D0,
        &&label_80D6B4D4,
        &&label_80D6B4D8,
        &&label_80D6B4DC,
        &&label_80D6B4E0,
        &&label_80D6B4E4,
        &&label_80D6B4E8,
        &&label_80D6B4EC,
        &&label_80D6B4F0,
        &&label_80D6B4F4,
        &&label_80D6B4F8,
        &&label_80D6B4FC,
        &&label_80D6B500,
        &&label_80D6B504,
        &&label_80D6B508,
        &&label_80D6B50C,
        &&label_80D6B510,
        &&label_80D6B514,
        &&label_80D6B518,
        &&label_80D6B51C,
        &&label_80D6B520,
        &&label_80D6B524,
        &&label_80D6B528,
        &&label_80D6B52C,
        &&label_80D6B530,
        &&label_80D6B534,
        &&label_80D6B538,
        &&label_80D6B53C,
        &&label_80D6B540,
        &&label_80D6B544,
        &&label_80D6B548,
        &&label_80D6B54C,
        &&label_80D6B550,
        &&label_80D6B554,
        &&label_80D6B558,
        &&label_80D6B55C,
        &&label_80D6B560,
        &&label_80D6B564,
        &&label_80D6B568,
        &&label_80D6B56C,
        &&label_80D6B570,
        &&label_80D6B574,
        &&label_80D6B578,
        &&label_80D6B57C,
        &&label_80D6B580,
        &&label_80D6B584,
        &&label_80D6B588,
        &&label_80D6B58C,
        &&label_80D6B590,
        &&label_80D6B594,
        &&label_80D6B598,
        &&label_80D6B59C,
        &&label_80D6B5A0,
        &&label_80D6B5A4,
        &&label_80D6B5A8,
        &&label_80D6B5AC,
        &&label_80D6B5B0,
        &&label_80D6B5B4,
        &&label_80D6B5B8,
        &&label_80D6B5BC,
        &&label_80D6B5C0,
        &&label_80D6B5C4,
        &&label_80D6B5C8,
        &&label_80D6B5CC,
        &&label_80D6B5D0,
        &&label_80D6B5D4,
        &&label_80D6B5D8,
        &&label_80D6B5DC,
        &&label_80D6B5E0,
        &&label_80D6B5E4,
        &&label_80D6B5E8,
        &&label_80D6B5EC,
        &&label_80D6B5F0,
        &&label_80D6B5F4,
        &&label_80D6B5F8,
        &&label_80D6B5FC,
        &&label_80D6B600,
        &&label_80D6B604,
        &&label_80D6B608,
        &&label_80D6B60C,
        &&label_80D6B610,
        &&label_80D6B614,
        &&label_80D6B618,
        &&label_80D6B61C,
        &&label_80D6B620,
        &&label_80D6B624,
        &&label_80D6B628,
        &&label_80D6B62C,
        &&label_80D6B630,
        &&label_80D6B634,
        &&label_80D6B638,
        &&label_80D6B63C,
        &&label_80D6B640,
        &&label_80D6B644,
        &&label_80D6B648,
        &&label_80D6B64C,
        &&label_80D6B650,
        &&label_80D6B654,
        &&label_80D6B658,
        &&label_80D6B65C,
        &&label_80D6B660,
        &&label_80D6B664,
        &&label_80D6B668,
        &&label_80D6B66C,
        &&label_80D6B670,
        &&label_80D6B674,
        &&label_80D6B678,
        &&label_80D6B67C,
        &&label_80D6B680,
        &&label_80D6B684,
        &&label_80D6B688,
        &&label_80D6B68C,
        &&label_80D6B690,
        &&label_80D6B694,
        &&label_80D6B698,
        &&label_80D6B69C,
        &&label_80D6B6A0,
        &&label_80D6B6A4,
        &&label_80D6B6A8,
        &&label_80D6B6AC,
        &&label_80D6B6B0,
        &&label_80D6B6B4,
        &&label_80D6B6B8,
        &&label_80D6B6BC,
        &&label_80D6B6C0,
        &&label_80D6B6C4,
        &&label_80D6B6C8,
        &&label_80D6B6CC,
        &&label_80D6B6D0,
        &&label_80D6B6D4,
        &&label_80D6B6D8,
        &&label_80D6B6DC,
        &&label_80D6B6E0,
        &&label_80D6B6E4,
        &&label_80D6B6E8,
        &&label_80D6B6EC,
        &&label_80D6B6F0,
        &&label_80D6B6F4,
        &&label_80D6B6F8,
        &&label_80D6B6FC,
        &&label_80D6B700,
        &&label_80D6B704,
        &&label_80D6B708,
        &&label_80D6B70C,
        &&label_80D6B710,
        &&label_80D6B714,
        &&label_80D6B718,
        &&label_80D6B71C,
        &&label_80D6B720,
        &&label_80D6B724,
        &&label_80D6B728,
        &&label_80D6B72C,
        &&label_80D6B730,
        &&label_80D6B734,
        &&label_80D6B738,
        &&label_80D6B73C,
        &&label_80D6B740,
        &&label_80D6B744,
        &&label_80D6B748,
        &&label_80D6B74C,
        &&label_80D6B750,
        &&label_80D6B754,
        &&label_80D6B758,
        &&label_80D6B75C,
        &&label_80D6B760,
        &&label_80D6B764,
        &&label_80D6B768,
        &&label_80D6B76C,
        &&label_80D6B770,
        &&label_80D6B774,
        &&label_80D6B778,
        &&label_80D6B77C,
        &&label_80D6B780,
        &&label_80D6B784,
        &&label_80D6B788,
        &&label_80D6B78C,
        &&label_80D6B790,
        &&label_80D6B794,
        &&label_80D6B798,
        &&label_80D6B79C,
        &&label_80D6B7A0,
        &&label_80D6B7A4,
        &&label_80D6B7A8,
        &&label_80D6B7AC,
        &&label_80D6B7B0,
        &&label_80D6B7B4,
        &&label_80D6B7B8,
        &&label_80D6B7BC,
        &&label_80D6B7C0,
        &&label_80D6B7C4,
        &&label_80D6B7C8,
        &&label_80D6B7CC,
        &&label_80D6B7D0,
        &&label_80D6B7D4,
        &&label_80D6B7D8,
        &&label_80D6B7DC,
        &&label_80D6B7E0,
        &&label_80D6B7E4,
        &&label_80D6B7E8,
        &&label_80D6B7EC,
        &&label_80D6B7F0,
        &&label_80D6B7F4,
        &&label_80D6B7F8,
        &&label_80D6B7FC,
        &&label_80D6B800,
        &&label_80D6B804,
        &&label_80D6B808,
        &&label_80D6B80C,
        &&label_80D6B810,
        &&label_80D6B814,
        &&label_80D6B818,
        &&label_80D6B81C,
        &&label_80D6B820,
        &&label_80D6B824,
        &&label_80D6B828,
        &&label_80D6B82C,
        &&label_80D6B830,
        &&label_80D6B834,
        &&label_80D6B838,
        &&label_80D6B83C,
        &&label_80D6B840,
        &&label_80D6B844,
        &&label_80D6B848,
        &&label_80D6B84C,
        &&label_80D6B850,
        &&label_80D6B854,
        &&label_80D6B858,
        &&label_80D6B85C,
        &&label_80D6B860,
        &&label_80D6B864,
        &&label_80D6B868,
        &&label_80D6B86C,
        &&label_80D6B870,
        &&label_80D6B874,
        &&label_80D6B878,
        &&label_80D6B87C,
        &&label_80D6B880,
        &&label_80D6B884,
        &&label_80D6B888,
        &&label_80D6B88C,
        &&label_80D6B890,
        &&label_80D6B894,
        &&label_80D6B898,
        &&label_80D6B89C,
        &&label_80D6B8A0,
        &&label_80D6B8A4,
        &&label_80D6B8A8,
        &&label_80D6B8AC,
        &&label_80D6B8B0,
        &&label_80D6B8B4,
        &&label_80D6B8B8,
        &&label_80D6B8BC,
        &&label_80D6B8C0,
        &&label_80D6B8C4,
        &&label_80D6B8C8,
        &&label_80D6B8CC,
        &&label_80D6B8D0,
        &&label_80D6B8D4,
        &&label_80D6B8D8,
        &&label_80D6B8DC,
        &&label_80D6B8E0,
        &&label_80D6B8E4,
        &&label_80D6B8E8,
        &&label_80D6B8EC,
        &&label_80D6B8F0,
        &&label_80D6B8F4,
        &&label_80D6B8F8,
        &&label_80D6B8FC,
        &&label_80D6B900,
        &&label_80D6B904,
        &&label_80D6B908,
        &&label_80D6B90C,
        &&label_80D6B910,
        &&label_80D6B914,
        &&label_80D6B918,
        &&label_80D6B91C,
        &&label_80D6B920,
        &&label_80D6B924,
        &&label_80D6B928,
        &&label_80D6B92C,
        &&label_80D6B930,
        &&label_80D6B934,
        &&label_80D6B938,
        &&label_80D6B93C,
        &&label_80D6B940,
        &&label_80D6B944,
        &&label_80D6B948,
        &&label_80D6B94C,
        &&label_80D6B950,
        &&label_80D6B954,
        &&label_80D6B958,
        &&label_80D6B95C,
        &&label_80D6B960,
        &&label_80D6B964,
        &&label_80D6B968,
        &&label_80D6B96C,
        &&label_80D6B970,
        &&label_80D6B974,
        &&label_80D6B978,
        &&label_80D6B97C,
        &&label_80D6B980,
        &&label_80D6B984,
        &&label_80D6B988,
        &&label_80D6B98C,
        &&label_80D6B990,
        &&label_80D6B994,
        &&label_80D6B998,
        &&label_80D6B99C,
        &&label_80D6B9A0,
        &&label_80D6B9A4,
        &&label_80D6B9A8,
        &&label_80D6B9AC,
        &&label_80D6B9B0,
        &&label_80D6B9B4,
        &&label_80D6B9B8,
        &&label_80D6B9BC,
        &&label_80D6B9C0,
        &&label_80D6B9C4,
        &&label_80D6B9C8,
        &&label_80D6B9CC,
        &&label_80D6B9D0,
        &&label_80D6B9D4,
        &&label_80D6B9D8,
        &&label_80D6B9DC,
        &&label_80D6B9E0,
        &&label_80D6B9E4,
        &&label_80D6B9E8,
        &&label_80D6B9EC,
        &&label_80D6B9F0,
        &&label_80D6B9F4,
        &&label_80D6B9F8,
        &&label_80D6B9FC,
        &&label_80D6BA00,
        &&label_80D6BA04,
        &&label_80D6BA08,
        &&label_80D6BA0C,
        &&label_80D6BA10,
        &&label_80D6BA14,
        &&label_80D6BA18,
        &&label_80D6BA1C,
        &&label_80D6BA20,
        &&label_80D6BA24,
        &&label_80D6BA28,
        &&label_80D6BA2C,
        &&label_80D6BA30,
        &&label_80D6BA34,
        &&label_80D6BA38,
        &&label_80D6BA3C,
        &&label_80D6BA40,
        &&label_80D6BA44,
        &&label_80D6BA48,
        &&label_80D6BA4C,
        &&label_80D6BA50,
        &&label_80D6BA54,
        &&label_80D6BA58,
        &&label_80D6BA5C,
        &&label_80D6BA60,
        &&label_80D6BA64,
        &&label_80D6BA68,
        &&label_80D6BA6C,
        &&label_80D6BA70,
        &&label_80D6BA74,
        &&label_80D6BA78,
        &&label_80D6BA7C,
        &&label_80D6BA80,
        &&label_80D6BA84,
        &&label_80D6BA88,
        &&label_80D6BA8C,
        &&label_80D6BA90,
        &&label_80D6BA94,
        &&label_80D6BA98,
        &&label_80D6BA9C,
        &&label_80D6BAA0,
        &&label_80D6BAA4,
        &&label_80D6BAA8,
        &&label_80D6BAAC,
        &&label_80D6BAB0,
        &&label_80D6BAB4,
        &&label_80D6BAB8,
        &&label_80D6BABC,
        &&label_80D6BAC0,
        &&label_80D6BAC4,
        &&label_80D6BAC8,
        &&label_80D6BACC,
        &&label_80D6BAD0,
        &&label_80D6BAD4,
        &&label_80D6BAD8,
        &&label_80D6BADC,
        &&label_80D6BAE0,
        &&label_80D6BAE4,
        &&label_80D6BAE8,
        &&label_80D6BAEC,
        &&label_80D6BAF0,
        &&label_80D6BAF4,
        &&label_80D6BAF8,
        &&label_80D6BAFC,
        &&label_80D6BB00,
        &&label_80D6BB04,
        &&label_80D6BB08,
        &&label_80D6BB0C,
        &&label_80D6BB10,
        &&label_80D6BB14,
        &&label_80D6BB18,
        &&label_80D6BB1C,
        &&label_80D6BB20,
        &&label_80D6BB24,
        &&label_80D6BB28,
        &&label_80D6BB2C,
        &&label_80D6BB30,
        &&label_80D6BB34,
        &&label_80D6BB38,
        &&label_80D6BB3C,
        &&label_80D6BB40,
        &&label_80D6BB44,
        &&label_80D6BB48,
        &&label_80D6BB4C,
        &&label_80D6BB50,
        &&label_80D6BB54,
        &&label_80D6BB58,
        &&label_80D6BB5C,
        &&label_80D6BB60,
        &&label_80D6BB64,
        &&label_80D6BB68,
        &&label_80D6BB6C,
        &&label_80D6BB70,
        &&label_80D6BB74,
        &&label_80D6BB78,
        &&label_80D6BB7C,
        &&label_80D6BB80,
        &&label_80D6BB84,
        &&label_80D6BB88,
        &&label_80D6BB8C,
        &&label_80D6BB90,
        &&label_80D6BB94,
        &&label_80D6BB98,
        &&label_80D6BB9C,
        &&label_80D6BBA0,
        &&label_80D6BBA4,
        &&label_80D6BBA8,
        &&label_80D6BBAC,
        &&label_80D6BBB0,
        &&label_80D6BBB4,
        &&label_80D6BBB8,
        &&label_80D6BBBC,
        &&label_80D6BBC0,
        &&label_80D6BBC4,
        &&label_80D6BBC8,
        &&label_80D6BBCC,
        &&label_80D6BBD0,
        &&label_80D6BBD4,
        &&label_80D6BBD8,
        &&label_80D6BBDC,
        &&label_80D6BBE0,
        &&label_80D6BBE4,
        &&label_80D6BBE8,
        &&label_80D6BBEC,
        &&label_80D6BBF0,
        &&label_80D6BBF4,
        &&label_80D6BBF8,
        &&label_80D6BBFC,
        &&label_80D6BC00,
        &&label_80D6BC04,
        &&label_80D6BC08,
        &&label_80D6BC0C,
        &&label_80D6BC10,
        &&label_80D6BC14,
        &&label_80D6BC18,
        &&label_80D6BC1C,
        &&label_80D6BC20,
        &&label_80D6BC24,
        &&label_80D6BC28,
        &&label_80D6BC2C,
        &&label_80D6BC30,
        &&label_80D6BC34,
        &&label_80D6BC38,
        &&label_80D6BC3C,
        &&label_80D6BC40,
        &&label_80D6BC44,
        &&label_80D6BC48,
        &&label_80D6BC4C,
        &&label_80D6BC50,
        &&label_80D6BC54,
        &&label_80D6BC58,
        &&label_80D6BC5C,
        &&label_80D6BC60,
        &&label_80D6BC64,
        &&label_80D6BC68,
        &&label_80D6BC6C,
        &&label_80D6BC70,
        &&label_80D6BC74,
        &&label_80D6BC78,
        &&label_80D6BC7C,
        &&label_80D6BC80,
        &&label_80D6BC84,
        &&label_80D6BC88,
        &&label_80D6BC8C,
        &&label_80D6BC90,
        &&label_80D6BC94,
        &&label_80D6BC98,
        &&label_80D6BC9C,
        &&label_80D6BCA0,
        &&label_80D6BCA4,
        &&label_80D6BCA8,
        &&label_80D6BCAC,
        &&label_80D6BCB0,
        &&label_80D6BCB4,
        &&label_80D6BCB8,
        &&label_80D6BCBC,
        &&label_80D6BCC0,
        &&label_80D6BCC4,
        &&label_80D6BCC8,
        &&label_80D6BCCC,
        &&label_80D6BCD0,
        &&label_80D6BCD4,
        &&label_80D6BCD8,
        &&label_80D6BCDC,
        &&label_80D6BCE0,
        &&label_80D6BCE4,
        &&label_80D6BCE8,
        &&label_80D6BCEC,
        &&label_80D6BCF0,
        &&label_80D6BCF4,
        &&label_80D6BCF8,
        &&label_80D6BCFC,
        &&label_80D6BD00,
        &&label_80D6BD04,
        &&label_80D6BD08,
        &&label_80D6BD0C,
        &&label_80D6BD10,
        &&label_80D6BD14,
        &&label_80D6BD18,
        &&label_80D6BD1C,
        &&label_80D6BD20,
        &&label_80D6BD24,
        &&label_80D6BD28,
        &&label_80D6BD2C,
        &&label_80D6BD30,
        &&label_80D6BD34,
        &&label_80D6BD38,
        &&label_80D6BD3C,
        &&label_80D6BD40,
        &&label_80D6BD44,
        &&label_80D6BD48,
        &&label_80D6BD4C,
        &&label_80D6BD50,
        &&label_80D6BD54,
        &&label_80D6BD58,
        &&label_80D6BD5C,
        &&label_80D6BD60,
        &&label_80D6BD64,
        &&label_80D6BD68,
        &&label_80D6BD6C,
        &&label_80D6BD70,
        &&label_80D6BD74,
        &&label_80D6BD78,
        &&label_80D6BD7C,
        &&label_80D6BD80,
        &&label_80D6BD84,
        &&label_80D6BD88,
        &&label_80D6BD8C,
        &&label_80D6BD90,
        &&label_80D6BD94,
        &&label_80D6BD98,
        &&label_80D6BD9C,
        &&label_80D6BDA0,
        &&label_80D6BDA4,
        &&label_80D6BDA8,
        &&label_80D6BDAC,
        &&label_80D6BDB0,
        &&label_80D6BDB4,
        &&label_80D6BDB8,
        &&label_80D6BDBC,
        &&label_80D6BDC0,
        &&label_80D6BDC4,
        &&label_80D6BDC8,
        &&label_80D6BDCC,
        &&label_80D6BDD0,
        &&label_80D6BDD4,
        &&label_80D6BDD8,
        &&label_80D6BDDC,
        &&label_80D6BDE0,
        &&label_80D6BDE4,
        &&label_80D6BDE8,
        &&label_80D6BDEC,
        &&label_80D6BDF0,
        &&label_80D6BDF4,
        &&label_80D6BDF8,
        &&label_80D6BDFC,
        &&label_80D6BE00,
        &&label_80D6BE04,
        &&label_80D6BE08,
        &&label_80D6BE0C,
        &&label_80D6BE10,
        &&label_80D6BE14,
        &&label_80D6BE18,
        &&label_80D6BE1C,
        &&label_80D6BE20,
        &&label_80D6BE24,
        &&label_80D6BE28,
        &&label_80D6BE2C,
        &&label_80D6BE30,
        &&label_80D6BE34,
        &&label_80D6BE38,
        &&label_80D6BE3C,
        &&label_80D6BE40,
        &&label_80D6BE44,
        &&label_80D6BE48,
        &&label_80D6BE4C,
        &&label_80D6BE50,
        &&label_80D6BE54,
        &&label_80D6BE58,
        &&label_80D6BE5C,
        &&label_80D6BE60,
        &&label_80D6BE64,
        &&label_80D6BE68,
        &&label_80D6BE6C,
        &&label_80D6BE70,
        &&label_80D6BE74,
        &&label_80D6BE78,
        &&label_80D6BE7C,
        &&label_80D6BE80,
        &&label_80D6BE84,
        &&label_80D6BE88,
        &&label_80D6BE8C,
        &&label_80D6BE90,
        &&label_80D6BE94,
        &&label_80D6BE98,
        &&label_80D6BE9C,
        &&label_80D6BEA0,
        &&label_80D6BEA4,
        &&label_80D6BEA8,
        &&label_80D6BEAC,
        &&label_80D6BEB0,
        &&label_80D6BEB4,
        &&label_80D6BEB8,
        &&label_80D6BEBC,
        &&label_80D6BEC0,
        &&label_80D6BEC4,
        &&label_80D6BEC8,
        &&label_80D6BECC,
        &&label_80D6BED0,
        &&label_80D6BED4,
        &&label_80D6BED8,
        &&label_80D6BEDC,
        &&label_80D6BEE0,
        &&label_80D6BEE4,
        &&label_80D6BEE8,
        &&label_80D6BEEC,
        &&label_80D6BEF0,
        &&label_80D6BEF4,
        &&label_80D6BEF8,
        &&label_80D6BEFC,
        &&label_80D6BF00,
        &&label_80D6BF04,
        &&label_80D6BF08,
        &&label_80D6BF0C,
        &&label_80D6BF10,
        &&label_80D6BF14,
        &&label_80D6BF18,
        &&label_80D6BF1C,
        &&label_80D6BF20,
        &&label_80D6BF24,
        &&label_80D6BF28,
        &&label_80D6BF2C,
        &&label_80D6BF30,
        &&label_80D6BF34,
        &&label_80D6BF38,
        &&label_80D6BF3C,
        &&label_80D6BF40,
        &&label_80D6BF44,
        &&label_80D6BF48,
        &&label_80D6BF4C,
        &&label_80D6BF50,
        &&label_80D6BF54,
        &&label_80D6BF58,
        &&label_80D6BF5C,
        &&label_80D6BF60,
        &&label_80D6BF64,
        &&label_80D6BF68,
        &&label_80D6BF6C,
        &&label_80D6BF70,
        &&label_80D6BF74,
        &&label_80D6BF78,
        &&label_80D6BF7C,
        &&label_80D6BF80,
        &&label_80D6BF84,
        &&label_80D6BF88,
        &&label_80D6BF8C,
        &&label_80D6BF90,
        &&label_80D6BF94,
        &&label_80D6BF98,
        &&label_80D6BF9C,
        &&label_80D6BFA0,
        &&label_80D6BFA4,
        &&label_80D6BFA8,
        &&label_80D6BFAC,
        &&label_80D6BFB0,
        &&label_80D6BFB4,
        &&label_80D6BFB8,
        &&label_80D6BFBC,
        &&label_80D6BFC0,
        &&label_80D6BFC4,
        &&label_80D6BFC8,
        &&label_80D6BFCC,
        &&label_80D6BFD0,
        &&label_80D6BFD4,
        &&label_80D6BFD8,
        &&label_80D6BFDC,
        &&label_80D6BFE0,
        &&label_80D6BFE4,
        &&label_80D6BFE8,
        &&label_80D6BFEC,
        &&label_80D6BFF0,
        &&label_80D6BFF4,
        &&label_80D6BFF8,
        &&label_80D6BFFC,
        &&label_80D6C000,
        &&label_80D6C004,
        &&label_80D6C008,
        &&label_80D6C00C,
        &&label_80D6C010,
        &&label_80D6C014,
        &&label_80D6C018,
        &&label_80D6C01C,
        &&label_80D6C020,
        &&label_80D6C024,
        &&label_80D6C028,
        &&label_80D6C02C,
        &&label_80D6C030,
        &&label_80D6C034,
        &&label_80D6C038,
        &&label_80D6C03C,
        &&label_80D6C040,
        &&label_80D6C044,
        &&label_80D6C048,
        &&label_80D6C04C,
        &&label_80D6C050,
        &&label_80D6C054,
        &&label_80D6C058,
        &&label_80D6C05C,
        &&label_80D6C060,
        &&label_80D6C064,
        &&label_80D6C068,
        &&label_80D6C06C,
        &&label_80D6C070,
        &&label_80D6C074,
        &&label_80D6C078,
        &&label_80D6C07C,
        &&label_80D6C080,
        &&label_80D6C084,
        &&label_80D6C088,
        &&label_80D6C08C,
        &&label_80D6C090,
        &&label_80D6C094,
        &&label_80D6C098,
        &&label_80D6C09C,
        &&label_80D6C0A0,
        &&label_80D6C0A4,
        &&label_80D6C0A8,
        &&label_80D6C0AC,
        &&label_80D6C0B0,
        &&label_80D6C0B4,
        &&label_80D6C0B8,
        &&label_80D6C0BC,
        &&label_80D6C0C0,
        &&label_80D6C0C4,
        &&label_80D6C0C8,
        &&label_80D6C0CC,
        &&label_80D6C0D0,
        &&label_80D6C0D4,
        &&label_80D6C0D8,
        &&label_80D6C0DC,
        &&label_80D6C0E0,
        &&label_80D6C0E4,
        &&label_80D6C0E8,
        &&label_80D6C0EC,
        &&label_80D6C0F0,
        &&label_80D6C0F4,
        &&label_80D6C0F8,
        &&label_80D6C0FC,
        &&label_80D6C100,
        &&label_80D6C104,
        &&label_80D6C108,
        &&label_80D6C10C,
        &&label_80D6C110,
        &&label_80D6C114,
        &&label_80D6C118,
        &&label_80D6C11C,
        &&label_80D6C120,
        &&label_80D6C124,
        &&label_80D6C128,
        &&label_80D6C12C,
        &&label_80D6C130,
        &&label_80D6C134,
        &&label_80D6C138,
        &&label_80D6C13C,
        &&label_80D6C140,
        &&label_80D6C144,
        &&label_80D6C148,
        &&label_80D6C14C,
        &&label_80D6C150,
        &&label_80D6C154,
        &&label_80D6C158,
        &&label_80D6C15C,
        &&label_80D6C160,
        &&label_80D6C164,
        &&label_80D6C168,
        &&label_80D6C16C,
        &&label_80D6C170,
        &&label_80D6C174,
        &&label_80D6C178,
        &&label_80D6C17C,
        &&label_80D6C180,
        &&label_80D6C184,
        &&label_80D6C188,
        &&label_80D6C18C,
        &&label_80D6C190,
        &&label_80D6C194,
        &&label_80D6C198,
        &&label_80D6C19C,
        &&label_80D6C1A0,
        &&label_80D6C1A4,
        &&label_80D6C1A8,
        &&label_80D6C1AC,
        &&label_80D6C1B0,
        &&label_80D6C1B4,
        &&label_80D6C1B8,
        &&label_80D6C1BC,
        &&label_80D6C1C0,
        &&label_80D6C1C4,
        &&label_80D6C1C8,
        &&label_80D6C1CC,
        &&label_80D6C1D0,
        &&label_80D6C1D4,
        &&label_80D6C1D8,
        &&label_80D6C1DC,
        &&label_80D6C1E0,
        &&label_80D6C1E4,
        &&label_80D6C1E8,
        &&label_80D6C1EC,
        &&label_80D6C1F0,
        &&label_80D6C1F4,
        &&label_80D6C1F8,
        &&label_80D6C1FC,
        &&label_80D6C200,
        &&label_80D6C204,
        &&label_80D6C208,
        &&label_80D6C20C,
        &&label_80D6C210,
        &&label_80D6C214,
        &&label_80D6C218,
        &&label_80D6C21C,
        &&label_80D6C220,
        &&label_80D6C224,
        &&label_80D6C228,
        &&label_80D6C22C,
        &&label_80D6C230,
        &&label_80D6C234,
        &&label_80D6C238,
        &&label_80D6C23C,
        &&label_80D6C240,
        &&label_80D6C244,
        &&label_80D6C248,
        &&label_80D6C24C,
        &&label_80D6C250,
        &&label_80D6C254,
        &&label_80D6C258,
        &&label_80D6C25C,
        &&label_80D6C260,
        &&label_80D6C264,
        &&label_80D6C268,
        &&label_80D6C26C,
        &&label_80D6C270,
        &&label_80D6C274,
        &&label_80D6C278,
        &&label_80D6C27C,
        &&label_80D6C280,
        &&label_80D6C284,
        &&label_80D6C288,
        &&label_80D6C28C,
        &&label_80D6C290,
        &&label_80D6C294,
        &&label_80D6C298,
        &&label_80D6C29C,
        &&label_80D6C2A0,
        &&label_80D6C2A4,
        &&label_80D6C2A8,
        &&label_80D6C2AC,
        &&label_80D6C2B0,
        &&label_80D6C2B4,
        &&label_80D6C2B8,
        &&label_80D6C2BC,
        &&label_80D6C2C0,
        &&label_80D6C2C4,
        &&label_80D6C2C8,
        &&label_80D6C2CC,
        &&label_80D6C2D0,
        &&label_80D6C2D4,
        &&label_80D6C2D8,
        &&label_80D6C2DC,
        &&label_80D6C2E0,
        &&label_80D6C2E4,
        &&label_80D6C2E8,
        &&label_80D6C2EC,
        &&label_80D6C2F0,
        &&label_80D6C2F4,
        &&label_80D6C2F8,
        &&label_80D6C2FC,
        &&label_80D6C300,
        &&label_80D6C304,
        &&label_80D6C308,
        &&label_80D6C30C,
        &&label_80D6C310,
        &&label_80D6C314,
        &&label_80D6C318,
        &&label_80D6C31C,
        &&label_80D6C320,
        &&label_80D6C324,
        &&label_80D6C328,
        &&label_80D6C32C,
        &&label_80D6C330,
        &&label_80D6C334,
        &&label_80D6C338,
        &&label_80D6C33C,
        &&label_80D6C340,
        &&label_80D6C344,
        &&label_80D6C348,
        &&label_80D6C34C,
        &&label_80D6C350,
        &&label_80D6C354,
        &&label_80D6C358,
        &&label_80D6C35C,
        &&label_80D6C360,
        &&label_80D6C364,
        &&label_80D6C368,
        &&label_80D6C36C,
        &&label_80D6C370,
        &&label_80D6C374,
        &&label_80D6C378,
        &&label_80D6C37C,
        &&label_80D6C380,
        &&label_80D6C384,
        &&label_80D6C388,
        &&label_80D6C38C,
        &&label_80D6C390,
        &&label_80D6C394,
        &&label_80D6C398,
        &&label_80D6C39C,
        &&label_80D6C3A0,
        &&label_80D6C3A4,
        &&label_80D6C3A8,
        &&label_80D6C3AC,
        &&label_80D6C3B0,
        &&label_80D6C3B4,
        &&label_80D6C3B8,
        &&label_80D6C3BC,
        &&label_80D6C3C0,
        &&label_80D6C3C4,
        &&label_80D6C3C8,
        &&label_80D6C3CC,
        &&label_80D6C3D0,
        &&label_80D6C3D4,
        &&label_80D6C3D8,
        &&label_80D6C3DC,
        &&label_80D6C3E0,
        &&label_80D6C3E4,
        &&label_80D6C3E8,
        &&label_80D6C3EC,
        &&label_80D6C3F0,
        &&label_80D6C3F4,
        &&label_80D6C3F8,
        &&label_80D6C3FC,
        &&label_80D6C400,
        &&label_80D6C404,
        &&label_80D6C408,
        &&label_80D6C40C,
        &&label_80D6C410,
        &&label_80D6C414,
        &&label_80D6C418,
        &&label_80D6C41C,
        &&label_80D6C420,
        &&label_80D6C424,
        &&label_80D6C428,
        &&label_80D6C42C,
        &&label_80D6C430,
        &&label_80D6C434,
        &&label_80D6C438,
        &&label_80D6C43C,
        &&label_80D6C440,
        &&label_80D6C444,
        &&label_80D6C448,
        &&label_80D6C44C,
        &&label_80D6C450,
        &&label_80D6C454,
        &&label_80D6C458,
        &&label_80D6C45C,
        &&label_80D6C460,
        &&label_80D6C464,
        &&label_80D6C468,
        &&label_80D6C46C,
        &&label_80D6C470,
        &&label_80D6C474,
        &&label_80D6C478,
        &&label_80D6C47C,
        &&label_80D6C480,
        &&label_80D6C484,
        &&label_80D6C488,
        &&label_80D6C48C,
        &&label_80D6C490,
        &&label_80D6C494,
        &&label_80D6C498,
        &&label_80D6C49C,
        &&label_80D6C4A0,
        &&label_80D6C4A4,
        &&label_80D6C4A8,
        &&label_80D6C4AC,
        &&label_80D6C4B0,
        &&label_80D6C4B4,
        &&label_80D6C4B8,
        &&label_80D6C4BC,
        &&label_80D6C4C0,
        &&label_80D6C4C4,
        &&label_80D6C4C8,
        &&label_80D6C4CC,
        &&label_80D6C4D0,
        &&label_80D6C4D4,
        &&label_80D6C4D8,
        &&label_80D6C4DC,
        &&label_80D6C4E0,
        &&label_80D6C4E4,
        &&label_80D6C4E8,
        &&label_80D6C4EC,
        &&label_80D6C4F0,
        &&label_80D6C4F4,
        &&label_80D6C4F8,
        &&label_80D6C4FC,
        &&label_80D6C500,
        &&label_80D6C504,
        &&label_80D6C508,
        &&label_80D6C50C,
        &&label_80D6C510,
        &&label_80D6C514,
        &&label_80D6C518,
        &&label_80D6C51C,
        &&label_80D6C520,
        &&label_80D6C524,
        &&label_80D6C528,
        &&label_80D6C52C,
        &&label_80D6C530,
        &&label_80D6C534,
        &&label_80D6C538,
        &&label_80D6C53C,
        &&label_80D6C540,
        &&label_80D6C544,
        &&label_80D6C548,
        &&label_80D6C54C,
        &&label_80D6C550,
        &&label_80D6C554,
        &&label_80D6C558,
        &&label_80D6C55C,
        &&label_80D6C560,
        &&label_80D6C564,
        &&label_80D6C568,
        &&label_80D6C56C,
        &&label_80D6C570,
        &&label_80D6C574,
        &&label_80D6C578,
        &&label_80D6C57C,
        &&label_80D6C580,
        &&label_80D6C584,
        &&label_80D6C588,
        &&label_80D6C58C,
        &&label_80D6C590,
        &&label_80D6C594,
        &&label_80D6C598,
        &&label_80D6C59C,
        &&label_80D6C5A0,
        &&label_80D6C5A4,
        &&label_80D6C5A8,
        &&label_80D6C5AC,
        &&label_80D6C5B0,
        &&label_80D6C5B4,
        &&label_80D6C5B8,
        &&label_80D6C5BC,
        &&label_80D6C5C0,
        &&label_80D6C5C4,
        &&label_80D6C5C8,
        &&label_80D6C5CC,
        &&label_80D6C5D0,
        &&label_80D6C5D4,
        &&label_80D6C5D8,
        &&label_80D6C5DC,
        &&label_80D6C5E0,
        &&label_80D6C5E4,
        &&label_80D6C5E8,
        &&label_80D6C5EC,
        &&label_80D6C5F0,
        &&label_80D6C5F4,
        &&label_80D6C5F8,
        &&label_80D6C5FC,
        &&label_80D6C600,
        &&label_80D6C604,
        &&label_80D6C608,
        &&label_80D6C60C,
        &&label_80D6C610,
        &&label_80D6C614,
        &&label_80D6C618,
        &&label_80D6C61C,
        &&label_80D6C620,
        &&label_80D6C624,
        &&label_80D6C628,
        &&label_80D6C62C,
        &&label_80D6C630,
        &&label_80D6C634,
        &&label_80D6C638,
        &&label_80D6C63C,
        &&label_80D6C640,
        &&label_80D6C644,
        &&label_80D6C648,
        &&label_80D6C64C,
        &&label_80D6C650,
        &&label_80D6C654,
        &&label_80D6C658,
        &&label_80D6C65C,
        &&label_80D6C660,
        &&label_80D6C664,
        &&label_80D6C668,
        &&label_80D6C66C,
        &&label_80D6C670,
        &&label_80D6C674,
        &&label_80D6C678,
        &&label_80D6C67C,
        &&label_80D6C680,
        &&label_80D6C684,
        &&label_80D6C688,
        &&label_80D6C68C,
        &&label_80D6C690,
        &&label_80D6C694,
        &&label_80D6C698,
        &&label_80D6C69C,
        &&label_80D6C6A0,
        &&label_80D6C6A4,
        &&label_80D6C6A8,
        &&label_80D6C6AC,
        &&label_80D6C6B0,
        &&label_80D6C6B4,
        &&label_80D6C6B8,
        &&label_80D6C6BC,
        &&label_80D6C6C0,
        &&label_80D6C6C4,
        &&label_80D6C6C8,
        &&label_80D6C6CC,
        &&label_80D6C6D0,
        &&label_80D6C6D4,
        &&label_80D6C6D8,
        &&label_80D6C6DC,
        &&label_80D6C6E0,
        &&label_80D6C6E4,
        &&label_80D6C6E8,
        &&label_80D6C6EC,
        &&label_80D6C6F0,
        &&label_80D6C6F4,
        &&label_80D6C6F8,
        &&label_80D6C6FC,
        &&label_80D6C700,
        &&label_80D6C704,
        &&label_80D6C708,
        &&label_80D6C70C,
        &&label_80D6C710,
        &&label_80D6C714,
        &&label_80D6C718,
        &&label_80D6C71C,
        &&label_80D6C720,
        &&label_80D6C724,
        &&label_80D6C728,
        &&label_80D6C72C,
        &&label_80D6C730,
        &&label_80D6C734,
        &&label_80D6C738,
        &&label_80D6C73C,
        &&label_80D6C740,
        &&label_80D6C744,
        &&label_80D6C748,
        &&label_80D6C74C,
        &&label_80D6C750,
        &&label_80D6C754,
        &&label_80D6C758,
        &&label_80D6C75C,
        &&label_80D6C760,
        &&label_80D6C764,
        &&label_80D6C768,
        &&label_80D6C76C,
        &&label_80D6C770,
        &&label_80D6C774,
        &&label_80D6C778,
        &&label_80D6C77C,
        &&label_80D6C780,
        &&label_80D6C784,
        &&label_80D6C788,
        &&label_80D6C78C,
        &&label_80D6C790,
        &&label_80D6C794,
        &&label_80D6C798,
        &&label_80D6C79C,
        &&label_80D6C7A0,
        &&label_80D6C7A4,
        &&label_80D6C7A8,
        &&label_80D6C7AC,
        &&label_80D6C7B0,
        &&label_80D6C7B4,
        &&label_80D6C7B8,
        &&label_80D6C7BC,
        &&label_80D6C7C0,
        &&label_80D6C7C4,
        &&label_80D6C7C8,
        &&label_80D6C7CC,
        &&label_80D6C7D0,
        &&label_80D6C7D4,
        &&label_80D6C7D8,
        &&label_80D6C7DC,
        &&label_80D6C7E0,
        &&label_80D6C7E4,
        &&label_80D6C7E8,
        &&label_80D6C7EC,
        &&label_80D6C7F0,
        &&label_80D6C7F4,
        &&label_80D6C7F8,
        &&label_80D6C7FC,
        &&label_80D6C800,
        &&label_80D6C804,
        &&label_80D6C808,
        &&label_80D6C80C,
        &&label_80D6C810,
        &&label_80D6C814,
        &&label_80D6C818,
        &&label_80D6C81C,
        &&label_80D6C820,
        &&label_80D6C824,
        &&label_80D6C828,
        &&label_80D6C82C,
        &&label_80D6C830,
        &&label_80D6C834,
        &&label_80D6C838,
        &&label_80D6C83C,
        &&label_80D6C840,
        &&label_80D6C844,
        &&label_80D6C848,
        &&label_80D6C84C,
        &&label_80D6C850,
        &&label_80D6C854,
        &&label_80D6C858,
        &&label_80D6C85C,
        &&label_80D6C860,
        &&label_80D6C864,
        &&label_80D6C868,
        &&label_80D6C86C,
        &&label_80D6C870,
        &&label_80D6C874,
        &&label_80D6C878,
        &&label_80D6C87C,
        &&label_80D6C880,
        &&label_80D6C884,
        &&label_80D6C888,
        &&label_80D6C88C,
        &&label_80D6C890,
        &&label_80D6C894,
        &&label_80D6C898,
        &&label_80D6C89C,
        &&label_80D6C8A0,
        &&label_80D6C8A4,
        &&label_80D6C8A8,
        &&label_80D6C8AC,
        &&label_80D6C8B0,
        &&label_80D6C8B4,
        &&label_80D6C8B8,
        &&label_80D6C8BC,
        &&label_80D6C8C0,
        &&label_80D6C8C4,
        &&label_80D6C8C8,
        &&label_80D6C8CC,
        &&label_80D6C8D0,
        &&label_80D6C8D4,
        &&label_80D6C8D8,
        &&label_80D6C8DC,
        &&label_80D6C8E0,
        &&label_80D6C8E4,
        &&label_80D6C8E8,
        &&label_80D6C8EC,
        &&label_80D6C8F0,
        &&label_80D6C8F4,
        &&label_80D6C8F8,
        &&label_80D6C8FC,
        &&label_80D6C900,
        &&label_80D6C904,
        &&label_80D6C908,
        &&label_80D6C90C,
        &&label_80D6C910,
        &&label_80D6C914,
        &&label_80D6C918,
        &&label_80D6C91C,
        &&label_80D6C920,
        &&label_80D6C924,
        &&label_80D6C928,
        &&label_80D6C92C,
        &&label_80D6C930,
        &&label_80D6C934,
        &&label_80D6C938,
        &&label_80D6C93C,
        &&label_80D6C940,
        &&label_80D6C944,
        &&label_80D6C948,
        &&label_80D6C94C,
        &&label_80D6C950,
        &&label_80D6C954,
        &&label_80D6C958,
        &&label_80D6C95C,
        &&label_80D6C960,
        &&label_80D6C964,
        &&label_80D6C968,
        &&label_80D6C96C,
        &&label_80D6C970,
        &&label_80D6C974,
        &&label_80D6C978,
        &&label_80D6C97C,
        &&label_80D6C980,
        &&label_80D6C984,
        &&label_80D6C988,
        &&label_80D6C98C,
        &&label_80D6C990,
        &&label_80D6C994,
        &&label_80D6C998,
        &&label_80D6C99C,
        &&label_80D6C9A0,
        &&label_80D6C9A4,
        &&label_80D6C9A8,
        &&label_80D6C9AC,
        &&label_80D6C9B0,
        &&label_80D6C9B4,
        &&label_80D6C9B8,
        &&label_80D6C9BC,
        &&label_80D6C9C0,
        &&label_80D6C9C4,
        &&label_80D6C9C8,
        &&label_80D6C9CC,
        &&label_80D6C9D0,
        &&label_80D6C9D4,
        &&label_80D6C9D8,
        &&label_80D6C9DC,
        &&label_80D6C9E0,
        &&label_80D6C9E4,
        &&label_80D6C9E8,
        &&label_80D6C9EC,
        &&label_80D6C9F0,
        &&label_80D6C9F4,
        &&label_80D6C9F8,
        &&label_80D6C9FC,
        &&label_80D6CA00,
        &&label_80D6CA04,
        &&label_80D6CA08,
        &&label_80D6CA0C,
        &&label_80D6CA10,
        &&label_80D6CA14,
        &&label_80D6CA18,
        &&label_80D6CA1C,
        &&label_80D6CA20,
        &&label_80D6CA24,
        &&label_80D6CA28,
        &&label_80D6CA2C,
        &&label_80D6CA30,
        &&label_80D6CA34,
        &&label_80D6CA38,
        &&label_80D6CA3C,
        &&label_80D6CA40,
        &&label_80D6CA44,
        &&label_80D6CA48,
        &&label_80D6CA4C,
        &&label_80D6CA50,
        &&label_80D6CA54,
        &&label_80D6CA58,
        &&label_80D6CA5C,
        &&label_80D6CA60,
        &&label_80D6CA64,
        &&label_80D6CA68,
        &&label_80D6CA6C,
        &&label_80D6CA70,
        &&label_80D6CA74,
        &&label_80D6CA78,
        &&label_80D6CA7C,
        &&label_80D6CA80,
        &&label_80D6CA84,
        &&label_80D6CA88,
        &&label_80D6CA8C,
        &&label_80D6CA90,
        &&label_80D6CA94,
        &&label_80D6CA98,
        &&label_80D6CA9C,
        &&label_80D6CAA0,
        &&label_80D6CAA4,
        &&label_80D6CAA8,
        &&label_80D6CAAC,
        &&label_80D6CAB0,
        &&label_80D6CAB4,
        &&label_80D6CAB8,
        &&label_80D6CABC,
        &&label_80D6CAC0,
        &&label_80D6CAC4,
        &&label_80D6CAC8,
        &&label_80D6CACC,
        &&label_80D6CAD0,
        &&label_80D6CAD4,
        &&label_80D6CAD8,
        &&label_80D6CADC,
        &&label_80D6CAE0,
        &&label_80D6CAE4,
        &&label_80D6CAE8,
        &&label_80D6CAEC,
        &&label_80D6CAF0,
        &&label_80D6CAF4,
        &&label_80D6CAF8,
        &&label_80D6CAFC,
        &&label_80D6CB00,
        &&label_80D6CB04,
        &&label_80D6CB08,
        &&label_80D6CB0C,
        &&label_80D6CB10,
        &&label_80D6CB14,
        &&label_80D6CB18,
        &&label_80D6CB1C,
        &&label_80D6CB20,
        &&label_80D6CB24,
        &&label_80D6CB28,
        &&label_80D6CB2C,
        &&label_80D6CB30,
        &&label_80D6CB34,
        &&label_80D6CB38,
        &&label_80D6CB3C,
        &&label_80D6CB40,
        &&label_80D6CB44,
        &&label_80D6CB48,
        &&label_80D6CB4C,
        &&label_80D6CB50,
        &&label_80D6CB54,
        &&label_80D6CB58,
        &&label_80D6CB5C,
        &&label_80D6CB60,
        &&label_80D6CB64,
        &&label_80D6CB68,
        &&label_80D6CB6C,
        &&label_80D6CB70,
        &&label_80D6CB74,
        &&label_80D6CB78,
        &&label_80D6CB7C,
        &&label_80D6CB80,
        &&label_80D6CB84,
        &&label_80D6CB88,
        &&label_80D6CB8C,
        &&label_80D6CB90,
        &&label_80D6CB94,
        &&label_80D6CB98,
        &&label_80D6CB9C,
        &&label_80D6CBA0,
        &&label_80D6CBA4,
        &&label_80D6CBA8,
        &&label_80D6CBAC,
        &&label_80D6CBB0,
        &&label_80D6CBB4,
        &&label_80D6CBB8,
        &&label_80D6CBBC,
        &&label_80D6CBC0,
        &&label_80D6CBC4,
        &&label_80D6CBC8,
        &&label_80D6CBCC,
        &&label_80D6CBD0,
        &&label_80D6CBD4,
        &&label_80D6CBD8,
        &&label_80D6CBDC,
        &&label_80D6CBE0,
        &&label_80D6CBE4,
        &&label_80D6CBE8,
        &&label_80D6CBEC,
        &&label_80D6CBF0,
        &&label_80D6CBF4,
        &&label_80D6CBF8,
        &&label_80D6CBFC,
        &&label_80D6CC00,
        &&label_80D6CC04,
        &&label_80D6CC08,
        &&label_80D6CC0C,
        &&label_80D6CC10,
        &&label_80D6CC14,
        &&label_80D6CC18,
        &&label_80D6CC1C,
        &&label_80D6CC20,
        &&label_80D6CC24,
        &&label_80D6CC28,
        &&label_80D6CC2C,
        &&label_80D6CC30,
        &&label_80D6CC34,
        &&label_80D6CC38,
        &&label_80D6CC3C,
        &&label_80D6CC40,
        &&label_80D6CC44,
        &&label_80D6CC48,
        &&label_80D6CC4C,
        &&label_80D6CC50,
        &&label_80D6CC54,
        &&label_80D6CC58,
        &&label_80D6CC5C,
        &&label_80D6CC60,
        &&label_80D6CC64,
        &&label_80D6CC68,
        &&label_80D6CC6C,
        &&label_80D6CC70,
        &&label_80D6CC74,
        &&label_80D6CC78,
        &&label_80D6CC7C,
        &&label_80D6CC80,
        &&label_80D6CC84,
        &&label_80D6CC88,
        &&label_80D6CC8C,
        &&label_80D6CC90,
        &&label_80D6CC94,
        &&label_80D6CC98,
        &&label_80D6CC9C,
        &&label_80D6CCA0,
        &&label_80D6CCA4,
        &&label_80D6CCA8,
        &&label_80D6CCAC,
        &&label_80D6CCB0,
        &&label_80D6CCB4,
        &&label_80D6CCB8,
        &&label_80D6CCBC,
        &&label_80D6CCC0,
        &&label_80D6CCC4,
        &&label_80D6CCC8,
        &&label_80D6CCCC,
        &&label_80D6CCD0,
        &&label_80D6CCD4,
        &&label_80D6CCD8,
        &&label_80D6CCDC,
        &&label_80D6CCE0,
        &&label_80D6CCE4,
        &&label_80D6CCE8,
        &&label_80D6CCEC,
        &&label_80D6CCF0,
        &&label_80D6CCF4,
        &&label_80D6CCF8,
        &&label_80D6CCFC,
        &&label_80D6CD00,
        &&label_80D6CD04,
        &&label_80D6CD08,
        &&label_80D6CD0C,
        &&label_80D6CD10,
        &&label_80D6CD14,
        &&label_80D6CD18,
        &&label_80D6CD1C,
        &&label_80D6CD20,
        &&label_80D6CD24,
        &&label_80D6CD28,
        &&label_80D6CD2C,
        &&label_80D6CD30,
        &&label_80D6CD34,
        &&label_80D6CD38,
        &&label_80D6CD3C,
        &&label_80D6CD40,
        &&label_80D6CD44,
        &&label_80D6CD48,
        &&label_80D6CD4C,
        &&label_80D6CD50,
        &&label_80D6CD54,
        &&label_80D6CD58,
        &&label_80D6CD5C,
        &&label_80D6CD60,
        &&label_80D6CD64,
        &&label_80D6CD68,
        &&label_80D6CD6C,
        &&label_80D6CD70,
        &&label_80D6CD74,
        &&label_80D6CD78,
        &&label_80D6CD7C,
        &&label_80D6CD80,
        &&label_80D6CD84,
        &&label_80D6CD88,
        &&label_80D6CD8C,
        &&label_80D6CD90,
        &&label_80D6CD94,
        &&label_80D6CD98,
        &&label_80D6CD9C,
        &&label_80D6CDA0,
        &&label_80D6CDA4,
        &&label_80D6CDA8,
        &&label_80D6CDAC,
        &&label_80D6CDB0,
        &&label_80D6CDB4,
        &&label_80D6CDB8,
        &&label_80D6CDBC,
        &&label_80D6CDC0,
        &&label_80D6CDC4,
        &&label_80D6CDC8,
        &&label_80D6CDCC,
        &&label_80D6CDD0,
        &&label_80D6CDD4,
        &&label_80D6CDD8,
        &&label_80D6CDDC,
        &&label_80D6CDE0,
        &&label_80D6CDE4,
        &&label_80D6CDE8,
        &&label_80D6CDEC,
        &&label_80D6CDF0,
        &&label_80D6CDF4,
        &&label_80D6CDF8,
        &&label_80D6CDFC,
        &&label_80D6CE00,
        &&label_80D6CE04,
        &&label_80D6CE08,
        &&label_80D6CE0C,
        &&label_80D6CE10,
        &&label_80D6CE14,
        &&label_80D6CE18,
        &&label_80D6CE1C,
        &&label_80D6CE20,
        &&label_80D6CE24,
        &&label_80D6CE28,
        &&label_80D6CE2C,
        &&label_80D6CE30,
        &&label_80D6CE34,
        &&label_80D6CE38,
        &&label_80D6CE3C,
        &&label_80D6CE40,
        &&label_80D6CE44,
        &&label_80D6CE48,
        &&label_80D6CE4C,
        &&label_80D6CE50,
        &&label_80D6CE54,
        &&label_80D6CE58,
        &&label_80D6CE5C,
        &&label_80D6CE60,
        &&label_80D6CE64,
        &&label_80D6CE68,
        &&label_80D6CE6C,
        &&label_80D6CE70,
        &&label_80D6CE74,
        &&label_80D6CE78,
        &&label_80D6CE7C,
        &&label_80D6CE80,
        &&label_80D6CE84,
        &&label_80D6CE88,
        &&label_80D6CE8C,
        &&label_80D6CE90,
        &&label_80D6CE94,
        &&label_80D6CE98,
        &&label_80D6CE9C,
        &&label_80D6CEA0,
        &&label_80D6CEA4,
        &&label_80D6CEA8,
        &&label_80D6CEAC,
        &&label_80D6CEB0,
        &&label_80D6CEB4,
        &&label_80D6CEB8,
        &&label_80D6CEBC,
        &&label_80D6CEC0,
        &&label_80D6CEC4,
        &&label_80D6CEC8,
        &&label_80D6CECC,
        &&label_80D6CED0,
        &&label_80D6CED4,
        &&label_80D6CED8,
        &&label_80D6CEDC,
        &&label_80D6CEE0,
        &&label_80D6CEE4,
        &&label_80D6CEE8,
        &&label_80D6CEEC,
        &&label_80D6CEF0,
        &&label_80D6CEF4,
        &&label_80D6CEF8,
        &&label_80D6CEFC,
        &&label_80D6CF00,
        &&label_80D6CF04,
        &&label_80D6CF08,
        &&label_80D6CF0C,
        &&label_80D6CF10,
        &&label_80D6CF14,
        &&label_80D6CF18,
        &&label_80D6CF1C,
        &&label_80D6CF20,
        &&label_80D6CF24,
        &&label_80D6CF28,
        &&label_80D6CF2C,
        &&label_80D6CF30,
        &&label_80D6CF34,
        &&label_80D6CF38,
        &&label_80D6CF3C,
        &&label_80D6CF40,
        &&label_80D6CF44,
        &&label_80D6CF48,
        &&label_80D6CF4C,
        &&label_80D6CF50,
        &&label_80D6CF54,
        &&label_80D6CF58,
        &&label_80D6CF5C,
        &&label_80D6CF60,
        &&label_80D6CF64,
        &&label_80D6CF68,
        &&label_80D6CF6C,
        &&label_80D6CF70,
        &&label_80D6CF74,
        &&label_80D6CF78,
        &&label_80D6CF7C,
        &&label_80D6CF80,
        &&label_80D6CF84,
        &&label_80D6CF88,
        &&label_80D6CF8C,
        &&label_80D6CF90,
        &&label_80D6CF94,
        &&label_80D6CF98,
        &&label_80D6CF9C,
        &&label_80D6CFA0,
        &&label_80D6CFA4,
        &&label_80D6CFA8,
        &&label_80D6CFAC,
        &&label_80D6CFB0,
        &&label_80D6CFB4,
        &&label_80D6CFB8,
        &&label_80D6CFBC,
        &&label_80D6CFC0,
        &&label_80D6CFC4,
        &&label_80D6CFC8,
        &&label_80D6CFCC,
        &&label_80D6CFD0,
        &&label_80D6CFD4,
        &&label_80D6CFD8,
        &&label_80D6CFDC,
        &&label_80D6CFE0,
        &&label_80D6CFE4,
        &&label_80D6CFE8,
        &&label_80D6CFEC,
        &&label_80D6CFF0,
        &&label_80D6CFF4,
        &&label_80D6CFF8,
        &&label_80D6CFFC,
        &&label_80D6D000,
        &&label_80D6D004,
        &&label_80D6D008,
        &&label_80D6D00C,
        &&label_80D6D010,
        &&label_80D6D014,
        &&label_80D6D018,
        &&label_80D6D01C,
        &&label_80D6D020,
        &&label_80D6D024,
        &&label_80D6D028,
        &&label_80D6D02C,
        &&label_80D6D030,
        &&label_80D6D034,
        &&label_80D6D038,
        &&label_80D6D03C,
        &&label_80D6D040,
        &&label_80D6D044,
        &&label_80D6D048,
        &&label_80D6D04C,
        &&label_80D6D050,
        &&label_80D6D054,
        &&label_80D6D058,
        &&label_80D6D05C,
        &&label_80D6D060,
        &&label_80D6D064,
        &&label_80D6D068,
        &&label_80D6D06C,
        &&label_80D6D070,
        &&label_80D6D074,
        &&label_80D6D078,
        &&label_80D6D07C,
        &&label_80D6D080,
        &&label_80D6D084,
        &&label_80D6D088,
        &&label_80D6D08C,
        &&label_80D6D090,
        &&label_80D6D094,
        &&label_80D6D098,
        &&label_80D6D09C,
        &&label_80D6D0A0,
        &&label_80D6D0A4,
        &&label_80D6D0A8,
        &&label_80D6D0AC,
        &&label_80D6D0B0,
        &&label_80D6D0B4,
        &&label_80D6D0B8,
        &&label_80D6D0BC,
        &&label_80D6D0C0,
        &&label_80D6D0C4,
        &&label_80D6D0C8,
        &&label_80D6D0CC,
        &&label_80D6D0D0,
        &&label_80D6D0D4,
        &&label_80D6D0D8,
        &&label_80D6D0DC,
        &&label_80D6D0E0,
        &&label_80D6D0E4,
        &&label_80D6D0E8,
        &&label_80D6D0EC,
        &&label_80D6D0F0,
        &&label_80D6D0F4,
        &&label_80D6D0F8,
        &&label_80D6D0FC,
        &&label_80D6D100,
        &&label_80D6D104,
        &&label_80D6D108,
        &&label_80D6D10C,
        &&label_80D6D110,
        &&label_80D6D114,
        &&label_80D6D118,
        &&label_80D6D11C,
        &&label_80D6D120,
        &&label_80D6D124,
        &&label_80D6D128,
        &&label_80D6D12C,
        &&label_80D6D130,
        &&label_80D6D134,
        &&label_80D6D138,
        &&label_80D6D13C,
        &&label_80D6D140,
        &&label_80D6D144,
        &&label_80D6D148,
        &&label_80D6D14C,
        &&label_80D6D150,
        &&label_80D6D154,
        &&label_80D6D158,
        &&label_80D6D15C,
        &&label_80D6D160,
        &&label_80D6D164,
        &&label_80D6D168,
        &&label_80D6D16C,
        &&label_80D6D170,
        &&label_80D6D174,
        &&label_80D6D178,
        &&label_80D6D17C,
        &&label_80D6D180,
        &&label_80D6D184,
        &&label_80D6D188,
        &&label_80D6D18C,
        &&label_80D6D190,
        &&label_80D6D194,
        &&label_80D6D198,
        &&label_80D6D19C,
        &&label_80D6D1A0,
        &&label_80D6D1A4
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D6B120u && pc <= 0x80D6D1A4u && ((pc - 0x80D6B120u) & 3u) == 0u)
            goto *pc_table_80D6B120[(pc - 0x80D6B120u) >> 2];
    }
    return;
label_80D6B120:
    ctx->pc = 0x80D6B120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6B120: stwu     r1, -16(r1)
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
label_80D6B124:
    ctx->pc = 0x80D6B124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6B124: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B128:
    ctx->pc = 0x80D6B128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B128: stw     r0, 20(r1)
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
label_80D6B12C:
    ctx->pc = 0x80D6B12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B12C: stw     r31, 12(r1)
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
label_80D6B130:
    ctx->pc = 0x80D6B130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B130u)) return;
    // 80D6B130: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80D6B134:
    ctx->pc = 0x80D6B134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B134: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B138:
    ctx->pc = 0x80D6B138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B138u)) return;
    // 80D6B138: bl      0x80479BD0
    {
            ctx->lr = 0x80D6B13Cu;
            ctx->pc = 0x80479BD0u;
            return;
    }

label_80D6B13C:
    ctx->pc = 0x80D6B13Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B13Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B13C: bl      0x8047A1E8
    {
            ctx->lr = 0x80D6B140u;
            ctx->pc = 0x8047A1E8u;
            return;
    }

label_80D6B140:
    ctx->pc = 0x80D6B140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B140: bl      0x8050F564
    {
            ctx->lr = 0x80D6B144u;
            ctx->pc = 0x8050F564u;
            return;
    }

label_80D6B144:
    ctx->pc = 0x80D6B144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B144: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_80D6B148:
    ctx->pc = 0x80D6B148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B148u)) return;
    // 80D6B148: bl      0x8004D264
    {
            ctx->lr = 0x80D6B14Cu;
            ctx->pc = 0x8004D264u;
            return;
    }

label_80D6B14C:
    ctx->pc = 0x80D6B14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B14C: bl      0x8046C8C4
    {
            ctx->lr = 0x80D6B150u;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80D6B150:
    ctx->pc = 0x80D6B150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B150: bl      0x8050F51C
    {
            ctx->lr = 0x80D6B154u;
            ctx->pc = 0x8050F51Cu;
            return;
    }

label_80D6B154:
    ctx->pc = 0x80D6B154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6B154: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80D6B158:
    ctx->pc = 0x80D6B158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B158u)) return;
    // 80D6B158: lis     r4, -28629
    ctx->gpr[4] = ((u32)(s32)(-28629) << 16);

label_80D6B15C:
    ctx->pc = 0x80D6B15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B15C: lbz     r0, -26701(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26701);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B160:
    ctx->pc = 0x80D6B160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B160u)) return;
    // 80D6B160: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B164:
    ctx->pc = 0x80D6B164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B164: stw     r5, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B168:
    ctx->pc = 0x80D6B168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B168u)) return;
    // 80D6B168: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6B16C:
    ctx->pc = 0x80D6B16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B16Cu)) return;
    // 80D6B16C: bc    12, 2, 0x80D6B198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B198;
        }
    }

label_80D6B170:
    ctx->pc = 0x80D6B170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B170: bl      0x80444734
    {
            ctx->lr = 0x80D6B174u;
            ctx->pc = 0x80444734u;
            return;
    }

label_80D6B174:
    ctx->pc = 0x80D6B174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6B174: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6B178:
    ctx->pc = 0x80D6B178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B178u)) return;
    // 80D6B178: extsb. r0, r30
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[30];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6B17C:
    ctx->pc = 0x80D6B17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B17Cu)) return;
    // 80D6B17C: bc    12, 0, 0x80D6B1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B1F4;
        }
    }

label_80D6B180:
    ctx->pc = 0x80D6B180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B180: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B184:
    ctx->pc = 0x80D6B184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B184u)) return;
    // 80D6B184: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B188:
    ctx->pc = 0x80D6B188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B188: lwz     r3, 0(r3)
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
label_80D6B18C:
    ctx->pc = 0x80D6B18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B18Cu)) return;
    // 80D6B18C: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B190u;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B190:
    ctx->pc = 0x80D6B190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B190: extsb r3, r30
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[30];
    }

label_80D6B194:
    ctx->pc = 0x80D6B194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B194u)) return;
    // 80D6B194: b       0x80D6B3B8
    {
            goto label_80D6B3B8;
    }

label_80D6B198:
    ctx->pc = 0x80D6B198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B198: bl      0x80D6B9F8
    {
            ctx->lr = 0x80D6B19Cu;
            goto label_80D6B9F8;
    }

label_80D6B19C:
    ctx->pc = 0x80D6B19Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B19Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B19C: cmpwi   r3, 0
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

label_80D6B1A0:
    ctx->pc = 0x80D6B1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1A0u)) return;
    // 80D6B1A0: bc    12, 2, 0x80D6B1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B1F4;
        }
    }

label_80D6B1A4:
    ctx->pc = 0x80D6B1A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6B1A4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B1A8:
    ctx->pc = 0x80D6B1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1A8u)) return;
    // 80D6B1A8: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B1AC:
    ctx->pc = 0x80D6B1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B1AC: lwz     r3, 0(r3)
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
label_80D6B1B0:
    ctx->pc = 0x80D6B1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1B0u)) return;
    // 80D6B1B0: cmplwi  r3, 0x0000
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

label_80D6B1B4:
    ctx->pc = 0x80D6B1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1B4u)) return;
    // 80D6B1B4: bc    12, 2, 0x80D6B1C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B1C4;
        }
    }

label_80D6B1B8:
    ctx->pc = 0x80D6B1B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B1B8: bl      0x8060FD04
    {
            ctx->lr = 0x80D6B1BCu;
            ctx->pc = 0x8060FD04u;
            return;
    }

label_80D6B1BC:
    ctx->pc = 0x80D6B1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B1BC: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B1C0:
    ctx->pc = 0x80D6B1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1C0u)) return;
    // 80D6B1C0: bc    4, 2, 0x80D6B1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B1F4;
        }
    }

label_80D6B1C4:
    ctx->pc = 0x80D6B1C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6B1C4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B1C8:
    ctx->pc = 0x80D6B1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1C8u)) return;
    // 80D6B1C8: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B1CC:
    ctx->pc = 0x80D6B1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B1CC: lwz     r3, 0(r3)
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
label_80D6B1D0:
    ctx->pc = 0x80D6B1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1D0u)) return;
    // 80D6B1D0: cmplwi  r3, 0x0000
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

label_80D6B1D4:
    ctx->pc = 0x80D6B1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1D4u)) return;
    // 80D6B1D4: bc    12, 2, 0x80D6B1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B1E4;
        }
    }

label_80D6B1D8:
    ctx->pc = 0x80D6B1D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B1D8: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B1DCu;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B1DC:
    ctx->pc = 0x80D6B1DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B1DC: cmpwi   r3, 0
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

label_80D6B1E0:
    ctx->pc = 0x80D6B1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1E0u)) return;
    // 80D6B1E0: bc    12, 2, 0x80D6B1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B1F4;
        }
    }

label_80D6B1E4:
    ctx->pc = 0x80D6B1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B1E4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B1E8:
    ctx->pc = 0x80D6B1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1E8u)) return;
    // 80D6B1E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B1EC:
    ctx->pc = 0x80D6B1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B1EC: stw     r0, 31200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B1F0:
    ctx->pc = 0x80D6B1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1F0u)) return;
    // 80D6B1F0: li      r31, -1
    ctx->gpr[31] = (u32)(s32)(-1);

label_80D6B1F4:
    ctx->pc = 0x80D6B1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B1F4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B1F8:
    ctx->pc = 0x80D6B1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B1F8: lwzu     r0, 4184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4184);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B1FC:
    ctx->pc = 0x80D6B1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B1FCu)) return;
    // 80D6B1FC: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B200:
    ctx->pc = 0x80D6B200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B200u)) return;
    // 80D6B200: bc    4, 2, 0x80D6B298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B298;
        }
    }

label_80D6B204:
    ctx->pc = 0x80D6B204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B204: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B208:
    ctx->pc = 0x80D6B208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B208u)) return;
    // 80D6B208: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B20C:
    ctx->pc = 0x80D6B20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B20Cu)) return;
    // 80D6B20C: bc    4, 2, 0x80D6B254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B254;
        }
    }

label_80D6B210:
    ctx->pc = 0x80D6B210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B210: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B214:
    ctx->pc = 0x80D6B214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B214u)) return;
    // 80D6B214: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B218:
    ctx->pc = 0x80D6B218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B218u)) return;
    // 80D6B218: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B21C:
    ctx->pc = 0x80D6B21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B21Cu)) return;
    // 80D6B21C: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B220u;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B220:
    ctx->pc = 0x80D6B220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B220: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B224:
    ctx->pc = 0x80D6B224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B224u)) return;
    // 80D6B224: bc    4, 2, 0x80D6B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B240;
        }
    }

label_80D6B228:
    ctx->pc = 0x80D6B228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B228: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B22C:
    ctx->pc = 0x80D6B22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B22Cu)) return;
    // 80D6B22C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B230:
    ctx->pc = 0x80D6B230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B230u)) return;
    // 80D6B230: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B234:
    ctx->pc = 0x80D6B234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B234u)) return;
    // 80D6B234: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B238u;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B238:
    ctx->pc = 0x80D6B238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B238: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B23C:
    ctx->pc = 0x80D6B23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B23Cu)) return;
    // 80D6B23C: bc    12, 2, 0x80D6B328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B328;
        }
    }

label_80D6B240:
    ctx->pc = 0x80D6B240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B240: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B244:
    ctx->pc = 0x80D6B244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B244u)) return;
    // 80D6B244: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B248:
    ctx->pc = 0x80D6B248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B248: lwz     r3, 0(r3)
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
label_80D6B24C:
    ctx->pc = 0x80D6B24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B24Cu)) return;
    // 80D6B24C: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B250u;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B250:
    ctx->pc = 0x80D6B250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B250: b       0x80D6B328
    {
            goto label_80D6B328;
    }

label_80D6B254:
    ctx->pc = 0x80D6B254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B258:
    ctx->pc = 0x80D6B258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B258u)) return;
    // 80D6B258: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B25C:
    ctx->pc = 0x80D6B25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B25Cu)) return;
    // 80D6B25C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B260:
    ctx->pc = 0x80D6B260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B260u)) return;
    // 80D6B260: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B264u;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B264:
    ctx->pc = 0x80D6B264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B264: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B268:
    ctx->pc = 0x80D6B268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B268u)) return;
    // 80D6B268: bc    4, 2, 0x80D6B284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B284;
        }
    }

label_80D6B26C:
    ctx->pc = 0x80D6B26Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B26Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B26C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B270:
    ctx->pc = 0x80D6B270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B270u)) return;
    // 80D6B270: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B274:
    ctx->pc = 0x80D6B274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B274u)) return;
    // 80D6B274: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B278:
    ctx->pc = 0x80D6B278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B278u)) return;
    // 80D6B278: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B27Cu;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B27C:
    ctx->pc = 0x80D6B27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B27C: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B280:
    ctx->pc = 0x80D6B280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B280u)) return;
    // 80D6B280: bc    4, 2, 0x80D6B328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B328;
        }
    }

label_80D6B284:
    ctx->pc = 0x80D6B284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B284: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B288:
    ctx->pc = 0x80D6B288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B288u)) return;
    // 80D6B288: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B28C:
    ctx->pc = 0x80D6B28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B28C: lwz     r3, 0(r3)
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
label_80D6B290:
    ctx->pc = 0x80D6B290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B290u)) return;
    // 80D6B290: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B294u;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B294:
    ctx->pc = 0x80D6B294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B294: b       0x80D6B328
    {
            goto label_80D6B328;
    }

label_80D6B298:
    ctx->pc = 0x80D6B298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B298: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B29C:
    ctx->pc = 0x80D6B29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B29Cu)) return;
    // 80D6B29C: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B2A0:
    ctx->pc = 0x80D6B2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2A0u)) return;
    // 80D6B2A0: bc    4, 2, 0x80D6B2E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B2E8;
        }
    }

label_80D6B2A4:
    ctx->pc = 0x80D6B2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B2A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B2A8:
    ctx->pc = 0x80D6B2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2A8u)) return;
    // 80D6B2A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B2AC:
    ctx->pc = 0x80D6B2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2ACu)) return;
    // 80D6B2AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B2B0:
    ctx->pc = 0x80D6B2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2B0u)) return;
    // 80D6B2B0: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B2B4u;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B2B4:
    ctx->pc = 0x80D6B2B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B2B4: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B2B8:
    ctx->pc = 0x80D6B2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2B8u)) return;
    // 80D6B2B8: bc    12, 2, 0x80D6B2D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B2D4;
        }
    }

label_80D6B2BC:
    ctx->pc = 0x80D6B2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B2BC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B2C0:
    ctx->pc = 0x80D6B2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2C0u)) return;
    // 80D6B2C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B2C4:
    ctx->pc = 0x80D6B2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2C4u)) return;
    // 80D6B2C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B2C8:
    ctx->pc = 0x80D6B2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2C8u)) return;
    // 80D6B2C8: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B2CCu;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B2CC:
    ctx->pc = 0x80D6B2CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B2CC: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B2D0:
    ctx->pc = 0x80D6B2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2D0u)) return;
    // 80D6B2D0: bc    12, 2, 0x80D6B328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B328;
        }
    }

label_80D6B2D4:
    ctx->pc = 0x80D6B2D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B2D4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B2D8:
    ctx->pc = 0x80D6B2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2D8u)) return;
    // 80D6B2D8: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B2DC:
    ctx->pc = 0x80D6B2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B2DC: lwz     r3, 0(r3)
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
label_80D6B2E0:
    ctx->pc = 0x80D6B2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2E0u)) return;
    // 80D6B2E0: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B2E4u;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B2E4:
    ctx->pc = 0x80D6B2E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B2E4: b       0x80D6B328
    {
            goto label_80D6B328;
    }

label_80D6B2E8:
    ctx->pc = 0x80D6B2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B2E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B2EC:
    ctx->pc = 0x80D6B2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2ECu)) return;
    // 80D6B2EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B2F0:
    ctx->pc = 0x80D6B2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2F0u)) return;
    // 80D6B2F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B2F4:
    ctx->pc = 0x80D6B2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2F4u)) return;
    // 80D6B2F4: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B2F8u;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B2F8:
    ctx->pc = 0x80D6B2F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B2F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B2F8: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B2FC:
    ctx->pc = 0x80D6B2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B2FCu)) return;
    // 80D6B2FC: bc    12, 2, 0x80D6B318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B318;
        }
    }

label_80D6B300:
    ctx->pc = 0x80D6B300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B300: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B304:
    ctx->pc = 0x80D6B304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B304u)) return;
    // 80D6B304: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B308:
    ctx->pc = 0x80D6B308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B308u)) return;
    // 80D6B308: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B30C:
    ctx->pc = 0x80D6B30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B30Cu)) return;
    // 80D6B30C: bl      0x80026BC0
    {
            ctx->lr = 0x80D6B310u;
            ctx->pc = 0x80026BC0u;
            return;
    }

label_80D6B310:
    ctx->pc = 0x80D6B310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B310: cmpwi   r3, -3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B314:
    ctx->pc = 0x80D6B314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B314u)) return;
    // 80D6B314: bc    4, 2, 0x80D6B328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B328;
        }
    }

label_80D6B318:
    ctx->pc = 0x80D6B318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B318: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B31C:
    ctx->pc = 0x80D6B31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B31Cu)) return;
    // 80D6B31C: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B320:
    ctx->pc = 0x80D6B320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B320: lwz     r3, 0(r3)
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
label_80D6B324:
    ctx->pc = 0x80D6B324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B324u)) return;
    // 80D6B324: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B328u;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B328:
    ctx->pc = 0x80D6B328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B328: lis     r3, -28635
    ctx->gpr[3] = ((u32)(s32)(-28635) << 16);

label_80D6B32C:
    ctx->pc = 0x80D6B32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B32C: lbz     r0, 18752(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18752);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B330:
    ctx->pc = 0x80D6B330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B330u)) return;
    // 80D6B330: cmplwi  r0, 0x0000
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

label_80D6B334:
    ctx->pc = 0x80D6B334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B334u)) return;
    // 80D6B334: bc    12, 2, 0x80D6B358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B358;
        }
    }

label_80D6B338:
    ctx->pc = 0x80D6B338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B338: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B33C:
    ctx->pc = 0x80D6B33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B33Cu)) return;
    // 80D6B33C: addi    r3, r3, 31200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31200);

label_80D6B340:
    ctx->pc = 0x80D6B340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B340: lwz     r3, 0(r3)
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
label_80D6B344:
    ctx->pc = 0x80D6B344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B344u)) return;
    // 80D6B344: bl      0x8060FC8C
    {
            ctx->lr = 0x80D6B348u;
            ctx->pc = 0x8060FC8Cu;
            return;
    }

label_80D6B348:
    ctx->pc = 0x80D6B348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B348: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B34C:
    ctx->pc = 0x80D6B34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B34Cu)) return;
    // 80D6B34C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B350:
    ctx->pc = 0x80D6B350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B350: stw     r0, 31200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B354:
    ctx->pc = 0x80D6B354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B354u)) return;
    // 80D6B354: li      r31, -1
    ctx->gpr[31] = (u32)(s32)(-1);

label_80D6B358:
    ctx->pc = 0x80D6B358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B35C:
    ctx->pc = 0x80D6B35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B35Cu)) return;
    // 80D6B35C: bl      0x8047A0B8
    {
            ctx->lr = 0x80D6B360u;
            ctx->pc = 0x8047A0B8u;
            return;
    }

label_80D6B360:
    ctx->pc = 0x80D6B360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B360: cmpwi   r3, 0
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

label_80D6B364:
    ctx->pc = 0x80D6B364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B364u)) return;
    // 80D6B364: bc    12, 2, 0x80D6B39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B39C;
        }
    }

label_80D6B368:
    ctx->pc = 0x80D6B368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B368: bl      0x80033984
    {
            ctx->lr = 0x80D6B36Cu;
            ctx->pc = 0x80033984u;
            return;
    }

label_80D6B36C:
    ctx->pc = 0x80D6B36Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B36Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B36C: bl      0x800478C4
    {
            ctx->lr = 0x80D6B370u;
            ctx->pc = 0x800478C4u;
            return;
    }

label_80D6B370:
    ctx->pc = 0x80D6B370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B370: bl      0x8004D490
    {
            ctx->lr = 0x80D6B374u;
            ctx->pc = 0x8004D490u;
            return;
    }

label_80D6B374:
    ctx->pc = 0x80D6B374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B374: bl      0x80405CBC
    {
            ctx->lr = 0x80D6B378u;
            ctx->pc = 0x80405CBCu;
            return;
    }

label_80D6B378:
    ctx->pc = 0x80D6B378u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B378u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B378: bl      0x80405CA0
    {
            ctx->lr = 0x80D6B37Cu;
            ctx->pc = 0x80405CA0u;
            return;
    }

label_80D6B37C:
    ctx->pc = 0x80D6B37Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B37Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B37C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B380:
    ctx->pc = 0x80D6B380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B380u)) return;
    // 80D6B380: bl      0x80047A60
    {
            ctx->lr = 0x80D6B384u;
            ctx->pc = 0x80047A60u;
            return;
    }

label_80D6B384:
    ctx->pc = 0x80D6B384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B384: bl      0x800478C4
    {
            ctx->lr = 0x80D6B388u;
            ctx->pc = 0x800478C4u;
            return;
    }

label_80D6B388:
    ctx->pc = 0x80D6B388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B388: bl      0x80046BD4
    {
            ctx->lr = 0x80D6B38Cu;
            ctx->pc = 0x80046BD4u;
            return;
    }

label_80D6B38C:
    ctx->pc = 0x80D6B38Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B38Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B38C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B390:
    ctx->pc = 0x80D6B390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B390u)) return;
    // 80D6B390: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6B394:
    ctx->pc = 0x80D6B394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B394u)) return;
    // 80D6B394: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6B398:
    ctx->pc = 0x80D6B398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B398u)) return;
    // 80D6B398: bl      0x80040744
    {
            ctx->lr = 0x80D6B39Cu;
            ctx->pc = 0x80040744u;
            return;
    }

label_80D6B39C:
    ctx->pc = 0x80D6B39Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B39Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B39C: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80D6B3A0:
    ctx->pc = 0x80D6B3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B3A0: lbz     r0, -26701(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26701);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B3A4:
    ctx->pc = 0x80D6B3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3A4u)) return;
    // 80D6B3A4: extsb. r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6B3A8:
    ctx->pc = 0x80D6B3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3A8u)) return;
    // 80D6B3A8: bc    12, 2, 0x80D6B3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B3B4;
        }
    }

label_80D6B3AC:
    ctx->pc = 0x80D6B3ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B3ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B3AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80D6B3B0:
    ctx->pc = 0x80D6B3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3B0u)) return;
    // 80D6B3B0: b       0x80D6B3B8
    {
            goto label_80D6B3B8;
    }

label_80D6B3B4:
    ctx->pc = 0x80D6B3B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B3B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B3B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6B3B8:
    ctx->pc = 0x80D6B3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6B3B8: lwz     r0, 20(r1)
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
label_80D6B3BC:
    ctx->pc = 0x80D6B3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6B3BC: lwz     r31, 12(r1)
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
label_80D6B3C0:
    ctx->pc = 0x80D6B3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B3C0: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B3C4:
    ctx->pc = 0x80D6B3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6B3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B3C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B3C8:
    ctx->pc = 0x80D6B3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3C8u)) return;
    // 80D6B3C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6B3CC:
    ctx->pc = 0x80D6B3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3CCu)) return;
    // 80D6B3CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6B3D0:
    ctx->pc = 0x80D6B3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B3D0: stwu     r1, -16(r1)
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
label_80D6B3D4:
    ctx->pc = 0x80D6B3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B3D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B3D8:
    ctx->pc = 0x80D6B3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B3D8: stw     r0, 20(r1)
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
label_80D6B3DC:
    ctx->pc = 0x80D6B3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3DCu)) return;
    // 80D6B3DC: bl      0x8047B724
    {
            ctx->lr = 0x80D6B3E0u;
            ctx->pc = 0x8047B724u;
            return;
    }

label_80D6B3E0:
    ctx->pc = 0x80D6B3E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B3E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B3E0: bl      0x80444F34
    {
            ctx->lr = 0x80D6B3E4u;
            ctx->pc = 0x80444F34u;
            return;
    }

label_80D6B3E4:
    ctx->pc = 0x80D6B3E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B3E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6B3E4: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80D6B3E8:
    ctx->pc = 0x80D6B3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3E8u)) return;
    // 80D6B3E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B3EC:
    ctx->pc = 0x80D6B3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3ECu)) return;
    // 80D6B3EC: addi    r4, r3, -26703
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26703);

label_80D6B3F0:
    ctx->pc = 0x80D6B3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3F0u)) return;
    // 80D6B3F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B3F4:
    ctx->pc = 0x80D6B3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6B3F4: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B3F8:
    ctx->pc = 0x80D6B3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B3F8: lwz     r0, 20(r1)
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
label_80D6B3FC:
    ctx->pc = 0x80D6B3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6B3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B3FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B400:
    ctx->pc = 0x80D6B400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B400u)) return;
    // 80D6B400: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6B404:
    ctx->pc = 0x80D6B404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B404u)) return;
    // 80D6B404: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6B408:
    ctx->pc = 0x80D6B408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6B408: stwu     r1, -32(r1)
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
label_80D6B40C:
    ctx->pc = 0x80D6B40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6B40C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B410:
    ctx->pc = 0x80D6B410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B410u)) return;
    // 80D6B410: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B414:
    ctx->pc = 0x80D6B414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B414u)) return;
    // 80D6B414: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B418:
    ctx->pc = 0x80D6B418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B418: stw     r0, 36(r1)
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
label_80D6B41C:
    ctx->pc = 0x80D6B41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B41C: stw     r31, 28(r1)
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
label_80D6B420:
    ctx->pc = 0x80D6B420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B420u)) return;
    // 80D6B420: addi    r31, r4, 20280
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(20280);

label_80D6B424:
    ctx->pc = 0x80D6B424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B424u)) return;
    // 80D6B424: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D6B428:
    ctx->pc = 0x80D6B428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B428u)) return;
    // 80D6B428: bl      0x8047AA90
    {
            ctx->lr = 0x80D6B42Cu;
            ctx->pc = 0x8047AA90u;
            return;
    }

label_80D6B42C:
    ctx->pc = 0x80D6B42Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B42Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B42C: bl      0x8050F084
    {
            ctx->lr = 0x80D6B430u;
            ctx->pc = 0x8050F084u;
            return;
    }

label_80D6B430:
    ctx->pc = 0x80D6B430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B430: bl      0x8050FF60
    {
            ctx->lr = 0x80D6B434u;
            ctx->pc = 0x8050FF60u;
            return;
    }

label_80D6B434:
    ctx->pc = 0x80D6B434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B434: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6B438:
    ctx->pc = 0x80D6B438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B438u)) return;
    // 80D6B438: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6B43C:
    ctx->pc = 0x80D6B43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B43Cu)) return;
    // 80D6B43C: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6B440:
    ctx->pc = 0x80D6B440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B440u)) return;
    // 80D6B440: bl      0x8060F71C
    {
            ctx->lr = 0x80D6B444u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6B444:
    ctx->pc = 0x80D6B444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6B444: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B448:
    ctx->pc = 0x80D6B448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B448u)) return;
    // 80D6B448: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6B44C:
    ctx->pc = 0x80D6B44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B44C: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B450:
    ctx->pc = 0x80D6B450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B450: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B454:
    ctx->pc = 0x80D6B454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B454: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B458:
    ctx->pc = 0x80D6B458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B458: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B45C:
    ctx->pc = 0x80D6B45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B45Cu)) return;
    // 80D6B45C: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6B460u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6B460:
    ctx->pc = 0x80D6B460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B460: bl      0x805111F4
    {
            ctx->lr = 0x80D6B464u;
            ctx->pc = 0x805111F4u;
            return;
    }

label_80D6B464:
    ctx->pc = 0x80D6B464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B464: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6B468u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6B468:
    ctx->pc = 0x80D6B468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B468: bl      0x804E9CB0
    {
            ctx->lr = 0x80D6B46Cu;
            ctx->pc = 0x804E9CB0u;
            return;
    }

label_80D6B46C:
    ctx->pc = 0x80D6B46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B46C: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6B470:
    ctx->pc = 0x80D6B470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B470u)) return;
    // 80D6B470: addi    r3, r31, 9792
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(9792);

label_80D6B474:
    ctx->pc = 0x80D6B474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B474u)) return;
    // 80D6B474: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6B478:
    ctx->pc = 0x80D6B478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B478u)) return;
    // 80D6B478: bl      0x8051028C
    {
            ctx->lr = 0x80D6B47Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6B47C:
    ctx->pc = 0x80D6B47Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B47Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B47C: bl      0x8047B798
    {
            ctx->lr = 0x80D6B480u;
            ctx->pc = 0x8047B798u;
            return;
    }

label_80D6B480:
    ctx->pc = 0x80D6B480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80D6B480: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B484:
    ctx->pc = 0x80D6B484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B484u)) return;
    // 80D6B484: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B488:
    ctx->pc = 0x80D6B488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B488u)) return;
    // 80D6B488: addi    r3, r3, 4184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4184);

label_80D6B48C:
    ctx->pc = 0x80D6B48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B48Cu)) return;
    // 80D6B48C: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80D6B490:
    ctx->pc = 0x80D6B490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6B490: lbz     r8, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B494:
    ctx->pc = 0x80D6B494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B494u)) return;
    // 80D6B494: addi    r6, r5, -26701
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-26701);

label_80D6B498:
    ctx->pc = 0x80D6B498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B498u)) return;
    // 80D6B498: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D6B49C:
    ctx->pc = 0x80D6B49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B49Cu)) return;
    // 80D6B49C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D6B4A0:
    ctx->pc = 0x80D6B4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4A0u)) return;
    // 80D6B4A0: rlwinm r0, r8, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0x000003FCu;
    }

label_80D6B4A4:
    ctx->pc = 0x80D6B4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6B4A4: stb     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B4A8:
    ctx->pc = 0x80D6B4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4A8u)) return;
    // 80D6B4A8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D6B4AC:
    ctx->pc = 0x80D6B4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B4AC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B4B0:
    ctx->pc = 0x80D6B4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B4B0: stb     r5, -26703(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26703);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B4B4:
    ctx->pc = 0x80D6B4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4B4u)) return;
    // 80D6B4B4: cmpwi   r0, 20
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B4B8:
    ctx->pc = 0x80D6B4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4B8u)) return;
    // 80D6B4B8: bc    4, 2, 0x80D6B538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B538;
        }
    }

label_80D6B4BC:
    ctx->pc = 0x80D6B4BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B4BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B4BC: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B4C0:
    ctx->pc = 0x80D6B4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4C0u)) return;
    // 80D6B4C0: bc    12, 2, 0x80D6B4E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B4E8;
        }
    }

label_80D6B4C4:
    ctx->pc = 0x80D6B4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B4C4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B4C8:
    ctx->pc = 0x80D6B4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4C8u)) return;
    // 80D6B4C8: addi    r4, r31, 9772
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9772);

label_80D6B4CC:
    ctx->pc = 0x80D6B4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4CCu)) return;
    // 80D6B4CC: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B4D0:
    ctx->pc = 0x80D6B4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4D0u)) return;
    // 80D6B4D0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B4D4:
    ctx->pc = 0x80D6B4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B4D4: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B4D8:
    ctx->pc = 0x80D6B4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4D8u)) return;
    // 80D6B4D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B4DC:
    ctx->pc = 0x80D6B4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B4DC: lwzx    r4, r4, r0
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
label_80D6B4E0:
    ctx->pc = 0x80D6B4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4E0u)) return;
    // 80D6B4E0: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B4E4u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B4E4:
    ctx->pc = 0x80D6B4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B4E4: b       0x80D6B508
    {
            goto label_80D6B508;
    }

label_80D6B4E8:
    ctx->pc = 0x80D6B4E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B4E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B4E8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B4EC:
    ctx->pc = 0x80D6B4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4ECu)) return;
    // 80D6B4EC: addi    r4, r31, 9752
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9752);

label_80D6B4F0:
    ctx->pc = 0x80D6B4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4F0u)) return;
    // 80D6B4F0: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B4F4:
    ctx->pc = 0x80D6B4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4F4u)) return;
    // 80D6B4F4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B4F8:
    ctx->pc = 0x80D6B4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B4F8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B4FC:
    ctx->pc = 0x80D6B4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B4FCu)) return;
    // 80D6B4FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B500:
    ctx->pc = 0x80D6B500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B500: lwzx    r4, r4, r0
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
label_80D6B504:
    ctx->pc = 0x80D6B504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B504u)) return;
    // 80D6B504: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B508u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B508:
    ctx->pc = 0x80D6B508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D6B508: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B50C:
    ctx->pc = 0x80D6B50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B50Cu)) return;
    // 80D6B50C: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B510:
    ctx->pc = 0x80D6B510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B510u)) return;
    // 80D6B510: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B514:
    ctx->pc = 0x80D6B514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B514u)) return;
    // 80D6B514: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B518:
    ctx->pc = 0x80D6B518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B518u)) return;
    // 80D6B518: addi    r0, r4, 28172
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B51C:
    ctx->pc = 0x80D6B51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B51Cu)) return;
    // 80D6B51C: addi    r4, r5, -26701
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-26701);

label_80D6B520:
    ctx->pc = 0x80D6B520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B520u)) return;
    // 80D6B520: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D6B524:
    ctx->pc = 0x80D6B524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B524: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B528:
    ctx->pc = 0x80D6B528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B528u)) return;
    // 80D6B528: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80D6B52C:
    ctx->pc = 0x80D6B52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B52C: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B530:
    ctx->pc = 0x80D6B530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B530u)) return;
    // 80D6B530: bl      0x80444788
    {
            ctx->lr = 0x80D6B534u;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B534:
    ctx->pc = 0x80D6B534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B534: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B538:
    ctx->pc = 0x80D6B538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B538: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B53C:
    ctx->pc = 0x80D6B53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B53Cu)) return;
    // 80D6B53C: bc    4, 2, 0x80D6B5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B5B8;
        }
    }

label_80D6B540:
    ctx->pc = 0x80D6B540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B540: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B544:
    ctx->pc = 0x80D6B544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B544u)) return;
    // 80D6B544: bc    12, 2, 0x80D6B56C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B56C;
        }
    }

label_80D6B548:
    ctx->pc = 0x80D6B548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B548: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B54C:
    ctx->pc = 0x80D6B54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B54Cu)) return;
    // 80D6B54C: addi    r4, r31, 9452
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9452);

label_80D6B550:
    ctx->pc = 0x80D6B550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B550u)) return;
    // 80D6B550: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B554:
    ctx->pc = 0x80D6B554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B554u)) return;
    // 80D6B554: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B558:
    ctx->pc = 0x80D6B558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B558: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B55C:
    ctx->pc = 0x80D6B55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B55Cu)) return;
    // 80D6B55C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B560:
    ctx->pc = 0x80D6B560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B560: lwzx    r4, r4, r0
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
label_80D6B564:
    ctx->pc = 0x80D6B564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B564u)) return;
    // 80D6B564: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B568u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B568:
    ctx->pc = 0x80D6B568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B568: b       0x80D6B58C
    {
            goto label_80D6B58C;
    }

label_80D6B56C:
    ctx->pc = 0x80D6B56Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B56Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B56C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B570:
    ctx->pc = 0x80D6B570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B570u)) return;
    // 80D6B570: addi    r4, r31, 9432
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9432);

label_80D6B574:
    ctx->pc = 0x80D6B574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B574u)) return;
    // 80D6B574: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B578:
    ctx->pc = 0x80D6B578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B578u)) return;
    // 80D6B578: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B57C:
    ctx->pc = 0x80D6B57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B57C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B580:
    ctx->pc = 0x80D6B580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B580u)) return;
    // 80D6B580: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B584:
    ctx->pc = 0x80D6B584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B584: lwzx    r4, r4, r0
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
label_80D6B588:
    ctx->pc = 0x80D6B588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B588u)) return;
    // 80D6B588: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B58Cu;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B58C:
    ctx->pc = 0x80D6B58Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B58Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6B58C: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B590:
    ctx->pc = 0x80D6B590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B590u)) return;
    // 80D6B590: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B594:
    ctx->pc = 0x80D6B594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B594u)) return;
    // 80D6B594: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B598:
    ctx->pc = 0x80D6B598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B598u)) return;
    // 80D6B598: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6B59C:
    ctx->pc = 0x80D6B59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B59Cu)) return;
    // 80D6B59C: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B5A0:
    ctx->pc = 0x80D6B5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B5A0: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B5A4:
    ctx->pc = 0x80D6B5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5A4u)) return;
    // 80D6B5A4: addi    r4, r4, 28172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B5A8:
    ctx->pc = 0x80D6B5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B5A8: stb     r0, -26701(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B5AC:
    ctx->pc = 0x80D6B5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5ACu)) return;
    // 80D6B5AC: addi    r3, r4, 120
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(120);

label_80D6B5B0:
    ctx->pc = 0x80D6B5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5B0u)) return;
    // 80D6B5B0: bl      0x80444788
    {
            ctx->lr = 0x80D6B5B4u;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B5B4:
    ctx->pc = 0x80D6B5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B5B4: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B5B8:
    ctx->pc = 0x80D6B5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B5B8: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B5BC:
    ctx->pc = 0x80D6B5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5BCu)) return;
    // 80D6B5BC: bc    4, 2, 0x80D6B638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B638;
        }
    }

label_80D6B5C0:
    ctx->pc = 0x80D6B5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B5C0: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B5C4:
    ctx->pc = 0x80D6B5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5C4u)) return;
    // 80D6B5C4: bc    12, 2, 0x80D6B5EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B5EC;
        }
    }

label_80D6B5C8:
    ctx->pc = 0x80D6B5C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B5C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B5C8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B5CC:
    ctx->pc = 0x80D6B5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5CCu)) return;
    // 80D6B5CC: addi    r4, r31, 9532
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9532);

label_80D6B5D0:
    ctx->pc = 0x80D6B5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5D0u)) return;
    // 80D6B5D0: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B5D4:
    ctx->pc = 0x80D6B5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5D4u)) return;
    // 80D6B5D4: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B5D8:
    ctx->pc = 0x80D6B5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B5D8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B5DC:
    ctx->pc = 0x80D6B5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5DCu)) return;
    // 80D6B5DC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B5E0:
    ctx->pc = 0x80D6B5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B5E0: lwzx    r4, r4, r0
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
label_80D6B5E4:
    ctx->pc = 0x80D6B5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5E4u)) return;
    // 80D6B5E4: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B5E8u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B5E8:
    ctx->pc = 0x80D6B5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B5E8: b       0x80D6B60C
    {
            goto label_80D6B60C;
    }

label_80D6B5EC:
    ctx->pc = 0x80D6B5ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B5ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B5EC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B5F0:
    ctx->pc = 0x80D6B5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5F0u)) return;
    // 80D6B5F0: addi    r4, r31, 9512
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9512);

label_80D6B5F4:
    ctx->pc = 0x80D6B5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5F4u)) return;
    // 80D6B5F4: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B5F8:
    ctx->pc = 0x80D6B5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5F8u)) return;
    // 80D6B5F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B5FC:
    ctx->pc = 0x80D6B5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B5FC: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B600:
    ctx->pc = 0x80D6B600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B600u)) return;
    // 80D6B600: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B604:
    ctx->pc = 0x80D6B604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B604: lwzx    r4, r4, r0
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
label_80D6B608:
    ctx->pc = 0x80D6B608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B608u)) return;
    // 80D6B608: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B60Cu;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B60C:
    ctx->pc = 0x80D6B60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6B60C: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B610:
    ctx->pc = 0x80D6B610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B610u)) return;
    // 80D6B610: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B614:
    ctx->pc = 0x80D6B614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B614u)) return;
    // 80D6B614: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B618:
    ctx->pc = 0x80D6B618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B618u)) return;
    // 80D6B618: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6B61C:
    ctx->pc = 0x80D6B61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B61Cu)) return;
    // 80D6B61C: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B620:
    ctx->pc = 0x80D6B620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B620: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B624:
    ctx->pc = 0x80D6B624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B624u)) return;
    // 80D6B624: addi    r4, r4, 28172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B628:
    ctx->pc = 0x80D6B628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B628: stb     r0, -26701(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B62C:
    ctx->pc = 0x80D6B62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B62Cu)) return;
    // 80D6B62C: addi    r3, r4, 60
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(60);

label_80D6B630:
    ctx->pc = 0x80D6B630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B630u)) return;
    // 80D6B630: bl      0x80444788
    {
            ctx->lr = 0x80D6B634u;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B634:
    ctx->pc = 0x80D6B634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B634: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B638:
    ctx->pc = 0x80D6B638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B638: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B63C:
    ctx->pc = 0x80D6B63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B63Cu)) return;
    // 80D6B63C: bc    4, 2, 0x80D6B678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B678;
        }
    }

label_80D6B640:
    ctx->pc = 0x80D6B640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B640: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B644:
    ctx->pc = 0x80D6B644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B644u)) return;
    // 80D6B644: addi    r4, r31, 9592
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9592);

label_80D6B648:
    ctx->pc = 0x80D6B648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B648u)) return;
    // 80D6B648: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B64C:
    ctx->pc = 0x80D6B64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B64Cu)) return;
    // 80D6B64C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B650:
    ctx->pc = 0x80D6B650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B650: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B654:
    ctx->pc = 0x80D6B654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B654u)) return;
    // 80D6B654: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B658:
    ctx->pc = 0x80D6B658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B658: lwzx    r4, r4, r0
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
label_80D6B65C:
    ctx->pc = 0x80D6B65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B65Cu)) return;
    // 80D6B65C: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B660u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B660:
    ctx->pc = 0x80D6B660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6B660: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6B664:
    ctx->pc = 0x80D6B664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B664u)) return;
    // 80D6B664: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80D6B668:
    ctx->pc = 0x80D6B668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B668u)) return;
    // 80D6B668: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B66C:
    ctx->pc = 0x80D6B66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B66C: stw     r3, 31200(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(31200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B670:
    ctx->pc = 0x80D6B670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B670: stb     r0, -26701(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B674:
    ctx->pc = 0x80D6B674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B674u)) return;
    // 80D6B674: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B678:
    ctx->pc = 0x80D6B678u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B678u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B678: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B67C:
    ctx->pc = 0x80D6B67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B67Cu)) return;
    // 80D6B67C: bc    4, 2, 0x80D6B6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B6B8;
        }
    }

label_80D6B680:
    ctx->pc = 0x80D6B680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B680: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B684:
    ctx->pc = 0x80D6B684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B684u)) return;
    // 80D6B684: addi    r4, r31, 9552
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9552);

label_80D6B688:
    ctx->pc = 0x80D6B688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B688u)) return;
    // 80D6B688: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B68C:
    ctx->pc = 0x80D6B68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B68Cu)) return;
    // 80D6B68C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B690:
    ctx->pc = 0x80D6B690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B690: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B694:
    ctx->pc = 0x80D6B694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B694u)) return;
    // 80D6B694: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B698:
    ctx->pc = 0x80D6B698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B698: lwzx    r4, r4, r0
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
label_80D6B69C:
    ctx->pc = 0x80D6B69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B69Cu)) return;
    // 80D6B69C: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B6A0u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B6A0:
    ctx->pc = 0x80D6B6A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B6A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6B6A0: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6B6A4:
    ctx->pc = 0x80D6B6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6A4u)) return;
    // 80D6B6A4: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80D6B6A8:
    ctx->pc = 0x80D6B6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6A8u)) return;
    // 80D6B6A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B6AC:
    ctx->pc = 0x80D6B6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B6AC: stw     r3, 31200(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(31200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B6B0:
    ctx->pc = 0x80D6B6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B6B0: stb     r0, -26701(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B6B4:
    ctx->pc = 0x80D6B6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6B4u)) return;
    // 80D6B6B4: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B6B8:
    ctx->pc = 0x80D6B6B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B6B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B6B8: cmpwi   r0, 12
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B6BC:
    ctx->pc = 0x80D6B6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6BCu)) return;
    // 80D6B6BC: bc    4, 2, 0x80D6B6F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B6F8;
        }
    }

label_80D6B6C0:
    ctx->pc = 0x80D6B6C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B6C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B6C0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B6C4:
    ctx->pc = 0x80D6B6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6C4u)) return;
    // 80D6B6C4: addi    r4, r31, 9572
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9572);

label_80D6B6C8:
    ctx->pc = 0x80D6B6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6C8u)) return;
    // 80D6B6C8: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B6CC:
    ctx->pc = 0x80D6B6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6CCu)) return;
    // 80D6B6CC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B6D0:
    ctx->pc = 0x80D6B6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B6D0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B6D4:
    ctx->pc = 0x80D6B6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6D4u)) return;
    // 80D6B6D4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B6D8:
    ctx->pc = 0x80D6B6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B6D8: lwzx    r4, r4, r0
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
label_80D6B6DC:
    ctx->pc = 0x80D6B6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6DCu)) return;
    // 80D6B6DC: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B6E0u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B6E0:
    ctx->pc = 0x80D6B6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6B6E0: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6B6E4:
    ctx->pc = 0x80D6B6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6E4u)) return;
    // 80D6B6E4: lis     r4, -28618
    ctx->gpr[4] = ((u32)(s32)(-28618) << 16);

label_80D6B6E8:
    ctx->pc = 0x80D6B6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6E8u)) return;
    // 80D6B6E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B6EC:
    ctx->pc = 0x80D6B6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B6EC: stw     r3, 31200(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(31200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B6F0:
    ctx->pc = 0x80D6B6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B6F0: stb     r0, -26701(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B6F4:
    ctx->pc = 0x80D6B6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6F4u)) return;
    // 80D6B6F4: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B6F8:
    ctx->pc = 0x80D6B6F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B6F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B6F8: cmpwi   r0, 13
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B6FC:
    ctx->pc = 0x80D6B6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B6FCu)) return;
    // 80D6B6FC: bc    4, 2, 0x80D6B77C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B77C;
        }
    }

label_80D6B700:
    ctx->pc = 0x80D6B700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B700: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B704:
    ctx->pc = 0x80D6B704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B704u)) return;
    // 80D6B704: bc    12, 2, 0x80D6B72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B72C;
        }
    }

label_80D6B708:
    ctx->pc = 0x80D6B708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B708: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B70C:
    ctx->pc = 0x80D6B70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B70Cu)) return;
    // 80D6B70C: addi    r4, r31, 9632
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9632);

label_80D6B710:
    ctx->pc = 0x80D6B710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B710u)) return;
    // 80D6B710: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B714:
    ctx->pc = 0x80D6B714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B714u)) return;
    // 80D6B714: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B718:
    ctx->pc = 0x80D6B718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B718: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B71C:
    ctx->pc = 0x80D6B71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B71Cu)) return;
    // 80D6B71C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B720:
    ctx->pc = 0x80D6B720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B720: lwzx    r4, r4, r0
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
label_80D6B724:
    ctx->pc = 0x80D6B724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B724u)) return;
    // 80D6B724: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B728u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B728:
    ctx->pc = 0x80D6B728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B728: b       0x80D6B74C
    {
            goto label_80D6B74C;
    }

label_80D6B72C:
    ctx->pc = 0x80D6B72Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B72Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B72C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B730:
    ctx->pc = 0x80D6B730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B730u)) return;
    // 80D6B730: addi    r4, r31, 9612
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9612);

label_80D6B734:
    ctx->pc = 0x80D6B734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B734u)) return;
    // 80D6B734: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B738:
    ctx->pc = 0x80D6B738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B738u)) return;
    // 80D6B738: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B73C:
    ctx->pc = 0x80D6B73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B73C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B740:
    ctx->pc = 0x80D6B740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B740u)) return;
    // 80D6B740: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B744:
    ctx->pc = 0x80D6B744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B744: lwzx    r4, r4, r0
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
label_80D6B748:
    ctx->pc = 0x80D6B748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B748u)) return;
    // 80D6B748: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B74Cu;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B74C:
    ctx->pc = 0x80D6B74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D6B74C: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B750:
    ctx->pc = 0x80D6B750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B750u)) return;
    // 80D6B750: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B754:
    ctx->pc = 0x80D6B754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B754u)) return;
    // 80D6B754: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B758:
    ctx->pc = 0x80D6B758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B758u)) return;
    // 80D6B758: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B75C:
    ctx->pc = 0x80D6B75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B75Cu)) return;
    // 80D6B75C: addi    r0, r4, 28172
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B760:
    ctx->pc = 0x80D6B760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B760u)) return;
    // 80D6B760: addi    r4, r5, -26701
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-26701);

label_80D6B764:
    ctx->pc = 0x80D6B764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B764u)) return;
    // 80D6B764: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D6B768:
    ctx->pc = 0x80D6B768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B768: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B76C:
    ctx->pc = 0x80D6B76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B76Cu)) return;
    // 80D6B76C: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80D6B770:
    ctx->pc = 0x80D6B770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B770: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B774:
    ctx->pc = 0x80D6B774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B774u)) return;
    // 80D6B774: bl      0x80444788
    {
            ctx->lr = 0x80D6B778u;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B778:
    ctx->pc = 0x80D6B778u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B778u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B778: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B77C:
    ctx->pc = 0x80D6B77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B77C: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B780:
    ctx->pc = 0x80D6B780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B780u)) return;
    // 80D6B780: bc    4, 2, 0x80D6B800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B800;
        }
    }

label_80D6B784:
    ctx->pc = 0x80D6B784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B784: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B788:
    ctx->pc = 0x80D6B788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B788u)) return;
    // 80D6B788: bc    12, 2, 0x80D6B7B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B7B0;
        }
    }

label_80D6B78C:
    ctx->pc = 0x80D6B78Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B78Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B78C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B790:
    ctx->pc = 0x80D6B790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B790u)) return;
    // 80D6B790: addi    r4, r31, 9492
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9492);

label_80D6B794:
    ctx->pc = 0x80D6B794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B794u)) return;
    // 80D6B794: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B798:
    ctx->pc = 0x80D6B798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B798u)) return;
    // 80D6B798: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B79C:
    ctx->pc = 0x80D6B79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B79Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B79C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B7A0:
    ctx->pc = 0x80D6B7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7A0u)) return;
    // 80D6B7A0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B7A4:
    ctx->pc = 0x80D6B7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B7A4: lwzx    r4, r4, r0
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
label_80D6B7A8:
    ctx->pc = 0x80D6B7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7A8u)) return;
    // 80D6B7A8: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B7ACu;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B7AC:
    ctx->pc = 0x80D6B7ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B7ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B7AC: b       0x80D6B7D0
    {
            goto label_80D6B7D0;
    }

label_80D6B7B0:
    ctx->pc = 0x80D6B7B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B7B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B7B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B7B4:
    ctx->pc = 0x80D6B7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7B4u)) return;
    // 80D6B7B4: addi    r4, r31, 9472
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9472);

label_80D6B7B8:
    ctx->pc = 0x80D6B7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7B8u)) return;
    // 80D6B7B8: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B7BC:
    ctx->pc = 0x80D6B7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7BCu)) return;
    // 80D6B7BC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B7C0:
    ctx->pc = 0x80D6B7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B7C0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B7C4:
    ctx->pc = 0x80D6B7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7C4u)) return;
    // 80D6B7C4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B7C8:
    ctx->pc = 0x80D6B7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B7C8: lwzx    r4, r4, r0
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
label_80D6B7CC:
    ctx->pc = 0x80D6B7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7CCu)) return;
    // 80D6B7CC: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B7D0u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B7D0:
    ctx->pc = 0x80D6B7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D6B7D0: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B7D4:
    ctx->pc = 0x80D6B7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7D4u)) return;
    // 80D6B7D4: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B7D8:
    ctx->pc = 0x80D6B7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7D8u)) return;
    // 80D6B7D8: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B7DC:
    ctx->pc = 0x80D6B7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7DCu)) return;
    // 80D6B7DC: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B7E0:
    ctx->pc = 0x80D6B7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7E0u)) return;
    // 80D6B7E0: addi    r0, r4, 28172
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B7E4:
    ctx->pc = 0x80D6B7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7E4u)) return;
    // 80D6B7E4: addi    r4, r5, -26701
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-26701);

label_80D6B7E8:
    ctx->pc = 0x80D6B7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7E8u)) return;
    // 80D6B7E8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D6B7EC:
    ctx->pc = 0x80D6B7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B7EC: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B7F0:
    ctx->pc = 0x80D6B7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7F0u)) return;
    // 80D6B7F0: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80D6B7F4:
    ctx->pc = 0x80D6B7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B7F4: stb     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B7F8:
    ctx->pc = 0x80D6B7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B7F8u)) return;
    // 80D6B7F8: bl      0x80444788
    {
            ctx->lr = 0x80D6B7FCu;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B7FC:
    ctx->pc = 0x80D6B7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B7FC: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B800:
    ctx->pc = 0x80D6B800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B800: cmpwi   r0, 8
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B804:
    ctx->pc = 0x80D6B804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B804u)) return;
    // 80D6B804: bc    4, 2, 0x80D6B880
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B880;
        }
    }

label_80D6B808:
    ctx->pc = 0x80D6B808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B808: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B80C:
    ctx->pc = 0x80D6B80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B80Cu)) return;
    // 80D6B80C: bc    12, 2, 0x80D6B834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B834;
        }
    }

label_80D6B810:
    ctx->pc = 0x80D6B810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B810: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B814:
    ctx->pc = 0x80D6B814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B814u)) return;
    // 80D6B814: addi    r4, r31, 9672
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9672);

label_80D6B818:
    ctx->pc = 0x80D6B818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B818u)) return;
    // 80D6B818: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B81C:
    ctx->pc = 0x80D6B81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B81Cu)) return;
    // 80D6B81C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B820:
    ctx->pc = 0x80D6B820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B820: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B824:
    ctx->pc = 0x80D6B824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B824u)) return;
    // 80D6B824: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B828:
    ctx->pc = 0x80D6B828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B828: lwzx    r4, r4, r0
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
label_80D6B82C:
    ctx->pc = 0x80D6B82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B82Cu)) return;
    // 80D6B82C: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B830u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B830:
    ctx->pc = 0x80D6B830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B830: b       0x80D6B854
    {
            goto label_80D6B854;
    }

label_80D6B834:
    ctx->pc = 0x80D6B834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B834: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B838:
    ctx->pc = 0x80D6B838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B838u)) return;
    // 80D6B838: addi    r4, r31, 9652
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9652);

label_80D6B83C:
    ctx->pc = 0x80D6B83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B83Cu)) return;
    // 80D6B83C: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B840:
    ctx->pc = 0x80D6B840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B840u)) return;
    // 80D6B840: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B844:
    ctx->pc = 0x80D6B844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B844: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B848:
    ctx->pc = 0x80D6B848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B848u)) return;
    // 80D6B848: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B84C:
    ctx->pc = 0x80D6B84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B84C: lwzx    r4, r4, r0
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
label_80D6B850:
    ctx->pc = 0x80D6B850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B850u)) return;
    // 80D6B850: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B854u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B854:
    ctx->pc = 0x80D6B854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6B854: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B858:
    ctx->pc = 0x80D6B858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B858u)) return;
    // 80D6B858: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B85C:
    ctx->pc = 0x80D6B85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B85Cu)) return;
    // 80D6B85C: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B860:
    ctx->pc = 0x80D6B860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B860u)) return;
    // 80D6B860: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6B864:
    ctx->pc = 0x80D6B864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B864u)) return;
    // 80D6B864: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B868:
    ctx->pc = 0x80D6B868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B868: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B86C:
    ctx->pc = 0x80D6B86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B86Cu)) return;
    // 80D6B86C: addi    r4, r4, 28172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B870:
    ctx->pc = 0x80D6B870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B870: stb     r0, -26701(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B874:
    ctx->pc = 0x80D6B874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B874u)) return;
    // 80D6B874: addi    r3, r4, 60
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(60);

label_80D6B878:
    ctx->pc = 0x80D6B878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B878u)) return;
    // 80D6B878: bl      0x80444788
    {
            ctx->lr = 0x80D6B87Cu;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B87C:
    ctx->pc = 0x80D6B87Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B87Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B87C: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B880:
    ctx->pc = 0x80D6B880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B880: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B884:
    ctx->pc = 0x80D6B884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B884u)) return;
    // 80D6B884: bc    4, 2, 0x80D6B900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6B900;
        }
    }

label_80D6B888:
    ctx->pc = 0x80D6B888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6B888: cmplwi  r8, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6B88C:
    ctx->pc = 0x80D6B88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B88Cu)) return;
    // 80D6B88C: bc    12, 2, 0x80D6B8B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6B8B4;
        }
    }

label_80D6B890:
    ctx->pc = 0x80D6B890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B890: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B894:
    ctx->pc = 0x80D6B894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B894u)) return;
    // 80D6B894: addi    r4, r31, 9712
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9712);

label_80D6B898:
    ctx->pc = 0x80D6B898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B898u)) return;
    // 80D6B898: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B89C:
    ctx->pc = 0x80D6B89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B89Cu)) return;
    // 80D6B89C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B8A0:
    ctx->pc = 0x80D6B8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B8A0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B8A4:
    ctx->pc = 0x80D6B8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8A4u)) return;
    // 80D6B8A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B8A8:
    ctx->pc = 0x80D6B8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B8A8: lwzx    r4, r4, r0
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
label_80D6B8AC:
    ctx->pc = 0x80D6B8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8ACu)) return;
    // 80D6B8AC: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B8B0u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B8B0:
    ctx->pc = 0x80D6B8B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B8B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B8B0: b       0x80D6B8D4
    {
            goto label_80D6B8D4;
    }

label_80D6B8B4:
    ctx->pc = 0x80D6B8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B8B4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B8B8:
    ctx->pc = 0x80D6B8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8B8u)) return;
    // 80D6B8B8: addi    r4, r31, 9692
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9692);

label_80D6B8BC:
    ctx->pc = 0x80D6B8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8BCu)) return;
    // 80D6B8BC: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B8C0:
    ctx->pc = 0x80D6B8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8C0u)) return;
    // 80D6B8C0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B8C4:
    ctx->pc = 0x80D6B8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B8C4: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B8C8:
    ctx->pc = 0x80D6B8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8C8u)) return;
    // 80D6B8C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B8CC:
    ctx->pc = 0x80D6B8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B8CC: lwzx    r4, r4, r0
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
label_80D6B8D0:
    ctx->pc = 0x80D6B8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8D0u)) return;
    // 80D6B8D0: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B8D4u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B8D4:
    ctx->pc = 0x80D6B8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6B8D4: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B8D8:
    ctx->pc = 0x80D6B8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8D8u)) return;
    // 80D6B8D8: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B8DC:
    ctx->pc = 0x80D6B8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8DCu)) return;
    // 80D6B8DC: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B8E0:
    ctx->pc = 0x80D6B8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8E0u)) return;
    // 80D6B8E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6B8E4:
    ctx->pc = 0x80D6B8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8E4u)) return;
    // 80D6B8E4: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B8E8:
    ctx->pc = 0x80D6B8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B8E8: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B8EC:
    ctx->pc = 0x80D6B8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8ECu)) return;
    // 80D6B8EC: addi    r4, r4, 28172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B8F0:
    ctx->pc = 0x80D6B8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B8F0: stb     r0, -26701(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B8F4:
    ctx->pc = 0x80D6B8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8F4u)) return;
    // 80D6B8F4: addi    r3, r4, 60
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(60);

label_80D6B8F8:
    ctx->pc = 0x80D6B8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B8F8u)) return;
    // 80D6B8F8: bl      0x80444788
    {
            ctx->lr = 0x80D6B8FCu;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B8FC:
    ctx->pc = 0x80D6B8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B8FC: b       0x80D6B944
    {
            goto label_80D6B944;
    }

label_80D6B900:
    ctx->pc = 0x80D6B900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B900: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B904:
    ctx->pc = 0x80D6B904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B904u)) return;
    // 80D6B904: addi    r4, r31, 9732
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9732);

label_80D6B908:
    ctx->pc = 0x80D6B908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B908u)) return;
    // 80D6B908: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D6B90C:
    ctx->pc = 0x80D6B90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B90Cu)) return;
    // 80D6B90C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6B910:
    ctx->pc = 0x80D6B910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B910: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B914:
    ctx->pc = 0x80D6B914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B914u)) return;
    // 80D6B914: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D6B918:
    ctx->pc = 0x80D6B918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B918: lwzx    r4, r4, r0
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
label_80D6B91C:
    ctx->pc = 0x80D6B91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B91Cu)) return;
    // 80D6B91C: bl      0x8060FD10
    {
            ctx->lr = 0x80D6B920u;
            ctx->pc = 0x8060FD10u;
            return;
    }

label_80D6B920:
    ctx->pc = 0x80D6B920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D6B920: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6B924:
    ctx->pc = 0x80D6B924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B924u)) return;
    // 80D6B924: lis     r5, -28618
    ctx->gpr[5] = ((u32)(s32)(-28618) << 16);

label_80D6B928:
    ctx->pc = 0x80D6B928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B928u)) return;
    // 80D6B928: addi    r6, r4, 31200
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(31200);

label_80D6B92C:
    ctx->pc = 0x80D6B92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B92Cu)) return;
    // 80D6B92C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6B930:
    ctx->pc = 0x80D6B930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B930u)) return;
    // 80D6B930: lis     r4, -28664
    ctx->gpr[4] = ((u32)(s32)(-28664) << 16);

label_80D6B934:
    ctx->pc = 0x80D6B934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B934: stw     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B938:
    ctx->pc = 0x80D6B938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B938u)) return;
    // 80D6B938: addi    r3, r4, 28172
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(28172);

label_80D6B93C:
    ctx->pc = 0x80D6B93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B93C: stb     r0, -26701(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B940:
    ctx->pc = 0x80D6B940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B940u)) return;
    // 80D6B940: bl      0x80444788
    {
            ctx->lr = 0x80D6B944u;
            ctx->pc = 0x80444788u;
            return;
    }

label_80D6B944:
    ctx->pc = 0x80D6B944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6B944: lwz     r0, 36(r1)
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
label_80D6B948:
    ctx->pc = 0x80D6B948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B948u)) return;
    // 80D6B948: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6B94C:
    ctx->pc = 0x80D6B94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B94C: lwz     r31, 28(r1)
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
label_80D6B950:
    ctx->pc = 0x80D6B950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6B950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B950: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B954:
    ctx->pc = 0x80D6B954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B954u)) return;
    // 80D6B954: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6B958:
    ctx->pc = 0x80D6B958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B958u)) return;
    // 80D6B958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6B95C:
    ctx->pc = 0x80D6B95Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6B95C: stwu     r1, -16(r1)
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
label_80D6B960:
    ctx->pc = 0x80D6B960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B960: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B964:
    ctx->pc = 0x80D6B964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B964u)) return;
    // 80D6B964: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6B968:
    ctx->pc = 0x80D6B968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B968u)) return;
    // 80D6B968: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D6B96C:
    ctx->pc = 0x80D6B96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B96C: stw     r0, 20(r1)
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
label_80D6B970:
    ctx->pc = 0x80D6B970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B970u)) return;
    // 80D6B970: bl      0x8047AA90
    {
            ctx->lr = 0x80D6B974u;
            ctx->pc = 0x8047AA90u;
            return;
    }

label_80D6B974:
    ctx->pc = 0x80D6B974u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B974u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B974: bl      0x8050F084
    {
            ctx->lr = 0x80D6B978u;
            ctx->pc = 0x8050F084u;
            return;
    }

label_80D6B978:
    ctx->pc = 0x80D6B978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B978: bl      0x8050FF60
    {
            ctx->lr = 0x80D6B97Cu;
            ctx->pc = 0x8050FF60u;
            return;
    }

label_80D6B97C:
    ctx->pc = 0x80D6B97Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B97Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B97C: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6B980:
    ctx->pc = 0x80D6B980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B980u)) return;
    // 80D6B980: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6B984:
    ctx->pc = 0x80D6B984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B984u)) return;
    // 80D6B984: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6B988:
    ctx->pc = 0x80D6B988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B988u)) return;
    // 80D6B988: bl      0x8060F71C
    {
            ctx->lr = 0x80D6B98Cu;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6B98C:
    ctx->pc = 0x80D6B98Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B98Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6B98C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B990:
    ctx->pc = 0x80D6B990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B990u)) return;
    // 80D6B990: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6B994:
    ctx->pc = 0x80D6B994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B994: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B998:
    ctx->pc = 0x80D6B998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6B998: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B99C:
    ctx->pc = 0x80D6B99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B99C: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B9A0:
    ctx->pc = 0x80D6B9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6B9A0: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B9A4:
    ctx->pc = 0x80D6B9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9A4u)) return;
    // 80D6B9A4: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6B9A8u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6B9A8:
    ctx->pc = 0x80D6B9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B9A8: bl      0x805111F4
    {
            ctx->lr = 0x80D6B9ACu;
            ctx->pc = 0x805111F4u;
            return;
    }

label_80D6B9AC:
    ctx->pc = 0x80D6B9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B9AC: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6B9B0u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6B9B0:
    ctx->pc = 0x80D6B9B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B9B0: bl      0x804E9CB0
    {
            ctx->lr = 0x80D6B9B4u;
            ctx->pc = 0x804E9CB0u;
            return;
    }

label_80D6B9B4:
    ctx->pc = 0x80D6B9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6B9B4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6B9B8:
    ctx->pc = 0x80D6B9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9B8u)) return;
    // 80D6B9B8: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6B9BC:
    ctx->pc = 0x80D6B9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9BCu)) return;
    // 80D6B9BC: addi    r3, r3, 30072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30072);

label_80D6B9C0:
    ctx->pc = 0x80D6B9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9C0u)) return;
    // 80D6B9C0: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6B9C4:
    ctx->pc = 0x80D6B9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9C4u)) return;
    // 80D6B9C4: bl      0x8051028C
    {
            ctx->lr = 0x80D6B9C8u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6B9C8:
    ctx->pc = 0x80D6B9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6B9C8: bl      0x8047B798
    {
            ctx->lr = 0x80D6B9CCu;
            ctx->pc = 0x8047B798u;
            return;
    }

label_80D6B9CC:
    ctx->pc = 0x80D6B9CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6B9CC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80D6B9D0:
    ctx->pc = 0x80D6B9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9D0u)) return;
    // 80D6B9D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6B9D4:
    ctx->pc = 0x80D6B9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6B9D4: stb     r0, -26701(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26701);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B9D8:
    ctx->pc = 0x80D6B9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6B9D8: lwz     r0, 20(r1)
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
label_80D6B9DC:
    ctx->pc = 0x80D6B9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6B9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B9DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B9E0:
    ctx->pc = 0x80D6B9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9E0u)) return;
    // 80D6B9E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6B9E4:
    ctx->pc = 0x80D6B9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9E4u)) return;
    // 80D6B9E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6B9E8:
    ctx->pc = 0x80D6B9E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B9E8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B9EC:
    ctx->pc = 0x80D6B9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B9EC: lwz     r0, 3472(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3472);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6B9F0:
    ctx->pc = 0x80D6B9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9F0u)) return;
    // 80D6B9F0: andi.   r3, r0, 0x0402
    {
        ctx->gpr[3] = ctx->gpr[0] & 0x0402u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6B9F4:
    ctx->pc = 0x80D6B9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9F4u)) return;
    // 80D6B9F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6B9F8:
    ctx->pc = 0x80D6B9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6B9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6B9F8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6B9FC:
    ctx->pc = 0x80D6B9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6B9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6B9FC: lwz     r0, 3472(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3472);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA00:
    ctx->pc = 0x80D6BA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA00u)) return;
    // 80D6BA00: rlwinm r3, r0, 0, 28, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000000Cu;
    }

label_80D6BA04:
    ctx->pc = 0x80D6BA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA04u)) return;
    // 80D6BA04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6BA08:
    ctx->pc = 0x80D6BA08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BA08: stwu     r1, -16(r1)
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
label_80D6BA0C:
    ctx->pc = 0x80D6BA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BA0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA10:
    ctx->pc = 0x80D6BA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BA10: stw     r0, 20(r1)
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
label_80D6BA14:
    ctx->pc = 0x80D6BA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA14u)) return;
    // 80D6BA14: bl      0x80479BD0
    {
            ctx->lr = 0x80D6BA18u;
            ctx->pc = 0x80479BD0u;
            return;
    }

label_80D6BA18:
    ctx->pc = 0x80D6BA18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BA18: bl      0x8047A1E8
    {
            ctx->lr = 0x80D6BA1Cu;
            ctx->pc = 0x8047A1E8u;
            return;
    }

label_80D6BA1C:
    ctx->pc = 0x80D6BA1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BA1C: bl      0x8050F564
    {
            ctx->lr = 0x80D6BA20u;
            ctx->pc = 0x8050F564u;
            return;
    }

label_80D6BA20:
    ctx->pc = 0x80D6BA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BA20: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_80D6BA24:
    ctx->pc = 0x80D6BA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA24u)) return;
    // 80D6BA24: bl      0x8004D264
    {
            ctx->lr = 0x80D6BA28u;
            ctx->pc = 0x8004D264u;
            return;
    }

label_80D6BA28:
    ctx->pc = 0x80D6BA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BA28: bl      0x8046C8C4
    {
            ctx->lr = 0x80D6BA2Cu;
            ctx->pc = 0x8046C8C4u;
            return;
    }

label_80D6BA2C:
    ctx->pc = 0x80D6BA2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BA2C: bl      0x8050F51C
    {
            ctx->lr = 0x80D6BA30u;
            ctx->pc = 0x8050F51Cu;
            return;
    }

label_80D6BA30:
    ctx->pc = 0x80D6BA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D6BA30: lis     r4, -28629
    ctx->gpr[4] = ((u32)(s32)(-28629) << 16);

label_80D6BA34:
    ctx->pc = 0x80D6BA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA34u)) return;
    // 80D6BA34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BA38:
    ctx->pc = 0x80D6BA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6BA38: stw     r0, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA3C:
    ctx->pc = 0x80D6BA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA3Cu)) return;
    // 80D6BA3C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BA40:
    ctx->pc = 0x80D6BA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA40u)) return;
    // 80D6BA40: addi    r3, r3, 31212
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31212);

label_80D6BA44:
    ctx->pc = 0x80D6BA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BA44: lwz     r0, 20(r1)
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
label_80D6BA48:
    ctx->pc = 0x80D6BA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BA48: lwz     r3, 0(r3)
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
label_80D6BA4C:
    ctx->pc = 0x80D6BA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6BA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BA4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA50:
    ctx->pc = 0x80D6BA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA50u)) return;
    // 80D6BA50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6BA54:
    ctx->pc = 0x80D6BA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA54u)) return;
    // 80D6BA54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6BA58:
    ctx->pc = 0x80D6BA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6BA58: stwu     r1, -32(r1)
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
label_80D6BA5C:
    ctx->pc = 0x80D6BA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6BA5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA60:
    ctx->pc = 0x80D6BA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA60u)) return;
    // 80D6BA60: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BA64:
    ctx->pc = 0x80D6BA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA64u)) return;
    // 80D6BA64: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BA68:
    ctx->pc = 0x80D6BA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BA68: stw     r0, 36(r1)
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
label_80D6BA6C:
    ctx->pc = 0x80D6BA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BA6C: stw     r31, 28(r1)
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
label_80D6BA70:
    ctx->pc = 0x80D6BA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA70u)) return;
    // 80D6BA70: addi    r31, r4, 30088
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(30088);

label_80D6BA74:
    ctx->pc = 0x80D6BA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BA74: stw     r30, 24(r1)
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
label_80D6BA78:
    ctx->pc = 0x80D6BA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BA78: lwz     r0, 31208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA7C:
    ctx->pc = 0x80D6BA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA7Cu)) return;
    // 80D6BA7C: cmplwi  r0, 0x0000
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

label_80D6BA80:
    ctx->pc = 0x80D6BA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA80u)) return;
    // 80D6BA80: bc    12, 2, 0x80D6BBA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6BBA0;
        }
    }

label_80D6BA84:
    ctx->pc = 0x80D6BA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BA84: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BA88:
    ctx->pc = 0x80D6BA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA88u)) return;
    // 80D6BA88: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6BA8C:
    ctx->pc = 0x80D6BA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BA8C: lwz     r30, 31212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31212);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BA90:
    ctx->pc = 0x80D6BA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA90u)) return;
    // 80D6BA90: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BA94u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BA94:
    ctx->pc = 0x80D6BA94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BA94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BA94: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6BA98:
    ctx->pc = 0x80D6BA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA98u)) return;
    // 80D6BA98: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6BA9C:
    ctx->pc = 0x80D6BA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BA9Cu)) return;
    // 80D6BA9C: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BAA0u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BAA0:
    ctx->pc = 0x80D6BAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BAA0: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6BAA4:
    ctx->pc = 0x80D6BAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAA4u)) return;
    // 80D6BAA4: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6BAA8:
    ctx->pc = 0x80D6BAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAA8u)) return;
    // 80D6BAA8: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BAACu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BAAC:
    ctx->pc = 0x80D6BAACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BAAC: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6BAB0:
    ctx->pc = 0x80D6BAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAB0u)) return;
    // 80D6BAB0: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BAB4u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BAB4:
    ctx->pc = 0x80D6BAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BAB4: cmpwi   r30, 3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6BAB8:
    ctx->pc = 0x80D6BAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAB8u)) return;
    // 80D6BAB8: bc    4, 0, 0x80D6BB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6BB20;
        }
    }

label_80D6BABC:
    ctx->pc = 0x80D6BABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BABC: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6BAC0:
    ctx->pc = 0x80D6BAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAC0u)) return;
    // 80D6BAC0: bc    4, 0, 0x80D6BAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6BAC8;
        }
    }

label_80D6BAC4:
    ctx->pc = 0x80D6BAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BAC4: b       0x80D6BB20
    {
            goto label_80D6BB20;
    }

label_80D6BAC8:
    ctx->pc = 0x80D6BAC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BAC8: bl      0x8047AB04
    {
            ctx->lr = 0x80D6BACCu;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6BACC:
    ctx->pc = 0x80D6BACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BACC: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6BAD0u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6BAD0:
    ctx->pc = 0x80D6BAD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BAD0: bl      0x800499A8
    {
            ctx->lr = 0x80D6BAD4u;
            ctx->pc = 0x800499A8u;
            return;
    }

label_80D6BAD4:
    ctx->pc = 0x80D6BAD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6BAD4: subfic  r0, r30, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80D6BAD8:
    ctx->pc = 0x80D6BAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAD8u)) return;
    // 80D6BAD8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6BADC:
    ctx->pc = 0x80D6BADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BADCu)) return;
    // 80D6BADC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80D6BAE0:
    ctx->pc = 0x80D6BAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAE0u)) return;
    // 80D6BAE0: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80D6BAE4:
    ctx->pc = 0x80D6BAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BAE4: stw     r0, -5400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BAE8:
    ctx->pc = 0x80D6BAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAE8u)) return;
    // 80D6BAE8: bl      0x8047AB04
    {
            ctx->lr = 0x80D6BAECu;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6BAEC:
    ctx->pc = 0x80D6BAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BAEC: bl      0x805F4668
    {
            ctx->lr = 0x80D6BAF0u;
            ctx->pc = 0x805F4668u;
            return;
    }

label_80D6BAF0:
    ctx->pc = 0x80D6BAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BAF0: bl      0x805F454C
    {
            ctx->lr = 0x80D6BAF4u;
            ctx->pc = 0x805F454Cu;
            return;
    }

label_80D6BAF4:
    ctx->pc = 0x80D6BAF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BAF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BAF4: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6BAF8:
    ctx->pc = 0x80D6BAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAF8u)) return;
    // 80D6BAF8: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6BAFC:
    ctx->pc = 0x80D6BAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BAFCu)) return;
    // 80D6BAFC: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6BB00:
    ctx->pc = 0x80D6BB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB00u)) return;
    // 80D6BB00: bl      0x8060F71C
    {
            ctx->lr = 0x80D6BB04u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6BB04:
    ctx->pc = 0x80D6BB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6BB04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BB08:
    ctx->pc = 0x80D6BB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB08u)) return;
    // 80D6BB08: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6BB0C:
    ctx->pc = 0x80D6BB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BB0C: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BB10:
    ctx->pc = 0x80D6BB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BB10: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BB14:
    ctx->pc = 0x80D6BB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BB14: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BB18:
    ctx->pc = 0x80D6BB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BB18: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BB1C:
    ctx->pc = 0x80D6BB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB1Cu)) return;
    // 80D6BB1C: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6BB20u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6BB20:
    ctx->pc = 0x80D6BB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BB20: addi    r3, r31, 1032
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1032);

label_80D6BB24:
    ctx->pc = 0x80D6BB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB24u)) return;
    // 80D6BB24: addi    r4, r31, 776
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6BB28:
    ctx->pc = 0x80D6BB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB28u)) return;
    // 80D6BB28: bl      0x8051028C
    {
            ctx->lr = 0x80D6BB2Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BB2C:
    ctx->pc = 0x80D6BB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BB2C: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6BB30:
    ctx->pc = 0x80D6BB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB30u)) return;
    // 80D6BB30: addi    r3, r31, 1044
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1044);

label_80D6BB34:
    ctx->pc = 0x80D6BB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB34u)) return;
    // 80D6BB34: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6BB38:
    ctx->pc = 0x80D6BB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB38u)) return;
    // 80D6BB38: bl      0x8051028C
    {
            ctx->lr = 0x80D6BB3Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BB3C:
    ctx->pc = 0x80D6BB3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BB3C: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6BB40:
    ctx->pc = 0x80D6BB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB40u)) return;
    // 80D6BB40: addi    r3, r31, 1056
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1056);

label_80D6BB44:
    ctx->pc = 0x80D6BB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB44u)) return;
    // 80D6BB44: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6BB48:
    ctx->pc = 0x80D6BB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB48u)) return;
    // 80D6BB48: bl      0x8051028C
    {
            ctx->lr = 0x80D6BB4Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BB4C:
    ctx->pc = 0x80D6BB4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BB4C: addi    r3, r31, 1064
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1064);

label_80D6BB50:
    ctx->pc = 0x80D6BB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB50u)) return;
    // 80D6BB50: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6BB54:
    ctx->pc = 0x80D6BB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB54u)) return;
    // 80D6BB54: bl      0x8051028C
    {
            ctx->lr = 0x80D6BB58u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BB58:
    ctx->pc = 0x80D6BB58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BB58: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BB5C:
    ctx->pc = 0x80D6BB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB5Cu)) return;
    // 80D6BB5C: addi    r3, r3, 31208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31208);

label_80D6BB60:
    ctx->pc = 0x80D6BB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BB60: lwz     r3, 0(r3)
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
label_80D6BB64:
    ctx->pc = 0x80D6BB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB64u)) return;
    // 80D6BB64: bl      0x8050F9F0
    {
            ctx->lr = 0x80D6BB68u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80D6BB68:
    ctx->pc = 0x80D6BB68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BB68: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BB6C:
    ctx->pc = 0x80D6BB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB6Cu)) return;
    // 80D6BB6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BB70:
    ctx->pc = 0x80D6BB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BB70: stw     r0, 31208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BB74:
    ctx->pc = 0x80D6BB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB74u)) return;
    // 80D6BB74: bl      0x80444F34
    {
            ctx->lr = 0x80D6BB78u;
            ctx->pc = 0x80444F34u;
            return;
    }

label_80D6BB78:
    ctx->pc = 0x80D6BB78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BB78: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6BB7C:
    ctx->pc = 0x80D6BB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB7Cu)) return;
    // 80D6BB7C: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BB80u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BB80:
    ctx->pc = 0x80D6BB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BB80: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6BB84:
    ctx->pc = 0x80D6BB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB84u)) return;
    // 80D6BB84: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6BB88:
    ctx->pc = 0x80D6BB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB88u)) return;
    // 80D6BB88: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BB8Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BB8C:
    ctx->pc = 0x80D6BB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BB8C: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6BB90:
    ctx->pc = 0x80D6BB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB90u)) return;
    // 80D6BB90: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6BB94:
    ctx->pc = 0x80D6BB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB94u)) return;
    // 80D6BB94: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BB98u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BB98:
    ctx->pc = 0x80D6BB98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BB98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BB98: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6BB9C:
    ctx->pc = 0x80D6BB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BB9Cu)) return;
    // 80D6BB9C: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BBA0u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BBA0:
    ctx->pc = 0x80D6BBA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BBA0: bl      0x8050F404
    {
            ctx->lr = 0x80D6BBA4u;
            ctx->pc = 0x8050F404u;
            return;
    }

label_80D6BBA4:
    ctx->pc = 0x80D6BBA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BBA4: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6BBA8u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6BBA8:
    ctx->pc = 0x80D6BBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BBA8: lwz     r0, 36(r1)
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
label_80D6BBAC:
    ctx->pc = 0x80D6BBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBACu)) return;
    // 80D6BBAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6BBB0:
    ctx->pc = 0x80D6BBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BBB0: lwz     r31, 28(r1)
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
label_80D6BBB4:
    ctx->pc = 0x80D6BBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BBB4: lwz     r30, 24(r1)
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
label_80D6BBB8:
    ctx->pc = 0x80D6BBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6BBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BBB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BBBC:
    ctx->pc = 0x80D6BBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBBCu)) return;
    // 80D6BBBC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6BBC0:
    ctx->pc = 0x80D6BBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBC0u)) return;
    // 80D6BBC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6BBC4:
    ctx->pc = 0x80D6BBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BBC4: stwu     r1, -32(r1)
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
label_80D6BBC8:
    ctx->pc = 0x80D6BBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BBC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BBCC:
    ctx->pc = 0x80D6BBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBCCu)) return;
    // 80D6BBCC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BBD0:
    ctx->pc = 0x80D6BBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BBD0: stw     r0, 36(r1)
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
label_80D6BBD4:
    ctx->pc = 0x80D6BBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BBD4: stw     r31, 28(r1)
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
label_80D6BBD8:
    ctx->pc = 0x80D6BBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BBD8: stw     r30, 24(r1)
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
label_80D6BBDC:
    ctx->pc = 0x80D6BBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBDCu)) return;
    // 80D6BBDC: addi    r30, r3, 30088
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(30088);

label_80D6BBE0:
    ctx->pc = 0x80D6BBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBE0u)) return;
    // 80D6BBE0: bl      0x804060B0
    {
            ctx->lr = 0x80D6BBE4u;
            ctx->pc = 0x804060B0u;
            return;
    }

label_80D6BBE4:
    ctx->pc = 0x80D6BBE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BBE4: addi    r3, r30, 1076
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1076);

label_80D6BBE8:
    ctx->pc = 0x80D6BBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBE8u)) return;
    // 80D6BBE8: bl      0x8050AF58
    {
            ctx->lr = 0x80D6BBECu;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80D6BBEC:
    ctx->pc = 0x80D6BBECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BBEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6BBF0:
    ctx->pc = 0x80D6BBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBF0u)) return;
    // 80D6BBF0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D6BBF4:
    ctx->pc = 0x80D6BBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BBF4u)) return;
    // 80D6BBF4: bl      0x8047AA90
    {
            ctx->lr = 0x80D6BBF8u;
            ctx->pc = 0x8047AA90u;
            return;
    }

label_80D6BBF8:
    ctx->pc = 0x80D6BBF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BBF8: bl      0x8050F084
    {
            ctx->lr = 0x80D6BBFCu;
            ctx->pc = 0x8050F084u;
            return;
    }

label_80D6BBFC:
    ctx->pc = 0x80D6BBFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BBFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BBFC: bl      0x8050FF60
    {
            ctx->lr = 0x80D6BC00u;
            ctx->pc = 0x8050FF60u;
            return;
    }

label_80D6BC00:
    ctx->pc = 0x80D6BC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BC00: bl      0x80405C38
    {
            ctx->lr = 0x80D6BC04u;
            ctx->pc = 0x80405C38u;
            return;
    }

label_80D6BC04:
    ctx->pc = 0x80D6BC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BC04: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6BC08:
    ctx->pc = 0x80D6BC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC08u)) return;
    // 80D6BC08: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6BC0C:
    ctx->pc = 0x80D6BC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC0Cu)) return;
    // 80D6BC0C: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6BC10:
    ctx->pc = 0x80D6BC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC10u)) return;
    // 80D6BC10: bl      0x8060F71C
    {
            ctx->lr = 0x80D6BC14u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6BC14:
    ctx->pc = 0x80D6BC14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6BC14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BC18:
    ctx->pc = 0x80D6BC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC18u)) return;
    // 80D6BC18: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6BC1C:
    ctx->pc = 0x80D6BC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BC1C: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BC20:
    ctx->pc = 0x80D6BC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BC20: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BC24:
    ctx->pc = 0x80D6BC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BC24: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BC28:
    ctx->pc = 0x80D6BC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BC28: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BC2C:
    ctx->pc = 0x80D6BC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC2Cu)) return;
    // 80D6BC2C: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6BC30u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6BC30:
    ctx->pc = 0x80D6BC30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BC30: bl      0x805111F4
    {
            ctx->lr = 0x80D6BC34u;
            ctx->pc = 0x805111F4u;
            return;
    }

label_80D6BC34:
    ctx->pc = 0x80D6BC34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BC34: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6BC38u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6BC38:
    ctx->pc = 0x80D6BC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BC38: bl      0x804E9CB0
    {
            ctx->lr = 0x80D6BC3Cu;
            ctx->pc = 0x804E9CB0u;
            return;
    }

label_80D6BC3C:
    ctx->pc = 0x80D6BC3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6BC3C: lis     r4, -32553
    ctx->gpr[4] = ((u32)(s32)(-32553) << 16);

label_80D6BC40:
    ctx->pc = 0x80D6BC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC40u)) return;
    // 80D6BC40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6BC44:
    ctx->pc = 0x80D6BC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC44u)) return;
    // 80D6BC44: addi    r5, r4, -16200
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-16200);

label_80D6BC48:
    ctx->pc = 0x80D6BC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC48u)) return;
    // 80D6BC48: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D6BC4C:
    ctx->pc = 0x80D6BC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC4Cu)) return;
    // 80D6BC4C: bl      0x8050FD60
    {
            ctx->lr = 0x80D6BC50u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D6BC50:
    ctx->pc = 0x80D6BC50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BC50: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6BC54:
    ctx->pc = 0x80D6BC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC54u)) return;
    // 80D6BC54: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BC58:
    ctx->pc = 0x80D6BC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BC58: stw     r31, 31208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31208);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BC5C:
    ctx->pc = 0x80D6BC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC5Cu)) return;
    // 80D6BC5C: bc    12, 2, 0x80D6BD08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6BD08;
        }
    }

label_80D6BC60:
    ctx->pc = 0x80D6BC60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BC60: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6BC64:
    ctx->pc = 0x80D6BC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC64u)) return;
    // 80D6BC64: li      r4, 44
    ctx->gpr[4] = (u32)(s32)(44);

label_80D6BC68:
    ctx->pc = 0x80D6BC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC68u)) return;
    // 80D6BC68: bl      0x8050EEC0
    {
            ctx->lr = 0x80D6BC6Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D6BC6C:
    ctx->pc = 0x80D6BC6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BC6C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BC70:
    ctx->pc = 0x80D6BC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC70u)) return;
    // 80D6BC70: addi    r3, r30, 1032
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1032);

label_80D6BC74:
    ctx->pc = 0x80D6BC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC74u)) return;
    // 80D6BC74: addi    r4, r30, 776
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(776);

label_80D6BC78:
    ctx->pc = 0x80D6BC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC78u)) return;
    // 80D6BC78: bl      0x8051028C
    {
            ctx->lr = 0x80D6BC7Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BC7C:
    ctx->pc = 0x80D6BC7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BC7C: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6BC80:
    ctx->pc = 0x80D6BC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC80u)) return;
    // 80D6BC80: addi    r3, r30, 1044
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1044);

label_80D6BC84:
    ctx->pc = 0x80D6BC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC84u)) return;
    // 80D6BC84: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6BC88:
    ctx->pc = 0x80D6BC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC88u)) return;
    // 80D6BC88: bl      0x8051028C
    {
            ctx->lr = 0x80D6BC8Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BC8C:
    ctx->pc = 0x80D6BC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BC8C: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6BC90:
    ctx->pc = 0x80D6BC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC90u)) return;
    // 80D6BC90: addi    r3, r30, 1056
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1056);

label_80D6BC94:
    ctx->pc = 0x80D6BC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC94u)) return;
    // 80D6BC94: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6BC98:
    ctx->pc = 0x80D6BC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BC98u)) return;
    // 80D6BC98: bl      0x8051028C
    {
            ctx->lr = 0x80D6BC9Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BC9C:
    ctx->pc = 0x80D6BC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BC9C: addi    r3, r30, 1064
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1064);

label_80D6BCA0:
    ctx->pc = 0x80D6BCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCA0u)) return;
    // 80D6BCA0: addi    r4, r30, 192
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(192);

label_80D6BCA4:
    ctx->pc = 0x80D6BCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCA4u)) return;
    // 80D6BCA4: bl      0x8051028C
    {
            ctx->lr = 0x80D6BCA8u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BCA8:
    ctx->pc = 0x80D6BCA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BCA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BCA8: bl      0x80444F74
    {
            ctx->lr = 0x80D6BCACu;
            ctx->pc = 0x80444F74u;
            return;
    }

label_80D6BCAC:
    ctx->pc = 0x80D6BCACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BCACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80D6BCAC: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BCB0:
    ctx->pc = 0x80D6BCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCB0u)) return;
    // 80D6BCB0: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BCB4:
    ctx->pc = 0x80D6BCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCB4u)) return;
    // 80D6BCB4: addi    r6, r4, 20080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20080);

label_80D6BCB8:
    ctx->pc = 0x80D6BCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCB8u)) return;
    // 80D6BCB8: lis     r4, -32553
    ctx->gpr[4] = ((u32)(s32)(-32553) << 16);

label_80D6BCBC:
    ctx->pc = 0x80D6BCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6BCBC: lwz     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCC0:
    ctx->pc = 0x80D6BCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCC0u)) return;
    // 80D6BCC0: addi    r5, r3, 20084
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20084);

label_80D6BCC4:
    ctx->pc = 0x80D6BCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6BCC4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6BCC4u)) return;
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
label_80D6BCC8:
    ctx->pc = 0x80D6BCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCC8u)) return;
    // 80D6BCC8: lis     r3, -32553
    ctx->gpr[3] = ((u32)(s32)(-32553) << 16);

label_80D6BCCC:
    ctx->pc = 0x80D6BCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCCCu)) return;
    // 80D6BCCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D6BCD0:
    ctx->pc = 0x80D6BCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D6BCD0: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6BCD0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80D6BCD4:
    ctx->pc = 0x80D6BCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6BCD4: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x80D6BCD4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCD8:
    ctx->pc = 0x80D6BCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCD8u)) return;
    // 80D6BCD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D6BCDC:
    ctx->pc = 0x80D6BCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCDCu)) return;
    // 80D6BCDC: addi    r4, r4, -16200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16200);

label_80D6BCE0:
    ctx->pc = 0x80D6BCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCE0u)) return;
    // 80D6BCE0: addi    r0, r3, -16488
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16488);

label_80D6BCE4:
    ctx->pc = 0x80D6BCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6BCE4: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCE8:
    ctx->pc = 0x80D6BCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BCE8: stw     r6, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCEC:
    ctx->pc = 0x80D6BCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BCEC: stb     r6, 33(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCF0:
    ctx->pc = 0x80D6BCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BCF0: stw     r6, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCF4:
    ctx->pc = 0x80D6BCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BCF4: stb     r6, 33(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCF8:
    ctx->pc = 0x80D6BCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BCF8: stfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x80D6BCF8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BCFC:
    ctx->pc = 0x80D6BCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BCFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BCFC: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD00:
    ctx->pc = 0x80D6BD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BD00: stw     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD04:
    ctx->pc = 0x80D6BD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D6BD04: stw     r0, 20(r31)
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
label_80D6BD08:
    ctx->pc = 0x80D6BD08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D6BD08: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BD0C:
    ctx->pc = 0x80D6BD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD0Cu)) return;
    // 80D6BD0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BD10:
    ctx->pc = 0x80D6BD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD10u)) return;
    // 80D6BD10: addi    r4, r3, 31212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31212);

label_80D6BD14:
    ctx->pc = 0x80D6BD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD14u)) return;
    // 80D6BD14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6BD18:
    ctx->pc = 0x80D6BD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BD18: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD1C:
    ctx->pc = 0x80D6BD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BD1C: lwz     r31, 28(r1)
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
label_80D6BD20:
    ctx->pc = 0x80D6BD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BD20: lwz     r30, 24(r1)
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
label_80D6BD24:
    ctx->pc = 0x80D6BD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BD24: lwz     r0, 36(r1)
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
label_80D6BD28:
    ctx->pc = 0x80D6BD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6BD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BD28: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD2C:
    ctx->pc = 0x80D6BD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD2Cu)) return;
    // 80D6BD2C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6BD30:
    ctx->pc = 0x80D6BD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD30u)) return;
    // 80D6BD30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6BD34:
    ctx->pc = 0x80D6BD34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6BD34: stwu     r1, -32(r1)
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
label_80D6BD38:
    ctx->pc = 0x80D6BD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6BD38: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD3C:
    ctx->pc = 0x80D6BD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD3Cu)) return;
    // 80D6BD3C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BD40:
    ctx->pc = 0x80D6BD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD40u)) return;
    // 80D6BD40: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BD44:
    ctx->pc = 0x80D6BD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BD44: stw     r0, 36(r1)
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
label_80D6BD48:
    ctx->pc = 0x80D6BD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BD48: stw     r31, 28(r1)
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
label_80D6BD4C:
    ctx->pc = 0x80D6BD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD4Cu)) return;
    // 80D6BD4C: addi    r31, r4, 30088
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(30088);

label_80D6BD50:
    ctx->pc = 0x80D6BD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BD50: stw     r30, 24(r1)
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
label_80D6BD54:
    ctx->pc = 0x80D6BD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BD54: lwz     r0, 31208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD58:
    ctx->pc = 0x80D6BD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD58u)) return;
    // 80D6BD58: cmplwi  r0, 0x0000
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

label_80D6BD5C:
    ctx->pc = 0x80D6BD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD5Cu)) return;
    // 80D6BD5C: bc    12, 2, 0x80D6BE7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6BE7C;
        }
    }

label_80D6BD60:
    ctx->pc = 0x80D6BD60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BD60: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BD64:
    ctx->pc = 0x80D6BD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD64u)) return;
    // 80D6BD64: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6BD68:
    ctx->pc = 0x80D6BD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BD68: lwz     r30, 31212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31212);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BD6C:
    ctx->pc = 0x80D6BD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD6Cu)) return;
    // 80D6BD6C: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BD70u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BD70:
    ctx->pc = 0x80D6BD70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BD70: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6BD74:
    ctx->pc = 0x80D6BD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD74u)) return;
    // 80D6BD74: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6BD78:
    ctx->pc = 0x80D6BD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD78u)) return;
    // 80D6BD78: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BD7Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BD7C:
    ctx->pc = 0x80D6BD7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BD7C: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6BD80:
    ctx->pc = 0x80D6BD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD80u)) return;
    // 80D6BD80: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6BD84:
    ctx->pc = 0x80D6BD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD84u)) return;
    // 80D6BD84: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BD88u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BD88:
    ctx->pc = 0x80D6BD88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BD88: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6BD8C:
    ctx->pc = 0x80D6BD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD8Cu)) return;
    // 80D6BD8C: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BD90u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BD90:
    ctx->pc = 0x80D6BD90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BD90: cmpwi   r30, 3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6BD94:
    ctx->pc = 0x80D6BD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD94u)) return;
    // 80D6BD94: bc    4, 0, 0x80D6BDFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6BDFC;
        }
    }

label_80D6BD98:
    ctx->pc = 0x80D6BD98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BD98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BD98: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6BD9C:
    ctx->pc = 0x80D6BD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BD9Cu)) return;
    // 80D6BD9C: bc    4, 0, 0x80D6BDA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6BDA4;
        }
    }

label_80D6BDA0:
    ctx->pc = 0x80D6BDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BDA0: b       0x80D6BDFC
    {
            goto label_80D6BDFC;
    }

label_80D6BDA4:
    ctx->pc = 0x80D6BDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BDA4: bl      0x8047AB04
    {
            ctx->lr = 0x80D6BDA8u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6BDA8:
    ctx->pc = 0x80D6BDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BDA8: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6BDACu;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6BDAC:
    ctx->pc = 0x80D6BDACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BDAC: bl      0x800499A8
    {
            ctx->lr = 0x80D6BDB0u;
            ctx->pc = 0x800499A8u;
            return;
    }

label_80D6BDB0:
    ctx->pc = 0x80D6BDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6BDB0: subfic  r0, r30, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[30]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80D6BDB4:
    ctx->pc = 0x80D6BDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDB4u)) return;
    // 80D6BDB4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6BDB8:
    ctx->pc = 0x80D6BDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDB8u)) return;
    // 80D6BDB8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80D6BDBC:
    ctx->pc = 0x80D6BDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDBCu)) return;
    // 80D6BDBC: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80D6BDC0:
    ctx->pc = 0x80D6BDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BDC0: stw     r0, -5400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BDC4:
    ctx->pc = 0x80D6BDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDC4u)) return;
    // 80D6BDC4: bl      0x8047AB04
    {
            ctx->lr = 0x80D6BDC8u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6BDC8:
    ctx->pc = 0x80D6BDC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BDC8: bl      0x805F4668
    {
            ctx->lr = 0x80D6BDCCu;
            ctx->pc = 0x805F4668u;
            return;
    }

label_80D6BDCC:
    ctx->pc = 0x80D6BDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BDCC: bl      0x805F454C
    {
            ctx->lr = 0x80D6BDD0u;
            ctx->pc = 0x805F454Cu;
            return;
    }

label_80D6BDD0:
    ctx->pc = 0x80D6BDD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BDD0: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6BDD4:
    ctx->pc = 0x80D6BDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDD4u)) return;
    // 80D6BDD4: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6BDD8:
    ctx->pc = 0x80D6BDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDD8u)) return;
    // 80D6BDD8: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6BDDC:
    ctx->pc = 0x80D6BDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDDCu)) return;
    // 80D6BDDC: bl      0x8060F71C
    {
            ctx->lr = 0x80D6BDE0u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6BDE0:
    ctx->pc = 0x80D6BDE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6BDE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BDE4:
    ctx->pc = 0x80D6BDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDE4u)) return;
    // 80D6BDE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6BDE8:
    ctx->pc = 0x80D6BDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BDE8: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BDEC:
    ctx->pc = 0x80D6BDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BDEC: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BDF0:
    ctx->pc = 0x80D6BDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BDF0: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BDF4:
    ctx->pc = 0x80D6BDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BDF4: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BDF8:
    ctx->pc = 0x80D6BDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BDF8u)) return;
    // 80D6BDF8: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6BDFCu;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6BDFC:
    ctx->pc = 0x80D6BDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BDFC: addi    r3, r31, 1032
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1032);

label_80D6BE00:
    ctx->pc = 0x80D6BE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE00u)) return;
    // 80D6BE00: addi    r4, r31, 776
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6BE04:
    ctx->pc = 0x80D6BE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE04u)) return;
    // 80D6BE04: bl      0x8051028C
    {
            ctx->lr = 0x80D6BE08u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BE08:
    ctx->pc = 0x80D6BE08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BE08: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6BE0C:
    ctx->pc = 0x80D6BE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE0Cu)) return;
    // 80D6BE0C: addi    r3, r31, 1044
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1044);

label_80D6BE10:
    ctx->pc = 0x80D6BE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE10u)) return;
    // 80D6BE10: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6BE14:
    ctx->pc = 0x80D6BE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE14u)) return;
    // 80D6BE14: bl      0x8051028C
    {
            ctx->lr = 0x80D6BE18u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BE18:
    ctx->pc = 0x80D6BE18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BE18: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6BE1C:
    ctx->pc = 0x80D6BE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE1Cu)) return;
    // 80D6BE1C: addi    r3, r31, 1056
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1056);

label_80D6BE20:
    ctx->pc = 0x80D6BE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE20u)) return;
    // 80D6BE20: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6BE24:
    ctx->pc = 0x80D6BE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE24u)) return;
    // 80D6BE24: bl      0x8051028C
    {
            ctx->lr = 0x80D6BE28u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BE28:
    ctx->pc = 0x80D6BE28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BE28: addi    r3, r31, 1064
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1064);

label_80D6BE2C:
    ctx->pc = 0x80D6BE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE2Cu)) return;
    // 80D6BE2C: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6BE30:
    ctx->pc = 0x80D6BE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE30u)) return;
    // 80D6BE30: bl      0x8051028C
    {
            ctx->lr = 0x80D6BE34u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BE34:
    ctx->pc = 0x80D6BE34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BE34: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BE38:
    ctx->pc = 0x80D6BE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE38u)) return;
    // 80D6BE38: addi    r3, r3, 31208
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31208);

label_80D6BE3C:
    ctx->pc = 0x80D6BE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BE3C: lwz     r3, 0(r3)
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
label_80D6BE40:
    ctx->pc = 0x80D6BE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE40u)) return;
    // 80D6BE40: bl      0x8050F9F0
    {
            ctx->lr = 0x80D6BE44u;
            ctx->pc = 0x8050F9F0u;
            return;
    }

label_80D6BE44:
    ctx->pc = 0x80D6BE44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BE44: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BE48:
    ctx->pc = 0x80D6BE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE48u)) return;
    // 80D6BE48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6BE4C:
    ctx->pc = 0x80D6BE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BE4C: stw     r0, 31208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BE50:
    ctx->pc = 0x80D6BE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE50u)) return;
    // 80D6BE50: bl      0x80444F34
    {
            ctx->lr = 0x80D6BE54u;
            ctx->pc = 0x80444F34u;
            return;
    }

label_80D6BE54:
    ctx->pc = 0x80D6BE54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BE54: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6BE58:
    ctx->pc = 0x80D6BE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE58u)) return;
    // 80D6BE58: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BE5Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BE5C:
    ctx->pc = 0x80D6BE5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BE5C: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6BE60:
    ctx->pc = 0x80D6BE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE60u)) return;
    // 80D6BE60: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6BE64:
    ctx->pc = 0x80D6BE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE64u)) return;
    // 80D6BE64: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BE68u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BE68:
    ctx->pc = 0x80D6BE68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BE68: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6BE6C:
    ctx->pc = 0x80D6BE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE6Cu)) return;
    // 80D6BE6C: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6BE70:
    ctx->pc = 0x80D6BE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE70u)) return;
    // 80D6BE70: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BE74u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BE74:
    ctx->pc = 0x80D6BE74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6BE74: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6BE78:
    ctx->pc = 0x80D6BE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE78u)) return;
    // 80D6BE78: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6BE7Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6BE7C:
    ctx->pc = 0x80D6BE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BE7C: lwz     r0, 36(r1)
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
label_80D6BE80:
    ctx->pc = 0x80D6BE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BE80: lwz     r31, 28(r1)
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
label_80D6BE84:
    ctx->pc = 0x80D6BE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BE84: lwz     r30, 24(r1)
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
label_80D6BE88:
    ctx->pc = 0x80D6BE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6BE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BE88: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BE8C:
    ctx->pc = 0x80D6BE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE8Cu)) return;
    // 80D6BE8C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6BE90:
    ctx->pc = 0x80D6BE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE90u)) return;
    // 80D6BE90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6BE94:
    ctx->pc = 0x80D6BE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6BE94: stwu     r1, -16(r1)
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
label_80D6BE98:
    ctx->pc = 0x80D6BE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6BE98: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BE9C:
    ctx->pc = 0x80D6BE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BE9Cu)) return;
    // 80D6BE9C: lis     r3, -32553
    ctx->gpr[3] = ((u32)(s32)(-32553) << 16);

label_80D6BEA0:
    ctx->pc = 0x80D6BEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEA0u)) return;
    // 80D6BEA0: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BEA4:
    ctx->pc = 0x80D6BEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BEA4: stw     r0, 20(r1)
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
label_80D6BEA8:
    ctx->pc = 0x80D6BEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEA8u)) return;
    // 80D6BEA8: addi    r5, r3, -16200
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-16200);

label_80D6BEAC:
    ctx->pc = 0x80D6BEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEACu)) return;
    // 80D6BEAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6BEB0:
    ctx->pc = 0x80D6BEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BEB0: stw     r31, 12(r1)
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
label_80D6BEB4:
    ctx->pc = 0x80D6BEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BEB4: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BEB8:
    ctx->pc = 0x80D6BEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEB8u)) return;
    // 80D6BEB8: addi    r30, r4, 30088
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(30088);

label_80D6BEBC:
    ctx->pc = 0x80D6BEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEBCu)) return;
    // 80D6BEBC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D6BEC0:
    ctx->pc = 0x80D6BEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEC0u)) return;
    // 80D6BEC0: bl      0x8050FD60
    {
            ctx->lr = 0x80D6BEC4u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D6BEC4:
    ctx->pc = 0x80D6BEC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BEC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BEC4: or.   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6BEC8:
    ctx->pc = 0x80D6BEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEC8u)) return;
    // 80D6BEC8: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BECC:
    ctx->pc = 0x80D6BECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BECC: stw     r31, 31208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31208);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BED0:
    ctx->pc = 0x80D6BED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BED0u)) return;
    // 80D6BED0: bc    12, 2, 0x80D6BF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6BF7C;
        }
    }

label_80D6BED4:
    ctx->pc = 0x80D6BED4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BED4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BED4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6BED8:
    ctx->pc = 0x80D6BED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BED8u)) return;
    // 80D6BED8: li      r4, 44
    ctx->gpr[4] = (u32)(s32)(44);

label_80D6BEDC:
    ctx->pc = 0x80D6BEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEDCu)) return;
    // 80D6BEDC: bl      0x8050EEC0
    {
            ctx->lr = 0x80D6BEE0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D6BEE0:
    ctx->pc = 0x80D6BEE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BEE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BEE0: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BEE4:
    ctx->pc = 0x80D6BEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEE4u)) return;
    // 80D6BEE4: addi    r3, r30, 1032
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1032);

label_80D6BEE8:
    ctx->pc = 0x80D6BEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEE8u)) return;
    // 80D6BEE8: addi    r4, r30, 776
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(776);

label_80D6BEEC:
    ctx->pc = 0x80D6BEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEECu)) return;
    // 80D6BEEC: bl      0x8051028C
    {
            ctx->lr = 0x80D6BEF0u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BEF0:
    ctx->pc = 0x80D6BEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BEF0: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6BEF4:
    ctx->pc = 0x80D6BEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEF4u)) return;
    // 80D6BEF4: addi    r3, r30, 1044
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1044);

label_80D6BEF8:
    ctx->pc = 0x80D6BEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEF8u)) return;
    // 80D6BEF8: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6BEFC:
    ctx->pc = 0x80D6BEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BEFCu)) return;
    // 80D6BEFC: bl      0x8051028C
    {
            ctx->lr = 0x80D6BF00u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BF00:
    ctx->pc = 0x80D6BF00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BF00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6BF00: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6BF04:
    ctx->pc = 0x80D6BF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF04u)) return;
    // 80D6BF04: addi    r3, r30, 1056
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1056);

label_80D6BF08:
    ctx->pc = 0x80D6BF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF08u)) return;
    // 80D6BF08: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6BF0C:
    ctx->pc = 0x80D6BF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF0Cu)) return;
    // 80D6BF0C: bl      0x8051028C
    {
            ctx->lr = 0x80D6BF10u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BF10:
    ctx->pc = 0x80D6BF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6BF10: addi    r3, r30, 1064
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(1064);

label_80D6BF14:
    ctx->pc = 0x80D6BF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF14u)) return;
    // 80D6BF14: addi    r4, r30, 192
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(192);

label_80D6BF18:
    ctx->pc = 0x80D6BF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF18u)) return;
    // 80D6BF18: bl      0x8051028C
    {
            ctx->lr = 0x80D6BF1Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6BF1C:
    ctx->pc = 0x80D6BF1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BF1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BF1C: bl      0x80444F74
    {
            ctx->lr = 0x80D6BF20u;
            ctx->pc = 0x80444F74u;
            return;
    }

label_80D6BF20:
    ctx->pc = 0x80D6BF20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BF20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    // 80D6BF20: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6BF24:
    ctx->pc = 0x80D6BF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF24u)) return;
    // 80D6BF24: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BF28:
    ctx->pc = 0x80D6BF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF28u)) return;
    // 80D6BF28: addi    r6, r4, 20080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20080);

label_80D6BF2C:
    ctx->pc = 0x80D6BF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF2Cu)) return;
    // 80D6BF2C: lis     r4, -32553
    ctx->gpr[4] = ((u32)(s32)(-32553) << 16);

label_80D6BF30:
    ctx->pc = 0x80D6BF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6BF30: lwz     r7, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF34:
    ctx->pc = 0x80D6BF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF34u)) return;
    // 80D6BF34: addi    r5, r3, 20084
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20084);

label_80D6BF38:
    ctx->pc = 0x80D6BF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6BF38: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6BF38u)) return;
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
label_80D6BF3C:
    ctx->pc = 0x80D6BF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF3Cu)) return;
    // 80D6BF3C: lis     r3, -32553
    ctx->gpr[3] = ((u32)(s32)(-32553) << 16);

label_80D6BF40:
    ctx->pc = 0x80D6BF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF40u)) return;
    // 80D6BF40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D6BF44:
    ctx->pc = 0x80D6BF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D6BF44: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6BF44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80D6BF48:
    ctx->pc = 0x80D6BF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6BF48: stfs     f1, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x80D6BF48u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF4C:
    ctx->pc = 0x80D6BF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF4Cu)) return;
    // 80D6BF4C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D6BF50:
    ctx->pc = 0x80D6BF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF50u)) return;
    // 80D6BF50: addi    r4, r4, -16200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16200);

label_80D6BF54:
    ctx->pc = 0x80D6BF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF54u)) return;
    // 80D6BF54: addi    r0, r3, -16488
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16488);

label_80D6BF58:
    ctx->pc = 0x80D6BF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6BF58: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF5C:
    ctx->pc = 0x80D6BF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BF5C: stw     r6, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF60:
    ctx->pc = 0x80D6BF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BF60: stb     r6, 33(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF64:
    ctx->pc = 0x80D6BF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BF64: stw     r6, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF68:
    ctx->pc = 0x80D6BF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BF68: stb     r6, 33(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF6C:
    ctx->pc = 0x80D6BF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6BF6C: stfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x80D6BF6Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF70:
    ctx->pc = 0x80D6BF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BF70: stw     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF74:
    ctx->pc = 0x80D6BF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BF74: stw     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF78:
    ctx->pc = 0x80D6BF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D6BF78: stw     r0, 20(r31)
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
label_80D6BF7C:
    ctx->pc = 0x80D6BF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BF7C: lwz     r0, 20(r1)
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
label_80D6BF80:
    ctx->pc = 0x80D6BF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF80u)) return;
    // 80D6BF80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6BF84:
    ctx->pc = 0x80D6BF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BF84: lwz     r31, 12(r1)
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
label_80D6BF88:
    ctx->pc = 0x80D6BF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6BF88: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF8C:
    ctx->pc = 0x80D6BF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6BF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BF8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BF90:
    ctx->pc = 0x80D6BF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF90u)) return;
    // 80D6BF90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6BF94:
    ctx->pc = 0x80D6BF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF94u)) return;
    // 80D6BF94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6BF98:
    ctx->pc = 0x80D6BF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6BF98: stwu     r1, -32(r1)
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
label_80D6BF9C:
    ctx->pc = 0x80D6BF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6BF9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFA0:
    ctx->pc = 0x80D6BFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6BFA0: stw     r0, 36(r1)
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
label_80D6BFA4:
    ctx->pc = 0x80D6BFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6BFA4: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6BFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFA8:
    ctx->pc = 0x80D6BFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6BFA8: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6BFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D6BFA8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFAC:
    ctx->pc = 0x80D6BFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6BFAC: stw     r31, 12(r1)
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
label_80D6BFB0:
    ctx->pc = 0x80D6BFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6BFB0: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFB4:
    ctx->pc = 0x80D6BFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BFB4: lwz     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFB8:
    ctx->pc = 0x80D6BFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFB8u)) return;
    // 80D6BFB8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BFBC:
    ctx->pc = 0x80D6BFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFBCu)) return;
    // 80D6BFBC: addi    r30, r3, 30088
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(30088);

label_80D6BFC0:
    ctx->pc = 0x80D6BFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BFC0: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFC4:
    ctx->pc = 0x80D6BFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFC4u)) return;
    // 80D6BFC4: cmplwi  r0, 0x0000
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

label_80D6BFC8:
    ctx->pc = 0x80D6BFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFC8u)) return;
    // 80D6BFC8: bc    12, 2, 0x80D6C098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C098;
        }
    }

label_80D6BFCC:
    ctx->pc = 0x80D6BFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6BFCC: bl      0x804E86A4
    {
            ctx->lr = 0x80D6BFD0u;
            ctx->pc = 0x804E86A4u;
            return;
    }

label_80D6BFD0:
    ctx->pc = 0x80D6BFD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BFD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6BFD0: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFD4:
    ctx->pc = 0x80D6BFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFD4u)) return;
    // 80D6BFD4: bl      0x804E97C4
    {
            ctx->lr = 0x80D6BFD8u;
            ctx->pc = 0x804E97C4u;
            return;
    }

label_80D6BFD8:
    ctx->pc = 0x80D6BFD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BFD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BFD8: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6BFDC:
    ctx->pc = 0x80D6BFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFDCu)) return;
    // 80D6BFDC: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6BFE0:
    ctx->pc = 0x80D6BFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFE0u)) return;
    // 80D6BFE0: bc    12, 2, 0x80D6C024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C024;
        }
    }

label_80D6BFE4:
    ctx->pc = 0x80D6BFE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6BFE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6BFE4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6BFE8:
    ctx->pc = 0x80D6BFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6BFE8: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6BFE8u)) return;
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
label_80D6BFEC:
    ctx->pc = 0x80D6BFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFECu)) return;
    // 80D6BFEC: addi    r4, r3, 20088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20088);

label_80D6BFF0:
    ctx->pc = 0x80D6BFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFF0u)) return;
    // 80D6BFF0: addi    r3, r30, 192
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(192);

label_80D6BFF4:
    ctx->pc = 0x80D6BFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6BFF4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6BFF4u)) return;
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
label_80D6BFF8:
    ctx->pc = 0x80D6BFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFF8u)) return;
    // 80D6BFF8: fadds   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6BFF8u)) return;
    ppc_fadds(ctx, 31, 1, 0);

label_80D6BFFC:
    ctx->pc = 0x80D6BFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6BFFCu)) return;
    // 80D6BFFC: bl      0x8060F594
    {
            ctx->lr = 0x80D6C000u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D6C000:
    ctx->pc = 0x80D6C000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C000: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80D6C004:
    ctx->pc = 0x80D6C004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C004u)) return;
    // 80D6C004: bl      0x804E9BC0
    {
            ctx->lr = 0x80D6C008u;
            ctx->pc = 0x804E9BC0u;
            return;
    }

label_80D6C008:
    ctx->pc = 0x80D6C008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C008: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C00C:
    ctx->pc = 0x80D6C00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C00Cu)) return;
    // 80D6C00C: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C00Cu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C010:
    ctx->pc = 0x80D6C010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C010u)) return;
    // 80D6C010: addi    r4, r3, 20084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20084);

label_80D6C014:
    ctx->pc = 0x80D6C014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C014u)) return;
    // 80D6C014: addi    r3, r30, 980
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(980);

label_80D6C018:
    ctx->pc = 0x80D6C018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C018: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C018u)) return;
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
label_80D6C01C:
    ctx->pc = 0x80D6C01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C01Cu)) return;
    // 80D6C01C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C01Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D6C020:
    ctx->pc = 0x80D6C020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C020u)) return;
    // 80D6C020: bl      0x804E8814
    {
            ctx->lr = 0x80D6C024u;
            ctx->pc = 0x804E8814u;
            return;
    }

label_80D6C024:
    ctx->pc = 0x80D6C024u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C024u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C024: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80D6C028:
    ctx->pc = 0x80D6C028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C028u)) return;
    // 80D6C028: bl      0x804E9BC0
    {
            ctx->lr = 0x80D6C02Cu;
            ctx->pc = 0x804E9BC0u;
            return;
    }

label_80D6C02C:
    ctx->pc = 0x80D6C02Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C02Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C02C: addi    r3, r30, 776
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(776);

label_80D6C030:
    ctx->pc = 0x80D6C030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C030u)) return;
    // 80D6C030: bl      0x8060F594
    {
            ctx->lr = 0x80D6C034u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D6C034:
    ctx->pc = 0x80D6C034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6C034: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C038:
    ctx->pc = 0x80D6C038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C038u)) return;
    // 80D6C038: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C03C:
    ctx->pc = 0x80D6C03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C03Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C03C: lfs     f2, 20100(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C03Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20100);
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
label_80D6C040:
    ctx->pc = 0x80D6C040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C040u)) return;
    // 80D6C040: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C044:
    ctx->pc = 0x80D6C044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C044: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C044u)) return;
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
label_80D6C048:
    ctx->pc = 0x80D6C048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C048u)) return;
    // 80D6C048: li      r3, 22
    ctx->gpr[3] = (u32)(s32)(22);

label_80D6C04C:
    ctx->pc = 0x80D6C04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C04Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C04C: lfs     f1, 20092(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C04Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20092);
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
label_80D6C050:
    ctx->pc = 0x80D6C050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C050u)) return;
    // 80D6C050: fadds   f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C050u)) return;
    ppc_fadds(ctx, 3, 2, 0);

label_80D6C054:
    ctx->pc = 0x80D6C054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C054: lfs     f2, 20096(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C054u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20096);
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
label_80D6C058:
    ctx->pc = 0x80D6C058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C058u)) return;
    // 80D6C058: bl      0x804E931C
    {
            ctx->lr = 0x80D6C05Cu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C05C:
    ctx->pc = 0x80D6C05Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C05Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D6C05C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C060:
    ctx->pc = 0x80D6C060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C060u)) return;
    // 80D6C060: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C064:
    ctx->pc = 0x80D6C064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C064: lfs     f1, 20104(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C064u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20104);
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
label_80D6C068:
    ctx->pc = 0x80D6C068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C068u)) return;
    // 80D6C068: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C06C:
    ctx->pc = 0x80D6C06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C06C: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C06Cu)) return;
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
label_80D6C070:
    ctx->pc = 0x80D6C070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C070u)) return;
    // 80D6C070: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C074:
    ctx->pc = 0x80D6C074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C074u)) return;
    // 80D6C074: lis     r6, -27312
    ctx->gpr[6] = ((u32)(s32)(-27312) << 16);

label_80D6C078:
    ctx->pc = 0x80D6C078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C078: lfs     f2, 20092(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C078u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20092);
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
label_80D6C07C:
    ctx->pc = 0x80D6C07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C07Cu)) return;
    // 80D6C07C: fadds   f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C07Cu)) return;
    ppc_fadds(ctx, 3, 1, 0);

label_80D6C080:
    ctx->pc = 0x80D6C080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C080: lfs     f1, 20084(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6C080u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20084);
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
label_80D6C084:
    ctx->pc = 0x80D6C084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C084: lfs     f4, 20108(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C084u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20108);
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
label_80D6C088:
    ctx->pc = 0x80D6C088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C088: lfs     f5, 20096(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C088u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20096);
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
label_80D6C08C:
    ctx->pc = 0x80D6C08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C08Cu)) return;
    // 80D6C08C: bl      0x804E7324
    {
            ctx->lr = 0x80D6C090u;
            ctx->pc = 0x804E7324u;
            return;
    }

label_80D6C090:
    ctx->pc = 0x80D6C090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C090: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6C094:
    ctx->pc = 0x80D6C094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C094u)) return;
    // 80D6C094: bl      0x80D6C258
    {
            ctx->lr = 0x80D6C098u;
            goto label_80D6C258;
    }

label_80D6C098:
    ctx->pc = 0x80D6C098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C098: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C098u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D6C098u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C09C:
    ctx->pc = 0x80D6C09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C09C: lwz     r0, 36(r1)
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
label_80D6C0A0:
    ctx->pc = 0x80D6C0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C0A0: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C0A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C0A4:
    ctx->pc = 0x80D6C0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C0A4: lwz     r31, 12(r1)
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
label_80D6C0A8:
    ctx->pc = 0x80D6C0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C0A8: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C0AC:
    ctx->pc = 0x80D6C0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6C0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C0AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C0B0:
    ctx->pc = 0x80D6C0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0B0u)) return;
    // 80D6C0B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6C0B4:
    ctx->pc = 0x80D6C0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0B4u)) return;
    // 80D6C0B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6C0B8:
    ctx->pc = 0x80D6C0B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C0B8: stwu     r1, -16(r1)
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
label_80D6C0BC:
    ctx->pc = 0x80D6C0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C0BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C0C0:
    ctx->pc = 0x80D6C0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C0C0: stw     r0, 20(r1)
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
label_80D6C0C4:
    ctx->pc = 0x80D6C0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C0C4: stw     r31, 12(r1)
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
label_80D6C0C8:
    ctx->pc = 0x80D6C0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C0C8: lwz     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C0CC:
    ctx->pc = 0x80D6C0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C0CC: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C0D0:
    ctx->pc = 0x80D6C0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0D0u)) return;
    // 80D6C0D0: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C0D4:
    ctx->pc = 0x80D6C0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0D4u)) return;
    // 80D6C0D4: bc    12, 2, 0x80D6C164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C164;
        }
    }

label_80D6C0D8:
    ctx->pc = 0x80D6C0D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C0D8: bc    4, 0, 0x80D6C0EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C0EC;
        }
    }

label_80D6C0DC:
    ctx->pc = 0x80D6C0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C0DC: cmpwi   r0, 0
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

label_80D6C0E0:
    ctx->pc = 0x80D6C0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0E0u)) return;
    // 80D6C0E0: bc    12, 2, 0x80D6C0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C0F8;
        }
    }

label_80D6C0E4:
    ctx->pc = 0x80D6C0E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C0E4: bc    4, 0, 0x80D6C110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C110;
        }
    }

label_80D6C0E8:
    ctx->pc = 0x80D6C0E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C0E8: b       0x80D6C200
    {
            goto label_80D6C200;
    }

label_80D6C0EC:
    ctx->pc = 0x80D6C0ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C0EC: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C0F0:
    ctx->pc = 0x80D6C0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0F0u)) return;
    // 80D6C0F0: bc    4, 0, 0x80D6C200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C200;
        }
    }

label_80D6C0F4:
    ctx->pc = 0x80D6C0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C0F4: b       0x80D6C188
    {
            goto label_80D6C188;
    }

label_80D6C0F8:
    ctx->pc = 0x80D6C0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6C0F8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C0FC:
    ctx->pc = 0x80D6C0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C0FCu)) return;
    // 80D6C0FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6C100:
    ctx->pc = 0x80D6C100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C100: lfs     f0, 20084(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C100u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20084);
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
label_80D6C104:
    ctx->pc = 0x80D6C104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C104: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C104u)) return;
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
label_80D6C108:
    ctx->pc = 0x80D6C108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C108: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C10C:
    ctx->pc = 0x80D6C10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C10Cu)) return;
    // 80D6C10C: b       0x80D6C200
    {
            goto label_80D6C200;
    }

label_80D6C110:
    ctx->pc = 0x80D6C110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6C110: lis     r3, 256
    ctx->gpr[3] = ((u32)(s32)(256) << 16);

label_80D6C114:
    ctx->pc = 0x80D6C114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C114: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C114u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D6C118:
    ctx->pc = 0x80D6C118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C118u)) return;
    // 80D6C118: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D6C11C:
    ctx->pc = 0x80D6C11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C11Cu)) return;
    // 80D6C11C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80D6C120:
    ctx->pc = 0x80D6C120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C120u)) return;
    // 80D6C120: bl      0x80446F1C
    {
            ctx->lr = 0x80D6C124u;
            ctx->pc = 0x80446F1Cu;
            return;
    }

label_80D6C124:
    ctx->pc = 0x80D6C124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6C124: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C128:
    ctx->pc = 0x80D6C128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C128u)) return;
    // 80D6C128: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C12C:
    ctx->pc = 0x80D6C12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C12Cu)) return;
    // 80D6C12C: addi    r4, r3, 20112
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20112);

label_80D6C130:
    ctx->pc = 0x80D6C130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C130: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C130u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D6C134:
    ctx->pc = 0x80D6C134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C134u)) return;
    // 80D6C134: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C138:
    ctx->pc = 0x80D6C138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C138: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C138u)) return;
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
label_80D6C13C:
    ctx->pc = 0x80D6C13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C13C: lfs     f0, 20116(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C13Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20116);
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
label_80D6C140:
    ctx->pc = 0x80D6C140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C140u)) return;
    // 80D6C140: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C140u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80D6C144:
    ctx->pc = 0x80D6C144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C144: stfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C144u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C148:
    ctx->pc = 0x80D6C148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C148: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C148u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D6C14C:
    ctx->pc = 0x80D6C14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C14Cu)) return;
    // 80D6C14C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C14Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6C150:
    ctx->pc = 0x80D6C150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C150u)) return;
    // 80D6C150: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D6C154:
    ctx->pc = 0x80D6C154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C154u)) return;
    // 80D6C154: bc    4, 2, 0x80D6C200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C200;
        }
    }

label_80D6C158:
    ctx->pc = 0x80D6C158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C158: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80D6C15C:
    ctx->pc = 0x80D6C15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C15C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C160:
    ctx->pc = 0x80D6C160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C160u)) return;
    // 80D6C160: b       0x80D6C200
    {
            goto label_80D6C200;
    }

label_80D6C164:
    ctx->pc = 0x80D6C164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6C164: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C168:
    ctx->pc = 0x80D6C168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C168u)) return;
    // 80D6C168: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80D6C16C:
    ctx->pc = 0x80D6C16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C16Cu)) return;
    // 80D6C16C: addi    r4, r3, 20084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20084);

label_80D6C170:
    ctx->pc = 0x80D6C170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C170u)) return;
    // 80D6C170: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6C174:
    ctx->pc = 0x80D6C174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C174: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C174u)) return;
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
label_80D6C178:
    ctx->pc = 0x80D6C178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C178: stfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C178u)) return;
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
label_80D6C17C:
    ctx->pc = 0x80D6C17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C17C: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C180:
    ctx->pc = 0x80D6C180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C180u)) return;
    // 80D6C180: bl      0x80D6C814
    {
            ctx->lr = 0x80D6C184u;
            goto label_80D6C814;
    }

label_80D6C184:
    ctx->pc = 0x80D6C184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C184: b       0x80D6C200
    {
            goto label_80D6C200;
    }

label_80D6C188:
    ctx->pc = 0x80D6C188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6C188: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C18C:
    ctx->pc = 0x80D6C18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C18C: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C18Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D6C190:
    ctx->pc = 0x80D6C190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C190: lfs     f0, 20124(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C190u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20124);
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
label_80D6C194:
    ctx->pc = 0x80D6C194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C194u)) return;
    // 80D6C194: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C194u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6C198:
    ctx->pc = 0x80D6C198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C198u)) return;
    // 80D6C198: bc    4, 0, 0x80D6C1C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C1C0;
        }
    }

label_80D6C19C:
    ctx->pc = 0x80D6C19Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C19Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6C19C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C1A0:
    ctx->pc = 0x80D6C1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1A0u)) return;
    // 80D6C1A0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C1A0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80D6C1A4:
    ctx->pc = 0x80D6C1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C1A4: lfs     f1, 20120(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C1A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20120);
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
label_80D6C1A8:
    ctx->pc = 0x80D6C1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1A8u)) return;
    // 80D6C1A8: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C1A8u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80D6C1AC:
    ctx->pc = 0x80D6C1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1ACu)) return;
    // 80D6C1AC: bl      0x80006CAC
    {
            ctx->lr = 0x80D6C1B0u;
            ctx->pc = 0x80006CACu;
            return;
    }

label_80D6C1B0:
    ctx->pc = 0x80D6C1B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C1B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6C1B0: rlwinm r0, r3, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0xFF000000u;
    }

label_80D6C1B4:
    ctx->pc = 0x80D6C1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1B4u)) return;
    // 80D6C1B4: oris    r0, r0, 0x00FF
    ctx->gpr[0] = ctx->gpr[0] | (0x00FFu << 16);

label_80D6C1B8:
    ctx->pc = 0x80D6C1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1B8u)) return;
    // 80D6C1B8: ori     r0, r0, 0xFFFF
    ctx->gpr[0] = ctx->gpr[0] | 0xFFFFu;

label_80D6C1BC:
    ctx->pc = 0x80D6C1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1BCu)) return;
    // 80D6C1BC: b       0x80D6C1C4
    {
            goto label_80D6C1C4;
    }

label_80D6C1C0:
    ctx->pc = 0x80D6C1C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C1C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C1C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6C1C4:
    ctx->pc = 0x80D6C1C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6C1C4: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C1C8:
    ctx->pc = 0x80D6C1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1C8u)) return;
    // 80D6C1C8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C1CC:
    ctx->pc = 0x80D6C1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1CCu)) return;
    // 80D6C1CC: addi    r4, r3, 20112
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20112);

label_80D6C1D0:
    ctx->pc = 0x80D6C1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C1D0: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C1D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D6C1D4:
    ctx->pc = 0x80D6C1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1D4u)) return;
    // 80D6C1D4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C1D8:
    ctx->pc = 0x80D6C1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C1D8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C1D8u)) return;
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
label_80D6C1DC:
    ctx->pc = 0x80D6C1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C1DC: lfs     f0, 20116(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C1DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20116);
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
label_80D6C1E0:
    ctx->pc = 0x80D6C1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1E0u)) return;
    // 80D6C1E0: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C1E0u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_80D6C1E4:
    ctx->pc = 0x80D6C1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C1E4: stfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C1E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C1E8:
    ctx->pc = 0x80D6C1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C1E8: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C1E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
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
label_80D6C1EC:
    ctx->pc = 0x80D6C1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1ECu)) return;
    // 80D6C1EC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C1ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6C1F0:
    ctx->pc = 0x80D6C1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1F0u)) return;
    // 80D6C1F0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D6C1F4:
    ctx->pc = 0x80D6C1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1F4u)) return;
    // 80D6C1F4: bc    4, 2, 0x80D6C200
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C200;
        }
    }

label_80D6C1F8:
    ctx->pc = 0x80D6C1F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C1F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C1F8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6C1FC:
    ctx->pc = 0x80D6C1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D6C1FC: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C200:
    ctx->pc = 0x80D6C200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C200: lwz     r0, 20(r1)
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
label_80D6C204:
    ctx->pc = 0x80D6C204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C204: lwz     r31, 12(r1)
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
label_80D6C208:
    ctx->pc = 0x80D6C208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6C208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C208: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C20C:
    ctx->pc = 0x80D6C20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C20Cu)) return;
    // 80D6C20C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6C210:
    ctx->pc = 0x80D6C210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C210u)) return;
    // 80D6C210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6C214:
    ctx->pc = 0x80D6C214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80D6C214: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C218:
    ctx->pc = 0x80D6C218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D6C218: lwz     r6, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C21C:
    ctx->pc = 0x80D6C21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D6C21C: lfs     f1, 20080(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C21Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20080);
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
label_80D6C220:
    ctx->pc = 0x80D6C220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C220u)) return;
    // 80D6C220: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C224:
    ctx->pc = 0x80D6C224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C224u)) return;
    // 80D6C224: addi    r3, r4, 20084
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20084);

label_80D6C228:
    ctx->pc = 0x80D6C228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C228u)) return;
    // 80D6C228: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6C22C:
    ctx->pc = 0x80D6C22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C22C: stfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6C22Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C230:
    ctx->pc = 0x80D6C230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C230u)) return;
    // 80D6C230: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6C234:
    ctx->pc = 0x80D6C234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C234: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C234u)) return;
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
label_80D6C238:
    ctx->pc = 0x80D6C238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C238: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C23C:
    ctx->pc = 0x80D6C23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C23C: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C240:
    ctx->pc = 0x80D6C240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C240: stb     r4, 33(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C244:
    ctx->pc = 0x80D6C244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C244: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C248:
    ctx->pc = 0x80D6C248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C248: stb     r4, 33(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C24C:
    ctx->pc = 0x80D6C24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C24C: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6C24Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C250:
    ctx->pc = 0x80D6C250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C250: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C254:
    ctx->pc = 0x80D6C254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C254u)) return;
    // 80D6C254: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6C258:
    ctx->pc = 0x80D6C258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D6C258: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C25C:
    ctx->pc = 0x80D6C25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D6C25C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C260:
    ctx->pc = 0x80D6C260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D6C260: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C264:
    ctx->pc = 0x80D6C264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D6C264: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C268:
    ctx->pc = 0x80D6C268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6C268: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D6C268u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C26C:
    ctx->pc = 0x80D6C26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D6C26C: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C26Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C270:
    ctx->pc = 0x80D6C270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6C270: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D6C270u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C274:
    ctx->pc = 0x80D6C274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D6C274: stfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C274u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C278:
    ctx->pc = 0x80D6C278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6C278: psq_st   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C278u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D6C278u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C27C:
    ctx->pc = 0x80D6C27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80D6C27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C27C: stmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C280:
    ctx->pc = 0x80D6C280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C280u)) return;
    // 80D6C280: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C284:
    ctx->pc = 0x80D6C284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C284u)) return;
    // 80D6C284: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6C288:
    ctx->pc = 0x80D6C288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C288u)) return;
    // 80D6C288: addi    r31, r4, 30088
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(30088);

label_80D6C28C:
    ctx->pc = 0x80D6C28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C28Cu)) return;
    // 80D6C28C: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6C290:
    ctx->pc = 0x80D6C290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C290u)) return;
    // 80D6C290: bl      0x8060F594
    {
            ctx->lr = 0x80D6C294u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D6C294:
    ctx->pc = 0x80D6C294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C294: lwz     r0, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C298:
    ctx->pc = 0x80D6C298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C298u)) return;
    // 80D6C298: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C29C:
    ctx->pc = 0x80D6C29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C29Cu)) return;
    // 80D6C29C: bc    4, 2, 0x80D6C750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C750;
        }
    }

label_80D6C2A0:
    ctx->pc = 0x80D6C2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C2A0: lwz     r6, 36(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C2A4:
    ctx->pc = 0x80D6C2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2A4u)) return;
    // 80D6C2A4: li      r29, -1
    ctx->gpr[29] = (u32)(s32)(-1);

label_80D6C2A8:
    ctx->pc = 0x80D6C2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2A8u)) return;
    // 80D6C2A8: cmplwi  r6, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C2AC:
    ctx->pc = 0x80D6C2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2ACu)) return;
    // 80D6C2AC: bc    12, 1, 0x80D6C5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C5B8;
        }
    }

label_80D6C2B0:
    ctx->pc = 0x80D6C2B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C2B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C2B0: lfs     f5, 808(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C2B0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
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
label_80D6C2B4:
    ctx->pc = 0x80D6C2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2B4u)) return;
    // 80D6C2B4: or   r28, r29, r29
    {
        ctx->gpr[28] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D6C2B8:
    ctx->pc = 0x80D6C2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C2B8: lwz     r30, 40(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C2BC:
    ctx->pc = 0x80D6C2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2BCu)) return;
    // 80D6C2BC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80D6C2C0:
    ctx->pc = 0x80D6C2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2C0u)) return;
    // 80D6C2C0: fmr    f29, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C2C0u)) return;
    ctx->fpr[29] = ctx->fpr[5];

label_80D6C2C4:
    ctx->pc = 0x80D6C2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2C4u)) return;
    // 80D6C2C4: fmr    f30, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C2C4u)) return;
    ctx->fpr[30] = ctx->fpr[5];

label_80D6C2C8:
    ctx->pc = 0x80D6C2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2C8u)) return;
    // 80D6C2C8: cmplwi  r30, 0x0028
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0028u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C2CC:
    ctx->pc = 0x80D6C2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2CCu)) return;
    // 80D6C2CC: bc    4, 1, 0x80D6C368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C368;
        }
    }

label_80D6C2D0:
    ctx->pc = 0x80D6C2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 47u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 47u : 1u;
    // 80D6C2D0: addi    r4, r30, -40
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-40);

label_80D6C2D4:
    ctx->pc = 0x80D6C2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2D4u)) return;
    // 80D6C2D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D6C2D8:
    ctx->pc = 0x80D6C2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2D8u)) return;
    // 80D6C2D8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C2DC:
    ctx->pc = 0x80D6C2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 80D6C2DC: stw     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C2E0:
    ctx->pc = 0x80D6C2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2E0u)) return;
    // 80D6C2E0: addi    r4, r3, 20224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20224);

label_80D6C2E4:
    ctx->pc = 0x80D6C2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80D6C2E4: lfs     f4, 812(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C2E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(812);
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
label_80D6C2E8:
    ctx->pc = 0x80D6C2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80D6C2E8: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C2EC:
    ctx->pc = 0x80D6C2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2ECu)) return;
    // 80D6C2EC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C2F0:
    ctx->pc = 0x80D6C2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80D6C2F0: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C2F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C2F4:
    ctx->pc = 0x80D6C2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2F4u)) return;
    // 80D6C2F4: addi    r5, r3, 20128
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20128);

label_80D6C2F8:
    ctx->pc = 0x80D6C2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80D6C2F8: lfd     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C2F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C2FC:
    ctx->pc = 0x80D6C2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C2FCu)) return;
    // 80D6C2FC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C300:
    ctx->pc = 0x80D6C300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D6C300: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C300u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
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
label_80D6C304:
    ctx->pc = 0x80D6C304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C304u)) return;
    // 80D6C304: addi    r4, r3, 20136
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20136);

label_80D6C308:
    ctx->pc = 0x80D6C308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C308u)) return;
    // 80D6C308: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80D6C308u)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_80D6C30C:
    ctx->pc = 0x80D6C30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C30Cu)) return;
    // 80D6C30C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C310:
    ctx->pc = 0x80D6C310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C310u)) return;
    // 80D6C310: addi    r5, r3, 20132
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20132);

label_80D6C314:
    ctx->pc = 0x80D6C314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D6C314: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C314u)) return;
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
label_80D6C318:
    ctx->pc = 0x80D6C318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C318u)) return;
    // 80D6C318: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C31C:
    ctx->pc = 0x80D6C31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D6C31C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C31Cu)) return;
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
label_80D6C320:
    ctx->pc = 0x80D6C320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80D6C320u)) return;
    // 80D6C320: fdivs   f6, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C320u)) return;
    ppc_fdivs(ctx, 6, 2, 0);

label_80D6C324:
    ctx->pc = 0x80D6C324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C324: lfs     f0, 20120(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C324u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20120);
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
label_80D6C328:
    ctx->pc = 0x80D6C328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C328u)) return;
    // 80D6C328: fmuls   f2, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x80D6C328u)) return;
    ppc_fmuls(ctx, 2, 1, 6);

label_80D6C32C:
    ctx->pc = 0x80D6C32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C32Cu)) return;
    // 80D6C32C: fmuls   f1, f0, f6
    if (!ppc_fp_available_inline(ctx, 0x80D6C32Cu)) return;
    ppc_fmuls(ctx, 1, 0, 6);

label_80D6C330:
    ctx->pc = 0x80D6C330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C330u)) return;
    // 80D6C330: fmadds f29, f6, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C330u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[6], ctx->fpr[4], ctx->fpr[5], true, false, false, &result))
            ctx->fpr[29] = ctx->ps1[29] = result;
    }

label_80D6C334:
    ctx->pc = 0x80D6C334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C334u)) return;
    // 80D6C334: fmuls   f0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80D6C334u)) return;
    ppc_fmuls(ctx, 0, 3, 2);

label_80D6C338:
    ctx->pc = 0x80D6C338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C338u)) return;
    // 80D6C338: fmr    f30, f29
    if (!ppc_fp_available_inline(ctx, 0x80D6C338u)) return;
    ctx->fpr[30] = ctx->fpr[29];

label_80D6C33C:
    ctx->pc = 0x80D6C33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C33Cu)) return;
    // 80D6C33C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C33Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80D6C340:
    ctx->pc = 0x80D6C340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C340: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C344:
    ctx->pc = 0x80D6C344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C344: lwz     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C348:
    ctx->pc = 0x80D6C348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C348u)) return;
    // 80D6C348: bl      0x80006CAC
    {
            ctx->lr = 0x80D6C34Cu;
            ctx->pc = 0x80006CACu;
            return;
    }

label_80D6C34C:
    ctx->pc = 0x80D6C34Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C34C: cmplwi  r3, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C350:
    ctx->pc = 0x80D6C350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C350u)) return;
    // 80D6C350: bc    4, 1, 0x80D6C358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C358;
        }
    }

label_80D6C354:
    ctx->pc = 0x80D6C354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C354: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_80D6C358:
    ctx->pc = 0x80D6C358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6C358: subfic  r0, r3, 255
    {
        u64 res = (u64)(u32)(s32)(255) + (u64)(~ctx->gpr[3]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80D6C35C:
    ctx->pc = 0x80D6C35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C35Cu)) return;
    // 80D6C35C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80D6C360:
    ctx->pc = 0x80D6C360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C360u)) return;
    // 80D6C360: oris    r28, r0, 0x00FF
    ctx->gpr[28] = ctx->gpr[0] | (0x00FFu << 16);

label_80D6C364:
    ctx->pc = 0x80D6C364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C364u)) return;
    // 80D6C364: ori     r28, r28, 0xFFFF
    ctx->gpr[28] = ctx->gpr[28] | 0xFFFFu;

label_80D6C368:
    ctx->pc = 0x80D6C368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C368: cmplwi  r30, 0x000E
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x000Eu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C36C:
    ctx->pc = 0x80D6C36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C36Cu)) return;
    // 80D6C36C: bc    4, 0, 0x80D6C444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C444;
        }
    }

label_80D6C370:
    ctx->pc = 0x80D6C370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 49u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 49u : 1u;
    // 80D6C370: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D6C374:
    ctx->pc = 0x80D6C374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C374u)) return;
    // 80D6C374: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C378:
    ctx->pc = 0x80D6C378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 80D6C378: stw     r30, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C37C:
    ctx->pc = 0x80D6C37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C37Cu)) return;
    // 80D6C37C: addi    r4, r3, 20224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20224);

label_80D6C380:
    ctx->pc = 0x80D6C380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C380u)) return;
    // 80D6C380: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C384:
    ctx->pc = 0x80D6C384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C384u)) return;
    // 80D6C384: lis     r6, -27312
    ctx->gpr[6] = ((u32)(s32)(-27312) << 16);

label_80D6C388:
    ctx->pc = 0x80D6C388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80D6C388: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C38C:
    ctx->pc = 0x80D6C38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C38Cu)) return;
    // 80D6C38C: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C390:
    ctx->pc = 0x80D6C390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80D6C390: lfd     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C390u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C394:
    ctx->pc = 0x80D6C394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C394u)) return;
    // 80D6C394: addi    r4, r5, 20152
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(20152);

label_80D6C398:
    ctx->pc = 0x80D6C398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80D6C398: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C398u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C39C:
    ctx->pc = 0x80D6C39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C39Cu)) return;
    // 80D6C39C: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C3A0:
    ctx->pc = 0x80D6C3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80D6C3A0: lfs     f0, 20156(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20156);
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
label_80D6C3A4:
    ctx->pc = 0x80D6C3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3A4u)) return;
    // 80D6C3A4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C3A8:
    ctx->pc = 0x80D6C3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3A8u)) return;
    // 80D6C3A8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80D6C3A8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_80D6C3AC:
    ctx->pc = 0x80D6C3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D6C3AC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3ACu)) return;
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
label_80D6C3B0:
    ctx->pc = 0x80D6C3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D6C3B0: lfs     f3, 20132(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20132);
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
label_80D6C3B4:
    ctx->pc = 0x80D6C3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D6C3B4: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C3B8:
    ctx->pc = 0x80D6C3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80D6C3B8u)) return;
    // 80D6C3B8: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C3B8u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80D6C3BC:
    ctx->pc = 0x80D6C3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D6C3BC: lfd     f1, 20232(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20232);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C3C0:
    ctx->pc = 0x80D6C3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6C3C0: lfd     f4, 20144(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3C0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20144);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C3C4:
    ctx->pc = 0x80D6C3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3C4u)) return;
    // 80D6C3C4: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C3C4u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_80D6C3C8:
    ctx->pc = 0x80D6C3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3C8u)) return;
    // 80D6C3C8: fmuls   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C3C8u)) return;
    ppc_fmuls(ctx, 0, 3, 0);

label_80D6C3CC:
    ctx->pc = 0x80D6C3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3CCu)) return;
    // 80D6C3CC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C3CCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80D6C3D0:
    ctx->pc = 0x80D6C3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C3D0: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C3D4:
    ctx->pc = 0x80D6C3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C3D4: lwz     r0, 68(r1)
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
label_80D6C3D8:
    ctx->pc = 0x80D6C3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3D8u)) return;
    // 80D6C3D8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_80D6C3DC:
    ctx->pc = 0x80D6C3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C3DC: stw     r0, 84(r1)
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
label_80D6C3E0:
    ctx->pc = 0x80D6C3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C3E0: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C3E4:
    ctx->pc = 0x80D6C3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3E4u)) return;
    // 80D6C3E4: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C3E4u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80D6C3E8:
    ctx->pc = 0x80D6C3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3E8u)) return;
    // 80D6C3E8: fmul   f1, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C3E8u)) return;
    ppc_fmul(ctx, 1, 4, 0);

label_80D6C3EC:
    ctx->pc = 0x80D6C3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3ECu)) return;
    // 80D6C3EC: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C3ECu)) return;
    ppc_frsp(ctx, 1, 1);

label_80D6C3F0:
    ctx->pc = 0x80D6C3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3F0u)) return;
    // 80D6C3F0: bl      0x80014034
    {
            ctx->lr = 0x80D6C3F4u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80D6C3F4:
    ctx->pc = 0x80D6C3F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C3F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80D6C3F4: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C3F8:
    ctx->pc = 0x80D6C3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3F8u)) return;
    // 80D6C3F8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C3F8u)) return;
    ppc_frsp(ctx, 1, 1);

label_80D6C3FC:
    ctx->pc = 0x80D6C3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C3FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D6C3FC: lfs     f0, 20116(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C3FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20116);
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
label_80D6C400:
    ctx->pc = 0x80D6C400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C400u)) return;
    // 80D6C400: lis     r6, -27312
    ctx->gpr[6] = ((u32)(s32)(-27312) << 16);

label_80D6C404:
    ctx->pc = 0x80D6C404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C404u)) return;
    // 80D6C404: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C408:
    ctx->pc = 0x80D6C408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C408u)) return;
    // 80D6C408: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C40C:
    ctx->pc = 0x80D6C40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C40Cu)) return;
    // 80D6C40C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C410:
    ctx->pc = 0x80D6C410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C410u)) return;
    // 80D6C410: fadds   f5, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C410u)) return;
    ppc_fadds(ctx, 5, 0, 1);

label_80D6C414:
    ctx->pc = 0x80D6C414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6C414: lfs     f0, 20176(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C414u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20176);
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
label_80D6C418:
    ctx->pc = 0x80D6C418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C418u)) return;
    // 80D6C418: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C41C:
    ctx->pc = 0x80D6C41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C41C: lfs     f4, 20164(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6C41Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20164);
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
label_80D6C420:
    ctx->pc = 0x80D6C420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C420: lfs     f3, 20160(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C420u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20160);
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
label_80D6C424:
    ctx->pc = 0x80D6C424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C424u)) return;
    // 80D6C424: fsubs   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C424u)) return;
    ppc_fsubs(ctx, 1, 0, 5);

label_80D6C428:
    ctx->pc = 0x80D6C428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C428: lfs     f2, 20172(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C428u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20172);
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
label_80D6C42C:
    ctx->pc = 0x80D6C42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C42Cu)) return;
    // 80D6C42C: fmadds f3, f4, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80D6C42Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[4], ctx->fpr[5], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[3] = ctx->ps1[3] = result;
    }

label_80D6C430:
    ctx->pc = 0x80D6C430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C430: lfs     f0, 20168(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C430u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20168);
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
label_80D6C434:
    ctx->pc = 0x80D6C434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C434: lfs     f4, 808(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C434u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(808);
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
label_80D6C438:
    ctx->pc = 0x80D6C438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C438u)) return;
    // 80D6C438: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C438u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_80D6C43C:
    ctx->pc = 0x80D6C43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C43Cu)) return;
    // 80D6C43C: fmuls   f30, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6C43Cu)) return;
    ppc_fmuls(ctx, 30, 3, 4);

label_80D6C440:
    ctx->pc = 0x80D6C440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C440u)) return;
    // 80D6C440: fmuls   f29, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6C440u)) return;
    ppc_fmuls(ctx, 29, 0, 4);

label_80D6C444:
    ctx->pc = 0x80D6C444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 35u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 35u : 1u;
    // 80D6C444: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C448:
    ctx->pc = 0x80D6C448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D6C448: lwz     r0, 36(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C44C:
    ctx->pc = 0x80D6C44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D6C44C: lfs     f0, 4(r26)
    if (!ppc_fp_available_inline(ctx, 0x80D6C44Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
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
label_80D6C450:
    ctx->pc = 0x80D6C450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C450u)) return;
    // 80D6C450: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D6C454:
    ctx->pc = 0x80D6C454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D6C454: lfs     f1, 20100(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C454u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20100);
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
label_80D6C458:
    ctx->pc = 0x80D6C458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C458u)) return;
    // 80D6C458: subfic  r9, r0, 2
    {
        u64 res = (u64)(u32)(s32)(2) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[9] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80D6C45C:
    ctx->pc = 0x80D6C45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C45Cu)) return;
    // 80D6C45C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80D6C460:
    ctx->pc = 0x80D6C460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C460u)) return;
    // 80D6C460: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_80D6C464:
    ctx->pc = 0x80D6C464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C464u)) return;
    // 80D6C464: fadds   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C464u)) return;
    ppc_fadds(ctx, 31, 1, 0);

label_80D6C468:
    ctx->pc = 0x80D6C468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80D6C468: lfs     f1, 816(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C468u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(816);
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
label_80D6C46C:
    ctx->pc = 0x80D6C46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C46Cu)) return;
    // 80D6C46C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80D6C470:
    ctx->pc = 0x80D6C470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D6C470: lfs     f0, 820(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C470u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(820);
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
label_80D6C474:
    ctx->pc = 0x80D6C474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C474u)) return;
    // 80D6C474: addi    r5, r31, 776
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6C478:
    ctx->pc = 0x80D6C478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C478u)) return;
    // 80D6C478: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6C47C:
    ctx->pc = 0x80D6C47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C47Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6C47C: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C480:
    ctx->pc = 0x80D6C480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C480u)) return;
    // 80D6C480: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6C484:
    ctx->pc = 0x80D6C484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6C484: sth     r4, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C488:
    ctx->pc = 0x80D6C488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C488u)) return;
    // 80D6C488: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D6C48C:
    ctx->pc = 0x80D6C48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C48Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6C48C: sth     r8, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C490:
    ctx->pc = 0x80D6C490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D6C490: sth     r8, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C494:
    ctx->pc = 0x80D6C494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D6C494: sth     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C498:
    ctx->pc = 0x80D6C498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D6C498: sth     r7, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C49C:
    ctx->pc = 0x80D6C49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C49Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6C49C: sth     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4A0:
    ctx->pc = 0x80D6C4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6C4A0: sth     r6, 22(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4A4:
    ctx->pc = 0x80D6C4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C4A4: sth     r9, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4A8:
    ctx->pc = 0x80D6C4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C4A8: sth     r7, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4AC:
    ctx->pc = 0x80D6C4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C4AC: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C4ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4B0:
    ctx->pc = 0x80D6C4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C4B0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C4B0u)) return;
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
label_80D6C4B4:
    ctx->pc = 0x80D6C4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C4B4: stfs     f31, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C4B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4B8:
    ctx->pc = 0x80D6C4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C4B8: stfs     f30, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4BC:
    ctx->pc = 0x80D6C4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C4BC: stfs     f29, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C4BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4C0:
    ctx->pc = 0x80D6C4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C4C0: stw     r27, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4C4:
    ctx->pc = 0x80D6C4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C4C4: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4C8:
    ctx->pc = 0x80D6C4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C4C8: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4CC:
    ctx->pc = 0x80D6C4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4CCu)) return;
    // 80D6C4CC: bl      0x8060F4F8
    {
            ctx->lr = 0x80D6C4D0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D6C4D0:
    ctx->pc = 0x80D6C4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C4D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6C4D4:
    ctx->pc = 0x80D6C4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4D4u)) return;
    // 80D6C4D4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D6C4D8:
    ctx->pc = 0x80D6C4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4D8u)) return;
    // 80D6C4D8: bl      0x8060F4F8
    {
            ctx->lr = 0x80D6C4DCu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D6C4DC:
    ctx->pc = 0x80D6C4DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C4DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C4DC: bl      0x8048CE88
    {
            ctx->lr = 0x80D6C4E0u;
            ctx->pc = 0x8048CE88u;
            return;
    }

label_80D6C4E0:
    ctx->pc = 0x80D6C4E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C4E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C4E0: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D6C4E4:
    ctx->pc = 0x80D6C4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4E4u)) return;
    // 80D6C4E4: bl      0x8004E938
    {
            ctx->lr = 0x80D6C4E8u;
            ctx->pc = 0x8004E938u;
            return;
    }

label_80D6C4E8:
    ctx->pc = 0x80D6C4E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C4E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    // 80D6C4E8: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_80D6C4EC:
    ctx->pc = 0x80D6C4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4ECu)) return;
    // 80D6C4EC: rlwinm r8, r28, 8, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[28], 8u) & 0x000000FFu;
    }

label_80D6C4F0:
    ctx->pc = 0x80D6C4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4F0u)) return;
    // 80D6C4F0: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C4F4:
    ctx->pc = 0x80D6C4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D6C4F4: stw     r8, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C4F8:
    ctx->pc = 0x80D6C4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4F8u)) return;
    // 80D6C4F8: addi    r7, r5, 20224
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(20224);

label_80D6C4FC:
    ctx->pc = 0x80D6C4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C4FCu)) return;
    // 80D6C4FC: rlwinm r4, r28, 16, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x000000FFu;
    }

label_80D6C500:
    ctx->pc = 0x80D6C500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D6C500: stw     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C504:
    ctx->pc = 0x80D6C504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C504u)) return;
    // 80D6C504: rlwinm r3, r28, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 24u) & 0x000000FFu;
    }

label_80D6C508:
    ctx->pc = 0x80D6C508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D6C508: lfd     f5, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80D6C508u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C50C:
    ctx->pc = 0x80D6C50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C50Cu)) return;
    // 80D6C50C: rlwinm r0, r28, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80D6C510:
    ctx->pc = 0x80D6C510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6C510: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C510u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C514:
    ctx->pc = 0x80D6C514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C514u)) return;
    // 80D6C514: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C518:
    ctx->pc = 0x80D6C518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6C518: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C51C:
    ctx->pc = 0x80D6C51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C51Cu)) return;
    // 80D6C51C: fsubs   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C51Cu)) return;
    ppc_fsubs(ctx, 1, 0, 5);

label_80D6C520:
    ctx->pc = 0x80D6C520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6C520: lfs     f4, 20180(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C520u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20180);
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
label_80D6C524:
    ctx->pc = 0x80D6C524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D6C524: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C528:
    ctx->pc = 0x80D6C528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D6C528: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C528u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C52C:
    ctx->pc = 0x80D6C52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C52Cu)) return;
    // 80D6C52C: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6C52Cu)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_80D6C530:
    ctx->pc = 0x80D6C530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6C530: stw     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C534:
    ctx->pc = 0x80D6C534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C534u)) return;
    // 80D6C534: fsubs   f2, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C534u)) return;
    ppc_fsubs(ctx, 2, 0, 5);

label_80D6C538:
    ctx->pc = 0x80D6C538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C538: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C53C:
    ctx->pc = 0x80D6C53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C53C: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C53Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C540:
    ctx->pc = 0x80D6C540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C540u)) return;
    // 80D6C540: fmuls   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6C540u)) return;
    ppc_fmuls(ctx, 2, 2, 4);

label_80D6C544:
    ctx->pc = 0x80D6C544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C544: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C548:
    ctx->pc = 0x80D6C548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C548u)) return;
    // 80D6C548: fsubs   f3, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C548u)) return;
    ppc_fsubs(ctx, 3, 0, 5);

label_80D6C54C:
    ctx->pc = 0x80D6C54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C54C: stw     r6, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C550:
    ctx->pc = 0x80D6C550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C550: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C550u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C554:
    ctx->pc = 0x80D6C554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C554u)) return;
    // 80D6C554: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6C554u)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_80D6C558:
    ctx->pc = 0x80D6C558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C558u)) return;
    // 80D6C558: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6C558u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_80D6C55C:
    ctx->pc = 0x80D6C55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C55Cu)) return;
    // 80D6C55C: fmuls   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6C55Cu)) return;
    ppc_fmuls(ctx, 4, 0, 4);

label_80D6C560:
    ctx->pc = 0x80D6C560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C560u)) return;
    // 80D6C560: bl      0x80450D90
    {
            ctx->lr = 0x80D6C564u;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D6C564:
    ctx->pc = 0x80D6C564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6C564: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C568:
    ctx->pc = 0x80D6C568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C568u)) return;
    // 80D6C568: fneg    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C568u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_80D6C56C:
    ctx->pc = 0x80D6C56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C56C: lfs     f0, 20184(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C56Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20184);
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
label_80D6C570:
    ctx->pc = 0x80D6C570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C570u)) return;
    // 80D6C570: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C570u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6C574:
    ctx->pc = 0x80D6C574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C574u)) return;
    // 80D6C574: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D6C578:
    ctx->pc = 0x80D6C578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C578u)) return;
    // 80D6C578: bc    4, 2, 0x80D6C598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C598;
        }
    }

label_80D6C57C:
    ctx->pc = 0x80D6C57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6C57C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C580:
    ctx->pc = 0x80D6C580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C580: lfs     f0, 20188(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C580u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20188);
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
label_80D6C584:
    ctx->pc = 0x80D6C584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C584u)) return;
    // 80D6C584: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C584u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6C588:
    ctx->pc = 0x80D6C588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C588u)) return;
    // 80D6C588: bc    4, 0, 0x80D6C598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C598;
        }
    }

label_80D6C58C:
    ctx->pc = 0x80D6C58Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C58Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C58C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C590:
    ctx->pc = 0x80D6C590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C590: lfs     f0, 20192(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C590u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20192);
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
label_80D6C594:
    ctx->pc = 0x80D6C594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C594u)) return;
    // 80D6C594: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C594u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D6C598:
    ctx->pc = 0x80D6C598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6C598: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_80D6C59C:
    ctx->pc = 0x80D6C59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C59Cu)) return;
    // 80D6C59C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6C5A0:
    ctx->pc = 0x80D6C5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5A0u)) return;
    // 80D6C5A0: li      r5, 35
    ctx->gpr[5] = (u32)(s32)(35);

label_80D6C5A4:
    ctx->pc = 0x80D6C5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5A4u)) return;
    // 80D6C5A4: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80D6C5A8:
    ctx->pc = 0x80D6C5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5A8u)) return;
    // 80D6C5A8: bl      0x80606508
    {
            ctx->lr = 0x80D6C5ACu;
            ctx->pc = 0x80606508u;
            return;
    }

label_80D6C5AC:
    ctx->pc = 0x80D6C5ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C5ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C5AC: bl      0x80450D68
    {
            ctx->lr = 0x80D6C5B0u;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80D6C5B0:
    ctx->pc = 0x80D6C5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C5B0: bl      0x8048CE74
    {
            ctx->lr = 0x80D6C5B4u;
            ctx->pc = 0x8048CE74u;
            return;
    }

label_80D6C5B4:
    ctx->pc = 0x80D6C5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C5B4: b       0x80D6C65C
    {
            goto label_80D6C65C;
    }

label_80D6C5B8:
    ctx->pc = 0x80D6C5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D6C5B8: lwz     r5, 40(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C5BC:
    ctx->pc = 0x80D6C5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5BCu)) return;
    // 80D6C5BC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80D6C5C0:
    ctx->pc = 0x80D6C5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5C0u)) return;
    // 80D6C5C0: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C5C4:
    ctx->pc = 0x80D6C5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D6C5C4: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C5C8:
    ctx->pc = 0x80D6C5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5C8u)) return;
    // 80D6C5C8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C5CC:
    ctx->pc = 0x80D6C5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D6C5CC: stw     r5, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C5D0:
    ctx->pc = 0x80D6C5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5D0u)) return;
    // 80D6C5D0: addi    r5, r4, 20224
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20224);

label_80D6C5D4:
    ctx->pc = 0x80D6C5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80D6C5D4: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C5D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C5D8:
    ctx->pc = 0x80D6C5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5D8u)) return;
    // 80D6C5D8: addi    r4, r3, 20196
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20196);

label_80D6C5DC:
    ctx->pc = 0x80D6C5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D6C5DC: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C5DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C5E0:
    ctx->pc = 0x80D6C5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5E0u)) return;
    // 80D6C5E0: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C5E4:
    ctx->pc = 0x80D6C5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D6C5E4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C5E4u)) return;
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
label_80D6C5E8:
    ctx->pc = 0x80D6C5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5E8u)) return;
    // 80D6C5E8: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80D6C5E8u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_80D6C5EC:
    ctx->pc = 0x80D6C5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6C5EC: lfs     f0, 20116(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C5ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20116);
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
label_80D6C5F0:
    ctx->pc = 0x80D6C5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80D6C5F0u)) return;
    // 80D6C5F0: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C5F0u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_80D6C5F4:
    ctx->pc = 0x80D6C5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5F4u)) return;
    // 80D6C5F4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C5F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6C5F8:
    ctx->pc = 0x80D6C5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5F8u)) return;
    // 80D6C5F8: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D6C5FC:
    ctx->pc = 0x80D6C5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C5FCu)) return;
    // 80D6C5FC: bc    4, 2, 0x80D6C604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C604;
        }
    }

label_80D6C600:
    ctx->pc = 0x80D6C600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C600: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C600u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80D6C604:
    ctx->pc = 0x80D6C604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C604: addis   r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + ((u32)(s32)(1) << 16);

label_80D6C608:
    ctx->pc = 0x80D6C608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C608u)) return;
    // 80D6C608: cmplwi  r0, 0xFFFF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xFFFFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C60C:
    ctx->pc = 0x80D6C60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C60Cu)) return;
    // 80D6C60C: bc    4, 2, 0x80D6C624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C624;
        }
    }

label_80D6C610:
    ctx->pc = 0x80D6C610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6C610: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C614:
    ctx->pc = 0x80D6C614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C614: lfs     f0, 20120(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C614u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20120);
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
label_80D6C618:
    ctx->pc = 0x80D6C618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C618u)) return;
    // 80D6C618: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C618u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

label_80D6C61C:
    ctx->pc = 0x80D6C61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C61Cu)) return;
    // 80D6C61C: bl      0x80006CAC
    {
            ctx->lr = 0x80D6C620u;
            ctx->pc = 0x80006CACu;
            return;
    }

label_80D6C620:
    ctx->pc = 0x80D6C620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C620: b       0x80D6C644
    {
            goto label_80D6C644;
    }

label_80D6C624:
    ctx->pc = 0x80D6C624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C624: cmplwi  r6, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C628:
    ctx->pc = 0x80D6C628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C628u)) return;
    // 80D6C628: bc    4, 2, 0x80D6C640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C640;
        }
    }

label_80D6C62C:
    ctx->pc = 0x80D6C62Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C62Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6C62C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C630:
    ctx->pc = 0x80D6C630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C630: lfs     f0, 20120(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C630u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20120);
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
label_80D6C634:
    ctx->pc = 0x80D6C634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C634u)) return;
    // 80D6C634: fnmsubs f1, f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C634u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_80D6C638:
    ctx->pc = 0x80D6C638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C638u)) return;
    // 80D6C638: bl      0x80006CAC
    {
            ctx->lr = 0x80D6C63Cu;
            ctx->pc = 0x80006CACu;
            return;
    }

label_80D6C63C:
    ctx->pc = 0x80D6C63Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C63Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C63C: b       0x80D6C644
    {
            goto label_80D6C644;
    }

label_80D6C640:
    ctx->pc = 0x80D6C640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C640: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6C644:
    ctx->pc = 0x80D6C644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C644: cmplwi  r3, 0x00FF
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x00FFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C648:
    ctx->pc = 0x80D6C648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C648u)) return;
    // 80D6C648: bc    4, 1, 0x80D6C650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C650;
        }
    }

label_80D6C64C:
    ctx->pc = 0x80D6C64Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C64Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C64C: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_80D6C650:
    ctx->pc = 0x80D6C650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C650: rlwinm r0, r3, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0xFF000000u;
    }

label_80D6C654:
    ctx->pc = 0x80D6C654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C654u)) return;
    // 80D6C654: oris    r29, r0, 0x00FF
    ctx->gpr[29] = ctx->gpr[0] | (0x00FFu << 16);

label_80D6C658:
    ctx->pc = 0x80D6C658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C658u)) return;
    // 80D6C658: ori     r29, r29, 0xFFFF
    ctx->gpr[29] = ctx->gpr[29] | 0xFFFFu;

label_80D6C65C:
    ctx->pc = 0x80D6C65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C65C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D6C660:
    ctx->pc = 0x80D6C660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C660u)) return;
    // 80D6C660: bl      0x804E9BC0
    {
            ctx->lr = 0x80D6C664u;
            ctx->pc = 0x804E9BC0u;
            return;
    }

label_80D6C664:
    ctx->pc = 0x80D6C664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6C664: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C668:
    ctx->pc = 0x80D6C668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C668u)) return;
    // 80D6C668: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C66C:
    ctx->pc = 0x80D6C66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C66C: lfs     f0, 4(r26)
    if (!ppc_fp_available_inline(ctx, 0x80D6C66Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
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
label_80D6C670:
    ctx->pc = 0x80D6C670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C670: lfs     f2, 20200(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C670u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20200);
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
label_80D6C674:
    ctx->pc = 0x80D6C674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C674: lfs     f1, 20084(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C674u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20084);
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
label_80D6C678:
    ctx->pc = 0x80D6C678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C678u)) return;
    // 80D6C678: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D6C67C:
    ctx->pc = 0x80D6C67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C67Cu)) return;
    // 80D6C67C: fadds   f31, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C67Cu)) return;
    ppc_fadds(ctx, 31, 2, 0);

label_80D6C680:
    ctx->pc = 0x80D6C680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C680u)) return;
    // 80D6C680: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C680u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D6C684:
    ctx->pc = 0x80D6C684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C684u)) return;
    // 80D6C684: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C684u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C688:
    ctx->pc = 0x80D6C688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C688u)) return;
    // 80D6C688: bl      0x804E931C
    {
            ctx->lr = 0x80D6C68Cu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C68C:
    ctx->pc = 0x80D6C68Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C68Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C68C: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C690:
    ctx->pc = 0x80D6C690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C690u)) return;
    // 80D6C690: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C694:
    ctx->pc = 0x80D6C694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C694: lfs     f2, 20204(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C694u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20204);
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
label_80D6C698:
    ctx->pc = 0x80D6C698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C698u)) return;
    // 80D6C698: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C698u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C69C:
    ctx->pc = 0x80D6C69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C69C: lfs     f1, 20084(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C69Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20084);
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
label_80D6C6A0:
    ctx->pc = 0x80D6C6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6A0u)) return;
    // 80D6C6A0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80D6C6A4:
    ctx->pc = 0x80D6C6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6A4u)) return;
    // 80D6C6A4: bl      0x804E931C
    {
            ctx->lr = 0x80D6C6A8u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C6A8:
    ctx->pc = 0x80D6C6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C6A8: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C6AC:
    ctx->pc = 0x80D6C6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6ACu)) return;
    // 80D6C6AC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C6B0:
    ctx->pc = 0x80D6C6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C6B0: lfs     f2, 20084(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C6B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20084);
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
label_80D6C6B4:
    ctx->pc = 0x80D6C6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6B4u)) return;
    // 80D6C6B4: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C6B4u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C6B8:
    ctx->pc = 0x80D6C6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C6B8: lfs     f1, 20204(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C6B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20204);
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
label_80D6C6BC:
    ctx->pc = 0x80D6C6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6BCu)) return;
    // 80D6C6BC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80D6C6C0:
    ctx->pc = 0x80D6C6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6C0u)) return;
    // 80D6C6C0: bl      0x804E931C
    {
            ctx->lr = 0x80D6C6C4u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C6C4:
    ctx->pc = 0x80D6C6C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C6C4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C6C8:
    ctx->pc = 0x80D6C6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6C8u)) return;
    // 80D6C6C8: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C6C8u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C6CC:
    ctx->pc = 0x80D6C6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6CCu)) return;
    // 80D6C6CC: addi    r4, r3, 20204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20204);

label_80D6C6D0:
    ctx->pc = 0x80D6C6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6D0u)) return;
    // 80D6C6D0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80D6C6D4:
    ctx->pc = 0x80D6C6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C6D4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C6D4u)) return;
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
label_80D6C6D8:
    ctx->pc = 0x80D6C6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6D8u)) return;
    // 80D6C6D8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6C6D8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D6C6DC:
    ctx->pc = 0x80D6C6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6DCu)) return;
    // 80D6C6DC: bl      0x804E931C
    {
            ctx->lr = 0x80D6C6E0u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C6E0:
    ctx->pc = 0x80D6C6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C6E0: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C6E4:
    ctx->pc = 0x80D6C6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6E4u)) return;
    // 80D6C6E4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C6E8:
    ctx->pc = 0x80D6C6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C6E8: lfs     f2, 20084(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C6E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20084);
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
label_80D6C6EC:
    ctx->pc = 0x80D6C6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6ECu)) return;
    // 80D6C6EC: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C6ECu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C6F0:
    ctx->pc = 0x80D6C6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C6F0: lfs     f1, 20208(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C6F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20208);
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
label_80D6C6F4:
    ctx->pc = 0x80D6C6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6F4u)) return;
    // 80D6C6F4: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80D6C6F8:
    ctx->pc = 0x80D6C6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C6F8u)) return;
    // 80D6C6F8: bl      0x804E931C
    {
            ctx->lr = 0x80D6C6FCu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C6FC:
    ctx->pc = 0x80D6C6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C6FC: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C700:
    ctx->pc = 0x80D6C700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C700u)) return;
    // 80D6C700: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C704:
    ctx->pc = 0x80D6C704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C704: lfs     f2, 20212(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C704u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20212);
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
label_80D6C708:
    ctx->pc = 0x80D6C708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C708u)) return;
    // 80D6C708: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C708u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C70C:
    ctx->pc = 0x80D6C70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C70C: lfs     f1, 20208(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C70Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20208);
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
label_80D6C710:
    ctx->pc = 0x80D6C710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C710u)) return;
    // 80D6C710: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D6C714:
    ctx->pc = 0x80D6C714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C714u)) return;
    // 80D6C714: bl      0x804E931C
    {
            ctx->lr = 0x80D6C718u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C718:
    ctx->pc = 0x80D6C718u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C718u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C718: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C71C:
    ctx->pc = 0x80D6C71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C71Cu)) return;
    // 80D6C71C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C720:
    ctx->pc = 0x80D6C720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C720: lfs     f2, 20204(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C720u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20204);
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
label_80D6C724:
    ctx->pc = 0x80D6C724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C724u)) return;
    // 80D6C724: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C724u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C728:
    ctx->pc = 0x80D6C728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C728: lfs     f1, 20208(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C728u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20208);
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
label_80D6C72C:
    ctx->pc = 0x80D6C72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C72Cu)) return;
    // 80D6C72C: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_80D6C730:
    ctx->pc = 0x80D6C730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C730u)) return;
    // 80D6C730: bl      0x804E931C
    {
            ctx->lr = 0x80D6C734u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C734:
    ctx->pc = 0x80D6C734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6C734: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C738:
    ctx->pc = 0x80D6C738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C738u)) return;
    // 80D6C738: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C73C:
    ctx->pc = 0x80D6C73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C73C: lfs     f2, 20216(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C73Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20216);
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
label_80D6C740:
    ctx->pc = 0x80D6C740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C740u)) return;
    // 80D6C740: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6C740u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6C744:
    ctx->pc = 0x80D6C744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C744: lfs     f1, 20208(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C744u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20208);
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
label_80D6C748:
    ctx->pc = 0x80D6C748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C748u)) return;
    // 80D6C748: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80D6C74C:
    ctx->pc = 0x80D6C74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C74Cu)) return;
    // 80D6C74C: bl      0x804E931C
    {
            ctx->lr = 0x80D6C750u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C750:
    ctx->pc = 0x80D6C750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D6C750: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D6C750u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C754:
    ctx->pc = 0x80D6C754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6C754: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C754u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C758:
    ctx->pc = 0x80D6C758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D6C758: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D6C758u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C75C:
    ctx->pc = 0x80D6C75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6C75C: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C75Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C760:
    ctx->pc = 0x80D6C760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D6C760: psq_l   f29, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6C760u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D6C760u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C764:
    ctx->pc = 0x80D6C764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6C764: lfd     f29, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6C764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C768:
    ctx->pc = 0x80D6C768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80D6C768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C768: lmw     r26, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C76C:
    ctx->pc = 0x80D6C76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C76Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C76C: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C770:
    ctx->pc = 0x80D6C770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6C770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C770: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C774:
    ctx->pc = 0x80D6C774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C774u)) return;
    // 80D6C774: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_80D6C778:
    ctx->pc = 0x80D6C778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C778u)) return;
    // 80D6C778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6C77C:
    ctx->pc = 0x80D6C77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C77C: stwu     r1, -16(r1)
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
label_80D6C780:
    ctx->pc = 0x80D6C780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C780: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C784:
    ctx->pc = 0x80D6C784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C784: stw     r0, 20(r1)
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
label_80D6C788:
    ctx->pc = 0x80D6C788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C788: stw     r31, 12(r1)
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
label_80D6C78C:
    ctx->pc = 0x80D6C78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C78Cu)) return;
    // 80D6C78C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6C790:
    ctx->pc = 0x80D6C790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C790u)) return;
    // 80D6C790: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80D6C794:
    ctx->pc = 0x80D6C794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C794u)) return;
    // 80D6C794: bl      0x804E9BC0
    {
            ctx->lr = 0x80D6C798u;
            ctx->pc = 0x804E9BC0u;
            return;
    }

label_80D6C798:
    ctx->pc = 0x80D6C798u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C798u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C798: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C79C:
    ctx->pc = 0x80D6C79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C79Cu)) return;
    // 80D6C79C: addi    r3, r3, 30864
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30864);

label_80D6C7A0:
    ctx->pc = 0x80D6C7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7A0u)) return;
    // 80D6C7A0: bl      0x8060F594
    {
            ctx->lr = 0x80D6C7A4u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D6C7A4:
    ctx->pc = 0x80D6C7A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C7A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6C7A4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C7A8:
    ctx->pc = 0x80D6C7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7A8u)) return;
    // 80D6C7A8: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C7AC:
    ctx->pc = 0x80D6C7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C7AC: lfs     f2, 20100(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20100);
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
label_80D6C7B0:
    ctx->pc = 0x80D6C7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7B0u)) return;
    // 80D6C7B0: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C7B4:
    ctx->pc = 0x80D6C7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C7B4: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7B4u)) return;
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
label_80D6C7B8:
    ctx->pc = 0x80D6C7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7B8u)) return;
    // 80D6C7B8: li      r3, 22
    ctx->gpr[3] = (u32)(s32)(22);

label_80D6C7BC:
    ctx->pc = 0x80D6C7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C7BC: lfs     f1, 20092(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20092);
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
label_80D6C7C0:
    ctx->pc = 0x80D6C7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7C0u)) return;
    // 80D6C7C0: fadds   f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C7C0u)) return;
    ppc_fadds(ctx, 3, 2, 0);

label_80D6C7C4:
    ctx->pc = 0x80D6C7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C7C4: lfs     f2, 20096(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20096);
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
label_80D6C7C8:
    ctx->pc = 0x80D6C7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7C8u)) return;
    // 80D6C7C8: bl      0x804E931C
    {
            ctx->lr = 0x80D6C7CCu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6C7CC:
    ctx->pc = 0x80D6C7CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C7CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D6C7CC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C7D0:
    ctx->pc = 0x80D6C7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7D0u)) return;
    // 80D6C7D0: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6C7D4:
    ctx->pc = 0x80D6C7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C7D4: lfs     f1, 20104(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20104);
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
label_80D6C7D8:
    ctx->pc = 0x80D6C7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7D8u)) return;
    // 80D6C7D8: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C7DC:
    ctx->pc = 0x80D6C7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C7DC: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7DCu)) return;
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
label_80D6C7E0:
    ctx->pc = 0x80D6C7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7E0u)) return;
    // 80D6C7E0: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C7E4:
    ctx->pc = 0x80D6C7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7E4u)) return;
    // 80D6C7E4: lis     r6, -27312
    ctx->gpr[6] = ((u32)(s32)(-27312) << 16);

label_80D6C7E8:
    ctx->pc = 0x80D6C7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C7E8: lfs     f2, 20092(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20092);
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
label_80D6C7EC:
    ctx->pc = 0x80D6C7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7ECu)) return;
    // 80D6C7EC: fadds   f3, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6C7ECu)) return;
    ppc_fadds(ctx, 3, 1, 0);

label_80D6C7F0:
    ctx->pc = 0x80D6C7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C7F0: lfs     f1, 20084(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7F0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20084);
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
label_80D6C7F4:
    ctx->pc = 0x80D6C7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C7F4: lfs     f4, 20108(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20108);
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
label_80D6C7F8:
    ctx->pc = 0x80D6C7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C7F8: lfs     f5, 20096(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6C7F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20096);
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
label_80D6C7FC:
    ctx->pc = 0x80D6C7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C7FCu)) return;
    // 80D6C7FC: bl      0x804E7324
    {
            ctx->lr = 0x80D6C800u;
            ctx->pc = 0x804E7324u;
            return;
    }

label_80D6C800:
    ctx->pc = 0x80D6C800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C800: lwz     r0, 20(r1)
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
label_80D6C804:
    ctx->pc = 0x80D6C804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C804: lwz     r31, 12(r1)
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
label_80D6C808:
    ctx->pc = 0x80D6C808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6C808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C808: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C80C:
    ctx->pc = 0x80D6C80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C80Cu)) return;
    // 80D6C80C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6C810:
    ctx->pc = 0x80D6C810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C810u)) return;
    // 80D6C810: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6C814:
    ctx->pc = 0x80D6C814u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C814u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C814: stwu     r1, -32(r1)
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
label_80D6C818:
    ctx->pc = 0x80D6C818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C818: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C81C:
    ctx->pc = 0x80D6C81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C81Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C81C: stw     r0, 36(r1)
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
label_80D6C820:
    ctx->pc = 0x80D6C820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6C820: stw     r31, 28(r1)
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
label_80D6C824:
    ctx->pc = 0x80D6C824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6C824: stw     r30, 24(r1)
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
label_80D6C828:
    ctx->pc = 0x80D6C828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C828u)) return;
    // 80D6C828: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6C82C:
    ctx->pc = 0x80D6C82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C82Cu)) return;
    // 80D6C82C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C830:
    ctx->pc = 0x80D6C830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C830: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C834:
    ctx->pc = 0x80D6C834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C834u)) return;
    // 80D6C834: addi    r31, r3, 30088
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(30088);

label_80D6C838:
    ctx->pc = 0x80D6C838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C838u)) return;
    // 80D6C838: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C83C:
    ctx->pc = 0x80D6C83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C83Cu)) return;
    // 80D6C83C: bc    12, 2, 0x80D6C9D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C9D0;
        }
    }

label_80D6C840:
    ctx->pc = 0x80D6C840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C840: bc    4, 0, 0x80D6C85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C85C;
        }
    }

label_80D6C844:
    ctx->pc = 0x80D6C844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C844: cmpwi   r0, 1
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

label_80D6C848:
    ctx->pc = 0x80D6C848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C848u)) return;
    // 80D6C848: bc    12, 2, 0x80D6C89C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C89C;
        }
    }

label_80D6C84C:
    ctx->pc = 0x80D6C84Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C84Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C84C: bc    4, 0, 0x80D6CB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB9C;
        }
    }

label_80D6C850:
    ctx->pc = 0x80D6C850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C850: cmpwi   r0, 0
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

label_80D6C854:
    ctx->pc = 0x80D6C854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C854u)) return;
    // 80D6C854: bc    4, 0, 0x80D6C86C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C86C;
        }
    }

label_80D6C858:
    ctx->pc = 0x80D6C858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C858: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C85C:
    ctx->pc = 0x80D6C85Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C85Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C85C: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C860:
    ctx->pc = 0x80D6C860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C860u)) return;
    // 80D6C860: bc    12, 2, 0x80D6CB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB9C;
        }
    }

label_80D6C864:
    ctx->pc = 0x80D6C864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C864: bc    4, 0, 0x80D6CB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB9C;
        }
    }

label_80D6C868:
    ctx->pc = 0x80D6C868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C868: b       0x80D6CA8C
    {
            goto label_80D6CA8C;
    }

label_80D6C86C:
    ctx->pc = 0x80D6C86Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C86Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D6C86C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6C870:
    ctx->pc = 0x80D6C870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C870u)) return;
    // 80D6C870: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C874:
    ctx->pc = 0x80D6C874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6C874: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C878:
    ctx->pc = 0x80D6C878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C878u)) return;
    // 80D6C878: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C87C:
    ctx->pc = 0x80D6C87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C87Cu)) return;
    // 80D6C87C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6C880:
    ctx->pc = 0x80D6C880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C880u)) return;
    // 80D6C880: addi    r3, r3, 20020
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20020);

label_80D6C884:
    ctx->pc = 0x80D6C884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C884: stw     r0, 31216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C888:
    ctx->pc = 0x80D6C888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C888u)) return;
    // 80D6C888: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D6C88C:
    ctx->pc = 0x80D6C88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C88C: lbz     r0, 33(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(33);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C890:
    ctx->pc = 0x80D6C890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C890u)) return;
    // 80D6C890: extsb r4, r0
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D6C894:
    ctx->pc = 0x80D6C894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C894u)) return;
    // 80D6C894: bl      0x80444AA8
    {
            ctx->lr = 0x80D6C898u;
            ctx->pc = 0x80444AA8u;
            return;
    }

label_80D6C898:
    ctx->pc = 0x80D6C898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C898: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C89C:
    ctx->pc = 0x80D6C89Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C89Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C89C: bl      0x80444734
    {
            ctx->lr = 0x80D6C8A0u;
            ctx->pc = 0x80444734u;
            return;
    }

label_80D6C8A0:
    ctx->pc = 0x80D6C8A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C8A0: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80D6C8A4:
    ctx->pc = 0x80D6C8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8A4u)) return;
    // 80D6C8A4: bc    12, 0, 0x80D6C964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C964;
        }
    }

label_80D6C8A8:
    ctx->pc = 0x80D6C8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6C8A8: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80D6C8AC:
    ctx->pc = 0x80D6C8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C8AC: stb     r3, 33(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C8B0:
    ctx->pc = 0x80D6C8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8B0u)) return;
    // 80D6C8B0: cmpwi   r0, 1
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

label_80D6C8B4:
    ctx->pc = 0x80D6C8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8B4u)) return;
    // 80D6C8B4: bc    12, 2, 0x80D6C8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6C8F8;
        }
    }

label_80D6C8B8:
    ctx->pc = 0x80D6C8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C8B8: bc    4, 0, 0x80D6C8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C8C8;
        }
    }

label_80D6C8BC:
    ctx->pc = 0x80D6C8BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C8BC: cmpwi   r0, 0
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

label_80D6C8C0:
    ctx->pc = 0x80D6C8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8C0u)) return;
    // 80D6C8C0: bc    4, 0, 0x80D6C8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C8D4;
        }
    }

label_80D6C8C4:
    ctx->pc = 0x80D6C8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C8C4: b       0x80D6C928
    {
            goto label_80D6C928;
    }

label_80D6C8C8:
    ctx->pc = 0x80D6C8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6C8C8: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C8CC:
    ctx->pc = 0x80D6C8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8CCu)) return;
    // 80D6C8CC: bc    4, 0, 0x80D6C928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6C928;
        }
    }

label_80D6C8D0:
    ctx->pc = 0x80D6C8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6C8D0: b       0x80D6C91C
    {
            goto label_80D6C91C;
    }

label_80D6C8D4:
    ctx->pc = 0x80D6C8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D6C8D4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C8D8:
    ctx->pc = 0x80D6C8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8D8u)) return;
    // 80D6C8D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6C8DC:
    ctx->pc = 0x80D6C8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8DCu)) return;
    // 80D6C8DC: addi    r4, r3, 31212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31212);

label_80D6C8E0:
    ctx->pc = 0x80D6C8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8E0u)) return;
    // 80D6C8E0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6C8E4:
    ctx->pc = 0x80D6C8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C8E4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C8E8:
    ctx->pc = 0x80D6C8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8E8u)) return;
    // 80D6C8E8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80D6C8EC:
    ctx->pc = 0x80D6C8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C8EC: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C8F0:
    ctx->pc = 0x80D6C8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C8F0: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C8F4:
    ctx->pc = 0x80D6C8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8F4u)) return;
    // 80D6C8F4: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C8F8:
    ctx->pc = 0x80D6C8F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C8F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D6C8F8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C8FC:
    ctx->pc = 0x80D6C8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C8FCu)) return;
    // 80D6C8FC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80D6C900:
    ctx->pc = 0x80D6C900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C900u)) return;
    // 80D6C900: addi    r4, r3, 31212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31212);

label_80D6C904:
    ctx->pc = 0x80D6C904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C904u)) return;
    // 80D6C904: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6C908:
    ctx->pc = 0x80D6C908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C908: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C90C:
    ctx->pc = 0x80D6C90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C90Cu)) return;
    // 80D6C90C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80D6C910:
    ctx->pc = 0x80D6C910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C910: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C914:
    ctx->pc = 0x80D6C914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C914u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C914: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C918:
    ctx->pc = 0x80D6C918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C918u)) return;
    // 80D6C918: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C91C:
    ctx->pc = 0x80D6C91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C91C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_80D6C920:
    ctx->pc = 0x80D6C920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C920: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C924:
    ctx->pc = 0x80D6C924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C924u)) return;
    // 80D6C924: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C928:
    ctx->pc = 0x80D6C928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80D6C928: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6C92C:
    ctx->pc = 0x80D6C92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C92Cu)) return;
    // 80D6C92C: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6C930:
    ctx->pc = 0x80D6C930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C930u)) return;
    // 80D6C930: addi    r5, r3, -5400
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5400);

label_80D6C934:
    ctx->pc = 0x80D6C934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C934u)) return;
    // 80D6C934: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80D6C938:
    ctx->pc = 0x80D6C938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6C938: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C93C:
    ctx->pc = 0x80D6C93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C93Cu)) return;
    // 80D6C93C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6C940:
    ctx->pc = 0x80D6C940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C940u)) return;
    // 80D6C940: addi    r6, r5, -1
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D6C944:
    ctx->pc = 0x80D6C944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C944u)) return;
    // 80D6C944: subfic  r5, r5, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80D6C948:
    ctx->pc = 0x80D6C948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C948u)) return;
    // 80D6C948: nor   r5, r6, r5
    {
        ctx->gpr[5] = ~(ctx->gpr[6] | ctx->gpr[5]);
    }

label_80D6C94C:
    ctx->pc = 0x80D6C94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C94Cu)) return;
    // 80D6C94C: srawi r5, r5, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[5];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80D6C950:
    ctx->pc = 0x80D6C950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C950u)) return;
    // 80D6C950: addi    r5, r5, 2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2);

label_80D6C954:
    ctx->pc = 0x80D6C954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6C954: stw     r5, 31212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(31212);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C958:
    ctx->pc = 0x80D6C958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C958: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C95C:
    ctx->pc = 0x80D6C95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C95Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C95C: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C960:
    ctx->pc = 0x80D6C960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C960u)) return;
    // 80D6C960: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C964:
    ctx->pc = 0x80D6C964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80D6C964: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6C968:
    ctx->pc = 0x80D6C968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C968u)) return;
    // 80D6C968: lis     r5, 3
    ctx->gpr[5] = ((u32)(s32)(3) << 16);

label_80D6C96C:
    ctx->pc = 0x80D6C96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C96Cu)) return;
    // 80D6C96C: addi    r4, r3, 4048
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4048);

label_80D6C970:
    ctx->pc = 0x80D6C970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C970u)) return;
    // 80D6C970: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C974:
    ctx->pc = 0x80D6C974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D6C974: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C978:
    ctx->pc = 0x80D6C978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C978u)) return;
    // 80D6C978: addi    r4, r3, 31216
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31216);

label_80D6C97C:
    ctx->pc = 0x80D6C97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6C97C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C980:
    ctx->pc = 0x80D6C980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C980u)) return;
    // 80D6C980: addi    r5, r5, 1790
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1790);

label_80D6C984:
    ctx->pc = 0x80D6C984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6C984: lwz     r6, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C988:
    ctx->pc = 0x80D6C988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C988u)) return;
    // 80D6C988: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D6C98C:
    ctx->pc = 0x80D6C98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C98Cu)) return;
    // 80D6C98C: and   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[5];
    }

label_80D6C990:
    ctx->pc = 0x80D6C990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C990u)) return;
    // 80D6C990: neg  r3, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80D6C994:
    ctx->pc = 0x80D6C994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C994u)) return;
    // 80D6C994: or   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[5];
    }

label_80D6C998:
    ctx->pc = 0x80D6C998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C998u)) return;
    // 80D6C998: srawi r3, r3, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[3] = value;
        } else if (sh > 31) {
            ctx->gpr[3] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[3] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80D6C99C:
    ctx->pc = 0x80D6C99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C99Cu)) return;
    // 80D6C99C: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_80D6C9A0:
    ctx->pc = 0x80D6C9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9A0u)) return;
    // 80D6C9A0: cmpwi   r0, 1500
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1500);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6C9A4:
    ctx->pc = 0x80D6C9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C9A4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9A8:
    ctx->pc = 0x80D6C9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9A8u)) return;
    // 80D6C9A8: bc    4, 1, 0x80D6CB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB9C;
        }
    }

label_80D6C9AC:
    ctx->pc = 0x80D6C9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D6C9AC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6C9B0:
    ctx->pc = 0x80D6C9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9B0u)) return;
    // 80D6C9B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6C9B4:
    ctx->pc = 0x80D6C9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9B4u)) return;
    // 80D6C9B4: addi    r4, r3, 31212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(31212);

label_80D6C9B8:
    ctx->pc = 0x80D6C9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9B8u)) return;
    // 80D6C9B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80D6C9BC:
    ctx->pc = 0x80D6C9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6C9BC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9C0:
    ctx->pc = 0x80D6C9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9C0u)) return;
    // 80D6C9C0: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80D6C9C4:
    ctx->pc = 0x80D6C9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C9C4: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9C8:
    ctx->pc = 0x80D6C9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C9C8: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9CC:
    ctx->pc = 0x80D6C9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9CCu)) return;
    // 80D6C9CC: b       0x80D6CB9C
    {
            goto label_80D6CB9C;
    }

label_80D6C9D0:
    ctx->pc = 0x80D6C9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6C9D0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80D6C9D4:
    ctx->pc = 0x80D6C9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9D4u)) return;
    // 80D6C9D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6C9D8:
    ctx->pc = 0x80D6C9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6C9D8: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9DC:
    ctx->pc = 0x80D6C9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9DCu)) return;
    // 80D6C9DC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80D6C9E0:
    ctx->pc = 0x80D6C9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9E0u)) return;
    // 80D6C9E0: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6C9E4:
    ctx->pc = 0x80D6C9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6C9E4: stw     r4, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9E8:
    ctx->pc = 0x80D6C9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6C9E8: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6C9EC:
    ctx->pc = 0x80D6C9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9ECu)) return;
    // 80D6C9EC: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6C9F0u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6C9F0:
    ctx->pc = 0x80D6C9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C9F0: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6C9F4:
    ctx->pc = 0x80D6C9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9F4u)) return;
    // 80D6C9F4: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6C9F8:
    ctx->pc = 0x80D6C9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6C9F8u)) return;
    // 80D6C9F8: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6C9FCu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6C9FC:
    ctx->pc = 0x80D6C9FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6C9FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6C9FC: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6CA00:
    ctx->pc = 0x80D6CA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA00u)) return;
    // 80D6CA00: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6CA04:
    ctx->pc = 0x80D6CA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA04u)) return;
    // 80D6CA04: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6CA08u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6CA08:
    ctx->pc = 0x80D6CA08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CA08: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6CA0C:
    ctx->pc = 0x80D6CA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA0Cu)) return;
    // 80D6CA0C: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6CA10u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6CA10:
    ctx->pc = 0x80D6CA10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CA10: bl      0x8047AB04
    {
            ctx->lr = 0x80D6CA14u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6CA14:
    ctx->pc = 0x80D6CA14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CA14: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6CA18u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6CA18:
    ctx->pc = 0x80D6CA18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CA18: bl      0x800499A8
    {
            ctx->lr = 0x80D6CA1Cu;
            ctx->pc = 0x800499A8u;
            return;
    }

label_80D6CA1C:
    ctx->pc = 0x80D6CA1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CA1C: bl      0x8047AB04
    {
            ctx->lr = 0x80D6CA20u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6CA20:
    ctx->pc = 0x80D6CA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CA20: bl      0x805F4668
    {
            ctx->lr = 0x80D6CA24u;
            ctx->pc = 0x805F4668u;
            return;
    }

label_80D6CA24:
    ctx->pc = 0x80D6CA24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CA24: bl      0x805F454C
    {
            ctx->lr = 0x80D6CA28u;
            ctx->pc = 0x805F454Cu;
            return;
    }

label_80D6CA28:
    ctx->pc = 0x80D6CA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CA28: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6CA2C:
    ctx->pc = 0x80D6CA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA2Cu)) return;
    // 80D6CA2C: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6CA30:
    ctx->pc = 0x80D6CA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA30u)) return;
    // 80D6CA30: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6CA34:
    ctx->pc = 0x80D6CA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA34u)) return;
    // 80D6CA34: bl      0x8060F71C
    {
            ctx->lr = 0x80D6CA38u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6CA38:
    ctx->pc = 0x80D6CA38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6CA38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6CA3C:
    ctx->pc = 0x80D6CA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA3Cu)) return;
    // 80D6CA3C: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80D6CA40:
    ctx->pc = 0x80D6CA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CA40: stb     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CA44:
    ctx->pc = 0x80D6CA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CA44: stb     r0, 13(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CA48:
    ctx->pc = 0x80D6CA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CA48: stb     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CA4C:
    ctx->pc = 0x80D6CA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CA4C: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CA50:
    ctx->pc = 0x80D6CA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA50u)) return;
    // 80D6CA50: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6CA54u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6CA54:
    ctx->pc = 0x80D6CA54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CA54: addi    r3, r31, 1032
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1032);

label_80D6CA58:
    ctx->pc = 0x80D6CA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA58u)) return;
    // 80D6CA58: addi    r4, r31, 776
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6CA5C:
    ctx->pc = 0x80D6CA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA5Cu)) return;
    // 80D6CA5C: bl      0x8051028C
    {
            ctx->lr = 0x80D6CA60u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CA60:
    ctx->pc = 0x80D6CA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CA60: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6CA64:
    ctx->pc = 0x80D6CA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA64u)) return;
    // 80D6CA64: addi    r3, r31, 1044
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1044);

label_80D6CA68:
    ctx->pc = 0x80D6CA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA68u)) return;
    // 80D6CA68: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6CA6C:
    ctx->pc = 0x80D6CA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA6Cu)) return;
    // 80D6CA6C: bl      0x8051028C
    {
            ctx->lr = 0x80D6CA70u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CA70:
    ctx->pc = 0x80D6CA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CA70: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6CA74:
    ctx->pc = 0x80D6CA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA74u)) return;
    // 80D6CA74: addi    r3, r31, 1056
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1056);

label_80D6CA78:
    ctx->pc = 0x80D6CA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA78u)) return;
    // 80D6CA78: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6CA7C:
    ctx->pc = 0x80D6CA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA7Cu)) return;
    // 80D6CA7C: bl      0x8051028C
    {
            ctx->lr = 0x80D6CA80u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CA80:
    ctx->pc = 0x80D6CA80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CA80: addi    r3, r31, 1064
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1064);

label_80D6CA84:
    ctx->pc = 0x80D6CA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA84u)) return;
    // 80D6CA84: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6CA88:
    ctx->pc = 0x80D6CA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA88u)) return;
    // 80D6CA88: bl      0x8051028C
    {
            ctx->lr = 0x80D6CA8Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CA8C:
    ctx->pc = 0x80D6CA8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CA8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CA8C: lwz     r3, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CA90:
    ctx->pc = 0x80D6CA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA90u)) return;
    // 80D6CA90: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D6CA94:
    ctx->pc = 0x80D6CA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA94u)) return;
    // 80D6CA94: cmplwi  r3, 0x003C
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x003Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6CA98:
    ctx->pc = 0x80D6CA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CA98: stw     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CA9C:
    ctx->pc = 0x80D6CA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CA9Cu)) return;
    // 80D6CA9C: bc    4, 1, 0x80D6CB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB9C;
        }
    }

label_80D6CAA0:
    ctx->pc = 0x80D6CAA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CAA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D6CAA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6CAA4:
    ctx->pc = 0x80D6CAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CAA4: stw     r4, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CAA8:
    ctx->pc = 0x80D6CAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CAA8: lwz     r3, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CAAC:
    ctx->pc = 0x80D6CAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAACu)) return;
    // 80D6CAAC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D6CAB0:
    ctx->pc = 0x80D6CAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CAB0: stw     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CAB4:
    ctx->pc = 0x80D6CAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CAB4: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CAB8:
    ctx->pc = 0x80D6CAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAB8u)) return;
    // 80D6CAB8: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6CABC:
    ctx->pc = 0x80D6CABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CABCu)) return;
    // 80D6CABC: bc    12, 0, 0x80D6CB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB9C;
        }
    }

label_80D6CAC0:
    ctx->pc = 0x80D6CAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80D6CAC0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6CAC4:
    ctx->pc = 0x80D6CAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6CAC4: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CAC8:
    ctx->pc = 0x80D6CAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAC8u)) return;
    // 80D6CAC8: addi    r4, r3, -5400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5400);

label_80D6CACC:
    ctx->pc = 0x80D6CACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CACCu)) return;
    // 80D6CACC: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6CAD0:
    ctx->pc = 0x80D6CAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CAD0: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CAD4:
    ctx->pc = 0x80D6CAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAD4u)) return;
    // 80D6CAD4: addi    r4, r5, -1
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D6CAD8:
    ctx->pc = 0x80D6CAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAD8u)) return;
    // 80D6CAD8: subfic  r0, r5, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80D6CADC:
    ctx->pc = 0x80D6CADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CADCu)) return;
    // 80D6CADC: nor   r0, r4, r0
    {
        ctx->gpr[0] = ~(ctx->gpr[4] | ctx->gpr[0]);
    }

label_80D6CAE0:
    ctx->pc = 0x80D6CAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAE0u)) return;
    // 80D6CAE0: srawi r4, r0, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[4] = value;
        } else if (sh > 31) {
            ctx->gpr[4] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[4] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80D6CAE4:
    ctx->pc = 0x80D6CAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAE4u)) return;
    // 80D6CAE4: addi    r30, r4, 2
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(2);

label_80D6CAE8:
    ctx->pc = 0x80D6CAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAE8u)) return;
    // 80D6CAE8: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6CAECu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6CAEC:
    ctx->pc = 0x80D6CAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CAEC: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6CAF0:
    ctx->pc = 0x80D6CAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAF0u)) return;
    // 80D6CAF0: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6CAF4:
    ctx->pc = 0x80D6CAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAF4u)) return;
    // 80D6CAF4: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6CAF8u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6CAF8:
    ctx->pc = 0x80D6CAF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CAF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CAF8: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6CAFC:
    ctx->pc = 0x80D6CAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CAFCu)) return;
    // 80D6CAFC: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6CB00:
    ctx->pc = 0x80D6CB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB00u)) return;
    // 80D6CB00: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6CB04u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6CB04:
    ctx->pc = 0x80D6CB04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CB04: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6CB08:
    ctx->pc = 0x80D6CB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB08u)) return;
    // 80D6CB08: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6CB0Cu;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6CB0C:
    ctx->pc = 0x80D6CB0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CB0C: cmpwi   r30, 3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6CB10:
    ctx->pc = 0x80D6CB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB10u)) return;
    // 80D6CB10: bc    4, 0, 0x80D6CB64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB64;
        }
    }

label_80D6CB14:
    ctx->pc = 0x80D6CB14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CB14: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6CB18:
    ctx->pc = 0x80D6CB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB18u)) return;
    // 80D6CB18: bc    4, 0, 0x80D6CB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CB20;
        }
    }

label_80D6CB1C:
    ctx->pc = 0x80D6CB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB1C: b       0x80D6CB64
    {
            goto label_80D6CB64;
    }

label_80D6CB20:
    ctx->pc = 0x80D6CB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB20: bl      0x8047AB04
    {
            ctx->lr = 0x80D6CB24u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6CB24:
    ctx->pc = 0x80D6CB24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB24: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6CB28u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6CB28:
    ctx->pc = 0x80D6CB28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB28: bl      0x800499A8
    {
            ctx->lr = 0x80D6CB2Cu;
            ctx->pc = 0x800499A8u;
            return;
    }

label_80D6CB2C:
    ctx->pc = 0x80D6CB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB2C: bl      0x8047AB04
    {
            ctx->lr = 0x80D6CB30u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6CB30:
    ctx->pc = 0x80D6CB30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB30: bl      0x805F4668
    {
            ctx->lr = 0x80D6CB34u;
            ctx->pc = 0x805F4668u;
            return;
    }

label_80D6CB34:
    ctx->pc = 0x80D6CB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CB34: bl      0x805F454C
    {
            ctx->lr = 0x80D6CB38u;
            ctx->pc = 0x805F454Cu;
            return;
    }

label_80D6CB38:
    ctx->pc = 0x80D6CB38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CB38: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6CB3C:
    ctx->pc = 0x80D6CB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB3Cu)) return;
    // 80D6CB3C: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6CB40:
    ctx->pc = 0x80D6CB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB40u)) return;
    // 80D6CB40: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6CB44:
    ctx->pc = 0x80D6CB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB44u)) return;
    // 80D6CB44: bl      0x8060F71C
    {
            ctx->lr = 0x80D6CB48u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6CB48:
    ctx->pc = 0x80D6CB48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6CB48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6CB4C:
    ctx->pc = 0x80D6CB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB4Cu)) return;
    // 80D6CB4C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6CB50:
    ctx->pc = 0x80D6CB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CB50: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CB54:
    ctx->pc = 0x80D6CB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CB54: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CB58:
    ctx->pc = 0x80D6CB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CB58: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CB5C:
    ctx->pc = 0x80D6CB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CB5C: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CB60:
    ctx->pc = 0x80D6CB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB60u)) return;
    // 80D6CB60: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6CB64u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6CB64:
    ctx->pc = 0x80D6CB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CB64: addi    r3, r31, 1032
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1032);

label_80D6CB68:
    ctx->pc = 0x80D6CB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB68u)) return;
    // 80D6CB68: addi    r4, r31, 776
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6CB6C:
    ctx->pc = 0x80D6CB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB6Cu)) return;
    // 80D6CB6C: bl      0x8051028C
    {
            ctx->lr = 0x80D6CB70u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CB70:
    ctx->pc = 0x80D6CB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CB70: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6CB74:
    ctx->pc = 0x80D6CB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB74u)) return;
    // 80D6CB74: addi    r3, r31, 1044
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1044);

label_80D6CB78:
    ctx->pc = 0x80D6CB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB78u)) return;
    // 80D6CB78: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6CB7C:
    ctx->pc = 0x80D6CB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB7Cu)) return;
    // 80D6CB7C: bl      0x8051028C
    {
            ctx->lr = 0x80D6CB80u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CB80:
    ctx->pc = 0x80D6CB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CB80: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6CB84:
    ctx->pc = 0x80D6CB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB84u)) return;
    // 80D6CB84: addi    r3, r31, 1056
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1056);

label_80D6CB88:
    ctx->pc = 0x80D6CB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB88u)) return;
    // 80D6CB88: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6CB8C:
    ctx->pc = 0x80D6CB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB8Cu)) return;
    // 80D6CB8C: bl      0x8051028C
    {
            ctx->lr = 0x80D6CB90u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CB90:
    ctx->pc = 0x80D6CB90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CB90: addi    r3, r31, 1064
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1064);

label_80D6CB94:
    ctx->pc = 0x80D6CB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB94u)) return;
    // 80D6CB94: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6CB98:
    ctx->pc = 0x80D6CB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CB98u)) return;
    // 80D6CB98: bl      0x8051028C
    {
            ctx->lr = 0x80D6CB9Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6CB9C:
    ctx->pc = 0x80D6CB9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CB9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CB9C: lwz     r0, 36(r1)
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
label_80D6CBA0:
    ctx->pc = 0x80D6CBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CBA0: lwz     r31, 28(r1)
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
label_80D6CBA4:
    ctx->pc = 0x80D6CBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CBA4: lwz     r30, 24(r1)
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
label_80D6CBA8:
    ctx->pc = 0x80D6CBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6CBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CBA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CBAC:
    ctx->pc = 0x80D6CBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBACu)) return;
    // 80D6CBAC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6CBB0:
    ctx->pc = 0x80D6CBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBB0u)) return;
    // 80D6CBB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CBB4:
    ctx->pc = 0x80D6CBB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CBB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CBB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6CBB8:
    ctx->pc = 0x80D6CBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CBB8: stw     r0, 16(r3)
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
label_80D6CBBC:
    ctx->pc = 0x80D6CBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CBBC: stb     r0, 33(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CBC0:
    ctx->pc = 0x80D6CBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBC0u)) return;
    // 80D6CBC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CBC4:
    ctx->pc = 0x80D6CBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CBC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6CBC8:
    ctx->pc = 0x80D6CBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CBC8: stw     r0, 16(r3)
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
label_80D6CBCC:
    ctx->pc = 0x80D6CBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CBCC: stb     r0, 33(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(33);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CBD0:
    ctx->pc = 0x80D6CBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBD0u)) return;
    // 80D6CBD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CBD4:
    ctx->pc = 0x80D6CBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6CBD4: stwu     r1, -48(r1)
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
label_80D6CBD8:
    ctx->pc = 0x80D6CBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D6CBD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CBDC:
    ctx->pc = 0x80D6CBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6CBDC: stw     r0, 52(r1)
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
label_80D6CBE0:
    ctx->pc = 0x80D6CBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D6CBE0: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CBE0u)) return;
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
label_80D6CBE4:
    ctx->pc = 0x80D6CBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6CBE4: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CBE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CBE4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CBE8:
    ctx->pc = 0x80D6CBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80D6CBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CBE8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CBEC:
    ctx->pc = 0x80D6CBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBECu)) return;
    // 80D6CBEC: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CBF0:
    ctx->pc = 0x80D6CBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBF0u)) return;
    // 80D6CBF0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6CBF4:
    ctx->pc = 0x80D6CBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBF4u)) return;
    // 80D6CBF4: addi    r31, r4, 30088
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(30088);

label_80D6CBF8:
    ctx->pc = 0x80D6CBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBF8u)) return;
    // 80D6CBF8: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6CBFC:
    ctx->pc = 0x80D6CBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CBFCu)) return;
    // 80D6CBFC: bl      0x8060F594
    {
            ctx->lr = 0x80D6CC00u;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D6CC00:
    ctx->pc = 0x80D6CC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CC00: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80D6CC04:
    ctx->pc = 0x80D6CC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC04u)) return;
    // 80D6CC04: bl      0x804E9BC0
    {
            ctx->lr = 0x80D6CC08u;
            ctx->pc = 0x804E9BC0u;
            return;
    }

label_80D6CC08:
    ctx->pc = 0x80D6CC08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6CC08: lbz     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CC0C:
    ctx->pc = 0x80D6CC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC0Cu)) return;
    // 80D6CC0C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CC10:
    ctx->pc = 0x80D6CC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC10u)) return;
    // 80D6CC10: addi    r4, r31, 920
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(920);

label_80D6CC14:
    ctx->pc = 0x80D6CC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6CC14: lfs     f31, 20104(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CC18:
    ctx->pc = 0x80D6CC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC18u)) return;
    // 80D6CC18: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D6CC1C:
    ctx->pc = 0x80D6CC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC1Cu)) return;
    // 80D6CC1C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80D6CC20:
    ctx->pc = 0x80D6CC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 3u, 0x80D6CC20u)) return;
    // 80D6CC20: mulli   r0, r0, 20
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)20);

label_80D6CC24:
    ctx->pc = 0x80D6CC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC24u)) return;
    // 80D6CC24: add   r3, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D6CC28:
    ctx->pc = 0x80D6CC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CC28: lwzx    r29, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CC2C:
    ctx->pc = 0x80D6CC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CC2C: lwz     r28, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CC30:
    ctx->pc = 0x80D6CC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC30u)) return;
    // 80D6CC30: b       0x80D6CC5C
    {
            goto label_80D6CC5C;
    }

label_80D6CC34:
    ctx->pc = 0x80D6CC34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CC34: lfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC34u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
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
label_80D6CC38:
    ctx->pc = 0x80D6CC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CC38: lbz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CC3C:
    ctx->pc = 0x80D6CC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC3Cu)) return;
    // 80D6CC3C: fadds   f3, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6CC3Cu)) return;
    ppc_fadds(ctx, 3, 31, 0);

label_80D6CC40:
    ctx->pc = 0x80D6CC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CC40: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC40u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
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
label_80D6CC44:
    ctx->pc = 0x80D6CC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CC44: lfs     f2, 4(r28)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC44u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
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
label_80D6CC48:
    ctx->pc = 0x80D6CC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CC48: lfs     f4, 784(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(784);
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
label_80D6CC4C:
    ctx->pc = 0x80D6CC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CC4C: lfs     f5, 788(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(788);
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
label_80D6CC50:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC50u)) return;
    // 80D6CC50: bl      0x804E8B28
    {
            ctx->lr = 0x80D6CC54u;
            ctx->pc = 0x804E8B28u;
            return;
    }

label_80D6CC54:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CC54: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80D6CC58:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC58u)) return;
    // 80D6CC58: addi    r28, r28, 12
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(12);

label_80D6CC5C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CC5C: cmpw    r30, r29
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6CC60:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC60u)) return;
    // 80D6CC60: bc    12, 0, 0x80D6CC34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D6CC34u;
                return;
            }
            goto label_80D6CC34;
        }
    }

label_80D6CC64:
    ctx->pc = 0x80D6CC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6CC64: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_80D6CC68:
    ctx->pc = 0x80D6CC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC68u)) return;
    // 80D6CC68: lis     r4, 30737
    ctx->gpr[4] = ((u32)(s32)(30737) << 16);

label_80D6CC6C:
    ctx->pc = 0x80D6CC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC6Cu)) return;
    // 80D6CC6C: addi    r3, r3, 11879
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11879);

label_80D6CC70:
    ctx->pc = 0x80D6CC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC70u)) return;
    // 80D6CC70: addi    r4, r4, 31743
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31743);

label_80D6CC74:
    ctx->pc = 0x80D6CC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC74u)) return;
    // 80D6CC74: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6CC78:
    ctx->pc = 0x80D6CC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC78u)) return;
    // 80D6CC78: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D6CC7C:
    ctx->pc = 0x80D6CC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC7Cu)) return;
    // 80D6CC7C: bl      0x804E992C
    {
            ctx->lr = 0x80D6CC80u;
            ctx->pc = 0x804E992Cu;
            return;
    }

label_80D6CC80:
    ctx->pc = 0x80D6CC80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CC80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D6CC80: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CC84:
    ctx->pc = 0x80D6CC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CC84: lfs     f0, 8(r27)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC84u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
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
label_80D6CC88:
    ctx->pc = 0x80D6CC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CC88: lfs     f3, 20200(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20200);
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
label_80D6CC8C:
    ctx->pc = 0x80D6CC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CC8C: lfs     f1, 792(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC8Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(792);
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
label_80D6CC90:
    ctx->pc = 0x80D6CC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC90u)) return;
    // 80D6CC90: fadds   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6CC90u)) return;
    ppc_fadds(ctx, 3, 3, 0);

label_80D6CC94:
    ctx->pc = 0x80D6CC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CC94: lfs     f2, 796(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(796);
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
label_80D6CC98:
    ctx->pc = 0x80D6CC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CC98: lfs     f4, 800(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(800);
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
label_80D6CC9C:
    ctx->pc = 0x80D6CC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CC9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CC9C: lfs     f5, 804(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D6CC9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(804);
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
label_80D6CCA0:
    ctx->pc = 0x80D6CCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCA0u)) return;
    // 80D6CCA0: bl      0x804E7448
    {
            ctx->lr = 0x80D6CCA4u;
            ctx->pc = 0x804E7448u;
            return;
    }

label_80D6CCA4:
    ctx->pc = 0x80D6CCA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CCA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D6CCA4: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CCA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CCA4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCA8:
    ctx->pc = 0x80D6CCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6CCA8: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CCA8u)) return;
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
label_80D6CCAC:
    ctx->pc = 0x80D6CCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 11u, 0x80D6CCACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CCAC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCB0:
    ctx->pc = 0x80D6CCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CCB0: lwz     r0, 52(r1)
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
label_80D6CCB4:
    ctx->pc = 0x80D6CCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6CCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CCB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCB8:
    ctx->pc = 0x80D6CCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCB8u)) return;
    // 80D6CCB8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80D6CCBC:
    ctx->pc = 0x80D6CCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCBCu)) return;
    // 80D6CCBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CCC0:
    ctx->pc = 0x80D6CCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 34u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 34u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D6CCC0: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCC4:
    ctx->pc = 0x80D6CCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D6CCC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCC8:
    ctx->pc = 0x80D6CCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D6CCC8: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCCC:
    ctx->pc = 0x80D6CCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D6CCCC: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CCCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCD0:
    ctx->pc = 0x80D6CCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D6CCD0: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CCD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CCD0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCD4:
    ctx->pc = 0x80D6CCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D6CCD4: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCD8:
    ctx->pc = 0x80D6CCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCD8u)) return;
    // 80D6CCD8: fmr    f31, f3
    if (!ppc_fp_available_inline(ctx, 0x80D6CCD8u)) return;
    ctx->fpr[31] = ctx->fpr[3];

label_80D6CCDC:
    ctx->pc = 0x80D6CCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCDCu)) return;
    // 80D6CCDC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80D6CCE0:
    ctx->pc = 0x80D6CCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCE0u)) return;
    // 80D6CCE0: li      r10, 2
    ctx->gpr[10] = (u32)(s32)(2);

label_80D6CCE4:
    ctx->pc = 0x80D6CCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCE4u)) return;
    // 80D6CCE4: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_80D6CCE8:
    ctx->pc = 0x80D6CCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCE8u)) return;
    // 80D6CCE8: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_80D6CCEC:
    ctx->pc = 0x80D6CCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCECu)) return;
    // 80D6CCEC: addi    r0, r1, 40
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(40);

label_80D6CCF0:
    ctx->pc = 0x80D6CCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D6CCF0: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CCF4:
    ctx->pc = 0x80D6CCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCF4u)) return;
    // 80D6CCF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6CCF8:
    ctx->pc = 0x80D6CCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCF8u)) return;
    // 80D6CCF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6CCFC:
    ctx->pc = 0x80D6CCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CCFCu)) return;
    // 80D6CCFC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D6CD00:
    ctx->pc = 0x80D6CD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D6CD00: sth     r10, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD04:
    ctx->pc = 0x80D6CD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6CD04: sth     r10, 42(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD08:
    ctx->pc = 0x80D6CD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D6CD08: sth     r9, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD0C:
    ctx->pc = 0x80D6CD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D6CD0C: sth     r9, 46(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD10:
    ctx->pc = 0x80D6CD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D6CD10: sth     r8, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD14:
    ctx->pc = 0x80D6CD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6CD14: sth     r8, 50(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD18:
    ctx->pc = 0x80D6CD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6CD18: sth     r7, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD1C:
    ctx->pc = 0x80D6CD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6CD1C: sth     r7, 54(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD20:
    ctx->pc = 0x80D6CD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6CD20: sth     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD24:
    ctx->pc = 0x80D6CD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6CD24: sth     r8, 58(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD28:
    ctx->pc = 0x80D6CD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CD28: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD2C:
    ctx->pc = 0x80D6CD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CD2C: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD30:
    ctx->pc = 0x80D6CD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CD30: stfs     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD34:
    ctx->pc = 0x80D6CD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CD34: stfs     f4, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD38:
    ctx->pc = 0x80D6CD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CD38: stfs     f5, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD3C:
    ctx->pc = 0x80D6CD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CD3C: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD40:
    ctx->pc = 0x80D6CD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CD40: stw     r0, 36(r1)
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
label_80D6CD44:
    ctx->pc = 0x80D6CD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD44u)) return;
    // 80D6CD44: bl      0x8060F4F8
    {
            ctx->lr = 0x80D6CD48u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D6CD48:
    ctx->pc = 0x80D6CD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CD48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D6CD4C:
    ctx->pc = 0x80D6CD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD4Cu)) return;
    // 80D6CD4C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D6CD50:
    ctx->pc = 0x80D6CD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD50u)) return;
    // 80D6CD50: bl      0x8060F4F8
    {
            ctx->lr = 0x80D6CD54u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D6CD54:
    ctx->pc = 0x80D6CD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CD54: bl      0x8048CE88
    {
            ctx->lr = 0x80D6CD58u;
            ctx->pc = 0x8048CE88u;
            return;
    }

label_80D6CD58:
    ctx->pc = 0x80D6CD58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CD58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CD58: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D6CD5C:
    ctx->pc = 0x80D6CD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD5Cu)) return;
    // 80D6CD5C: bl      0x8004E938
    {
            ctx->lr = 0x80D6CD60u;
            ctx->pc = 0x8004E938u;
            return;
    }

label_80D6CD60:
    ctx->pc = 0x80D6CD60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CD60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    // 80D6CD60: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_80D6CD64:
    ctx->pc = 0x80D6CD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD64u)) return;
    // 80D6CD64: rlwinm r8, r31, 8, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[31], 8u) & 0x000000FFu;
    }

label_80D6CD68:
    ctx->pc = 0x80D6CD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD68u)) return;
    // 80D6CD68: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6CD6C:
    ctx->pc = 0x80D6CD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D6CD6C: stw     r8, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD70:
    ctx->pc = 0x80D6CD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD70u)) return;
    // 80D6CD70: addi    r7, r5, 20224
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(20224);

label_80D6CD74:
    ctx->pc = 0x80D6CD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD74u)) return;
    // 80D6CD74: rlwinm r4, r31, 16, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 16u) & 0x000000FFu;
    }

label_80D6CD78:
    ctx->pc = 0x80D6CD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D6CD78: stw     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD7C:
    ctx->pc = 0x80D6CD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD7Cu)) return;
    // 80D6CD7C: rlwinm r3, r31, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 24u) & 0x000000FFu;
    }

label_80D6CD80:
    ctx->pc = 0x80D6CD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D6CD80: lfd     f5, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD80u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD84:
    ctx->pc = 0x80D6CD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD84u)) return;
    // 80D6CD84: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80D6CD88:
    ctx->pc = 0x80D6CD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D6CD88: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD8C:
    ctx->pc = 0x80D6CD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD8Cu)) return;
    // 80D6CD8C: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6CD90:
    ctx->pc = 0x80D6CD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D6CD90: stw     r4, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CD94:
    ctx->pc = 0x80D6CD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD94u)) return;
    // 80D6CD94: fsubs   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6CD94u)) return;
    ppc_fsubs(ctx, 1, 0, 5);

label_80D6CD98:
    ctx->pc = 0x80D6CD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D6CD98: lfs     f4, 20180(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6CD98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20180);
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
label_80D6CD9C:
    ctx->pc = 0x80D6CD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CD9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D6CD9C: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDA0:
    ctx->pc = 0x80D6CDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D6CDA0: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CDA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDA4:
    ctx->pc = 0x80D6CDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDA4u)) return;
    // 80D6CDA4: fmuls   f1, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6CDA4u)) return;
    ppc_fmuls(ctx, 1, 1, 4);

label_80D6CDA8:
    ctx->pc = 0x80D6CDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6CDA8: stw     r3, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDAC:
    ctx->pc = 0x80D6CDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDACu)) return;
    // 80D6CDAC: fsubs   f2, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6CDACu)) return;
    ppc_fsubs(ctx, 2, 0, 5);

label_80D6CDB0:
    ctx->pc = 0x80D6CDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6CDB0: stw     r6, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDB4:
    ctx->pc = 0x80D6CDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6CDB4: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CDB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDB8:
    ctx->pc = 0x80D6CDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDB8u)) return;
    // 80D6CDB8: fmuls   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6CDB8u)) return;
    ppc_fmuls(ctx, 2, 2, 4);

label_80D6CDBC:
    ctx->pc = 0x80D6CDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CDBC: stw     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDC0:
    ctx->pc = 0x80D6CDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDC0u)) return;
    // 80D6CDC0: fsubs   f3, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6CDC0u)) return;
    ppc_fsubs(ctx, 3, 0, 5);

label_80D6CDC4:
    ctx->pc = 0x80D6CDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CDC4: stw     r6, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDC8:
    ctx->pc = 0x80D6CDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CDC8: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CDC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CDCC:
    ctx->pc = 0x80D6CDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDCCu)) return;
    // 80D6CDCC: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6CDCCu)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_80D6CDD0:
    ctx->pc = 0x80D6CDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDD0u)) return;
    // 80D6CDD0: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80D6CDD0u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_80D6CDD4:
    ctx->pc = 0x80D6CDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDD4u)) return;
    // 80D6CDD4: fmuls   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80D6CDD4u)) return;
    ppc_fmuls(ctx, 4, 0, 4);

label_80D6CDD8:
    ctx->pc = 0x80D6CDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDD8u)) return;
    // 80D6CDD8: bl      0x80450D90
    {
            ctx->lr = 0x80D6CDDCu;
            ctx->pc = 0x80450D90u;
            return;
    }

label_80D6CDDC:
    ctx->pc = 0x80D6CDDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CDDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D6CDDC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CDE0:
    ctx->pc = 0x80D6CDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDE0u)) return;
    // 80D6CDE0: fneg    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CDE0u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_80D6CDE4:
    ctx->pc = 0x80D6CDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6CDE4: lfs     f0, 20184(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CDE4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20184);
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
label_80D6CDE8:
    ctx->pc = 0x80D6CDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDE8u)) return;
    // 80D6CDE8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6CDE8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6CDEC:
    ctx->pc = 0x80D6CDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDECu)) return;
    // 80D6CDEC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80D6CDF0:
    ctx->pc = 0x80D6CDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDF0u)) return;
    // 80D6CDF0: bc    4, 2, 0x80D6CE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CE10;
        }
    }

label_80D6CDF4:
    ctx->pc = 0x80D6CDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6CDF4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CDF8:
    ctx->pc = 0x80D6CDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CDF8: lfs     f0, 20188(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CDF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20188);
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
label_80D6CDFC:
    ctx->pc = 0x80D6CDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CDFCu)) return;
    // 80D6CDFC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6CDFCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6CE00:
    ctx->pc = 0x80D6CE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE00u)) return;
    // 80D6CE00: bc    4, 0, 0x80D6CE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6CE10;
        }
    }

label_80D6CE04:
    ctx->pc = 0x80D6CE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6CE04: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CE08:
    ctx->pc = 0x80D6CE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6CE08: lfs     f0, 20192(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CE08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20192);
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
label_80D6CE0C:
    ctx->pc = 0x80D6CE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE0Cu)) return;
    // 80D6CE0C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6CE0Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80D6CE10:
    ctx->pc = 0x80D6CE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6CE10: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6CE14:
    ctx->pc = 0x80D6CE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE14u)) return;
    // 80D6CE14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D6CE18:
    ctx->pc = 0x80D6CE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE18u)) return;
    // 80D6CE18: li      r5, 35
    ctx->gpr[5] = (u32)(s32)(35);

label_80D6CE1C:
    ctx->pc = 0x80D6CE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE1Cu)) return;
    // 80D6CE1C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80D6CE20:
    ctx->pc = 0x80D6CE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE20u)) return;
    // 80D6CE20: bl      0x80606508
    {
            ctx->lr = 0x80D6CE24u;
            ctx->pc = 0x80606508u;
            return;
    }

label_80D6CE24:
    ctx->pc = 0x80D6CE24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CE24: bl      0x80450D68
    {
            ctx->lr = 0x80D6CE28u;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80D6CE28:
    ctx->pc = 0x80D6CE28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6CE28: bl      0x8048CE74
    {
            ctx->lr = 0x80D6CE2Cu;
            ctx->pc = 0x8048CE74u;
            return;
    }

label_80D6CE2C:
    ctx->pc = 0x80D6CE2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CE2C: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CE2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CE2Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE30:
    ctx->pc = 0x80D6CE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CE30: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE34:
    ctx->pc = 0x80D6CE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CE34: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CE34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE38:
    ctx->pc = 0x80D6CE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CE38: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE3C:
    ctx->pc = 0x80D6CE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6CE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CE3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE40:
    ctx->pc = 0x80D6CE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE40u)) return;
    // 80D6CE40: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80D6CE44:
    ctx->pc = 0x80D6CE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE44u)) return;
    // 80D6CE44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CE48:
    ctx->pc = 0x80D6CE48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D6CE48: stwu     r1, -32(r1)
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
label_80D6CE4C:
    ctx->pc = 0x80D6CE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6CE4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE50:
    ctx->pc = 0x80D6CE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6CE50: stw     r0, 36(r1)
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
label_80D6CE54:
    ctx->pc = 0x80D6CE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D6CE54: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CE54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE58:
    ctx->pc = 0x80D6CE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6CE58: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CE58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CE58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CE5C:
    ctx->pc = 0x80D6CE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CE5C: stw     r31, 12(r1)
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
label_80D6CE60:
    ctx->pc = 0x80D6CE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE60u)) return;
    // 80D6CE60: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6CE60u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80D6CE64:
    ctx->pc = 0x80D6CE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE64u)) return;
    // 80D6CE64: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CE68:
    ctx->pc = 0x80D6CE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CE68: lfs     f1, 20084(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CE68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20084);
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
label_80D6CE6C:
    ctx->pc = 0x80D6CE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE6Cu)) return;
    // 80D6CE6C: addi    r31, r3, 1
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(1);

label_80D6CE70:
    ctx->pc = 0x80D6CE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE70u)) return;
    // 80D6CE70: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CE70u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CE74:
    ctx->pc = 0x80D6CE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE74u)) return;
    // 80D6CE74: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6CE74u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D6CE78:
    ctx->pc = 0x80D6CE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE78u)) return;
    // 80D6CE78: bl      0x804E931C
    {
            ctx->lr = 0x80D6CE7Cu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CE7C:
    ctx->pc = 0x80D6CE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6CE7C: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CE80:
    ctx->pc = 0x80D6CE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE80u)) return;
    // 80D6CE80: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CE84:
    ctx->pc = 0x80D6CE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE84u)) return;
    // 80D6CE84: addi    r5, r4, 20084
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20084);

label_80D6CE88:
    ctx->pc = 0x80D6CE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE88u)) return;
    // 80D6CE88: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CE88u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CE8C:
    ctx->pc = 0x80D6CE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE8Cu)) return;
    // 80D6CE8C: addi    r4, r3, 20204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20204);

label_80D6CE90:
    ctx->pc = 0x80D6CE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CE90: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6CE90u)) return;
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
label_80D6CE94:
    ctx->pc = 0x80D6CE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE94u)) return;
    // 80D6CE94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CE98:
    ctx->pc = 0x80D6CE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CE98: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CE98u)) return;
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
label_80D6CE9C:
    ctx->pc = 0x80D6CE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CE9Cu)) return;
    // 80D6CE9C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80D6CEA0:
    ctx->pc = 0x80D6CEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEA0u)) return;
    // 80D6CEA0: bl      0x804E931C
    {
            ctx->lr = 0x80D6CEA4u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CEA4:
    ctx->pc = 0x80D6CEA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CEA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6CEA4: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CEA8:
    ctx->pc = 0x80D6CEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEA8u)) return;
    // 80D6CEA8: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CEAC:
    ctx->pc = 0x80D6CEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEACu)) return;
    // 80D6CEAC: addi    r5, r4, 20204
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20204);

label_80D6CEB0:
    ctx->pc = 0x80D6CEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEB0u)) return;
    // 80D6CEB0: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CEB0u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CEB4:
    ctx->pc = 0x80D6CEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEB4u)) return;
    // 80D6CEB4: addi    r4, r3, 20084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20084);

label_80D6CEB8:
    ctx->pc = 0x80D6CEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CEB8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6CEB8u)) return;
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
label_80D6CEBC:
    ctx->pc = 0x80D6CEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEBCu)) return;
    // 80D6CEBC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CEC0:
    ctx->pc = 0x80D6CEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CEC0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CEC0u)) return;
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
label_80D6CEC4:
    ctx->pc = 0x80D6CEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEC4u)) return;
    // 80D6CEC4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80D6CEC8:
    ctx->pc = 0x80D6CEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEC8u)) return;
    // 80D6CEC8: bl      0x804E931C
    {
            ctx->lr = 0x80D6CECCu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CECC:
    ctx->pc = 0x80D6CECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6CECC: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CED0:
    ctx->pc = 0x80D6CED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CED0u)) return;
    // 80D6CED0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CED4:
    ctx->pc = 0x80D6CED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CED4: lfs     f1, 20204(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CED4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20204);
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
label_80D6CED8:
    ctx->pc = 0x80D6CED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CED8u)) return;
    // 80D6CED8: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CED8u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CEDC:
    ctx->pc = 0x80D6CEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEDCu)) return;
    // 80D6CEDC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80D6CEE0:
    ctx->pc = 0x80D6CEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEE0u)) return;
    // 80D6CEE0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6CEE0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D6CEE4:
    ctx->pc = 0x80D6CEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEE4u)) return;
    // 80D6CEE4: bl      0x804E931C
    {
            ctx->lr = 0x80D6CEE8u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CEE8:
    ctx->pc = 0x80D6CEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6CEE8: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CEEC:
    ctx->pc = 0x80D6CEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEECu)) return;
    // 80D6CEEC: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CEF0:
    ctx->pc = 0x80D6CEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEF0u)) return;
    // 80D6CEF0: addi    r5, r4, 20208
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20208);

label_80D6CEF4:
    ctx->pc = 0x80D6CEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEF4u)) return;
    // 80D6CEF4: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CEF4u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CEF8:
    ctx->pc = 0x80D6CEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEF8u)) return;
    // 80D6CEF8: addi    r4, r3, 20084
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20084);

label_80D6CEFC:
    ctx->pc = 0x80D6CEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CEFC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6CEFCu)) return;
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
label_80D6CF00:
    ctx->pc = 0x80D6CF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF00u)) return;
    // 80D6CF00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CF04:
    ctx->pc = 0x80D6CF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CF04: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF04u)) return;
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
label_80D6CF08:
    ctx->pc = 0x80D6CF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF08u)) return;
    // 80D6CF08: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80D6CF0C:
    ctx->pc = 0x80D6CF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF0Cu)) return;
    // 80D6CF0C: bl      0x804E931C
    {
            ctx->lr = 0x80D6CF10u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CF10:
    ctx->pc = 0x80D6CF10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CF10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6CF10: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CF14:
    ctx->pc = 0x80D6CF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF14u)) return;
    // 80D6CF14: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CF18:
    ctx->pc = 0x80D6CF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF18u)) return;
    // 80D6CF18: addi    r5, r4, 20208
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20208);

label_80D6CF1C:
    ctx->pc = 0x80D6CF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF1Cu)) return;
    // 80D6CF1C: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CF1Cu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CF20:
    ctx->pc = 0x80D6CF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF20u)) return;
    // 80D6CF20: addi    r4, r3, 20212
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20212);

label_80D6CF24:
    ctx->pc = 0x80D6CF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CF24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF24u)) return;
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
label_80D6CF28:
    ctx->pc = 0x80D6CF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF28u)) return;
    // 80D6CF28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CF2C:
    ctx->pc = 0x80D6CF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CF2C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF2Cu)) return;
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
label_80D6CF30:
    ctx->pc = 0x80D6CF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF30u)) return;
    // 80D6CF30: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80D6CF34:
    ctx->pc = 0x80D6CF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF34u)) return;
    // 80D6CF34: bl      0x804E931C
    {
            ctx->lr = 0x80D6CF38u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CF38:
    ctx->pc = 0x80D6CF38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CF38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D6CF38: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CF3C:
    ctx->pc = 0x80D6CF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF3Cu)) return;
    // 80D6CF3C: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CF40:
    ctx->pc = 0x80D6CF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF40u)) return;
    // 80D6CF40: addi    r5, r4, 20208
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20208);

label_80D6CF44:
    ctx->pc = 0x80D6CF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF44u)) return;
    // 80D6CF44: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CF44u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CF48:
    ctx->pc = 0x80D6CF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF48u)) return;
    // 80D6CF48: addi    r4, r3, 20204
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20204);

label_80D6CF4C:
    ctx->pc = 0x80D6CF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CF4C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF4Cu)) return;
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
label_80D6CF50:
    ctx->pc = 0x80D6CF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF50u)) return;
    // 80D6CF50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CF54:
    ctx->pc = 0x80D6CF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CF54: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF54u)) return;
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
label_80D6CF58:
    ctx->pc = 0x80D6CF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF58u)) return;
    // 80D6CF58: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80D6CF5C:
    ctx->pc = 0x80D6CF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF5Cu)) return;
    // 80D6CF5C: bl      0x804E931C
    {
            ctx->lr = 0x80D6CF60u;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CF60:
    ctx->pc = 0x80D6CF60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CF60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6CF60: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CF64:
    ctx->pc = 0x80D6CF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF64u)) return;
    // 80D6CF64: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CF68:
    ctx->pc = 0x80D6CF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CF68: lfs     f2, 20216(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20216);
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
label_80D6CF6C:
    ctx->pc = 0x80D6CF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF6Cu)) return;
    // 80D6CF6C: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CF6Cu)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CF70:
    ctx->pc = 0x80D6CF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CF70: lfs     f1, 20208(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20208);
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
label_80D6CF74:
    ctx->pc = 0x80D6CF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF74u)) return;
    // 80D6CF74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D6CF78:
    ctx->pc = 0x80D6CF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF78u)) return;
    // 80D6CF78: bl      0x804E931C
    {
            ctx->lr = 0x80D6CF7Cu;
            ctx->pc = 0x804E931Cu;
            return;
    }

label_80D6CF7C:
    ctx->pc = 0x80D6CF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CF7C: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CF7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CF7Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CF80:
    ctx->pc = 0x80D6CF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CF80: lwz     r0, 36(r1)
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
label_80D6CF84:
    ctx->pc = 0x80D6CF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CF84: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CF84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CF88:
    ctx->pc = 0x80D6CF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CF88: lwz     r31, 12(r1)
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
label_80D6CF8C:
    ctx->pc = 0x80D6CF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6CF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CF8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CF90:
    ctx->pc = 0x80D6CF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF90u)) return;
    // 80D6CF90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6CF94:
    ctx->pc = 0x80D6CF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF94u)) return;
    // 80D6CF94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CF98:
    ctx->pc = 0x80D6CF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6CF98: stwu     r1, -32(r1)
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
label_80D6CF9C:
    ctx->pc = 0x80D6CF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6CF9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CFA0:
    ctx->pc = 0x80D6CFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CFA0: stw     r0, 36(r1)
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
label_80D6CFA4:
    ctx->pc = 0x80D6CFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CFA4: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CFA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CFA8:
    ctx->pc = 0x80D6CFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CFA8: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CFA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CFA8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CFAC:
    ctx->pc = 0x80D6CFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFACu)) return;
    // 80D6CFAC: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6CFACu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80D6CFB0:
    ctx->pc = 0x80D6CFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFB0u)) return;
    // 80D6CFB0: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CFB4:
    ctx->pc = 0x80D6CFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFB4u)) return;
    // 80D6CFB4: addi    r3, r3, 30280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30280);

label_80D6CFB8:
    ctx->pc = 0x80D6CFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFB8u)) return;
    // 80D6CFB8: bl      0x8060F594
    {
            ctx->lr = 0x80D6CFBCu;
            ctx->pc = 0x8060F594u;
            return;
    }

label_80D6CFBC:
    ctx->pc = 0x80D6CFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6CFBC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80D6CFC0:
    ctx->pc = 0x80D6CFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFC0u)) return;
    // 80D6CFC0: bl      0x804E9BC0
    {
            ctx->lr = 0x80D6CFC4u;
            ctx->pc = 0x804E9BC0u;
            return;
    }

label_80D6CFC4:
    ctx->pc = 0x80D6CFC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CFC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6CFC4: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6CFC8:
    ctx->pc = 0x80D6CFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFC8u)) return;
    // 80D6CFC8: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80D6CFC8u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80D6CFCC:
    ctx->pc = 0x80D6CFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CFCC: lfs     f1, 20084(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6CFCCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20084);
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
label_80D6CFD0:
    ctx->pc = 0x80D6CFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFD0u)) return;
    // 80D6CFD0: lis     r4, -27312
    ctx->gpr[4] = ((u32)(s32)(-27312) << 16);

label_80D6CFD4:
    ctx->pc = 0x80D6CFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFD4u)) return;
    // 80D6CFD4: addi    r3, r4, 31068
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(31068);

label_80D6CFD8:
    ctx->pc = 0x80D6CFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFD8u)) return;
    // 80D6CFD8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6CFD8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D6CFDC:
    ctx->pc = 0x80D6CFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFDCu)) return;
    // 80D6CFDC: bl      0x804E8814
    {
            ctx->lr = 0x80D6CFE0u;
            ctx->pc = 0x804E8814u;
            return;
    }

label_80D6CFE0:
    ctx->pc = 0x80D6CFE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CFE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CFE0: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D6CFE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D6CFE0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CFE4:
    ctx->pc = 0x80D6CFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CFE4: lwz     r0, 36(r1)
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
label_80D6CFE8:
    ctx->pc = 0x80D6CFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6CFE8: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D6CFE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CFEC:
    ctx->pc = 0x80D6CFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6CFECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6CFEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6CFF0:
    ctx->pc = 0x80D6CFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFF0u)) return;
    // 80D6CFF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6CFF4:
    ctx->pc = 0x80D6CFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFF4u)) return;
    // 80D6CFF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6CFF8:
    ctx->pc = 0x80D6CFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6CFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6CFF8: stwu     r1, -16(r1)
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
label_80D6CFFC:
    ctx->pc = 0x80D6CFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6CFFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6CFFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D000:
    ctx->pc = 0x80D6D000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D000u)) return;
    // 80D6D000: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6D004:
    ctx->pc = 0x80D6D004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6D004: lfs     f0, 20124(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6D004u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20124);
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
label_80D6D008:
    ctx->pc = 0x80D6D008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D008: stw     r0, 20(r1)
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
label_80D6D00C:
    ctx->pc = 0x80D6D00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D00Cu)) return;
    // 80D6D00C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6D00Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80D6D010:
    ctx->pc = 0x80D6D010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D010u)) return;
    // 80D6D010: bc    4, 0, 0x80D6D038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6D038;
        }
    }

label_80D6D014:
    ctx->pc = 0x80D6D014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D6D014: lis     r3, -27312
    ctx->gpr[3] = ((u32)(s32)(-27312) << 16);

label_80D6D018:
    ctx->pc = 0x80D6D018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D018u)) return;
    // 80D6D018: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80D6D018u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_80D6D01C:
    ctx->pc = 0x80D6D01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D01C: lfs     f1, 20120(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D6D01Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20120);
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
label_80D6D020:
    ctx->pc = 0x80D6D020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D020u)) return;
    // 80D6D020: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D6D020u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_80D6D024:
    ctx->pc = 0x80D6D024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D024u)) return;
    // 80D6D024: bl      0x80006CAC
    {
            ctx->lr = 0x80D6D028u;
            ctx->pc = 0x80006CACu;
            return;
    }

label_80D6D028:
    ctx->pc = 0x80D6D028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6D028: rlwinm r0, r3, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0xFF000000u;
    }

label_80D6D02C:
    ctx->pc = 0x80D6D02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D02Cu)) return;
    // 80D6D02C: oris    r3, r0, 0x00FF
    ctx->gpr[3] = ctx->gpr[0] | (0x00FFu << 16);

label_80D6D030:
    ctx->pc = 0x80D6D030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D030u)) return;
    // 80D6D030: ori     r3, r3, 0xFFFF
    ctx->gpr[3] = ctx->gpr[3] | 0xFFFFu;

label_80D6D034:
    ctx->pc = 0x80D6D034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D034u)) return;
    // 80D6D034: b       0x80D6D03C
    {
            goto label_80D6D03C;
    }

label_80D6D038:
    ctx->pc = 0x80D6D038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D038: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D6D03C:
    ctx->pc = 0x80D6D03Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D03Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6D03C: lwz     r0, 20(r1)
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
label_80D6D040:
    ctx->pc = 0x80D6D040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6D040u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D040: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D044:
    ctx->pc = 0x80D6D044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D044u)) return;
    // 80D6D044: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6D048:
    ctx->pc = 0x80D6D048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D048u)) return;
    // 80D6D048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6D04C:
    ctx->pc = 0x80D6D04Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D04Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6D04C: stwu     r1, -16(r1)
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
label_80D6D050:
    ctx->pc = 0x80D6D050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D050u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6D050: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D054:
    ctx->pc = 0x80D6D054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D054u)) return;
    // 80D6D054: lis     r3, 256
    ctx->gpr[3] = ((u32)(s32)(256) << 16);

label_80D6D058:
    ctx->pc = 0x80D6D058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D058u)) return;
    // 80D6D058: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80D6D05C:
    ctx->pc = 0x80D6D05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D05Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D05C: stw     r0, 20(r1)
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
label_80D6D060:
    ctx->pc = 0x80D6D060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D060u)) return;
    // 80D6D060: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D6D064:
    ctx->pc = 0x80D6D064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D064u)) return;
    // 80D6D064: bl      0x80446F1C
    {
            ctx->lr = 0x80D6D068u;
            ctx->pc = 0x80446F1Cu;
            return;
    }

label_80D6D068:
    ctx->pc = 0x80D6D068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6D068: lwz     r0, 20(r1)
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
label_80D6D06C:
    ctx->pc = 0x80D6D06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6D06Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D06C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D070:
    ctx->pc = 0x80D6D070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D070u)) return;
    // 80D6D070: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D6D074:
    ctx->pc = 0x80D6D074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D074u)) return;
    // 80D6D074: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

label_80D6D078:
    ctx->pc = 0x80D6D078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D6D078: stwu     r1, -32(r1)
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
label_80D6D07C:
    ctx->pc = 0x80D6D07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D6D07C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D080:
    ctx->pc = 0x80D6D080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D080u)) return;
    // 80D6D080: lis     r5, -27312
    ctx->gpr[5] = ((u32)(s32)(-27312) << 16);

label_80D6D084:
    ctx->pc = 0x80D6D084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D6D084: stw     r0, 36(r1)
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
label_80D6D088:
    ctx->pc = 0x80D6D088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6D088: stw     r31, 28(r1)
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
label_80D6D08C:
    ctx->pc = 0x80D6D08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D08Cu)) return;
    // 80D6D08C: addi    r31, r5, 30088
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(30088);

label_80D6D090:
    ctx->pc = 0x80D6D090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6D090: stw     r30, 24(r1)
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
label_80D6D094:
    ctx->pc = 0x80D6D094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D094u)) return;
    // 80D6D094: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D6D098:
    ctx->pc = 0x80D6D098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6D098: stw     r29, 20(r1)
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
label_80D6D09C:
    ctx->pc = 0x80D6D09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D09Cu)) return;
    // 80D6D09C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D6D0A0:
    ctx->pc = 0x80D6D0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0A0u)) return;
    // 80D6D0A0: addi    r3, r31, 776
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6D0A4:
    ctx->pc = 0x80D6D0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0A4u)) return;
    // 80D6D0A4: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6D0A8u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6D0A8:
    ctx->pc = 0x80D6D0A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6D0A8: lis     r3, -28661
    ctx->gpr[3] = ((u32)(s32)(-28661) << 16);

label_80D6D0AC:
    ctx->pc = 0x80D6D0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0ACu)) return;
    // 80D6D0AC: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_80D6D0B0:
    ctx->pc = 0x80D6D0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0B0u)) return;
    // 80D6D0B0: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6D0B4u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6D0B4:
    ctx->pc = 0x80D6D0B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6D0B4: lis     r3, -28666
    ctx->gpr[3] = ((u32)(s32)(-28666) << 16);

label_80D6D0B8:
    ctx->pc = 0x80D6D0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0B8u)) return;
    // 80D6D0B8: addi    r3, r3, -13688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13688);

label_80D6D0BC:
    ctx->pc = 0x80D6D0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0BCu)) return;
    // 80D6D0BC: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6D0C0u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6D0C0:
    ctx->pc = 0x80D6D0C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6D0C0: addi    r3, r31, 192
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6D0C4:
    ctx->pc = 0x80D6D0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0C4u)) return;
    // 80D6D0C4: bl      0x8060F2FC
    {
            ctx->lr = 0x80D6D0C8u;
            ctx->pc = 0x8060F2FCu;
            return;
    }

label_80D6D0C8:
    ctx->pc = 0x80D6D0C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6D0C8: cmpwi   r29, 3
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6D0CC:
    ctx->pc = 0x80D6D0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0CCu)) return;
    // 80D6D0CC: bc    4, 0, 0x80D6D154
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6D154;
        }
    }

label_80D6D0D0:
    ctx->pc = 0x80D6D0D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6D0D0: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6D0D4:
    ctx->pc = 0x80D6D0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0D4u)) return;
    // 80D6D0D4: bc    4, 0, 0x80D6D0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6D0DC;
        }
    }

label_80D6D0D8:
    ctx->pc = 0x80D6D0D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D0D8: b       0x80D6D154
    {
            goto label_80D6D154;
    }

label_80D6D0DC:
    ctx->pc = 0x80D6D0DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D0DC: bl      0x8047AB04
    {
            ctx->lr = 0x80D6D0E0u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6D0E0:
    ctx->pc = 0x80D6D0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D0E0: bl      0x8060F6F0
    {
            ctx->lr = 0x80D6D0E4u;
            ctx->pc = 0x8060F6F0u;
            return;
    }

label_80D6D0E4:
    ctx->pc = 0x80D6D0E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D0E4: bl      0x800499A8
    {
            ctx->lr = 0x80D6D0E8u;
            ctx->pc = 0x800499A8u;
            return;
    }

label_80D6D0E8:
    ctx->pc = 0x80D6D0E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6D0E8: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6D0EC:
    ctx->pc = 0x80D6D0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0ECu)) return;
    // 80D6D0EC: bc    4, 2, 0x80D6D108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D6D108;
        }
    }

label_80D6D0F0:
    ctx->pc = 0x80D6D0F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6D0F0: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6D0F4:
    ctx->pc = 0x80D6D0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0F4u)) return;
    // 80D6D0F4: bc    12, 2, 0x80D6D11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6D11C;
        }
    }

label_80D6D0F8:
    ctx->pc = 0x80D6D0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6D0F8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6D0FC:
    ctx->pc = 0x80D6D0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D0FCu)) return;
    // 80D6D0FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80D6D100:
    ctx->pc = 0x80D6D100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6D100: stw     r0, -5400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D104:
    ctx->pc = 0x80D6D104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D104u)) return;
    // 80D6D104: b       0x80D6D11C
    {
            goto label_80D6D11C;
    }

label_80D6D108:
    ctx->pc = 0x80D6D108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D6D108: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D6D10C:
    ctx->pc = 0x80D6D10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D10Cu)) return;
    // 80D6D10C: bc    12, 2, 0x80D6D11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D6D11C;
        }
    }

label_80D6D110:
    ctx->pc = 0x80D6D110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6D110: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D6D114:
    ctx->pc = 0x80D6D114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D114u)) return;
    // 80D6D114: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6D118:
    ctx->pc = 0x80D6D118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D6D118: stw     r0, -5400(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D11C:
    ctx->pc = 0x80D6D11Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D11Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D11C: bl      0x8047AB04
    {
            ctx->lr = 0x80D6D120u;
            ctx->pc = 0x8047AB04u;
            return;
    }

label_80D6D120:
    ctx->pc = 0x80D6D120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D120: bl      0x805F4668
    {
            ctx->lr = 0x80D6D124u;
            ctx->pc = 0x805F4668u;
            return;
    }

label_80D6D124:
    ctx->pc = 0x80D6D124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D6D124: bl      0x805F454C
    {
            ctx->lr = 0x80D6D128u;
            ctx->pc = 0x805F454Cu;
            return;
    }

label_80D6D128:
    ctx->pc = 0x80D6D128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6D128: lis     r3, -256
    ctx->gpr[3] = ((u32)(s32)(-256) << 16);

label_80D6D12C:
    ctx->pc = 0x80D6D12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D12Cu)) return;
    // 80D6D12C: lis     r4, -256
    ctx->gpr[4] = ((u32)(s32)(-256) << 16);

label_80D6D130:
    ctx->pc = 0x80D6D130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D130u)) return;
    // 80D6D130: lis     r5, -256
    ctx->gpr[5] = ((u32)(s32)(-256) << 16);

label_80D6D134:
    ctx->pc = 0x80D6D134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D134u)) return;
    // 80D6D134: bl      0x8060F71C
    {
            ctx->lr = 0x80D6D138u;
            ctx->pc = 0x8060F71Cu;
            return;
    }

label_80D6D138:
    ctx->pc = 0x80D6D138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D6D138: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D6D13C:
    ctx->pc = 0x80D6D13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D13Cu)) return;
    // 80D6D13C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D6D140:
    ctx->pc = 0x80D6D140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6D140: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D144:
    ctx->pc = 0x80D6D144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D6D144: stb     r0, 9(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D148:
    ctx->pc = 0x80D6D148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D148: stb     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D14C:
    ctx->pc = 0x80D6D14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D6D14C: stb     r0, 11(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D150:
    ctx->pc = 0x80D6D150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D150u)) return;
    // 80D6D150: bl      0x8044FEA4
    {
            ctx->lr = 0x80D6D154u;
            ctx->pc = 0x8044FEA4u;
            return;
    }

label_80D6D154:
    ctx->pc = 0x80D6D154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6D154: addi    r3, r31, 1032
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1032);

label_80D6D158:
    ctx->pc = 0x80D6D158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D158u)) return;
    // 80D6D158: addi    r4, r31, 776
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(776);

label_80D6D15C:
    ctx->pc = 0x80D6D15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D15Cu)) return;
    // 80D6D15C: bl      0x8051028C
    {
            ctx->lr = 0x80D6D160u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6D160:
    ctx->pc = 0x80D6D160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6D160: lis     r4, -28661
    ctx->gpr[4] = ((u32)(s32)(-28661) << 16);

label_80D6D164:
    ctx->pc = 0x80D6D164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D164u)) return;
    // 80D6D164: addi    r3, r31, 1044
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1044);

label_80D6D168:
    ctx->pc = 0x80D6D168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D168u)) return;
    // 80D6D168: addi    r4, r4, 9756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9756);

label_80D6D16C:
    ctx->pc = 0x80D6D16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D16Cu)) return;
    // 80D6D16C: bl      0x8051028C
    {
            ctx->lr = 0x80D6D170u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6D170:
    ctx->pc = 0x80D6D170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D6D170: lis     r4, -28666
    ctx->gpr[4] = ((u32)(s32)(-28666) << 16);

label_80D6D174:
    ctx->pc = 0x80D6D174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D174u)) return;
    // 80D6D174: addi    r3, r31, 1056
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1056);

label_80D6D178:
    ctx->pc = 0x80D6D178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D178u)) return;
    // 80D6D178: addi    r4, r4, -13688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13688);

label_80D6D17C:
    ctx->pc = 0x80D6D17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D17Cu)) return;
    // 80D6D17C: bl      0x8051028C
    {
            ctx->lr = 0x80D6D180u;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6D180:
    ctx->pc = 0x80D6D180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D6D180: addi    r3, r31, 1064
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1064);

label_80D6D184:
    ctx->pc = 0x80D6D184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D184u)) return;
    // 80D6D184: addi    r4, r31, 192
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(192);

label_80D6D188:
    ctx->pc = 0x80D6D188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D188u)) return;
    // 80D6D188: bl      0x8051028C
    {
            ctx->lr = 0x80D6D18Cu;
            ctx->pc = 0x8051028Cu;
            return;
    }

label_80D6D18C:
    ctx->pc = 0x80D6D18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D6D18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D6D18C: lwz     r0, 36(r1)
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
label_80D6D190:
    ctx->pc = 0x80D6D190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D6D190: lwz     r31, 28(r1)
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
label_80D6D194:
    ctx->pc = 0x80D6D194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D6D194: lwz     r30, 24(r1)
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
label_80D6D198:
    ctx->pc = 0x80D6D198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D6D198: lwz     r29, 20(r1)
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
label_80D6D19C:
    ctx->pc = 0x80D6D19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D6D19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D6D19C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D6D1A0:
    ctx->pc = 0x80D6D1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D1A0u)) return;
    // 80D6D1A0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D6D1A4:
    ctx->pc = 0x80D6D1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D6D1A4u)) return;
    // 80D6D1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D6B120;
        }
    }

    ctx->pc = 0x80D6D1A8u;
    return;
return_dispatch_80D6B120:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D6B13Cu: goto label_80D6B13C;
    case 0x80D6B140u: goto label_80D6B140;
    case 0x80D6B144u: goto label_80D6B144;
    case 0x80D6B14Cu: goto label_80D6B14C;
    case 0x80D6B150u: goto label_80D6B150;
    case 0x80D6B154u: goto label_80D6B154;
    case 0x80D6B174u: goto label_80D6B174;
    case 0x80D6B190u: goto label_80D6B190;
    case 0x80D6B19Cu: goto label_80D6B19C;
    case 0x80D6B1BCu: goto label_80D6B1BC;
    case 0x80D6B1DCu: goto label_80D6B1DC;
    case 0x80D6B220u: goto label_80D6B220;
    case 0x80D6B238u: goto label_80D6B238;
    case 0x80D6B250u: goto label_80D6B250;
    case 0x80D6B264u: goto label_80D6B264;
    case 0x80D6B27Cu: goto label_80D6B27C;
    case 0x80D6B294u: goto label_80D6B294;
    case 0x80D6B2B4u: goto label_80D6B2B4;
    case 0x80D6B2CCu: goto label_80D6B2CC;
    case 0x80D6B2E4u: goto label_80D6B2E4;
    case 0x80D6B2F8u: goto label_80D6B2F8;
    case 0x80D6B310u: goto label_80D6B310;
    case 0x80D6B328u: goto label_80D6B328;
    case 0x80D6B348u: goto label_80D6B348;
    case 0x80D6B360u: goto label_80D6B360;
    case 0x80D6B36Cu: goto label_80D6B36C;
    case 0x80D6B370u: goto label_80D6B370;
    case 0x80D6B374u: goto label_80D6B374;
    case 0x80D6B378u: goto label_80D6B378;
    case 0x80D6B37Cu: goto label_80D6B37C;
    case 0x80D6B384u: goto label_80D6B384;
    case 0x80D6B388u: goto label_80D6B388;
    case 0x80D6B38Cu: goto label_80D6B38C;
    case 0x80D6B39Cu: goto label_80D6B39C;
    case 0x80D6B3E0u: goto label_80D6B3E0;
    case 0x80D6B3E4u: goto label_80D6B3E4;
    case 0x80D6B42Cu: goto label_80D6B42C;
    case 0x80D6B430u: goto label_80D6B430;
    case 0x80D6B434u: goto label_80D6B434;
    case 0x80D6B444u: goto label_80D6B444;
    case 0x80D6B460u: goto label_80D6B460;
    case 0x80D6B464u: goto label_80D6B464;
    case 0x80D6B468u: goto label_80D6B468;
    case 0x80D6B46Cu: goto label_80D6B46C;
    case 0x80D6B47Cu: goto label_80D6B47C;
    case 0x80D6B480u: goto label_80D6B480;
    case 0x80D6B4E4u: goto label_80D6B4E4;
    case 0x80D6B508u: goto label_80D6B508;
    case 0x80D6B534u: goto label_80D6B534;
    case 0x80D6B568u: goto label_80D6B568;
    case 0x80D6B58Cu: goto label_80D6B58C;
    case 0x80D6B5B4u: goto label_80D6B5B4;
    case 0x80D6B5E8u: goto label_80D6B5E8;
    case 0x80D6B60Cu: goto label_80D6B60C;
    case 0x80D6B634u: goto label_80D6B634;
    case 0x80D6B660u: goto label_80D6B660;
    case 0x80D6B6A0u: goto label_80D6B6A0;
    case 0x80D6B6E0u: goto label_80D6B6E0;
    case 0x80D6B728u: goto label_80D6B728;
    case 0x80D6B74Cu: goto label_80D6B74C;
    case 0x80D6B778u: goto label_80D6B778;
    case 0x80D6B7ACu: goto label_80D6B7AC;
    case 0x80D6B7D0u: goto label_80D6B7D0;
    case 0x80D6B7FCu: goto label_80D6B7FC;
    case 0x80D6B830u: goto label_80D6B830;
    case 0x80D6B854u: goto label_80D6B854;
    case 0x80D6B87Cu: goto label_80D6B87C;
    case 0x80D6B8B0u: goto label_80D6B8B0;
    case 0x80D6B8D4u: goto label_80D6B8D4;
    case 0x80D6B8FCu: goto label_80D6B8FC;
    case 0x80D6B920u: goto label_80D6B920;
    case 0x80D6B944u: goto label_80D6B944;
    case 0x80D6B974u: goto label_80D6B974;
    case 0x80D6B978u: goto label_80D6B978;
    case 0x80D6B97Cu: goto label_80D6B97C;
    case 0x80D6B98Cu: goto label_80D6B98C;
    case 0x80D6B9A8u: goto label_80D6B9A8;
    case 0x80D6B9ACu: goto label_80D6B9AC;
    case 0x80D6B9B0u: goto label_80D6B9B0;
    case 0x80D6B9B4u: goto label_80D6B9B4;
    case 0x80D6B9C8u: goto label_80D6B9C8;
    case 0x80D6B9CCu: goto label_80D6B9CC;
    case 0x80D6BA18u: goto label_80D6BA18;
    case 0x80D6BA1Cu: goto label_80D6BA1C;
    case 0x80D6BA20u: goto label_80D6BA20;
    case 0x80D6BA28u: goto label_80D6BA28;
    case 0x80D6BA2Cu: goto label_80D6BA2C;
    case 0x80D6BA30u: goto label_80D6BA30;
    case 0x80D6BA94u: goto label_80D6BA94;
    case 0x80D6BAA0u: goto label_80D6BAA0;
    case 0x80D6BAACu: goto label_80D6BAAC;
    case 0x80D6BAB4u: goto label_80D6BAB4;
    case 0x80D6BACCu: goto label_80D6BACC;
    case 0x80D6BAD0u: goto label_80D6BAD0;
    case 0x80D6BAD4u: goto label_80D6BAD4;
    case 0x80D6BAECu: goto label_80D6BAEC;
    case 0x80D6BAF0u: goto label_80D6BAF0;
    case 0x80D6BAF4u: goto label_80D6BAF4;
    case 0x80D6BB04u: goto label_80D6BB04;
    case 0x80D6BB20u: goto label_80D6BB20;
    case 0x80D6BB2Cu: goto label_80D6BB2C;
    case 0x80D6BB3Cu: goto label_80D6BB3C;
    case 0x80D6BB4Cu: goto label_80D6BB4C;
    case 0x80D6BB58u: goto label_80D6BB58;
    case 0x80D6BB68u: goto label_80D6BB68;
    case 0x80D6BB78u: goto label_80D6BB78;
    case 0x80D6BB80u: goto label_80D6BB80;
    case 0x80D6BB8Cu: goto label_80D6BB8C;
    case 0x80D6BB98u: goto label_80D6BB98;
    case 0x80D6BBA0u: goto label_80D6BBA0;
    case 0x80D6BBA4u: goto label_80D6BBA4;
    case 0x80D6BBA8u: goto label_80D6BBA8;
    case 0x80D6BBE4u: goto label_80D6BBE4;
    case 0x80D6BBECu: goto label_80D6BBEC;
    case 0x80D6BBF8u: goto label_80D6BBF8;
    case 0x80D6BBFCu: goto label_80D6BBFC;
    case 0x80D6BC00u: goto label_80D6BC00;
    case 0x80D6BC04u: goto label_80D6BC04;
    case 0x80D6BC14u: goto label_80D6BC14;
    case 0x80D6BC30u: goto label_80D6BC30;
    case 0x80D6BC34u: goto label_80D6BC34;
    case 0x80D6BC38u: goto label_80D6BC38;
    case 0x80D6BC3Cu: goto label_80D6BC3C;
    case 0x80D6BC50u: goto label_80D6BC50;
    case 0x80D6BC6Cu: goto label_80D6BC6C;
    case 0x80D6BC7Cu: goto label_80D6BC7C;
    case 0x80D6BC8Cu: goto label_80D6BC8C;
    case 0x80D6BC9Cu: goto label_80D6BC9C;
    case 0x80D6BCA8u: goto label_80D6BCA8;
    case 0x80D6BCACu: goto label_80D6BCAC;
    case 0x80D6BD70u: goto label_80D6BD70;
    case 0x80D6BD7Cu: goto label_80D6BD7C;
    case 0x80D6BD88u: goto label_80D6BD88;
    case 0x80D6BD90u: goto label_80D6BD90;
    case 0x80D6BDA8u: goto label_80D6BDA8;
    case 0x80D6BDACu: goto label_80D6BDAC;
    case 0x80D6BDB0u: goto label_80D6BDB0;
    case 0x80D6BDC8u: goto label_80D6BDC8;
    case 0x80D6BDCCu: goto label_80D6BDCC;
    case 0x80D6BDD0u: goto label_80D6BDD0;
    case 0x80D6BDE0u: goto label_80D6BDE0;
    case 0x80D6BDFCu: goto label_80D6BDFC;
    case 0x80D6BE08u: goto label_80D6BE08;
    case 0x80D6BE18u: goto label_80D6BE18;
    case 0x80D6BE28u: goto label_80D6BE28;
    case 0x80D6BE34u: goto label_80D6BE34;
    case 0x80D6BE44u: goto label_80D6BE44;
    case 0x80D6BE54u: goto label_80D6BE54;
    case 0x80D6BE5Cu: goto label_80D6BE5C;
    case 0x80D6BE68u: goto label_80D6BE68;
    case 0x80D6BE74u: goto label_80D6BE74;
    case 0x80D6BE7Cu: goto label_80D6BE7C;
    case 0x80D6BEC4u: goto label_80D6BEC4;
    case 0x80D6BEE0u: goto label_80D6BEE0;
    case 0x80D6BEF0u: goto label_80D6BEF0;
    case 0x80D6BF00u: goto label_80D6BF00;
    case 0x80D6BF10u: goto label_80D6BF10;
    case 0x80D6BF1Cu: goto label_80D6BF1C;
    case 0x80D6BF20u: goto label_80D6BF20;
    case 0x80D6BFD0u: goto label_80D6BFD0;
    case 0x80D6BFD8u: goto label_80D6BFD8;
    case 0x80D6C000u: goto label_80D6C000;
    case 0x80D6C008u: goto label_80D6C008;
    case 0x80D6C024u: goto label_80D6C024;
    case 0x80D6C02Cu: goto label_80D6C02C;
    case 0x80D6C034u: goto label_80D6C034;
    case 0x80D6C05Cu: goto label_80D6C05C;
    case 0x80D6C090u: goto label_80D6C090;
    case 0x80D6C098u: goto label_80D6C098;
    case 0x80D6C124u: goto label_80D6C124;
    case 0x80D6C184u: goto label_80D6C184;
    case 0x80D6C1B0u: goto label_80D6C1B0;
    case 0x80D6C294u: goto label_80D6C294;
    case 0x80D6C34Cu: goto label_80D6C34C;
    case 0x80D6C3F4u: goto label_80D6C3F4;
    case 0x80D6C4D0u: goto label_80D6C4D0;
    case 0x80D6C4DCu: goto label_80D6C4DC;
    case 0x80D6C4E0u: goto label_80D6C4E0;
    case 0x80D6C4E8u: goto label_80D6C4E8;
    case 0x80D6C564u: goto label_80D6C564;
    case 0x80D6C5ACu: goto label_80D6C5AC;
    case 0x80D6C5B0u: goto label_80D6C5B0;
    case 0x80D6C5B4u: goto label_80D6C5B4;
    case 0x80D6C620u: goto label_80D6C620;
    case 0x80D6C63Cu: goto label_80D6C63C;
    case 0x80D6C664u: goto label_80D6C664;
    case 0x80D6C68Cu: goto label_80D6C68C;
    case 0x80D6C6A8u: goto label_80D6C6A8;
    case 0x80D6C6C4u: goto label_80D6C6C4;
    case 0x80D6C6E0u: goto label_80D6C6E0;
    case 0x80D6C6FCu: goto label_80D6C6FC;
    case 0x80D6C718u: goto label_80D6C718;
    case 0x80D6C734u: goto label_80D6C734;
    case 0x80D6C750u: goto label_80D6C750;
    case 0x80D6C798u: goto label_80D6C798;
    case 0x80D6C7A4u: goto label_80D6C7A4;
    case 0x80D6C7CCu: goto label_80D6C7CC;
    case 0x80D6C800u: goto label_80D6C800;
    case 0x80D6C898u: goto label_80D6C898;
    case 0x80D6C8A0u: goto label_80D6C8A0;
    case 0x80D6C9F0u: goto label_80D6C9F0;
    case 0x80D6C9FCu: goto label_80D6C9FC;
    case 0x80D6CA08u: goto label_80D6CA08;
    case 0x80D6CA10u: goto label_80D6CA10;
    case 0x80D6CA14u: goto label_80D6CA14;
    case 0x80D6CA18u: goto label_80D6CA18;
    case 0x80D6CA1Cu: goto label_80D6CA1C;
    case 0x80D6CA20u: goto label_80D6CA20;
    case 0x80D6CA24u: goto label_80D6CA24;
    case 0x80D6CA28u: goto label_80D6CA28;
    case 0x80D6CA38u: goto label_80D6CA38;
    case 0x80D6CA54u: goto label_80D6CA54;
    case 0x80D6CA60u: goto label_80D6CA60;
    case 0x80D6CA70u: goto label_80D6CA70;
    case 0x80D6CA80u: goto label_80D6CA80;
    case 0x80D6CA8Cu: goto label_80D6CA8C;
    case 0x80D6CAECu: goto label_80D6CAEC;
    case 0x80D6CAF8u: goto label_80D6CAF8;
    case 0x80D6CB04u: goto label_80D6CB04;
    case 0x80D6CB0Cu: goto label_80D6CB0C;
    case 0x80D6CB24u: goto label_80D6CB24;
    case 0x80D6CB28u: goto label_80D6CB28;
    case 0x80D6CB2Cu: goto label_80D6CB2C;
    case 0x80D6CB30u: goto label_80D6CB30;
    case 0x80D6CB34u: goto label_80D6CB34;
    case 0x80D6CB38u: goto label_80D6CB38;
    case 0x80D6CB48u: goto label_80D6CB48;
    case 0x80D6CB64u: goto label_80D6CB64;
    case 0x80D6CB70u: goto label_80D6CB70;
    case 0x80D6CB80u: goto label_80D6CB80;
    case 0x80D6CB90u: goto label_80D6CB90;
    case 0x80D6CB9Cu: goto label_80D6CB9C;
    case 0x80D6CC00u: goto label_80D6CC00;
    case 0x80D6CC08u: goto label_80D6CC08;
    case 0x80D6CC54u: goto label_80D6CC54;
    case 0x80D6CC80u: goto label_80D6CC80;
    case 0x80D6CCA4u: goto label_80D6CCA4;
    case 0x80D6CD48u: goto label_80D6CD48;
    case 0x80D6CD54u: goto label_80D6CD54;
    case 0x80D6CD58u: goto label_80D6CD58;
    case 0x80D6CD60u: goto label_80D6CD60;
    case 0x80D6CDDCu: goto label_80D6CDDC;
    case 0x80D6CE24u: goto label_80D6CE24;
    case 0x80D6CE28u: goto label_80D6CE28;
    case 0x80D6CE2Cu: goto label_80D6CE2C;
    case 0x80D6CE7Cu: goto label_80D6CE7C;
    case 0x80D6CEA4u: goto label_80D6CEA4;
    case 0x80D6CECCu: goto label_80D6CECC;
    case 0x80D6CEE8u: goto label_80D6CEE8;
    case 0x80D6CF10u: goto label_80D6CF10;
    case 0x80D6CF38u: goto label_80D6CF38;
    case 0x80D6CF60u: goto label_80D6CF60;
    case 0x80D6CF7Cu: goto label_80D6CF7C;
    case 0x80D6CFBCu: goto label_80D6CFBC;
    case 0x80D6CFC4u: goto label_80D6CFC4;
    case 0x80D6CFE0u: goto label_80D6CFE0;
    case 0x80D6D028u: goto label_80D6D028;
    case 0x80D6D068u: goto label_80D6D068;
    case 0x80D6D0A8u: goto label_80D6D0A8;
    case 0x80D6D0B4u: goto label_80D6D0B4;
    case 0x80D6D0C0u: goto label_80D6D0C0;
    case 0x80D6D0C8u: goto label_80D6D0C8;
    case 0x80D6D0E0u: goto label_80D6D0E0;
    case 0x80D6D0E4u: goto label_80D6D0E4;
    case 0x80D6D0E8u: goto label_80D6D0E8;
    case 0x80D6D120u: goto label_80D6D120;
    case 0x80D6D124u: goto label_80D6D124;
    case 0x80D6D128u: goto label_80D6D128;
    case 0x80D6D138u: goto label_80D6D138;
    case 0x80D6D154u: goto label_80D6D154;
    case 0x80D6D160u: goto label_80D6D160;
    case 0x80D6D170u: goto label_80D6D170;
    case 0x80D6D180u: goto label_80D6D180;
    case 0x80D6D18Cu: goto label_80D6D18C;
    default: return;
    }
}

