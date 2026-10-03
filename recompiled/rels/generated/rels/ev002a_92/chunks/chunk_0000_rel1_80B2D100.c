// DolRecomp output
#include "../generated.h"

void func_80B2D100(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B2D100[883] = {
        &&label_80B2D100,
        &&label_80B2D104,
        &&label_80B2D108,
        &&label_80B2D10C,
        &&label_80B2D110,
        &&label_80B2D114,
        &&label_80B2D118,
        &&label_80B2D11C,
        &&label_80B2D120,
        &&label_80B2D124,
        &&label_80B2D128,
        &&label_80B2D12C,
        &&label_80B2D130,
        &&label_80B2D134,
        &&label_80B2D138,
        &&label_80B2D13C,
        &&label_80B2D140,
        &&label_80B2D144,
        &&label_80B2D148,
        &&label_80B2D14C,
        &&label_80B2D150,
        &&label_80B2D154,
        &&label_80B2D158,
        &&label_80B2D15C,
        &&label_80B2D160,
        &&label_80B2D164,
        &&label_80B2D168,
        &&label_80B2D16C,
        &&label_80B2D170,
        &&label_80B2D174,
        &&label_80B2D178,
        &&label_80B2D17C,
        &&label_80B2D180,
        &&label_80B2D184,
        &&label_80B2D188,
        &&label_80B2D18C,
        &&label_80B2D190,
        &&label_80B2D194,
        &&label_80B2D198,
        &&label_80B2D19C,
        &&label_80B2D1A0,
        &&label_80B2D1A4,
        &&label_80B2D1A8,
        &&label_80B2D1AC,
        &&label_80B2D1B0,
        &&label_80B2D1B4,
        &&label_80B2D1B8,
        &&label_80B2D1BC,
        &&label_80B2D1C0,
        &&label_80B2D1C4,
        &&label_80B2D1C8,
        &&label_80B2D1CC,
        &&label_80B2D1D0,
        &&label_80B2D1D4,
        &&label_80B2D1D8,
        &&label_80B2D1DC,
        &&label_80B2D1E0,
        &&label_80B2D1E4,
        &&label_80B2D1E8,
        &&label_80B2D1EC,
        &&label_80B2D1F0,
        &&label_80B2D1F4,
        &&label_80B2D1F8,
        &&label_80B2D1FC,
        &&label_80B2D200,
        &&label_80B2D204,
        &&label_80B2D208,
        &&label_80B2D20C,
        &&label_80B2D210,
        &&label_80B2D214,
        &&label_80B2D218,
        &&label_80B2D21C,
        &&label_80B2D220,
        &&label_80B2D224,
        &&label_80B2D228,
        &&label_80B2D22C,
        &&label_80B2D230,
        &&label_80B2D234,
        &&label_80B2D238,
        &&label_80B2D23C,
        &&label_80B2D240,
        &&label_80B2D244,
        &&label_80B2D248,
        &&label_80B2D24C,
        &&label_80B2D250,
        &&label_80B2D254,
        &&label_80B2D258,
        &&label_80B2D25C,
        &&label_80B2D260,
        &&label_80B2D264,
        &&label_80B2D268,
        &&label_80B2D26C,
        &&label_80B2D270,
        &&label_80B2D274,
        &&label_80B2D278,
        &&label_80B2D27C,
        &&label_80B2D280,
        &&label_80B2D284,
        &&label_80B2D288,
        &&label_80B2D28C,
        &&label_80B2D290,
        &&label_80B2D294,
        &&label_80B2D298,
        &&label_80B2D29C,
        &&label_80B2D2A0,
        &&label_80B2D2A4,
        &&label_80B2D2A8,
        &&label_80B2D2AC,
        &&label_80B2D2B0,
        &&label_80B2D2B4,
        &&label_80B2D2B8,
        &&label_80B2D2BC,
        &&label_80B2D2C0,
        &&label_80B2D2C4,
        &&label_80B2D2C8,
        &&label_80B2D2CC,
        &&label_80B2D2D0,
        &&label_80B2D2D4,
        &&label_80B2D2D8,
        &&label_80B2D2DC,
        &&label_80B2D2E0,
        &&label_80B2D2E4,
        &&label_80B2D2E8,
        &&label_80B2D2EC,
        &&label_80B2D2F0,
        &&label_80B2D2F4,
        &&label_80B2D2F8,
        &&label_80B2D2FC,
        &&label_80B2D300,
        &&label_80B2D304,
        &&label_80B2D308,
        &&label_80B2D30C,
        &&label_80B2D310,
        &&label_80B2D314,
        &&label_80B2D318,
        &&label_80B2D31C,
        &&label_80B2D320,
        &&label_80B2D324,
        &&label_80B2D328,
        &&label_80B2D32C,
        &&label_80B2D330,
        &&label_80B2D334,
        &&label_80B2D338,
        &&label_80B2D33C,
        &&label_80B2D340,
        &&label_80B2D344,
        &&label_80B2D348,
        &&label_80B2D34C,
        &&label_80B2D350,
        &&label_80B2D354,
        &&label_80B2D358,
        &&label_80B2D35C,
        &&label_80B2D360,
        &&label_80B2D364,
        &&label_80B2D368,
        &&label_80B2D36C,
        &&label_80B2D370,
        &&label_80B2D374,
        &&label_80B2D378,
        &&label_80B2D37C,
        &&label_80B2D380,
        &&label_80B2D384,
        &&label_80B2D388,
        &&label_80B2D38C,
        &&label_80B2D390,
        &&label_80B2D394,
        &&label_80B2D398,
        &&label_80B2D39C,
        &&label_80B2D3A0,
        &&label_80B2D3A4,
        &&label_80B2D3A8,
        &&label_80B2D3AC,
        &&label_80B2D3B0,
        &&label_80B2D3B4,
        &&label_80B2D3B8,
        &&label_80B2D3BC,
        &&label_80B2D3C0,
        &&label_80B2D3C4,
        &&label_80B2D3C8,
        &&label_80B2D3CC,
        &&label_80B2D3D0,
        &&label_80B2D3D4,
        &&label_80B2D3D8,
        &&label_80B2D3DC,
        &&label_80B2D3E0,
        &&label_80B2D3E4,
        &&label_80B2D3E8,
        &&label_80B2D3EC,
        &&label_80B2D3F0,
        &&label_80B2D3F4,
        &&label_80B2D3F8,
        &&label_80B2D3FC,
        &&label_80B2D400,
        &&label_80B2D404,
        &&label_80B2D408,
        &&label_80B2D40C,
        &&label_80B2D410,
        &&label_80B2D414,
        &&label_80B2D418,
        &&label_80B2D41C,
        &&label_80B2D420,
        &&label_80B2D424,
        &&label_80B2D428,
        &&label_80B2D42C,
        &&label_80B2D430,
        &&label_80B2D434,
        &&label_80B2D438,
        &&label_80B2D43C,
        &&label_80B2D440,
        &&label_80B2D444,
        &&label_80B2D448,
        &&label_80B2D44C,
        &&label_80B2D450,
        &&label_80B2D454,
        &&label_80B2D458,
        &&label_80B2D45C,
        &&label_80B2D460,
        &&label_80B2D464,
        &&label_80B2D468,
        &&label_80B2D46C,
        &&label_80B2D470,
        &&label_80B2D474,
        &&label_80B2D478,
        &&label_80B2D47C,
        &&label_80B2D480,
        &&label_80B2D484,
        &&label_80B2D488,
        &&label_80B2D48C,
        &&label_80B2D490,
        &&label_80B2D494,
        &&label_80B2D498,
        &&label_80B2D49C,
        &&label_80B2D4A0,
        &&label_80B2D4A4,
        &&label_80B2D4A8,
        &&label_80B2D4AC,
        &&label_80B2D4B0,
        &&label_80B2D4B4,
        &&label_80B2D4B8,
        &&label_80B2D4BC,
        &&label_80B2D4C0,
        &&label_80B2D4C4,
        &&label_80B2D4C8,
        &&label_80B2D4CC,
        &&label_80B2D4D0,
        &&label_80B2D4D4,
        &&label_80B2D4D8,
        &&label_80B2D4DC,
        &&label_80B2D4E0,
        &&label_80B2D4E4,
        &&label_80B2D4E8,
        &&label_80B2D4EC,
        &&label_80B2D4F0,
        &&label_80B2D4F4,
        &&label_80B2D4F8,
        &&label_80B2D4FC,
        &&label_80B2D500,
        &&label_80B2D504,
        &&label_80B2D508,
        &&label_80B2D50C,
        &&label_80B2D510,
        &&label_80B2D514,
        &&label_80B2D518,
        &&label_80B2D51C,
        &&label_80B2D520,
        &&label_80B2D524,
        &&label_80B2D528,
        &&label_80B2D52C,
        &&label_80B2D530,
        &&label_80B2D534,
        &&label_80B2D538,
        &&label_80B2D53C,
        &&label_80B2D540,
        &&label_80B2D544,
        &&label_80B2D548,
        &&label_80B2D54C,
        &&label_80B2D550,
        &&label_80B2D554,
        &&label_80B2D558,
        &&label_80B2D55C,
        &&label_80B2D560,
        &&label_80B2D564,
        &&label_80B2D568,
        &&label_80B2D56C,
        &&label_80B2D570,
        &&label_80B2D574,
        &&label_80B2D578,
        &&label_80B2D57C,
        &&label_80B2D580,
        &&label_80B2D584,
        &&label_80B2D588,
        &&label_80B2D58C,
        &&label_80B2D590,
        &&label_80B2D594,
        &&label_80B2D598,
        &&label_80B2D59C,
        &&label_80B2D5A0,
        &&label_80B2D5A4,
        &&label_80B2D5A8,
        &&label_80B2D5AC,
        &&label_80B2D5B0,
        &&label_80B2D5B4,
        &&label_80B2D5B8,
        &&label_80B2D5BC,
        &&label_80B2D5C0,
        &&label_80B2D5C4,
        &&label_80B2D5C8,
        &&label_80B2D5CC,
        &&label_80B2D5D0,
        &&label_80B2D5D4,
        &&label_80B2D5D8,
        &&label_80B2D5DC,
        &&label_80B2D5E0,
        &&label_80B2D5E4,
        &&label_80B2D5E8,
        &&label_80B2D5EC,
        &&label_80B2D5F0,
        &&label_80B2D5F4,
        &&label_80B2D5F8,
        &&label_80B2D5FC,
        &&label_80B2D600,
        &&label_80B2D604,
        &&label_80B2D608,
        &&label_80B2D60C,
        &&label_80B2D610,
        &&label_80B2D614,
        &&label_80B2D618,
        &&label_80B2D61C,
        &&label_80B2D620,
        &&label_80B2D624,
        &&label_80B2D628,
        &&label_80B2D62C,
        &&label_80B2D630,
        &&label_80B2D634,
        &&label_80B2D638,
        &&label_80B2D63C,
        &&label_80B2D640,
        &&label_80B2D644,
        &&label_80B2D648,
        &&label_80B2D64C,
        &&label_80B2D650,
        &&label_80B2D654,
        &&label_80B2D658,
        &&label_80B2D65C,
        &&label_80B2D660,
        &&label_80B2D664,
        &&label_80B2D668,
        &&label_80B2D66C,
        &&label_80B2D670,
        &&label_80B2D674,
        &&label_80B2D678,
        &&label_80B2D67C,
        &&label_80B2D680,
        &&label_80B2D684,
        &&label_80B2D688,
        &&label_80B2D68C,
        &&label_80B2D690,
        &&label_80B2D694,
        &&label_80B2D698,
        &&label_80B2D69C,
        &&label_80B2D6A0,
        &&label_80B2D6A4,
        &&label_80B2D6A8,
        &&label_80B2D6AC,
        &&label_80B2D6B0,
        &&label_80B2D6B4,
        &&label_80B2D6B8,
        &&label_80B2D6BC,
        &&label_80B2D6C0,
        &&label_80B2D6C4,
        &&label_80B2D6C8,
        &&label_80B2D6CC,
        &&label_80B2D6D0,
        &&label_80B2D6D4,
        &&label_80B2D6D8,
        &&label_80B2D6DC,
        &&label_80B2D6E0,
        &&label_80B2D6E4,
        &&label_80B2D6E8,
        &&label_80B2D6EC,
        &&label_80B2D6F0,
        &&label_80B2D6F4,
        &&label_80B2D6F8,
        &&label_80B2D6FC,
        &&label_80B2D700,
        &&label_80B2D704,
        &&label_80B2D708,
        &&label_80B2D70C,
        &&label_80B2D710,
        &&label_80B2D714,
        &&label_80B2D718,
        &&label_80B2D71C,
        &&label_80B2D720,
        &&label_80B2D724,
        &&label_80B2D728,
        &&label_80B2D72C,
        &&label_80B2D730,
        &&label_80B2D734,
        &&label_80B2D738,
        &&label_80B2D73C,
        &&label_80B2D740,
        &&label_80B2D744,
        &&label_80B2D748,
        &&label_80B2D74C,
        &&label_80B2D750,
        &&label_80B2D754,
        &&label_80B2D758,
        &&label_80B2D75C,
        &&label_80B2D760,
        &&label_80B2D764,
        &&label_80B2D768,
        &&label_80B2D76C,
        &&label_80B2D770,
        &&label_80B2D774,
        &&label_80B2D778,
        &&label_80B2D77C,
        &&label_80B2D780,
        &&label_80B2D784,
        &&label_80B2D788,
        &&label_80B2D78C,
        &&label_80B2D790,
        &&label_80B2D794,
        &&label_80B2D798,
        &&label_80B2D79C,
        &&label_80B2D7A0,
        &&label_80B2D7A4,
        &&label_80B2D7A8,
        &&label_80B2D7AC,
        &&label_80B2D7B0,
        &&label_80B2D7B4,
        &&label_80B2D7B8,
        &&label_80B2D7BC,
        &&label_80B2D7C0,
        &&label_80B2D7C4,
        &&label_80B2D7C8,
        &&label_80B2D7CC,
        &&label_80B2D7D0,
        &&label_80B2D7D4,
        &&label_80B2D7D8,
        &&label_80B2D7DC,
        &&label_80B2D7E0,
        &&label_80B2D7E4,
        &&label_80B2D7E8,
        &&label_80B2D7EC,
        &&label_80B2D7F0,
        &&label_80B2D7F4,
        &&label_80B2D7F8,
        &&label_80B2D7FC,
        &&label_80B2D800,
        &&label_80B2D804,
        &&label_80B2D808,
        &&label_80B2D80C,
        &&label_80B2D810,
        &&label_80B2D814,
        &&label_80B2D818,
        &&label_80B2D81C,
        &&label_80B2D820,
        &&label_80B2D824,
        &&label_80B2D828,
        &&label_80B2D82C,
        &&label_80B2D830,
        &&label_80B2D834,
        &&label_80B2D838,
        &&label_80B2D83C,
        &&label_80B2D840,
        &&label_80B2D844,
        &&label_80B2D848,
        &&label_80B2D84C,
        &&label_80B2D850,
        &&label_80B2D854,
        &&label_80B2D858,
        &&label_80B2D85C,
        &&label_80B2D860,
        &&label_80B2D864,
        &&label_80B2D868,
        &&label_80B2D86C,
        &&label_80B2D870,
        &&label_80B2D874,
        &&label_80B2D878,
        &&label_80B2D87C,
        &&label_80B2D880,
        &&label_80B2D884,
        &&label_80B2D888,
        &&label_80B2D88C,
        &&label_80B2D890,
        &&label_80B2D894,
        &&label_80B2D898,
        &&label_80B2D89C,
        &&label_80B2D8A0,
        &&label_80B2D8A4,
        &&label_80B2D8A8,
        &&label_80B2D8AC,
        &&label_80B2D8B0,
        &&label_80B2D8B4,
        &&label_80B2D8B8,
        &&label_80B2D8BC,
        &&label_80B2D8C0,
        &&label_80B2D8C4,
        &&label_80B2D8C8,
        &&label_80B2D8CC,
        &&label_80B2D8D0,
        &&label_80B2D8D4,
        &&label_80B2D8D8,
        &&label_80B2D8DC,
        &&label_80B2D8E0,
        &&label_80B2D8E4,
        &&label_80B2D8E8,
        &&label_80B2D8EC,
        &&label_80B2D8F0,
        &&label_80B2D8F4,
        &&label_80B2D8F8,
        &&label_80B2D8FC,
        &&label_80B2D900,
        &&label_80B2D904,
        &&label_80B2D908,
        &&label_80B2D90C,
        &&label_80B2D910,
        &&label_80B2D914,
        &&label_80B2D918,
        &&label_80B2D91C,
        &&label_80B2D920,
        &&label_80B2D924,
        &&label_80B2D928,
        &&label_80B2D92C,
        &&label_80B2D930,
        &&label_80B2D934,
        &&label_80B2D938,
        &&label_80B2D93C,
        &&label_80B2D940,
        &&label_80B2D944,
        &&label_80B2D948,
        &&label_80B2D94C,
        &&label_80B2D950,
        &&label_80B2D954,
        &&label_80B2D958,
        &&label_80B2D95C,
        &&label_80B2D960,
        &&label_80B2D964,
        &&label_80B2D968,
        &&label_80B2D96C,
        &&label_80B2D970,
        &&label_80B2D974,
        &&label_80B2D978,
        &&label_80B2D97C,
        &&label_80B2D980,
        &&label_80B2D984,
        &&label_80B2D988,
        &&label_80B2D98C,
        &&label_80B2D990,
        &&label_80B2D994,
        &&label_80B2D998,
        &&label_80B2D99C,
        &&label_80B2D9A0,
        &&label_80B2D9A4,
        &&label_80B2D9A8,
        &&label_80B2D9AC,
        &&label_80B2D9B0,
        &&label_80B2D9B4,
        &&label_80B2D9B8,
        &&label_80B2D9BC,
        &&label_80B2D9C0,
        &&label_80B2D9C4,
        &&label_80B2D9C8,
        &&label_80B2D9CC,
        &&label_80B2D9D0,
        &&label_80B2D9D4,
        &&label_80B2D9D8,
        &&label_80B2D9DC,
        &&label_80B2D9E0,
        &&label_80B2D9E4,
        &&label_80B2D9E8,
        &&label_80B2D9EC,
        &&label_80B2D9F0,
        &&label_80B2D9F4,
        &&label_80B2D9F8,
        &&label_80B2D9FC,
        &&label_80B2DA00,
        &&label_80B2DA04,
        &&label_80B2DA08,
        &&label_80B2DA0C,
        &&label_80B2DA10,
        &&label_80B2DA14,
        &&label_80B2DA18,
        &&label_80B2DA1C,
        &&label_80B2DA20,
        &&label_80B2DA24,
        &&label_80B2DA28,
        &&label_80B2DA2C,
        &&label_80B2DA30,
        &&label_80B2DA34,
        &&label_80B2DA38,
        &&label_80B2DA3C,
        &&label_80B2DA40,
        &&label_80B2DA44,
        &&label_80B2DA48,
        &&label_80B2DA4C,
        &&label_80B2DA50,
        &&label_80B2DA54,
        &&label_80B2DA58,
        &&label_80B2DA5C,
        &&label_80B2DA60,
        &&label_80B2DA64,
        &&label_80B2DA68,
        &&label_80B2DA6C,
        &&label_80B2DA70,
        &&label_80B2DA74,
        &&label_80B2DA78,
        &&label_80B2DA7C,
        &&label_80B2DA80,
        &&label_80B2DA84,
        &&label_80B2DA88,
        &&label_80B2DA8C,
        &&label_80B2DA90,
        &&label_80B2DA94,
        &&label_80B2DA98,
        &&label_80B2DA9C,
        &&label_80B2DAA0,
        &&label_80B2DAA4,
        &&label_80B2DAA8,
        &&label_80B2DAAC,
        &&label_80B2DAB0,
        &&label_80B2DAB4,
        &&label_80B2DAB8,
        &&label_80B2DABC,
        &&label_80B2DAC0,
        &&label_80B2DAC4,
        &&label_80B2DAC8,
        &&label_80B2DACC,
        &&label_80B2DAD0,
        &&label_80B2DAD4,
        &&label_80B2DAD8,
        &&label_80B2DADC,
        &&label_80B2DAE0,
        &&label_80B2DAE4,
        &&label_80B2DAE8,
        &&label_80B2DAEC,
        &&label_80B2DAF0,
        &&label_80B2DAF4,
        &&label_80B2DAF8,
        &&label_80B2DAFC,
        &&label_80B2DB00,
        &&label_80B2DB04,
        &&label_80B2DB08,
        &&label_80B2DB0C,
        &&label_80B2DB10,
        &&label_80B2DB14,
        &&label_80B2DB18,
        &&label_80B2DB1C,
        &&label_80B2DB20,
        &&label_80B2DB24,
        &&label_80B2DB28,
        &&label_80B2DB2C,
        &&label_80B2DB30,
        &&label_80B2DB34,
        &&label_80B2DB38,
        &&label_80B2DB3C,
        &&label_80B2DB40,
        &&label_80B2DB44,
        &&label_80B2DB48,
        &&label_80B2DB4C,
        &&label_80B2DB50,
        &&label_80B2DB54,
        &&label_80B2DB58,
        &&label_80B2DB5C,
        &&label_80B2DB60,
        &&label_80B2DB64,
        &&label_80B2DB68,
        &&label_80B2DB6C,
        &&label_80B2DB70,
        &&label_80B2DB74,
        &&label_80B2DB78,
        &&label_80B2DB7C,
        &&label_80B2DB80,
        &&label_80B2DB84,
        &&label_80B2DB88,
        &&label_80B2DB8C,
        &&label_80B2DB90,
        &&label_80B2DB94,
        &&label_80B2DB98,
        &&label_80B2DB9C,
        &&label_80B2DBA0,
        &&label_80B2DBA4,
        &&label_80B2DBA8,
        &&label_80B2DBAC,
        &&label_80B2DBB0,
        &&label_80B2DBB4,
        &&label_80B2DBB8,
        &&label_80B2DBBC,
        &&label_80B2DBC0,
        &&label_80B2DBC4,
        &&label_80B2DBC8,
        &&label_80B2DBCC,
        &&label_80B2DBD0,
        &&label_80B2DBD4,
        &&label_80B2DBD8,
        &&label_80B2DBDC,
        &&label_80B2DBE0,
        &&label_80B2DBE4,
        &&label_80B2DBE8,
        &&label_80B2DBEC,
        &&label_80B2DBF0,
        &&label_80B2DBF4,
        &&label_80B2DBF8,
        &&label_80B2DBFC,
        &&label_80B2DC00,
        &&label_80B2DC04,
        &&label_80B2DC08,
        &&label_80B2DC0C,
        &&label_80B2DC10,
        &&label_80B2DC14,
        &&label_80B2DC18,
        &&label_80B2DC1C,
        &&label_80B2DC20,
        &&label_80B2DC24,
        &&label_80B2DC28,
        &&label_80B2DC2C,
        &&label_80B2DC30,
        &&label_80B2DC34,
        &&label_80B2DC38,
        &&label_80B2DC3C,
        &&label_80B2DC40,
        &&label_80B2DC44,
        &&label_80B2DC48,
        &&label_80B2DC4C,
        &&label_80B2DC50,
        &&label_80B2DC54,
        &&label_80B2DC58,
        &&label_80B2DC5C,
        &&label_80B2DC60,
        &&label_80B2DC64,
        &&label_80B2DC68,
        &&label_80B2DC6C,
        &&label_80B2DC70,
        &&label_80B2DC74,
        &&label_80B2DC78,
        &&label_80B2DC7C,
        &&label_80B2DC80,
        &&label_80B2DC84,
        &&label_80B2DC88,
        &&label_80B2DC8C,
        &&label_80B2DC90,
        &&label_80B2DC94,
        &&label_80B2DC98,
        &&label_80B2DC9C,
        &&label_80B2DCA0,
        &&label_80B2DCA4,
        &&label_80B2DCA8,
        &&label_80B2DCAC,
        &&label_80B2DCB0,
        &&label_80B2DCB4,
        &&label_80B2DCB8,
        &&label_80B2DCBC,
        &&label_80B2DCC0,
        &&label_80B2DCC4,
        &&label_80B2DCC8,
        &&label_80B2DCCC,
        &&label_80B2DCD0,
        &&label_80B2DCD4,
        &&label_80B2DCD8,
        &&label_80B2DCDC,
        &&label_80B2DCE0,
        &&label_80B2DCE4,
        &&label_80B2DCE8,
        &&label_80B2DCEC,
        &&label_80B2DCF0,
        &&label_80B2DCF4,
        &&label_80B2DCF8,
        &&label_80B2DCFC,
        &&label_80B2DD00,
        &&label_80B2DD04,
        &&label_80B2DD08,
        &&label_80B2DD0C,
        &&label_80B2DD10,
        &&label_80B2DD14,
        &&label_80B2DD18,
        &&label_80B2DD1C,
        &&label_80B2DD20,
        &&label_80B2DD24,
        &&label_80B2DD28,
        &&label_80B2DD2C,
        &&label_80B2DD30,
        &&label_80B2DD34,
        &&label_80B2DD38,
        &&label_80B2DD3C,
        &&label_80B2DD40,
        &&label_80B2DD44,
        &&label_80B2DD48,
        &&label_80B2DD4C,
        &&label_80B2DD50,
        &&label_80B2DD54,
        &&label_80B2DD58,
        &&label_80B2DD5C,
        &&label_80B2DD60,
        &&label_80B2DD64,
        &&label_80B2DD68,
        &&label_80B2DD6C,
        &&label_80B2DD70,
        &&label_80B2DD74,
        &&label_80B2DD78,
        &&label_80B2DD7C,
        &&label_80B2DD80,
        &&label_80B2DD84,
        &&label_80B2DD88,
        &&label_80B2DD8C,
        &&label_80B2DD90,
        &&label_80B2DD94,
        &&label_80B2DD98,
        &&label_80B2DD9C,
        &&label_80B2DDA0,
        &&label_80B2DDA4,
        &&label_80B2DDA8,
        &&label_80B2DDAC,
        &&label_80B2DDB0,
        &&label_80B2DDB4,
        &&label_80B2DDB8,
        &&label_80B2DDBC,
        &&label_80B2DDC0,
        &&label_80B2DDC4,
        &&label_80B2DDC8,
        &&label_80B2DDCC,
        &&label_80B2DDD0,
        &&label_80B2DDD4,
        &&label_80B2DDD8,
        &&label_80B2DDDC,
        &&label_80B2DDE0,
        &&label_80B2DDE4,
        &&label_80B2DDE8,
        &&label_80B2DDEC,
        &&label_80B2DDF0,
        &&label_80B2DDF4,
        &&label_80B2DDF8,
        &&label_80B2DDFC,
        &&label_80B2DE00,
        &&label_80B2DE04,
        &&label_80B2DE08,
        &&label_80B2DE0C,
        &&label_80B2DE10,
        &&label_80B2DE14,
        &&label_80B2DE18,
        &&label_80B2DE1C,
        &&label_80B2DE20,
        &&label_80B2DE24,
        &&label_80B2DE28,
        &&label_80B2DE2C,
        &&label_80B2DE30,
        &&label_80B2DE34,
        &&label_80B2DE38,
        &&label_80B2DE3C,
        &&label_80B2DE40,
        &&label_80B2DE44,
        &&label_80B2DE48,
        &&label_80B2DE4C,
        &&label_80B2DE50,
        &&label_80B2DE54,
        &&label_80B2DE58,
        &&label_80B2DE5C,
        &&label_80B2DE60,
        &&label_80B2DE64,
        &&label_80B2DE68,
        &&label_80B2DE6C,
        &&label_80B2DE70,
        &&label_80B2DE74,
        &&label_80B2DE78,
        &&label_80B2DE7C,
        &&label_80B2DE80,
        &&label_80B2DE84,
        &&label_80B2DE88,
        &&label_80B2DE8C,
        &&label_80B2DE90,
        &&label_80B2DE94,
        &&label_80B2DE98,
        &&label_80B2DE9C,
        &&label_80B2DEA0,
        &&label_80B2DEA4,
        &&label_80B2DEA8,
        &&label_80B2DEAC,
        &&label_80B2DEB0,
        &&label_80B2DEB4,
        &&label_80B2DEB8,
        &&label_80B2DEBC,
        &&label_80B2DEC0,
        &&label_80B2DEC4,
        &&label_80B2DEC8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B2D100u && pc <= 0x80B2DEC8u && ((pc - 0x80B2D100u) & 3u) == 0u)
            goto *pc_table_80B2D100[(pc - 0x80B2D100u) >> 2];
    }
    return;
