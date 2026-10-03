// DolRecomp output
#include "../generated.h"

void func_80BADE00(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BADE00[783] = {
        &&label_80BADE00,
        &&label_80BADE04,
        &&label_80BADE08,
        &&label_80BADE0C,
        &&label_80BADE10,
        &&label_80BADE14,
        &&label_80BADE18,
        &&label_80BADE1C,
        &&label_80BADE20,
        &&label_80BADE24,
        &&label_80BADE28,
        &&label_80BADE2C,
        &&label_80BADE30,
        &&label_80BADE34,
        &&label_80BADE38,
        &&label_80BADE3C,
        &&label_80BADE40,
        &&label_80BADE44,
        &&label_80BADE48,
        &&label_80BADE4C,
        &&label_80BADE50,
        &&label_80BADE54,
        &&label_80BADE58,
        &&label_80BADE5C,
        &&label_80BADE60,
        &&label_80BADE64,
        &&label_80BADE68,
        &&label_80BADE6C,
        &&label_80BADE70,
        &&label_80BADE74,
        &&label_80BADE78,
        &&label_80BADE7C,
        &&label_80BADE80,
        &&label_80BADE84,
        &&label_80BADE88,
        &&label_80BADE8C,
        &&label_80BADE90,
        &&label_80BADE94,
        &&label_80BADE98,
        &&label_80BADE9C,
        &&label_80BADEA0,
        &&label_80BADEA4,
        &&label_80BADEA8,
        &&label_80BADEAC,
        &&label_80BADEB0,
        &&label_80BADEB4,
        &&label_80BADEB8,
        &&label_80BADEBC,
        &&label_80BADEC0,
        &&label_80BADEC4,
        &&label_80BADEC8,
        &&label_80BADECC,
        &&label_80BADED0,
        &&label_80BADED4,
        &&label_80BADED8,
        &&label_80BADEDC,
        &&label_80BADEE0,
        &&label_80BADEE4,
        &&label_80BADEE8,
        &&label_80BADEEC,
        &&label_80BADEF0,
        &&label_80BADEF4,
        &&label_80BADEF8,
        &&label_80BADEFC,
        &&label_80BADF00,
        &&label_80BADF04,
        &&label_80BADF08,
        &&label_80BADF0C,
        &&label_80BADF10,
        &&label_80BADF14,
        &&label_80BADF18,
        &&label_80BADF1C,
        &&label_80BADF20,
        &&label_80BADF24,
        &&label_80BADF28,
        &&label_80BADF2C,
        &&label_80BADF30,
        &&label_80BADF34,
        &&label_80BADF38,
        &&label_80BADF3C,
        &&label_80BADF40,
        &&label_80BADF44,
        &&label_80BADF48,
        &&label_80BADF4C,
        &&label_80BADF50,
        &&label_80BADF54,
        &&label_80BADF58,
        &&label_80BADF5C,
        &&label_80BADF60,
        &&label_80BADF64,
        &&label_80BADF68,
        &&label_80BADF6C,
        &&label_80BADF70,
        &&label_80BADF74,
        &&label_80BADF78,
        &&label_80BADF7C,
        &&label_80BADF80,
        &&label_80BADF84,
        &&label_80BADF88,
        &&label_80BADF8C,
        &&label_80BADF90,
        &&label_80BADF94,
        &&label_80BADF98,
        &&label_80BADF9C,
        &&label_80BADFA0,
        &&label_80BADFA4,
        &&label_80BADFA8,
        &&label_80BADFAC,
        &&label_80BADFB0,
        &&label_80BADFB4,
        &&label_80BADFB8,
        &&label_80BADFBC,
        &&label_80BADFC0,
        &&label_80BADFC4,
        &&label_80BADFC8,
        &&label_80BADFCC,
        &&label_80BADFD0,
        &&label_80BADFD4,
        &&label_80BADFD8,
        &&label_80BADFDC,
        &&label_80BADFE0,
        &&label_80BADFE4,
        &&label_80BADFE8,
        &&label_80BADFEC,
        &&label_80BADFF0,
        &&label_80BADFF4,
        &&label_80BADFF8,
        &&label_80BADFFC,
        &&label_80BAE000,
        &&label_80BAE004,
        &&label_80BAE008,
        &&label_80BAE00C,
        &&label_80BAE010,
        &&label_80BAE014,
        &&label_80BAE018,
        &&label_80BAE01C,
        &&label_80BAE020,
        &&label_80BAE024,
        &&label_80BAE028,
        &&label_80BAE02C,
        &&label_80BAE030,
        &&label_80BAE034,
        &&label_80BAE038,
        &&label_80BAE03C,
        &&label_80BAE040,
        &&label_80BAE044,
        &&label_80BAE048,
        &&label_80BAE04C,
        &&label_80BAE050,
        &&label_80BAE054,
        &&label_80BAE058,
        &&label_80BAE05C,
        &&label_80BAE060,
        &&label_80BAE064,
        &&label_80BAE068,
        &&label_80BAE06C,
        &&label_80BAE070,
        &&label_80BAE074,
        &&label_80BAE078,
        &&label_80BAE07C,
        &&label_80BAE080,
        &&label_80BAE084,
        &&label_80BAE088,
        &&label_80BAE08C,
        &&label_80BAE090,
        &&label_80BAE094,
        &&label_80BAE098,
        &&label_80BAE09C,
        &&label_80BAE0A0,
        &&label_80BAE0A4,
        &&label_80BAE0A8,
        &&label_80BAE0AC,
        &&label_80BAE0B0,
        &&label_80BAE0B4,
        &&label_80BAE0B8,
        &&label_80BAE0BC,
        &&label_80BAE0C0,
        &&label_80BAE0C4,
        &&label_80BAE0C8,
        &&label_80BAE0CC,
        &&label_80BAE0D0,
        &&label_80BAE0D4,
        &&label_80BAE0D8,
        &&label_80BAE0DC,
        &&label_80BAE0E0,
        &&label_80BAE0E4,
        &&label_80BAE0E8,
        &&label_80BAE0EC,
        &&label_80BAE0F0,
        &&label_80BAE0F4,
        &&label_80BAE0F8,
        &&label_80BAE0FC,
        &&label_80BAE100,
        &&label_80BAE104,
        &&label_80BAE108,
        &&label_80BAE10C,
        &&label_80BAE110,
        &&label_80BAE114,
        &&label_80BAE118,
        &&label_80BAE11C,
        &&label_80BAE120,
        &&label_80BAE124,
        &&label_80BAE128,
        &&label_80BAE12C,
        &&label_80BAE130,
        &&label_80BAE134,
        &&label_80BAE138,
        &&label_80BAE13C,
        &&label_80BAE140,
        &&label_80BAE144,
        &&label_80BAE148,
        &&label_80BAE14C,
        &&label_80BAE150,
        &&label_80BAE154,
        &&label_80BAE158,
        &&label_80BAE15C,
        &&label_80BAE160,
        &&label_80BAE164,
        &&label_80BAE168,
        &&label_80BAE16C,
        &&label_80BAE170,
        &&label_80BAE174,
        &&label_80BAE178,
        &&label_80BAE17C,
        &&label_80BAE180,
        &&label_80BAE184,
        &&label_80BAE188,
        &&label_80BAE18C,
        &&label_80BAE190,
        &&label_80BAE194,
        &&label_80BAE198,
        &&label_80BAE19C,
        &&label_80BAE1A0,
        &&label_80BAE1A4,
        &&label_80BAE1A8,
        &&label_80BAE1AC,
        &&label_80BAE1B0,
        &&label_80BAE1B4,
        &&label_80BAE1B8,
        &&label_80BAE1BC,
        &&label_80BAE1C0,
        &&label_80BAE1C4,
        &&label_80BAE1C8,
        &&label_80BAE1CC,
        &&label_80BAE1D0,
        &&label_80BAE1D4,
        &&label_80BAE1D8,
        &&label_80BAE1DC,
        &&label_80BAE1E0,
        &&label_80BAE1E4,
        &&label_80BAE1E8,
        &&label_80BAE1EC,
        &&label_80BAE1F0,
        &&label_80BAE1F4,
        &&label_80BAE1F8,
        &&label_80BAE1FC,
        &&label_80BAE200,
        &&label_80BAE204,
        &&label_80BAE208,
        &&label_80BAE20C,
        &&label_80BAE210,
        &&label_80BAE214,
        &&label_80BAE218,
        &&label_80BAE21C,
        &&label_80BAE220,
        &&label_80BAE224,
        &&label_80BAE228,
        &&label_80BAE22C,
        &&label_80BAE230,
        &&label_80BAE234,
        &&label_80BAE238,
        &&label_80BAE23C,
        &&label_80BAE240,
        &&label_80BAE244,
        &&label_80BAE248,
        &&label_80BAE24C,
        &&label_80BAE250,
        &&label_80BAE254,
        &&label_80BAE258,
        &&label_80BAE25C,
        &&label_80BAE260,
        &&label_80BAE264,
        &&label_80BAE268,
        &&label_80BAE26C,
        &&label_80BAE270,
        &&label_80BAE274,
        &&label_80BAE278,
        &&label_80BAE27C,
        &&label_80BAE280,
        &&label_80BAE284,
        &&label_80BAE288,
        &&label_80BAE28C,
        &&label_80BAE290,
        &&label_80BAE294,
        &&label_80BAE298,
        &&label_80BAE29C,
        &&label_80BAE2A0,
        &&label_80BAE2A4,
        &&label_80BAE2A8,
        &&label_80BAE2AC,
        &&label_80BAE2B0,
        &&label_80BAE2B4,
        &&label_80BAE2B8,
        &&label_80BAE2BC,
        &&label_80BAE2C0,
        &&label_80BAE2C4,
        &&label_80BAE2C8,
        &&label_80BAE2CC,
        &&label_80BAE2D0,
        &&label_80BAE2D4,
        &&label_80BAE2D8,
        &&label_80BAE2DC,
        &&label_80BAE2E0,
        &&label_80BAE2E4,
        &&label_80BAE2E8,
        &&label_80BAE2EC,
        &&label_80BAE2F0,
        &&label_80BAE2F4,
        &&label_80BAE2F8,
        &&label_80BAE2FC,
        &&label_80BAE300,
        &&label_80BAE304,
        &&label_80BAE308,
        &&label_80BAE30C,
        &&label_80BAE310,
        &&label_80BAE314,
        &&label_80BAE318,
        &&label_80BAE31C,
        &&label_80BAE320,
        &&label_80BAE324,
        &&label_80BAE328,
        &&label_80BAE32C,
        &&label_80BAE330,
        &&label_80BAE334,
        &&label_80BAE338,
        &&label_80BAE33C,
        &&label_80BAE340,
        &&label_80BAE344,
        &&label_80BAE348,
        &&label_80BAE34C,
        &&label_80BAE350,
        &&label_80BAE354,
        &&label_80BAE358,
        &&label_80BAE35C,
        &&label_80BAE360,
        &&label_80BAE364,
        &&label_80BAE368,
        &&label_80BAE36C,
        &&label_80BAE370,
        &&label_80BAE374,
        &&label_80BAE378,
        &&label_80BAE37C,
        &&label_80BAE380,
        &&label_80BAE384,
        &&label_80BAE388,
        &&label_80BAE38C,
        &&label_80BAE390,
        &&label_80BAE394,
        &&label_80BAE398,
        &&label_80BAE39C,
        &&label_80BAE3A0,
        &&label_80BAE3A4,
        &&label_80BAE3A8,
        &&label_80BAE3AC,
        &&label_80BAE3B0,
        &&label_80BAE3B4,
        &&label_80BAE3B8,
        &&label_80BAE3BC,
        &&label_80BAE3C0,
        &&label_80BAE3C4,
        &&label_80BAE3C8,
        &&label_80BAE3CC,
        &&label_80BAE3D0,
        &&label_80BAE3D4,
        &&label_80BAE3D8,
        &&label_80BAE3DC,
        &&label_80BAE3E0,
        &&label_80BAE3E4,
        &&label_80BAE3E8,
        &&label_80BAE3EC,
        &&label_80BAE3F0,
        &&label_80BAE3F4,
        &&label_80BAE3F8,
        &&label_80BAE3FC,
        &&label_80BAE400,
        &&label_80BAE404,
        &&label_80BAE408,
        &&label_80BAE40C,
        &&label_80BAE410,
        &&label_80BAE414,
        &&label_80BAE418,
        &&label_80BAE41C,
        &&label_80BAE420,
        &&label_80BAE424,
        &&label_80BAE428,
        &&label_80BAE42C,
        &&label_80BAE430,
        &&label_80BAE434,
        &&label_80BAE438,
        &&label_80BAE43C,
        &&label_80BAE440,
        &&label_80BAE444,
        &&label_80BAE448,
        &&label_80BAE44C,
        &&label_80BAE450,
        &&label_80BAE454,
        &&label_80BAE458,
        &&label_80BAE45C,
        &&label_80BAE460,
        &&label_80BAE464,
        &&label_80BAE468,
        &&label_80BAE46C,
        &&label_80BAE470,
        &&label_80BAE474,
        &&label_80BAE478,
        &&label_80BAE47C,
        &&label_80BAE480,
        &&label_80BAE484,
        &&label_80BAE488,
        &&label_80BAE48C,
        &&label_80BAE490,
        &&label_80BAE494,
        &&label_80BAE498,
        &&label_80BAE49C,
        &&label_80BAE4A0,
        &&label_80BAE4A4,
        &&label_80BAE4A8,
        &&label_80BAE4AC,
        &&label_80BAE4B0,
        &&label_80BAE4B4,
        &&label_80BAE4B8,
        &&label_80BAE4BC,
        &&label_80BAE4C0,
        &&label_80BAE4C4,
        &&label_80BAE4C8,
        &&label_80BAE4CC,
        &&label_80BAE4D0,
        &&label_80BAE4D4,
        &&label_80BAE4D8,
        &&label_80BAE4DC,
        &&label_80BAE4E0,
        &&label_80BAE4E4,
        &&label_80BAE4E8,
        &&label_80BAE4EC,
        &&label_80BAE4F0,
        &&label_80BAE4F4,
        &&label_80BAE4F8,
        &&label_80BAE4FC,
        &&label_80BAE500,
        &&label_80BAE504,
        &&label_80BAE508,
        &&label_80BAE50C,
        &&label_80BAE510,
        &&label_80BAE514,
        &&label_80BAE518,
        &&label_80BAE51C,
        &&label_80BAE520,
        &&label_80BAE524,
        &&label_80BAE528,
        &&label_80BAE52C,
        &&label_80BAE530,
        &&label_80BAE534,
        &&label_80BAE538,
        &&label_80BAE53C,
        &&label_80BAE540,
        &&label_80BAE544,
        &&label_80BAE548,
        &&label_80BAE54C,
        &&label_80BAE550,
        &&label_80BAE554,
        &&label_80BAE558,
        &&label_80BAE55C,
        &&label_80BAE560,
        &&label_80BAE564,
        &&label_80BAE568,
        &&label_80BAE56C,
        &&label_80BAE570,
        &&label_80BAE574,
        &&label_80BAE578,
        &&label_80BAE57C,
        &&label_80BAE580,
        &&label_80BAE584,
        &&label_80BAE588,
        &&label_80BAE58C,
        &&label_80BAE590,
        &&label_80BAE594,
        &&label_80BAE598,
        &&label_80BAE59C,
        &&label_80BAE5A0,
        &&label_80BAE5A4,
        &&label_80BAE5A8,
        &&label_80BAE5AC,
        &&label_80BAE5B0,
        &&label_80BAE5B4,
        &&label_80BAE5B8,
        &&label_80BAE5BC,
        &&label_80BAE5C0,
        &&label_80BAE5C4,
        &&label_80BAE5C8,
        &&label_80BAE5CC,
        &&label_80BAE5D0,
        &&label_80BAE5D4,
        &&label_80BAE5D8,
        &&label_80BAE5DC,
        &&label_80BAE5E0,
        &&label_80BAE5E4,
        &&label_80BAE5E8,
        &&label_80BAE5EC,
        &&label_80BAE5F0,
        &&label_80BAE5F4,
        &&label_80BAE5F8,
        &&label_80BAE5FC,
        &&label_80BAE600,
        &&label_80BAE604,
        &&label_80BAE608,
        &&label_80BAE60C,
        &&label_80BAE610,
        &&label_80BAE614,
        &&label_80BAE618,
        &&label_80BAE61C,
        &&label_80BAE620,
        &&label_80BAE624,
        &&label_80BAE628,
        &&label_80BAE62C,
        &&label_80BAE630,
        &&label_80BAE634,
        &&label_80BAE638,
        &&label_80BAE63C,
        &&label_80BAE640,
        &&label_80BAE644,
        &&label_80BAE648,
        &&label_80BAE64C,
        &&label_80BAE650,
        &&label_80BAE654,
        &&label_80BAE658,
        &&label_80BAE65C,
        &&label_80BAE660,
        &&label_80BAE664,
        &&label_80BAE668,
        &&label_80BAE66C,
        &&label_80BAE670,
        &&label_80BAE674,
        &&label_80BAE678,
        &&label_80BAE67C,
        &&label_80BAE680,
        &&label_80BAE684,
        &&label_80BAE688,
        &&label_80BAE68C,
        &&label_80BAE690,
        &&label_80BAE694,
        &&label_80BAE698,
        &&label_80BAE69C,
        &&label_80BAE6A0,
        &&label_80BAE6A4,
        &&label_80BAE6A8,
        &&label_80BAE6AC,
        &&label_80BAE6B0,
        &&label_80BAE6B4,
        &&label_80BAE6B8,
        &&label_80BAE6BC,
        &&label_80BAE6C0,
        &&label_80BAE6C4,
        &&label_80BAE6C8,
        &&label_80BAE6CC,
        &&label_80BAE6D0,
        &&label_80BAE6D4,
        &&label_80BAE6D8,
        &&label_80BAE6DC,
        &&label_80BAE6E0,
        &&label_80BAE6E4,
        &&label_80BAE6E8,
        &&label_80BAE6EC,
        &&label_80BAE6F0,
        &&label_80BAE6F4,
        &&label_80BAE6F8,
        &&label_80BAE6FC,
        &&label_80BAE700,
        &&label_80BAE704,
        &&label_80BAE708,
        &&label_80BAE70C,
        &&label_80BAE710,
        &&label_80BAE714,
        &&label_80BAE718,
        &&label_80BAE71C,
        &&label_80BAE720,
        &&label_80BAE724,
        &&label_80BAE728,
        &&label_80BAE72C,
        &&label_80BAE730,
        &&label_80BAE734,
        &&label_80BAE738,
        &&label_80BAE73C,
        &&label_80BAE740,
        &&label_80BAE744,
        &&label_80BAE748,
        &&label_80BAE74C,
        &&label_80BAE750,
        &&label_80BAE754,
        &&label_80BAE758,
        &&label_80BAE75C,
        &&label_80BAE760,
        &&label_80BAE764,
        &&label_80BAE768,
        &&label_80BAE76C,
        &&label_80BAE770,
        &&label_80BAE774,
        &&label_80BAE778,
        &&label_80BAE77C,
        &&label_80BAE780,
        &&label_80BAE784,
        &&label_80BAE788,
        &&label_80BAE78C,
        &&label_80BAE790,
        &&label_80BAE794,
        &&label_80BAE798,
        &&label_80BAE79C,
        &&label_80BAE7A0,
        &&label_80BAE7A4,
        &&label_80BAE7A8,
        &&label_80BAE7AC,
        &&label_80BAE7B0,
        &&label_80BAE7B4,
        &&label_80BAE7B8,
        &&label_80BAE7BC,
        &&label_80BAE7C0,
        &&label_80BAE7C4,
        &&label_80BAE7C8,
        &&label_80BAE7CC,
        &&label_80BAE7D0,
        &&label_80BAE7D4,
        &&label_80BAE7D8,
        &&label_80BAE7DC,
        &&label_80BAE7E0,
        &&label_80BAE7E4,
        &&label_80BAE7E8,
        &&label_80BAE7EC,
        &&label_80BAE7F0,
        &&label_80BAE7F4,
        &&label_80BAE7F8,
        &&label_80BAE7FC,
        &&label_80BAE800,
        &&label_80BAE804,
        &&label_80BAE808,
        &&label_80BAE80C,
        &&label_80BAE810,
        &&label_80BAE814,
        &&label_80BAE818,
        &&label_80BAE81C,
        &&label_80BAE820,
        &&label_80BAE824,
        &&label_80BAE828,
        &&label_80BAE82C,
        &&label_80BAE830,
        &&label_80BAE834,
        &&label_80BAE838,
        &&label_80BAE83C,
        &&label_80BAE840,
        &&label_80BAE844,
        &&label_80BAE848,
        &&label_80BAE84C,
        &&label_80BAE850,
        &&label_80BAE854,
        &&label_80BAE858,
        &&label_80BAE85C,
        &&label_80BAE860,
        &&label_80BAE864,
        &&label_80BAE868,
        &&label_80BAE86C,
        &&label_80BAE870,
        &&label_80BAE874,
        &&label_80BAE878,
        &&label_80BAE87C,
        &&label_80BAE880,
        &&label_80BAE884,
        &&label_80BAE888,
        &&label_80BAE88C,
        &&label_80BAE890,
        &&label_80BAE894,
        &&label_80BAE898,
        &&label_80BAE89C,
        &&label_80BAE8A0,
        &&label_80BAE8A4,
        &&label_80BAE8A8,
        &&label_80BAE8AC,
        &&label_80BAE8B0,
        &&label_80BAE8B4,
        &&label_80BAE8B8,
        &&label_80BAE8BC,
        &&label_80BAE8C0,
        &&label_80BAE8C4,
        &&label_80BAE8C8,
        &&label_80BAE8CC,
        &&label_80BAE8D0,
        &&label_80BAE8D4,
        &&label_80BAE8D8,
        &&label_80BAE8DC,
        &&label_80BAE8E0,
        &&label_80BAE8E4,
        &&label_80BAE8E8,
        &&label_80BAE8EC,
        &&label_80BAE8F0,
        &&label_80BAE8F4,
        &&label_80BAE8F8,
        &&label_80BAE8FC,
        &&label_80BAE900,
        &&label_80BAE904,
        &&label_80BAE908,
        &&label_80BAE90C,
        &&label_80BAE910,
        &&label_80BAE914,
        &&label_80BAE918,
        &&label_80BAE91C,
        &&label_80BAE920,
        &&label_80BAE924,
        &&label_80BAE928,
        &&label_80BAE92C,
        &&label_80BAE930,
        &&label_80BAE934,
        &&label_80BAE938,
        &&label_80BAE93C,
        &&label_80BAE940,
        &&label_80BAE944,
        &&label_80BAE948,
        &&label_80BAE94C,
        &&label_80BAE950,
        &&label_80BAE954,
        &&label_80BAE958,
        &&label_80BAE95C,
        &&label_80BAE960,
        &&label_80BAE964,
        &&label_80BAE968,
        &&label_80BAE96C,
        &&label_80BAE970,
        &&label_80BAE974,
        &&label_80BAE978,
        &&label_80BAE97C,
        &&label_80BAE980,
        &&label_80BAE984,
        &&label_80BAE988,
        &&label_80BAE98C,
        &&label_80BAE990,
        &&label_80BAE994,
        &&label_80BAE998,
        &&label_80BAE99C,
        &&label_80BAE9A0,
        &&label_80BAE9A4,
        &&label_80BAE9A8,
        &&label_80BAE9AC,
        &&label_80BAE9B0,
        &&label_80BAE9B4,
        &&label_80BAE9B8,
        &&label_80BAE9BC,
        &&label_80BAE9C0,
        &&label_80BAE9C4,
        &&label_80BAE9C8,
        &&label_80BAE9CC,
        &&label_80BAE9D0,
        &&label_80BAE9D4,
        &&label_80BAE9D8,
        &&label_80BAE9DC,
        &&label_80BAE9E0,
        &&label_80BAE9E4,
        &&label_80BAE9E8,
        &&label_80BAE9EC,
        &&label_80BAE9F0,
        &&label_80BAE9F4,
        &&label_80BAE9F8,
        &&label_80BAE9FC,
        &&label_80BAEA00,
        &&label_80BAEA04,
        &&label_80BAEA08,
        &&label_80BAEA0C,
        &&label_80BAEA10,
        &&label_80BAEA14,
        &&label_80BAEA18,
        &&label_80BAEA1C,
        &&label_80BAEA20,
        &&label_80BAEA24,
        &&label_80BAEA28,
        &&label_80BAEA2C,
        &&label_80BAEA30,
        &&label_80BAEA34,
        &&label_80BAEA38
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BADE00u && pc <= 0x80BAEA38u && ((pc - 0x80BADE00u) & 3u) == 0u)
            goto *pc_table_80BADE00[(pc - 0x80BADE00u) >> 2];
    }
    return;
