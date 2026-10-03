// DolRecomp output
#include "../generated.h"

void func_80BFDCC0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80BFDCC0[911] = {
        &&label_80BFDCC0,
        &&label_80BFDCC4,
        &&label_80BFDCC8,
        &&label_80BFDCCC,
        &&label_80BFDCD0,
        &&label_80BFDCD4,
        &&label_80BFDCD8,
        &&label_80BFDCDC,
        &&label_80BFDCE0,
        &&label_80BFDCE4,
        &&label_80BFDCE8,
        &&label_80BFDCEC,
        &&label_80BFDCF0,
        &&label_80BFDCF4,
        &&label_80BFDCF8,
        &&label_80BFDCFC,
        &&label_80BFDD00,
        &&label_80BFDD04,
        &&label_80BFDD08,
        &&label_80BFDD0C,
        &&label_80BFDD10,
        &&label_80BFDD14,
        &&label_80BFDD18,
        &&label_80BFDD1C,
        &&label_80BFDD20,
        &&label_80BFDD24,
        &&label_80BFDD28,
        &&label_80BFDD2C,
        &&label_80BFDD30,
        &&label_80BFDD34,
        &&label_80BFDD38,
        &&label_80BFDD3C,
        &&label_80BFDD40,
        &&label_80BFDD44,
        &&label_80BFDD48,
        &&label_80BFDD4C,
        &&label_80BFDD50,
        &&label_80BFDD54,
        &&label_80BFDD58,
        &&label_80BFDD5C,
        &&label_80BFDD60,
        &&label_80BFDD64,
        &&label_80BFDD68,
        &&label_80BFDD6C,
        &&label_80BFDD70,
        &&label_80BFDD74,
        &&label_80BFDD78,
        &&label_80BFDD7C,
        &&label_80BFDD80,
        &&label_80BFDD84,
        &&label_80BFDD88,
        &&label_80BFDD8C,
        &&label_80BFDD90,
        &&label_80BFDD94,
        &&label_80BFDD98,
        &&label_80BFDD9C,
        &&label_80BFDDA0,
        &&label_80BFDDA4,
        &&label_80BFDDA8,
        &&label_80BFDDAC,
        &&label_80BFDDB0,
        &&label_80BFDDB4,
        &&label_80BFDDB8,
        &&label_80BFDDBC,
        &&label_80BFDDC0,
        &&label_80BFDDC4,
        &&label_80BFDDC8,
        &&label_80BFDDCC,
        &&label_80BFDDD0,
        &&label_80BFDDD4,
        &&label_80BFDDD8,
        &&label_80BFDDDC,
        &&label_80BFDDE0,
        &&label_80BFDDE4,
        &&label_80BFDDE8,
        &&label_80BFDDEC,
        &&label_80BFDDF0,
        &&label_80BFDDF4,
        &&label_80BFDDF8,
        &&label_80BFDDFC,
        &&label_80BFDE00,
        &&label_80BFDE04,
        &&label_80BFDE08,
        &&label_80BFDE0C,
        &&label_80BFDE10,
        &&label_80BFDE14,
        &&label_80BFDE18,
        &&label_80BFDE1C,
        &&label_80BFDE20,
        &&label_80BFDE24,
        &&label_80BFDE28,
        &&label_80BFDE2C,
        &&label_80BFDE30,
        &&label_80BFDE34,
        &&label_80BFDE38,
        &&label_80BFDE3C,
        &&label_80BFDE40,
        &&label_80BFDE44,
        &&label_80BFDE48,
        &&label_80BFDE4C,
        &&label_80BFDE50,
        &&label_80BFDE54,
        &&label_80BFDE58,
        &&label_80BFDE5C,
        &&label_80BFDE60,
        &&label_80BFDE64,
        &&label_80BFDE68,
        &&label_80BFDE6C,
        &&label_80BFDE70,
        &&label_80BFDE74,
        &&label_80BFDE78,
        &&label_80BFDE7C,
        &&label_80BFDE80,
        &&label_80BFDE84,
        &&label_80BFDE88,
        &&label_80BFDE8C,
        &&label_80BFDE90,
        &&label_80BFDE94,
        &&label_80BFDE98,
        &&label_80BFDE9C,
        &&label_80BFDEA0,
        &&label_80BFDEA4,
        &&label_80BFDEA8,
        &&label_80BFDEAC,
        &&label_80BFDEB0,
        &&label_80BFDEB4,
        &&label_80BFDEB8,
        &&label_80BFDEBC,
        &&label_80BFDEC0,
        &&label_80BFDEC4,
        &&label_80BFDEC8,
        &&label_80BFDECC,
        &&label_80BFDED0,
        &&label_80BFDED4,
        &&label_80BFDED8,
        &&label_80BFDEDC,
        &&label_80BFDEE0,
        &&label_80BFDEE4,
        &&label_80BFDEE8,
        &&label_80BFDEEC,
        &&label_80BFDEF0,
        &&label_80BFDEF4,
        &&label_80BFDEF8,
        &&label_80BFDEFC,
        &&label_80BFDF00,
        &&label_80BFDF04,
        &&label_80BFDF08,
        &&label_80BFDF0C,
        &&label_80BFDF10,
        &&label_80BFDF14,
        &&label_80BFDF18,
        &&label_80BFDF1C,
        &&label_80BFDF20,
        &&label_80BFDF24,
        &&label_80BFDF28,
        &&label_80BFDF2C,
        &&label_80BFDF30,
        &&label_80BFDF34,
        &&label_80BFDF38,
        &&label_80BFDF3C,
        &&label_80BFDF40,
        &&label_80BFDF44,
        &&label_80BFDF48,
        &&label_80BFDF4C,
        &&label_80BFDF50,
        &&label_80BFDF54,
        &&label_80BFDF58,
        &&label_80BFDF5C,
        &&label_80BFDF60,
        &&label_80BFDF64,
        &&label_80BFDF68,
        &&label_80BFDF6C,
        &&label_80BFDF70,
        &&label_80BFDF74,
        &&label_80BFDF78,
        &&label_80BFDF7C,
        &&label_80BFDF80,
        &&label_80BFDF84,
        &&label_80BFDF88,
        &&label_80BFDF8C,
        &&label_80BFDF90,
        &&label_80BFDF94,
        &&label_80BFDF98,
        &&label_80BFDF9C,
        &&label_80BFDFA0,
        &&label_80BFDFA4,
        &&label_80BFDFA8,
        &&label_80BFDFAC,
        &&label_80BFDFB0,
        &&label_80BFDFB4,
        &&label_80BFDFB8,
        &&label_80BFDFBC,
        &&label_80BFDFC0,
        &&label_80BFDFC4,
        &&label_80BFDFC8,
        &&label_80BFDFCC,
        &&label_80BFDFD0,
        &&label_80BFDFD4,
        &&label_80BFDFD8,
        &&label_80BFDFDC,
        &&label_80BFDFE0,
        &&label_80BFDFE4,
        &&label_80BFDFE8,
        &&label_80BFDFEC,
        &&label_80BFDFF0,
        &&label_80BFDFF4,
        &&label_80BFDFF8,
        &&label_80BFDFFC,
        &&label_80BFE000,
        &&label_80BFE004,
        &&label_80BFE008,
        &&label_80BFE00C,
        &&label_80BFE010,
        &&label_80BFE014,
        &&label_80BFE018,
        &&label_80BFE01C,
        &&label_80BFE020,
        &&label_80BFE024,
        &&label_80BFE028,
        &&label_80BFE02C,
        &&label_80BFE030,
        &&label_80BFE034,
        &&label_80BFE038,
        &&label_80BFE03C,
        &&label_80BFE040,
        &&label_80BFE044,
        &&label_80BFE048,
        &&label_80BFE04C,
        &&label_80BFE050,
        &&label_80BFE054,
        &&label_80BFE058,
        &&label_80BFE05C,
        &&label_80BFE060,
        &&label_80BFE064,
        &&label_80BFE068,
        &&label_80BFE06C,
        &&label_80BFE070,
        &&label_80BFE074,
        &&label_80BFE078,
        &&label_80BFE07C,
        &&label_80BFE080,
        &&label_80BFE084,
        &&label_80BFE088,
        &&label_80BFE08C,
        &&label_80BFE090,
        &&label_80BFE094,
        &&label_80BFE098,
        &&label_80BFE09C,
        &&label_80BFE0A0,
        &&label_80BFE0A4,
        &&label_80BFE0A8,
        &&label_80BFE0AC,
        &&label_80BFE0B0,
        &&label_80BFE0B4,
        &&label_80BFE0B8,
        &&label_80BFE0BC,
        &&label_80BFE0C0,
        &&label_80BFE0C4,
        &&label_80BFE0C8,
        &&label_80BFE0CC,
        &&label_80BFE0D0,
        &&label_80BFE0D4,
        &&label_80BFE0D8,
        &&label_80BFE0DC,
        &&label_80BFE0E0,
        &&label_80BFE0E4,
        &&label_80BFE0E8,
        &&label_80BFE0EC,
        &&label_80BFE0F0,
        &&label_80BFE0F4,
        &&label_80BFE0F8,
        &&label_80BFE0FC,
        &&label_80BFE100,
        &&label_80BFE104,
        &&label_80BFE108,
        &&label_80BFE10C,
        &&label_80BFE110,
        &&label_80BFE114,
        &&label_80BFE118,
        &&label_80BFE11C,
        &&label_80BFE120,
        &&label_80BFE124,
        &&label_80BFE128,
        &&label_80BFE12C,
        &&label_80BFE130,
        &&label_80BFE134,
        &&label_80BFE138,
        &&label_80BFE13C,
        &&label_80BFE140,
        &&label_80BFE144,
        &&label_80BFE148,
        &&label_80BFE14C,
        &&label_80BFE150,
        &&label_80BFE154,
        &&label_80BFE158,
        &&label_80BFE15C,
        &&label_80BFE160,
        &&label_80BFE164,
        &&label_80BFE168,
        &&label_80BFE16C,
        &&label_80BFE170,
        &&label_80BFE174,
        &&label_80BFE178,
        &&label_80BFE17C,
        &&label_80BFE180,
        &&label_80BFE184,
        &&label_80BFE188,
        &&label_80BFE18C,
        &&label_80BFE190,
        &&label_80BFE194,
        &&label_80BFE198,
        &&label_80BFE19C,
        &&label_80BFE1A0,
        &&label_80BFE1A4,
        &&label_80BFE1A8,
        &&label_80BFE1AC,
        &&label_80BFE1B0,
        &&label_80BFE1B4,
        &&label_80BFE1B8,
        &&label_80BFE1BC,
        &&label_80BFE1C0,
        &&label_80BFE1C4,
        &&label_80BFE1C8,
        &&label_80BFE1CC,
        &&label_80BFE1D0,
        &&label_80BFE1D4,
        &&label_80BFE1D8,
        &&label_80BFE1DC,
        &&label_80BFE1E0,
        &&label_80BFE1E4,
        &&label_80BFE1E8,
        &&label_80BFE1EC,
        &&label_80BFE1F0,
        &&label_80BFE1F4,
        &&label_80BFE1F8,
        &&label_80BFE1FC,
        &&label_80BFE200,
        &&label_80BFE204,
        &&label_80BFE208,
        &&label_80BFE20C,
        &&label_80BFE210,
        &&label_80BFE214,
        &&label_80BFE218,
        &&label_80BFE21C,
        &&label_80BFE220,
        &&label_80BFE224,
        &&label_80BFE228,
        &&label_80BFE22C,
        &&label_80BFE230,
        &&label_80BFE234,
        &&label_80BFE238,
        &&label_80BFE23C,
        &&label_80BFE240,
        &&label_80BFE244,
        &&label_80BFE248,
        &&label_80BFE24C,
        &&label_80BFE250,
        &&label_80BFE254,
        &&label_80BFE258,
        &&label_80BFE25C,
        &&label_80BFE260,
        &&label_80BFE264,
        &&label_80BFE268,
        &&label_80BFE26C,
        &&label_80BFE270,
        &&label_80BFE274,
        &&label_80BFE278,
        &&label_80BFE27C,
        &&label_80BFE280,
        &&label_80BFE284,
        &&label_80BFE288,
        &&label_80BFE28C,
        &&label_80BFE290,
        &&label_80BFE294,
        &&label_80BFE298,
        &&label_80BFE29C,
        &&label_80BFE2A0,
        &&label_80BFE2A4,
        &&label_80BFE2A8,
        &&label_80BFE2AC,
        &&label_80BFE2B0,
        &&label_80BFE2B4,
        &&label_80BFE2B8,
        &&label_80BFE2BC,
        &&label_80BFE2C0,
        &&label_80BFE2C4,
        &&label_80BFE2C8,
        &&label_80BFE2CC,
        &&label_80BFE2D0,
        &&label_80BFE2D4,
        &&label_80BFE2D8,
        &&label_80BFE2DC,
        &&label_80BFE2E0,
        &&label_80BFE2E4,
        &&label_80BFE2E8,
        &&label_80BFE2EC,
        &&label_80BFE2F0,
        &&label_80BFE2F4,
        &&label_80BFE2F8,
        &&label_80BFE2FC,
        &&label_80BFE300,
        &&label_80BFE304,
        &&label_80BFE308,
        &&label_80BFE30C,
        &&label_80BFE310,
        &&label_80BFE314,
        &&label_80BFE318,
        &&label_80BFE31C,
        &&label_80BFE320,
        &&label_80BFE324,
        &&label_80BFE328,
        &&label_80BFE32C,
        &&label_80BFE330,
        &&label_80BFE334,
        &&label_80BFE338,
        &&label_80BFE33C,
        &&label_80BFE340,
        &&label_80BFE344,
        &&label_80BFE348,
        &&label_80BFE34C,
        &&label_80BFE350,
        &&label_80BFE354,
        &&label_80BFE358,
        &&label_80BFE35C,
        &&label_80BFE360,
        &&label_80BFE364,
        &&label_80BFE368,
        &&label_80BFE36C,
        &&label_80BFE370,
        &&label_80BFE374,
        &&label_80BFE378,
        &&label_80BFE37C,
        &&label_80BFE380,
        &&label_80BFE384,
        &&label_80BFE388,
        &&label_80BFE38C,
        &&label_80BFE390,
        &&label_80BFE394,
        &&label_80BFE398,
        &&label_80BFE39C,
        &&label_80BFE3A0,
        &&label_80BFE3A4,
        &&label_80BFE3A8,
        &&label_80BFE3AC,
        &&label_80BFE3B0,
        &&label_80BFE3B4,
        &&label_80BFE3B8,
        &&label_80BFE3BC,
        &&label_80BFE3C0,
        &&label_80BFE3C4,
        &&label_80BFE3C8,
        &&label_80BFE3CC,
        &&label_80BFE3D0,
        &&label_80BFE3D4,
        &&label_80BFE3D8,
        &&label_80BFE3DC,
        &&label_80BFE3E0,
        &&label_80BFE3E4,
        &&label_80BFE3E8,
        &&label_80BFE3EC,
        &&label_80BFE3F0,
        &&label_80BFE3F4,
        &&label_80BFE3F8,
        &&label_80BFE3FC,
        &&label_80BFE400,
        &&label_80BFE404,
        &&label_80BFE408,
        &&label_80BFE40C,
        &&label_80BFE410,
        &&label_80BFE414,
        &&label_80BFE418,
        &&label_80BFE41C,
        &&label_80BFE420,
        &&label_80BFE424,
        &&label_80BFE428,
        &&label_80BFE42C,
        &&label_80BFE430,
        &&label_80BFE434,
        &&label_80BFE438,
        &&label_80BFE43C,
        &&label_80BFE440,
        &&label_80BFE444,
        &&label_80BFE448,
        &&label_80BFE44C,
        &&label_80BFE450,
        &&label_80BFE454,
        &&label_80BFE458,
        &&label_80BFE45C,
        &&label_80BFE460,
        &&label_80BFE464,
        &&label_80BFE468,
        &&label_80BFE46C,
        &&label_80BFE470,
        &&label_80BFE474,
        &&label_80BFE478,
        &&label_80BFE47C,
        &&label_80BFE480,
        &&label_80BFE484,
        &&label_80BFE488,
        &&label_80BFE48C,
        &&label_80BFE490,
        &&label_80BFE494,
        &&label_80BFE498,
        &&label_80BFE49C,
        &&label_80BFE4A0,
        &&label_80BFE4A4,
        &&label_80BFE4A8,
        &&label_80BFE4AC,
        &&label_80BFE4B0,
        &&label_80BFE4B4,
        &&label_80BFE4B8,
        &&label_80BFE4BC,
        &&label_80BFE4C0,
        &&label_80BFE4C4,
        &&label_80BFE4C8,
        &&label_80BFE4CC,
        &&label_80BFE4D0,
        &&label_80BFE4D4,
        &&label_80BFE4D8,
        &&label_80BFE4DC,
        &&label_80BFE4E0,
        &&label_80BFE4E4,
        &&label_80BFE4E8,
        &&label_80BFE4EC,
        &&label_80BFE4F0,
        &&label_80BFE4F4,
        &&label_80BFE4F8,
        &&label_80BFE4FC,
        &&label_80BFE500,
        &&label_80BFE504,
        &&label_80BFE508,
        &&label_80BFE50C,
        &&label_80BFE510,
        &&label_80BFE514,
        &&label_80BFE518,
        &&label_80BFE51C,
        &&label_80BFE520,
        &&label_80BFE524,
        &&label_80BFE528,
        &&label_80BFE52C,
        &&label_80BFE530,
        &&label_80BFE534,
        &&label_80BFE538,
        &&label_80BFE53C,
        &&label_80BFE540,
        &&label_80BFE544,
        &&label_80BFE548,
        &&label_80BFE54C,
        &&label_80BFE550,
        &&label_80BFE554,
        &&label_80BFE558,
        &&label_80BFE55C,
        &&label_80BFE560,
        &&label_80BFE564,
        &&label_80BFE568,
        &&label_80BFE56C,
        &&label_80BFE570,
        &&label_80BFE574,
        &&label_80BFE578,
        &&label_80BFE57C,
        &&label_80BFE580,
        &&label_80BFE584,
        &&label_80BFE588,
        &&label_80BFE58C,
        &&label_80BFE590,
        &&label_80BFE594,
        &&label_80BFE598,
        &&label_80BFE59C,
        &&label_80BFE5A0,
        &&label_80BFE5A4,
        &&label_80BFE5A8,
        &&label_80BFE5AC,
        &&label_80BFE5B0,
        &&label_80BFE5B4,
        &&label_80BFE5B8,
        &&label_80BFE5BC,
        &&label_80BFE5C0,
        &&label_80BFE5C4,
        &&label_80BFE5C8,
        &&label_80BFE5CC,
        &&label_80BFE5D0,
        &&label_80BFE5D4,
        &&label_80BFE5D8,
        &&label_80BFE5DC,
        &&label_80BFE5E0,
        &&label_80BFE5E4,
        &&label_80BFE5E8,
        &&label_80BFE5EC,
        &&label_80BFE5F0,
        &&label_80BFE5F4,
        &&label_80BFE5F8,
        &&label_80BFE5FC,
        &&label_80BFE600,
        &&label_80BFE604,
        &&label_80BFE608,
        &&label_80BFE60C,
        &&label_80BFE610,
        &&label_80BFE614,
        &&label_80BFE618,
        &&label_80BFE61C,
        &&label_80BFE620,
        &&label_80BFE624,
        &&label_80BFE628,
        &&label_80BFE62C,
        &&label_80BFE630,
        &&label_80BFE634,
        &&label_80BFE638,
        &&label_80BFE63C,
        &&label_80BFE640,
        &&label_80BFE644,
        &&label_80BFE648,
        &&label_80BFE64C,
        &&label_80BFE650,
        &&label_80BFE654,
        &&label_80BFE658,
        &&label_80BFE65C,
        &&label_80BFE660,
        &&label_80BFE664,
        &&label_80BFE668,
        &&label_80BFE66C,
        &&label_80BFE670,
        &&label_80BFE674,
        &&label_80BFE678,
        &&label_80BFE67C,
        &&label_80BFE680,
        &&label_80BFE684,
        &&label_80BFE688,
        &&label_80BFE68C,
        &&label_80BFE690,
        &&label_80BFE694,
        &&label_80BFE698,
        &&label_80BFE69C,
        &&label_80BFE6A0,
        &&label_80BFE6A4,
        &&label_80BFE6A8,
        &&label_80BFE6AC,
        &&label_80BFE6B0,
        &&label_80BFE6B4,
        &&label_80BFE6B8,
        &&label_80BFE6BC,
        &&label_80BFE6C0,
        &&label_80BFE6C4,
        &&label_80BFE6C8,
        &&label_80BFE6CC,
        &&label_80BFE6D0,
        &&label_80BFE6D4,
        &&label_80BFE6D8,
        &&label_80BFE6DC,
        &&label_80BFE6E0,
        &&label_80BFE6E4,
        &&label_80BFE6E8,
        &&label_80BFE6EC,
        &&label_80BFE6F0,
        &&label_80BFE6F4,
        &&label_80BFE6F8,
        &&label_80BFE6FC,
        &&label_80BFE700,
        &&label_80BFE704,
        &&label_80BFE708,
        &&label_80BFE70C,
        &&label_80BFE710,
        &&label_80BFE714,
        &&label_80BFE718,
        &&label_80BFE71C,
        &&label_80BFE720,
        &&label_80BFE724,
        &&label_80BFE728,
        &&label_80BFE72C,
        &&label_80BFE730,
        &&label_80BFE734,
        &&label_80BFE738,
        &&label_80BFE73C,
        &&label_80BFE740,
        &&label_80BFE744,
        &&label_80BFE748,
        &&label_80BFE74C,
        &&label_80BFE750,
        &&label_80BFE754,
        &&label_80BFE758,
        &&label_80BFE75C,
        &&label_80BFE760,
        &&label_80BFE764,
        &&label_80BFE768,
        &&label_80BFE76C,
        &&label_80BFE770,
        &&label_80BFE774,
        &&label_80BFE778,
        &&label_80BFE77C,
        &&label_80BFE780,
        &&label_80BFE784,
        &&label_80BFE788,
        &&label_80BFE78C,
        &&label_80BFE790,
        &&label_80BFE794,
        &&label_80BFE798,
        &&label_80BFE79C,
        &&label_80BFE7A0,
        &&label_80BFE7A4,
        &&label_80BFE7A8,
        &&label_80BFE7AC,
        &&label_80BFE7B0,
        &&label_80BFE7B4,
        &&label_80BFE7B8,
        &&label_80BFE7BC,
        &&label_80BFE7C0,
        &&label_80BFE7C4,
        &&label_80BFE7C8,
        &&label_80BFE7CC,
        &&label_80BFE7D0,
        &&label_80BFE7D4,
        &&label_80BFE7D8,
        &&label_80BFE7DC,
        &&label_80BFE7E0,
        &&label_80BFE7E4,
        &&label_80BFE7E8,
        &&label_80BFE7EC,
        &&label_80BFE7F0,
        &&label_80BFE7F4,
        &&label_80BFE7F8,
        &&label_80BFE7FC,
        &&label_80BFE800,
        &&label_80BFE804,
        &&label_80BFE808,
        &&label_80BFE80C,
        &&label_80BFE810,
        &&label_80BFE814,
        &&label_80BFE818,
        &&label_80BFE81C,
        &&label_80BFE820,
        &&label_80BFE824,
        &&label_80BFE828,
        &&label_80BFE82C,
        &&label_80BFE830,
        &&label_80BFE834,
        &&label_80BFE838,
        &&label_80BFE83C,
        &&label_80BFE840,
        &&label_80BFE844,
        &&label_80BFE848,
        &&label_80BFE84C,
        &&label_80BFE850,
        &&label_80BFE854,
        &&label_80BFE858,
        &&label_80BFE85C,
        &&label_80BFE860,
        &&label_80BFE864,
        &&label_80BFE868,
        &&label_80BFE86C,
        &&label_80BFE870,
        &&label_80BFE874,
        &&label_80BFE878,
        &&label_80BFE87C,
        &&label_80BFE880,
        &&label_80BFE884,
        &&label_80BFE888,
        &&label_80BFE88C,
        &&label_80BFE890,
        &&label_80BFE894,
        &&label_80BFE898,
        &&label_80BFE89C,
        &&label_80BFE8A0,
        &&label_80BFE8A4,
        &&label_80BFE8A8,
        &&label_80BFE8AC,
        &&label_80BFE8B0,
        &&label_80BFE8B4,
        &&label_80BFE8B8,
        &&label_80BFE8BC,
        &&label_80BFE8C0,
        &&label_80BFE8C4,
        &&label_80BFE8C8,
        &&label_80BFE8CC,
        &&label_80BFE8D0,
        &&label_80BFE8D4,
        &&label_80BFE8D8,
        &&label_80BFE8DC,
        &&label_80BFE8E0,
        &&label_80BFE8E4,
        &&label_80BFE8E8,
        &&label_80BFE8EC,
        &&label_80BFE8F0,
        &&label_80BFE8F4,
        &&label_80BFE8F8,
        &&label_80BFE8FC,
        &&label_80BFE900,
        &&label_80BFE904,
        &&label_80BFE908,
        &&label_80BFE90C,
        &&label_80BFE910,
        &&label_80BFE914,
        &&label_80BFE918,
        &&label_80BFE91C,
        &&label_80BFE920,
        &&label_80BFE924,
        &&label_80BFE928,
        &&label_80BFE92C,
        &&label_80BFE930,
        &&label_80BFE934,
        &&label_80BFE938,
        &&label_80BFE93C,
        &&label_80BFE940,
        &&label_80BFE944,
        &&label_80BFE948,
        &&label_80BFE94C,
        &&label_80BFE950,
        &&label_80BFE954,
        &&label_80BFE958,
        &&label_80BFE95C,
        &&label_80BFE960,
        &&label_80BFE964,
        &&label_80BFE968,
        &&label_80BFE96C,
        &&label_80BFE970,
        &&label_80BFE974,
        &&label_80BFE978,
        &&label_80BFE97C,
        &&label_80BFE980,
        &&label_80BFE984,
        &&label_80BFE988,
        &&label_80BFE98C,
        &&label_80BFE990,
        &&label_80BFE994,
        &&label_80BFE998,
        &&label_80BFE99C,
        &&label_80BFE9A0,
        &&label_80BFE9A4,
        &&label_80BFE9A8,
        &&label_80BFE9AC,
        &&label_80BFE9B0,
        &&label_80BFE9B4,
        &&label_80BFE9B8,
        &&label_80BFE9BC,
        &&label_80BFE9C0,
        &&label_80BFE9C4,
        &&label_80BFE9C8,
        &&label_80BFE9CC,
        &&label_80BFE9D0,
        &&label_80BFE9D4,
        &&label_80BFE9D8,
        &&label_80BFE9DC,
        &&label_80BFE9E0,
        &&label_80BFE9E4,
        &&label_80BFE9E8,
        &&label_80BFE9EC,
        &&label_80BFE9F0,
        &&label_80BFE9F4,
        &&label_80BFE9F8,
        &&label_80BFE9FC,
        &&label_80BFEA00,
        &&label_80BFEA04,
        &&label_80BFEA08,
        &&label_80BFEA0C,
        &&label_80BFEA10,
        &&label_80BFEA14,
        &&label_80BFEA18,
        &&label_80BFEA1C,
        &&label_80BFEA20,
        &&label_80BFEA24,
        &&label_80BFEA28,
        &&label_80BFEA2C,
        &&label_80BFEA30,
        &&label_80BFEA34,
        &&label_80BFEA38,
        &&label_80BFEA3C,
        &&label_80BFEA40,
        &&label_80BFEA44,
        &&label_80BFEA48,
        &&label_80BFEA4C,
        &&label_80BFEA50,
        &&label_80BFEA54,
        &&label_80BFEA58,
        &&label_80BFEA5C,
        &&label_80BFEA60,
        &&label_80BFEA64,
        &&label_80BFEA68,
        &&label_80BFEA6C,
        &&label_80BFEA70,
        &&label_80BFEA74,
        &&label_80BFEA78,
        &&label_80BFEA7C,
        &&label_80BFEA80,
        &&label_80BFEA84,
        &&label_80BFEA88,
        &&label_80BFEA8C,
        &&label_80BFEA90,
        &&label_80BFEA94,
        &&label_80BFEA98,
        &&label_80BFEA9C,
        &&label_80BFEAA0,
        &&label_80BFEAA4,
        &&label_80BFEAA8,
        &&label_80BFEAAC,
        &&label_80BFEAB0,
        &&label_80BFEAB4,
        &&label_80BFEAB8,
        &&label_80BFEABC,
        &&label_80BFEAC0,
        &&label_80BFEAC4,
        &&label_80BFEAC8,
        &&label_80BFEACC,
        &&label_80BFEAD0,
        &&label_80BFEAD4,
        &&label_80BFEAD8,
        &&label_80BFEADC,
        &&label_80BFEAE0,
        &&label_80BFEAE4,
        &&label_80BFEAE8,
        &&label_80BFEAEC,
        &&label_80BFEAF0,
        &&label_80BFEAF4,
        &&label_80BFEAF8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80BFDCC0u && pc <= 0x80BFEAF8u && ((pc - 0x80BFDCC0u) & 3u) == 0u)
            goto *pc_table_80BFDCC0[(pc - 0x80BFDCC0u) >> 2];
    }
    return;