label_80B2D100:
    ctx->pc = 0x80B2D100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B2D100: stwu     r1, -16(r1)
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
label_80B2D104:
    ctx->pc = 0x80B2D104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D104: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2D108:
    ctx->pc = 0x80B2D108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D108u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D108: stw     r0, 20(r1)
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
label_80B2D10C:
    ctx->pc = 0x80B2D10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D10C: stw     r31, 12(r1)
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
label_80B2D110:
    ctx->pc = 0x80B2D110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D110u)) return;
    // 80B2D110: cmpwi   r3, 2
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

label_80B2D114:
    ctx->pc = 0x80B2D114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D114u)) return;
    // 80B2D114: bc    12, 2, 0x80B2DB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B2DB10;
        }
    }

label_80B2D118:
    ctx->pc = 0x80B2D118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D118: bc    4, 0, 0x80B2D12C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2D12C;
        }
    }

label_80B2D11C:
    ctx->pc = 0x80B2D11Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D11Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D11C: cmpwi   r3, 0
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

label_80B2D120:
    ctx->pc = 0x80B2D120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D120u)) return;
    // 80B2D120: bc    12, 2, 0x80B2DB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B2DB9C;
        }
    }

label_80B2D124:
    ctx->pc = 0x80B2D124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D124: bc    4, 0, 0x80B2D134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2D134;
        }
    }

label_80B2D128:
    ctx->pc = 0x80B2D128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D128: b       0x80B2DB9C
    {
            goto label_80B2DB9C;
    }

label_80B2D12C:
    ctx->pc = 0x80B2D12Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D12Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D12C: cmpwi   r3, 4
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

label_80B2D130:
    ctx->pc = 0x80B2D130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D130u)) return;
    // 80B2D130: b       0x80B2DB9C
    {
            goto label_80B2DB9C;
    }

label_80B2D134:
    ctx->pc = 0x80B2D134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D134: bl      0x8045DE7C
    {
            ctx->lr = 0x80B2D138u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B2D138:
    ctx->pc = 0x80B2D138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D138: bl      0x80460A60
    {
            ctx->lr = 0x80B2D13Cu;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B2D13C:
    ctx->pc = 0x80B2D13Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D13Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D13C: bl      0x80460A24
    {
            ctx->lr = 0x80B2D140u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B2D140:
    ctx->pc = 0x80B2D140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D140: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2D144:
    ctx->pc = 0x80B2D144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D144u)) return;
    // 80B2D144: addi    r3, r3, -9008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9008);

label_80B2D148:
    ctx->pc = 0x80B2D148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D148: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2D148u)) return;
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
label_80B2D14C:
    ctx->pc = 0x80B2D14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D14Cu)) return;
    // 80B2D14C: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2D150:
    ctx->pc = 0x80B2D150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D150u)) return;
    // 80B2D150: addi    r3, r3, -9004
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9004);

label_80B2D154:
    ctx->pc = 0x80B2D154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D154: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2D154u)) return;
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
label_80B2D158:
    ctx->pc = 0x80B2D158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D158u)) return;
    // 80B2D158: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B2D158u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B2D15C:
    ctx->pc = 0x80B2D15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D15Cu)) return;
    // 80B2D15C: fmr    f4, f1
    if (!ppc_fp_available_inline(ctx, 0x80B2D15Cu)) return;
    ctx->fpr[4] = ctx->fpr[1];

label_80B2D160:
    ctx->pc = 0x80B2D160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D160u)) return;
    // 80B2D160: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x80B2D160u)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80B2D164:
    ctx->pc = 0x80B2D164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D164u)) return;
    // 80B2D164: bl      0x80B2DDB4
    {
            ctx->lr = 0x80B2D168u;
            goto label_80B2DDB4;
    }

label_80B2D168:
    ctx->pc = 0x80B2D168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D168: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2D16C:
    ctx->pc = 0x80B2D16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D16Cu)) return;
    // 80B2D16C: addi    r4, r4, 8960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8960);

label_80B2D170:
    ctx->pc = 0x80B2D170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D170: stw     r3, 0(r4)
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
label_80B2D174:
    ctx->pc = 0x80B2D174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D174u)) return;
    // 80B2D174: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D178:
    ctx->pc = 0x80B2D178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D178u)) return;
    // 80B2D178: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80B2D17C:
    ctx->pc = 0x80B2D17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D17Cu)) return;
    // 80B2D17C: li      r5, 10923
    ctx->gpr[5] = (u32)(s32)(10923);

label_80B2D180:
    ctx->pc = 0x80B2D180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D180u)) return;
    // 80B2D180: bl      0x8045C0F8
    {
            ctx->lr = 0x80B2D184u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B2D184:
    ctx->pc = 0x80B2D184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D184: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D188:
    ctx->pc = 0x80B2D188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D188u)) return;
    // 80B2D188: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D18Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D18C:
    ctx->pc = 0x80B2D18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D18C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D190:
    ctx->pc = 0x80B2D190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D190u)) return;
    // 80B2D190: bl      0x8045F220
    {
            ctx->lr = 0x80B2D194u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D194:
    ctx->pc = 0x80B2D194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D194: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D198:
    ctx->pc = 0x80B2D198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D198u)) return;
    // 80B2D198: addi    r4, r4, -9000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9000);

label_80B2D19C:
    ctx->pc = 0x80B2D19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D19C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D19Cu)) return;
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
label_80B2D1A0:
    ctx->pc = 0x80B2D1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1A0u)) return;
    // 80B2D1A0: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D1A4:
    ctx->pc = 0x80B2D1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1A4u)) return;
    // 80B2D1A4: addi    r4, r4, -8996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8996);

label_80B2D1A8:
    ctx->pc = 0x80B2D1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D1A8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D1A8u)) return;
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
label_80B2D1AC:
    ctx->pc = 0x80B2D1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1ACu)) return;
    // 80B2D1AC: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D1B0:
    ctx->pc = 0x80B2D1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1B0u)) return;
    // 80B2D1B0: addi    r4, r4, -8992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8992);

label_80B2D1B4:
    ctx->pc = 0x80B2D1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D1B4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D1B4u)) return;
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
label_80B2D1B8:
    ctx->pc = 0x80B2D1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1B8u)) return;
    // 80B2D1B8: bl      0x8045EF2C
    {
            ctx->lr = 0x80B2D1BCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B2D1BC:
    ctx->pc = 0x80B2D1BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D1BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D1C0:
    ctx->pc = 0x80B2D1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1C0u)) return;
    // 80B2D1C0: bl      0x8045F220
    {
            ctx->lr = 0x80B2D1C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D1C4:
    ctx->pc = 0x80B2D1C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2D1C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B2D1C8:
    ctx->pc = 0x80B2D1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1C8u)) return;
    // 80B2D1C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B2D1CC:
    ctx->pc = 0x80B2D1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1CCu)) return;
    // 80B2D1CC: addi    r5, r5, -1498
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1498);

label_80B2D1D0:
    ctx->pc = 0x80B2D1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1D0u)) return;
    // 80B2D1D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2D1D4:
    ctx->pc = 0x80B2D1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1D4u)) return;
    // 80B2D1D4: bl      0x8045EEA8
    {
            ctx->lr = 0x80B2D1D8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B2D1D8:
    ctx->pc = 0x80B2D1D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D1D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D1DC:
    ctx->pc = 0x80B2D1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1DCu)) return;
    // 80B2D1DC: bl      0x8045EC10
    {
            ctx->lr = 0x80B2D1E0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B2D1E0:
    ctx->pc = 0x80B2D1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D1E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D1E4:
    ctx->pc = 0x80B2D1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1E4u)) return;
    // 80B2D1E4: bl      0x8045F220
    {
            ctx->lr = 0x80B2D1E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D1E8:
    ctx->pc = 0x80B2D1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D1E8: bl      0x8045EB8C
    {
            ctx->lr = 0x80B2D1ECu;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B2D1EC:
    ctx->pc = 0x80B2D1ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D1EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D1F0:
    ctx->pc = 0x80B2D1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1F0u)) return;
    // 80B2D1F0: bl      0x8045F220
    {
            ctx->lr = 0x80B2D1F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D1F4:
    ctx->pc = 0x80B2D1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D1F4: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D1F8:
    ctx->pc = 0x80B2D1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1F8u)) return;
    // 80B2D1F8: addi    r4, r4, 11804
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11804);