label_80BADE00:
    ctx->pc = 0x80BADE00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADE00: lfs     f0, 20(r30)
    if (!ppc_fp_available_inline(ctx, 0x80BADE00u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
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
label_80BADE04:
    ctx->pc = 0x80BADE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE04u)) return;
    // 80BADE04: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80BADE04u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80BADE08:
    ctx->pc = 0x80BADE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BADE08: lbz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADE0C:
    ctx->pc = 0x80BADE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE0Cu)) return;
    // 80BADE0C: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_80BADE10:
    ctx->pc = 0x80BADE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE10u)) return;
    // 80BADE10: cmpwi   r0, 0
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

label_80BADE14:
    ctx->pc = 0x80BADE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE14u)) return;
    // 80BADE14: bc    12, 2, 0x80BADE38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BADE38;
        }
    }

label_80BADE18:
    ctx->pc = 0x80BADE18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BADE18: fcmpo   cr0, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80BADE18u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[30], true);

label_80BADE1C:
    ctx->pc = 0x80BADE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE1Cu)) return;
    // 80BADE1C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80BADE20:
    ctx->pc = 0x80BADE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE20u)) return;
    // 80BADE20: bc    4, 2, 0x80BADE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BADE6C;
        }
    }

label_80BADE24:
    ctx->pc = 0x80BADE24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADE24: lwz     r0, 16(r30)
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
label_80BADE28:
    ctx->pc = 0x80BADE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE28u)) return;
    // 80BADE28: cmplwi  r0, 0x0000
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

label_80BADE2C:
    ctx->pc = 0x80BADE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE2Cu)) return;
    // 80BADE2C: bc    4, 2, 0x80BADE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BADE54;
        }
    }

label_80BADE30:
    ctx->pc = 0x80BADE30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BADE30: fsubs   f31, f31, f30
    if (!ppc_fp_available_inline(ctx, 0x80BADE30u)) return;
    ppc_fsubs(ctx, 31, 31, 30);

label_80BADE34:
    ctx->pc = 0x80BADE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE34u)) return;
    // 80BADE34: b       0x80BADE6C
    {
            goto label_80BADE6C;
    }

label_80BADE38:
    ctx->pc = 0x80BADE38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BADE38: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BADE3C:
    ctx->pc = 0x80BADE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE3Cu)) return;
    // 80BADE3C: addi    r3, r3, -12384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12384);

label_80BADE40:
    ctx->pc = 0x80BADE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADE40: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADE40u)) return;
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
label_80BADE44:
    ctx->pc = 0x80BADE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE44u)) return;
    // 80BADE44: fsubs   f0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80BADE44u)) return;
    ppc_fsubs(ctx, 0, 30, 0);

label_80BADE48:
    ctx->pc = 0x80BADE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE48u)) return;
    // 80BADE48: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80BADE48u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_80BADE4C:
    ctx->pc = 0x80BADE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE4Cu)) return;
    // 80BADE4C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80BADE50:
    ctx->pc = 0x80BADE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE50u)) return;
    // 80BADE50: bc    4, 2, 0x80BADE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BADE6C;
        }
    }

label_80BADE54:
    ctx->pc = 0x80BADE54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADE54: stw     r30, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADE58:
    ctx->pc = 0x80BADE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADE58: lwz     r0, 16(r30)
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
label_80BADE5C:
    ctx->pc = 0x80BADE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BADE5C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADE60:
    ctx->pc = 0x80BADE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE60u)) return;
    // 80BADE60: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BADE64:
    ctx->pc = 0x80BADE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE64u)) return;
    // 80BADE64: addi    r3, r3, -12408
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12408);

label_80BADE68:
    ctx->pc = 0x80BADE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BADE68: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADE68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80BADE6C:
    ctx->pc = 0x80BADE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADE6C: stfs     f31, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x80BADE6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADE70:
    ctx->pc = 0x80BADE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE70u)) return;
    // 80BADE70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BADE74:
    ctx->pc = 0x80BADE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE74u)) return;
    // 80BADE74: bl      0x80612BEC
    {
            ctx->lr = 0x80BADE78u;
            ctx->pc = 0x80612BECu;
            return;
    }