label_80BFDCC0:
    ctx->pc = 0x80BFDCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDCC0: stwu     r1, -16(r1)
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
label_80BFDCC4:
    ctx->pc = 0x80BFDCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDCC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFDCC8:
    ctx->pc = 0x80BFDCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDCC8: stw     r0, 20(r1)
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
label_80BFDCCC:
    ctx->pc = 0x80BFDCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCCCu)) return;
    // 80BFDCCC: cmpwi   r3, 2
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

label_80BFDCD0:
    ctx->pc = 0x80BFDCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCD0u)) return;
    // 80BFDCD0: bc    12, 2, 0x80BFE134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE134;
        }
    }

label_80BFDCD4:
    ctx->pc = 0x80BFDCD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDCD4: bc    4, 0, 0x80BFDCE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFDCE8;
        }
    }

label_80BFDCD8:
    ctx->pc = 0x80BFDCD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDCD8: cmpwi   r3, 0
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

label_80BFDCDC:
    ctx->pc = 0x80BFDCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCDCu)) return;
    // 80BFDCDC: bc    12, 2, 0x80BFE170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE170;
        }
    }

label_80BFDCE0:
    ctx->pc = 0x80BFDCE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDCE0: bc    4, 0, 0x80BFDCF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFDCF0;
        }
    }

label_80BFDCE4:
    ctx->pc = 0x80BFDCE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDCE4: b       0x80BFE170
    {
            goto label_80BFE170;
    }

label_80BFDCE8:
    ctx->pc = 0x80BFDCE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDCE8: cmpwi   r3, 4
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

label_80BFDCEC:
    ctx->pc = 0x80BFDCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDCECu)) return;
    // 80BFDCEC: b       0x80BFE170
    {
            goto label_80BFE170;
    }

label_80BFDCF0:
    ctx->pc = 0x80BFDCF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDCF0: bl      0x8045DE7C
    {
            ctx->lr = 0x80BFDCF4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80BFDCF4:
    ctx->pc = 0x80BFDCF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDCF4: bl      0x80460A60
    {
            ctx->lr = 0x80BFDCF8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80BFDCF8:
    ctx->pc = 0x80BFDCF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDCF8: bl      0x80460A24
    {
            ctx->lr = 0x80BFDCFCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80BFDCFC:
    ctx->pc = 0x80BFDCFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDCFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDCFC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BFDD00:
    ctx->pc = 0x80BFDD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD00u)) return;
    // 80BFDD00: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDD04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDD04:
    ctx->pc = 0x80BFDD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDD04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDD08:
    ctx->pc = 0x80BFDD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD08u)) return;
    // 80BFDD08: bl      0x8045EC10
    {
            ctx->lr = 0x80BFDD0Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BFDD0C:
    ctx->pc = 0x80BFDD0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDD0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BFDD10:
    ctx->pc = 0x80BFDD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD10u)) return;
    // 80BFDD10: bl      0x80BFE76C
    {
            ctx->lr = 0x80BFDD14u;
            goto label_80BFE76C;
    }

label_80BFDD14:
    ctx->pc = 0x80BFDD14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFDD14: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFDD18:
    ctx->pc = 0x80BFDD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD18u)) return;
    // 80BFDD18: addi    r3, r3, 28816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28816);

label_80BFDD1C:
    ctx->pc = 0x80BFDD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDD1C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDD1Cu)) return;
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
label_80BFDD20:
    ctx->pc = 0x80BFDD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD20u)) return;
    // 80BFDD20: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFDD24:
    ctx->pc = 0x80BFDD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD24u)) return;
    // 80BFDD24: addi    r3, r3, 28820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28820);

label_80BFDD28:
    ctx->pc = 0x80BFDD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDD28: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFDD28u)) return;
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
label_80BFDD2C:
    ctx->pc = 0x80BFDD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD2Cu)) return;
    // 80BFDD2C: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80BFDD2Cu)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80BFDD30:
    ctx->pc = 0x80BFDD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD30u)) return;
    // 80BFDD30: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80BFDD30u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80BFDD34:
    ctx->pc = 0x80BFDD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD34u)) return;
    // 80BFDD34: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80BFDD34u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80BFDD38:
    ctx->pc = 0x80BFDD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD38u)) return;
    // 80BFDD38: bl      0x80BFE384
    {
            ctx->lr = 0x80BFDD3Cu;
            goto label_80BFE384;
    }

label_80BFDD3C:
    ctx->pc = 0x80BFDD3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80BFDD3C: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFDD40:
    ctx->pc = 0x80BFDD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD40u)) return;
    // 80BFDD40: addi    r4, r4, -25024
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25024);

label_80BFDD44:
    ctx->pc = 0x80BFDD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFDD44: stw     r3, 0(r4)
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
label_80BFDD48:
    ctx->pc = 0x80BFDD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD48u)) return;
    // 80BFDD48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDD4C:
    ctx->pc = 0x80BFDD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD4Cu)) return;
    // 80BFDD4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BFDD50:
    ctx->pc = 0x80BFDD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD50u)) return;
    // 80BFDD50: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFDD54:
    ctx->pc = 0x80BFDD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD54u)) return;
    // 80BFDD54: addi    r5, r5, 28824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28824);

label_80BFDD58:
    ctx->pc = 0x80BFDD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDD58: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFDD58u)) return;
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
label_80BFDD5C:
    ctx->pc = 0x80BFDD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD5Cu)) return;
    // 80BFDD5C: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFDD60:
    ctx->pc = 0x80BFDD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD60u)) return;
    // 80BFDD60: addi    r5, r5, 28828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28828);

label_80BFDD64:
    ctx->pc = 0x80BFDD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDD64: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFDD64u)) return;
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
label_80BFDD68:
    ctx->pc = 0x80BFDD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD68u)) return;
    // 80BFDD68: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFDD6C:
    ctx->pc = 0x80BFDD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD6Cu)) return;
    // 80BFDD6C: addi    r5, r5, 28832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28832);

label_80BFDD70:
    ctx->pc = 0x80BFDD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDD70: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFDD70u)) return;
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
label_80BFDD74:
    ctx->pc = 0x80BFDD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD74u)) return;
    // 80BFDD74: bl      0x8045C750
    {
            ctx->lr = 0x80BFDD78u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BFDD78:
    ctx->pc = 0x80BFDD78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFDD78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDD7C:
    ctx->pc = 0x80BFDD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD7Cu)) return;
    // 80BFDD7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BFDD80:
    ctx->pc = 0x80BFDD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD80u)) return;
    // 80BFDD80: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_80BFDD84:
    ctx->pc = 0x80BFDD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD84u)) return;
    // 80BFDD84: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80BFDD88:
    ctx->pc = 0x80BFDD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD88u)) return;
    // 80BFDD88: addi    r6, r6, -10608
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-10608);

label_80BFDD8C:
    ctx->pc = 0x80BFDD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD8Cu)) return;
    // 80BFDD8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BFDD90:
    ctx->pc = 0x80BFDD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD90u)) return;
    // 80BFDD90: bl      0x8045C7B4
    {
            ctx->lr = 0x80BFDD94u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BFDD94:
    ctx->pc = 0x80BFDD94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDD94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDD98:
    ctx->pc = 0x80BFDD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDD98u)) return;
    // 80BFDD98: bl      0x8045F220
    {
            ctx->lr = 0x80BFDD9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDD9C:
    ctx->pc = 0x80BFDD9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDD9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFDD9C: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDDA0:
    ctx->pc = 0x80BFDDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDA0u)) return;
    // 80BFDDA0: addi    r4, r4, 28836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28836);