label_80B2D1FC:
    ctx->pc = 0x80B2D1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D1FCu)) return;
    // 80B2D1FC: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B2D200:
    ctx->pc = 0x80B2D200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D200u)) return;
    // 80B2D200: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B2D204:
    ctx->pc = 0x80B2D204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D204u)) return;
    // 80B2D204: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D208:
    ctx->pc = 0x80B2D208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D208u)) return;
    // 80B2D208: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D20C:
    ctx->pc = 0x80B2D20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D20C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D20Cu)) return;
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
label_80B2D210:
    ctx->pc = 0x80B2D210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D210u)) return;
    // 80B2D210: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2D214:
    ctx->pc = 0x80B2D214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D214u)) return;
    // 80B2D214: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D218:
    ctx->pc = 0x80B2D218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D218u)) return;
    // 80B2D218: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D21Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D21C:
    ctx->pc = 0x80B2D21Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D21Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D21C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D220:
    ctx->pc = 0x80B2D220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D220u)) return;
    // 80B2D220: bl      0x8045F220
    {
            ctx->lr = 0x80B2D224u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D224:
    ctx->pc = 0x80B2D224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D224: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D228:
    ctx->pc = 0x80B2D228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D228u)) return;
    // 80B2D228: addi    r4, r4, -7428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7428);

label_80B2D22C:
    ctx->pc = 0x80B2D22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D22Cu)) return;
    // 80B2D22C: bl      0x8045C060
    {
            ctx->lr = 0x80B2D230u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D230:
    ctx->pc = 0x80B2D230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80B2D230: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D234:
    ctx->pc = 0x80B2D234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D234u)) return;
    // 80B2D234: lis     r4, -32676
    ctx->gpr[4] = ((u32)(s32)(-32676) << 16);

label_80B2D238:
    ctx->pc = 0x80B2D238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D238u)) return;
    // 80B2D238: addi    r4, r4, -5088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5088);

label_80B2D23C:
    ctx->pc = 0x80B2D23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D23Cu)) return;
    // 80B2D23C: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D240:
    ctx->pc = 0x80B2D240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D240u)) return;
    // 80B2D240: addi    r5, r5, -8988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8988);

label_80B2D244:
    ctx->pc = 0x80B2D244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2D244: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D244u)) return;
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
label_80B2D248:
    ctx->pc = 0x80B2D248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D248u)) return;
    // 80B2D248: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D24C:
    ctx->pc = 0x80B2D24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D24Cu)) return;
    // 80B2D24C: addi    r5, r5, -8996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8996);

label_80B2D250:
    ctx->pc = 0x80B2D250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B2D250: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D250u)) return;
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
label_80B2D254:
    ctx->pc = 0x80B2D254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D254u)) return;
    // 80B2D254: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D258:
    ctx->pc = 0x80B2D258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D258u)) return;
    // 80B2D258: addi    r5, r5, -8984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8984);

label_80B2D25C:
    ctx->pc = 0x80B2D25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B2D25C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D25Cu)) return;
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
label_80B2D260:
    ctx->pc = 0x80B2D260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D260u)) return;
    // 80B2D260: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B2D264:
    ctx->pc = 0x80B2D264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D264u)) return;
    // 80B2D264: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B2D268:
    ctx->pc = 0x80B2D268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D268u)) return;
    // 80B2D268: addi    r6, r6, -3584
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3584);

label_80B2D26C:
    ctx->pc = 0x80B2D26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D26Cu)) return;
    // 80B2D26C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D270:
    ctx->pc = 0x80B2D270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D270u)) return;
    // 80B2D270: bl      0x8045ED84
    {
            ctx->lr = 0x80B2D274u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80B2D274:
    ctx->pc = 0x80B2D274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D274: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D278:
    ctx->pc = 0x80B2D278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D278u)) return;
    // 80B2D278: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D27Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D27C:
    ctx->pc = 0x80B2D27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D27C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D280:
    ctx->pc = 0x80B2D280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D280u)) return;
    // 80B2D280: bl      0x8045F220
    {
            ctx->lr = 0x80B2D284u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D284:
    ctx->pc = 0x80B2D284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D284: bl      0x8045EB8C
    {
            ctx->lr = 0x80B2D288u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B2D288:
    ctx->pc = 0x80B2D288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D288: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D28C:
    ctx->pc = 0x80B2D28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D28Cu)) return;
    // 80B2D28C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D290u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D290:
    ctx->pc = 0x80B2D290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D290: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D294:
    ctx->pc = 0x80B2D294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D294u)) return;
    // 80B2D294: addi    r4, r4, 31288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31288);

label_80B2D298:
    ctx->pc = 0x80B2D298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D298u)) return;
    // 80B2D298: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2D29C:
    ctx->pc = 0x80B2D29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D29Cu)) return;
    // 80B2D29C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2D2A0:
    ctx->pc = 0x80B2D2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2A0u)) return;
    // 80B2D2A0: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D2A4:
    ctx->pc = 0x80B2D2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2A4u)) return;
    // 80B2D2A4: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D2A8:
    ctx->pc = 0x80B2D2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D2A8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D2A8u)) return;
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
label_80B2D2AC:
    ctx->pc = 0x80B2D2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2ACu)) return;
    // 80B2D2AC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2D2B0:
    ctx->pc = 0x80B2D2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2B0u)) return;
    // 80B2D2B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D2B4:
    ctx->pc = 0x80B2D2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2B4u)) return;
    // 80B2D2B4: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D2B8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D2B8:
    ctx->pc = 0x80B2D2B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D2B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D2B8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D2BC:
    ctx->pc = 0x80B2D2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2BCu)) return;
    // 80B2D2BC: bl      0x8045F220
    {
            ctx->lr = 0x80B2D2C0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D2C0:
    ctx->pc = 0x80B2D2C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D2C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D2C0: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D2C4:
    ctx->pc = 0x80B2D2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2C4u)) return;
    // 80B2D2C4: addi    r4, r4, -7428
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7428);

label_80B2D2C8:
    ctx->pc = 0x80B2D2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2C8u)) return;
    // 80B2D2C8: bl      0x8045C060
    {
            ctx->lr = 0x80B2D2CCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D2CC:
    ctx->pc = 0x80B2D2CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D2CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D2CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D2D0:
    ctx->pc = 0x80B2D2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2D0u)) return;
    // 80B2D2D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B2D2D4:
    ctx->pc = 0x80B2D2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2D4u)) return;
    // 80B2D2D4: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D2D8:
    ctx->pc = 0x80B2D2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2D8u)) return;
    // 80B2D2D8: addi    r5, r5, -8980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8980);

label_80B2D2DC:
    ctx->pc = 0x80B2D2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D2DC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D2DCu)) return;
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
label_80B2D2E0:
    ctx->pc = 0x80B2D2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2E0u)) return;
    // 80B2D2E0: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D2E4:
    ctx->pc = 0x80B2D2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2E4u)) return;
    // 80B2D2E4: addi    r5, r5, -8976
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8976);

label_80B2D2E8:
    ctx->pc = 0x80B2D2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D2E8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D2E8u)) return;
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
label_80B2D2EC:
    ctx->pc = 0x80B2D2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2ECu)) return;
    // 80B2D2EC: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D2F0:
    ctx->pc = 0x80B2D2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2F0u)) return;
    // 80B2D2F0: addi    r5, r5, -8972
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8972);

label_80B2D2F4:
    ctx->pc = 0x80B2D2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D2F4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D2F4u)) return;
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
label_80B2D2F8:
    ctx->pc = 0x80B2D2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D2F8u)) return;
    // 80B2D2F8: bl      0x8045C750
    {
            ctx->lr = 0x80B2D2FCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D2FC:
    ctx->pc = 0x80B2D2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D2FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D300:
    ctx->pc = 0x80B2D300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D300u)) return;
    // 80B2D300: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B2D304:
    ctx->pc = 0x80B2D304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D304u)) return;
    // 80B2D304: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2D308:
    ctx->pc = 0x80B2D308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D308u)) return;
    // 80B2D308: addi    r5, r7, -6895
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-6895);

label_80B2D30C:
    ctx->pc = 0x80B2D30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D30Cu)) return;
    // 80B2D30C: addi    r6, r7, -4864
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-4864);

label_80B2D310:
    ctx->pc = 0x80B2D310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D310u)) return;
    // 80B2D310: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2D314:
    ctx->pc = 0x80B2D314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D314u)) return;
    // 80B2D314: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2D318u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2D318:
    ctx->pc = 0x80B2D318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D318: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B2D31C:
    ctx->pc = 0x80B2D31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D31Cu)) return;
    // 80B2D31C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D320u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D320:
    ctx->pc = 0x80B2D320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2D320: lis     r3, -27581
    ctx->gpr[3] = ((u32)(s32)(-27581) << 16);

label_80B2D324:
    ctx->pc = 0x80B2D324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D324u)) return;
    // 80B2D324: addi    r3, r3, 8960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8960);

label_80B2D328:
    ctx->pc = 0x80B2D328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D328: lwz     r3, 0(r3)
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
label_80B2D32C:
    ctx->pc = 0x80B2D32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D32Cu)) return;
    // 80B2D32C: cmplwi  r3, 0x0000
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

label_80B2D330:
    ctx->pc = 0x80B2D330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D330u)) return;
    // 80B2D330: bc    12, 2, 0x80B2D344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B2D344;
        }
    }

label_80B2D334:
    ctx->pc = 0x80B2D334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B2D334: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D338:
    ctx->pc = 0x80B2D338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D338u)) return;
    // 80B2D338: addi    r4, r4, -8968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8968);

label_80B2D33C:
    ctx->pc = 0x80B2D33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D33C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D33Cu)) return;
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
label_80B2D340:
    ctx->pc = 0x80B2D340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D340u)) return;
    // 80B2D340: bl      0x80B2DE70
    {
            ctx->lr = 0x80B2D344u;
            goto label_80B2DE70;
    }

label_80B2D344:
    ctx->pc = 0x80B2D344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D348:
    ctx->pc = 0x80B2D348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D348u)) return;
    // 80B2D348: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B2D34C:
    ctx->pc = 0x80B2D34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D34Cu)) return;
    // 80B2D34C: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D350:
    ctx->pc = 0x80B2D350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D350u)) return;
    // 80B2D350: addi    r5, r5, -8964
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8964);

label_80B2D354:
    ctx->pc = 0x80B2D354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D354: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D354u)) return;
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
label_80B2D358:
    ctx->pc = 0x80B2D358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D358u)) return;
    // 80B2D358: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D35C:
    ctx->pc = 0x80B2D35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D35Cu)) return;
    // 80B2D35C: addi    r5, r5, -8960
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8960);

label_80B2D360:
    ctx->pc = 0x80B2D360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D360: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D360u)) return;
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
label_80B2D364:
    ctx->pc = 0x80B2D364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D364u)) return;
    // 80B2D364: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D368:
    ctx->pc = 0x80B2D368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D368u)) return;
    // 80B2D368: addi    r5, r5, -8956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8956);

label_80B2D36C:
    ctx->pc = 0x80B2D36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D36Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D36C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D36Cu)) return;
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
label_80B2D370:
    ctx->pc = 0x80B2D370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D370u)) return;
    // 80B2D370: bl      0x8045C750
    {
            ctx->lr = 0x80B2D374u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D374:
    ctx->pc = 0x80B2D374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B2D374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D378:
    ctx->pc = 0x80B2D378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D378u)) return;
    // 80B2D378: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B2D37C:
    ctx->pc = 0x80B2D37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D37Cu)) return;
    // 80B2D37C: li      r5, 9102
    ctx->gpr[5] = (u32)(s32)(9102);

label_80B2D380:
    ctx->pc = 0x80B2D380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D380u)) return;
    // 80B2D380: bl      0x8045C0F8
    {
            ctx->lr = 0x80B2D384u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80B2D384:
    ctx->pc = 0x80B2D384u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D384u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D384: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B2D388:
    ctx->pc = 0x80B2D388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D388u)) return;
    // 80B2D388: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D38Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D38C:
    ctx->pc = 0x80B2D38Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D38Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D38C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D390:
    ctx->pc = 0x80B2D390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D390u)) return;
    // 80B2D390: bl      0x8045F220
    {
            ctx->lr = 0x80B2D394u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D394:
    ctx->pc = 0x80B2D394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D394: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D398:
    ctx->pc = 0x80B2D398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D398u)) return;
    // 80B2D398: addi    r4, r4, -7408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7408);

label_80B2D39C:
    ctx->pc = 0x80B2D39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D39Cu)) return;
    // 80B2D39C: bl      0x8045C060
    {
            ctx->lr = 0x80B2D3A0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D3A0:
    ctx->pc = 0x80B2D3A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D3A0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80B2D3A4:
    ctx->pc = 0x80B2D3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3A4u)) return;
    // 80B2D3A4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D3A8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D3A8:
    ctx->pc = 0x80B2D3A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D3A8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D3AC:
    ctx->pc = 0x80B2D3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3ACu)) return;
    // 80B2D3AC: bl      0x8045F220
    {
            ctx->lr = 0x80B2D3B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D3B0:
    ctx->pc = 0x80B2D3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D3B0: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D3B4:
    ctx->pc = 0x80B2D3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3B4u)) return;
    // 80B2D3B4: addi    r4, r4, -7404
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7404);

label_80B2D3B8:
    ctx->pc = 0x80B2D3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3B8u)) return;
    // 80B2D3B8: bl      0x8045C060
    {
            ctx->lr = 0x80B2D3BCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D3BC:
    ctx->pc = 0x80B2D3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D3BC: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_80B2D3C0:
    ctx->pc = 0x80B2D3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3C0u)) return;
    // 80B2D3C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D3C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D3C4:
    ctx->pc = 0x80B2D3C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D3C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D3C8:
    ctx->pc = 0x80B2D3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3C8u)) return;
    // 80B2D3C8: bl      0x8045F220
    {
            ctx->lr = 0x80B2D3CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D3CC:
    ctx->pc = 0x80B2D3CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D3CC: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D3D0:
    ctx->pc = 0x80B2D3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3D0u)) return;
    // 80B2D3D0: addi    r4, r4, 21696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21696);

label_80B2D3D4:
    ctx->pc = 0x80B2D3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3D4u)) return;
    // 80B2D3D4: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B2D3D8:
    ctx->pc = 0x80B2D3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3D8u)) return;
    // 80B2D3D8: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B2D3DC:
    ctx->pc = 0x80B2D3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3DCu)) return;
    // 80B2D3DC: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D3E0:
    ctx->pc = 0x80B2D3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3E0u)) return;
    // 80B2D3E0: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D3E4:
    ctx->pc = 0x80B2D3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D3E4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D3E4u)) return;
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
label_80B2D3E8:
    ctx->pc = 0x80B2D3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3E8u)) return;
    // 80B2D3E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2D3EC:
    ctx->pc = 0x80B2D3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3ECu)) return;
    // 80B2D3EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D3F0:
    ctx->pc = 0x80B2D3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3F0u)) return;
    // 80B2D3F0: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D3F4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D3F4:
    ctx->pc = 0x80B2D3F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D3F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D3F8:
    ctx->pc = 0x80B2D3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D3F8u)) return;
    // 80B2D3F8: bl      0x8045F220
    {
            ctx->lr = 0x80B2D3FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D3FC:
    ctx->pc = 0x80B2D3FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D3FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D3FC: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80B2D400:
    ctx->pc = 0x80B2D400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D400u)) return;
    // 80B2D400: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80B2D404:
    ctx->pc = 0x80B2D404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D404u)) return;
    // 80B2D404: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B2D408:
    ctx->pc = 0x80B2D408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D408u)) return;
    // 80B2D408: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B2D40C:
    ctx->pc = 0x80B2D40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D40Cu)) return;
    // 80B2D40C: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D410:
    ctx->pc = 0x80B2D410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D410u)) return;
    // 80B2D410: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D414:
    ctx->pc = 0x80B2D414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D414: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D414u)) return;
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
label_80B2D418:
    ctx->pc = 0x80B2D418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D418u)) return;
    // 80B2D418: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2D41C:
    ctx->pc = 0x80B2D41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D41Cu)) return;
    // 80B2D41C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B2D420:
    ctx->pc = 0x80B2D420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D420u)) return;
    // 80B2D420: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D424u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D424:
    ctx->pc = 0x80B2D424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D424: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_80B2D428:
    ctx->pc = 0x80B2D428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D428u)) return;
    // 80B2D428: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D42Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D42C:
    ctx->pc = 0x80B2D42Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D42Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D42C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D430:
    ctx->pc = 0x80B2D430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D430u)) return;
    // 80B2D430: bl      0x8045F220
    {
            ctx->lr = 0x80B2D434u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D434:
    ctx->pc = 0x80B2D434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D434: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2D438:
    ctx->pc = 0x80B2D438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D438u)) return;
    // 80B2D438: addi    r4, r4, -17812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17812);

label_80B2D43C:
    ctx->pc = 0x80B2D43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D43Cu)) return;
    // 80B2D43C: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2D440:
    ctx->pc = 0x80B2D440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D440u)) return;
    // 80B2D440: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2D444:
    ctx->pc = 0x80B2D444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D444u)) return;
    // 80B2D444: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D448:
    ctx->pc = 0x80B2D448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D448u)) return;
    // 80B2D448: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D44C:
    ctx->pc = 0x80B2D44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D44Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D44C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D44Cu)) return;
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
label_80B2D450:
    ctx->pc = 0x80B2D450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D450u)) return;
    // 80B2D450: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2D454:
    ctx->pc = 0x80B2D454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D454u)) return;
    // 80B2D454: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D458:
    ctx->pc = 0x80B2D458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D458u)) return;
    // 80B2D458: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D45Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D45C:
    ctx->pc = 0x80B2D45Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D45Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D45C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D460:
    ctx->pc = 0x80B2D460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D460u)) return;
    // 80B2D460: bl      0x8045F220
    {
            ctx->lr = 0x80B2D464u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D464:
    ctx->pc = 0x80B2D464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D464: bl      0x8045EB40
    {
            ctx->lr = 0x80B2D468u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80B2D468:
    ctx->pc = 0x80B2D468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D468: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D46C:
    ctx->pc = 0x80B2D46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D46Cu)) return;
    // 80B2D46C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D470u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D470:
    ctx->pc = 0x80B2D470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D470: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D474:
    ctx->pc = 0x80B2D474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D474u)) return;
    // 80B2D474: addi    r4, r4, -8952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8952);