label_80BADE78:
    ctx->pc = 0x80BADE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BADE78: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BADE78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BADE78u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADE7C:
    ctx->pc = 0x80BADE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BADE7C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BADE7Cu)) return;
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
label_80BADE80:
    ctx->pc = 0x80BADE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BADE80: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BADE80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BADE80u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADE84:
    ctx->pc = 0x80BADE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BADE84: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BADE84u)) return;
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
label_80BADE88:
    ctx->pc = 0x80BADE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BADE88: lwz     r31, 60(r1)
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
label_80BADE8C:
    ctx->pc = 0x80BADE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BADE8C: lwz     r30, 56(r1)
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
label_80BADE90:
    ctx->pc = 0x80BADE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BADE90: lwz     r29, 52(r1)
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
label_80BADE94:
    ctx->pc = 0x80BADE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADE94: lwz     r28, 48(r1)
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
label_80BADE98:
    ctx->pc = 0x80BADE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADE98: lwz     r0, 100(r1)
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
label_80BADE9C:
    ctx->pc = 0x80BADE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BADE9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADE9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADEA0:
    ctx->pc = 0x80BADEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEA0u)) return;
    // 80BADEA0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80BADEA4:
    ctx->pc = 0x80BADEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEA4u)) return;
    // 80BADEA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BADEA8:
    ctx->pc = 0x80BADEA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADEA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BADEA8: stwu     r1, -16(r1)
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
label_80BADEAC:
    ctx->pc = 0x80BADEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADEAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADEB0:
    ctx->pc = 0x80BADEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BADEB0: stw     r0, 20(r1)
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
label_80BADEB4:
    ctx->pc = 0x80BADEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEB4u)) return;
    // 80BADEB4: bl      0x80013A1C
    {
            ctx->lr = 0x80BADEB8u;
            ctx->pc = 0x80013A1Cu;
            return;
    }

label_80BADEB8:
    ctx->pc = 0x80BADEB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADEB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BADEB8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80BADEB8u)) return;
    ppc_frsp(ctx, 1, 1);

label_80BADEBC:
    ctx->pc = 0x80BADEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADEBC: lwz     r0, 20(r1)
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
label_80BADEC0:
    ctx->pc = 0x80BADEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BADEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADEC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADEC4:
    ctx->pc = 0x80BADEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEC4u)) return;
    // 80BADEC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BADEC8:
    ctx->pc = 0x80BADEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEC8u)) return;
    // 80BADEC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BADECC:
    ctx->pc = 0x80BADECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADECC: stwu     r1, -16(r1)
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
label_80BADED0:
    ctx->pc = 0x80BADED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADED0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADED4:
    ctx->pc = 0x80BADED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BADED4: stw     r0, 20(r1)
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
label_80BADED8:
    ctx->pc = 0x80BADED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADED8: lwz     r3, 32(r3)
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
label_80BADEDC:
    ctx->pc = 0x80BADEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BADEDC: lwz     r3, 16(r3)
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
label_80BADEE0:
    ctx->pc = 0x80BADEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEE0u)) return;
    // 80BADEE0: bl      0x8050ED40
    {
            ctx->lr = 0x80BADEE4u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80BADEE4:
    ctx->pc = 0x80BADEE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADEE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADEE4: lwz     r0, 20(r1)
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
label_80BADEE8:
    ctx->pc = 0x80BADEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BADEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADEE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADEEC:
    ctx->pc = 0x80BADEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEECu)) return;
    // 80BADEEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BADEF0:
    ctx->pc = 0x80BADEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEF0u)) return;
    // 80BADEF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BADEF4:
    ctx->pc = 0x80BADEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BADEF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BADEF8:
    ctx->pc = 0x80BADEF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADEF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BADEF8: stwu     r1, -16(r1)
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
label_80BADEFC:
    ctx->pc = 0x80BADEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BADEFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF00:
    ctx->pc = 0x80BADF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BADF00: stw     r0, 20(r1)
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
label_80BADF04:
    ctx->pc = 0x80BADF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADF04: lwz     r5, 32(r3)
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
label_80BADF08:
    ctx->pc = 0x80BADF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADF08: lwz     r3, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF0C:
    ctx->pc = 0x80BADF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF0Cu)) return;
    // 80BADF0C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BADF10:
    ctx->pc = 0x80BADF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADF10: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF14:
    ctx->pc = 0x80BADF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF14u)) return;
    // 80BADF14: cmpwi   r0, 0
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

label_80BADF18:
    ctx->pc = 0x80BADF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF18u)) return;
    // 80BADF18: bc    4, 2, 0x80BADFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BADFAC;
        }
    }

label_80BADF1C:
    ctx->pc = 0x80BADF1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADF1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80BADF1C: lwz     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF20:
    ctx->pc = 0x80BADF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80BADF20: lwz     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF24:
    ctx->pc = 0x80BADF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80BADF24: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF28:
    ctx->pc = 0x80BADF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80BADF28: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BADF28u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80BADF2C:
    ctx->pc = 0x80BADF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF2Cu)) return;
    // 80BADF2C: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BADF30:
    ctx->pc = 0x80BADF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF30u)) return;
    // 80BADF30: addi    r3, r3, 4040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4040);

label_80BADF34:
    ctx->pc = 0x80BADF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80BADF34: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADF34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF38:
    ctx->pc = 0x80BADF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BADF38: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BADF38u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
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
label_80BADF3C:
    ctx->pc = 0x80BADF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80BADF3C: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADF3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF40:
    ctx->pc = 0x80BADF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80BADF40: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BADF40u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
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
label_80BADF44:
    ctx->pc = 0x80BADF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BADF44: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADF44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF48:
    ctx->pc = 0x80BADF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BADF48: lfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BADF48u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
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
label_80BADF4C:
    ctx->pc = 0x80BADF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BADF4C: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADF4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF50:
    ctx->pc = 0x80BADF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BADF50: lfs     f0, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BADF50u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
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
label_80BADF54:
    ctx->pc = 0x80BADF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BADF54: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BADF54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF58:
    ctx->pc = 0x80BADF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BADF58: lwz     r4, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF5C:
    ctx->pc = 0x80BADF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BADF5C: lwz     r0, 36(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF60:
    ctx->pc = 0x80BADF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BADF60: stw     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF64:
    ctx->pc = 0x80BADF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BADF64: stw     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF68:
    ctx->pc = 0x80BADF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BADF68: lwz     r0, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF6C:
    ctx->pc = 0x80BADF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BADF6C: stw     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF70:
    ctx->pc = 0x80BADF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BADF70: lwz     r4, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF74:
    ctx->pc = 0x80BADF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BADF74: lwz     r0, 48(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF78:
    ctx->pc = 0x80BADF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BADF78: stw     r4, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF7C:
    ctx->pc = 0x80BADF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BADF7C: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF80:
    ctx->pc = 0x80BADF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BADF80: lwz     r4, 52(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF84:
    ctx->pc = 0x80BADF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BADF84: lwz     r0, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF88:
    ctx->pc = 0x80BADF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BADF88: stw     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF8C:
    ctx->pc = 0x80BADF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BADF8C: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF90:
    ctx->pc = 0x80BADF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BADF90: lwz     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF94:
    ctx->pc = 0x80BADF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADF94: lwz     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF98:
    ctx->pc = 0x80BADF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADF98: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADF9C:
    ctx->pc = 0x80BADF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BADF9C: stw     r0, 24(r3)
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
label_80BADFA0:
    ctx->pc = 0x80BADFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADFA0: lwz     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADFA4:
    ctx->pc = 0x80BADFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BADFA4: stw     r0, 28(r3)
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
label_80BADFA8:
    ctx->pc = 0x80BADFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFA8u)) return;
    // 80BADFA8: bl      0x8044DE60
    {
            ctx->lr = 0x80BADFACu;
            ctx->pc = 0x8044DE60u;
            return;
    }

label_80BADFAC:
    ctx->pc = 0x80BADFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADFAC: lwz     r0, 20(r1)
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
label_80BADFB0:
    ctx->pc = 0x80BADFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BADFB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BADFB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADFB4:
    ctx->pc = 0x80BADFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFB4u)) return;
    // 80BADFB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BADFB8:
    ctx->pc = 0x80BADFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFB8u)) return;
    // 80BADFB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BADFBC:
    ctx->pc = 0x80BADFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BADFBC: stwu     r1, -16(r1)
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
label_80BADFC0:
    ctx->pc = 0x80BADFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BADFC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADFC4:
    ctx->pc = 0x80BADFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BADFC4: stw     r0, 20(r1)
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
label_80BADFC8:
    ctx->pc = 0x80BADFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BADFC8: stw     r31, 12(r1)
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
label_80BADFCC:
    ctx->pc = 0x80BADFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BADFCC: stw     r30, 8(r1)
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
label_80BADFD0:
    ctx->pc = 0x80BADFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFD0u)) return;
    // 80BADFD0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BADFD4:
    ctx->pc = 0x80BADFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFD4u)) return;
    // 80BADFD4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BADFD8:
    ctx->pc = 0x80BADFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFD8u)) return;
    // 80BADFD8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BADFDC:
    ctx->pc = 0x80BADFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFDCu)) return;
    // 80BADFDC: bl      0x8050FD60
    {
            ctx->lr = 0x80BADFE0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BADFE0:
    ctx->pc = 0x80BADFE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADFE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BADFE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BADFE4:
    ctx->pc = 0x80BADFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFE4u)) return;
    // 80BADFE4: cmplwi  r31, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BADFE8:
    ctx->pc = 0x80BADFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFE8u)) return;
    // 80BADFE8: bc    12, 2, 0x80BAE0A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE0A4;
        }
    }

label_80BADFEC:
    ctx->pc = 0x80BADFECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BADFECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BADFEC: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BADFF0:
    ctx->pc = 0x80BADFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFF0u)) return;
    // 80BADFF0: addi    r0, r3, -8456
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8456);

label_80BADFF4:
    ctx->pc = 0x80BADFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BADFF4: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BADFF8:
    ctx->pc = 0x80BADFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFF8u)) return;
    // 80BADFF8: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BADFFC:
    ctx->pc = 0x80BADFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BADFFCu)) return;
    // 80BADFFC: addi    r0, r3, -8460
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8460);

label_80BAE000:
    ctx->pc = 0x80BAE000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE000: stw     r0, 20(r31)
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
label_80BAE004:
    ctx->pc = 0x80BAE004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE004u)) return;
    // 80BAE004: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BAE008:
    ctx->pc = 0x80BAE008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE008u)) return;
    // 80BAE008: addi    r0, r3, -8500
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-8500);

label_80BAE00C:
    ctx->pc = 0x80BAE00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE00Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE00C: stw     r0, 24(r31)
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
label_80BAE010:
    ctx->pc = 0x80BAE010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE010: lwz     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE014:
    ctx->pc = 0x80BAE014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE014u)) return;
    // 80BAE014: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BAE018:
    ctx->pc = 0x80BAE018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE018: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE01C:
    ctx->pc = 0x80BAE01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE01C: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE020:
    ctx->pc = 0x80BAE020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE020u)) return;
    // 80BAE020: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80BAE024:
    ctx->pc = 0x80BAE024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE024u)) return;
    // 80BAE024: bl      0x8050EF60
    {
            ctx->lr = 0x80BAE028u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80BAE028:
    ctx->pc = 0x80BAE028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 31u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 31u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80BAE028: stw     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE02C:
    ctx->pc = 0x80BAE02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE02Cu)) return;
    // 80BAE02C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE030:
    ctx->pc = 0x80BAE030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE030u)) return;
    // 80BAE030: addi    r4, r4, -12352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12352);

label_80BAE034:
    ctx->pc = 0x80BAE034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80BAE034: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE034u)) return;
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
label_80BAE038:
    ctx->pc = 0x80BAE038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80BAE038: stfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE038u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE03C:
    ctx->pc = 0x80BAE03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE03Cu)) return;
    // 80BAE03C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE040:
    ctx->pc = 0x80BAE040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE040u)) return;
    // 80BAE040: addi    r4, r4, -12348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12348);

label_80BAE044:
    ctx->pc = 0x80BAE044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BAE044: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE044u)) return;
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
label_80BAE048:
    ctx->pc = 0x80BAE048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BAE048: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE048u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE04C:
    ctx->pc = 0x80BAE04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE04Cu)) return;
    // 80BAE04C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE050:
    ctx->pc = 0x80BAE050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE050u)) return;
    // 80BAE050: addi    r4, r4, -12344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12344);

label_80BAE054:
    ctx->pc = 0x80BAE054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BAE054: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE054u)) return;
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
label_80BAE058:
    ctx->pc = 0x80BAE058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE058u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BAE058: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE058u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE05C:
    ctx->pc = 0x80BAE05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE05Cu)) return;
    // 80BAE05C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE060:
    ctx->pc = 0x80BAE060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE060u)) return;
    // 80BAE060: addi    r4, r4, -12340
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12340);

label_80BAE064:
    ctx->pc = 0x80BAE064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BAE064: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE064u)) return;
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
label_80BAE068:
    ctx->pc = 0x80BAE068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BAE068: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE068u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE06C:
    ctx->pc = 0x80BAE06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE06Cu)) return;
    // 80BAE06C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE070:
    ctx->pc = 0x80BAE070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE070u)) return;
    // 80BAE070: addi    r4, r4, -12336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12336);

label_80BAE074:
    ctx->pc = 0x80BAE074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE074: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE074u)) return;
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
label_80BAE078:
    ctx->pc = 0x80BAE078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE078: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE078u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE07C:
    ctx->pc = 0x80BAE07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE07Cu)) return;
    // 80BAE07C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE080:
    ctx->pc = 0x80BAE080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE080u)) return;
    // 80BAE080: addi    r4, r4, -12332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12332);