label_80BFDDA4:
    ctx->pc = 0x80BFDDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDDA4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDDA4u)) return;
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
label_80BFDDA8:
    ctx->pc = 0x80BFDDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDA8u)) return;
    // 80BFDDA8: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDDAC:
    ctx->pc = 0x80BFDDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDACu)) return;
    // 80BFDDAC: addi    r4, r4, 28840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28840);

label_80BFDDB0:
    ctx->pc = 0x80BFDDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDDB0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDDB0u)) return;
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
label_80BFDDB4:
    ctx->pc = 0x80BFDDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDB4u)) return;
    // 80BFDDB4: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDDB8:
    ctx->pc = 0x80BFDDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDB8u)) return;
    // 80BFDDB8: addi    r4, r4, 28844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28844);

label_80BFDDBC:
    ctx->pc = 0x80BFDDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDDBC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDDBCu)) return;
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
label_80BFDDC0:
    ctx->pc = 0x80BFDDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDC0u)) return;
    // 80BFDDC0: bl      0x8045EF2C
    {
            ctx->lr = 0x80BFDDC4u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80BFDDC4:
    ctx->pc = 0x80BFDDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDDC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDDC8:
    ctx->pc = 0x80BFDDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDC8u)) return;
    // 80BFDDC8: bl      0x8045F220
    {
            ctx->lr = 0x80BFDDCCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDDCC:
    ctx->pc = 0x80BFDDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFDDCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BFDDD0:
    ctx->pc = 0x80BFDDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDD0u)) return;
    // 80BFDDD0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BFDDD4:
    ctx->pc = 0x80BFDDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDD4u)) return;
    // 80BFDDD4: addi    r5, r5, -16384
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80BFDDD8:
    ctx->pc = 0x80BFDDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDD8u)) return;
    // 80BFDDD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BFDDDC:
    ctx->pc = 0x80BFDDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDDCu)) return;
    // 80BFDDDC: bl      0x8045EEA8
    {
            ctx->lr = 0x80BFDDE0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80BFDDE0:
    ctx->pc = 0x80BFDDE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDDE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDDE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BFDDE4:
    ctx->pc = 0x80BFDDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDE4u)) return;
    // 80BFDDE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDDE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDDE8:
    ctx->pc = 0x80BFDDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFDDE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDDEC:
    ctx->pc = 0x80BFDDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDECu)) return;
    // 80BFDDEC: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80BFDDF0:
    ctx->pc = 0x80BFDDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDF0u)) return;
    // 80BFDDF0: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80BFDDF4:
    ctx->pc = 0x80BFDDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDF4u)) return;
    // 80BFDDF4: bl      0x80BFE874
    {
            ctx->lr = 0x80BFDDF8u;
            goto label_80BFE874;
    }

label_80BFDDF8:
    ctx->pc = 0x80BFDDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFDDF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDDFC:
    ctx->pc = 0x80BFDDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDDFCu)) return;
    // 80BFDDFC: li      r4, -120
    ctx->gpr[4] = (u32)(s32)(-120);

label_80BFDE00:
    ctx->pc = 0x80BFDE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE00u)) return;
    // 80BFDE00: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_80BFDE04:
    ctx->pc = 0x80BFDE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE04u)) return;
    // 80BFDE04: bl      0x80BFE950
    {
            ctx->lr = 0x80BFDE08u;
            goto label_80BFE950;
    }

label_80BFDE08:
    ctx->pc = 0x80BFDE08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDE08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDE0C:
    ctx->pc = 0x80BFDE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE0Cu)) return;
    // 80BFDE0C: bl      0x8045F220
    {
            ctx->lr = 0x80BFDE10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDE10:
    ctx->pc = 0x80BFDE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDE10: bl      0x8045EB8C
    {
            ctx->lr = 0x80BFDE14u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80BFDE14:
    ctx->pc = 0x80BFDE14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDE14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDE18:
    ctx->pc = 0x80BFDE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE18u)) return;
    // 80BFDE18: bl      0x8045F220
    {
            ctx->lr = 0x80BFDE1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDE1C:
    ctx->pc = 0x80BFDE1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFDE1C: lis     r4, -28559
    ctx->gpr[4] = ((u32)(s32)(-28559) << 16);

label_80BFDE20:
    ctx->pc = 0x80BFDE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE20u)) return;
    // 80BFDE20: addi    r4, r4, -3448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3448);

label_80BFDE24:
    ctx->pc = 0x80BFDE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE24u)) return;
    // 80BFDE24: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80BFDE28:
    ctx->pc = 0x80BFDE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE28u)) return;
    // 80BFDE28: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80BFDE2C:
    ctx->pc = 0x80BFDE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE2Cu)) return;
    // 80BFDE2C: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFDE30:
    ctx->pc = 0x80BFDE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE30u)) return;
    // 80BFDE30: addi    r6, r6, 28820
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28820);

label_80BFDE34:
    ctx->pc = 0x80BFDE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDE34: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BFDE34u)) return;
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
label_80BFDE38:
    ctx->pc = 0x80BFDE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE38u)) return;
    // 80BFDE38: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BFDE3C:
    ctx->pc = 0x80BFDE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE3Cu)) return;
    // 80BFDE3C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80BFDE40:
    ctx->pc = 0x80BFDE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE40u)) return;
    // 80BFDE40: bl      0x8045EBE4
    {
            ctx->lr = 0x80BFDE44u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BFDE44:
    ctx->pc = 0x80BFDE44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDE44: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80BFDE48:
    ctx->pc = 0x80BFDE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE48u)) return;
    // 80BFDE48: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDE4Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDE4C:
    ctx->pc = 0x80BFDE4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFDE4C: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFDE50:
    ctx->pc = 0x80BFDE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE50u)) return;
    // 80BFDE50: addi    r3, r3, -25024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25024);

label_80BFDE54:
    ctx->pc = 0x80BFDE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDE54: lwz     r3, 0(r3)
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
label_80BFDE58:
    ctx->pc = 0x80BFDE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE58u)) return;
    // 80BFDE58: cmplwi  r3, 0x0000
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

label_80BFDE5C:
    ctx->pc = 0x80BFDE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE5Cu)) return;
    // 80BFDE5C: bc    12, 2, 0x80BFDE70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFDE70;
        }
    }

label_80BFDE60:
    ctx->pc = 0x80BFDE60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFDE60: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDE64:
    ctx->pc = 0x80BFDE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE64u)) return;
    // 80BFDE64: addi    r4, r4, 28848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28848);

label_80BFDE68:
    ctx->pc = 0x80BFDE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDE68: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFDE68u)) return;
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
label_80BFDE6C:
    ctx->pc = 0x80BFDE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE6Cu)) return;
    // 80BFDE6C: bl      0x80BFE440
    {
            ctx->lr = 0x80BFDE70u;
            goto label_80BFE440;
    }

label_80BFDE70:
    ctx->pc = 0x80BFDE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BFDE70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDE74:
    ctx->pc = 0x80BFDE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE74u)) return;
    // 80BFDE74: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80BFDE78:
    ctx->pc = 0x80BFDE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE78u)) return;
    // 80BFDE78: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFDE7C:
    ctx->pc = 0x80BFDE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE7Cu)) return;
    // 80BFDE7C: addi    r5, r5, 28852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28852);

label_80BFDE80:
    ctx->pc = 0x80BFDE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFDE80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFDE80u)) return;
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
label_80BFDE84:
    ctx->pc = 0x80BFDE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE84u)) return;
    // 80BFDE84: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFDE88:
    ctx->pc = 0x80BFDE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE88u)) return;
    // 80BFDE88: addi    r5, r5, 28856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28856);

label_80BFDE8C:
    ctx->pc = 0x80BFDE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFDE8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFDE8Cu)) return;
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
label_80BFDE90:
    ctx->pc = 0x80BFDE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE90u)) return;
    // 80BFDE90: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFDE94:
    ctx->pc = 0x80BFDE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE94u)) return;
    // 80BFDE94: addi    r5, r5, 28860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28860);

label_80BFDE98:
    ctx->pc = 0x80BFDE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDE98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFDE98u)) return;
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
label_80BFDE9C:
    ctx->pc = 0x80BFDE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDE9Cu)) return;
    // 80BFDE9C: bl      0x8045C750
    {
            ctx->lr = 0x80BFDEA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BFDEA0:
    ctx->pc = 0x80BFDEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDEA0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80BFDEA4:
    ctx->pc = 0x80BFDEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEA4u)) return;
    // 80BFDEA4: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDEA8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDEA8:
    ctx->pc = 0x80BFDEA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDEA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDEAC:
    ctx->pc = 0x80BFDEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEACu)) return;
    // 80BFDEAC: bl      0x80BFE8E4
    {
            ctx->lr = 0x80BFDEB0u;
            goto label_80BFE8E4;
    }

label_80BFDEB0:
    ctx->pc = 0x80BFDEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDEB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDEB4:
    ctx->pc = 0x80BFDEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEB4u)) return;
    // 80BFDEB4: bl      0x8045F220
    {
            ctx->lr = 0x80BFDEB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDEB8:
    ctx->pc = 0x80BFDEB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFDEB8: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFDEBC:
    ctx->pc = 0x80BFDEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEBCu)) return;
    // 80BFDEBC: addi    r4, r4, -25052
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25052);

label_80BFDEC0:
    ctx->pc = 0x80BFDEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEC0u)) return;
    // 80BFDEC0: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80BFDEC4:
    ctx->pc = 0x80BFDEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEC4u)) return;
    // 80BFDEC4: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80BFDEC8:
    ctx->pc = 0x80BFDEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEC8u)) return;
    // 80BFDEC8: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFDECC:
    ctx->pc = 0x80BFDECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDECCu)) return;
    // 80BFDECC: addi    r6, r6, 28820
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28820);

label_80BFDED0:
    ctx->pc = 0x80BFDED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDED0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BFDED0u)) return;
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
label_80BFDED4:
    ctx->pc = 0x80BFDED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDED4u)) return;
    // 80BFDED4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BFDED8:
    ctx->pc = 0x80BFDED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDED8u)) return;
    // 80BFDED8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BFDEDC:
    ctx->pc = 0x80BFDEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEDCu)) return;
    // 80BFDEDC: bl      0x8045EBE4
    {
            ctx->lr = 0x80BFDEE0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BFDEE0:
    ctx->pc = 0x80BFDEE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDEE0: li      r3, 961
    ctx->gpr[3] = (u32)(s32)(961);

label_80BFDEE4:
    ctx->pc = 0x80BFDEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEE4u)) return;
    // 80BFDEE4: bl      0x8045BFA0
    {
            ctx->lr = 0x80BFDEE8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BFDEE8:
    ctx->pc = 0x80BFDEE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDEE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDEEC:
    ctx->pc = 0x80BFDEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEECu)) return;
    // 80BFDEEC: bl      0x8045F220
    {
            ctx->lr = 0x80BFDEF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDEF0:
    ctx->pc = 0x80BFDEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDEF0: bl      0x8045C034
    {
            ctx->lr = 0x80BFDEF4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BFDEF4:
    ctx->pc = 0x80BFDEF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDEF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDEF8:
    ctx->pc = 0x80BFDEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDEF8u)) return;
    // 80BFDEF8: bl      0x8045F220
    {
            ctx->lr = 0x80BFDEFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDEFC:
    ctx->pc = 0x80BFDEFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDEFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFDEFC: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDF00:
    ctx->pc = 0x80BFDF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF00u)) return;
    // 80BFDF00: addi    r4, r4, 29476
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29476);

label_80BFDF04:
    ctx->pc = 0x80BFDF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF04u)) return;
    // 80BFDF04: bl      0x8045C060
    {
            ctx->lr = 0x80BFDF08u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BFDF08:
    ctx->pc = 0x80BFDF08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BFDF08: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BFDF0C:
    ctx->pc = 0x80BFDF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF0Cu)) return;
    // 80BFDF0C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80BFDF10:
    ctx->pc = 0x80BFDF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDF10: lwz     r0, 0(r3)
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
label_80BFDF14:
    ctx->pc = 0x80BFDF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF14u)) return;
    // 80BFDF14: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BFDF18:
    ctx->pc = 0x80BFDF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF18u)) return;
    // 80BFDF18: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFDF1C:
    ctx->pc = 0x80BFDF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF1Cu)) return;
    // 80BFDF1C: addi    r3, r3, 29448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29448);

label_80BFDF20:
    ctx->pc = 0x80BFDF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDF20: lwzx    r3, r3, r0
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
label_80BFDF24:
    ctx->pc = 0x80BFDF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFDF24: lwz     r3, 0(r3)
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
label_80BFDF28:
    ctx->pc = 0x80BFDF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF28u)) return;
    // 80BFDF28: bl      0x8045F6FC
    {
            ctx->lr = 0x80BFDF2Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80BFDF2C:
    ctx->pc = 0x80BFDF2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF2C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80BFDF30:
    ctx->pc = 0x80BFDF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF30u)) return;
    // 80BFDF30: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDF34u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDF34:
    ctx->pc = 0x80BFDF34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDF38:
    ctx->pc = 0x80BFDF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF38u)) return;
    // 80BFDF38: bl      0x8045F220
    {
            ctx->lr = 0x80BFDF3Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDF3C:
    ctx->pc = 0x80BFDF3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDF3C: bl      0x8045C034
    {
            ctx->lr = 0x80BFDF40u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BFDF40:
    ctx->pc = 0x80BFDF40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF40: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80BFDF44:
    ctx->pc = 0x80BFDF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF44u)) return;
    // 80BFDF44: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDF48u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDF48:
    ctx->pc = 0x80BFDF48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDF4C:
    ctx->pc = 0x80BFDF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF4Cu)) return;
    // 80BFDF4C: bl      0x8045F220
    {
            ctx->lr = 0x80BFDF50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDF50:
    ctx->pc = 0x80BFDF50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFDF50: lis     r4, -28559
    ctx->gpr[4] = ((u32)(s32)(-28559) << 16);

label_80BFDF54:
    ctx->pc = 0x80BFDF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF54u)) return;
    // 80BFDF54: addi    r4, r4, -3448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3448);

label_80BFDF58:
    ctx->pc = 0x80BFDF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF58u)) return;
    // 80BFDF58: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80BFDF5C:
    ctx->pc = 0x80BFDF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF5Cu)) return;
    // 80BFDF5C: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80BFDF60:
    ctx->pc = 0x80BFDF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF60u)) return;
    // 80BFDF60: lis     r6, -27483
    ctx->gpr[6] = ((u32)(s32)(-27483) << 16);

label_80BFDF64:
    ctx->pc = 0x80BFDF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF64u)) return;
    // 80BFDF64: addi    r6, r6, 28820
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(28820);

label_80BFDF68:
    ctx->pc = 0x80BFDF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFDF68: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80BFDF68u)) return;
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
label_80BFDF6C:
    ctx->pc = 0x80BFDF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF6Cu)) return;
    // 80BFDF6C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80BFDF70:
    ctx->pc = 0x80BFDF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF70u)) return;
    // 80BFDF70: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80BFDF74:
    ctx->pc = 0x80BFDF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF74u)) return;
    // 80BFDF74: bl      0x8045EBE4
    {
            ctx->lr = 0x80BFDF78u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80BFDF78:
    ctx->pc = 0x80BFDF78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF78: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80BFDF7C:
    ctx->pc = 0x80BFDF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF7Cu)) return;
    // 80BFDF7C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFDF80u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFDF80:
    ctx->pc = 0x80BFDF80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF80: li      r3, 962
    ctx->gpr[3] = (u32)(s32)(962);

label_80BFDF84:
    ctx->pc = 0x80BFDF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF84u)) return;
    // 80BFDF84: bl      0x8045BFA0
    {
            ctx->lr = 0x80BFDF88u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BFDF88:
    ctx->pc = 0x80BFDF88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDF88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDF8C:
    ctx->pc = 0x80BFDF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF8Cu)) return;
    // 80BFDF8C: bl      0x8045F220
    {
            ctx->lr = 0x80BFDF90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDF90:
    ctx->pc = 0x80BFDF90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFDF90: bl      0x8045C034
    {
            ctx->lr = 0x80BFDF94u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BFDF94:
    ctx->pc = 0x80BFDF94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDF94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFDF94: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BFDF98:
    ctx->pc = 0x80BFDF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF98u)) return;
    // 80BFDF98: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BFDF9C:
    ctx->pc = 0x80BFDF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDF9C: lwz     r0, 0(r3)
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
label_80BFDFA0:
    ctx->pc = 0x80BFDFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFA0u)) return;
    // 80BFDFA0: cmpwi   r0, 0
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

label_80BFDFA4:
    ctx->pc = 0x80BFDFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFA4u)) return;
    // 80BFDFA4: bc    4, 2, 0x80BFDFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFDFBC;
        }
    }

label_80BFDFA8:
    ctx->pc = 0x80BFDFA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDFA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDFA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDFAC:
    ctx->pc = 0x80BFDFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFACu)) return;
    // 80BFDFAC: bl      0x8045F220
    {
            ctx->lr = 0x80BFDFB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDFB0:
    ctx->pc = 0x80BFDFB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFDFB0: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDFB4:
    ctx->pc = 0x80BFDFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFB4u)) return;
    // 80BFDFB4: addi    r4, r4, 29480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29480);

label_80BFDFB8:
    ctx->pc = 0x80BFDFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFB8u)) return;
    // 80BFDFB8: bl      0x8045C060
    {
            ctx->lr = 0x80BFDFBCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BFDFBC:
    ctx->pc = 0x80BFDFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFDFBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BFDFC0:
    ctx->pc = 0x80BFDFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFC0u)) return;
    // 80BFDFC0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BFDFC4:
    ctx->pc = 0x80BFDFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFDFC4: lwz     r0, 0(r3)
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
label_80BFDFC8:
    ctx->pc = 0x80BFDFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFC8u)) return;
    // 80BFDFC8: cmpwi   r0, 1
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

label_80BFDFCC:
    ctx->pc = 0x80BFDFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFCCu)) return;
    // 80BFDFCC: bc    4, 2, 0x80BFDFE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFDFE4;
        }
    }

label_80BFDFD0:
    ctx->pc = 0x80BFDFD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDFD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFDFD0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFDFD4:
    ctx->pc = 0x80BFDFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFD4u)) return;
    // 80BFDFD4: bl      0x8045F220
    {
            ctx->lr = 0x80BFDFD8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFDFD8:
    ctx->pc = 0x80BFDFD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDFD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFDFD8: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDFDC:
    ctx->pc = 0x80BFDFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFDCu)) return;
    // 80BFDFDC: addi    r4, r4, 29488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29488);