label_80B2D478:
    ctx->pc = 0x80B2D478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D478: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D478u)) return;
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
label_80B2D47C:
    ctx->pc = 0x80B2D47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D47Cu)) return;
    // 80B2D47C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D480:
    ctx->pc = 0x80B2D480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D480u)) return;
    // 80B2D480: addi    r4, r4, -8948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8948);

label_80B2D484:
    ctx->pc = 0x80B2D484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D484u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D484: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D484u)) return;
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
label_80B2D488:
    ctx->pc = 0x80B2D488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D488u)) return;
    // 80B2D488: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D48C:
    ctx->pc = 0x80B2D48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D48Cu)) return;
    // 80B2D48C: addi    r4, r4, -8944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8944);

label_80B2D490:
    ctx->pc = 0x80B2D490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D490: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2D490u)) return;
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
label_80B2D494:
    ctx->pc = 0x80B2D494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D494u)) return;
    // 80B2D494: bl      0x8045EF2C
    {
            ctx->lr = 0x80B2D498u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B2D498:
    ctx->pc = 0x80B2D498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D498: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D49C:
    ctx->pc = 0x80B2D49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D49Cu)) return;
    // 80B2D49C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D4A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D4A0:
    ctx->pc = 0x80B2D4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D4A0: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2D4A4:
    ctx->pc = 0x80B2D4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4A4u)) return;
    // 80B2D4A4: addi    r4, r4, -7456
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7456);

label_80B2D4A8:
    ctx->pc = 0x80B2D4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4A8u)) return;
    // 80B2D4A8: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2D4AC:
    ctx->pc = 0x80B2D4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4ACu)) return;
    // 80B2D4AC: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2D4B0:
    ctx->pc = 0x80B2D4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4B0u)) return;
    // 80B2D4B0: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D4B4:
    ctx->pc = 0x80B2D4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4B4u)) return;
    // 80B2D4B4: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D4B8:
    ctx->pc = 0x80B2D4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D4B8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D4B8u)) return;
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
label_80B2D4BC:
    ctx->pc = 0x80B2D4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4BCu)) return;
    // 80B2D4BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2D4C0:
    ctx->pc = 0x80B2D4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4C0u)) return;
    // 80B2D4C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D4C4:
    ctx->pc = 0x80B2D4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4C4u)) return;
    // 80B2D4C4: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D4C8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D4C8:
    ctx->pc = 0x80B2D4C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D4C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D4C8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B2D4CC:
    ctx->pc = 0x80B2D4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4CCu)) return;
    // 80B2D4CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D4D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D4D0:
    ctx->pc = 0x80B2D4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D4D0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D4D4:
    ctx->pc = 0x80B2D4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4D4u)) return;
    // 80B2D4D4: bl      0x8045F220
    {
            ctx->lr = 0x80B2D4D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D4D8:
    ctx->pc = 0x80B2D4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D4D8: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2D4DC:
    ctx->pc = 0x80B2D4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4DCu)) return;
    // 80B2D4DC: addi    r4, r4, -2956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2956);

label_80B2D4E0:
    ctx->pc = 0x80B2D4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4E0u)) return;
    // 80B2D4E0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2D4E4:
    ctx->pc = 0x80B2D4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4E4u)) return;
    // 80B2D4E4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2D4E8:
    ctx->pc = 0x80B2D4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4E8u)) return;
    // 80B2D4E8: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D4EC:
    ctx->pc = 0x80B2D4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4ECu)) return;
    // 80B2D4EC: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2D4F0:
    ctx->pc = 0x80B2D4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D4F0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D4F0u)) return;
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
label_80B2D4F4:
    ctx->pc = 0x80B2D4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4F4u)) return;
    // 80B2D4F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2D4F8:
    ctx->pc = 0x80B2D4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4F8u)) return;
    // 80B2D4F8: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B2D4FC:
    ctx->pc = 0x80B2D4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D4FCu)) return;
    // 80B2D4FC: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D500u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D500:
    ctx->pc = 0x80B2D500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D500: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D504:
    ctx->pc = 0x80B2D504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D504u)) return;
    // 80B2D504: bl      0x8045F220
    {
            ctx->lr = 0x80B2D508u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D508:
    ctx->pc = 0x80B2D508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D508: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B2D50C:
    ctx->pc = 0x80B2D50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D50Cu)) return;
    // 80B2D50C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D510:
    ctx->pc = 0x80B2D510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D510u)) return;
    // 80B2D510: bl      0x8045F220
    {
            ctx->lr = 0x80B2D514u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D514:
    ctx->pc = 0x80B2D514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B2D514: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B2D518:
    ctx->pc = 0x80B2D518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D518u)) return;
    // 80B2D518: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D51C:
    ctx->pc = 0x80B2D51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D51Cu)) return;
    // 80B2D51C: addi    r5, r5, -8940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8940);

label_80B2D520:
    ctx->pc = 0x80B2D520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B2D520: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D520u)) return;
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
label_80B2D524:
    ctx->pc = 0x80B2D524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D524u)) return;
    // 80B2D524: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D528:
    ctx->pc = 0x80B2D528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D528u)) return;
    // 80B2D528: addi    r5, r5, -8936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8936);

label_80B2D52C:
    ctx->pc = 0x80B2D52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D52C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D52Cu)) return;
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
label_80B2D530:
    ctx->pc = 0x80B2D530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D530u)) return;
    // 80B2D530: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B2D530u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B2D534:
    ctx->pc = 0x80B2D534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D534u)) return;
    // 80B2D534: bl      0x8045E734
    {
            ctx->lr = 0x80B2D538u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B2D538:
    ctx->pc = 0x80B2D538u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D538u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D538: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D53C:
    ctx->pc = 0x80B2D53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D53Cu)) return;
    // 80B2D53C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D540u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D540:
    ctx->pc = 0x80B2D540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D540: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2D544:
    ctx->pc = 0x80B2D544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D544u)) return;
    // 80B2D544: addi    r4, r4, -984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-984);

label_80B2D548:
    ctx->pc = 0x80B2D548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D548u)) return;
    // 80B2D548: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2D54C:
    ctx->pc = 0x80B2D54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D54Cu)) return;
    // 80B2D54C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2D550:
    ctx->pc = 0x80B2D550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D550u)) return;
    // 80B2D550: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D554:
    ctx->pc = 0x80B2D554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D554u)) return;
    // 80B2D554: addi    r6, r6, -8932
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8932);

label_80B2D558:
    ctx->pc = 0x80B2D558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D558: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D558u)) return;
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
label_80B2D55C:
    ctx->pc = 0x80B2D55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D55Cu)) return;
    // 80B2D55C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2D560:
    ctx->pc = 0x80B2D560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D560u)) return;
    // 80B2D560: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2D564:
    ctx->pc = 0x80B2D564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D564u)) return;
    // 80B2D564: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D568u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D568:
    ctx->pc = 0x80B2D568u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D568u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D568: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D56C:
    ctx->pc = 0x80B2D56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D56Cu)) return;
    // 80B2D56C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B2D570:
    ctx->pc = 0x80B2D570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D570u)) return;
    // 80B2D570: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D574:
    ctx->pc = 0x80B2D574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D574u)) return;
    // 80B2D574: addi    r5, r5, -8928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8928);

label_80B2D578:
    ctx->pc = 0x80B2D578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D578u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D578: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D578u)) return;
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
label_80B2D57C:
    ctx->pc = 0x80B2D57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D57Cu)) return;
    // 80B2D57C: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D580:
    ctx->pc = 0x80B2D580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D580u)) return;
    // 80B2D580: addi    r5, r5, -8924
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8924);

label_80B2D584:
    ctx->pc = 0x80B2D584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D584: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D584u)) return;
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
label_80B2D588:
    ctx->pc = 0x80B2D588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D588u)) return;
    // 80B2D588: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D58C:
    ctx->pc = 0x80B2D58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D58Cu)) return;
    // 80B2D58C: addi    r5, r5, -8920
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8920);

label_80B2D590:
    ctx->pc = 0x80B2D590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D590: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D590u)) return;
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
label_80B2D594:
    ctx->pc = 0x80B2D594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D594u)) return;
    // 80B2D594: bl      0x8045C750
    {
            ctx->lr = 0x80B2D598u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D598:
    ctx->pc = 0x80B2D598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D598: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D59C:
    ctx->pc = 0x80B2D59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D59Cu)) return;
    // 80B2D59C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B2D5A0:
    ctx->pc = 0x80B2D5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5A0u)) return;
    // 80B2D5A0: li      r5, 2339
    ctx->gpr[5] = (u32)(s32)(2339);

label_80B2D5A4:
    ctx->pc = 0x80B2D5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5A4u)) return;
    // 80B2D5A4: li      r6, 5632
    ctx->gpr[6] = (u32)(s32)(5632);

label_80B2D5A8:
    ctx->pc = 0x80B2D5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5A8u)) return;
    // 80B2D5A8: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2D5AC:
    ctx->pc = 0x80B2D5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5ACu)) return;
    // 80B2D5AC: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2D5B0:
    ctx->pc = 0x80B2D5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5B0u)) return;
    // 80B2D5B0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2D5B4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2D5B4:
    ctx->pc = 0x80B2D5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D5B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D5B8:
    ctx->pc = 0x80B2D5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5B8u)) return;
    // 80B2D5B8: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80B2D5BC:
    ctx->pc = 0x80B2D5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5BCu)) return;
    // 80B2D5BC: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D5C0:
    ctx->pc = 0x80B2D5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5C0u)) return;
    // 80B2D5C0: addi    r5, r5, -8916
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8916);

label_80B2D5C4:
    ctx->pc = 0x80B2D5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D5C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D5C4u)) return;
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
label_80B2D5C8:
    ctx->pc = 0x80B2D5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5C8u)) return;
    // 80B2D5C8: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D5CC:
    ctx->pc = 0x80B2D5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5CCu)) return;
    // 80B2D5CC: addi    r5, r5, -8912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8912);

label_80B2D5D0:
    ctx->pc = 0x80B2D5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D5D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D5D0u)) return;
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
label_80B2D5D4:
    ctx->pc = 0x80B2D5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5D4u)) return;
    // 80B2D5D4: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D5D8:
    ctx->pc = 0x80B2D5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5D8u)) return;
    // 80B2D5D8: addi    r5, r5, -8908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8908);

label_80B2D5DC:
    ctx->pc = 0x80B2D5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D5DC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D5DCu)) return;
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
label_80B2D5E0:
    ctx->pc = 0x80B2D5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5E0u)) return;
    // 80B2D5E0: bl      0x8045C750
    {
            ctx->lr = 0x80B2D5E4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D5E4:
    ctx->pc = 0x80B2D5E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D5E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D5E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D5E8:
    ctx->pc = 0x80B2D5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5E8u)) return;
    // 80B2D5E8: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80B2D5EC:
    ctx->pc = 0x80B2D5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5ECu)) return;
    // 80B2D5EC: li      r5, 2339
    ctx->gpr[5] = (u32)(s32)(2339);

label_80B2D5F0:
    ctx->pc = 0x80B2D5F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5F0u)) return;
    // 80B2D5F0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2D5F4:
    ctx->pc = 0x80B2D5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5F4u)) return;
    // 80B2D5F4: addi    r6, r7, -6144
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-6144);

label_80B2D5F8:
    ctx->pc = 0x80B2D5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5F8u)) return;
    // 80B2D5F8: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2D5FC:
    ctx->pc = 0x80B2D5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D5FCu)) return;
    // 80B2D5FC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2D600u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2D600:
    ctx->pc = 0x80B2D600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D600: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D604:
    ctx->pc = 0x80B2D604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D604u)) return;
    // 80B2D604: bl      0x8045F220
    {
            ctx->lr = 0x80B2D608u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D608:
    ctx->pc = 0x80B2D608u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D608u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D608: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B2D60C:
    ctx->pc = 0x80B2D60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D60Cu)) return;
    // 80B2D60C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D610:
    ctx->pc = 0x80B2D610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D610u)) return;
    // 80B2D610: bl      0x8045F220
    {
            ctx->lr = 0x80B2D614u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D614:
    ctx->pc = 0x80B2D614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 80B2D614: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B2D618:
    ctx->pc = 0x80B2D618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D618u)) return;
    // 80B2D618: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D61C:
    ctx->pc = 0x80B2D61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D61Cu)) return;
    // 80B2D61C: addi    r5, r5, -8940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8940);

label_80B2D620:
    ctx->pc = 0x80B2D620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D620: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D620u)) return;
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
label_80B2D624:
    ctx->pc = 0x80B2D624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D624u)) return;
    // 80B2D624: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D628:
    ctx->pc = 0x80B2D628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D628u)) return;
    // 80B2D628: addi    r5, r5, -8936
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8936);

label_80B2D62C:
    ctx->pc = 0x80B2D62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D62Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D62C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D62Cu)) return;
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
label_80B2D630:
    ctx->pc = 0x80B2D630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D630u)) return;
    // 80B2D630: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D634:
    ctx->pc = 0x80B2D634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D634u)) return;
    // 80B2D634: addi    r5, r5, -8904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8904);

label_80B2D638:
    ctx->pc = 0x80B2D638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D638: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D638u)) return;
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
label_80B2D63C:
    ctx->pc = 0x80B2D63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D63Cu)) return;
    // 80B2D63C: bl      0x8045E734
    {
            ctx->lr = 0x80B2D640u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B2D640:
    ctx->pc = 0x80B2D640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D640: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D644:
    ctx->pc = 0x80B2D644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D644u)) return;
    // 80B2D644: bl      0x8045F220
    {
            ctx->lr = 0x80B2D648u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D648:
    ctx->pc = 0x80B2D648u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D648u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D648: bl      0x8045C034
    {
            ctx->lr = 0x80B2D64Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D64C:
    ctx->pc = 0x80B2D64Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D64Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D64C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D650:
    ctx->pc = 0x80B2D650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D650u)) return;
    // 80B2D650: bl      0x8045F220
    {
            ctx->lr = 0x80B2D654u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D654:
    ctx->pc = 0x80B2D654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D654: bl      0x8045C034
    {
            ctx->lr = 0x80B2D658u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D658:
    ctx->pc = 0x80B2D658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2D658: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D65C:
    ctx->pc = 0x80B2D65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D65Cu)) return;
    // 80B2D65C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B2D660:
    ctx->pc = 0x80B2D660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D660: lwz     r0, 0(r3)
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
label_80B2D664:
    ctx->pc = 0x80B2D664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D664u)) return;
    // 80B2D664: cmpwi   r0, 0
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

label_80B2D668:
    ctx->pc = 0x80B2D668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D668u)) return;
    // 80B2D668: bc    4, 2, 0x80B2D680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2D680;
        }
    }

label_80B2D66C:
    ctx->pc = 0x80B2D66Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D66Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D66C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D670:
    ctx->pc = 0x80B2D670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D670u)) return;
    // 80B2D670: bl      0x8045F220
    {
            ctx->lr = 0x80B2D674u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D674:
    ctx->pc = 0x80B2D674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D674: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D678:
    ctx->pc = 0x80B2D678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D678u)) return;
    // 80B2D678: addi    r4, r4, -7400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7400);

label_80B2D67C:
    ctx->pc = 0x80B2D67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D67Cu)) return;
    // 80B2D67C: bl      0x8045C060
    {
            ctx->lr = 0x80B2D680u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D680:
    ctx->pc = 0x80B2D680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2D680: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D684:
    ctx->pc = 0x80B2D684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D684u)) return;
    // 80B2D684: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B2D688:
    ctx->pc = 0x80B2D688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D688: lwz     r0, 0(r3)
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
label_80B2D68C:
    ctx->pc = 0x80B2D68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D68Cu)) return;
    // 80B2D68C: cmpwi   r0, 1
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

label_80B2D690:
    ctx->pc = 0x80B2D690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D690u)) return;
    // 80B2D690: bc    4, 2, 0x80B2D6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2D6A8;
        }
    }

label_80B2D694:
    ctx->pc = 0x80B2D694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D694: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D698:
    ctx->pc = 0x80B2D698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D698u)) return;
    // 80B2D698: bl      0x8045F220
    {
            ctx->lr = 0x80B2D69Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D69C:
    ctx->pc = 0x80B2D69Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D69Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D69C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D6A0:
    ctx->pc = 0x80B2D6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6A0u)) return;
    // 80B2D6A0: addi    r4, r4, -7392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7392);

label_80B2D6A4:
    ctx->pc = 0x80B2D6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6A4u)) return;
    // 80B2D6A4: bl      0x8045C060
    {
            ctx->lr = 0x80B2D6A8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D6A8:
    ctx->pc = 0x80B2D6A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D6A8: li      r3, 467
    ctx->gpr[3] = (u32)(s32)(467);

label_80B2D6AC:
    ctx->pc = 0x80B2D6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6ACu)) return;
    // 80B2D6AC: bl      0x8045BFA0
    {
            ctx->lr = 0x80B2D6B0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B2D6B0:
    ctx->pc = 0x80B2D6B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B2D6B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D6B4:
    ctx->pc = 0x80B2D6B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6B4u)) return;
    // 80B2D6B4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B2D6B8:
    ctx->pc = 0x80B2D6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2D6B8: lwz     r0, 0(r3)
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
label_80B2D6BC:
    ctx->pc = 0x80B2D6BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6BCu)) return;
    // 80B2D6BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B2D6C0:
    ctx->pc = 0x80B2D6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6C0u)) return;
    // 80B2D6C0: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2D6C4:
    ctx->pc = 0x80B2D6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6C4u)) return;
    // 80B2D6C4: addi    r3, r3, -7472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7472);

label_80B2D6C8:
    ctx->pc = 0x80B2D6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D6C8: lwzx    r3, r3, r0
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
label_80B2D6CC:
    ctx->pc = 0x80B2D6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D6CC: lwz     r3, 0(r3)
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
label_80B2D6D0:
    ctx->pc = 0x80B2D6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6D0u)) return;
    // 80B2D6D0: bl      0x8045F6FC
    {
            ctx->lr = 0x80B2D6D4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B2D6D4:
    ctx->pc = 0x80B2D6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D6D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D6D8:
    ctx->pc = 0x80B2D6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6D8u)) return;
    // 80B2D6D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D6DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D6DC:
    ctx->pc = 0x80B2D6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D6DC: bl      0x8045BFF4
    {
            ctx->lr = 0x80B2D6E0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B2D6E0:
    ctx->pc = 0x80B2D6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2D6E0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D6E4:
    ctx->pc = 0x80B2D6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6E4u)) return;
    // 80B2D6E4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B2D6E8:
    ctx->pc = 0x80B2D6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D6E8: lwz     r0, 0(r3)
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
label_80B2D6EC:
    ctx->pc = 0x80B2D6ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6ECu)) return;
    // 80B2D6EC: cmpwi   r0, 0
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