label_80BAE084:
    ctx->pc = 0x80BAE084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE084: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE084u)) return;
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
label_80BAE088:
    ctx->pc = 0x80BAE088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE088: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE088u)) return;
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
label_80BAE08C:
    ctx->pc = 0x80BAE08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE08C: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE08Cu)) return;
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
label_80BAE090:
    ctx->pc = 0x80BAE090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE090: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE090u)) return;
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
label_80BAE094:
    ctx->pc = 0x80BAE094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE094: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE094u)) return;
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
label_80BAE098:
    ctx->pc = 0x80BAE098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE098: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE098u)) return;
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
label_80BAE09C:
    ctx->pc = 0x80BAE09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE09C: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE09Cu)) return;
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
label_80BAE0A0:
    ctx->pc = 0x80BAE0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE0A0: stfs     f1, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE0A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE0A4:
    ctx->pc = 0x80BAE0A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE0A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80BAE0A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE0A8:
    ctx->pc = 0x80BAE0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE0A8: lwz     r31, 12(r1)
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
label_80BAE0AC:
    ctx->pc = 0x80BAE0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE0AC: lwz     r30, 8(r1)
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
label_80BAE0B0:
    ctx->pc = 0x80BAE0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE0B0: lwz     r0, 20(r1)
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
label_80BAE0B4:
    ctx->pc = 0x80BAE0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE0B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE0B8:
    ctx->pc = 0x80BAE0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0B8u)) return;
    // 80BAE0B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE0BC:
    ctx->pc = 0x80BAE0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0BCu)) return;
    // 80BAE0BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE0C0:
    ctx->pc = 0x80BAE0C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE0C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE0C0: stwu     r1, -64(r1)
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
label_80BAE0C4:
    ctx->pc = 0x80BAE0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE0C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE0C8:
    ctx->pc = 0x80BAE0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE0C8: stw     r0, 68(r1)
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
label_80BAE0CC:
    ctx->pc = 0x80BAE0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0CCu)) return;
    // 80BAE0CC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BAE0D0:
    ctx->pc = 0x80BAE0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0D0u)) return;
    // 80BAE0D0: bl      0x80006DD4
    {
            ctx->lr = 0x80BAE0D4u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80BAE0D4:
    ctx->pc = 0x80BAE0D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE0D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BAE0D4: lwz     r27, 32(r3)
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
label_80BAE0D8:
    ctx->pc = 0x80BAE0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0D8u)) return;
    // 80BAE0D8: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BAE0DC:
    ctx->pc = 0x80BAE0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0DCu)) return;
    // 80BAE0DC: addi    r3, r3, -12328
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12328);

label_80BAE0E0:
    ctx->pc = 0x80BAE0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BAE0E0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE0E0u)) return;
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
label_80BAE0E4:
    ctx->pc = 0x80BAE0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BAE0E4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BAE0E4u)) return;
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
label_80BAE0E8:
    ctx->pc = 0x80BAE0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0E8u)) return;
    // 80BAE0E8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE0E8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BAE0EC:
    ctx->pc = 0x80BAE0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0ECu)) return;
    // 80BAE0EC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE0ECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BAE0F0:
    ctx->pc = 0x80BAE0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BAE0F0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE0F0u)) return;
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
label_80BAE0F4:
    ctx->pc = 0x80BAE0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BAE0F4: lwz     r31, 12(r1)
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
label_80BAE0F8:
    ctx->pc = 0x80BAE0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BAE0F8: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BAE0F8u)) return;
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
label_80BAE0FC:
    ctx->pc = 0x80BAE0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE0FCu)) return;
    // 80BAE0FC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE0FCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BAE100:
    ctx->pc = 0x80BAE100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE100u)) return;
    // 80BAE100: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE100u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BAE104:
    ctx->pc = 0x80BAE104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BAE104: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE104u)) return;
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
label_80BAE108:
    ctx->pc = 0x80BAE108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BAE108: lwz     r30, 20(r1)
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
label_80BAE10C:
    ctx->pc = 0x80BAE10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BAE10C: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BAE10Cu)) return;
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
label_80BAE110:
    ctx->pc = 0x80BAE110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE110u)) return;
    // 80BAE110: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE110u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BAE114:
    ctx->pc = 0x80BAE114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE114u)) return;
    // 80BAE114: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE114u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BAE118:
    ctx->pc = 0x80BAE118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE118: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE118u)) return;
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
label_80BAE11C:
    ctx->pc = 0x80BAE11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE11Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE11C: lwz     r29, 28(r1)
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
label_80BAE120:
    ctx->pc = 0x80BAE120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE120: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BAE120u)) return;
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
label_80BAE124:
    ctx->pc = 0x80BAE124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE124u)) return;
    // 80BAE124: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE124u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BAE128:
    ctx->pc = 0x80BAE128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE128u)) return;
    // 80BAE128: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE128u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BAE12C:
    ctx->pc = 0x80BAE12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE12Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE12C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE12Cu)) return;
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
label_80BAE130:
    ctx->pc = 0x80BAE130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE130: lwz     r28, 36(r1)
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
label_80BAE134:
    ctx->pc = 0x80BAE134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE134u)) return;
    // 80BAE134: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BAE138:
    ctx->pc = 0x80BAE138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE138u)) return;
    // 80BAE138: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80BAE13C:
    ctx->pc = 0x80BAE13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE13C: lwz     r0, 0(r3)
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
label_80BAE140:
    ctx->pc = 0x80BAE140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE140u)) return;
    // 80BAE140: cmpwi   r0, 0
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

label_80BAE144:
    ctx->pc = 0x80BAE144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE144u)) return;
    // 80BAE144: bc    4, 2, 0x80BAE1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE1FC;
        }
    }

label_80BAE148:
    ctx->pc = 0x80BAE148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE148: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BAE14C:
    ctx->pc = 0x80BAE14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE14Cu)) return;
    // 80BAE14C: cmplwi  r0, 0x0000
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

label_80BAE150:
    ctx->pc = 0x80BAE150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE150u)) return;
    // 80BAE150: bc    12, 2, 0x80BAE1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE1FC;
        }
    }

label_80BAE154:
    ctx->pc = 0x80BAE154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE154: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BAE158:
    ctx->pc = 0x80BAE158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE158u)) return;
    // 80BAE158: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80BAE15C:
    ctx->pc = 0x80BAE15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE15Cu)) return;
    // 80BAE15C: bl      0x8060F4F8
    {
            ctx->lr = 0x80BAE160u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BAE160:
    ctx->pc = 0x80BAE160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE160: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BAE164:
    ctx->pc = 0x80BAE164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE164u)) return;
    // 80BAE164: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BAE168:
    ctx->pc = 0x80BAE168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE168u)) return;
    // 80BAE168: bl      0x8060F4F8
    {
            ctx->lr = 0x80BAE16Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BAE16C:
    ctx->pc = 0x80BAE16Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE16Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE16C: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BAE16Cu)) return;
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
label_80BAE170:
    ctx->pc = 0x80BAE170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE170u)) return;
    // 80BAE170: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BAE174:
    ctx->pc = 0x80BAE174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE174u)) return;
    // 80BAE174: addi    r3, r3, -12320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12320);

label_80BAE178:
    ctx->pc = 0x80BAE178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE178: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE178u)) return;
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
label_80BAE17C:
    ctx->pc = 0x80BAE17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE17Cu)) return;
    // 80BAE17C: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE17Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80BAE180:
    ctx->pc = 0x80BAE180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE180u)) return;
    // 80BAE180: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80BAE184:
    ctx->pc = 0x80BAE184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE184u)) return;
    // 80BAE184: bc    4, 2, 0x80BAE198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE198;
        }
    }

label_80BAE188:
    ctx->pc = 0x80BAE188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BAE188: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BAE18C:
    ctx->pc = 0x80BAE18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE18Cu)) return;
    // 80BAE18C: addi    r3, r3, -12324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12324);

label_80BAE190:
    ctx->pc = 0x80BAE190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE190: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE190u)) return;
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
label_80BAE194:
    ctx->pc = 0x80BAE194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE194u)) return;
    // 80BAE194: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE194u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80BAE198:
    ctx->pc = 0x80BAE198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE198: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BAE19C:
    ctx->pc = 0x80BAE19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE19Cu)) return;
    // 80BAE19C: cmplwi  r0, 0x00FF
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

label_80BAE1A0:
    ctx->pc = 0x80BAE1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1A0u)) return;
    // 80BAE1A0: bc    4, 1, 0x80BAE1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE1A8;
        }
    }

label_80BAE1A4:
    ctx->pc = 0x80BAE1A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE1A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE1A4: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80BAE1A8:
    ctx->pc = 0x80BAE1A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE1A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80BAE1A8: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BAE1AC:
    ctx->pc = 0x80BAE1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1ACu)) return;
    // 80BAE1AC: addi    r3, r3, -12316
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12316);

label_80BAE1B0:
    ctx->pc = 0x80BAE1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BAE1B0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE1B0u)) return;
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
label_80BAE1B4:
    ctx->pc = 0x80BAE1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1B4u)) return;
    // 80BAE1B4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80BAE1B4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80BAE1B8:
    ctx->pc = 0x80BAE1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1B8u)) return;
    // 80BAE1B8: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BAE1BC:
    ctx->pc = 0x80BAE1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1BCu)) return;
    // 80BAE1BC: addi    r3, r3, -12312
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12312);

label_80BAE1C0:
    ctx->pc = 0x80BAE1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BAE1C0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE1C0u)) return;
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
label_80BAE1C4:
    ctx->pc = 0x80BAE1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1C4u)) return;
    // 80BAE1C4: lis     r3, -27521
    ctx->gpr[3] = ((u32)(s32)(-27521) << 16);

label_80BAE1C8:
    ctx->pc = 0x80BAE1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1C8u)) return;
    // 80BAE1C8: addi    r3, r3, -12308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-12308);

label_80BAE1CC:
    ctx->pc = 0x80BAE1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE1CC: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE1CCu)) return;
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
label_80BAE1D0:
    ctx->pc = 0x80BAE1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1D0u)) return;
    // 80BAE1D0: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80BAE1D4:
    ctx->pc = 0x80BAE1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1D4u)) return;
    // 80BAE1D4: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80BAE1D8:
    ctx->pc = 0x80BAE1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1D8u)) return;
    // 80BAE1D8: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80BAE1DC:
    ctx->pc = 0x80BAE1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1DCu)) return;
    // 80BAE1DC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BAE1E0:
    ctx->pc = 0x80BAE1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1E0u)) return;
    // 80BAE1E0: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80BAE1E4:
    ctx->pc = 0x80BAE1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1E4u)) return;
    // 80BAE1E4: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80BAE1E8:
    ctx->pc = 0x80BAE1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1E8u)) return;
    // 80BAE1E8: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80BAE1EC:
    ctx->pc = 0x80BAE1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1ECu)) return;
    // 80BAE1EC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80BAE1F0:
    ctx->pc = 0x80BAE1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1F0u)) return;
    // 80BAE1F0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80BAE1F4:
    ctx->pc = 0x80BAE1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1F4u)) return;
    // 80BAE1F4: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80BAE1F8:
    ctx->pc = 0x80BAE1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE1F8u)) return;
    // 80BAE1F8: bl      0x80BAE214
    {
            ctx->lr = 0x80BAE1FCu;
            goto label_80BAE214;
    }

label_80BAE1FC:
    ctx->pc = 0x80BAE1FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE1FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BAE1FC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BAE200:
    ctx->pc = 0x80BAE200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE200u)) return;
    // 80BAE200: bl      0x80006E20
    {
            ctx->lr = 0x80BAE204u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80BAE204:
    ctx->pc = 0x80BAE204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE204: lwz     r0, 68(r1)
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
label_80BAE208:
    ctx->pc = 0x80BAE208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE208: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE20C:
    ctx->pc = 0x80BAE20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE20Cu)) return;
    // 80BAE20C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80BAE210:
    ctx->pc = 0x80BAE210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE210u)) return;
    // 80BAE210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE214:
    ctx->pc = 0x80BAE214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE214: stwu     r1, -16(r1)
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
label_80BAE218:
    ctx->pc = 0x80BAE218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE218: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE21C:
    ctx->pc = 0x80BAE21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE21C: stw     r0, 20(r1)
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
label_80BAE220:
    ctx->pc = 0x80BAE220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE220u)) return;
    // 80BAE220: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BAE224:
    ctx->pc = 0x80BAE224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE224u)) return;
    // 80BAE224: bl      0x80607948
    {
            ctx->lr = 0x80BAE228u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80BAE228:
    ctx->pc = 0x80BAE228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE228: lwz     r0, 20(r1)
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
label_80BAE22C:
    ctx->pc = 0x80BAE22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE22C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE230:
    ctx->pc = 0x80BAE230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE230u)) return;
    // 80BAE230: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE234:
    ctx->pc = 0x80BAE234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE234u)) return;
    // 80BAE234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE238:
    ctx->pc = 0x80BAE238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE238: stwu     r1, -16(r1)
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
label_80BAE23C:
    ctx->pc = 0x80BAE23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE23C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE240:
    ctx->pc = 0x80BAE240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE240: stw     r0, 20(r1)
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
label_80BAE244:
    ctx->pc = 0x80BAE244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE244: lwz     r5, 32(r3)
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
label_80BAE248:
    ctx->pc = 0x80BAE248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE248: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE248u)) return;
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
label_80BAE24C:
    ctx->pc = 0x80BAE24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE24C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE24Cu)) return;
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
label_80BAE250:
    ctx->pc = 0x80BAE250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE250u)) return;
    // 80BAE250: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE250u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80BAE254:
    ctx->pc = 0x80BAE254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE254u)) return;
    // 80BAE254: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE258:
    ctx->pc = 0x80BAE258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE258u)) return;
    // 80BAE258: addi    r4, r4, -12304
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12304);

label_80BAE25C:
    ctx->pc = 0x80BAE25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE25C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE25Cu)) return;
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
label_80BAE260:
    ctx->pc = 0x80BAE260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE260u)) return;
    // 80BAE260: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE260u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BAE264:
    ctx->pc = 0x80BAE264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE264u)) return;
    // 80BAE264: bc    4, 1, 0x80BAE270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE270;
        }
    }

label_80BAE268:
    ctx->pc = 0x80BAE268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BAE268: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE268u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BAE26C:
    ctx->pc = 0x80BAE26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE26Cu)) return;
    // 80BAE26C: b       0x80BAE288
    {
            goto label_80BAE288;
    }

label_80BAE270:
    ctx->pc = 0x80BAE270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BAE270: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE274:
    ctx->pc = 0x80BAE274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE274u)) return;
    // 80BAE274: addi    r4, r4, -12316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12316);

label_80BAE278:
    ctx->pc = 0x80BAE278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE278: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE278u)) return;
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
label_80BAE27C:
    ctx->pc = 0x80BAE27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE27Cu)) return;
    // 80BAE27C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE27Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BAE280:
    ctx->pc = 0x80BAE280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE280u)) return;
    // 80BAE280: bc    4, 0, 0x80BAE288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE288;
        }
    }

label_80BAE284:
    ctx->pc = 0x80BAE284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE284: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BAE284u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BAE288:
    ctx->pc = 0x80BAE288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE288: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE288u)) return;
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
label_80BAE28C:
    ctx->pc = 0x80BAE28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE28Cu)) return;
    // 80BAE28C: bl      0x80BAE0C0
    {
            ctx->lr = 0x80BAE290u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE0C0u;
                return;
            }
            goto label_80BAE0C0;
    }