label_80BFDFE0:
    ctx->pc = 0x80BFDFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFE0u)) return;
    // 80BFDFE0: bl      0x8045C060
    {
            ctx->lr = 0x80BFDFE4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BFDFE4:
    ctx->pc = 0x80BFDFE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFDFE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFDFE4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80BFDFE8:
    ctx->pc = 0x80BFDFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFE8u)) return;
    // 80BFDFE8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80BFDFEC:
    ctx->pc = 0x80BFDFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFECu)) return;
    // 80BFDFEC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80BFDFF0:
    ctx->pc = 0x80BFDFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFDFF0: lwz     r0, 0(r4)
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
label_80BFDFF4:
    ctx->pc = 0x80BFDFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFF4u)) return;
    // 80BFDFF4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BFDFF8:
    ctx->pc = 0x80BFDFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFF8u)) return;
    // 80BFDFF8: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFDFFC:
    ctx->pc = 0x80BFDFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFDFFCu)) return;
    // 80BFDFFC: addi    r4, r4, 29448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29448);

label_80BFE000:
    ctx->pc = 0x80BFE000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE000: lwzx    r4, r4, r0
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
label_80BFE004:
    ctx->pc = 0x80BFE004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE004: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE008:
    ctx->pc = 0x80BFE008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE008u)) return;
    // 80BFE008: bl      0x8045F608
    {
            ctx->lr = 0x80BFE00Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80BFE00C:
    ctx->pc = 0x80BFE00Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE00Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFE00C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BFE010:
    ctx->pc = 0x80BFE010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE010u)) return;
    // 80BFE010: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BFE014:
    ctx->pc = 0x80BFE014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE014: lwz     r0, 0(r3)
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
label_80BFE018:
    ctx->pc = 0x80BFE018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE018u)) return;
    // 80BFE018: cmpwi   r0, 0
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

label_80BFE01C:
    ctx->pc = 0x80BFE01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE01Cu)) return;
    // 80BFE01C: bc    4, 2, 0x80BFE02C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE02C;
        }
    }

label_80BFE020:
    ctx->pc = 0x80BFE020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE020: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE024:
    ctx->pc = 0x80BFE024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE024u)) return;
    // 80BFE024: bl      0x8045F220
    {
            ctx->lr = 0x80BFE028u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFE028:
    ctx->pc = 0x80BFE028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE028: bl      0x8045C034
    {
            ctx->lr = 0x80BFE02Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BFE02C:
    ctx->pc = 0x80BFE02Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE02Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFE02C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BFE030:
    ctx->pc = 0x80BFE030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE030u)) return;
    // 80BFE030: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80BFE034:
    ctx->pc = 0x80BFE034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE034u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE034: lwz     r0, 0(r3)
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
label_80BFE038:
    ctx->pc = 0x80BFE038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE038u)) return;
    // 80BFE038: cmpwi   r0, 1
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

label_80BFE03C:
    ctx->pc = 0x80BFE03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE03Cu)) return;
    // 80BFE03C: bc    4, 2, 0x80BFE04C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE04C;
        }
    }

label_80BFE040:
    ctx->pc = 0x80BFE040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE040: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE044:
    ctx->pc = 0x80BFE044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE044u)) return;
    // 80BFE044: bl      0x8045F220
    {
            ctx->lr = 0x80BFE048u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFE048:
    ctx->pc = 0x80BFE048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE048: bl      0x8045C034
    {
            ctx->lr = 0x80BFE04Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BFE04C:
    ctx->pc = 0x80BFE04Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE04Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE04C: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80BFE050:
    ctx->pc = 0x80BFE050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE050u)) return;
    // 80BFE050: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFE054u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFE054:
    ctx->pc = 0x80BFE054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BFE054: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE058:
    ctx->pc = 0x80BFE058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE058u)) return;
    // 80BFE058: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BFE05C:
    ctx->pc = 0x80BFE05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE05Cu)) return;
    // 80BFE05C: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFE060:
    ctx->pc = 0x80BFE060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE060u)) return;
    // 80BFE060: addi    r5, r5, 28864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28864);

label_80BFE064:
    ctx->pc = 0x80BFE064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE064: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE064u)) return;
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
label_80BFE068:
    ctx->pc = 0x80BFE068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE068u)) return;
    // 80BFE068: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFE06C:
    ctx->pc = 0x80BFE06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE06Cu)) return;
    // 80BFE06C: addi    r5, r5, 28868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28868);

label_80BFE070:
    ctx->pc = 0x80BFE070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE070: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE070u)) return;
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
label_80BFE074:
    ctx->pc = 0x80BFE074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE074u)) return;
    // 80BFE074: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFE078:
    ctx->pc = 0x80BFE078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE078u)) return;
    // 80BFE078: addi    r5, r5, 28872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28872);

label_80BFE07C:
    ctx->pc = 0x80BFE07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE07C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE07Cu)) return;
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
label_80BFE080:
    ctx->pc = 0x80BFE080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE080u)) return;
    // 80BFE080: bl      0x8045C750
    {
            ctx->lr = 0x80BFE084u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BFE084:
    ctx->pc = 0x80BFE084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFE084: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE088:
    ctx->pc = 0x80BFE088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE088u)) return;
    // 80BFE088: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80BFE08C:
    ctx->pc = 0x80BFE08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE08Cu)) return;
    // 80BFE08C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80BFE090:
    ctx->pc = 0x80BFE090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE090u)) return;
    // 80BFE090: addi    r5, r5, -4608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-4608);

label_80BFE094:
    ctx->pc = 0x80BFE094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE094u)) return;
    // 80BFE094: li      r6, 7312
    ctx->gpr[6] = (u32)(s32)(7312);

label_80BFE098:
    ctx->pc = 0x80BFE098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE098u)) return;
    // 80BFE098: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80BFE09C:
    ctx->pc = 0x80BFE09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE09Cu)) return;
    // 80BFE09C: bl      0x8045C7B4
    {
            ctx->lr = 0x80BFE0A0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80BFE0A0:
    ctx->pc = 0x80BFE0A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE0A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80BFE0A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE0A4:
    ctx->pc = 0x80BFE0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0A4u)) return;
    // 80BFE0A4: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80BFE0A8:
    ctx->pc = 0x80BFE0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0A8u)) return;
    // 80BFE0A8: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFE0AC:
    ctx->pc = 0x80BFE0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0ACu)) return;
    // 80BFE0AC: addi    r5, r5, 28876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28876);

label_80BFE0B0:
    ctx->pc = 0x80BFE0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE0B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE0B0u)) return;
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
label_80BFE0B4:
    ctx->pc = 0x80BFE0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0B4u)) return;
    // 80BFE0B4: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFE0B8:
    ctx->pc = 0x80BFE0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0B8u)) return;
    // 80BFE0B8: addi    r5, r5, 28880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28880);

label_80BFE0BC:
    ctx->pc = 0x80BFE0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE0BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE0BCu)) return;
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
label_80BFE0C0:
    ctx->pc = 0x80BFE0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0C0u)) return;
    // 80BFE0C0: lis     r5, -27483
    ctx->gpr[5] = ((u32)(s32)(-27483) << 16);

label_80BFE0C4:
    ctx->pc = 0x80BFE0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0C4u)) return;
    // 80BFE0C4: addi    r5, r5, 28884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28884);

label_80BFE0C8:
    ctx->pc = 0x80BFE0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE0C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE0C8u)) return;
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
label_80BFE0CC:
    ctx->pc = 0x80BFE0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0CCu)) return;
    // 80BFE0CC: bl      0x8045C750
    {
            ctx->lr = 0x80BFE0D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80BFE0D0:
    ctx->pc = 0x80BFE0D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE0D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE0D0: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80BFE0D4:
    ctx->pc = 0x80BFE0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0D4u)) return;
    // 80BFE0D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFE0D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFE0D8:
    ctx->pc = 0x80BFE0D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE0D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE0D8: li      r3, 963
    ctx->gpr[3] = (u32)(s32)(963);

label_80BFE0DC:
    ctx->pc = 0x80BFE0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0DCu)) return;
    // 80BFE0DC: bl      0x8045BFA0
    {
            ctx->lr = 0x80BFE0E0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80BFE0E0:
    ctx->pc = 0x80BFE0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE0E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE0E4:
    ctx->pc = 0x80BFE0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0E4u)) return;
    // 80BFE0E4: bl      0x8045F220
    {
            ctx->lr = 0x80BFE0E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFE0E8:
    ctx->pc = 0x80BFE0E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE0E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE0E8: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFE0EC:
    ctx->pc = 0x80BFE0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0ECu)) return;
    // 80BFE0EC: addi    r4, r4, 29492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29492);

label_80BFE0F0:
    ctx->pc = 0x80BFE0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0F0u)) return;
    // 80BFE0F0: bl      0x8045C060
    {
            ctx->lr = 0x80BFE0F4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80BFE0F4:
    ctx->pc = 0x80BFE0F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE0F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFE0F4: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_80BFE0F8:
    ctx->pc = 0x80BFE0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0F8u)) return;
    // 80BFE0F8: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80BFE0FC:
    ctx->pc = 0x80BFE0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE0FCu)) return;
    // 80BFE0FC: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80BFE100:
    ctx->pc = 0x80BFE100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE100: lwz     r0, 0(r4)
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
label_80BFE104:
    ctx->pc = 0x80BFE104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE104u)) return;
    // 80BFE104: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80BFE108:
    ctx->pc = 0x80BFE108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE108u)) return;
    // 80BFE108: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFE10C:
    ctx->pc = 0x80BFE10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE10Cu)) return;
    // 80BFE10C: addi    r4, r4, 29448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29448);

label_80BFE110:
    ctx->pc = 0x80BFE110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE110: lwzx    r4, r4, r0
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
label_80BFE114:
    ctx->pc = 0x80BFE114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE114: lwz     r4, 8(r4)
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
label_80BFE118:
    ctx->pc = 0x80BFE118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE118u)) return;
    // 80BFE118: bl      0x8045F608
    {
            ctx->lr = 0x80BFE11Cu;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80BFE11C:
    ctx->pc = 0x80BFE11Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE11Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE11C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE120:
    ctx->pc = 0x80BFE120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE120u)) return;
    // 80BFE120: bl      0x8045F220
    {
            ctx->lr = 0x80BFE124u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80BFE124:
    ctx->pc = 0x80BFE124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE124: bl      0x8045C034
    {
            ctx->lr = 0x80BFE128u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80BFE128:
    ctx->pc = 0x80BFE128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE128: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80BFE12C:
    ctx->pc = 0x80BFE12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE12Cu)) return;
    // 80BFE12C: bl      0x8045F7C8
    {
            ctx->lr = 0x80BFE130u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80BFE130:
    ctx->pc = 0x80BFE130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE130: b       0x80BFE170
    {
            goto label_80BFE170;
    }

label_80BFE134:
    ctx->pc = 0x80BFE134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE134: bl      0x80BFE7C8
    {
            ctx->lr = 0x80BFE138u;
            goto label_80BFE7C8;
    }

label_80BFE138:
    ctx->pc = 0x80BFE138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE138: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE13C:
    ctx->pc = 0x80BFE13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE13Cu)) return;
    // 80BFE13C: bl      0x8045EC10
    {
            ctx->lr = 0x80BFE140u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80BFE140:
    ctx->pc = 0x80BFE140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFE140: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE144:
    ctx->pc = 0x80BFE144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE144u)) return;
    // 80BFE144: addi    r3, r3, -25024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25024);

label_80BFE148:
    ctx->pc = 0x80BFE148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE148: lwz     r3, 0(r3)
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
label_80BFE14C:
    ctx->pc = 0x80BFE14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE14Cu)) return;
    // 80BFE14C: cmplwi  r3, 0x0000
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

label_80BFE150:
    ctx->pc = 0x80BFE150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE150u)) return;
    // 80BFE150: bc    12, 2, 0x80BFE168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE168;
        }
    }

label_80BFE154:
    ctx->pc = 0x80BFE154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE154: bl      0x8050F9E0
    {
            ctx->lr = 0x80BFE158u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BFE158:
    ctx->pc = 0x80BFE158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFE158: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFE15C:
    ctx->pc = 0x80BFE15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE15Cu)) return;
    // 80BFE15C: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE160:
    ctx->pc = 0x80BFE160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE160u)) return;
    // 80BFE160: addi    r3, r3, -25024
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25024);

label_80BFE164:
    ctx->pc = 0x80BFE164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE164: stw     r0, 0(r3)
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
label_80BFE168:
    ctx->pc = 0x80BFE168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE168: bl      0x8045DE34
    {
            ctx->lr = 0x80BFE16Cu;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80BFE16C:
    ctx->pc = 0x80BFE16Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE16Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE16C: bl      0x80460A80
    {
            ctx->lr = 0x80BFE170u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80BFE170:
    ctx->pc = 0x80BFE170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE170: lwz     r0, 20(r1)
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
label_80BFE174:
    ctx->pc = 0x80BFE174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE174: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE178:
    ctx->pc = 0x80BFE178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE178u)) return;
    // 80BFE178: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE17C:
    ctx->pc = 0x80BFE17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE17Cu)) return;
    // 80BFE17C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE180:
    ctx->pc = 0x80BFE180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE180: stwu     r1, -64(r1)
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
label_80BFE184:
    ctx->pc = 0x80BFE184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE184: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE188:
    ctx->pc = 0x80BFE188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE188: stw     r0, 68(r1)
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
label_80BFE18C:
    ctx->pc = 0x80BFE18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE18Cu)) return;
    // 80BFE18C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BFE190:
    ctx->pc = 0x80BFE190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE190u)) return;
    // 80BFE190: bl      0x80006DD4
    {
            ctx->lr = 0x80BFE194u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80BFE194:
    ctx->pc = 0x80BFE194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80BFE194: lwz     r27, 32(r3)
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
label_80BFE198:
    ctx->pc = 0x80BFE198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE198u)) return;
    // 80BFE198: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFE19C:
    ctx->pc = 0x80BFE19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE19Cu)) return;
    // 80BFE19C: addi    r3, r3, 28888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28888);

label_80BFE1A0:
    ctx->pc = 0x80BFE1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80BFE1A0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1A0u)) return;
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
label_80BFE1A4:
    ctx->pc = 0x80BFE1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BFE1A4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1A4u)) return;
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
label_80BFE1A8:
    ctx->pc = 0x80BFE1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1A8u)) return;
    // 80BFE1A8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1A8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BFE1AC:
    ctx->pc = 0x80BFE1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1ACu)) return;
    // 80BFE1AC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BFE1B0:
    ctx->pc = 0x80BFE1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BFE1B0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1B0u)) return;
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
label_80BFE1B4:
    ctx->pc = 0x80BFE1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BFE1B4: lwz     r31, 12(r1)
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
label_80BFE1B8:
    ctx->pc = 0x80BFE1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFE1B8: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1B8u)) return;
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
label_80BFE1BC:
    ctx->pc = 0x80BFE1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1BCu)) return;
    // 80BFE1BC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1BCu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BFE1C0:
    ctx->pc = 0x80BFE1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1C0u)) return;
    // 80BFE1C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BFE1C4:
    ctx->pc = 0x80BFE1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFE1C4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1C4u)) return;
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
label_80BFE1C8:
    ctx->pc = 0x80BFE1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFE1C8: lwz     r30, 20(r1)
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
label_80BFE1CC:
    ctx->pc = 0x80BFE1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFE1CC: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1CCu)) return;
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
label_80BFE1D0:
    ctx->pc = 0x80BFE1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1D0u)) return;
    // 80BFE1D0: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1D0u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BFE1D4:
    ctx->pc = 0x80BFE1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1D4u)) return;
    // 80BFE1D4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1D4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BFE1D8:
    ctx->pc = 0x80BFE1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE1D8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1D8u)) return;
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
label_80BFE1DC:
    ctx->pc = 0x80BFE1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE1DC: lwz     r29, 28(r1)
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
label_80BFE1E0:
    ctx->pc = 0x80BFE1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE1E0: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1E0u)) return;
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
label_80BFE1E4:
    ctx->pc = 0x80BFE1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1E4u)) return;
    // 80BFE1E4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1E4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80BFE1E8:
    ctx->pc = 0x80BFE1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1E8u)) return;
    // 80BFE1E8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE1E8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80BFE1EC:
    ctx->pc = 0x80BFE1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE1EC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE1ECu)) return;
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
label_80BFE1F0:
    ctx->pc = 0x80BFE1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE1F0: lwz     r28, 36(r1)
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
label_80BFE1F4:
    ctx->pc = 0x80BFE1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1F4u)) return;
    // 80BFE1F4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80BFE1F8:
    ctx->pc = 0x80BFE1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1F8u)) return;
    // 80BFE1F8: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80BFE1FC:
    ctx->pc = 0x80BFE1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE1FC: lwz     r0, 0(r3)
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
label_80BFE200:
    ctx->pc = 0x80BFE200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE200u)) return;
    // 80BFE200: cmpwi   r0, 0
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

label_80BFE204:
    ctx->pc = 0x80BFE204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE204u)) return;
    // 80BFE204: bc    4, 2, 0x80BFE2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE2BC;
        }
    }

label_80BFE208:
    ctx->pc = 0x80BFE208u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE208u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE208: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BFE20C:
    ctx->pc = 0x80BFE20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE20Cu)) return;
    // 80BFE20C: cmplwi  r0, 0x0000
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

label_80BFE210:
    ctx->pc = 0x80BFE210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE210u)) return;
    // 80BFE210: bc    12, 2, 0x80BFE2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE2BC;
        }
    }

label_80BFE214:
    ctx->pc = 0x80BFE214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE214: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFE218:
    ctx->pc = 0x80BFE218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE218u)) return;
    // 80BFE218: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80BFE21C:
    ctx->pc = 0x80BFE21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE21Cu)) return;
    // 80BFE21C: bl      0x8060F4F8
    {
            ctx->lr = 0x80BFE220u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BFE220:
    ctx->pc = 0x80BFE220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE220: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80BFE224:
    ctx->pc = 0x80BFE224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE224u)) return;
    // 80BFE224: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BFE228:
    ctx->pc = 0x80BFE228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE228u)) return;
    // 80BFE228: bl      0x8060F4F8
    {
            ctx->lr = 0x80BFE22Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80BFE22C:
    ctx->pc = 0x80BFE22Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE22Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE22C: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80BFE22Cu)) return;
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
label_80BFE230:
    ctx->pc = 0x80BFE230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE230u)) return;
    // 80BFE230: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFE234:
    ctx->pc = 0x80BFE234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE234u)) return;
    // 80BFE234: addi    r3, r3, 28896
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28896);