label_80B2D6F0:
    ctx->pc = 0x80B2D6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6F0u)) return;
    // 80B2D6F0: bc    4, 2, 0x80B2D700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2D700;
        }
    }

label_80B2D6F4:
    ctx->pc = 0x80B2D6F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D6F4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D6F8:
    ctx->pc = 0x80B2D6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D6F8u)) return;
    // 80B2D6F8: bl      0x8045F220
    {
            ctx->lr = 0x80B2D6FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D6FC:
    ctx->pc = 0x80B2D6FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D6FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D6FC: bl      0x8045C034
    {
            ctx->lr = 0x80B2D700u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D700:
    ctx->pc = 0x80B2D700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2D700: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D704:
    ctx->pc = 0x80B2D704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D704u)) return;
    // 80B2D704: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B2D708:
    ctx->pc = 0x80B2D708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D708: lwz     r0, 0(r3)
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
label_80B2D70C:
    ctx->pc = 0x80B2D70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D70Cu)) return;
    // 80B2D70C: cmpwi   r0, 1
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

label_80B2D710:
    ctx->pc = 0x80B2D710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D710u)) return;
    // 80B2D710: bc    4, 2, 0x80B2D720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2D720;
        }
    }

label_80B2D714:
    ctx->pc = 0x80B2D714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D714: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D718:
    ctx->pc = 0x80B2D718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D718u)) return;
    // 80B2D718: bl      0x8045F220
    {
            ctx->lr = 0x80B2D71Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D71C:
    ctx->pc = 0x80B2D71Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D71Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D71C: bl      0x8045C034
    {
            ctx->lr = 0x80B2D720u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D720:
    ctx->pc = 0x80B2D720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D720: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D724:
    ctx->pc = 0x80B2D724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D724u)) return;
    // 80B2D724: bl      0x8045F220
    {
            ctx->lr = 0x80B2D728u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D728:
    ctx->pc = 0x80B2D728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D728: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D72C:
    ctx->pc = 0x80B2D72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D72Cu)) return;
    // 80B2D72C: addi    r4, r4, -7384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7384);

label_80B2D730:
    ctx->pc = 0x80B2D730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D730u)) return;
    // 80B2D730: bl      0x8045C060
    {
            ctx->lr = 0x80B2D734u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D734:
    ctx->pc = 0x80B2D734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D734: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D738:
    ctx->pc = 0x80B2D738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D738u)) return;
    // 80B2D738: bl      0x8045F220
    {
            ctx->lr = 0x80B2D73Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D73C:
    ctx->pc = 0x80B2D73Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D73Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D73C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D740:
    ctx->pc = 0x80B2D740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D740u)) return;
    // 80B2D740: addi    r4, r4, 29316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29316);

label_80B2D744:
    ctx->pc = 0x80B2D744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D744u)) return;
    // 80B2D744: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B2D748:
    ctx->pc = 0x80B2D748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D748u)) return;
    // 80B2D748: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B2D74C:
    ctx->pc = 0x80B2D74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D74Cu)) return;
    // 80B2D74C: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D750:
    ctx->pc = 0x80B2D750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D750u)) return;
    // 80B2D750: addi    r6, r6, -8900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8900);

label_80B2D754:
    ctx->pc = 0x80B2D754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D754: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D754u)) return;
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
label_80B2D758:
    ctx->pc = 0x80B2D758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D758u)) return;
    // 80B2D758: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2D75C:
    ctx->pc = 0x80B2D75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D75Cu)) return;
    // 80B2D75C: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B2D760:
    ctx->pc = 0x80B2D760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D760u)) return;
    // 80B2D760: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D764u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D764:
    ctx->pc = 0x80B2D764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D764: bl      0x8045F32C
    {
            ctx->lr = 0x80B2D768u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B2D768:
    ctx->pc = 0x80B2D768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D768: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D76C:
    ctx->pc = 0x80B2D76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D76Cu)) return;
    // 80B2D76C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D770u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D770:
    ctx->pc = 0x80B2D770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D770: bl      0x8045EB40
    {
            ctx->lr = 0x80B2D774u;
            ctx->pc = 0x8045EB40u;
            return;
    }

label_80B2D774:
    ctx->pc = 0x80B2D774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D774: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D778:
    ctx->pc = 0x80B2D778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D778u)) return;
    // 80B2D778: bl      0x8045F220
    {
            ctx->lr = 0x80B2D77Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D77C:
    ctx->pc = 0x80B2D77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D77C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D780:
    ctx->pc = 0x80B2D780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D780u)) return;
    // 80B2D780: addi    r4, r4, -572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-572);

label_80B2D784:
    ctx->pc = 0x80B2D784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D784u)) return;
    // 80B2D784: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B2D788:
    ctx->pc = 0x80B2D788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D788u)) return;
    // 80B2D788: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B2D78C:
    ctx->pc = 0x80B2D78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D78Cu)) return;
    // 80B2D78C: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2D790:
    ctx->pc = 0x80B2D790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D790u)) return;
    // 80B2D790: addi    r6, r6, -8896
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8896);

label_80B2D794:
    ctx->pc = 0x80B2D794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2D794: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2D794u)) return;
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
label_80B2D798:
    ctx->pc = 0x80B2D798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D798u)) return;
    // 80B2D798: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2D79C:
    ctx->pc = 0x80B2D79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D79Cu)) return;
    // 80B2D79C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80B2D7A0:
    ctx->pc = 0x80B2D7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7A0u)) return;
    // 80B2D7A0: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2D7A4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2D7A4:
    ctx->pc = 0x80B2D7A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D7A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D7A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D7A8:
    ctx->pc = 0x80B2D7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7A8u)) return;
    // 80B2D7A8: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80B2D7AC:
    ctx->pc = 0x80B2D7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7ACu)) return;
    // 80B2D7AC: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D7B0:
    ctx->pc = 0x80B2D7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7B0u)) return;
    // 80B2D7B0: addi    r5, r5, -8892
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8892);

label_80B2D7B4:
    ctx->pc = 0x80B2D7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D7B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D7B4u)) return;
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
label_80B2D7B8:
    ctx->pc = 0x80B2D7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7B8u)) return;
    // 80B2D7B8: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D7BC:
    ctx->pc = 0x80B2D7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7BCu)) return;
    // 80B2D7BC: addi    r5, r5, -8888
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8888);

label_80B2D7C0:
    ctx->pc = 0x80B2D7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D7C0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D7C0u)) return;
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
label_80B2D7C4:
    ctx->pc = 0x80B2D7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7C4u)) return;
    // 80B2D7C4: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D7C8:
    ctx->pc = 0x80B2D7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7C8u)) return;
    // 80B2D7C8: addi    r5, r5, -8884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8884);

label_80B2D7CC:
    ctx->pc = 0x80B2D7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D7CC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D7CCu)) return;
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
label_80B2D7D0:
    ctx->pc = 0x80B2D7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7D0u)) return;
    // 80B2D7D0: bl      0x8045C750
    {
            ctx->lr = 0x80B2D7D4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D7D4:
    ctx->pc = 0x80B2D7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D7D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D7D8:
    ctx->pc = 0x80B2D7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7D8u)) return;
    // 80B2D7D8: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80B2D7DC:
    ctx->pc = 0x80B2D7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7DCu)) return;
    // 80B2D7DC: li      r5, 2339
    ctx->gpr[5] = (u32)(s32)(2339);

label_80B2D7E0:
    ctx->pc = 0x80B2D7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7E0u)) return;
    // 80B2D7E0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2D7E4:
    ctx->pc = 0x80B2D7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7E4u)) return;
    // 80B2D7E4: addi    r6, r7, -6144
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(-6144);

label_80B2D7E8:
    ctx->pc = 0x80B2D7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7E8u)) return;
    // 80B2D7E8: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2D7EC:
    ctx->pc = 0x80B2D7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7ECu)) return;
    // 80B2D7EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2D7F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2D7F0:
    ctx->pc = 0x80B2D7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D7F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D7F4:
    ctx->pc = 0x80B2D7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D7F4u)) return;
    // 80B2D7F4: bl      0x8045F220
    {
            ctx->lr = 0x80B2D7F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D7F8:
    ctx->pc = 0x80B2D7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D7F8: bl      0x8045C034
    {
            ctx->lr = 0x80B2D7FCu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D7FC:
    ctx->pc = 0x80B2D7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D7FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D800:
    ctx->pc = 0x80B2D800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D800u)) return;
    // 80B2D800: bl      0x8045F220
    {
            ctx->lr = 0x80B2D804u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D804:
    ctx->pc = 0x80B2D804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D804: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D808:
    ctx->pc = 0x80B2D808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D808u)) return;
    // 80B2D808: addi    r4, r4, -7300
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7300);

label_80B2D80C:
    ctx->pc = 0x80B2D80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D80Cu)) return;
    // 80B2D80C: bl      0x8045C060
    {
            ctx->lr = 0x80B2D810u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D810:
    ctx->pc = 0x80B2D810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D810: li      r3, 468
    ctx->gpr[3] = (u32)(s32)(468);

label_80B2D814:
    ctx->pc = 0x80B2D814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D814u)) return;
    // 80B2D814: bl      0x8045BFA0
    {
            ctx->lr = 0x80B2D818u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B2D818:
    ctx->pc = 0x80B2D818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2D818: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D81C:
    ctx->pc = 0x80B2D81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D81Cu)) return;
    // 80B2D81C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80B2D820:
    ctx->pc = 0x80B2D820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D820u)) return;
    // 80B2D820: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80B2D824:
    ctx->pc = 0x80B2D824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2D824: lwz     r0, 0(r4)
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
label_80B2D828:
    ctx->pc = 0x80B2D828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D828u)) return;
    // 80B2D828: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B2D82C:
    ctx->pc = 0x80B2D82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D82Cu)) return;
    // 80B2D82C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D830:
    ctx->pc = 0x80B2D830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D830u)) return;
    // 80B2D830: addi    r4, r4, -7472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7472);

label_80B2D834:
    ctx->pc = 0x80B2D834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D834: lwzx    r4, r4, r0
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
label_80B2D838:
    ctx->pc = 0x80B2D838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D838: lwz     r4, 4(r4)
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
label_80B2D83C:
    ctx->pc = 0x80B2D83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D83Cu)) return;
    // 80B2D83C: bl      0x8045F608
    {
            ctx->lr = 0x80B2D840u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80B2D840:
    ctx->pc = 0x80B2D840u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D840u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D840: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D844:
    ctx->pc = 0x80B2D844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D844u)) return;
    // 80B2D844: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D848u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D848:
    ctx->pc = 0x80B2D848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D848: bl      0x8045BFF4
    {
            ctx->lr = 0x80B2D84Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B2D84C:
    ctx->pc = 0x80B2D84Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D84Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D84C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D850:
    ctx->pc = 0x80B2D850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D850u)) return;
    // 80B2D850: bl      0x8045F220
    {
            ctx->lr = 0x80B2D854u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D854:
    ctx->pc = 0x80B2D854u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D854u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D854: bl      0x8045C034
    {
            ctx->lr = 0x80B2D858u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D858:
    ctx->pc = 0x80B2D858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D85C:
    ctx->pc = 0x80B2D85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D85Cu)) return;
    // 80B2D85C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D860u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D860:
    ctx->pc = 0x80B2D860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D860: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D864:
    ctx->pc = 0x80B2D864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D864u)) return;
    // 80B2D864: addi    r4, r4, -7288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7288);

label_80B2D868:
    ctx->pc = 0x80B2D868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D868u)) return;
    // 80B2D868: bl      0x8045C060
    {
            ctx->lr = 0x80B2D86Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D86C:
    ctx->pc = 0x80B2D86Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D86Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D86C: li      r3, 469
    ctx->gpr[3] = (u32)(s32)(469);

label_80B2D870:
    ctx->pc = 0x80B2D870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D870u)) return;
    // 80B2D870: bl      0x8045BFA0
    {
            ctx->lr = 0x80B2D874u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B2D874:
    ctx->pc = 0x80B2D874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B2D874: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D878:
    ctx->pc = 0x80B2D878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D878u)) return;
    // 80B2D878: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B2D87C:
    ctx->pc = 0x80B2D87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2D87C: lwz     r0, 0(r3)
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
label_80B2D880:
    ctx->pc = 0x80B2D880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D880u)) return;
    // 80B2D880: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B2D884:
    ctx->pc = 0x80B2D884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D884u)) return;
    // 80B2D884: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2D888:
    ctx->pc = 0x80B2D888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D888u)) return;
    // 80B2D888: addi    r3, r3, -7472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7472);

label_80B2D88C:
    ctx->pc = 0x80B2D88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D88Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D88C: lwzx    r3, r3, r0
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
label_80B2D890:
    ctx->pc = 0x80B2D890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D890: lwz     r3, 8(r3)
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
label_80B2D894:
    ctx->pc = 0x80B2D894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D894u)) return;
    // 80B2D894: bl      0x8045F6FC
    {
            ctx->lr = 0x80B2D898u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B2D898:
    ctx->pc = 0x80B2D898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D898: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2D89C:
    ctx->pc = 0x80B2D89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D89Cu)) return;
    // 80B2D89C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D8A0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D8A0:
    ctx->pc = 0x80B2D8A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D8A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D8A0: bl      0x8045BFF4
    {
            ctx->lr = 0x80B2D8A4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B2D8A4:
    ctx->pc = 0x80B2D8A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D8A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D8A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D8A8:
    ctx->pc = 0x80B2D8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8A8u)) return;
    // 80B2D8A8: bl      0x8045F220
    {
            ctx->lr = 0x80B2D8ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D8AC:
    ctx->pc = 0x80B2D8ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D8ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D8AC: bl      0x8045C034
    {
            ctx->lr = 0x80B2D8B0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D8B0:
    ctx->pc = 0x80B2D8B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D8B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D8B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D8B4:
    ctx->pc = 0x80B2D8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8B4u)) return;
    // 80B2D8B4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B2D8B8:
    ctx->pc = 0x80B2D8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8B8u)) return;
    // 80B2D8B8: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D8BC:
    ctx->pc = 0x80B2D8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8BCu)) return;
    // 80B2D8BC: addi    r5, r5, -8880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8880);

label_80B2D8C0:
    ctx->pc = 0x80B2D8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D8C0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D8C0u)) return;
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
label_80B2D8C4:
    ctx->pc = 0x80B2D8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8C4u)) return;
    // 80B2D8C4: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D8C8:
    ctx->pc = 0x80B2D8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8C8u)) return;
    // 80B2D8C8: addi    r5, r5, -8876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8876);

label_80B2D8CC:
    ctx->pc = 0x80B2D8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D8CC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D8CCu)) return;
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
label_80B2D8D0:
    ctx->pc = 0x80B2D8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8D0u)) return;
    // 80B2D8D0: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D8D4:
    ctx->pc = 0x80B2D8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8D4u)) return;
    // 80B2D8D4: addi    r5, r5, -8872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8872);

label_80B2D8D8:
    ctx->pc = 0x80B2D8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D8D8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D8D8u)) return;
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
label_80B2D8DC:
    ctx->pc = 0x80B2D8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8DCu)) return;
    // 80B2D8DC: bl      0x8045C750
    {
            ctx->lr = 0x80B2D8E0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D8E0:
    ctx->pc = 0x80B2D8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D8E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D8E4:
    ctx->pc = 0x80B2D8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8E4u)) return;
    // 80B2D8E4: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B2D8E8:
    ctx->pc = 0x80B2D8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8E8u)) return;
    // 80B2D8E8: li      r5, 2339
    ctx->gpr[5] = (u32)(s32)(2339);

label_80B2D8EC:
    ctx->pc = 0x80B2D8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8ECu)) return;
    // 80B2D8EC: li      r6, 9216
    ctx->gpr[6] = (u32)(s32)(9216);

label_80B2D8F0:
    ctx->pc = 0x80B2D8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8F0u)) return;
    // 80B2D8F0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2D8F4:
    ctx->pc = 0x80B2D8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8F4u)) return;
    // 80B2D8F4: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2D8F8:
    ctx->pc = 0x80B2D8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D8F8u)) return;
    // 80B2D8F8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2D8FCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2D8FC:
    ctx->pc = 0x80B2D8FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D8FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D8FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D900:
    ctx->pc = 0x80B2D900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D900u)) return;
    // 80B2D900: bl      0x8045F220
    {
            ctx->lr = 0x80B2D904u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D904:
    ctx->pc = 0x80B2D904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D904: bl      0x8045E760
    {
            ctx->lr = 0x80B2D908u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80B2D908:
    ctx->pc = 0x80B2D908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D908: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D90C:
    ctx->pc = 0x80B2D90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D90Cu)) return;
    // 80B2D90C: bl      0x8045F220
    {
            ctx->lr = 0x80B2D910u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D910:
    ctx->pc = 0x80B2D910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D910: bl      0x8045C034
    {
            ctx->lr = 0x80B2D914u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D914:
    ctx->pc = 0x80B2D914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D914: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D918:
    ctx->pc = 0x80B2D918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D918u)) return;
    // 80B2D918: bl      0x8045F220
    {
            ctx->lr = 0x80B2D91Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D91C:
    ctx->pc = 0x80B2D91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D91C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D920:
    ctx->pc = 0x80B2D920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D920u)) return;
    // 80B2D920: addi    r4, r4, -7284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7284);

label_80B2D924:
    ctx->pc = 0x80B2D924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D924u)) return;
    // 80B2D924: bl      0x8045C060
    {
            ctx->lr = 0x80B2D928u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D928:
    ctx->pc = 0x80B2D928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D928: li      r3, 470
    ctx->gpr[3] = (u32)(s32)(470);

label_80B2D92C:
    ctx->pc = 0x80B2D92Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D92Cu)) return;
    // 80B2D92C: bl      0x8045BFA0
    {
            ctx->lr = 0x80B2D930u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B2D930:
    ctx->pc = 0x80B2D930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B2D930: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D934:
    ctx->pc = 0x80B2D934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D934u)) return;
    // 80B2D934: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B2D938:
    ctx->pc = 0x80B2D938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2D938: lwz     r0, 0(r3)
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
label_80B2D93C:
    ctx->pc = 0x80B2D93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D93Cu)) return;
    // 80B2D93C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B2D940:
    ctx->pc = 0x80B2D940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D940u)) return;
    // 80B2D940: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2D944:
    ctx->pc = 0x80B2D944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D944u)) return;
    // 80B2D944: addi    r3, r3, -7472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7472);