label_80BAE290:
    ctx->pc = 0x80BAE290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE290: lwz     r0, 20(r1)
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
label_80BAE294:
    ctx->pc = 0x80BAE294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE294: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE298:
    ctx->pc = 0x80BAE298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE298u)) return;
    // 80BAE298: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE29C:
    ctx->pc = 0x80BAE29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE29Cu)) return;
    // 80BAE29C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE2A0:
    ctx->pc = 0x80BAE2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE2A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE2A4:
    ctx->pc = 0x80BAE2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BAE2A4: stwu     r1, -16(r1)
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
label_80BAE2A8:
    ctx->pc = 0x80BAE2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE2A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE2AC:
    ctx->pc = 0x80BAE2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE2AC: stw     r0, 20(r1)
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
label_80BAE2B0:
    ctx->pc = 0x80BAE2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2B0u)) return;
    // 80BAE2B0: lis     r4, -32581
    ctx->gpr[4] = ((u32)(s32)(-32581) << 16);

label_80BAE2B4:
    ctx->pc = 0x80BAE2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2B4u)) return;
    // 80BAE2B4: addi    r0, r4, -7624
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7624);

label_80BAE2B8:
    ctx->pc = 0x80BAE2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE2B8: stw     r0, 16(r3)
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
label_80BAE2BC:
    ctx->pc = 0x80BAE2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2BCu)) return;
    // 80BAE2BC: lis     r4, -32581
    ctx->gpr[4] = ((u32)(s32)(-32581) << 16);

label_80BAE2C0:
    ctx->pc = 0x80BAE2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2C0u)) return;
    // 80BAE2C0: addi    r0, r4, -8000
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8000);

label_80BAE2C4:
    ctx->pc = 0x80BAE2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE2C4: stw     r0, 20(r3)
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
label_80BAE2C8:
    ctx->pc = 0x80BAE2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2C8u)) return;
    // 80BAE2C8: lis     r4, -32581
    ctx->gpr[4] = ((u32)(s32)(-32581) << 16);

label_80BAE2CC:
    ctx->pc = 0x80BAE2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2CCu)) return;
    // 80BAE2CC: addi    r0, r4, -7520
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7520);

label_80BAE2D0:
    ctx->pc = 0x80BAE2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE2D0: stw     r0, 24(r3)
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
label_80BAE2D4:
    ctx->pc = 0x80BAE2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2D4u)) return;
    // 80BAE2D4: bl      0x80BAE238
    {
            ctx->lr = 0x80BAE2D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE238u;
                return;
            }
            goto label_80BAE238;
    }

label_80BAE2D8:
    ctx->pc = 0x80BAE2D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE2D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE2D8: lwz     r0, 20(r1)
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
label_80BAE2DC:
    ctx->pc = 0x80BAE2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE2DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE2E0:
    ctx->pc = 0x80BAE2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2E0u)) return;
    // 80BAE2E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE2E4:
    ctx->pc = 0x80BAE2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2E4u)) return;
    // 80BAE2E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE2E8:
    ctx->pc = 0x80BAE2E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE2E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BAE2E8: stwu     r1, -96(r1)
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
label_80BAE2EC:
    ctx->pc = 0x80BAE2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BAE2EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE2F0:
    ctx->pc = 0x80BAE2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BAE2F0: stw     r0, 100(r1)
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
label_80BAE2F4:
    ctx->pc = 0x80BAE2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BAE2F4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE2F4u)) return;
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
label_80BAE2F8:
    ctx->pc = 0x80BAE2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BAE2F8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE2F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80BAE2F8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE2FC:
    ctx->pc = 0x80BAE2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE2FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BAE2FC: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE2FCu)) return;
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
label_80BAE300:
    ctx->pc = 0x80BAE300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BAE300: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE300u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80BAE300u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE304:
    ctx->pc = 0x80BAE304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BAE304: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE304u)) return;
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
label_80BAE308:
    ctx->pc = 0x80BAE308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BAE308: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE308u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80BAE308u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE30C:
    ctx->pc = 0x80BAE30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE30Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BAE30C: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE30Cu)) return;
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
label_80BAE310:
    ctx->pc = 0x80BAE310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BAE310: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE310u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80BAE310u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE314:
    ctx->pc = 0x80BAE314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE314: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE314u)) return;
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
label_80BAE318:
    ctx->pc = 0x80BAE318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE318: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE318u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80BAE318u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE31C:
    ctx->pc = 0x80BAE31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE31Cu)) return;
    // 80BAE31C: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80BAE31Cu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80BAE320:
    ctx->pc = 0x80BAE320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE320u)) return;
    // 80BAE320: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80BAE320u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80BAE324:
    ctx->pc = 0x80BAE324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE324u)) return;
    // 80BAE324: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80BAE324u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80BAE328:
    ctx->pc = 0x80BAE328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE328u)) return;
    // 80BAE328: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80BAE328u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80BAE32C:
    ctx->pc = 0x80BAE32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE32Cu)) return;
    // 80BAE32C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80BAE32Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80BAE330:
    ctx->pc = 0x80BAE330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE330u)) return;
    // 80BAE330: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BAE334:
    ctx->pc = 0x80BAE334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE334u)) return;
    // 80BAE334: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BAE338:
    ctx->pc = 0x80BAE338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE338u)) return;
    // 80BAE338: lis     r5, -32581
    ctx->gpr[5] = ((u32)(s32)(-32581) << 16);

label_80BAE33C:
    ctx->pc = 0x80BAE33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE33Cu)) return;
    // 80BAE33C: addi    r5, r5, -7516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7516);

label_80BAE340:
    ctx->pc = 0x80BAE340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE340u)) return;
    // 80BAE340: bl      0x8050FD60
    {
            ctx->lr = 0x80BAE344u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BAE344:
    ctx->pc = 0x80BAE344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BAE344: lwz     r5, 32(r3)
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
label_80BAE348:
    ctx->pc = 0x80BAE348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BAE348: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE348u)) return;
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
label_80BAE34C:
    ctx->pc = 0x80BAE34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BAE34C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE34Cu)) return;
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
label_80BAE350:
    ctx->pc = 0x80BAE350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BAE350: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE350u)) return;
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
label_80BAE354:
    ctx->pc = 0x80BAE354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BAE354: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE354u)) return;
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
label_80BAE358:
    ctx->pc = 0x80BAE358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BAE358: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE358u)) return;
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
label_80BAE35C:
    ctx->pc = 0x80BAE35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE35Cu)) return;
    // 80BAE35C: lis     r4, -27521
    ctx->gpr[4] = ((u32)(s32)(-27521) << 16);

label_80BAE360:
    ctx->pc = 0x80BAE360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE360u)) return;
    // 80BAE360: addi    r4, r4, -12320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12320);

label_80BAE364:
    ctx->pc = 0x80BAE364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BAE364: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BAE364u)) return;
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
label_80BAE368:
    ctx->pc = 0x80BAE368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BAE368: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BAE368u)) return;
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
label_80BAE36C:
    ctx->pc = 0x80BAE36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BAE36C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE36Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BAE36Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE370:
    ctx->pc = 0x80BAE370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BAE370: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE370u)) return;
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
label_80BAE374:
    ctx->pc = 0x80BAE374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BAE374: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BAE374u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE378:
    ctx->pc = 0x80BAE378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE378: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE378u)) return;
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
label_80BAE37C:
    ctx->pc = 0x80BAE37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE37C: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE37Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80BAE37Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE380:
    ctx->pc = 0x80BAE380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE380: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE380u)) return;
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
label_80BAE384:
    ctx->pc = 0x80BAE384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE384: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80BAE384u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE388:
    ctx->pc = 0x80BAE388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE388: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE388u)) return;
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
label_80BAE38C:
    ctx->pc = 0x80BAE38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE38C: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BAE38Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80BAE38Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE390:
    ctx->pc = 0x80BAE390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE390: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BAE390u)) return;
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
label_80BAE394:
    ctx->pc = 0x80BAE394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE394: lwz     r0, 100(r1)
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
label_80BAE398:
    ctx->pc = 0x80BAE398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE398: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE39C:
    ctx->pc = 0x80BAE39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE39Cu)) return;
    // 80BAE39C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80BAE3A0:
    ctx->pc = 0x80BAE3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3A0u)) return;
    // 80BAE3A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE3A4:
    ctx->pc = 0x80BAE3A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE3A4: lwz     r3, 32(r3)
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
label_80BAE3A8:
    ctx->pc = 0x80BAE3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE3A8: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE3A8u)) return;
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
label_80BAE3AC:
    ctx->pc = 0x80BAE3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3ACu)) return;
    // 80BAE3AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE3B0:
    ctx->pc = 0x80BAE3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE3B0: lwz     r3, 32(r3)
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
label_80BAE3B4:
    ctx->pc = 0x80BAE3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE3B4: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE3B4u)) return;
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
label_80BAE3B8:
    ctx->pc = 0x80BAE3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3B8u)) return;
    // 80BAE3B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE3BC:
    ctx->pc = 0x80BAE3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE3BC: lwz     r3, 32(r3)
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
label_80BAE3C0:
    ctx->pc = 0x80BAE3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE3C0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE3C0u)) return;
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
label_80BAE3C4:
    ctx->pc = 0x80BAE3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE3C4: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE3C4u)) return;
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
label_80BAE3C8:
    ctx->pc = 0x80BAE3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE3C8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE3C8u)) return;
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
label_80BAE3CC:
    ctx->pc = 0x80BAE3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3CCu)) return;
    // 80BAE3CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE3D0:
    ctx->pc = 0x80BAE3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE3D0: lwz     r3, 32(r3)
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
label_80BAE3D4:
    ctx->pc = 0x80BAE3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE3D4: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BAE3D4u)) return;
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
label_80BAE3D8:
    ctx->pc = 0x80BAE3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3D8u)) return;
    // 80BAE3D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE3DC:
    ctx->pc = 0x80BAE3DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE3DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE3DC: stwu     r1, -16(r1)
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
label_80BAE3E0:
    ctx->pc = 0x80BAE3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE3E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE3E4:
    ctx->pc = 0x80BAE3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE3E4: stw     r0, 20(r1)
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
label_80BAE3E8:
    ctx->pc = 0x80BAE3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE3E8: lwz     r3, 32(r3)
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
label_80BAE3EC:
    ctx->pc = 0x80BAE3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE3EC: lwz     r3, 16(r3)
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
label_80BAE3F0:
    ctx->pc = 0x80BAE3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3F0u)) return;
    // 80BAE3F0: bl      0x80509CF0
    {
            ctx->lr = 0x80BAE3F4u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80BAE3F4:
    ctx->pc = 0x80BAE3F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE3F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE3F4: lwz     r0, 20(r1)
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
label_80BAE3F8:
    ctx->pc = 0x80BAE3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE3F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE3FC:
    ctx->pc = 0x80BAE3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE3FCu)) return;
    // 80BAE3FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE400:
    ctx->pc = 0x80BAE400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE400u)) return;
    // 80BAE400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE404:
    ctx->pc = 0x80BAE404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE404: stwu     r1, -32(r1)
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
label_80BAE408:
    ctx->pc = 0x80BAE408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE408: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE40C:
    ctx->pc = 0x80BAE40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE40C: stw     r0, 36(r1)
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
label_80BAE410:
    ctx->pc = 0x80BAE410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE410: stw     r31, 28(r1)
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
label_80BAE414:
    ctx->pc = 0x80BAE414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE414: stw     r30, 24(r1)
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
label_80BAE418:
    ctx->pc = 0x80BAE418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE418: stw     r29, 20(r1)
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
label_80BAE41C:
    ctx->pc = 0x80BAE41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE41C: lwz     r31, 32(r3)
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
label_80BAE420:
    ctx->pc = 0x80BAE420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE420: lwz     r30, 16(r31)
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
label_80BAE424:
    ctx->pc = 0x80BAE424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE424: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE428:
    ctx->pc = 0x80BAE428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE428u)) return;
    // 80BAE428: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE42C:
    ctx->pc = 0x80BAE42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE42Cu)) return;
    // 80BAE42C: bc    4, 1, 0x80BAE464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE464;
        }
    }

label_80BAE430:
    ctx->pc = 0x80BAE430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BAE430: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE434:
    ctx->pc = 0x80BAE434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE434u)) return;
    // 80BAE434: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BAE438:
    ctx->pc = 0x80BAE438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BAE438: lwz     r0, 20(r31)
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
label_80BAE43C:
    ctx->pc = 0x80BAE43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BAE43Cu)) return;
    // 80BAE43C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BAE440:
    ctx->pc = 0x80BAE440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE440u)) return;
    // 80BAE440: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BAE444:
    ctx->pc = 0x80BAE444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BAE444u)) return;
    // 80BAE444: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BAE448:
    ctx->pc = 0x80BAE448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE448u)) return;
    // 80BAE448: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BAE44C:
    ctx->pc = 0x80BAE44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE44Cu)) return;
    // 80BAE44C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BAE450:
    ctx->pc = 0x80BAE450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE450u)) return;
    // 80BAE450: bl      0x80509C74
    {
            ctx->lr = 0x80BAE454u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BAE454:
    ctx->pc = 0x80BAE454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE454: stw     r29, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE458:
    ctx->pc = 0x80BAE458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE458: lwz     r3, 28(r31)
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
label_80BAE45C:
    ctx->pc = 0x80BAE45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE45Cu)) return;
    // 80BAE45C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BAE460:
    ctx->pc = 0x80BAE460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE460: stw     r0, 28(r31)
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
label_80BAE464:
    ctx->pc = 0x80BAE464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE464: lwz     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE468:
    ctx->pc = 0x80BAE468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE468u)) return;
    // 80BAE468: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE46C:
    ctx->pc = 0x80BAE46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE46Cu)) return;
    // 80BAE46C: bc    4, 1, 0x80BAE4A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE4A4;
        }
    }

label_80BAE470:
    ctx->pc = 0x80BAE470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BAE470: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE474:
    ctx->pc = 0x80BAE474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE474u)) return;
    // 80BAE474: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BAE478:
    ctx->pc = 0x80BAE478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BAE478: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE47C:
    ctx->pc = 0x80BAE47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BAE47Cu)) return;
    // 80BAE47C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BAE480:
    ctx->pc = 0x80BAE480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE480u)) return;
    // 80BAE480: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BAE484:
    ctx->pc = 0x80BAE484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BAE484u)) return;
    // 80BAE484: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BAE488:
    ctx->pc = 0x80BAE488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE488u)) return;
    // 80BAE488: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BAE48C:
    ctx->pc = 0x80BAE48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE48Cu)) return;
    // 80BAE48C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BAE490:
    ctx->pc = 0x80BAE490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE490u)) return;
    // 80BAE490: bl      0x80509BF8
    {
            ctx->lr = 0x80BAE494u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BAE494:
    ctx->pc = 0x80BAE494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE494: stw     r29, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE498:
    ctx->pc = 0x80BAE498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE498: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE49C:
    ctx->pc = 0x80BAE49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE49Cu)) return;
    // 80BAE49C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BAE4A0:
    ctx->pc = 0x80BAE4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE4A0: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4A4:
    ctx->pc = 0x80BAE4A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE4A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE4A4: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4A8:
    ctx->pc = 0x80BAE4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4A8u)) return;
    // 80BAE4A8: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE4AC:
    ctx->pc = 0x80BAE4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4ACu)) return;
    // 80BAE4AC: bc    4, 1, 0x80BAE4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE4E4;
        }
    }