label_80BFE238:
    ctx->pc = 0x80BFE238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE238: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE238u)) return;
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
label_80BFE23C:
    ctx->pc = 0x80BFE23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE23Cu)) return;
    // 80BFE23C: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE23Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80BFE240:
    ctx->pc = 0x80BFE240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE240u)) return;
    // 80BFE240: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80BFE244:
    ctx->pc = 0x80BFE244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE244u)) return;
    // 80BFE244: bc    4, 2, 0x80BFE258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE258;
        }
    }

label_80BFE248:
    ctx->pc = 0x80BFE248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFE248: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFE24C:
    ctx->pc = 0x80BFE24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE24Cu)) return;
    // 80BFE24C: addi    r3, r3, 28892
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28892);

label_80BFE250:
    ctx->pc = 0x80BFE250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE250: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE250u)) return;
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
label_80BFE254:
    ctx->pc = 0x80BFE254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE254u)) return;
    // 80BFE254: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE254u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80BFE258:
    ctx->pc = 0x80BFE258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE258: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BFE25C:
    ctx->pc = 0x80BFE25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE25Cu)) return;
    // 80BFE25C: cmplwi  r0, 0x00FF
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

label_80BFE260:
    ctx->pc = 0x80BFE260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE260u)) return;
    // 80BFE260: bc    4, 1, 0x80BFE268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE268;
        }
    }

label_80BFE264:
    ctx->pc = 0x80BFE264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE264: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80BFE268:
    ctx->pc = 0x80BFE268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80BFE268: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFE26C:
    ctx->pc = 0x80BFE26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE26Cu)) return;
    // 80BFE26C: addi    r3, r3, 28900
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28900);

label_80BFE270:
    ctx->pc = 0x80BFE270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BFE270: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE270u)) return;
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
label_80BFE274:
    ctx->pc = 0x80BFE274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE274u)) return;
    // 80BFE274: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFE274u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80BFE278:
    ctx->pc = 0x80BFE278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE278u)) return;
    // 80BFE278: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFE27C:
    ctx->pc = 0x80BFE27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE27Cu)) return;
    // 80BFE27C: addi    r3, r3, 28904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28904);

label_80BFE280:
    ctx->pc = 0x80BFE280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFE280: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE280u)) return;
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
label_80BFE284:
    ctx->pc = 0x80BFE284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE284u)) return;
    // 80BFE284: lis     r3, -27483
    ctx->gpr[3] = ((u32)(s32)(-27483) << 16);

label_80BFE288:
    ctx->pc = 0x80BFE288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE288u)) return;
    // 80BFE288: addi    r3, r3, 28908
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28908);

label_80BFE28C:
    ctx->pc = 0x80BFE28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE28Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE28C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE28Cu)) return;
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
label_80BFE290:
    ctx->pc = 0x80BFE290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE290u)) return;
    // 80BFE290: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80BFE294:
    ctx->pc = 0x80BFE294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE294u)) return;
    // 80BFE294: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80BFE298:
    ctx->pc = 0x80BFE298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE298u)) return;
    // 80BFE298: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80BFE29C:
    ctx->pc = 0x80BFE29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE29Cu)) return;
    // 80BFE29C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80BFE2A0:
    ctx->pc = 0x80BFE2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2A0u)) return;
    // 80BFE2A0: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80BFE2A4:
    ctx->pc = 0x80BFE2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2A4u)) return;
    // 80BFE2A4: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80BFE2A8:
    ctx->pc = 0x80BFE2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2A8u)) return;
    // 80BFE2A8: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80BFE2AC:
    ctx->pc = 0x80BFE2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2ACu)) return;
    // 80BFE2AC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80BFE2B0:
    ctx->pc = 0x80BFE2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2B0u)) return;
    // 80BFE2B0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80BFE2B4:
    ctx->pc = 0x80BFE2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2B4u)) return;
    // 80BFE2B4: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80BFE2B8:
    ctx->pc = 0x80BFE2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2B8u)) return;
    // 80BFE2B8: bl      0x80BFE478
    {
            ctx->lr = 0x80BFE2BCu;
            goto label_80BFE478;
    }

label_80BFE2BC:
    ctx->pc = 0x80BFE2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE2BC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80BFE2C0:
    ctx->pc = 0x80BFE2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2C0u)) return;
    // 80BFE2C0: bl      0x80006E20
    {
            ctx->lr = 0x80BFE2C4u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80BFE2C4:
    ctx->pc = 0x80BFE2C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE2C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE2C4: lwz     r0, 68(r1)
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
label_80BFE2C8:
    ctx->pc = 0x80BFE2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE2C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE2CC:
    ctx->pc = 0x80BFE2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2CCu)) return;
    // 80BFE2CC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80BFE2D0:
    ctx->pc = 0x80BFE2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2D0u)) return;
    // 80BFE2D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE2D4:
    ctx->pc = 0x80BFE2D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE2D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE2D4: stwu     r1, -16(r1)
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
label_80BFE2D8:
    ctx->pc = 0x80BFE2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE2D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE2DC:
    ctx->pc = 0x80BFE2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE2DC: stw     r0, 20(r1)
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
label_80BFE2E0:
    ctx->pc = 0x80BFE2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE2E0: lwz     r5, 32(r3)
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
label_80BFE2E4:
    ctx->pc = 0x80BFE2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE2E4: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE2E4u)) return;
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
label_80BFE2E8:
    ctx->pc = 0x80BFE2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE2E8: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE2E8u)) return;
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
label_80BFE2EC:
    ctx->pc = 0x80BFE2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2ECu)) return;
    // 80BFE2EC: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE2ECu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80BFE2F0:
    ctx->pc = 0x80BFE2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2F0u)) return;
    // 80BFE2F0: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFE2F4:
    ctx->pc = 0x80BFE2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2F4u)) return;
    // 80BFE2F4: addi    r4, r4, 28912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28912);

label_80BFE2F8:
    ctx->pc = 0x80BFE2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE2F8: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFE2F8u)) return;
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
label_80BFE2FC:
    ctx->pc = 0x80BFE2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE2FCu)) return;
    // 80BFE2FC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE2FCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BFE300:
    ctx->pc = 0x80BFE300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE300u)) return;
    // 80BFE300: bc    4, 1, 0x80BFE30C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE30C;
        }
    }

label_80BFE304:
    ctx->pc = 0x80BFE304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE304: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE304u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BFE308:
    ctx->pc = 0x80BFE308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE308u)) return;
    // 80BFE308: b       0x80BFE324
    {
            goto label_80BFE324;
    }

label_80BFE30C:
    ctx->pc = 0x80BFE30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFE30C: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFE310:
    ctx->pc = 0x80BFE310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE310u)) return;
    // 80BFE310: addi    r4, r4, 28900
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28900);

label_80BFE314:
    ctx->pc = 0x80BFE314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE314: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFE314u)) return;
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
label_80BFE318:
    ctx->pc = 0x80BFE318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE318u)) return;
    // 80BFE318: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE318u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80BFE31C:
    ctx->pc = 0x80BFE31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE31Cu)) return;
    // 80BFE31C: bc    4, 0, 0x80BFE324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE324;
        }
    }

label_80BFE320:
    ctx->pc = 0x80BFE320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE320: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80BFE320u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80BFE324:
    ctx->pc = 0x80BFE324u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE324u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE324: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE324u)) return;
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
label_80BFE328:
    ctx->pc = 0x80BFE328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE328u)) return;
    // 80BFE328: bl      0x80BFE180
    {
            ctx->lr = 0x80BFE32Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE180u;
                return;
            }
            goto label_80BFE180;
    }

label_80BFE32C:
    ctx->pc = 0x80BFE32Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE32Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE32C: lwz     r0, 20(r1)
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
label_80BFE330:
    ctx->pc = 0x80BFE330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE330: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE334:
    ctx->pc = 0x80BFE334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE334u)) return;
    // 80BFE334: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE338:
    ctx->pc = 0x80BFE338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE338u)) return;
    // 80BFE338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE33C:
    ctx->pc = 0x80BFE33Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE33Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE33C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE340:
    ctx->pc = 0x80BFE340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFE340: stwu     r1, -16(r1)
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
label_80BFE344:
    ctx->pc = 0x80BFE344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE344: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE348:
    ctx->pc = 0x80BFE348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE348: stw     r0, 20(r1)
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
label_80BFE34C:
    ctx->pc = 0x80BFE34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE34Cu)) return;
    // 80BFE34C: lis     r4, -32576
    ctx->gpr[4] = ((u32)(s32)(-32576) << 16);

label_80BFE350:
    ctx->pc = 0x80BFE350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE350u)) return;
    // 80BFE350: addi    r0, r4, -7468
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7468);

label_80BFE354:
    ctx->pc = 0x80BFE354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE354: stw     r0, 16(r3)
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
label_80BFE358:
    ctx->pc = 0x80BFE358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE358u)) return;
    // 80BFE358: lis     r4, -32576
    ctx->gpr[4] = ((u32)(s32)(-32576) << 16);

label_80BFE35C:
    ctx->pc = 0x80BFE35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE35Cu)) return;
    // 80BFE35C: addi    r0, r4, -7808
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7808);

label_80BFE360:
    ctx->pc = 0x80BFE360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE360: stw     r0, 20(r3)
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
label_80BFE364:
    ctx->pc = 0x80BFE364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE364u)) return;
    // 80BFE364: lis     r4, -32576
    ctx->gpr[4] = ((u32)(s32)(-32576) << 16);

label_80BFE368:
    ctx->pc = 0x80BFE368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE368u)) return;
    // 80BFE368: addi    r0, r4, -7364
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-7364);

label_80BFE36C:
    ctx->pc = 0x80BFE36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE36C: stw     r0, 24(r3)
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
label_80BFE370:
    ctx->pc = 0x80BFE370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE370u)) return;
    // 80BFE370: bl      0x80BFE2D4
    {
            ctx->lr = 0x80BFE374u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE2D4u;
                return;
            }
            goto label_80BFE2D4;
    }

label_80BFE374:
    ctx->pc = 0x80BFE374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE374: lwz     r0, 20(r1)
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
label_80BFE378:
    ctx->pc = 0x80BFE378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE378: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE37C:
    ctx->pc = 0x80BFE37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE37Cu)) return;
    // 80BFE37C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE380:
    ctx->pc = 0x80BFE380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE380u)) return;
    // 80BFE380: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE384:
    ctx->pc = 0x80BFE384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFE384: stwu     r1, -96(r1)
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
label_80BFE388:
    ctx->pc = 0x80BFE388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BFE388: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE38C:
    ctx->pc = 0x80BFE38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BFE38C: stw     r0, 100(r1)
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
label_80BFE390:
    ctx->pc = 0x80BFE390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFE390: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE390u)) return;
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
label_80BFE394:
    ctx->pc = 0x80BFE394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80BFE394: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80BFE394u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE398:
    ctx->pc = 0x80BFE398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80BFE398: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE398u)) return;
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
label_80BFE39C:
    ctx->pc = 0x80BFE39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFE39C: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE39Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80BFE39Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE3A0:
    ctx->pc = 0x80BFE3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFE3A0: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3A0u)) return;
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
label_80BFE3A4:
    ctx->pc = 0x80BFE3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFE3A4: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE3A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80BFE3A4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE3A8:
    ctx->pc = 0x80BFE3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFE3A8: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3A8u)) return;
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
label_80BFE3AC:
    ctx->pc = 0x80BFE3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFE3AC: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE3ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80BFE3ACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE3B0:
    ctx->pc = 0x80BFE3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE3B0: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3B0u)) return;
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
label_80BFE3B4:
    ctx->pc = 0x80BFE3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE3B4: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE3B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80BFE3B4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE3B8:
    ctx->pc = 0x80BFE3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3B8u)) return;
    // 80BFE3B8: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80BFE3B8u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80BFE3BC:
    ctx->pc = 0x80BFE3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3BCu)) return;
    // 80BFE3BC: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80BFE3BCu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80BFE3C0:
    ctx->pc = 0x80BFE3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3C0u)) return;
    // 80BFE3C0: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80BFE3C0u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80BFE3C4:
    ctx->pc = 0x80BFE3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3C4u)) return;
    // 80BFE3C4: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80BFE3C4u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80BFE3C8:
    ctx->pc = 0x80BFE3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3C8u)) return;
    // 80BFE3C8: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80BFE3C8u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80BFE3CC:
    ctx->pc = 0x80BFE3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3CCu)) return;
    // 80BFE3CC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFE3D0:
    ctx->pc = 0x80BFE3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3D0u)) return;
    // 80BFE3D0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80BFE3D4:
    ctx->pc = 0x80BFE3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3D4u)) return;
    // 80BFE3D4: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80BFE3D8:
    ctx->pc = 0x80BFE3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3D8u)) return;
    // 80BFE3D8: addi    r5, r5, -7360
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7360);

label_80BFE3DC:
    ctx->pc = 0x80BFE3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3DCu)) return;
    // 80BFE3DC: bl      0x8050FD60
    {
            ctx->lr = 0x80BFE3E0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFE3E0:
    ctx->pc = 0x80BFE3E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE3E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80BFE3E0: lwz     r5, 32(r3)
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
label_80BFE3E4:
    ctx->pc = 0x80BFE3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80BFE3E4: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3E4u)) return;
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
label_80BFE3E8:
    ctx->pc = 0x80BFE3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80BFE3E8: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3E8u)) return;
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
label_80BFE3EC:
    ctx->pc = 0x80BFE3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80BFE3EC: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3ECu)) return;
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
label_80BFE3F0:
    ctx->pc = 0x80BFE3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80BFE3F0: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3F0u)) return;
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
label_80BFE3F4:
    ctx->pc = 0x80BFE3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80BFE3F4: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE3F4u)) return;
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
label_80BFE3F8:
    ctx->pc = 0x80BFE3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3F8u)) return;
    // 80BFE3F8: lis     r4, -27483
    ctx->gpr[4] = ((u32)(s32)(-27483) << 16);

label_80BFE3FC:
    ctx->pc = 0x80BFE3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE3FCu)) return;
    // 80BFE3FC: addi    r4, r4, 28896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28896);

label_80BFE400:
    ctx->pc = 0x80BFE400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80BFE400: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80BFE400u)) return;
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
label_80BFE404:
    ctx->pc = 0x80BFE404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFE404: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80BFE404u)) return;
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
label_80BFE408:
    ctx->pc = 0x80BFE408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE408u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80BFE408: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80BFE408u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE40C:
    ctx->pc = 0x80BFE40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFE40C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE40Cu)) return;
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
label_80BFE410:
    ctx->pc = 0x80BFE410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFE410: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80BFE410u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE414:
    ctx->pc = 0x80BFE414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE414: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE414u)) return;
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
label_80BFE418:
    ctx->pc = 0x80BFE418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE418: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE418u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80BFE418u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE41C:
    ctx->pc = 0x80BFE41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE41C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE41Cu)) return;
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
label_80BFE420:
    ctx->pc = 0x80BFE420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE420: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE420u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80BFE420u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE424:
    ctx->pc = 0x80BFE424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE424: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE424u)) return;
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
label_80BFE428:
    ctx->pc = 0x80BFE428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE428: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80BFE428u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80BFE428u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE42C:
    ctx->pc = 0x80BFE42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE42C: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80BFE42Cu)) return;
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
label_80BFE430:
    ctx->pc = 0x80BFE430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE430: lwz     r0, 100(r1)
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
label_80BFE434:
    ctx->pc = 0x80BFE434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE434: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE438:
    ctx->pc = 0x80BFE438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE438u)) return;
    // 80BFE438: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80BFE43C:
    ctx->pc = 0x80BFE43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE43Cu)) return;
    // 80BFE43C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE440:
    ctx->pc = 0x80BFE440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE440: lwz     r3, 32(r3)
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
label_80BFE444:
    ctx->pc = 0x80BFE444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE444: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE444u)) return;
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
label_80BFE448:
    ctx->pc = 0x80BFE448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE448u)) return;
    // 80BFE448: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE44C:
    ctx->pc = 0x80BFE44Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE44Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE44C: lwz     r3, 32(r3)
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
label_80BFE450:
    ctx->pc = 0x80BFE450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE450: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE450u)) return;
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
label_80BFE454:
    ctx->pc = 0x80BFE454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE454u)) return;
    // 80BFE454: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE458:
    ctx->pc = 0x80BFE458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE458: lwz     r3, 32(r3)
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
label_80BFE45C:
    ctx->pc = 0x80BFE45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE45Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE45C: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE45Cu)) return;
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
label_80BFE460:
    ctx->pc = 0x80BFE460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE460: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE460u)) return;
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
label_80BFE464:
    ctx->pc = 0x80BFE464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE464: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE464u)) return;
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
label_80BFE468:
    ctx->pc = 0x80BFE468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE468u)) return;
    // 80BFE468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE46C:
    ctx->pc = 0x80BFE46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE46C: lwz     r3, 32(r3)
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
label_80BFE470:
    ctx->pc = 0x80BFE470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE470: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80BFE470u)) return;
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
label_80BFE474:
    ctx->pc = 0x80BFE474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE474u)) return;
    // 80BFE474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE478:
    ctx->pc = 0x80BFE478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE478: stwu     r1, -16(r1)
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
label_80BFE47C:
    ctx->pc = 0x80BFE47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE47Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE47C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE480:
    ctx->pc = 0x80BFE480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE480u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE480: stw     r0, 20(r1)
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
label_80BFE484:
    ctx->pc = 0x80BFE484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE484u)) return;
    // 80BFE484: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BFE488:
    ctx->pc = 0x80BFE488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE488u)) return;
    // 80BFE488: bl      0x80607948
    {
            ctx->lr = 0x80BFE48Cu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80BFE48C:
    ctx->pc = 0x80BFE48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE48C: lwz     r0, 20(r1)
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
label_80BFE490:
    ctx->pc = 0x80BFE490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE490: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE494:
    ctx->pc = 0x80BFE494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE494u)) return;
    // 80BFE494: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE498:
    ctx->pc = 0x80BFE498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE498u)) return;
    // 80BFE498: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE49C:
    ctx->pc = 0x80BFE49Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE49Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE49C: stwu     r1, -16(r1)
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
label_80BFE4A0:
    ctx->pc = 0x80BFE4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE4A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE4A4:
    ctx->pc = 0x80BFE4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE4A4: stw     r0, 20(r1)
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
label_80BFE4A8:
    ctx->pc = 0x80BFE4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE4A8: lwz     r3, 32(r3)
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
label_80BFE4AC:
    ctx->pc = 0x80BFE4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE4AC: lwz     r3, 16(r3)
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
label_80BFE4B0:
    ctx->pc = 0x80BFE4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4B0u)) return;
    // 80BFE4B0: bl      0x80509CF0
    {
            ctx->lr = 0x80BFE4B4u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80BFE4B4:
    ctx->pc = 0x80BFE4B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE4B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE4B4: lwz     r0, 20(r1)
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
label_80BFE4B8:
    ctx->pc = 0x80BFE4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE4B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE4BC:
    ctx->pc = 0x80BFE4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4BCu)) return;
    // 80BFE4BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE4C0:
    ctx->pc = 0x80BFE4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4C0u)) return;
    // 80BFE4C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE4C4:
    ctx->pc = 0x80BFE4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE4C4: stwu     r1, -32(r1)
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
label_80BFE4C8:
    ctx->pc = 0x80BFE4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE4C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE4CC:
    ctx->pc = 0x80BFE4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE4CC: stw     r0, 36(r1)
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
label_80BFE4D0:
    ctx->pc = 0x80BFE4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE4D0: stw     r31, 28(r1)
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
label_80BFE4D4:
    ctx->pc = 0x80BFE4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE4D4: stw     r30, 24(r1)
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
label_80BFE4D8:
    ctx->pc = 0x80BFE4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE4D8: stw     r29, 20(r1)
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
label_80BFE4DC:
    ctx->pc = 0x80BFE4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE4DC: lwz     r31, 32(r3)
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
label_80BFE4E0:
    ctx->pc = 0x80BFE4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE4E0: lwz     r30, 16(r31)
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
label_80BFE4E4:
    ctx->pc = 0x80BFE4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE4E4: lwz     r5, 28(r31)
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
label_80BFE4E8:
    ctx->pc = 0x80BFE4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4E8u)) return;
    // 80BFE4E8: cmpwi   r5, 0
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