label_80B2D948:
    ctx->pc = 0x80B2D948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D948: lwzx    r3, r3, r0
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
label_80B2D94C:
    ctx->pc = 0x80B2D94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D94Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D94C: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2D950:
    ctx->pc = 0x80B2D950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D950u)) return;
    // 80B2D950: bl      0x8045F6FC
    {
            ctx->lr = 0x80B2D954u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B2D954:
    ctx->pc = 0x80B2D954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D954: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80B2D958:
    ctx->pc = 0x80B2D958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D958u)) return;
    // 80B2D958: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2D95Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2D95C:
    ctx->pc = 0x80B2D95Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2D95C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D960:
    ctx->pc = 0x80B2D960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D960u)) return;
    // 80B2D960: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B2D964:
    ctx->pc = 0x80B2D964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D964u)) return;
    // 80B2D964: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D968:
    ctx->pc = 0x80B2D968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D968u)) return;
    // 80B2D968: addi    r5, r5, -8868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8868);

label_80B2D96C:
    ctx->pc = 0x80B2D96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D96Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2D96C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D96Cu)) return;
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
label_80B2D970:
    ctx->pc = 0x80B2D970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D970u)) return;
    // 80B2D970: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D974:
    ctx->pc = 0x80B2D974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D974u)) return;
    // 80B2D974: addi    r5, r5, -8864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8864);

label_80B2D978:
    ctx->pc = 0x80B2D978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D978u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2D978: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D978u)) return;
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
label_80B2D97C:
    ctx->pc = 0x80B2D97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D97Cu)) return;
    // 80B2D97C: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2D980:
    ctx->pc = 0x80B2D980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D980u)) return;
    // 80B2D980: addi    r5, r5, -8860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8860);

label_80B2D984:
    ctx->pc = 0x80B2D984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D984: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2D984u)) return;
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
label_80B2D988:
    ctx->pc = 0x80B2D988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D988u)) return;
    // 80B2D988: bl      0x8045C750
    {
            ctx->lr = 0x80B2D98Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2D98C:
    ctx->pc = 0x80B2D98Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D98Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2D98C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2D990:
    ctx->pc = 0x80B2D990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D990u)) return;
    // 80B2D990: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B2D994:
    ctx->pc = 0x80B2D994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D994u)) return;
    // 80B2D994: li      r5, 2339
    ctx->gpr[5] = (u32)(s32)(2339);

label_80B2D998:
    ctx->pc = 0x80B2D998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D998u)) return;
    // 80B2D998: li      r6, 10496
    ctx->gpr[6] = (u32)(s32)(10496);

label_80B2D99C:
    ctx->pc = 0x80B2D99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D99Cu)) return;
    // 80B2D99C: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2D9A0:
    ctx->pc = 0x80B2D9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9A0u)) return;
    // 80B2D9A0: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2D9A4:
    ctx->pc = 0x80B2D9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9A4u)) return;
    // 80B2D9A4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2D9A8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2D9A8:
    ctx->pc = 0x80B2D9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D9A8: bl      0x8045BFF4
    {
            ctx->lr = 0x80B2D9ACu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B2D9AC:
    ctx->pc = 0x80B2D9ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D9AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D9B0:
    ctx->pc = 0x80B2D9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9B0u)) return;
    // 80B2D9B0: bl      0x8045F220
    {
            ctx->lr = 0x80B2D9B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D9B4:
    ctx->pc = 0x80B2D9B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2D9B4: bl      0x8045C034
    {
            ctx->lr = 0x80B2D9B8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2D9B8:
    ctx->pc = 0x80B2D9B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D9B8: li      r3, 471
    ctx->gpr[3] = (u32)(s32)(471);

label_80B2D9BC:
    ctx->pc = 0x80B2D9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9BCu)) return;
    // 80B2D9BC: bl      0x8045BFA0
    {
            ctx->lr = 0x80B2D9C0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B2D9C0:
    ctx->pc = 0x80B2D9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D9C0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D9C4:
    ctx->pc = 0x80B2D9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9C4u)) return;
    // 80B2D9C4: bl      0x8045F220
    {
            ctx->lr = 0x80B2D9C8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2D9C8:
    ctx->pc = 0x80B2D9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2D9C8: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2D9CC:
    ctx->pc = 0x80B2D9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9CCu)) return;
    // 80B2D9CC: addi    r4, r4, -7276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7276);

label_80B2D9D0:
    ctx->pc = 0x80B2D9D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9D0u)) return;
    // 80B2D9D0: bl      0x8045C060
    {
            ctx->lr = 0x80B2D9D4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2D9D4:
    ctx->pc = 0x80B2D9D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B2D9D4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2D9D8:
    ctx->pc = 0x80B2D9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9D8u)) return;
    // 80B2D9D8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B2D9DC:
    ctx->pc = 0x80B2D9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2D9DC: lwz     r0, 0(r3)
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
label_80B2D9E0:
    ctx->pc = 0x80B2D9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9E0u)) return;
    // 80B2D9E0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B2D9E4:
    ctx->pc = 0x80B2D9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9E4u)) return;
    // 80B2D9E4: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2D9E8:
    ctx->pc = 0x80B2D9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9E8u)) return;
    // 80B2D9E8: addi    r3, r3, -7472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-7472);

label_80B2D9EC:
    ctx->pc = 0x80B2D9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2D9EC: lwzx    r3, r3, r0
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
label_80B2D9F0:
    ctx->pc = 0x80B2D9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2D9F0: lwz     r3, 16(r3)
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
label_80B2D9F4:
    ctx->pc = 0x80B2D9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9F4u)) return;
    // 80B2D9F4: bl      0x8045F6FC
    {
            ctx->lr = 0x80B2D9F8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B2D9F8:
    ctx->pc = 0x80B2D9F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2D9F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2D9F8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2D9FC:
    ctx->pc = 0x80B2D9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2D9FCu)) return;
    // 80B2D9FC: bl      0x8045F220
    {
            ctx->lr = 0x80B2DA00u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DA00:
    ctx->pc = 0x80B2DA00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2DA00: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2DA04:
    ctx->pc = 0x80B2DA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA04u)) return;
    // 80B2DA04: addi    r4, r4, 6828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6828);

label_80B2DA08:
    ctx->pc = 0x80B2DA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA08u)) return;
    // 80B2DA08: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2DA0C:
    ctx->pc = 0x80B2DA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA0Cu)) return;
    // 80B2DA0C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2DA10:
    ctx->pc = 0x80B2DA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA10u)) return;
    // 80B2DA10: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2DA14:
    ctx->pc = 0x80B2DA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA14u)) return;
    // 80B2DA14: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2DA18:
    ctx->pc = 0x80B2DA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DA18: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2DA18u)) return;
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
label_80B2DA1C:
    ctx->pc = 0x80B2DA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA1Cu)) return;
    // 80B2DA1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2DA20:
    ctx->pc = 0x80B2DA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA20u)) return;
    // 80B2DA20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2DA24:
    ctx->pc = 0x80B2DA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA24u)) return;
    // 80B2DA24: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2DA28u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2DA28:
    ctx->pc = 0x80B2DA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DA28: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2DA2C:
    ctx->pc = 0x80B2DA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA2Cu)) return;
    // 80B2DA2C: bl      0x8045F220
    {
            ctx->lr = 0x80B2DA30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DA30:
    ctx->pc = 0x80B2DA30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2DA30: lis     r4, -27581
    ctx->gpr[4] = ((u32)(s32)(-27581) << 16);

label_80B2DA34:
    ctx->pc = 0x80B2DA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA34u)) return;
    // 80B2DA34: addi    r4, r4, 8928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8928);

label_80B2DA38:
    ctx->pc = 0x80B2DA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA38u)) return;
    // 80B2DA38: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B2DA3C:
    ctx->pc = 0x80B2DA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA3Cu)) return;
    // 80B2DA3C: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B2DA40:
    ctx->pc = 0x80B2DA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA40u)) return;
    // 80B2DA40: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2DA44:
    ctx->pc = 0x80B2DA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA44u)) return;
    // 80B2DA44: addi    r6, r6, -9008
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-9008);

label_80B2DA48:
    ctx->pc = 0x80B2DA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DA48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2DA48u)) return;
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
label_80B2DA4C:
    ctx->pc = 0x80B2DA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA4Cu)) return;
    // 80B2DA4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2DA50:
    ctx->pc = 0x80B2DA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA50u)) return;
    // 80B2DA50: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B2DA54:
    ctx->pc = 0x80B2DA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA54u)) return;
    // 80B2DA54: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2DA58u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2DA58:
    ctx->pc = 0x80B2DA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DA58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2DA5C:
    ctx->pc = 0x80B2DA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA5Cu)) return;
    // 80B2DA5C: bl      0x8045F220
    {
            ctx->lr = 0x80B2DA60u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DA60:
    ctx->pc = 0x80B2DA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2DA60: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DA64:
    ctx->pc = 0x80B2DA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA64u)) return;
    // 80B2DA64: addi    r4, r4, 7544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7544);

label_80B2DA68:
    ctx->pc = 0x80B2DA68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA68u)) return;
    // 80B2DA68: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B2DA6C:
    ctx->pc = 0x80B2DA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA6Cu)) return;
    // 80B2DA6C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B2DA70:
    ctx->pc = 0x80B2DA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA70u)) return;
    // 80B2DA70: lis     r6, -27582
    ctx->gpr[6] = ((u32)(s32)(-27582) << 16);

label_80B2DA74:
    ctx->pc = 0x80B2DA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA74u)) return;
    // 80B2DA74: addi    r6, r6, -8856
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-8856);

label_80B2DA78:
    ctx->pc = 0x80B2DA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DA78: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B2DA78u)) return;
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
label_80B2DA7C:
    ctx->pc = 0x80B2DA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA7Cu)) return;
    // 80B2DA7C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B2DA80:
    ctx->pc = 0x80B2DA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA80u)) return;
    // 80B2DA80: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80B2DA84:
    ctx->pc = 0x80B2DA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA84u)) return;
    // 80B2DA84: bl      0x8045EBE4
    {
            ctx->lr = 0x80B2DA88u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B2DA88:
    ctx->pc = 0x80B2DA88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DA88: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B2DA8C:
    ctx->pc = 0x80B2DA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA8Cu)) return;
    // 80B2DA8C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2DA90u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2DA90:
    ctx->pc = 0x80B2DA90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B2DA90: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2DA94:
    ctx->pc = 0x80B2DA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA94u)) return;
    // 80B2DA94: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80B2DA98:
    ctx->pc = 0x80B2DA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA98u)) return;
    // 80B2DA98: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2DA9C:
    ctx->pc = 0x80B2DA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DA9Cu)) return;
    // 80B2DA9C: addi    r5, r5, -8852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8852);

label_80B2DAA0:
    ctx->pc = 0x80B2DAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2DAA0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DAA0u)) return;
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
label_80B2DAA4:
    ctx->pc = 0x80B2DAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAA4u)) return;
    // 80B2DAA4: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2DAA8:
    ctx->pc = 0x80B2DAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAA8u)) return;
    // 80B2DAA8: addi    r5, r5, -8848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8848);

label_80B2DAAC:
    ctx->pc = 0x80B2DAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DAAC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DAACu)) return;
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
label_80B2DAB0:
    ctx->pc = 0x80B2DAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAB0u)) return;
    // 80B2DAB0: lis     r5, -27582
    ctx->gpr[5] = ((u32)(s32)(-27582) << 16);

label_80B2DAB4:
    ctx->pc = 0x80B2DAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAB4u)) return;
    // 80B2DAB4: addi    r5, r5, -8844
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8844);

label_80B2DAB8:
    ctx->pc = 0x80B2DAB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DAB8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DAB8u)) return;
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
label_80B2DABC:
    ctx->pc = 0x80B2DABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DABCu)) return;
    // 80B2DABC: bl      0x8045C750
    {
            ctx->lr = 0x80B2DAC0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B2DAC0:
    ctx->pc = 0x80B2DAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B2DAC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2DAC4:
    ctx->pc = 0x80B2DAC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAC4u)) return;
    // 80B2DAC4: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80B2DAC8:
    ctx->pc = 0x80B2DAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAC8u)) return;
    // 80B2DAC8: li      r5, 3107
    ctx->gpr[5] = (u32)(s32)(3107);

label_80B2DACC:
    ctx->pc = 0x80B2DACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DACCu)) return;
    // 80B2DACC: li      r6, 9216
    ctx->gpr[6] = (u32)(s32)(9216);

label_80B2DAD0:
    ctx->pc = 0x80B2DAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAD0u)) return;
    // 80B2DAD0: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B2DAD4:
    ctx->pc = 0x80B2DAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAD4u)) return;
    // 80B2DAD4: addi    r7, r7, -256
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-256);

label_80B2DAD8:
    ctx->pc = 0x80B2DAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAD8u)) return;
    // 80B2DAD8: bl      0x8045C7B4
    {
            ctx->lr = 0x80B2DADCu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B2DADC:
    ctx->pc = 0x80B2DADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DADC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B2DAE0:
    ctx->pc = 0x80B2DAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAE0u)) return;
    // 80B2DAE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B2DAE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B2DAE4:
    ctx->pc = 0x80B2DAE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DAE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DAE4: bl      0x8045BFF4
    {
            ctx->lr = 0x80B2DAE8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B2DAE8:
    ctx->pc = 0x80B2DAE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DAE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DAE8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2DAEC:
    ctx->pc = 0x80B2DAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAECu)) return;
    // 80B2DAEC: bl      0x8045F220
    {
            ctx->lr = 0x80B2DAF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DAF0:
    ctx->pc = 0x80B2DAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DAF0: bl      0x8045C034
    {
            ctx->lr = 0x80B2DAF4u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B2DAF4:
    ctx->pc = 0x80B2DAF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DAF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DAF4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2DAF8:
    ctx->pc = 0x80B2DAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DAF8u)) return;
    // 80B2DAF8: bl      0x8045F220
    {
            ctx->lr = 0x80B2DAFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DAFC:
    ctx->pc = 0x80B2DAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2DAFC: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DB00:
    ctx->pc = 0x80B2DB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB00u)) return;
    // 80B2DB00: addi    r4, r4, -7272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7272);

label_80B2DB04:
    ctx->pc = 0x80B2DB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB04u)) return;
    // 80B2DB04: bl      0x8045C060
    {
            ctx->lr = 0x80B2DB08u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B2DB08:
    ctx->pc = 0x80B2DB08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DB08: bl      0x8045F32C
    {
            ctx->lr = 0x80B2DB0Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B2DB0C:
    ctx->pc = 0x80B2DB0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DB0C: b       0x80B2DB9C
    {
            goto label_80B2DB9C;
    }

label_80B2DB10:
    ctx->pc = 0x80B2DB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DB10: bl      0x8045DE34
    {
            ctx->lr = 0x80B2DB14u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B2DB14:
    ctx->pc = 0x80B2DB14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DB14: bl      0x80460A80
    {
            ctx->lr = 0x80B2DB18u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B2DB18:
    ctx->pc = 0x80B2DB18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DB18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2DB1C:
    ctx->pc = 0x80B2DB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB1Cu)) return;
    // 80B2DB1C: bl      0x8045F220
    {
            ctx->lr = 0x80B2DB20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DB20:
    ctx->pc = 0x80B2DB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B2DB20: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DB24:
    ctx->pc = 0x80B2DB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB24u)) return;
    // 80B2DB24: addi    r4, r4, -9000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9000);

label_80B2DB28:
    ctx->pc = 0x80B2DB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2DB28: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2DB28u)) return;
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
label_80B2DB2C:
    ctx->pc = 0x80B2DB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB2Cu)) return;
    // 80B2DB2C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DB30:
    ctx->pc = 0x80B2DB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB30u)) return;
    // 80B2DB30: addi    r4, r4, -8996
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8996);

label_80B2DB34:
    ctx->pc = 0x80B2DB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DB34: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2DB34u)) return;
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
label_80B2DB38:
    ctx->pc = 0x80B2DB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB38u)) return;
    // 80B2DB38: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DB3C:
    ctx->pc = 0x80B2DB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB3Cu)) return;
    // 80B2DB3C: addi    r4, r4, -8992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8992);

label_80B2DB40:
    ctx->pc = 0x80B2DB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DB40: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2DB40u)) return;
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
label_80B2DB44:
    ctx->pc = 0x80B2DB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB44u)) return;
    // 80B2DB44: bl      0x8045EF2C
    {
            ctx->lr = 0x80B2DB48u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B2DB48:
    ctx->pc = 0x80B2DB48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DB48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2DB4C:
    ctx->pc = 0x80B2DB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB4Cu)) return;
    // 80B2DB4C: bl      0x8045F220
    {
            ctx->lr = 0x80B2DB50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B2DB50:
    ctx->pc = 0x80B2DB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2DB50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B2DB54:
    ctx->pc = 0x80B2DB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB54u)) return;
    // 80B2DB54: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B2DB58:
    ctx->pc = 0x80B2DB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB58u)) return;
    // 80B2DB58: addi    r5, r5, -1498
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1498);

label_80B2DB5C:
    ctx->pc = 0x80B2DB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB5Cu)) return;
    // 80B2DB5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B2DB60:
    ctx->pc = 0x80B2DB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB60u)) return;
    // 80B2DB60: bl      0x8045EEA8
    {
            ctx->lr = 0x80B2DB64u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B2DB64:
    ctx->pc = 0x80B2DB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DB64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2DB68:
    ctx->pc = 0x80B2DB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB68u)) return;
    // 80B2DB68: bl      0x8045EC10
    {
            ctx->lr = 0x80B2DB6Cu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B2DB6C:
    ctx->pc = 0x80B2DB6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DB6C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2DB70:
    ctx->pc = 0x80B2DB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB70u)) return;
    // 80B2DB70: bl      0x8045ED54
    {
            ctx->lr = 0x80B2DB74u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B2DB74:
    ctx->pc = 0x80B2DB74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2DB74: lis     r3, -27581
    ctx->gpr[3] = ((u32)(s32)(-27581) << 16);

label_80B2DB78:
    ctx->pc = 0x80B2DB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB78u)) return;
    // 80B2DB78: addi    r3, r3, 8960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8960);