label_80BAE4B0:
    ctx->pc = 0x80BAE4B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE4B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BAE4B0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4B4:
    ctx->pc = 0x80BAE4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4B4u)) return;
    // 80BAE4B4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BAE4B8:
    ctx->pc = 0x80BAE4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BAE4B8: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4BC:
    ctx->pc = 0x80BAE4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BAE4BCu)) return;
    // 80BAE4BC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BAE4C0:
    ctx->pc = 0x80BAE4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4C0u)) return;
    // 80BAE4C0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BAE4C4:
    ctx->pc = 0x80BAE4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BAE4C4u)) return;
    // 80BAE4C4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BAE4C8:
    ctx->pc = 0x80BAE4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4C8u)) return;
    // 80BAE4C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BAE4CC:
    ctx->pc = 0x80BAE4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4CCu)) return;
    // 80BAE4CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BAE4D0:
    ctx->pc = 0x80BAE4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4D0u)) return;
    // 80BAE4D0: bl      0x80509B94
    {
            ctx->lr = 0x80BAE4D4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BAE4D4:
    ctx->pc = 0x80BAE4D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE4D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE4D4: stw     r29, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4D8:
    ctx->pc = 0x80BAE4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE4D8: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4DC:
    ctx->pc = 0x80BAE4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4DCu)) return;
    // 80BAE4DC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BAE4E0:
    ctx->pc = 0x80BAE4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE4E0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4E4:
    ctx->pc = 0x80BAE4E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE4E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE4E4: lwz     r31, 28(r1)
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
label_80BAE4E8:
    ctx->pc = 0x80BAE4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE4E8: lwz     r30, 24(r1)
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
label_80BAE4EC:
    ctx->pc = 0x80BAE4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE4EC: lwz     r29, 20(r1)
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
label_80BAE4F0:
    ctx->pc = 0x80BAE4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE4F0: lwz     r0, 36(r1)
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
label_80BAE4F4:
    ctx->pc = 0x80BAE4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE4F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE4F8:
    ctx->pc = 0x80BAE4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4F8u)) return;
    // 80BAE4F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BAE4FC:
    ctx->pc = 0x80BAE4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE4FCu)) return;
    // 80BAE4FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE500:
    ctx->pc = 0x80BAE500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE500: stwu     r1, -32(r1)
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
label_80BAE504:
    ctx->pc = 0x80BAE504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE504: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE508:
    ctx->pc = 0x80BAE508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE508: stw     r0, 36(r1)
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
label_80BAE50C:
    ctx->pc = 0x80BAE50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE50C: stw     r31, 28(r1)
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
label_80BAE510:
    ctx->pc = 0x80BAE510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE510: stw     r30, 24(r1)
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
label_80BAE514:
    ctx->pc = 0x80BAE514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE514: stw     r29, 20(r1)
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
label_80BAE518:
    ctx->pc = 0x80BAE518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE518u)) return;
    // 80BAE518: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BAE51C:
    ctx->pc = 0x80BAE51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE51Cu)) return;
    // 80BAE51C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE520:
    ctx->pc = 0x80BAE520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE520u)) return;
    // 80BAE520: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BAE524:
    ctx->pc = 0x80BAE524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE524u)) return;
    // 80BAE524: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BAE528:
    ctx->pc = 0x80BAE528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE528u)) return;
    // 80BAE528: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BAE52C:
    ctx->pc = 0x80BAE52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE52Cu)) return;
    // 80BAE52C: bl      0x8050FD60
    {
            ctx->lr = 0x80BAE530u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BAE530:
    ctx->pc = 0x80BAE530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE530: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BAE534:
    ctx->pc = 0x80BAE534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE534u)) return;
    // 80BAE534: cmplwi  r31, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE538:
    ctx->pc = 0x80BAE538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE538u)) return;
    // 80BAE538: bc    12, 2, 0x80BAE59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE59C;
        }
    }

label_80BAE53C:
    ctx->pc = 0x80BAE53Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE53Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BAE53C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BAE540:
    ctx->pc = 0x80BAE540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE540u)) return;
    // 80BAE540: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE544:
    ctx->pc = 0x80BAE544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE544u)) return;
    // 80BAE544: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BAE548:
    ctx->pc = 0x80BAE548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE548u)) return;
    // 80BAE548: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BAE54C:
    ctx->pc = 0x80BAE54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE54Cu)) return;
    // 80BAE54C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BAE550:
    ctx->pc = 0x80BAE550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE550u)) return;
    // 80BAE550: bl      0x8050A0D4
    {
            ctx->lr = 0x80BAE554u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BAE554:
    ctx->pc = 0x80BAE554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80BAE554: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BAE558:
    ctx->pc = 0x80BAE558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE558u)) return;
    // 80BAE558: addi    r0, r3, -7164
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7164);

label_80BAE55C:
    ctx->pc = 0x80BAE55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BAE55C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE560:
    ctx->pc = 0x80BAE560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE560u)) return;
    // 80BAE560: lis     r3, -32581
    ctx->gpr[3] = ((u32)(s32)(-32581) << 16);

label_80BAE564:
    ctx->pc = 0x80BAE564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE564u)) return;
    // 80BAE564: addi    r0, r3, -7204
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7204);

label_80BAE568:
    ctx->pc = 0x80BAE568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BAE568: stw     r0, 24(r31)
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
label_80BAE56C:
    ctx->pc = 0x80BAE56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE56C: lwz     r3, 32(r31)
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
label_80BAE570:
    ctx->pc = 0x80BAE570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE570: stw     r31, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE574:
    ctx->pc = 0x80BAE574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE574u)) return;
    // 80BAE574: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BAE578:
    ctx->pc = 0x80BAE578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE578: stw     r0, 20(r3)
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
label_80BAE57C:
    ctx->pc = 0x80BAE57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE57Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE57C: stw     r0, 24(r3)
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
label_80BAE580:
    ctx->pc = 0x80BAE580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE580: stw     r0, 28(r3)
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
label_80BAE584:
    ctx->pc = 0x80BAE584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE584: stw     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE588:
    ctx->pc = 0x80BAE588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE588: stw     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE58C:
    ctx->pc = 0x80BAE58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE58Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE58C: stw     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE590:
    ctx->pc = 0x80BAE590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE590: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE594:
    ctx->pc = 0x80BAE594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE594: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE598:
    ctx->pc = 0x80BAE598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE598: stw     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE59C:
    ctx->pc = 0x80BAE59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BAE59C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE5A0:
    ctx->pc = 0x80BAE5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE5A0: lwz     r31, 28(r1)
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
label_80BAE5A4:
    ctx->pc = 0x80BAE5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE5A4: lwz     r30, 24(r1)
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
label_80BAE5A8:
    ctx->pc = 0x80BAE5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE5A8: lwz     r29, 20(r1)
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
label_80BAE5AC:
    ctx->pc = 0x80BAE5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE5AC: lwz     r0, 36(r1)
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
label_80BAE5B0:
    ctx->pc = 0x80BAE5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE5B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE5B4:
    ctx->pc = 0x80BAE5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5B4u)) return;
    // 80BAE5B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BAE5B8:
    ctx->pc = 0x80BAE5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5B8u)) return;
    // 80BAE5B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE5BC:
    ctx->pc = 0x80BAE5BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE5BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE5BC: stwu     r1, -16(r1)
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
label_80BAE5C0:
    ctx->pc = 0x80BAE5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE5C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE5C4:
    ctx->pc = 0x80BAE5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE5C4: stw     r0, 20(r1)
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
label_80BAE5C8:
    ctx->pc = 0x80BAE5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE5C8: stw     r31, 12(r1)
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
label_80BAE5CC:
    ctx->pc = 0x80BAE5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE5CC: stw     r30, 8(r1)
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
label_80BAE5D0:
    ctx->pc = 0x80BAE5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5D0u)) return;
    // 80BAE5D0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE5D4:
    ctx->pc = 0x80BAE5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE5D4: lwz     r31, 32(r3)
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
label_80BAE5D8:
    ctx->pc = 0x80BAE5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE5D8: stw     r30, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE5DC:
    ctx->pc = 0x80BAE5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE5DC: stw     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE5E0:
    ctx->pc = 0x80BAE5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5E0u)) return;
    // 80BAE5E0: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE5E4:
    ctx->pc = 0x80BAE5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5E4u)) return;
    // 80BAE5E4: bc    12, 1, 0x80BAE5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE5F4;
        }
    }

label_80BAE5E8:
    ctx->pc = 0x80BAE5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE5E8: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE5EC:
    ctx->pc = 0x80BAE5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5ECu)) return;
    // 80BAE5EC: bl      0x80509C74
    {
            ctx->lr = 0x80BAE5F0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BAE5F0:
    ctx->pc = 0x80BAE5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE5F0: stw     r30, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE5F4:
    ctx->pc = 0x80BAE5F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE5F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE5F4: lwz     r31, 12(r1)
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
label_80BAE5F8:
    ctx->pc = 0x80BAE5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE5F8: lwz     r30, 8(r1)
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
label_80BAE5FC:
    ctx->pc = 0x80BAE5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE5FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE5FC: lwz     r0, 20(r1)
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
label_80BAE600:
    ctx->pc = 0x80BAE600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE600: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE604:
    ctx->pc = 0x80BAE604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE604u)) return;
    // 80BAE604: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE608:
    ctx->pc = 0x80BAE608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE608u)) return;
    // 80BAE608: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE60C:
    ctx->pc = 0x80BAE60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE60C: stwu     r1, -16(r1)
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
label_80BAE610:
    ctx->pc = 0x80BAE610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE610: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE614:
    ctx->pc = 0x80BAE614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE614: stw     r0, 20(r1)
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
label_80BAE618:
    ctx->pc = 0x80BAE618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE618: stw     r31, 12(r1)
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
label_80BAE61C:
    ctx->pc = 0x80BAE61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE61C: stw     r30, 8(r1)
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
label_80BAE620:
    ctx->pc = 0x80BAE620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE620u)) return;
    // 80BAE620: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE624:
    ctx->pc = 0x80BAE624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE624: lwz     r31, 32(r3)
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
label_80BAE628:
    ctx->pc = 0x80BAE628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE628: stw     r30, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE62C:
    ctx->pc = 0x80BAE62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE62C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE630:
    ctx->pc = 0x80BAE630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE630u)) return;
    // 80BAE630: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE634:
    ctx->pc = 0x80BAE634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE634u)) return;
    // 80BAE634: bc    12, 1, 0x80BAE644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE644;
        }
    }

label_80BAE638:
    ctx->pc = 0x80BAE638u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE638u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE638: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE63C:
    ctx->pc = 0x80BAE63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE63Cu)) return;
    // 80BAE63C: bl      0x80509BF8
    {
            ctx->lr = 0x80BAE640u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BAE640:
    ctx->pc = 0x80BAE640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE640: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE644:
    ctx->pc = 0x80BAE644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE644: lwz     r31, 12(r1)
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
label_80BAE648:
    ctx->pc = 0x80BAE648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE648: lwz     r30, 8(r1)
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
label_80BAE64C:
    ctx->pc = 0x80BAE64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE64C: lwz     r0, 20(r1)
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
label_80BAE650:
    ctx->pc = 0x80BAE650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE650: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE654:
    ctx->pc = 0x80BAE654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE654u)) return;
    // 80BAE654: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE658:
    ctx->pc = 0x80BAE658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE658u)) return;
    // 80BAE658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE65C:
    ctx->pc = 0x80BAE65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE65C: stwu     r1, -16(r1)
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
label_80BAE660:
    ctx->pc = 0x80BAE660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE660: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE664:
    ctx->pc = 0x80BAE664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE664: stw     r0, 20(r1)
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
label_80BAE668:
    ctx->pc = 0x80BAE668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE668: stw     r31, 12(r1)
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
label_80BAE66C:
    ctx->pc = 0x80BAE66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE66C: stw     r30, 8(r1)
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
label_80BAE670:
    ctx->pc = 0x80BAE670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE670u)) return;
    // 80BAE670: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE674:
    ctx->pc = 0x80BAE674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE674: lwz     r31, 32(r3)
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
label_80BAE678:
    ctx->pc = 0x80BAE678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE678: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE67C:
    ctx->pc = 0x80BAE67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE67Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE67C: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE680:
    ctx->pc = 0x80BAE680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE680u)) return;
    // 80BAE680: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE684:
    ctx->pc = 0x80BAE684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE684u)) return;
    // 80BAE684: bc    12, 1, 0x80BAE694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE694;
        }
    }

label_80BAE688:
    ctx->pc = 0x80BAE688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE688: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE68C:
    ctx->pc = 0x80BAE68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE68Cu)) return;
    // 80BAE68C: bl      0x80509B94
    {
            ctx->lr = 0x80BAE690u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BAE690:
    ctx->pc = 0x80BAE690u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE690u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE690: stw     r30, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE694:
    ctx->pc = 0x80BAE694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE694: lwz     r31, 12(r1)
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
label_80BAE698:
    ctx->pc = 0x80BAE698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE698: lwz     r30, 8(r1)
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
label_80BAE69C:
    ctx->pc = 0x80BAE69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE69C: lwz     r0, 20(r1)
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
label_80BAE6A0:
    ctx->pc = 0x80BAE6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE6A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE6A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE6A4:
    ctx->pc = 0x80BAE6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6A4u)) return;
    // 80BAE6A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE6A8:
    ctx->pc = 0x80BAE6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6A8u)) return;
    // 80BAE6A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE6AC:
    ctx->pc = 0x80BAE6ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE6ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE6AC: stwu     r1, -16(r1)
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
label_80BAE6B0:
    ctx->pc = 0x80BAE6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE6B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE6B4:
    ctx->pc = 0x80BAE6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE6B4: stw     r0, 20(r1)
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
label_80BAE6B8:
    ctx->pc = 0x80BAE6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE6B8: stw     r31, 12(r1)
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
label_80BAE6BC:
    ctx->pc = 0x80BAE6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6BCu)) return;
    // 80BAE6BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BAE6C0:
    ctx->pc = 0x80BAE6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6C0u)) return;
    // 80BAE6C0: lis     r4, -27520
    ctx->gpr[4] = ((u32)(s32)(-27520) << 16);