label_80BFE4EC:
    ctx->pc = 0x80BFE4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4ECu)) return;
    // 80BFE4EC: bc    4, 1, 0x80BFE524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE524;
        }
    }

label_80BFE4F0:
    ctx->pc = 0x80BFE4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BFE4F0: lwz     r4, 24(r31)
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
label_80BFE4F4:
    ctx->pc = 0x80BFE4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4F4u)) return;
    // 80BFE4F4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BFE4F8:
    ctx->pc = 0x80BFE4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BFE4F8: lwz     r0, 20(r31)
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
label_80BFE4FC:
    ctx->pc = 0x80BFE4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BFE4FCu)) return;
    // 80BFE4FC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BFE500:
    ctx->pc = 0x80BFE500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE500u)) return;
    // 80BFE500: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BFE504:
    ctx->pc = 0x80BFE504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BFE504u)) return;
    // 80BFE504: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BFE508:
    ctx->pc = 0x80BFE508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE508u)) return;
    // 80BFE508: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFE50C:
    ctx->pc = 0x80BFE50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE50Cu)) return;
    // 80BFE50C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFE510:
    ctx->pc = 0x80BFE510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE510u)) return;
    // 80BFE510: bl      0x80509C74
    {
            ctx->lr = 0x80BFE514u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BFE514:
    ctx->pc = 0x80BFE514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE514: stw     r29, 20(r31)
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
label_80BFE518:
    ctx->pc = 0x80BFE518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE518: lwz     r3, 28(r31)
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
label_80BFE51C:
    ctx->pc = 0x80BFE51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE51Cu)) return;
    // 80BFE51C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BFE520:
    ctx->pc = 0x80BFE520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE520: stw     r0, 28(r31)
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
label_80BFE524:
    ctx->pc = 0x80BFE524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE524: lwz     r5, 40(r31)
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
label_80BFE528:
    ctx->pc = 0x80BFE528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE528u)) return;
    // 80BFE528: cmpwi   r5, 0
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

label_80BFE52C:
    ctx->pc = 0x80BFE52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE52Cu)) return;
    // 80BFE52C: bc    4, 1, 0x80BFE564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE564;
        }
    }

label_80BFE530:
    ctx->pc = 0x80BFE530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BFE530: lwz     r4, 36(r31)
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
label_80BFE534:
    ctx->pc = 0x80BFE534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE534u)) return;
    // 80BFE534: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BFE538:
    ctx->pc = 0x80BFE538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BFE538: lwz     r0, 32(r31)
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
label_80BFE53C:
    ctx->pc = 0x80BFE53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BFE53Cu)) return;
    // 80BFE53C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BFE540:
    ctx->pc = 0x80BFE540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE540u)) return;
    // 80BFE540: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BFE544:
    ctx->pc = 0x80BFE544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BFE544u)) return;
    // 80BFE544: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BFE548:
    ctx->pc = 0x80BFE548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE548u)) return;
    // 80BFE548: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFE54C:
    ctx->pc = 0x80BFE54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE54Cu)) return;
    // 80BFE54C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFE550:
    ctx->pc = 0x80BFE550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE550u)) return;
    // 80BFE550: bl      0x80509BF8
    {
            ctx->lr = 0x80BFE554u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BFE554:
    ctx->pc = 0x80BFE554u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE554u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE554: stw     r29, 32(r31)
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
label_80BFE558:
    ctx->pc = 0x80BFE558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE558: lwz     r3, 40(r31)
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
label_80BFE55C:
    ctx->pc = 0x80BFE55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE55Cu)) return;
    // 80BFE55C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BFE560:
    ctx->pc = 0x80BFE560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE560: stw     r0, 40(r31)
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
label_80BFE564:
    ctx->pc = 0x80BFE564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE564: lwz     r5, 52(r31)
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
label_80BFE568:
    ctx->pc = 0x80BFE568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE568u)) return;
    // 80BFE568: cmpwi   r5, 0
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

label_80BFE56C:
    ctx->pc = 0x80BFE56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE56Cu)) return;
    // 80BFE56C: bc    4, 1, 0x80BFE5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE5A4;
        }
    }

label_80BFE570:
    ctx->pc = 0x80BFE570u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE570u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80BFE570: lwz     r4, 48(r31)
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
label_80BFE574:
    ctx->pc = 0x80BFE574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE574u)) return;
    // 80BFE574: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80BFE578:
    ctx->pc = 0x80BFE578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80BFE578: lwz     r0, 44(r31)
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
label_80BFE57C:
    ctx->pc = 0x80BFE57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80BFE57Cu)) return;
    // 80BFE57C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80BFE580:
    ctx->pc = 0x80BFE580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE580u)) return;
    // 80BFE580: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80BFE584:
    ctx->pc = 0x80BFE584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80BFE584u)) return;
    // 80BFE584: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80BFE588:
    ctx->pc = 0x80BFE588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE588u)) return;
    // 80BFE588: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFE58C:
    ctx->pc = 0x80BFE58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE58Cu)) return;
    // 80BFE58C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFE590:
    ctx->pc = 0x80BFE590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE590u)) return;
    // 80BFE590: bl      0x80509B94
    {
            ctx->lr = 0x80BFE594u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BFE594:
    ctx->pc = 0x80BFE594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE594: stw     r29, 44(r31)
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
label_80BFE598:
    ctx->pc = 0x80BFE598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE598: lwz     r3, 52(r31)
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
label_80BFE59C:
    ctx->pc = 0x80BFE59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE59Cu)) return;
    // 80BFE59C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80BFE5A0:
    ctx->pc = 0x80BFE5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE5A0: stw     r0, 52(r31)
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
label_80BFE5A4:
    ctx->pc = 0x80BFE5A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE5A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE5A4: lwz     r31, 28(r1)
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
label_80BFE5A8:
    ctx->pc = 0x80BFE5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE5A8: lwz     r30, 24(r1)
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
label_80BFE5AC:
    ctx->pc = 0x80BFE5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE5AC: lwz     r29, 20(r1)
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
label_80BFE5B0:
    ctx->pc = 0x80BFE5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE5B0: lwz     r0, 36(r1)
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
label_80BFE5B4:
    ctx->pc = 0x80BFE5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE5B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE5B8:
    ctx->pc = 0x80BFE5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5B8u)) return;
    // 80BFE5B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFE5BC:
    ctx->pc = 0x80BFE5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5BCu)) return;
    // 80BFE5BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE5C0:
    ctx->pc = 0x80BFE5C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE5C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE5C0: stwu     r1, -32(r1)
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
label_80BFE5C4:
    ctx->pc = 0x80BFE5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE5C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE5C8:
    ctx->pc = 0x80BFE5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE5C8: stw     r0, 36(r1)
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
label_80BFE5CC:
    ctx->pc = 0x80BFE5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE5CC: stw     r31, 28(r1)
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
label_80BFE5D0:
    ctx->pc = 0x80BFE5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE5D0: stw     r30, 24(r1)
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
label_80BFE5D4:
    ctx->pc = 0x80BFE5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE5D4: stw     r29, 20(r1)
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
label_80BFE5D8:
    ctx->pc = 0x80BFE5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5D8u)) return;
    // 80BFE5D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFE5DC:
    ctx->pc = 0x80BFE5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5DCu)) return;
    // 80BFE5DC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFE5E0:
    ctx->pc = 0x80BFE5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5E0u)) return;
    // 80BFE5E0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80BFE5E4:
    ctx->pc = 0x80BFE5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5E4u)) return;
    // 80BFE5E4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80BFE5E8:
    ctx->pc = 0x80BFE5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5E8u)) return;
    // 80BFE5E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80BFE5EC:
    ctx->pc = 0x80BFE5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5ECu)) return;
    // 80BFE5EC: bl      0x8050FD60
    {
            ctx->lr = 0x80BFE5F0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80BFE5F0:
    ctx->pc = 0x80BFE5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE5F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFE5F4:
    ctx->pc = 0x80BFE5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5F4u)) return;
    // 80BFE5F4: cmplwi  r31, 0x0000
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

label_80BFE5F8:
    ctx->pc = 0x80BFE5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE5F8u)) return;
    // 80BFE5F8: bc    12, 2, 0x80BFE65C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE65C;
        }
    }

label_80BFE5FC:
    ctx->pc = 0x80BFE5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFE5FC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFE600:
    ctx->pc = 0x80BFE600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE600u)) return;
    // 80BFE600: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFE604:
    ctx->pc = 0x80BFE604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE604u)) return;
    // 80BFE604: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BFE608:
    ctx->pc = 0x80BFE608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE608u)) return;
    // 80BFE608: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BFE60C:
    ctx->pc = 0x80BFE60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE60Cu)) return;
    // 80BFE60C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFE610:
    ctx->pc = 0x80BFE610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE610u)) return;
    // 80BFE610: bl      0x8050A0D4
    {
            ctx->lr = 0x80BFE614u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BFE614:
    ctx->pc = 0x80BFE614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80BFE614: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80BFE618:
    ctx->pc = 0x80BFE618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE618u)) return;
    // 80BFE618: addi    r0, r3, -6972
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6972);

label_80BFE61C:
    ctx->pc = 0x80BFE61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE61Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80BFE61C: stw     r0, 16(r31)
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
label_80BFE620:
    ctx->pc = 0x80BFE620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE620u)) return;
    // 80BFE620: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80BFE624:
    ctx->pc = 0x80BFE624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE624u)) return;
    // 80BFE624: addi    r0, r3, -7012
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-7012);

label_80BFE628:
    ctx->pc = 0x80BFE628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFE628: stw     r0, 24(r31)
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
label_80BFE62C:
    ctx->pc = 0x80BFE62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE62C: lwz     r3, 32(r31)
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
label_80BFE630:
    ctx->pc = 0x80BFE630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE630: stw     r31, 16(r3)
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
label_80BFE634:
    ctx->pc = 0x80BFE634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE634u)) return;
    // 80BFE634: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFE638:
    ctx->pc = 0x80BFE638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE638: stw     r0, 20(r3)
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
label_80BFE63C:
    ctx->pc = 0x80BFE63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE63Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE63C: stw     r0, 24(r3)
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
label_80BFE640:
    ctx->pc = 0x80BFE640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE640: stw     r0, 28(r3)
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
label_80BFE644:
    ctx->pc = 0x80BFE644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE644: stw     r0, 32(r3)
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
label_80BFE648:
    ctx->pc = 0x80BFE648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE648: stw     r0, 36(r3)
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
label_80BFE64C:
    ctx->pc = 0x80BFE64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE64Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE64C: stw     r0, 40(r3)
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
label_80BFE650:
    ctx->pc = 0x80BFE650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE650: stw     r0, 44(r3)
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
label_80BFE654:
    ctx->pc = 0x80BFE654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE654: stw     r0, 48(r3)
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
label_80BFE658:
    ctx->pc = 0x80BFE658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE658: stw     r0, 52(r3)
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
label_80BFE65C:
    ctx->pc = 0x80BFE65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80BFE65C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFE660:
    ctx->pc = 0x80BFE660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE660: lwz     r31, 28(r1)
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
label_80BFE664:
    ctx->pc = 0x80BFE664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE664: lwz     r30, 24(r1)
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
label_80BFE668:
    ctx->pc = 0x80BFE668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE668: lwz     r29, 20(r1)
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
label_80BFE66C:
    ctx->pc = 0x80BFE66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE66Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE66C: lwz     r0, 36(r1)
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
label_80BFE670:
    ctx->pc = 0x80BFE670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE670: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE674:
    ctx->pc = 0x80BFE674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE674u)) return;
    // 80BFE674: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFE678:
    ctx->pc = 0x80BFE678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE678u)) return;
    // 80BFE678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE67C:
    ctx->pc = 0x80BFE67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE67C: stwu     r1, -16(r1)
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
label_80BFE680:
    ctx->pc = 0x80BFE680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE680: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE684:
    ctx->pc = 0x80BFE684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE684: stw     r0, 20(r1)
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
label_80BFE688:
    ctx->pc = 0x80BFE688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE688: stw     r31, 12(r1)
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
label_80BFE68C:
    ctx->pc = 0x80BFE68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE68C: stw     r30, 8(r1)
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
label_80BFE690:
    ctx->pc = 0x80BFE690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE690u)) return;
    // 80BFE690: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFE694:
    ctx->pc = 0x80BFE694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE694u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE694: lwz     r31, 32(r3)
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
label_80BFE698:
    ctx->pc = 0x80BFE698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE698: stw     r30, 24(r31)
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
label_80BFE69C:
    ctx->pc = 0x80BFE69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE69C: stw     r5, 28(r31)
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
label_80BFE6A0:
    ctx->pc = 0x80BFE6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6A0u)) return;
    // 80BFE6A0: cmpwi   r5, 0
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

label_80BFE6A4:
    ctx->pc = 0x80BFE6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6A4u)) return;
    // 80BFE6A4: bc    12, 1, 0x80BFE6B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE6B4;
        }
    }

label_80BFE6A8:
    ctx->pc = 0x80BFE6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE6A8: lwz     r3, 16(r31)
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
label_80BFE6AC:
    ctx->pc = 0x80BFE6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6ACu)) return;
    // 80BFE6AC: bl      0x80509C74
    {
            ctx->lr = 0x80BFE6B0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BFE6B0:
    ctx->pc = 0x80BFE6B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE6B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE6B0: stw     r30, 20(r31)
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
label_80BFE6B4:
    ctx->pc = 0x80BFE6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE6B4: lwz     r31, 12(r1)
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
label_80BFE6B8:
    ctx->pc = 0x80BFE6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE6B8: lwz     r30, 8(r1)
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
label_80BFE6BC:
    ctx->pc = 0x80BFE6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE6BC: lwz     r0, 20(r1)
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
label_80BFE6C0:
    ctx->pc = 0x80BFE6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE6C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE6C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE6C4:
    ctx->pc = 0x80BFE6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6C4u)) return;
    // 80BFE6C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE6C8:
    ctx->pc = 0x80BFE6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6C8u)) return;
    // 80BFE6C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE6CC:
    ctx->pc = 0x80BFE6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE6CC: stwu     r1, -16(r1)
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
label_80BFE6D0:
    ctx->pc = 0x80BFE6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE6D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE6D4:
    ctx->pc = 0x80BFE6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE6D4: stw     r0, 20(r1)
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
label_80BFE6D8:
    ctx->pc = 0x80BFE6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE6D8: stw     r31, 12(r1)
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
label_80BFE6DC:
    ctx->pc = 0x80BFE6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE6DC: stw     r30, 8(r1)
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
label_80BFE6E0:
    ctx->pc = 0x80BFE6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6E0u)) return;
    // 80BFE6E0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFE6E4:
    ctx->pc = 0x80BFE6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE6E4: lwz     r31, 32(r3)
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
label_80BFE6E8:
    ctx->pc = 0x80BFE6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE6E8: stw     r30, 36(r31)
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
label_80BFE6EC:
    ctx->pc = 0x80BFE6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE6EC: stw     r5, 40(r31)
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
label_80BFE6F0:
    ctx->pc = 0x80BFE6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6F0u)) return;
    // 80BFE6F0: cmpwi   r5, 0
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

label_80BFE6F4:
    ctx->pc = 0x80BFE6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6F4u)) return;
    // 80BFE6F4: bc    12, 1, 0x80BFE704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE704;
        }
    }