label_80B2DB7C:
    ctx->pc = 0x80B2DB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DB7C: lwz     r3, 0(r3)
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
label_80B2DB80:
    ctx->pc = 0x80B2DB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB80u)) return;
    // 80B2DB80: cmplwi  r3, 0x0000
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

label_80B2DB84:
    ctx->pc = 0x80B2DB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB84u)) return;
    // 80B2DB84: bc    12, 2, 0x80B2DB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B2DB9C;
        }
    }

label_80B2DB88:
    ctx->pc = 0x80B2DB88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DB88: bl      0x8050F9E0
    {
            ctx->lr = 0x80B2DB8Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B2DB8C:
    ctx->pc = 0x80B2DB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B2DB8C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B2DB90:
    ctx->pc = 0x80B2DB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB90u)) return;
    // 80B2DB90: lis     r3, -27581
    ctx->gpr[3] = ((u32)(s32)(-27581) << 16);

label_80B2DB94:
    ctx->pc = 0x80B2DB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB94u)) return;
    // 80B2DB94: addi    r3, r3, 8960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8960);

label_80B2DB98:
    ctx->pc = 0x80B2DB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DB98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B2DB98: stw     r0, 0(r3)
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
label_80B2DB9C:
    ctx->pc = 0x80B2DB9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DB9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B2DB9C: lwz     r31, 12(r1)
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
label_80B2DBA0:
    ctx->pc = 0x80B2DBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DBA0: lwz     r0, 20(r1)
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
label_80B2DBA4:
    ctx->pc = 0x80B2DBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B2DBA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DBA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DBA8:
    ctx->pc = 0x80B2DBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBA8u)) return;
    // 80B2DBA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B2DBAC:
    ctx->pc = 0x80B2DBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBACu)) return;
    // 80B2DBAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DBB0:
    ctx->pc = 0x80B2DBB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DBB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DBB0: stwu     r1, -64(r1)
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
label_80B2DBB4:
    ctx->pc = 0x80B2DBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DBB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DBB8:
    ctx->pc = 0x80B2DBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DBB8: stw     r0, 68(r1)
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
label_80B2DBBC:
    ctx->pc = 0x80B2DBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBBCu)) return;
    // 80B2DBBC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B2DBC0:
    ctx->pc = 0x80B2DBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBC0u)) return;
    // 80B2DBC0: bl      0x80006DD4
    {
            ctx->lr = 0x80B2DBC4u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80B2DBC4:
    ctx->pc = 0x80B2DBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80B2DBC4: lwz     r27, 32(r3)
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
label_80B2DBC8:
    ctx->pc = 0x80B2DBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBC8u)) return;
    // 80B2DBC8: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2DBCC:
    ctx->pc = 0x80B2DBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBCCu)) return;
    // 80B2DBCC: addi    r3, r3, -8840
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8840);

label_80B2DBD0:
    ctx->pc = 0x80B2DBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80B2DBD0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DBD0u)) return;
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
label_80B2DBD4:
    ctx->pc = 0x80B2DBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B2DBD4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B2DBD4u)) return;
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
label_80B2DBD8:
    ctx->pc = 0x80B2DBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBD8u)) return;
    // 80B2DBD8: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DBD8u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B2DBDC:
    ctx->pc = 0x80B2DBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBDCu)) return;
    // 80B2DBDC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DBDCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B2DBE0:
    ctx->pc = 0x80B2DBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B2DBE0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DBE0u)) return;
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
label_80B2DBE4:
    ctx->pc = 0x80B2DBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B2DBE4: lwz     r31, 12(r1)
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
label_80B2DBE8:
    ctx->pc = 0x80B2DBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B2DBE8: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B2DBE8u)) return;
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
label_80B2DBEC:
    ctx->pc = 0x80B2DBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBECu)) return;
    // 80B2DBEC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DBECu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B2DBF0:
    ctx->pc = 0x80B2DBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBF0u)) return;
    // 80B2DBF0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DBF0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B2DBF4:
    ctx->pc = 0x80B2DBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B2DBF4: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DBF4u)) return;
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
label_80B2DBF8:
    ctx->pc = 0x80B2DBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B2DBF8: lwz     r30, 20(r1)
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
label_80B2DBFC:
    ctx->pc = 0x80B2DBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B2DBFC: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B2DBFCu)) return;
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
label_80B2DC00:
    ctx->pc = 0x80B2DC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC00u)) return;
    // 80B2DC00: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DC00u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B2DC04:
    ctx->pc = 0x80B2DC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC04u)) return;
    // 80B2DC04: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DC04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B2DC08:
    ctx->pc = 0x80B2DC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2DC08: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DC08u)) return;
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
label_80B2DC0C:
    ctx->pc = 0x80B2DC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B2DC0C: lwz     r29, 28(r1)
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
label_80B2DC10:
    ctx->pc = 0x80B2DC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B2DC10: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B2DC10u)) return;
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
label_80B2DC14:
    ctx->pc = 0x80B2DC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC14u)) return;
    // 80B2DC14: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DC14u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80B2DC18:
    ctx->pc = 0x80B2DC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC18u)) return;
    // 80B2DC18: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DC18u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80B2DC1C:
    ctx->pc = 0x80B2DC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2DC1C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DC1Cu)) return;
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
label_80B2DC20:
    ctx->pc = 0x80B2DC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B2DC20: lwz     r28, 36(r1)
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
label_80B2DC24:
    ctx->pc = 0x80B2DC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC24u)) return;
    // 80B2DC24: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B2DC28:
    ctx->pc = 0x80B2DC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC28u)) return;
    // 80B2DC28: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80B2DC2C:
    ctx->pc = 0x80B2DC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DC2C: lwz     r0, 0(r3)
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
label_80B2DC30:
    ctx->pc = 0x80B2DC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC30u)) return;
    // 80B2DC30: cmpwi   r0, 0
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

label_80B2DC34:
    ctx->pc = 0x80B2DC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC34u)) return;
    // 80B2DC34: bc    4, 2, 0x80B2DCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2DCEC;
        }
    }

label_80B2DC38:
    ctx->pc = 0x80B2DC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2DC38: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B2DC3C:
    ctx->pc = 0x80B2DC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC3Cu)) return;
    // 80B2DC3C: cmplwi  r0, 0x0000
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

label_80B2DC40:
    ctx->pc = 0x80B2DC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC40u)) return;
    // 80B2DC40: bc    12, 2, 0x80B2DCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B2DCEC;
        }
    }

label_80B2DC44:
    ctx->pc = 0x80B2DC44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2DC44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B2DC48:
    ctx->pc = 0x80B2DC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC48u)) return;
    // 80B2DC48: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80B2DC4C:
    ctx->pc = 0x80B2DC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC4Cu)) return;
    // 80B2DC4C: bl      0x8060F4F8
    {
            ctx->lr = 0x80B2DC50u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B2DC50:
    ctx->pc = 0x80B2DC50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2DC50: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B2DC54:
    ctx->pc = 0x80B2DC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC54u)) return;
    // 80B2DC54: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B2DC58:
    ctx->pc = 0x80B2DC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC58u)) return;
    // 80B2DC58: bl      0x8060F4F8
    {
            ctx->lr = 0x80B2DC5Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80B2DC5C:
    ctx->pc = 0x80B2DC5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2DC5C: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80B2DC5Cu)) return;
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
label_80B2DC60:
    ctx->pc = 0x80B2DC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC60u)) return;
    // 80B2DC60: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2DC64:
    ctx->pc = 0x80B2DC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC64u)) return;
    // 80B2DC64: addi    r3, r3, -8832
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8832);

label_80B2DC68:
    ctx->pc = 0x80B2DC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DC68: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DC68u)) return;
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
label_80B2DC6C:
    ctx->pc = 0x80B2DC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC6Cu)) return;
    // 80B2DC6C: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DC6Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80B2DC70:
    ctx->pc = 0x80B2DC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC70u)) return;
    // 80B2DC70: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80B2DC74:
    ctx->pc = 0x80B2DC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC74u)) return;
    // 80B2DC74: bc    4, 2, 0x80B2DC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2DC88;
        }
    }

label_80B2DC78:
    ctx->pc = 0x80B2DC78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B2DC78: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2DC7C:
    ctx->pc = 0x80B2DC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC7Cu)) return;
    // 80B2DC7C: addi    r3, r3, -8836
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8836);

label_80B2DC80:
    ctx->pc = 0x80B2DC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DC80: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DC80u)) return;
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
label_80B2DC84:
    ctx->pc = 0x80B2DC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC84u)) return;
    // 80B2DC84: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DC84u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80B2DC88:
    ctx->pc = 0x80B2DC88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B2DC88: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B2DC8C:
    ctx->pc = 0x80B2DC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC8Cu)) return;
    // 80B2DC8C: cmplwi  r0, 0x00FF
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

label_80B2DC90:
    ctx->pc = 0x80B2DC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC90u)) return;
    // 80B2DC90: bc    4, 1, 0x80B2DC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2DC98;
        }
    }

label_80B2DC94:
    ctx->pc = 0x80B2DC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DC94: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80B2DC98:
    ctx->pc = 0x80B2DC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80B2DC98: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2DC9C:
    ctx->pc = 0x80B2DC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DC9Cu)) return;
    // 80B2DC9C: addi    r3, r3, -8828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8828);

label_80B2DCA0:
    ctx->pc = 0x80B2DCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B2DCA0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DCA0u)) return;
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
label_80B2DCA4:
    ctx->pc = 0x80B2DCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCA4u)) return;
    // 80B2DCA4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80B2DCA4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80B2DCA8:
    ctx->pc = 0x80B2DCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCA8u)) return;
    // 80B2DCA8: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2DCAC:
    ctx->pc = 0x80B2DCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCACu)) return;
    // 80B2DCAC: addi    r3, r3, -8824
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8824);

label_80B2DCB0:
    ctx->pc = 0x80B2DCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B2DCB0: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DCB0u)) return;
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
label_80B2DCB4:
    ctx->pc = 0x80B2DCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCB4u)) return;
    // 80B2DCB4: lis     r3, -27582
    ctx->gpr[3] = ((u32)(s32)(-27582) << 16);

label_80B2DCB8:
    ctx->pc = 0x80B2DCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCB8u)) return;
    // 80B2DCB8: addi    r3, r3, -8820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8820);

label_80B2DCBC:
    ctx->pc = 0x80B2DCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2DCBC: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DCBCu)) return;
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
label_80B2DCC0:
    ctx->pc = 0x80B2DCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCC0u)) return;
    // 80B2DCC0: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80B2DCC4:
    ctx->pc = 0x80B2DCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCC4u)) return;
    // 80B2DCC4: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80B2DCC8:
    ctx->pc = 0x80B2DCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCC8u)) return;
    // 80B2DCC8: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80B2DCCC:
    ctx->pc = 0x80B2DCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCCCu)) return;
    // 80B2DCCC: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80B2DCD0:
    ctx->pc = 0x80B2DCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCD0u)) return;
    // 80B2DCD0: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80B2DCD4:
    ctx->pc = 0x80B2DCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCD4u)) return;
    // 80B2DCD4: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80B2DCD8:
    ctx->pc = 0x80B2DCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCD8u)) return;
    // 80B2DCD8: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80B2DCDC:
    ctx->pc = 0x80B2DCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCDCu)) return;
    // 80B2DCDC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80B2DCE0:
    ctx->pc = 0x80B2DCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCE0u)) return;
    // 80B2DCE0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80B2DCE4:
    ctx->pc = 0x80B2DCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCE4u)) return;
    // 80B2DCE4: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80B2DCE8:
    ctx->pc = 0x80B2DCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCE8u)) return;
    // 80B2DCE8: bl      0x80B2DEA8
    {
            ctx->lr = 0x80B2DCECu;
            goto label_80B2DEA8;
    }

label_80B2DCEC:
    ctx->pc = 0x80B2DCECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DCECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DCEC: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80B2DCF0:
    ctx->pc = 0x80B2DCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCF0u)) return;
    // 80B2DCF0: bl      0x80006E20
    {
            ctx->lr = 0x80B2DCF4u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80B2DCF4:
    ctx->pc = 0x80B2DCF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DCF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DCF4: lwz     r0, 68(r1)
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
label_80B2DCF8:
    ctx->pc = 0x80B2DCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B2DCF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DCF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DCFC:
    ctx->pc = 0x80B2DCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DCFCu)) return;
    // 80B2DCFC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B2DD00:
    ctx->pc = 0x80B2DD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD00u)) return;
    // 80B2DD00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DD04:
    ctx->pc = 0x80B2DD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2DD04: stwu     r1, -16(r1)
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
label_80B2DD08:
    ctx->pc = 0x80B2DD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B2DD08: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DD0C:
    ctx->pc = 0x80B2DD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B2DD0C: stw     r0, 20(r1)
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
label_80B2DD10:
    ctx->pc = 0x80B2DD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B2DD10: lwz     r5, 32(r3)
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
label_80B2DD14:
    ctx->pc = 0x80B2DD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2DD14: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DD14u)) return;
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
label_80B2DD18:
    ctx->pc = 0x80B2DD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2DD18: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DD18u)) return;
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
label_80B2DD1C:
    ctx->pc = 0x80B2DD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD1Cu)) return;
    // 80B2DD1C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DD1Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80B2DD20:
    ctx->pc = 0x80B2DD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD20u)) return;
    // 80B2DD20: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DD24:
    ctx->pc = 0x80B2DD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD24u)) return;
    // 80B2DD24: addi    r4, r4, -8816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8816);

label_80B2DD28:
    ctx->pc = 0x80B2DD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DD28: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2DD28u)) return;
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
label_80B2DD2C:
    ctx->pc = 0x80B2DD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD2Cu)) return;
    // 80B2DD2C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DD2Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B2DD30:
    ctx->pc = 0x80B2DD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD30u)) return;
    // 80B2DD30: bc    4, 1, 0x80B2DD3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2DD3C;
        }
    }

label_80B2DD34:
    ctx->pc = 0x80B2DD34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B2DD34: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DD34u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B2DD38:
    ctx->pc = 0x80B2DD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD38u)) return;
    // 80B2DD38: b       0x80B2DD54
    {
            goto label_80B2DD54;
    }

label_80B2DD3C:
    ctx->pc = 0x80B2DD3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B2DD3C: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DD40:
    ctx->pc = 0x80B2DD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD40u)) return;
    // 80B2DD40: addi    r4, r4, -8828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8828);

label_80B2DD44:
    ctx->pc = 0x80B2DD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DD44: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2DD44u)) return;
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
label_80B2DD48:
    ctx->pc = 0x80B2DD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD48u)) return;
    // 80B2DD48: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DD48u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80B2DD4C:
    ctx->pc = 0x80B2DD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD4Cu)) return;
    // 80B2DD4C: bc    4, 0, 0x80B2DD54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B2DD54;
        }
    }

label_80B2DD50:
    ctx->pc = 0x80B2DD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DD50: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B2DD50u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80B2DD54:
    ctx->pc = 0x80B2DD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DD54: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DD54u)) return;
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
label_80B2DD58:
    ctx->pc = 0x80B2DD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD58u)) return;
    // 80B2DD58: bl      0x80B2DBB0
    {
            ctx->lr = 0x80B2DD5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B2DBB0u;
                return;
            }
            goto label_80B2DBB0;
    }

label_80B2DD5C:
    ctx->pc = 0x80B2DD5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DD5C: lwz     r0, 20(r1)
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
label_80B2DD60:
    ctx->pc = 0x80B2DD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B2DD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DD60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DD64:
    ctx->pc = 0x80B2DD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD64u)) return;
    // 80B2DD64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B2DD68:
    ctx->pc = 0x80B2DD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD68u)) return;
    // 80B2DD68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DD6C:
    ctx->pc = 0x80B2DD6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B2DD6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DD70:
    ctx->pc = 0x80B2DD70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DD70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B2DD70: stwu     r1, -16(r1)
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
label_80B2DD74:
    ctx->pc = 0x80B2DD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2DD74: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DD78:
    ctx->pc = 0x80B2DD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B2DD78: stw     r0, 20(r1)
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
label_80B2DD7C:
    ctx->pc = 0x80B2DD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD7Cu)) return;
    // 80B2DD7C: lis     r4, -32589
    ctx->gpr[4] = ((u32)(s32)(-32589) << 16);

label_80B2DD80:
    ctx->pc = 0x80B2DD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD80u)) return;
    // 80B2DD80: addi    r0, r4, -8956
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8956);

label_80B2DD84:
    ctx->pc = 0x80B2DD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2DD84: stw     r0, 16(r3)
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
label_80B2DD88:
    ctx->pc = 0x80B2DD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD88u)) return;
    // 80B2DD88: lis     r4, -32589
    ctx->gpr[4] = ((u32)(s32)(-32589) << 16);

label_80B2DD8C:
    ctx->pc = 0x80B2DD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD8Cu)) return;
    // 80B2DD8C: addi    r0, r4, -9296
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-9296);

label_80B2DD90:
    ctx->pc = 0x80B2DD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DD90: stw     r0, 20(r3)
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
label_80B2DD94:
    ctx->pc = 0x80B2DD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD94u)) return;
    // 80B2DD94: lis     r4, -32589
    ctx->gpr[4] = ((u32)(s32)(-32589) << 16);

label_80B2DD98:
    ctx->pc = 0x80B2DD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD98u)) return;
    // 80B2DD98: addi    r0, r4, -8852
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8852);

label_80B2DD9C:
    ctx->pc = 0x80B2DD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DD9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DD9C: stw     r0, 24(r3)
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
label_80B2DDA0:
    ctx->pc = 0x80B2DDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDA0u)) return;
    // 80B2DDA0: bl      0x80B2DD04
    {
            ctx->lr = 0x80B2DDA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B2DD04u;
                return;
            }
            goto label_80B2DD04;
    }