label_80BAE6C4:
    ctx->pc = 0x80BAE6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6C4u)) return;
    // 80BAE6C4: addi    r4, r4, 4108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4108);

label_80BAE6C8:
    ctx->pc = 0x80BAE6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE6C8: lwz     r0, 0(r4)
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
label_80BAE6CC:
    ctx->pc = 0x80BAE6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6CCu)) return;
    // 80BAE6CC: cmplwi  r0, 0x0000
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

label_80BAE6D0:
    ctx->pc = 0x80BAE6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6D0u)) return;
    // 80BAE6D0: bc    4, 2, 0x80BAE6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE6F4;
        }
    }

label_80BAE6D4:
    ctx->pc = 0x80BAE6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BAE6D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BAE6D8:
    ctx->pc = 0x80BAE6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6D8u)) return;
    // 80BAE6D8: bl      0x8050EEC0
    {
            ctx->lr = 0x80BAE6DCu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80BAE6DC:
    ctx->pc = 0x80BAE6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BAE6DC: lis     r4, -27520
    ctx->gpr[4] = ((u32)(s32)(-27520) << 16);

label_80BAE6E0:
    ctx->pc = 0x80BAE6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6E0u)) return;
    // 80BAE6E0: addi    r4, r4, 4108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4108);

label_80BAE6E4:
    ctx->pc = 0x80BAE6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE6E4: stw     r3, 0(r4)
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
label_80BAE6E8:
    ctx->pc = 0x80BAE6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6E8u)) return;
    // 80BAE6E8: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAE6EC:
    ctx->pc = 0x80BAE6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6ECu)) return;
    // 80BAE6EC: addi    r3, r3, 4104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4104);

label_80BAE6F0:
    ctx->pc = 0x80BAE6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE6F0: stw     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE6F4:
    ctx->pc = 0x80BAE6F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE6F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE6F4: lwz     r31, 12(r1)
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
label_80BAE6F8:
    ctx->pc = 0x80BAE6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE6F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE6F8: lwz     r0, 20(r1)
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
label_80BAE6FC:
    ctx->pc = 0x80BAE6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE6FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE700:
    ctx->pc = 0x80BAE700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE700u)) return;
    // 80BAE700: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE704:
    ctx->pc = 0x80BAE704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE704u)) return;
    // 80BAE704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE708:
    ctx->pc = 0x80BAE708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE708: stwu     r1, -32(r1)
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
label_80BAE70C:
    ctx->pc = 0x80BAE70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE70C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE710:
    ctx->pc = 0x80BAE710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE710: stw     r0, 36(r1)
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
label_80BAE714:
    ctx->pc = 0x80BAE714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE714: stw     r31, 28(r1)
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
label_80BAE718:
    ctx->pc = 0x80BAE718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE718: stw     r30, 24(r1)
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
label_80BAE71C:
    ctx->pc = 0x80BAE71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE71C: stw     r29, 20(r1)
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
label_80BAE720:
    ctx->pc = 0x80BAE720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE720: stw     r28, 16(r1)
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
label_80BAE724:
    ctx->pc = 0x80BAE724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE724u)) return;
    // 80BAE724: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAE728:
    ctx->pc = 0x80BAE728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE728u)) return;
    // 80BAE728: addi    r30, r3, 4108
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(4108);

label_80BAE72C:
    ctx->pc = 0x80BAE72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE72C: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE730:
    ctx->pc = 0x80BAE730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE730u)) return;
    // 80BAE730: cmplwi  r0, 0x0000
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

label_80BAE734:
    ctx->pc = 0x80BAE734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE734u)) return;
    // 80BAE734: bc    12, 2, 0x80BAE794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE794;
        }
    }

label_80BAE738:
    ctx->pc = 0x80BAE738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BAE738: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80BAE73C:
    ctx->pc = 0x80BAE73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE73Cu)) return;
    // 80BAE73C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80BAE740:
    ctx->pc = 0x80BAE740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE740u)) return;
    // 80BAE740: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAE744:
    ctx->pc = 0x80BAE744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE744u)) return;
    // 80BAE744: addi    r31, r3, 4104
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(4104);

label_80BAE748:
    ctx->pc = 0x80BAE748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE748u)) return;
    // 80BAE748: b       0x80BAE768
    {
            goto label_80BAE768;
    }

label_80BAE74C:
    ctx->pc = 0x80BAE74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BAE74C: lwz     r3, 0(r30)
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
label_80BAE750:
    ctx->pc = 0x80BAE750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE750: lwzx    r3, r3, r29
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE754:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE754u)) return;
    // 80BAE754: cmplwi  r3, 0x0000
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

label_80BAE758:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE758u)) return;
    // 80BAE758: bc    12, 2, 0x80BAE760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE760;
        }
    }

label_80BAE75C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE75C: bl      0x8050F9E0
    {
            ctx->lr = 0x80BAE760u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BAE760:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BAE760: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80BAE764:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE764u)) return;
    // 80BAE764: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80BAE768:
    ctx->pc = 0x80BAE768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE768: lwz     r0, 0(r31)
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
label_80BAE76C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE76Cu)) return;
    // 80BAE76C: cmpw    r28, r0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80BAE770:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE770u)) return;
    // 80BAE770: bc    12, 0, 0x80BAE74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE74Cu;
                return;
            }
            goto label_80BAE74C;
        }
    }

label_80BAE774:
    ctx->pc = 0x80BAE774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BAE774: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAE778:
    ctx->pc = 0x80BAE778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE778u)) return;
    // 80BAE778: addi    r3, r3, 4108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4108);

label_80BAE77C:
    ctx->pc = 0x80BAE77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE77C: lwz     r3, 0(r3)
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
label_80BAE780:
    ctx->pc = 0x80BAE780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE780u)) return;
    // 80BAE780: bl      0x8050ED40
    {
            ctx->lr = 0x80BAE784u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80BAE784:
    ctx->pc = 0x80BAE784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BAE784: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BAE788:
    ctx->pc = 0x80BAE788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE788u)) return;
    // 80BAE788: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAE78C:
    ctx->pc = 0x80BAE78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE78Cu)) return;
    // 80BAE78C: addi    r3, r3, 4108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4108);

label_80BAE790:
    ctx->pc = 0x80BAE790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE790: stw     r0, 0(r3)
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
label_80BAE794:
    ctx->pc = 0x80BAE794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE794: lwz     r31, 28(r1)
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
label_80BAE798:
    ctx->pc = 0x80BAE798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE798: lwz     r30, 24(r1)
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
label_80BAE79C:
    ctx->pc = 0x80BAE79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE79Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE79C: lwz     r29, 20(r1)
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
label_80BAE7A0:
    ctx->pc = 0x80BAE7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE7A0: lwz     r28, 16(r1)
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
label_80BAE7A4:
    ctx->pc = 0x80BAE7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE7A4: lwz     r0, 36(r1)
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
label_80BAE7A8:
    ctx->pc = 0x80BAE7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE7A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE7A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE7AC:
    ctx->pc = 0x80BAE7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7ACu)) return;
    // 80BAE7AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BAE7B0:
    ctx->pc = 0x80BAE7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7B0u)) return;
    // 80BAE7B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE7B4:
    ctx->pc = 0x80BAE7B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE7B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE7B4: stwu     r1, -16(r1)
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
label_80BAE7B8:
    ctx->pc = 0x80BAE7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE7B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE7BC:
    ctx->pc = 0x80BAE7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE7BC: stw     r0, 20(r1)
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
label_80BAE7C0:
    ctx->pc = 0x80BAE7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE7C0: stw     r31, 12(r1)
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
label_80BAE7C4:
    ctx->pc = 0x80BAE7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7C4u)) return;
    // 80BAE7C4: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE7C8:
    ctx->pc = 0x80BAE7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7C8u)) return;
    // 80BAE7C8: addi    r6, r6, 4104
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4104);

label_80BAE7CC:
    ctx->pc = 0x80BAE7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE7CC: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE7D0:
    ctx->pc = 0x80BAE7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7D0u)) return;
    // 80BAE7D0: cmpw    r3, r0
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

label_80BAE7D4:
    ctx->pc = 0x80BAE7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7D4u)) return;
    // 80BAE7D4: bc    4, 0, 0x80BAE810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE810;
        }
    }

label_80BAE7D8:
    ctx->pc = 0x80BAE7D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE7D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BAE7D8: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE7DC:
    ctx->pc = 0x80BAE7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7DCu)) return;
    // 80BAE7DC: addi    r6, r6, 4108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4108);

label_80BAE7E0:
    ctx->pc = 0x80BAE7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE7E0: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE7E4:
    ctx->pc = 0x80BAE7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7E4u)) return;
    // 80BAE7E4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BAE7E8:
    ctx->pc = 0x80BAE7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE7E8: lwzx    r0, r6, r31
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[31];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE7EC:
    ctx->pc = 0x80BAE7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7ECu)) return;
    // 80BAE7EC: cmplwi  r0, 0x0000
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

label_80BAE7F0:
    ctx->pc = 0x80BAE7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7F0u)) return;
    // 80BAE7F0: bc    4, 2, 0x80BAE810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE810;
        }
    }

label_80BAE7F4:
    ctx->pc = 0x80BAE7F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE7F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE7F4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE7F8:
    ctx->pc = 0x80BAE7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7F8u)) return;
    // 80BAE7F8: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BAE7FC:
    ctx->pc = 0x80BAE7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE7FCu)) return;
    // 80BAE7FC: bl      0x80BAE500
    {
            ctx->lr = 0x80BAE800u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE500u;
                return;
            }
            goto label_80BAE500;
    }

label_80BAE800:
    ctx->pc = 0x80BAE800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BAE800: lis     r4, -27520
    ctx->gpr[4] = ((u32)(s32)(-27520) << 16);

label_80BAE804:
    ctx->pc = 0x80BAE804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE804u)) return;
    // 80BAE804: addi    r4, r4, 4108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4108);

label_80BAE808:
    ctx->pc = 0x80BAE808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE808: lwz     r4, 0(r4)
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
label_80BAE80C:
    ctx->pc = 0x80BAE80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE80C: stwx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE810:
    ctx->pc = 0x80BAE810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE810: lwz     r31, 12(r1)
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
label_80BAE814:
    ctx->pc = 0x80BAE814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE814: lwz     r0, 20(r1)
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
label_80BAE818:
    ctx->pc = 0x80BAE818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE818: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE81C:
    ctx->pc = 0x80BAE81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE81Cu)) return;
    // 80BAE81C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE820:
    ctx->pc = 0x80BAE820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE820u)) return;
    // 80BAE820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE824:
    ctx->pc = 0x80BAE824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE824: stwu     r1, -16(r1)
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
label_80BAE828:
    ctx->pc = 0x80BAE828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE828u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE828: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE82C:
    ctx->pc = 0x80BAE82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE82Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE82C: stw     r0, 20(r1)
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
label_80BAE830:
    ctx->pc = 0x80BAE830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE830: stw     r31, 12(r1)
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
label_80BAE834:
    ctx->pc = 0x80BAE834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE834u)) return;
    // 80BAE834: lis     r4, -27520
    ctx->gpr[4] = ((u32)(s32)(-27520) << 16);

label_80BAE838:
    ctx->pc = 0x80BAE838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE838u)) return;
    // 80BAE838: addi    r4, r4, 4104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4104);

label_80BAE83C:
    ctx->pc = 0x80BAE83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE83C: lwz     r0, 0(r4)
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
label_80BAE840:
    ctx->pc = 0x80BAE840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE840u)) return;
    // 80BAE840: cmpw    r3, r0
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

label_80BAE844:
    ctx->pc = 0x80BAE844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE844u)) return;
    // 80BAE844: bc    4, 0, 0x80BAE87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE87C;
        }
    }

label_80BAE848:
    ctx->pc = 0x80BAE848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BAE848: lis     r4, -27520
    ctx->gpr[4] = ((u32)(s32)(-27520) << 16);

label_80BAE84C:
    ctx->pc = 0x80BAE84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE84Cu)) return;
    // 80BAE84C: addi    r4, r4, 4108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4108);

label_80BAE850:
    ctx->pc = 0x80BAE850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE850: lwz     r4, 0(r4)
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
label_80BAE854:
    ctx->pc = 0x80BAE854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE854u)) return;
    // 80BAE854: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BAE858:
    ctx->pc = 0x80BAE858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE858: lwzx    r3, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE85C:
    ctx->pc = 0x80BAE85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE85Cu)) return;
    // 80BAE85C: cmplwi  r3, 0x0000
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

label_80BAE860:
    ctx->pc = 0x80BAE860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE860u)) return;
    // 80BAE860: bc    12, 2, 0x80BAE87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE87C;
        }
    }

label_80BAE864:
    ctx->pc = 0x80BAE864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE864: bl      0x8050F9E0
    {
            ctx->lr = 0x80BAE868u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BAE868:
    ctx->pc = 0x80BAE868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BAE868: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BAE86C:
    ctx->pc = 0x80BAE86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE86Cu)) return;
    // 80BAE86C: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAE870:
    ctx->pc = 0x80BAE870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE870u)) return;
    // 80BAE870: addi    r3, r3, 4108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4108);

label_80BAE874:
    ctx->pc = 0x80BAE874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BAE874: lwz     r3, 0(r3)
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
label_80BAE878:
    ctx->pc = 0x80BAE878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BAE878: stwx    r0, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE87C:
    ctx->pc = 0x80BAE87Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE87Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE87C: lwz     r31, 12(r1)
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
label_80BAE880:
    ctx->pc = 0x80BAE880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE880: lwz     r0, 20(r1)
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
label_80BAE884:
    ctx->pc = 0x80BAE884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE884: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE888:
    ctx->pc = 0x80BAE888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE888u)) return;
    // 80BAE888: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE88C:
    ctx->pc = 0x80BAE88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE88Cu)) return;
    // 80BAE88C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE890:
    ctx->pc = 0x80BAE890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE890: stwu     r1, -16(r1)
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
label_80BAE894:
    ctx->pc = 0x80BAE894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE894: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE898:
    ctx->pc = 0x80BAE898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE898: stw     r0, 20(r1)
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
label_80BAE89C:
    ctx->pc = 0x80BAE89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE89Cu)) return;
    // 80BAE89C: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE8A0:
    ctx->pc = 0x80BAE8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8A0u)) return;
    // 80BAE8A0: addi    r6, r6, 4104
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4104);

label_80BAE8A4:
    ctx->pc = 0x80BAE8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE8A4: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE8A8:
    ctx->pc = 0x80BAE8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8A8u)) return;
    // 80BAE8A8: cmpw    r3, r0
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