label_80BFE6F8:
    ctx->pc = 0x80BFE6F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE6F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE6F8: lwz     r3, 16(r31)
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
label_80BFE6FC:
    ctx->pc = 0x80BFE6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE6FCu)) return;
    // 80BFE6FC: bl      0x80509BF8
    {
            ctx->lr = 0x80BFE700u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BFE700:
    ctx->pc = 0x80BFE700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE700: stw     r30, 32(r31)
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
label_80BFE704:
    ctx->pc = 0x80BFE704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE704: lwz     r31, 12(r1)
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
label_80BFE708:
    ctx->pc = 0x80BFE708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE708: lwz     r30, 8(r1)
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
label_80BFE70C:
    ctx->pc = 0x80BFE70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE70Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE70C: lwz     r0, 20(r1)
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
label_80BFE710:
    ctx->pc = 0x80BFE710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE710: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE714:
    ctx->pc = 0x80BFE714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE714u)) return;
    // 80BFE714: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE718:
    ctx->pc = 0x80BFE718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE718u)) return;
    // 80BFE718: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE71C:
    ctx->pc = 0x80BFE71Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE71Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE71C: stwu     r1, -16(r1)
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
label_80BFE720:
    ctx->pc = 0x80BFE720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE720: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE724:
    ctx->pc = 0x80BFE724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE724: stw     r0, 20(r1)
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
label_80BFE728:
    ctx->pc = 0x80BFE728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE728: stw     r31, 12(r1)
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
label_80BFE72C:
    ctx->pc = 0x80BFE72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE72Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE72C: stw     r30, 8(r1)
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
label_80BFE730:
    ctx->pc = 0x80BFE730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE730u)) return;
    // 80BFE730: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFE734:
    ctx->pc = 0x80BFE734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE734: lwz     r31, 32(r3)
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
label_80BFE738:
    ctx->pc = 0x80BFE738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE738u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE738: stw     r30, 48(r31)
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
label_80BFE73C:
    ctx->pc = 0x80BFE73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE73Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE73C: stw     r5, 52(r31)
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
label_80BFE740:
    ctx->pc = 0x80BFE740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE740u)) return;
    // 80BFE740: cmpwi   r5, 0
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

label_80BFE744:
    ctx->pc = 0x80BFE744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE744u)) return;
    // 80BFE744: bc    12, 1, 0x80BFE754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE754;
        }
    }

label_80BFE748:
    ctx->pc = 0x80BFE748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE748: lwz     r3, 16(r31)
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
label_80BFE74C:
    ctx->pc = 0x80BFE74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE74Cu)) return;
    // 80BFE74C: bl      0x80509B94
    {
            ctx->lr = 0x80BFE750u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BFE750:
    ctx->pc = 0x80BFE750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE750: stw     r30, 44(r31)
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
label_80BFE754:
    ctx->pc = 0x80BFE754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE754: lwz     r31, 12(r1)
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
label_80BFE758:
    ctx->pc = 0x80BFE758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE758: lwz     r30, 8(r1)
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
label_80BFE75C:
    ctx->pc = 0x80BFE75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE75Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE75C: lwz     r0, 20(r1)
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
label_80BFE760:
    ctx->pc = 0x80BFE760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE760u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE760: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE764:
    ctx->pc = 0x80BFE764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE764u)) return;
    // 80BFE764: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE768:
    ctx->pc = 0x80BFE768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE768u)) return;
    // 80BFE768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE76C:
    ctx->pc = 0x80BFE76Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE76Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE76C: stwu     r1, -16(r1)
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
label_80BFE770:
    ctx->pc = 0x80BFE770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE770: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE774:
    ctx->pc = 0x80BFE774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE774: stw     r0, 20(r1)
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
label_80BFE778:
    ctx->pc = 0x80BFE778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE778: stw     r31, 12(r1)
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
label_80BFE77C:
    ctx->pc = 0x80BFE77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE77Cu)) return;
    // 80BFE77C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFE780:
    ctx->pc = 0x80BFE780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE780u)) return;
    // 80BFE780: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFE784:
    ctx->pc = 0x80BFE784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE784u)) return;
    // 80BFE784: addi    r4, r4, -25012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25012);

label_80BFE788:
    ctx->pc = 0x80BFE788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE788: lwz     r0, 0(r4)
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
label_80BFE78C:
    ctx->pc = 0x80BFE78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE78Cu)) return;
    // 80BFE78C: cmplwi  r0, 0x0000
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

label_80BFE790:
    ctx->pc = 0x80BFE790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE790u)) return;
    // 80BFE790: bc    4, 2, 0x80BFE7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE7B4;
        }
    }

label_80BFE794:
    ctx->pc = 0x80BFE794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE794: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80BFE798:
    ctx->pc = 0x80BFE798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE798u)) return;
    // 80BFE798: bl      0x8050EEC0
    {
            ctx->lr = 0x80BFE79Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80BFE79C:
    ctx->pc = 0x80BFE79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80BFE79C: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFE7A0:
    ctx->pc = 0x80BFE7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7A0u)) return;
    // 80BFE7A0: addi    r4, r4, -25012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25012);

label_80BFE7A4:
    ctx->pc = 0x80BFE7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE7A4: stw     r3, 0(r4)
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
label_80BFE7A8:
    ctx->pc = 0x80BFE7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7A8u)) return;
    // 80BFE7A8: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE7AC:
    ctx->pc = 0x80BFE7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7ACu)) return;
    // 80BFE7AC: addi    r3, r3, -25016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25016);

label_80BFE7B0:
    ctx->pc = 0x80BFE7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE7B0: stw     r31, 0(r3)
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
label_80BFE7B4:
    ctx->pc = 0x80BFE7B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE7B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE7B4: lwz     r31, 12(r1)
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
label_80BFE7B8:
    ctx->pc = 0x80BFE7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE7B8: lwz     r0, 20(r1)
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
label_80BFE7BC:
    ctx->pc = 0x80BFE7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE7BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE7C0:
    ctx->pc = 0x80BFE7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7C0u)) return;
    // 80BFE7C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE7C4:
    ctx->pc = 0x80BFE7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7C4u)) return;
    // 80BFE7C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE7C8:
    ctx->pc = 0x80BFE7C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE7C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFE7C8: stwu     r1, -32(r1)
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
label_80BFE7CC:
    ctx->pc = 0x80BFE7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFE7CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE7D0:
    ctx->pc = 0x80BFE7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFE7D0: stw     r0, 36(r1)
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
label_80BFE7D4:
    ctx->pc = 0x80BFE7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE7D4: stw     r31, 28(r1)
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
label_80BFE7D8:
    ctx->pc = 0x80BFE7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE7D8: stw     r30, 24(r1)
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
label_80BFE7DC:
    ctx->pc = 0x80BFE7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE7DC: stw     r29, 20(r1)
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
label_80BFE7E0:
    ctx->pc = 0x80BFE7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE7E0: stw     r28, 16(r1)
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
label_80BFE7E4:
    ctx->pc = 0x80BFE7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7E4u)) return;
    // 80BFE7E4: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE7E8:
    ctx->pc = 0x80BFE7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7E8u)) return;
    // 80BFE7E8: addi    r30, r3, -25012
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-25012);

label_80BFE7EC:
    ctx->pc = 0x80BFE7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE7EC: lwz     r0, 0(r30)
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
label_80BFE7F0:
    ctx->pc = 0x80BFE7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7F0u)) return;
    // 80BFE7F0: cmplwi  r0, 0x0000
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

label_80BFE7F4:
    ctx->pc = 0x80BFE7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7F4u)) return;
    // 80BFE7F4: bc    12, 2, 0x80BFE854
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE854;
        }
    }

label_80BFE7F8:
    ctx->pc = 0x80BFE7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFE7F8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80BFE7FC:
    ctx->pc = 0x80BFE7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE7FCu)) return;
    // 80BFE7FC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80BFE800:
    ctx->pc = 0x80BFE800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE800u)) return;
    // 80BFE800: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE804:
    ctx->pc = 0x80BFE804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE804u)) return;
    // 80BFE804: addi    r31, r3, -25016
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25016);

label_80BFE808:
    ctx->pc = 0x80BFE808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE808u)) return;
    // 80BFE808: b       0x80BFE828
    {
            goto label_80BFE828;
    }

label_80BFE80C:
    ctx->pc = 0x80BFE80Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE80Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80BFE80C: lwz     r3, 0(r30)
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
label_80BFE810:
    ctx->pc = 0x80BFE810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE810: lwzx    r3, r3, r29
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
label_80BFE814:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE814u)) return;
    // 80BFE814: cmplwi  r3, 0x0000
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

label_80BFE818:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE818u)) return;
    // 80BFE818: bc    12, 2, 0x80BFE820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE820;
        }
    }

label_80BFE81C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE81Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE81C: bl      0x8050F9E0
    {
            ctx->lr = 0x80BFE820u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BFE820:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80BFE820: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80BFE824:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE824u)) return;
    // 80BFE824: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80BFE828:
    ctx->pc = 0x80BFE828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE828: lwz     r0, 0(r31)
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
label_80BFE82C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE82Cu)) return;
    // 80BFE82C: cmpw    r28, r0
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

label_80BFE830:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE830u)) return;
    // 80BFE830: bc    12, 0, 0x80BFE80C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE80Cu;
                return;
            }
            goto label_80BFE80C;
        }
    }

label_80BFE834:
    ctx->pc = 0x80BFE834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFE834: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE838:
    ctx->pc = 0x80BFE838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE838u)) return;
    // 80BFE838: addi    r3, r3, -25012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25012);

label_80BFE83C:
    ctx->pc = 0x80BFE83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE83C: lwz     r3, 0(r3)
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
label_80BFE840:
    ctx->pc = 0x80BFE840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE840u)) return;
    // 80BFE840: bl      0x8050ED40
    {
            ctx->lr = 0x80BFE844u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80BFE844:
    ctx->pc = 0x80BFE844u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE844u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFE844: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFE848:
    ctx->pc = 0x80BFE848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE848u)) return;
    // 80BFE848: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE84C:
    ctx->pc = 0x80BFE84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE84Cu)) return;
    // 80BFE84C: addi    r3, r3, -25012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25012);

label_80BFE850:
    ctx->pc = 0x80BFE850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE850: stw     r0, 0(r3)
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
label_80BFE854:
    ctx->pc = 0x80BFE854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE854: lwz     r31, 28(r1)
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
label_80BFE858:
    ctx->pc = 0x80BFE858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE858: lwz     r30, 24(r1)
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
label_80BFE85C:
    ctx->pc = 0x80BFE85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE85Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE85C: lwz     r29, 20(r1)
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
label_80BFE860:
    ctx->pc = 0x80BFE860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE860: lwz     r28, 16(r1)
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
label_80BFE864:
    ctx->pc = 0x80BFE864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE864: lwz     r0, 36(r1)
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
label_80BFE868:
    ctx->pc = 0x80BFE868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE868: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE86C:
    ctx->pc = 0x80BFE86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE86Cu)) return;
    // 80BFE86C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFE870:
    ctx->pc = 0x80BFE870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE870u)) return;
    // 80BFE870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE874:
    ctx->pc = 0x80BFE874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE874: stwu     r1, -16(r1)
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
label_80BFE878:
    ctx->pc = 0x80BFE878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE878: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE87C:
    ctx->pc = 0x80BFE87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE87C: stw     r0, 20(r1)
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
label_80BFE880:
    ctx->pc = 0x80BFE880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE880: stw     r31, 12(r1)
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
label_80BFE884:
    ctx->pc = 0x80BFE884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE884u)) return;
    // 80BFE884: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFE888:
    ctx->pc = 0x80BFE888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE888u)) return;
    // 80BFE888: addi    r6, r6, -25016
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25016);

label_80BFE88C:
    ctx->pc = 0x80BFE88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE88C: lwz     r0, 0(r6)
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
label_80BFE890:
    ctx->pc = 0x80BFE890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE890u)) return;
    // 80BFE890: cmpw    r3, r0
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

label_80BFE894:
    ctx->pc = 0x80BFE894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE894u)) return;
    // 80BFE894: bc    4, 0, 0x80BFE8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE8D0;
        }
    }

label_80BFE898:
    ctx->pc = 0x80BFE898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFE898: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFE89C:
    ctx->pc = 0x80BFE89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE89Cu)) return;
    // 80BFE89C: addi    r6, r6, -25012
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25012);

label_80BFE8A0:
    ctx->pc = 0x80BFE8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE8A0: lwz     r6, 0(r6)
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
label_80BFE8A4:
    ctx->pc = 0x80BFE8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8A4u)) return;
    // 80BFE8A4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFE8A8:
    ctx->pc = 0x80BFE8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE8A8: lwzx    r0, r6, r31
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
label_80BFE8AC:
    ctx->pc = 0x80BFE8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8ACu)) return;
    // 80BFE8AC: cmplwi  r0, 0x0000
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

label_80BFE8B0:
    ctx->pc = 0x80BFE8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8B0u)) return;
    // 80BFE8B0: bc    4, 2, 0x80BFE8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE8D0;
        }
    }

label_80BFE8B4:
    ctx->pc = 0x80BFE8B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE8B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFE8B4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFE8B8:
    ctx->pc = 0x80BFE8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8B8u)) return;
    // 80BFE8B8: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BFE8BC:
    ctx->pc = 0x80BFE8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8BCu)) return;
    // 80BFE8BC: bl      0x80BFE5C0
    {
            ctx->lr = 0x80BFE8C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE5C0u;
                return;
            }
            goto label_80BFE5C0;
    }

label_80BFE8C0:
    ctx->pc = 0x80BFE8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80BFE8C0: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFE8C4:
    ctx->pc = 0x80BFE8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8C4u)) return;
    // 80BFE8C4: addi    r4, r4, -25012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25012);

label_80BFE8C8:
    ctx->pc = 0x80BFE8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE8C8: lwz     r4, 0(r4)
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
label_80BFE8CC:
    ctx->pc = 0x80BFE8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE8CC: stwx    r3, r4, r31
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
label_80BFE8D0:
    ctx->pc = 0x80BFE8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE8D0: lwz     r31, 12(r1)
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
label_80BFE8D4:
    ctx->pc = 0x80BFE8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE8D4: lwz     r0, 20(r1)
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
label_80BFE8D8:
    ctx->pc = 0x80BFE8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE8D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE8DC:
    ctx->pc = 0x80BFE8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8DCu)) return;
    // 80BFE8DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE8E0:
    ctx->pc = 0x80BFE8E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8E0u)) return;
    // 80BFE8E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE8E4:
    ctx->pc = 0x80BFE8E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE8E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFE8E4: stwu     r1, -16(r1)
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
label_80BFE8E8:
    ctx->pc = 0x80BFE8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE8E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE8EC:
    ctx->pc = 0x80BFE8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE8EC: stw     r0, 20(r1)
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
label_80BFE8F0:
    ctx->pc = 0x80BFE8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE8F0: stw     r31, 12(r1)
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
label_80BFE8F4:
    ctx->pc = 0x80BFE8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8F4u)) return;
    // 80BFE8F4: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFE8F8:
    ctx->pc = 0x80BFE8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8F8u)) return;
    // 80BFE8F8: addi    r4, r4, -25016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25016);

label_80BFE8FC:
    ctx->pc = 0x80BFE8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE8FC: lwz     r0, 0(r4)
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
label_80BFE900:
    ctx->pc = 0x80BFE900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE900u)) return;
    // 80BFE900: cmpw    r3, r0
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

label_80BFE904:
    ctx->pc = 0x80BFE904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE904u)) return;
    // 80BFE904: bc    4, 0, 0x80BFE93C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE93C;
        }
    }

label_80BFE908:
    ctx->pc = 0x80BFE908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFE908: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFE90C:
    ctx->pc = 0x80BFE90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE90Cu)) return;
    // 80BFE90C: addi    r4, r4, -25012
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25012);

label_80BFE910:
    ctx->pc = 0x80BFE910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE910: lwz     r4, 0(r4)
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
label_80BFE914:
    ctx->pc = 0x80BFE914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE914u)) return;
    // 80BFE914: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFE918:
    ctx->pc = 0x80BFE918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE918: lwzx    r3, r4, r31
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
label_80BFE91C:
    ctx->pc = 0x80BFE91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE91Cu)) return;
    // 80BFE91C: cmplwi  r3, 0x0000
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

label_80BFE920:
    ctx->pc = 0x80BFE920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE920u)) return;
    // 80BFE920: bc    12, 2, 0x80BFE93C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE93C;
        }
    }

label_80BFE924:
    ctx->pc = 0x80BFE924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE924: bl      0x8050F9E0
    {
            ctx->lr = 0x80BFE928u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80BFE928:
    ctx->pc = 0x80BFE928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80BFE928: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80BFE92C:
    ctx->pc = 0x80BFE92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE92Cu)) return;
    // 80BFE92C: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFE930:
    ctx->pc = 0x80BFE930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE930u)) return;
    // 80BFE930: addi    r3, r3, -25012
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25012);

label_80BFE934:
    ctx->pc = 0x80BFE934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80BFE934: lwz     r3, 0(r3)
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
label_80BFE938:
    ctx->pc = 0x80BFE938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80BFE938: stwx    r0, r3, r31
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
label_80BFE93C:
    ctx->pc = 0x80BFE93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE93C: lwz     r31, 12(r1)
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
label_80BFE940:
    ctx->pc = 0x80BFE940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE940u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE940: lwz     r0, 20(r1)
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
label_80BFE944:
    ctx->pc = 0x80BFE944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE944: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE948:
    ctx->pc = 0x80BFE948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE948u)) return;
    // 80BFE948: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE94C:
    ctx->pc = 0x80BFE94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE94Cu)) return;
    // 80BFE94C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE950:
    ctx->pc = 0x80BFE950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE950: stwu     r1, -16(r1)
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
label_80BFE954:
    ctx->pc = 0x80BFE954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE954: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE958:
    ctx->pc = 0x80BFE958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE958: stw     r0, 20(r1)
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
label_80BFE95C:
    ctx->pc = 0x80BFE95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE95Cu)) return;
    // 80BFE95C: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFE960:
    ctx->pc = 0x80BFE960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE960u)) return;
    // 80BFE960: addi    r6, r6, -25016
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25016);

label_80BFE964:
    ctx->pc = 0x80BFE964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE964: lwz     r0, 0(r6)
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
label_80BFE968:
    ctx->pc = 0x80BFE968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE968u)) return;
    // 80BFE968: cmpw    r3, r0
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

label_80BFE96C:
    ctx->pc = 0x80BFE96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE96Cu)) return;
    // 80BFE96C: bc    4, 0, 0x80BFE990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE990;
        }
    }

label_80BFE970:
    ctx->pc = 0x80BFE970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFE970: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFE974:
    ctx->pc = 0x80BFE974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE974u)) return;
    // 80BFE974: addi    r6, r6, -25012
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25012);

label_80BFE978:
    ctx->pc = 0x80BFE978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE978: lwz     r6, 0(r6)
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
label_80BFE97C:
    ctx->pc = 0x80BFE97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE97Cu)) return;
    // 80BFE97C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFE980:
    ctx->pc = 0x80BFE980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE980: lwzx    r3, r6, r0
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
label_80BFE984:
    ctx->pc = 0x80BFE984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE984u)) return;
    // 80BFE984: cmplwi  r3, 0x0000
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