label_80B2DDA4:
    ctx->pc = 0x80B2DDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DDA4: lwz     r0, 20(r1)
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
label_80B2DDA8:
    ctx->pc = 0x80B2DDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B2DDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DDA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDAC:
    ctx->pc = 0x80B2DDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDACu)) return;
    // 80B2DDAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B2DDB0:
    ctx->pc = 0x80B2DDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDB0u)) return;
    // 80B2DDB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DDB4:
    ctx->pc = 0x80B2DDB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DDB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B2DDB4: stwu     r1, -96(r1)
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
label_80B2DDB8:
    ctx->pc = 0x80B2DDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B2DDB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDBC:
    ctx->pc = 0x80B2DDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B2DDBC: stw     r0, 100(r1)
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
label_80B2DDC0:
    ctx->pc = 0x80B2DDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B2DDC0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DDC0u)) return;
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
label_80B2DDC4:
    ctx->pc = 0x80B2DDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80B2DDC4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DDC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B2DDC4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDC8:
    ctx->pc = 0x80B2DDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B2DDC8: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DDC8u)) return;
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
label_80B2DDCC:
    ctx->pc = 0x80B2DDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B2DDCC: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DDCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80B2DDCCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDD0:
    ctx->pc = 0x80B2DDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B2DDD0: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DDD0u)) return;
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
label_80B2DDD4:
    ctx->pc = 0x80B2DDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B2DDD4: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DDD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80B2DDD4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDD8:
    ctx->pc = 0x80B2DDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B2DDD8: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DDD8u)) return;
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
label_80B2DDDC:
    ctx->pc = 0x80B2DDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B2DDDC: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DDDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80B2DDDCu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDE0:
    ctx->pc = 0x80B2DDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2DDE0: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DDE0u)) return;
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
label_80B2DDE4:
    ctx->pc = 0x80B2DDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B2DDE4: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DDE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80B2DDE4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DDE8:
    ctx->pc = 0x80B2DDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDE8u)) return;
    // 80B2DDE8: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80B2DDE8u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80B2DDEC:
    ctx->pc = 0x80B2DDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDECu)) return;
    // 80B2DDEC: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80B2DDECu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80B2DDF0:
    ctx->pc = 0x80B2DDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDF0u)) return;
    // 80B2DDF0: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80B2DDF0u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80B2DDF4:
    ctx->pc = 0x80B2DDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDF4u)) return;
    // 80B2DDF4: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80B2DDF4u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80B2DDF8:
    ctx->pc = 0x80B2DDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDF8u)) return;
    // 80B2DDF8: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80B2DDF8u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80B2DDFC:
    ctx->pc = 0x80B2DDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DDFCu)) return;
    // 80B2DDFC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B2DE00:
    ctx->pc = 0x80B2DE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE00u)) return;
    // 80B2DE00: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80B2DE04:
    ctx->pc = 0x80B2DE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE04u)) return;
    // 80B2DE04: lis     r5, -32589
    ctx->gpr[5] = ((u32)(s32)(-32589) << 16);

label_80B2DE08:
    ctx->pc = 0x80B2DE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE08u)) return;
    // 80B2DE08: addi    r5, r5, -8848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-8848);

label_80B2DE0C:
    ctx->pc = 0x80B2DE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE0Cu)) return;
    // 80B2DE0C: bl      0x8050FD60
    {
            ctx->lr = 0x80B2DE10u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B2DE10:
    ctx->pc = 0x80B2DE10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DE10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80B2DE10: lwz     r5, 32(r3)
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
label_80B2DE14:
    ctx->pc = 0x80B2DE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80B2DE14: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE14u)) return;
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
label_80B2DE18:
    ctx->pc = 0x80B2DE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80B2DE18: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE18u)) return;
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
label_80B2DE1C:
    ctx->pc = 0x80B2DE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80B2DE1C: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE1Cu)) return;
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
label_80B2DE20:
    ctx->pc = 0x80B2DE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80B2DE20: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE20u)) return;
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
label_80B2DE24:
    ctx->pc = 0x80B2DE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80B2DE24: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE24u)) return;
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
label_80B2DE28:
    ctx->pc = 0x80B2DE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE28u)) return;
    // 80B2DE28: lis     r4, -27582
    ctx->gpr[4] = ((u32)(s32)(-27582) << 16);

label_80B2DE2C:
    ctx->pc = 0x80B2DE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE2Cu)) return;
    // 80B2DE2C: addi    r4, r4, -8832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8832);

label_80B2DE30:
    ctx->pc = 0x80B2DE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B2DE30: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE30u)) return;
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
label_80B2DE34:
    ctx->pc = 0x80B2DE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B2DE34: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE34u)) return;
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
label_80B2DE38:
    ctx->pc = 0x80B2DE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B2DE38: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DE38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B2DE38u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DE3C:
    ctx->pc = 0x80B2DE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B2DE3C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE3Cu)) return;
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
label_80B2DE40:
    ctx->pc = 0x80B2DE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B2DE40: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DE40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80B2DE40u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DE44:
    ctx->pc = 0x80B2DE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B2DE44: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE44u)) return;
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
label_80B2DE48:
    ctx->pc = 0x80B2DE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B2DE48: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DE48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80B2DE48u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DE4C:
    ctx->pc = 0x80B2DE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B2DE4C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE4Cu)) return;
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
label_80B2DE50:
    ctx->pc = 0x80B2DE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B2DE50: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DE50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80B2DE50u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DE54:
    ctx->pc = 0x80B2DE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B2DE54: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE54u)) return;
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
label_80B2DE58:
    ctx->pc = 0x80B2DE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B2DE58: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B2DE58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80B2DE58u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DE5C:
    ctx->pc = 0x80B2DE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B2DE5C: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE5Cu)) return;
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
label_80B2DE60:
    ctx->pc = 0x80B2DE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DE60: lwz     r0, 100(r1)
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
label_80B2DE64:
    ctx->pc = 0x80B2DE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B2DE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DE64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DE68:
    ctx->pc = 0x80B2DE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE68u)) return;
    // 80B2DE68: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80B2DE6C:
    ctx->pc = 0x80B2DE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE6Cu)) return;
    // 80B2DE6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DE70:
    ctx->pc = 0x80B2DE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DE70: lwz     r3, 32(r3)
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
label_80B2DE74:
    ctx->pc = 0x80B2DE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DE74: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE74u)) return;
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
label_80B2DE78:
    ctx->pc = 0x80B2DE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE78u)) return;
    // 80B2DE78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DE7C:
    ctx->pc = 0x80B2DE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DE7C: lwz     r3, 32(r3)
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
label_80B2DE80:
    ctx->pc = 0x80B2DE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DE80: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE80u)) return;
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
label_80B2DE84:
    ctx->pc = 0x80B2DE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE84u)) return;
    // 80B2DE84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DE88:
    ctx->pc = 0x80B2DE88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DE88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DE88: lwz     r3, 32(r3)
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
label_80B2DE8C:
    ctx->pc = 0x80B2DE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DE8C: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE8Cu)) return;
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
label_80B2DE90:
    ctx->pc = 0x80B2DE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DE90: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE90u)) return;
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
label_80B2DE94:
    ctx->pc = 0x80B2DE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DE94: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DE94u)) return;
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
label_80B2DE98:
    ctx->pc = 0x80B2DE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DE98u)) return;
    // 80B2DE98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DE9C:
    ctx->pc = 0x80B2DE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DE9C: lwz     r3, 32(r3)
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
label_80B2DEA0:
    ctx->pc = 0x80B2DEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B2DEA0: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B2DEA0u)) return;
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
label_80B2DEA4:
    ctx->pc = 0x80B2DEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEA4u)) return;
    // 80B2DEA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

label_80B2DEA8:
    ctx->pc = 0x80B2DEA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DEA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DEA8: stwu     r1, -16(r1)
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
label_80B2DEAC:
    ctx->pc = 0x80B2DEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B2DEAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DEB0:
    ctx->pc = 0x80B2DEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DEB0: stw     r0, 20(r1)
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
label_80B2DEB4:
    ctx->pc = 0x80B2DEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEB4u)) return;
    // 80B2DEB4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B2DEB8:
    ctx->pc = 0x80B2DEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEB8u)) return;
    // 80B2DEB8: bl      0x80607948
    {
            ctx->lr = 0x80B2DEBCu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80B2DEBC:
    ctx->pc = 0x80B2DEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B2DEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B2DEBC: lwz     r0, 20(r1)
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
label_80B2DEC0:
    ctx->pc = 0x80B2DEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B2DEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B2DEC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B2DEC4:
    ctx->pc = 0x80B2DEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEC4u)) return;
    // 80B2DEC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B2DEC8:
    ctx->pc = 0x80B2DEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B2DEC8u)) return;
    // 80B2DEC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B2D100;
        }
    }

    ctx->pc = 0x80B2DECCu;
    return;
return_dispatch_80B2D100:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B2D138u: goto label_80B2D138;
    case 0x80B2D13Cu: goto label_80B2D13C;
    case 0x80B2D140u: goto label_80B2D140;
    case 0x80B2D168u: goto label_80B2D168;
    case 0x80B2D184u: goto label_80B2D184;
    case 0x80B2D18Cu: goto label_80B2D18C;
    case 0x80B2D194u: goto label_80B2D194;
    case 0x80B2D1BCu: goto label_80B2D1BC;
    case 0x80B2D1C4u: goto label_80B2D1C4;
    case 0x80B2D1D8u: goto label_80B2D1D8;
    case 0x80B2D1E0u: goto label_80B2D1E0;
    case 0x80B2D1E8u: goto label_80B2D1E8;
    case 0x80B2D1ECu: goto label_80B2D1EC;
    case 0x80B2D1F4u: goto label_80B2D1F4;
    case 0x80B2D21Cu: goto label_80B2D21C;
    case 0x80B2D224u: goto label_80B2D224;
    case 0x80B2D230u: goto label_80B2D230;
    case 0x80B2D274u: goto label_80B2D274;
    case 0x80B2D27Cu: goto label_80B2D27C;
    case 0x80B2D284u: goto label_80B2D284;
    case 0x80B2D288u: goto label_80B2D288;
    case 0x80B2D290u: goto label_80B2D290;
    case 0x80B2D2B8u: goto label_80B2D2B8;
    case 0x80B2D2C0u: goto label_80B2D2C0;
    case 0x80B2D2CCu: goto label_80B2D2CC;
    case 0x80B2D2FCu: goto label_80B2D2FC;
    case 0x80B2D318u: goto label_80B2D318;
    case 0x80B2D320u: goto label_80B2D320;
    case 0x80B2D344u: goto label_80B2D344;
    case 0x80B2D374u: goto label_80B2D374;
    case 0x80B2D384u: goto label_80B2D384;
    case 0x80B2D38Cu: goto label_80B2D38C;
    case 0x80B2D394u: goto label_80B2D394;
    case 0x80B2D3A0u: goto label_80B2D3A0;
    case 0x80B2D3A8u: goto label_80B2D3A8;
    case 0x80B2D3B0u: goto label_80B2D3B0;
    case 0x80B2D3BCu: goto label_80B2D3BC;
    case 0x80B2D3C4u: goto label_80B2D3C4;
    case 0x80B2D3CCu: goto label_80B2D3CC;
    case 0x80B2D3F4u: goto label_80B2D3F4;
    case 0x80B2D3FCu: goto label_80B2D3FC;
    case 0x80B2D424u: goto label_80B2D424;
    case 0x80B2D42Cu: goto label_80B2D42C;
    case 0x80B2D434u: goto label_80B2D434;
    case 0x80B2D45Cu: goto label_80B2D45C;
    case 0x80B2D464u: goto label_80B2D464;
    case 0x80B2D468u: goto label_80B2D468;
    case 0x80B2D470u: goto label_80B2D470;
    case 0x80B2D498u: goto label_80B2D498;
    case 0x80B2D4A0u: goto label_80B2D4A0;
    case 0x80B2D4C8u: goto label_80B2D4C8;
    case 0x80B2D4D0u: goto label_80B2D4D0;
    case 0x80B2D4D8u: goto label_80B2D4D8;
    case 0x80B2D500u: goto label_80B2D500;
    case 0x80B2D508u: goto label_80B2D508;
    case 0x80B2D514u: goto label_80B2D514;
    case 0x80B2D538u: goto label_80B2D538;
    case 0x80B2D540u: goto label_80B2D540;
    case 0x80B2D568u: goto label_80B2D568;
    case 0x80B2D598u: goto label_80B2D598;
    case 0x80B2D5B4u: goto label_80B2D5B4;
    case 0x80B2D5E4u: goto label_80B2D5E4;
    case 0x80B2D600u: goto label_80B2D600;
    case 0x80B2D608u: goto label_80B2D608;
    case 0x80B2D614u: goto label_80B2D614;
    case 0x80B2D640u: goto label_80B2D640;
    case 0x80B2D648u: goto label_80B2D648;
    case 0x80B2D64Cu: goto label_80B2D64C;
    case 0x80B2D654u: goto label_80B2D654;
    case 0x80B2D658u: goto label_80B2D658;
    case 0x80B2D674u: goto label_80B2D674;
    case 0x80B2D680u: goto label_80B2D680;
    case 0x80B2D69Cu: goto label_80B2D69C;
    case 0x80B2D6A8u: goto label_80B2D6A8;
    case 0x80B2D6B0u: goto label_80B2D6B0;
    case 0x80B2D6D4u: goto label_80B2D6D4;
    case 0x80B2D6DCu: goto label_80B2D6DC;
    case 0x80B2D6E0u: goto label_80B2D6E0;
    case 0x80B2D6FCu: goto label_80B2D6FC;
    case 0x80B2D700u: goto label_80B2D700;
    case 0x80B2D71Cu: goto label_80B2D71C;
    case 0x80B2D720u: goto label_80B2D720;
    case 0x80B2D728u: goto label_80B2D728;
    case 0x80B2D734u: goto label_80B2D734;
    case 0x80B2D73Cu: goto label_80B2D73C;
    case 0x80B2D764u: goto label_80B2D764;
    case 0x80B2D768u: goto label_80B2D768;
    case 0x80B2D770u: goto label_80B2D770;
    case 0x80B2D774u: goto label_80B2D774;
    case 0x80B2D77Cu: goto label_80B2D77C;
    case 0x80B2D7A4u: goto label_80B2D7A4;
    case 0x80B2D7D4u: goto label_80B2D7D4;
    case 0x80B2D7F0u: goto label_80B2D7F0;
    case 0x80B2D7F8u: goto label_80B2D7F8;
    case 0x80B2D7FCu: goto label_80B2D7FC;
    case 0x80B2D804u: goto label_80B2D804;
    case 0x80B2D810u: goto label_80B2D810;
    case 0x80B2D818u: goto label_80B2D818;
    case 0x80B2D840u: goto label_80B2D840;
    case 0x80B2D848u: goto label_80B2D848;
    case 0x80B2D84Cu: goto label_80B2D84C;
    case 0x80B2D854u: goto label_80B2D854;
    case 0x80B2D858u: goto label_80B2D858;
    case 0x80B2D860u: goto label_80B2D860;
    case 0x80B2D86Cu: goto label_80B2D86C;
    case 0x80B2D874u: goto label_80B2D874;
    case 0x80B2D898u: goto label_80B2D898;
    case 0x80B2D8A0u: goto label_80B2D8A0;
    case 0x80B2D8A4u: goto label_80B2D8A4;
    case 0x80B2D8ACu: goto label_80B2D8AC;
    case 0x80B2D8B0u: goto label_80B2D8B0;
    case 0x80B2D8E0u: goto label_80B2D8E0;
    case 0x80B2D8FCu: goto label_80B2D8FC;
    case 0x80B2D904u: goto label_80B2D904;
    case 0x80B2D908u: goto label_80B2D908;
    case 0x80B2D910u: goto label_80B2D910;
    case 0x80B2D914u: goto label_80B2D914;
    case 0x80B2D91Cu: goto label_80B2D91C;
    case 0x80B2D928u: goto label_80B2D928;
    case 0x80B2D930u: goto label_80B2D930;
    case 0x80B2D954u: goto label_80B2D954;
    case 0x80B2D95Cu: goto label_80B2D95C;
    case 0x80B2D98Cu: goto label_80B2D98C;
    case 0x80B2D9A8u: goto label_80B2D9A8;
    case 0x80B2D9ACu: goto label_80B2D9AC;
    case 0x80B2D9B4u: goto label_80B2D9B4;
    case 0x80B2D9B8u: goto label_80B2D9B8;
    case 0x80B2D9C0u: goto label_80B2D9C0;
    case 0x80B2D9C8u: goto label_80B2D9C8;
    case 0x80B2D9D4u: goto label_80B2D9D4;
    case 0x80B2D9F8u: goto label_80B2D9F8;
    case 0x80B2DA00u: goto label_80B2DA00;
    case 0x80B2DA28u: goto label_80B2DA28;
    case 0x80B2DA30u: goto label_80B2DA30;
    case 0x80B2DA58u: goto label_80B2DA58;
    case 0x80B2DA60u: goto label_80B2DA60;
    case 0x80B2DA88u: goto label_80B2DA88;
    case 0x80B2DA90u: goto label_80B2DA90;
    case 0x80B2DAC0u: goto label_80B2DAC0;
    case 0x80B2DADCu: goto label_80B2DADC;
    case 0x80B2DAE4u: goto label_80B2DAE4;
    case 0x80B2DAE8u: goto label_80B2DAE8;
    case 0x80B2DAF0u: goto label_80B2DAF0;
    case 0x80B2DAF4u: goto label_80B2DAF4;
    case 0x80B2DAFCu: goto label_80B2DAFC;
    case 0x80B2DB08u: goto label_80B2DB08;
    case 0x80B2DB0Cu: goto label_80B2DB0C;
    case 0x80B2DB14u: goto label_80B2DB14;
    case 0x80B2DB18u: goto label_80B2DB18;
    case 0x80B2DB20u: goto label_80B2DB20;
    case 0x80B2DB48u: goto label_80B2DB48;
    case 0x80B2DB50u: goto label_80B2DB50;
    case 0x80B2DB64u: goto label_80B2DB64;
    case 0x80B2DB6Cu: goto label_80B2DB6C;
    case 0x80B2DB74u: goto label_80B2DB74;
    case 0x80B2DB8Cu: goto label_80B2DB8C;
    case 0x80B2DBC4u: goto label_80B2DBC4;
    case 0x80B2DC50u: goto label_80B2DC50;
    case 0x80B2DC5Cu: goto label_80B2DC5C;
    case 0x80B2DCECu: goto label_80B2DCEC;
    case 0x80B2DCF4u: goto label_80B2DCF4;
    case 0x80B2DD5Cu: goto label_80B2DD5C;
    case 0x80B2DDA4u: goto label_80B2DDA4;
    case 0x80B2DE10u: goto label_80B2DE10;
    case 0x80B2DEBCu: goto label_80B2DEBC;
    default: return;
    }
}