label_80BAE8AC:
    ctx->pc = 0x80BAE8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8ACu)) return;
    // 80BAE8AC: bc    4, 0, 0x80BAE8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE8D0;
        }
    }

label_80BAE8B0:
    ctx->pc = 0x80BAE8B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE8B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BAE8B0: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE8B4:
    ctx->pc = 0x80BAE8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8B4u)) return;
    // 80BAE8B4: addi    r6, r6, 4108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4108);

label_80BAE8B8:
    ctx->pc = 0x80BAE8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE8B8: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE8BC:
    ctx->pc = 0x80BAE8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8BCu)) return;
    // 80BAE8BC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BAE8C0:
    ctx->pc = 0x80BAE8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE8C0: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE8C4:
    ctx->pc = 0x80BAE8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8C4u)) return;
    // 80BAE8C4: cmplwi  r3, 0x0000
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

label_80BAE8C8:
    ctx->pc = 0x80BAE8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8C8u)) return;
    // 80BAE8C8: bc    12, 2, 0x80BAE8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE8D0;
        }
    }

label_80BAE8CC:
    ctx->pc = 0x80BAE8CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE8CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE8CC: bl      0x80BAE5BC
    {
            ctx->lr = 0x80BAE8D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE5BCu;
                return;
            }
            goto label_80BAE5BC;
    }

label_80BAE8D0:
    ctx->pc = 0x80BAE8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE8D0: lwz     r0, 20(r1)
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
label_80BAE8D4:
    ctx->pc = 0x80BAE8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE8D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE8D8:
    ctx->pc = 0x80BAE8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8D8u)) return;
    // 80BAE8D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE8DC:
    ctx->pc = 0x80BAE8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8DCu)) return;
    // 80BAE8DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE8E0:
    ctx->pc = 0x80BAE8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE8E0: stwu     r1, -16(r1)
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
label_80BAE8E4:
    ctx->pc = 0x80BAE8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE8E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE8E8:
    ctx->pc = 0x80BAE8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE8E8: stw     r0, 20(r1)
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
label_80BAE8EC:
    ctx->pc = 0x80BAE8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8ECu)) return;
    // 80BAE8EC: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE8F0:
    ctx->pc = 0x80BAE8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8F0u)) return;
    // 80BAE8F0: addi    r6, r6, 4104
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4104);

label_80BAE8F4:
    ctx->pc = 0x80BAE8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE8F4: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE8F8:
    ctx->pc = 0x80BAE8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8F8u)) return;
    // 80BAE8F8: cmpw    r3, r0
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

label_80BAE8FC:
    ctx->pc = 0x80BAE8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE8FCu)) return;
    // 80BAE8FC: bc    4, 0, 0x80BAE920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE920;
        }
    }

label_80BAE900:
    ctx->pc = 0x80BAE900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BAE900: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE904:
    ctx->pc = 0x80BAE904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE904u)) return;
    // 80BAE904: addi    r6, r6, 4108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4108);

label_80BAE908:
    ctx->pc = 0x80BAE908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE908: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE90C:
    ctx->pc = 0x80BAE90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE90Cu)) return;
    // 80BAE90C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BAE910:
    ctx->pc = 0x80BAE910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE910: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE914:
    ctx->pc = 0x80BAE914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE914u)) return;
    // 80BAE914: cmplwi  r3, 0x0000
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

label_80BAE918:
    ctx->pc = 0x80BAE918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE918u)) return;
    // 80BAE918: bc    12, 2, 0x80BAE920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE920;
        }
    }

label_80BAE91C:
    ctx->pc = 0x80BAE91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE91C: bl      0x80BAE60C
    {
            ctx->lr = 0x80BAE920u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE60Cu;
                return;
            }
            goto label_80BAE60C;
    }

label_80BAE920:
    ctx->pc = 0x80BAE920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE920: lwz     r0, 20(r1)
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
label_80BAE924:
    ctx->pc = 0x80BAE924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE924: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE928:
    ctx->pc = 0x80BAE928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE928u)) return;
    // 80BAE928: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE92C:
    ctx->pc = 0x80BAE92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE92Cu)) return;
    // 80BAE92C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE930:
    ctx->pc = 0x80BAE930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE930: stwu     r1, -16(r1)
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
label_80BAE934:
    ctx->pc = 0x80BAE934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE934: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE938:
    ctx->pc = 0x80BAE938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAE938: stw     r0, 20(r1)
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
label_80BAE93C:
    ctx->pc = 0x80BAE93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE93Cu)) return;
    // 80BAE93C: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE940:
    ctx->pc = 0x80BAE940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE940u)) return;
    // 80BAE940: addi    r6, r6, 4104
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4104);

label_80BAE944:
    ctx->pc = 0x80BAE944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE944: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE948:
    ctx->pc = 0x80BAE948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE948u)) return;
    // 80BAE948: cmpw    r3, r0
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

label_80BAE94C:
    ctx->pc = 0x80BAE94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE94Cu)) return;
    // 80BAE94C: bc    4, 0, 0x80BAE970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BAE970;
        }
    }

label_80BAE950:
    ctx->pc = 0x80BAE950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BAE950: lis     r6, -27520
    ctx->gpr[6] = ((u32)(s32)(-27520) << 16);

label_80BAE954:
    ctx->pc = 0x80BAE954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE954u)) return;
    // 80BAE954: addi    r6, r6, 4108
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4108);

label_80BAE958:
    ctx->pc = 0x80BAE958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE958: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE95C:
    ctx->pc = 0x80BAE95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE95Cu)) return;
    // 80BAE95C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BAE960:
    ctx->pc = 0x80BAE960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE960: lwzx    r3, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE964:
    ctx->pc = 0x80BAE964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE964u)) return;
    // 80BAE964: cmplwi  r3, 0x0000
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

label_80BAE968:
    ctx->pc = 0x80BAE968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE968u)) return;
    // 80BAE968: bc    12, 2, 0x80BAE970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BAE970;
        }
    }

label_80BAE96C:
    ctx->pc = 0x80BAE96Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE96Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BAE96C: bl      0x80BAE65C
    {
            ctx->lr = 0x80BAE970u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BAE65Cu;
                return;
            }
            goto label_80BAE65C;
    }

label_80BAE970:
    ctx->pc = 0x80BAE970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAE970: lwz     r0, 20(r1)
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
label_80BAE974:
    ctx->pc = 0x80BAE974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAE974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAE974: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE978:
    ctx->pc = 0x80BAE978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE978u)) return;
    // 80BAE978: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BAE97C:
    ctx->pc = 0x80BAE97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE97Cu)) return;
    // 80BAE97C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

label_80BAE980:
    ctx->pc = 0x80BAE980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BAE980: stwu     r1, -32(r1)
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
label_80BAE984:
    ctx->pc = 0x80BAE984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAE984: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAE988:
    ctx->pc = 0x80BAE988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BAE988: stw     r0, 36(r1)
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
label_80BAE98C:
    ctx->pc = 0x80BAE98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAE98C: stw     r31, 28(r1)
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
label_80BAE990:
    ctx->pc = 0x80BAE990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAE990: stw     r30, 24(r1)
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
label_80BAE994:
    ctx->pc = 0x80BAE994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE994: stw     r29, 20(r1)
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
label_80BAE998:
    ctx->pc = 0x80BAE998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAE998: stw     r28, 16(r1)
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
label_80BAE99C:
    ctx->pc = 0x80BAE99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE99Cu)) return;
    // 80BAE99C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BAE9A0:
    ctx->pc = 0x80BAE9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9A0u)) return;
    // 80BAE9A0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE9A4:
    ctx->pc = 0x80BAE9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9A4u)) return;
    // 80BAE9A4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BAE9A8:
    ctx->pc = 0x80BAE9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9A8u)) return;
    // 80BAE9A8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80BAE9AC:
    ctx->pc = 0x80BAE9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9ACu)) return;
    // 80BAE9AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BAE9B0:
    ctx->pc = 0x80BAE9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9B0u)) return;
    // 80BAE9B0: bl      0x80401DB0
    {
            ctx->lr = 0x80BAE9B4u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80BAE9B4:
    ctx->pc = 0x80BAE9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BAE9B4: lis     r4, -27520
    ctx->gpr[4] = ((u32)(s32)(-27520) << 16);

label_80BAE9B8:
    ctx->pc = 0x80BAE9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9B8u)) return;
    // 80BAE9B8: addi    r4, r4, 4112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4112);

label_80BAE9BC:
    ctx->pc = 0x80BAE9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAE9BC: lwz     r0, 0(r4)
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
label_80BAE9C0:
    ctx->pc = 0x80BAE9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9C0u)) return;
    // 80BAE9C0: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80BAE9C4:
    ctx->pc = 0x80BAE9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9C4u)) return;
    // 80BAE9C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE9C8:
    ctx->pc = 0x80BAE9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9C8u)) return;
    // 80BAE9C8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BAE9CC:
    ctx->pc = 0x80BAE9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9CCu)) return;
    // 80BAE9CC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BAE9D0:
    ctx->pc = 0x80BAE9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9D0u)) return;
    // 80BAE9D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BAE9D4:
    ctx->pc = 0x80BAE9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9D4u)) return;
    // 80BAE9D4: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80BAE9D8:
    ctx->pc = 0x80BAE9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9D8u)) return;
    // 80BAE9D8: bl      0x8050A0D4
    {
            ctx->lr = 0x80BAE9DCu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BAE9DC:
    ctx->pc = 0x80BAE9DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE9DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE9DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE9E0:
    ctx->pc = 0x80BAE9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9E0u)) return;
    // 80BAE9E0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80BAE9E4:
    ctx->pc = 0x80BAE9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9E4u)) return;
    // 80BAE9E4: bl      0x80509C74
    {
            ctx->lr = 0x80BAE9E8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BAE9E8:
    ctx->pc = 0x80BAE9E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE9E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE9E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE9EC:
    ctx->pc = 0x80BAE9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9ECu)) return;
    // 80BAE9EC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BAE9F0:
    ctx->pc = 0x80BAE9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9F0u)) return;
    // 80BAE9F0: bl      0x80509BF8
    {
            ctx->lr = 0x80BAE9F4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BAE9F4:
    ctx->pc = 0x80BAE9F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAE9F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BAE9F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BAE9F8:
    ctx->pc = 0x80BAE9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9F8u)) return;
    // 80BAE9F8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BAE9FC:
    ctx->pc = 0x80BAE9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAE9FCu)) return;
    // 80BAE9FC: bl      0x80509B94
    {
            ctx->lr = 0x80BAEA00u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BAEA00:
    ctx->pc = 0x80BAEA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BAEA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80BAEA00: lis     r3, -27520
    ctx->gpr[3] = ((u32)(s32)(-27520) << 16);

label_80BAEA04:
    ctx->pc = 0x80BAEA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA04u)) return;
    // 80BAEA04: addi    r4, r3, 4112
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(4112);

label_80BAEA08:
    ctx->pc = 0x80BAEA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BAEA08: lwz     r3, 0(r4)
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
label_80BAEA0C:
    ctx->pc = 0x80BAEA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA0Cu)) return;
    // 80BAEA0C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BAEA10:
    ctx->pc = 0x80BAEA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BAEA10: stw     r0, 0(r4)
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
label_80BAEA14:
    ctx->pc = 0x80BAEA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA14u)) return;
    // 80BAEA14: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80BAEA18:
    ctx->pc = 0x80BAEA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BAEA18: stw     r0, 0(r4)
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
label_80BAEA1C:
    ctx->pc = 0x80BAEA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BAEA1C: lwz     r31, 28(r1)
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
label_80BAEA20:
    ctx->pc = 0x80BAEA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BAEA20: lwz     r30, 24(r1)
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
label_80BAEA24:
    ctx->pc = 0x80BAEA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BAEA24: lwz     r29, 20(r1)
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
label_80BAEA28:
    ctx->pc = 0x80BAEA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BAEA28: lwz     r28, 16(r1)
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
label_80BAEA2C:
    ctx->pc = 0x80BAEA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BAEA2C: lwz     r0, 36(r1)
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
label_80BAEA30:
    ctx->pc = 0x80BAEA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BAEA30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BAEA30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BAEA34:
    ctx->pc = 0x80BAEA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA34u)) return;
    // 80BAEA34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BAEA38:
    ctx->pc = 0x80BAEA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BAEA38u)) return;
    // 80BAEA38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BADE00;
        }
    }

    ctx->pc = 0x80BAEA3Cu;
    return;
return_dispatch_80BADE00:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BADE78u: goto label_80BADE78;
    case 0x80BADEB8u: goto label_80BADEB8;
    case 0x80BADEE4u: goto label_80BADEE4;
    case 0x80BADFACu: goto label_80BADFAC;
    case 0x80BADFE0u: goto label_80BADFE0;
    case 0x80BAE028u: goto label_80BAE028;
    case 0x80BAE0D4u: goto label_80BAE0D4;
    case 0x80BAE160u: goto label_80BAE160;
    case 0x80BAE16Cu: goto label_80BAE16C;
    case 0x80BAE1FCu: goto label_80BAE1FC;
    case 0x80BAE204u: goto label_80BAE204;
    case 0x80BAE228u: goto label_80BAE228;
    case 0x80BAE290u: goto label_80BAE290;
    case 0x80BAE2D8u: goto label_80BAE2D8;
    case 0x80BAE344u: goto label_80BAE344;
    case 0x80BAE3F4u: goto label_80BAE3F4;
    case 0x80BAE454u: goto label_80BAE454;
    case 0x80BAE494u: goto label_80BAE494;
    case 0x80BAE4D4u: goto label_80BAE4D4;
    case 0x80BAE530u: goto label_80BAE530;
    case 0x80BAE554u: goto label_80BAE554;
    case 0x80BAE5F0u: goto label_80BAE5F0;
    case 0x80BAE640u: goto label_80BAE640;
    case 0x80BAE690u: goto label_80BAE690;
    case 0x80BAE6DCu: goto label_80BAE6DC;
    case 0x80BAE760u: goto label_80BAE760;
    case 0x80BAE784u: goto label_80BAE784;
    case 0x80BAE800u: goto label_80BAE800;
    case 0x80BAE868u: goto label_80BAE868;
    case 0x80BAE8D0u: goto label_80BAE8D0;
    case 0x80BAE920u: goto label_80BAE920;
    case 0x80BAE970u: goto label_80BAE970;
    case 0x80BAE9B4u: goto label_80BAE9B4;
    case 0x80BAE9DCu: goto label_80BAE9DC;
    case 0x80BAE9E8u: goto label_80BAE9E8;
    case 0x80BAE9F4u: goto label_80BAE9F4;
    case 0x80BAEA00u: goto label_80BAEA00;
    default: return;
    }
}