label_80BFE988:
    ctx->pc = 0x80BFE988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE988u)) return;
    // 80BFE988: bc    12, 2, 0x80BFE990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE990;
        }
    }

label_80BFE98C:
    ctx->pc = 0x80BFE98Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE98Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE98C: bl      0x80BFE67C
    {
            ctx->lr = 0x80BFE990u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE67Cu;
                return;
            }
            goto label_80BFE67C;
    }

label_80BFE990:
    ctx->pc = 0x80BFE990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE990: lwz     r0, 20(r1)
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
label_80BFE994:
    ctx->pc = 0x80BFE994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE994: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE998:
    ctx->pc = 0x80BFE998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE998u)) return;
    // 80BFE998: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE99C:
    ctx->pc = 0x80BFE99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE99Cu)) return;
    // 80BFE99C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE9A0:
    ctx->pc = 0x80BFE9A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE9A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE9A0: stwu     r1, -16(r1)
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
label_80BFE9A4:
    ctx->pc = 0x80BFE9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE9A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE9A8:
    ctx->pc = 0x80BFE9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE9A8: stw     r0, 20(r1)
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
label_80BFE9AC:
    ctx->pc = 0x80BFE9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9ACu)) return;
    // 80BFE9AC: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFE9B0:
    ctx->pc = 0x80BFE9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9B0u)) return;
    // 80BFE9B0: addi    r6, r6, -25016
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25016);

label_80BFE9B4:
    ctx->pc = 0x80BFE9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE9B4: lwz     r0, 0(r6)
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
label_80BFE9B8:
    ctx->pc = 0x80BFE9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9B8u)) return;
    // 80BFE9B8: cmpw    r3, r0
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

label_80BFE9BC:
    ctx->pc = 0x80BFE9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9BCu)) return;
    // 80BFE9BC: bc    4, 0, 0x80BFE9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFE9E0;
        }
    }

label_80BFE9C0:
    ctx->pc = 0x80BFE9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFE9C0: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFE9C4:
    ctx->pc = 0x80BFE9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9C4u)) return;
    // 80BFE9C4: addi    r6, r6, -25012
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25012);

label_80BFE9C8:
    ctx->pc = 0x80BFE9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE9C8: lwz     r6, 0(r6)
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
label_80BFE9CC:
    ctx->pc = 0x80BFE9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9CCu)) return;
    // 80BFE9CC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFE9D0:
    ctx->pc = 0x80BFE9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE9D0: lwzx    r3, r6, r0
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
label_80BFE9D4:
    ctx->pc = 0x80BFE9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9D4u)) return;
    // 80BFE9D4: cmplwi  r3, 0x0000
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

label_80BFE9D8:
    ctx->pc = 0x80BFE9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9D8u)) return;
    // 80BFE9D8: bc    12, 2, 0x80BFE9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFE9E0;
        }
    }

label_80BFE9DC:
    ctx->pc = 0x80BFE9DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE9DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFE9DC: bl      0x80BFE6CC
    {
            ctx->lr = 0x80BFE9E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE6CCu;
                return;
            }
            goto label_80BFE6CC;
    }

label_80BFE9E0:
    ctx->pc = 0x80BFE9E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE9E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFE9E0: lwz     r0, 20(r1)
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
label_80BFE9E4:
    ctx->pc = 0x80BFE9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFE9E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFE9E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE9E8:
    ctx->pc = 0x80BFE9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9E8u)) return;
    // 80BFE9E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFE9EC:
    ctx->pc = 0x80BFE9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9ECu)) return;
    // 80BFE9EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFE9F0:
    ctx->pc = 0x80BFE9F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFE9F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFE9F0: stwu     r1, -16(r1)
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
label_80BFE9F4:
    ctx->pc = 0x80BFE9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFE9F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFE9F8:
    ctx->pc = 0x80BFE9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFE9F8: stw     r0, 20(r1)
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
label_80BFE9FC:
    ctx->pc = 0x80BFE9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFE9FCu)) return;
    // 80BFE9FC: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFEA00:
    ctx->pc = 0x80BFEA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA00u)) return;
    // 80BFEA00: addi    r6, r6, -25016
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25016);

label_80BFEA04:
    ctx->pc = 0x80BFEA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFEA04: lwz     r0, 0(r6)
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
label_80BFEA08:
    ctx->pc = 0x80BFEA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA08u)) return;
    // 80BFEA08: cmpw    r3, r0
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

label_80BFEA0C:
    ctx->pc = 0x80BFEA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA0Cu)) return;
    // 80BFEA0C: bc    4, 0, 0x80BFEA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80BFEA30;
        }
    }

label_80BFEA10:
    ctx->pc = 0x80BFEA10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEA10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80BFEA10: lis     r6, -27482
    ctx->gpr[6] = ((u32)(s32)(-27482) << 16);

label_80BFEA14:
    ctx->pc = 0x80BFEA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA14u)) return;
    // 80BFEA14: addi    r6, r6, -25012
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25012);

label_80BFEA18:
    ctx->pc = 0x80BFEA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFEA18: lwz     r6, 0(r6)
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
label_80BFEA1C:
    ctx->pc = 0x80BFEA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA1Cu)) return;
    // 80BFEA1C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80BFEA20:
    ctx->pc = 0x80BFEA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFEA20: lwzx    r3, r6, r0
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
label_80BFEA24:
    ctx->pc = 0x80BFEA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA24u)) return;
    // 80BFEA24: cmplwi  r3, 0x0000
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

label_80BFEA28:
    ctx->pc = 0x80BFEA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA28u)) return;
    // 80BFEA28: bc    12, 2, 0x80BFEA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80BFEA30;
        }
    }

label_80BFEA2C:
    ctx->pc = 0x80BFEA2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEA2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80BFEA2C: bl      0x80BFE71C
    {
            ctx->lr = 0x80BFEA30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80BFE71Cu;
                return;
            }
            goto label_80BFE71C;
    }

label_80BFEA30:
    ctx->pc = 0x80BFEA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFEA30: lwz     r0, 20(r1)
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
label_80BFEA34:
    ctx->pc = 0x80BFEA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFEA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFEA34: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFEA38:
    ctx->pc = 0x80BFEA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA38u)) return;
    // 80BFEA38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80BFEA3C:
    ctx->pc = 0x80BFEA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA3Cu)) return;
    // 80BFEA3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

label_80BFEA40:
    ctx->pc = 0x80BFEA40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEA40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80BFEA40: stwu     r1, -32(r1)
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
label_80BFEA44:
    ctx->pc = 0x80BFEA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFEA44: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFEA48:
    ctx->pc = 0x80BFEA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80BFEA48: stw     r0, 36(r1)
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
label_80BFEA4C:
    ctx->pc = 0x80BFEA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFEA4C: stw     r31, 28(r1)
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
label_80BFEA50:
    ctx->pc = 0x80BFEA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFEA50: stw     r30, 24(r1)
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
label_80BFEA54:
    ctx->pc = 0x80BFEA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFEA54: stw     r29, 20(r1)
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
label_80BFEA58:
    ctx->pc = 0x80BFEA58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFEA58: stw     r28, 16(r1)
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
label_80BFEA5C:
    ctx->pc = 0x80BFEA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA5Cu)) return;
    // 80BFEA5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80BFEA60:
    ctx->pc = 0x80BFEA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA60u)) return;
    // 80BFEA60: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFEA64:
    ctx->pc = 0x80BFEA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA64u)) return;
    // 80BFEA64: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80BFEA68:
    ctx->pc = 0x80BFEA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA68u)) return;
    // 80BFEA68: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80BFEA6C:
    ctx->pc = 0x80BFEA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA6Cu)) return;
    // 80BFEA6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80BFEA70:
    ctx->pc = 0x80BFEA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA70u)) return;
    // 80BFEA70: bl      0x80401DB0
    {
            ctx->lr = 0x80BFEA74u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80BFEA74:
    ctx->pc = 0x80BFEA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80BFEA74: lis     r4, -27482
    ctx->gpr[4] = ((u32)(s32)(-27482) << 16);

label_80BFEA78:
    ctx->pc = 0x80BFEA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA78u)) return;
    // 80BFEA78: addi    r4, r4, -25008
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25008);

label_80BFEA7C:
    ctx->pc = 0x80BFEA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFEA7C: lwz     r0, 0(r4)
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
label_80BFEA80:
    ctx->pc = 0x80BFEA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA80u)) return;
    // 80BFEA80: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80BFEA84:
    ctx->pc = 0x80BFEA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA84u)) return;
    // 80BFEA84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFEA88:
    ctx->pc = 0x80BFEA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA88u)) return;
    // 80BFEA88: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80BFEA8C:
    ctx->pc = 0x80BFEA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA8Cu)) return;
    // 80BFEA8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80BFEA90:
    ctx->pc = 0x80BFEA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA90u)) return;
    // 80BFEA90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80BFEA94:
    ctx->pc = 0x80BFEA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA94u)) return;
    // 80BFEA94: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80BFEA98:
    ctx->pc = 0x80BFEA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEA98u)) return;
    // 80BFEA98: bl      0x8050A0D4
    {
            ctx->lr = 0x80BFEA9Cu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80BFEA9C:
    ctx->pc = 0x80BFEA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFEA9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFEAA0:
    ctx->pc = 0x80BFEAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAA0u)) return;
    // 80BFEAA0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80BFEAA4:
    ctx->pc = 0x80BFEAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAA4u)) return;
    // 80BFEAA4: bl      0x80509C74
    {
            ctx->lr = 0x80BFEAA8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80BFEAA8:
    ctx->pc = 0x80BFEAA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEAA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFEAA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFEAAC:
    ctx->pc = 0x80BFEAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAACu)) return;
    // 80BFEAAC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80BFEAB0:
    ctx->pc = 0x80BFEAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAB0u)) return;
    // 80BFEAB0: bl      0x80509BF8
    {
            ctx->lr = 0x80BFEAB4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80BFEAB4:
    ctx->pc = 0x80BFEAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80BFEAB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80BFEAB8:
    ctx->pc = 0x80BFEAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAB8u)) return;
    // 80BFEAB8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80BFEABC:
    ctx->pc = 0x80BFEABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEABCu)) return;
    // 80BFEABC: bl      0x80509B94
    {
            ctx->lr = 0x80BFEAC0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80BFEAC0:
    ctx->pc = 0x80BFEAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80BFEAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80BFEAC0: lis     r3, -27482
    ctx->gpr[3] = ((u32)(s32)(-27482) << 16);

label_80BFEAC4:
    ctx->pc = 0x80BFEAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAC4u)) return;
    // 80BFEAC4: addi    r4, r3, -25008
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25008);

label_80BFEAC8:
    ctx->pc = 0x80BFEAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80BFEAC8: lwz     r3, 0(r4)
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
label_80BFEACC:
    ctx->pc = 0x80BFEACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEACCu)) return;
    // 80BFEACC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80BFEAD0:
    ctx->pc = 0x80BFEAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80BFEAD0: stw     r0, 0(r4)
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
label_80BFEAD4:
    ctx->pc = 0x80BFEAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAD4u)) return;
    // 80BFEAD4: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80BFEAD8:
    ctx->pc = 0x80BFEAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80BFEAD8: stw     r0, 0(r4)
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
label_80BFEADC:
    ctx->pc = 0x80BFEADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80BFEADC: lwz     r31, 28(r1)
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
label_80BFEAE0:
    ctx->pc = 0x80BFEAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80BFEAE0: lwz     r30, 24(r1)
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
label_80BFEAE4:
    ctx->pc = 0x80BFEAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80BFEAE4: lwz     r29, 20(r1)
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
label_80BFEAE8:
    ctx->pc = 0x80BFEAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80BFEAE8: lwz     r28, 16(r1)
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
label_80BFEAEC:
    ctx->pc = 0x80BFEAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80BFEAEC: lwz     r0, 36(r1)
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
label_80BFEAF0:
    ctx->pc = 0x80BFEAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80BFEAF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80BFEAF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80BFEAF4:
    ctx->pc = 0x80BFEAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAF4u)) return;
    // 80BFEAF4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80BFEAF8:
    ctx->pc = 0x80BFEAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80BFEAF8u)) return;
    // 80BFEAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80BFDCC0;
        }
    }

    ctx->pc = 0x80BFEAFCu;
    return;
return_dispatch_80BFDCC0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80BFDCF4u: goto label_80BFDCF4;
    case 0x80BFDCF8u: goto label_80BFDCF8;
    case 0x80BFDCFCu: goto label_80BFDCFC;
    case 0x80BFDD04u: goto label_80BFDD04;
    case 0x80BFDD0Cu: goto label_80BFDD0C;
    case 0x80BFDD14u: goto label_80BFDD14;
    case 0x80BFDD3Cu: goto label_80BFDD3C;
    case 0x80BFDD78u: goto label_80BFDD78;
    case 0x80BFDD94u: goto label_80BFDD94;
    case 0x80BFDD9Cu: goto label_80BFDD9C;
    case 0x80BFDDC4u: goto label_80BFDDC4;
    case 0x80BFDDCCu: goto label_80BFDDCC;
    case 0x80BFDDE0u: goto label_80BFDDE0;
    case 0x80BFDDE8u: goto label_80BFDDE8;
    case 0x80BFDDF8u: goto label_80BFDDF8;
    case 0x80BFDE08u: goto label_80BFDE08;
    case 0x80BFDE10u: goto label_80BFDE10;
    case 0x80BFDE14u: goto label_80BFDE14;
    case 0x80BFDE1Cu: goto label_80BFDE1C;
    case 0x80BFDE44u: goto label_80BFDE44;
    case 0x80BFDE4Cu: goto label_80BFDE4C;
    case 0x80BFDE70u: goto label_80BFDE70;
    case 0x80BFDEA0u: goto label_80BFDEA0;
    case 0x80BFDEA8u: goto label_80BFDEA8;
    case 0x80BFDEB0u: goto label_80BFDEB0;
    case 0x80BFDEB8u: goto label_80BFDEB8;
    case 0x80BFDEE0u: goto label_80BFDEE0;
    case 0x80BFDEE8u: goto label_80BFDEE8;
    case 0x80BFDEF0u: goto label_80BFDEF0;
    case 0x80BFDEF4u: goto label_80BFDEF4;
    case 0x80BFDEFCu: goto label_80BFDEFC;
    case 0x80BFDF08u: goto label_80BFDF08;
    case 0x80BFDF2Cu: goto label_80BFDF2C;
    case 0x80BFDF34u: goto label_80BFDF34;
    case 0x80BFDF3Cu: goto label_80BFDF3C;
    case 0x80BFDF40u: goto label_80BFDF40;
    case 0x80BFDF48u: goto label_80BFDF48;
    case 0x80BFDF50u: goto label_80BFDF50;
    case 0x80BFDF78u: goto label_80BFDF78;
    case 0x80BFDF80u: goto label_80BFDF80;
    case 0x80BFDF88u: goto label_80BFDF88;
    case 0x80BFDF90u: goto label_80BFDF90;
    case 0x80BFDF94u: goto label_80BFDF94;
    case 0x80BFDFB0u: goto label_80BFDFB0;
    case 0x80BFDFBCu: goto label_80BFDFBC;
    case 0x80BFDFD8u: goto label_80BFDFD8;
    case 0x80BFDFE4u: goto label_80BFDFE4;
    case 0x80BFE00Cu: goto label_80BFE00C;
    case 0x80BFE028u: goto label_80BFE028;
    case 0x80BFE02Cu: goto label_80BFE02C;
    case 0x80BFE048u: goto label_80BFE048;
    case 0x80BFE04Cu: goto label_80BFE04C;
    case 0x80BFE054u: goto label_80BFE054;
    case 0x80BFE084u: goto label_80BFE084;
    case 0x80BFE0A0u: goto label_80BFE0A0;
    case 0x80BFE0D0u: goto label_80BFE0D0;
    case 0x80BFE0D8u: goto label_80BFE0D8;
    case 0x80BFE0E0u: goto label_80BFE0E0;
    case 0x80BFE0E8u: goto label_80BFE0E8;
    case 0x80BFE0F4u: goto label_80BFE0F4;
    case 0x80BFE11Cu: goto label_80BFE11C;
    case 0x80BFE124u: goto label_80BFE124;
    case 0x80BFE128u: goto label_80BFE128;
    case 0x80BFE130u: goto label_80BFE130;
    case 0x80BFE138u: goto label_80BFE138;
    case 0x80BFE140u: goto label_80BFE140;
    case 0x80BFE158u: goto label_80BFE158;
    case 0x80BFE16Cu: goto label_80BFE16C;
    case 0x80BFE170u: goto label_80BFE170;
    case 0x80BFE194u: goto label_80BFE194;
    case 0x80BFE220u: goto label_80BFE220;
    case 0x80BFE22Cu: goto label_80BFE22C;
    case 0x80BFE2BCu: goto label_80BFE2BC;
    case 0x80BFE2C4u: goto label_80BFE2C4;
    case 0x80BFE32Cu: goto label_80BFE32C;
    case 0x80BFE374u: goto label_80BFE374;
    case 0x80BFE3E0u: goto label_80BFE3E0;
    case 0x80BFE48Cu: goto label_80BFE48C;
    case 0x80BFE4B4u: goto label_80BFE4B4;
    case 0x80BFE514u: goto label_80BFE514;
    case 0x80BFE554u: goto label_80BFE554;
    case 0x80BFE594u: goto label_80BFE594;
    case 0x80BFE5F0u: goto label_80BFE5F0;
    case 0x80BFE614u: goto label_80BFE614;
    case 0x80BFE6B0u: goto label_80BFE6B0;
    case 0x80BFE700u: goto label_80BFE700;
    case 0x80BFE750u: goto label_80BFE750;
    case 0x80BFE79Cu: goto label_80BFE79C;
    case 0x80BFE820u: goto label_80BFE820;
    case 0x80BFE844u: goto label_80BFE844;
    case 0x80BFE8C0u: goto label_80BFE8C0;
    case 0x80BFE928u: goto label_80BFE928;
    case 0x80BFE990u: goto label_80BFE990;
    case 0x80BFE9E0u: goto label_80BFE9E0;
    case 0x80BFEA30u: goto label_80BFEA30;
    case 0x80BFEA74u: goto label_80BFEA74;
    case 0x80BFEA9Cu: goto label_80BFEA9C;
    case 0x80BFEAA8u: goto label_80BFEAA8;
    case 0x80BFEAB4u: goto label_80BFEAB4;
    case 0x80BFEAC0u: goto label_80BFEAC0;
    default: return;
    }
}

