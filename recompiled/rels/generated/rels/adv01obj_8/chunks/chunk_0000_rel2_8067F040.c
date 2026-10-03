// DolRecomp output
#include "../generated.h"

void func_8067F040(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_8067F040[1396] = {
        &&label_8067F040,
        &&label_8067F044,
        &&label_8067F048,
        &&label_8067F04C,
        &&label_8067F050,
        &&label_8067F054,
        &&label_8067F058,
        &&label_8067F05C,
        &&label_8067F060,
        &&label_8067F064,
        &&label_8067F068,
        &&label_8067F06C,
        &&label_8067F070,
        &&label_8067F074,
        &&label_8067F078,
        &&label_8067F07C,
        &&label_8067F080,
        &&label_8067F084,
        &&label_8067F088,
        &&label_8067F08C,
        &&label_8067F090,
        &&label_8067F094,
        &&label_8067F098,
        &&label_8067F09C,
        &&label_8067F0A0,
        &&label_8067F0A4,
        &&label_8067F0A8,
        &&label_8067F0AC,
        &&label_8067F0B0,
        &&label_8067F0B4,
        &&label_8067F0B8,
        &&label_8067F0BC,
        &&label_8067F0C0,
        &&label_8067F0C4,
        &&label_8067F0C8,
        &&label_8067F0CC,
        &&label_8067F0D0,
        &&label_8067F0D4,
        &&label_8067F0D8,
        &&label_8067F0DC,
        &&label_8067F0E0,
        &&label_8067F0E4,
        &&label_8067F0E8,
        &&label_8067F0EC,
        &&label_8067F0F0,
        &&label_8067F0F4,
        &&label_8067F0F8,
        &&label_8067F0FC,
        &&label_8067F100,
        &&label_8067F104,
        &&label_8067F108,
        &&label_8067F10C,
        &&label_8067F110,
        &&label_8067F114,
        &&label_8067F118,
        &&label_8067F11C,
        &&label_8067F120,
        &&label_8067F124,
        &&label_8067F128,
        &&label_8067F12C,
        &&label_8067F130,
        &&label_8067F134,
        &&label_8067F138,
        &&label_8067F13C,
        &&label_8067F140,
        &&label_8067F144,
        &&label_8067F148,
        &&label_8067F14C,
        &&label_8067F150,
        &&label_8067F154,
        &&label_8067F158,
        &&label_8067F15C,
        &&label_8067F160,
        &&label_8067F164,
        &&label_8067F168,
        &&label_8067F16C,
        &&label_8067F170,
        &&label_8067F174,
        &&label_8067F178,
        &&label_8067F17C,
        &&label_8067F180,
        &&label_8067F184,
        &&label_8067F188,
        &&label_8067F18C,
        &&label_8067F190,
        &&label_8067F194,
        &&label_8067F198,
        &&label_8067F19C,
        &&label_8067F1A0,
        &&label_8067F1A4,
        &&label_8067F1A8,
        &&label_8067F1AC,
        &&label_8067F1B0,
        &&label_8067F1B4,
        &&label_8067F1B8,
        &&label_8067F1BC,
        &&label_8067F1C0,
        &&label_8067F1C4,
        &&label_8067F1C8,
        &&label_8067F1CC,
        &&label_8067F1D0,
        &&label_8067F1D4,
        &&label_8067F1D8,
        &&label_8067F1DC,
        &&label_8067F1E0,
        &&label_8067F1E4,
        &&label_8067F1E8,
        &&label_8067F1EC,
        &&label_8067F1F0,
        &&label_8067F1F4,
        &&label_8067F1F8,
        &&label_8067F1FC,
        &&label_8067F200,
        &&label_8067F204,
        &&label_8067F208,
        &&label_8067F20C,
        &&label_8067F210,
        &&label_8067F214,
        &&label_8067F218,
        &&label_8067F21C,
        &&label_8067F220,
        &&label_8067F224,
        &&label_8067F228,
        &&label_8067F22C,
        &&label_8067F230,
        &&label_8067F234,
        &&label_8067F238,
        &&label_8067F23C,
        &&label_8067F240,
        &&label_8067F244,
        &&label_8067F248,
        &&label_8067F24C,
        &&label_8067F250,
        &&label_8067F254,
        &&label_8067F258,
        &&label_8067F25C,
        &&label_8067F260,
        &&label_8067F264,
        &&label_8067F268,
        &&label_8067F26C,
        &&label_8067F270,
        &&label_8067F274,
        &&label_8067F278,
        &&label_8067F27C,
        &&label_8067F280,
        &&label_8067F284,
        &&label_8067F288,
        &&label_8067F28C,
        &&label_8067F290,
        &&label_8067F294,
        &&label_8067F298,
        &&label_8067F29C,
        &&label_8067F2A0,
        &&label_8067F2A4,
        &&label_8067F2A8,
        &&label_8067F2AC,
        &&label_8067F2B0,
        &&label_8067F2B4,
        &&label_8067F2B8,
        &&label_8067F2BC,
        &&label_8067F2C0,
        &&label_8067F2C4,
        &&label_8067F2C8,
        &&label_8067F2CC,
        &&label_8067F2D0,
        &&label_8067F2D4,
        &&label_8067F2D8,
        &&label_8067F2DC,
        &&label_8067F2E0,
        &&label_8067F2E4,
        &&label_8067F2E8,
        &&label_8067F2EC,
        &&label_8067F2F0,
        &&label_8067F2F4,
        &&label_8067F2F8,
        &&label_8067F2FC,
        &&label_8067F300,
        &&label_8067F304,
        &&label_8067F308,
        &&label_8067F30C,
        &&label_8067F310,
        &&label_8067F314,
        &&label_8067F318,
        &&label_8067F31C,
        &&label_8067F320,
        &&label_8067F324,
        &&label_8067F328,
        &&label_8067F32C,
        &&label_8067F330,
        &&label_8067F334,
        &&label_8067F338,
        &&label_8067F33C,
        &&label_8067F340,
        &&label_8067F344,
        &&label_8067F348,
        &&label_8067F34C,
        &&label_8067F350,
        &&label_8067F354,
        &&label_8067F358,
        &&label_8067F35C,
        &&label_8067F360,
        &&label_8067F364,
        &&label_8067F368,
        &&label_8067F36C,
        &&label_8067F370,
        &&label_8067F374,
        &&label_8067F378,
        &&label_8067F37C,
        &&label_8067F380,
        &&label_8067F384,
        &&label_8067F388,
        &&label_8067F38C,
        &&label_8067F390,
        &&label_8067F394,
        &&label_8067F398,
        &&label_8067F39C,
        &&label_8067F3A0,
        &&label_8067F3A4,
        &&label_8067F3A8,
        &&label_8067F3AC,
        &&label_8067F3B0,
        &&label_8067F3B4,
        &&label_8067F3B8,
        &&label_8067F3BC,
        &&label_8067F3C0,
        &&label_8067F3C4,
        &&label_8067F3C8,
        &&label_8067F3CC,
        &&label_8067F3D0,
        &&label_8067F3D4,
        &&label_8067F3D8,
        &&label_8067F3DC,
        &&label_8067F3E0,
        &&label_8067F3E4,
        &&label_8067F3E8,
        &&label_8067F3EC,
        &&label_8067F3F0,
        &&label_8067F3F4,
        &&label_8067F3F8,
        &&label_8067F3FC,
        &&label_8067F400,
        &&label_8067F404,
        &&label_8067F408,
        &&label_8067F40C,
        &&label_8067F410,
        &&label_8067F414,
        &&label_8067F418,
        &&label_8067F41C,
        &&label_8067F420,
        &&label_8067F424,
        &&label_8067F428,
        &&label_8067F42C,
        &&label_8067F430,
        &&label_8067F434,
        &&label_8067F438,
        &&label_8067F43C,
        &&label_8067F440,
        &&label_8067F444,
        &&label_8067F448,
        &&label_8067F44C,
        &&label_8067F450,
        &&label_8067F454,
        &&label_8067F458,
        &&label_8067F45C,
        &&label_8067F460,
        &&label_8067F464,
        &&label_8067F468,
        &&label_8067F46C,
        &&label_8067F470,
        &&label_8067F474,
        &&label_8067F478,
        &&label_8067F47C,
        &&label_8067F480,
        &&label_8067F484,
        &&label_8067F488,
        &&label_8067F48C,
        &&label_8067F490,
        &&label_8067F494,
        &&label_8067F498,
        &&label_8067F49C,
        &&label_8067F4A0,
        &&label_8067F4A4,
        &&label_8067F4A8,
        &&label_8067F4AC,
        &&label_8067F4B0,
        &&label_8067F4B4,
        &&label_8067F4B8,
        &&label_8067F4BC,
        &&label_8067F4C0,
        &&label_8067F4C4,
        &&label_8067F4C8,
        &&label_8067F4CC,
        &&label_8067F4D0,
        &&label_8067F4D4,
        &&label_8067F4D8,
        &&label_8067F4DC,
        &&label_8067F4E0,
        &&label_8067F4E4,
        &&label_8067F4E8,
        &&label_8067F4EC,
        &&label_8067F4F0,
        &&label_8067F4F4,
        &&label_8067F4F8,
        &&label_8067F4FC,
        &&label_8067F500,
        &&label_8067F504,
        &&label_8067F508,
        &&label_8067F50C,
        &&label_8067F510,
        &&label_8067F514,
        &&label_8067F518,
        &&label_8067F51C,
        &&label_8067F520,
        &&label_8067F524,
        &&label_8067F528,
        &&label_8067F52C,
        &&label_8067F530,
        &&label_8067F534,
        &&label_8067F538,
        &&label_8067F53C,
        &&label_8067F540,
        &&label_8067F544,
        &&label_8067F548,
        &&label_8067F54C,
        &&label_8067F550,
        &&label_8067F554,
        &&label_8067F558,
        &&label_8067F55C,
        &&label_8067F560,
        &&label_8067F564,
        &&label_8067F568,
        &&label_8067F56C,
        &&label_8067F570,
        &&label_8067F574,
        &&label_8067F578,
        &&label_8067F57C,
        &&label_8067F580,
        &&label_8067F584,
        &&label_8067F588,
        &&label_8067F58C,
        &&label_8067F590,
        &&label_8067F594,
        &&label_8067F598,
        &&label_8067F59C,
        &&label_8067F5A0,
        &&label_8067F5A4,
        &&label_8067F5A8,
        &&label_8067F5AC,
        &&label_8067F5B0,
        &&label_8067F5B4,
        &&label_8067F5B8,
        &&label_8067F5BC,
        &&label_8067F5C0,
        &&label_8067F5C4,
        &&label_8067F5C8,
        &&label_8067F5CC,
        &&label_8067F5D0,
        &&label_8067F5D4,
        &&label_8067F5D8,
        &&label_8067F5DC,
        &&label_8067F5E0,
        &&label_8067F5E4,
        &&label_8067F5E8,
        &&label_8067F5EC,
        &&label_8067F5F0,
        &&label_8067F5F4,
        &&label_8067F5F8,
        &&label_8067F5FC,
        &&label_8067F600,
        &&label_8067F604,
        &&label_8067F608,
        &&label_8067F60C,
        &&label_8067F610,
        &&label_8067F614,
        &&label_8067F618,
        &&label_8067F61C,
        &&label_8067F620,
        &&label_8067F624,
        &&label_8067F628,
        &&label_8067F62C,
        &&label_8067F630,
        &&label_8067F634,
        &&label_8067F638,
        &&label_8067F63C,
        &&label_8067F640,
        &&label_8067F644,
        &&label_8067F648,
        &&label_8067F64C,
        &&label_8067F650,
        &&label_8067F654,
        &&label_8067F658,
        &&label_8067F65C,
        &&label_8067F660,
        &&label_8067F664,
        &&label_8067F668,
        &&label_8067F66C,
        &&label_8067F670,
        &&label_8067F674,
        &&label_8067F678,
        &&label_8067F67C,
        &&label_8067F680,
        &&label_8067F684,
        &&label_8067F688,
        &&label_8067F68C,
        &&label_8067F690,
        &&label_8067F694,
        &&label_8067F698,
        &&label_8067F69C,
        &&label_8067F6A0,
        &&label_8067F6A4,
        &&label_8067F6A8,
        &&label_8067F6AC,
        &&label_8067F6B0,
        &&label_8067F6B4,
        &&label_8067F6B8,
        &&label_8067F6BC,
        &&label_8067F6C0,
        &&label_8067F6C4,
        &&label_8067F6C8,
        &&label_8067F6CC,
        &&label_8067F6D0,
        &&label_8067F6D4,
        &&label_8067F6D8,
        &&label_8067F6DC,
        &&label_8067F6E0,
        &&label_8067F6E4,
        &&label_8067F6E8,
        &&label_8067F6EC,
        &&label_8067F6F0,
        &&label_8067F6F4,
        &&label_8067F6F8,
        &&label_8067F6FC,
        &&label_8067F700,
        &&label_8067F704,
        &&label_8067F708,
        &&label_8067F70C,
        &&label_8067F710,
        &&label_8067F714,
        &&label_8067F718,
        &&label_8067F71C,
        &&label_8067F720,
        &&label_8067F724,
        &&label_8067F728,
        &&label_8067F72C,
        &&label_8067F730,
        &&label_8067F734,
        &&label_8067F738,
        &&label_8067F73C,
        &&label_8067F740,
        &&label_8067F744,
        &&label_8067F748,
        &&label_8067F74C,
        &&label_8067F750,
        &&label_8067F754,
        &&label_8067F758,
        &&label_8067F75C,
        &&label_8067F760,
        &&label_8067F764,
        &&label_8067F768,
        &&label_8067F76C,
        &&label_8067F770,
        &&label_8067F774,
        &&label_8067F778,
        &&label_8067F77C,
        &&label_8067F780,
        &&label_8067F784,
        &&label_8067F788,
        &&label_8067F78C,
        &&label_8067F790,
        &&label_8067F794,
        &&label_8067F798,
        &&label_8067F79C,
        &&label_8067F7A0,
        &&label_8067F7A4,
        &&label_8067F7A8,
        &&label_8067F7AC,
        &&label_8067F7B0,
        &&label_8067F7B4,
        &&label_8067F7B8,
        &&label_8067F7BC,
        &&label_8067F7C0,
        &&label_8067F7C4,
        &&label_8067F7C8,
        &&label_8067F7CC,
        &&label_8067F7D0,
        &&label_8067F7D4,
        &&label_8067F7D8,
        &&label_8067F7DC,
        &&label_8067F7E0,
        &&label_8067F7E4,
        &&label_8067F7E8,
        &&label_8067F7EC,
        &&label_8067F7F0,
        &&label_8067F7F4,
        &&label_8067F7F8,
        &&label_8067F7FC,
        &&label_8067F800,
        &&label_8067F804,
        &&label_8067F808,
        &&label_8067F80C,
        &&label_8067F810,
        &&label_8067F814,
        &&label_8067F818,
        &&label_8067F81C,
        &&label_8067F820,
        &&label_8067F824,
        &&label_8067F828,
        &&label_8067F82C,
        &&label_8067F830,
        &&label_8067F834,
        &&label_8067F838,
        &&label_8067F83C,
        &&label_8067F840,
        &&label_8067F844,
        &&label_8067F848,
        &&label_8067F84C,
        &&label_8067F850,
        &&label_8067F854,
        &&label_8067F858,
        &&label_8067F85C,
        &&label_8067F860,
        &&label_8067F864,
        &&label_8067F868,
        &&label_8067F86C,
        &&label_8067F870,
        &&label_8067F874,
        &&label_8067F878,
        &&label_8067F87C,
        &&label_8067F880,
        &&label_8067F884,
        &&label_8067F888,
        &&label_8067F88C,
        &&label_8067F890,
        &&label_8067F894,
        &&label_8067F898,
        &&label_8067F89C,
        &&label_8067F8A0,
        &&label_8067F8A4,
        &&label_8067F8A8,
        &&label_8067F8AC,
        &&label_8067F8B0,
        &&label_8067F8B4,
        &&label_8067F8B8,
        &&label_8067F8BC,
        &&label_8067F8C0,
        &&label_8067F8C4,
        &&label_8067F8C8,
        &&label_8067F8CC,
        &&label_8067F8D0,
        &&label_8067F8D4,
        &&label_8067F8D8,
        &&label_8067F8DC,
        &&label_8067F8E0,
        &&label_8067F8E4,
        &&label_8067F8E8,
        &&label_8067F8EC,
        &&label_8067F8F0,
        &&label_8067F8F4,
        &&label_8067F8F8,
        &&label_8067F8FC,
        &&label_8067F900,
        &&label_8067F904,
        &&label_8067F908,
        &&label_8067F90C,
        &&label_8067F910,
        &&label_8067F914,
        &&label_8067F918,
        &&label_8067F91C,
        &&label_8067F920,
        &&label_8067F924,
        &&label_8067F928,
        &&label_8067F92C,
        &&label_8067F930,
        &&label_8067F934,
        &&label_8067F938,
        &&label_8067F93C,
        &&label_8067F940,
        &&label_8067F944,
        &&label_8067F948,
        &&label_8067F94C,
        &&label_8067F950,
        &&label_8067F954,
        &&label_8067F958,
        &&label_8067F95C,
        &&label_8067F960,
        &&label_8067F964,
        &&label_8067F968,
        &&label_8067F96C,
        &&label_8067F970,
        &&label_8067F974,
        &&label_8067F978,
        &&label_8067F97C,
        &&label_8067F980,
        &&label_8067F984,
        &&label_8067F988,
        &&label_8067F98C,
        &&label_8067F990,
        &&label_8067F994,
        &&label_8067F998,
        &&label_8067F99C,
        &&label_8067F9A0,
        &&label_8067F9A4,
        &&label_8067F9A8,
        &&label_8067F9AC,
        &&label_8067F9B0,
        &&label_8067F9B4,
        &&label_8067F9B8,
        &&label_8067F9BC,
        &&label_8067F9C0,
        &&label_8067F9C4,
        &&label_8067F9C8,
        &&label_8067F9CC,
        &&label_8067F9D0,
        &&label_8067F9D4,
        &&label_8067F9D8,
        &&label_8067F9DC,
        &&label_8067F9E0,
        &&label_8067F9E4,
        &&label_8067F9E8,
        &&label_8067F9EC,
        &&label_8067F9F0,
        &&label_8067F9F4,
        &&label_8067F9F8,
        &&label_8067F9FC,
        &&label_8067FA00,
        &&label_8067FA04,
        &&label_8067FA08,
        &&label_8067FA0C,
        &&label_8067FA10,
        &&label_8067FA14,
        &&label_8067FA18,
        &&label_8067FA1C,
        &&label_8067FA20,
        &&label_8067FA24,
        &&label_8067FA28,
        &&label_8067FA2C,
        &&label_8067FA30,
        &&label_8067FA34,
        &&label_8067FA38,
        &&label_8067FA3C,
        &&label_8067FA40,
        &&label_8067FA44,
        &&label_8067FA48,
        &&label_8067FA4C,
        &&label_8067FA50,
        &&label_8067FA54,
        &&label_8067FA58,
        &&label_8067FA5C,
        &&label_8067FA60,
        &&label_8067FA64,
        &&label_8067FA68,
        &&label_8067FA6C,
        &&label_8067FA70,
        &&label_8067FA74,
        &&label_8067FA78,
        &&label_8067FA7C,
        &&label_8067FA80,
        &&label_8067FA84,
        &&label_8067FA88,
        &&label_8067FA8C,
        &&label_8067FA90,
        &&label_8067FA94,
        &&label_8067FA98,
        &&label_8067FA9C,
        &&label_8067FAA0,
        &&label_8067FAA4,
        &&label_8067FAA8,
        &&label_8067FAAC,
        &&label_8067FAB0,
        &&label_8067FAB4,
        &&label_8067FAB8,
        &&label_8067FABC,
        &&label_8067FAC0,
        &&label_8067FAC4,
        &&label_8067FAC8,
        &&label_8067FACC,
        &&label_8067FAD0,
        &&label_8067FAD4,
        &&label_8067FAD8,
        &&label_8067FADC,
        &&label_8067FAE0,
        &&label_8067FAE4,
        &&label_8067FAE8,
        &&label_8067FAEC,
        &&label_8067FAF0,
        &&label_8067FAF4,
        &&label_8067FAF8,
        &&label_8067FAFC,
        &&label_8067FB00,
        &&label_8067FB04,
        &&label_8067FB08,
        &&label_8067FB0C,
        &&label_8067FB10,
        &&label_8067FB14,
        &&label_8067FB18,
        &&label_8067FB1C,
        &&label_8067FB20,
        &&label_8067FB24,
        &&label_8067FB28,
        &&label_8067FB2C,
        &&label_8067FB30,
        &&label_8067FB34,
        &&label_8067FB38,
        &&label_8067FB3C,
        &&label_8067FB40,
        &&label_8067FB44,
        &&label_8067FB48,
        &&label_8067FB4C,
        &&label_8067FB50,
        &&label_8067FB54,
        &&label_8067FB58,
        &&label_8067FB5C,
        &&label_8067FB60,
        &&label_8067FB64,
        &&label_8067FB68,
        &&label_8067FB6C,
        &&label_8067FB70,
        &&label_8067FB74,
        &&label_8067FB78,
        &&label_8067FB7C,
        &&label_8067FB80,
        &&label_8067FB84,
        &&label_8067FB88,
        &&label_8067FB8C,
        &&label_8067FB90,
        &&label_8067FB94,
        &&label_8067FB98,
        &&label_8067FB9C,
        &&label_8067FBA0,
        &&label_8067FBA4,
        &&label_8067FBA8,
        &&label_8067FBAC,
        &&label_8067FBB0,
        &&label_8067FBB4,
        &&label_8067FBB8,
        &&label_8067FBBC,
        &&label_8067FBC0,
        &&label_8067FBC4,
        &&label_8067FBC8,
        &&label_8067FBCC,
        &&label_8067FBD0,
        &&label_8067FBD4,
        &&label_8067FBD8,
        &&label_8067FBDC,
        &&label_8067FBE0,
        &&label_8067FBE4,
        &&label_8067FBE8,
        &&label_8067FBEC,
        &&label_8067FBF0,
        &&label_8067FBF4,
        &&label_8067FBF8,
        &&label_8067FBFC,
        &&label_8067FC00,
        &&label_8067FC04,
        &&label_8067FC08,
        &&label_8067FC0C,
        &&label_8067FC10,
        &&label_8067FC14,
        &&label_8067FC18,
        &&label_8067FC1C,
        &&label_8067FC20,
        &&label_8067FC24,
        &&label_8067FC28,
        &&label_8067FC2C,
        &&label_8067FC30,
        &&label_8067FC34,
        &&label_8067FC38,
        &&label_8067FC3C,
        &&label_8067FC40,
        &&label_8067FC44,
        &&label_8067FC48,
        &&label_8067FC4C,
        &&label_8067FC50,
        &&label_8067FC54,
        &&label_8067FC58,
        &&label_8067FC5C,
        &&label_8067FC60,
        &&label_8067FC64,
        &&label_8067FC68,
        &&label_8067FC6C,
        &&label_8067FC70,
        &&label_8067FC74,
        &&label_8067FC78,
        &&label_8067FC7C,
        &&label_8067FC80,
        &&label_8067FC84,
        &&label_8067FC88,
        &&label_8067FC8C,
        &&label_8067FC90,
        &&label_8067FC94,
        &&label_8067FC98,
        &&label_8067FC9C,
        &&label_8067FCA0,
        &&label_8067FCA4,
        &&label_8067FCA8,
        &&label_8067FCAC,
        &&label_8067FCB0,
        &&label_8067FCB4,
        &&label_8067FCB8,
        &&label_8067FCBC,
        &&label_8067FCC0,
        &&label_8067FCC4,
        &&label_8067FCC8,
        &&label_8067FCCC,
        &&label_8067FCD0,
        &&label_8067FCD4,
        &&label_8067FCD8,
        &&label_8067FCDC,
        &&label_8067FCE0,
        &&label_8067FCE4,
        &&label_8067FCE8,
        &&label_8067FCEC,
        &&label_8067FCF0,
        &&label_8067FCF4,
        &&label_8067FCF8,
        &&label_8067FCFC,
        &&label_8067FD00,
        &&label_8067FD04,
        &&label_8067FD08,
        &&label_8067FD0C,
        &&label_8067FD10,
        &&label_8067FD14,
        &&label_8067FD18,
        &&label_8067FD1C,
        &&label_8067FD20,
        &&label_8067FD24,
        &&label_8067FD28,
        &&label_8067FD2C,
        &&label_8067FD30,
        &&label_8067FD34,
        &&label_8067FD38,
        &&label_8067FD3C,
        &&label_8067FD40,
        &&label_8067FD44,
        &&label_8067FD48,
        &&label_8067FD4C,
        &&label_8067FD50,
        &&label_8067FD54,
        &&label_8067FD58,
        &&label_8067FD5C,
        &&label_8067FD60,
        &&label_8067FD64,
        &&label_8067FD68,
        &&label_8067FD6C,
        &&label_8067FD70,
        &&label_8067FD74,
        &&label_8067FD78,
        &&label_8067FD7C,
        &&label_8067FD80,
        &&label_8067FD84,
        &&label_8067FD88,
        &&label_8067FD8C,
        &&label_8067FD90,
        &&label_8067FD94,
        &&label_8067FD98,
        &&label_8067FD9C,
        &&label_8067FDA0,
        &&label_8067FDA4,
        &&label_8067FDA8,
        &&label_8067FDAC,
        &&label_8067FDB0,
        &&label_8067FDB4,
        &&label_8067FDB8,
        &&label_8067FDBC,
        &&label_8067FDC0,
        &&label_8067FDC4,
        &&label_8067FDC8,
        &&label_8067FDCC,
        &&label_8067FDD0,
        &&label_8067FDD4,
        &&label_8067FDD8,
        &&label_8067FDDC,
        &&label_8067FDE0,
        &&label_8067FDE4,
        &&label_8067FDE8,
        &&label_8067FDEC,
        &&label_8067FDF0,
        &&label_8067FDF4,
        &&label_8067FDF8,
        &&label_8067FDFC,
        &&label_8067FE00,
        &&label_8067FE04,
        &&label_8067FE08,
        &&label_8067FE0C,
        &&label_8067FE10,
        &&label_8067FE14,
        &&label_8067FE18,
        &&label_8067FE1C,
        &&label_8067FE20,
        &&label_8067FE24,
        &&label_8067FE28,
        &&label_8067FE2C,
        &&label_8067FE30,
        &&label_8067FE34,
        &&label_8067FE38,
        &&label_8067FE3C,
        &&label_8067FE40,
        &&label_8067FE44,
        &&label_8067FE48,
        &&label_8067FE4C,
        &&label_8067FE50,
        &&label_8067FE54,
        &&label_8067FE58,
        &&label_8067FE5C,
        &&label_8067FE60,
        &&label_8067FE64,
        &&label_8067FE68,
        &&label_8067FE6C,
        &&label_8067FE70,
        &&label_8067FE74,
        &&label_8067FE78,
        &&label_8067FE7C,
        &&label_8067FE80,
        &&label_8067FE84,
        &&label_8067FE88,
        &&label_8067FE8C,
        &&label_8067FE90,
        &&label_8067FE94,
        &&label_8067FE98,
        &&label_8067FE9C,
        &&label_8067FEA0,
        &&label_8067FEA4,
        &&label_8067FEA8,
        &&label_8067FEAC,
        &&label_8067FEB0,
        &&label_8067FEB4,
        &&label_8067FEB8,
        &&label_8067FEBC,
        &&label_8067FEC0,
        &&label_8067FEC4,
        &&label_8067FEC8,
        &&label_8067FECC,
        &&label_8067FED0,
        &&label_8067FED4,
        &&label_8067FED8,
        &&label_8067FEDC,
        &&label_8067FEE0,
        &&label_8067FEE4,
        &&label_8067FEE8,
        &&label_8067FEEC,
        &&label_8067FEF0,
        &&label_8067FEF4,
        &&label_8067FEF8,
        &&label_8067FEFC,
        &&label_8067FF00,
        &&label_8067FF04,
        &&label_8067FF08,
        &&label_8067FF0C,
        &&label_8067FF10,
        &&label_8067FF14,
        &&label_8067FF18,
        &&label_8067FF1C,
        &&label_8067FF20,
        &&label_8067FF24,
        &&label_8067FF28,
        &&label_8067FF2C,
        &&label_8067FF30,
        &&label_8067FF34,
        &&label_8067FF38,
        &&label_8067FF3C,
        &&label_8067FF40,
        &&label_8067FF44,
        &&label_8067FF48,
        &&label_8067FF4C,
        &&label_8067FF50,
        &&label_8067FF54,
        &&label_8067FF58,
        &&label_8067FF5C,
        &&label_8067FF60,
        &&label_8067FF64,
        &&label_8067FF68,
        &&label_8067FF6C,
        &&label_8067FF70,
        &&label_8067FF74,
        &&label_8067FF78,
        &&label_8067FF7C,
        &&label_8067FF80,
        &&label_8067FF84,
        &&label_8067FF88,
        &&label_8067FF8C,
        &&label_8067FF90,
        &&label_8067FF94,
        &&label_8067FF98,
        &&label_8067FF9C,
        &&label_8067FFA0,
        &&label_8067FFA4,
        &&label_8067FFA8,
        &&label_8067FFAC,
        &&label_8067FFB0,
        &&label_8067FFB4,
        &&label_8067FFB8,
        &&label_8067FFBC,
        &&label_8067FFC0,
        &&label_8067FFC4,
        &&label_8067FFC8,
        &&label_8067FFCC,
        &&label_8067FFD0,
        &&label_8067FFD4,
        &&label_8067FFD8,
        &&label_8067FFDC,
        &&label_8067FFE0,
        &&label_8067FFE4,
        &&label_8067FFE8,
        &&label_8067FFEC,
        &&label_8067FFF0,
        &&label_8067FFF4,
        &&label_8067FFF8,
        &&label_8067FFFC,
        &&label_80680000,
        &&label_80680004,
        &&label_80680008,
        &&label_8068000C,
        &&label_80680010,
        &&label_80680014,
        &&label_80680018,
        &&label_8068001C,
        &&label_80680020,
        &&label_80680024,
        &&label_80680028,
        &&label_8068002C,
        &&label_80680030,
        &&label_80680034,
        &&label_80680038,
        &&label_8068003C,
        &&label_80680040,
        &&label_80680044,
        &&label_80680048,
        &&label_8068004C,
        &&label_80680050,
        &&label_80680054,
        &&label_80680058,
        &&label_8068005C,
        &&label_80680060,
        &&label_80680064,
        &&label_80680068,
        &&label_8068006C,
        &&label_80680070,
        &&label_80680074,
        &&label_80680078,
        &&label_8068007C,
        &&label_80680080,
        &&label_80680084,
        &&label_80680088,
        &&label_8068008C,
        &&label_80680090,
        &&label_80680094,
        &&label_80680098,
        &&label_8068009C,
        &&label_806800A0,
        &&label_806800A4,
        &&label_806800A8,
        &&label_806800AC,
        &&label_806800B0,
        &&label_806800B4,
        &&label_806800B8,
        &&label_806800BC,
        &&label_806800C0,
        &&label_806800C4,
        &&label_806800C8,
        &&label_806800CC,
        &&label_806800D0,
        &&label_806800D4,
        &&label_806800D8,
        &&label_806800DC,
        &&label_806800E0,
        &&label_806800E4,
        &&label_806800E8,
        &&label_806800EC,
        &&label_806800F0,
        &&label_806800F4,
        &&label_806800F8,
        &&label_806800FC,
        &&label_80680100,
        &&label_80680104,
        &&label_80680108,
        &&label_8068010C,
        &&label_80680110,
        &&label_80680114,
        &&label_80680118,
        &&label_8068011C,
        &&label_80680120,
        &&label_80680124,
        &&label_80680128,
        &&label_8068012C,
        &&label_80680130,
        &&label_80680134,
        &&label_80680138,
        &&label_8068013C,
        &&label_80680140,
        &&label_80680144,
        &&label_80680148,
        &&label_8068014C,
        &&label_80680150,
        &&label_80680154,
        &&label_80680158,
        &&label_8068015C,
        &&label_80680160,
        &&label_80680164,
        &&label_80680168,
        &&label_8068016C,
        &&label_80680170,
        &&label_80680174,
        &&label_80680178,
        &&label_8068017C,
        &&label_80680180,
        &&label_80680184,
        &&label_80680188,
        &&label_8068018C,
        &&label_80680190,
        &&label_80680194,
        &&label_80680198,
        &&label_8068019C,
        &&label_806801A0,
        &&label_806801A4,
        &&label_806801A8,
        &&label_806801AC,
        &&label_806801B0,
        &&label_806801B4,
        &&label_806801B8,
        &&label_806801BC,
        &&label_806801C0,
        &&label_806801C4,
        &&label_806801C8,
        &&label_806801CC,
        &&label_806801D0,
        &&label_806801D4,
        &&label_806801D8,
        &&label_806801DC,
        &&label_806801E0,
        &&label_806801E4,
        &&label_806801E8,
        &&label_806801EC,
        &&label_806801F0,
        &&label_806801F4,
        &&label_806801F8,
        &&label_806801FC,
        &&label_80680200,
        &&label_80680204,
        &&label_80680208,
        &&label_8068020C,
        &&label_80680210,
        &&label_80680214,
        &&label_80680218,
        &&label_8068021C,
        &&label_80680220,
        &&label_80680224,
        &&label_80680228,
        &&label_8068022C,
        &&label_80680230,
        &&label_80680234,
        &&label_80680238,
        &&label_8068023C,
        &&label_80680240,
        &&label_80680244,
        &&label_80680248,
        &&label_8068024C,
        &&label_80680250,
        &&label_80680254,
        &&label_80680258,
        &&label_8068025C,
        &&label_80680260,
        &&label_80680264,
        &&label_80680268,
        &&label_8068026C,
        &&label_80680270,
        &&label_80680274,
        &&label_80680278,
        &&label_8068027C,
        &&label_80680280,
        &&label_80680284,
        &&label_80680288,
        &&label_8068028C,
        &&label_80680290,
        &&label_80680294,
        &&label_80680298,
        &&label_8068029C,
        &&label_806802A0,
        &&label_806802A4,
        &&label_806802A8,
        &&label_806802AC,
        &&label_806802B0,
        &&label_806802B4,
        &&label_806802B8,
        &&label_806802BC,
        &&label_806802C0,
        &&label_806802C4,
        &&label_806802C8,
        &&label_806802CC,
        &&label_806802D0,
        &&label_806802D4,
        &&label_806802D8,
        &&label_806802DC,
        &&label_806802E0,
        &&label_806802E4,
        &&label_806802E8,
        &&label_806802EC,
        &&label_806802F0,
        &&label_806802F4,
        &&label_806802F8,
        &&label_806802FC,
        &&label_80680300,
        &&label_80680304,
        &&label_80680308,
        &&label_8068030C,
        &&label_80680310,
        &&label_80680314,
        &&label_80680318,
        &&label_8068031C,
        &&label_80680320,
        &&label_80680324,
        &&label_80680328,
        &&label_8068032C,
        &&label_80680330,
        &&label_80680334,
        &&label_80680338,
        &&label_8068033C,
        &&label_80680340,
        &&label_80680344,
        &&label_80680348,
        &&label_8068034C,
        &&label_80680350,
        &&label_80680354,
        &&label_80680358,
        &&label_8068035C,
        &&label_80680360,
        &&label_80680364,
        &&label_80680368,
        &&label_8068036C,
        &&label_80680370,
        &&label_80680374,
        &&label_80680378,
        &&label_8068037C,
        &&label_80680380,
        &&label_80680384,
        &&label_80680388,
        &&label_8068038C,
        &&label_80680390,
        &&label_80680394,
        &&label_80680398,
        &&label_8068039C,
        &&label_806803A0,
        &&label_806803A4,
        &&label_806803A8,
        &&label_806803AC,
        &&label_806803B0,
        &&label_806803B4,
        &&label_806803B8,
        &&label_806803BC,
        &&label_806803C0,
        &&label_806803C4,
        &&label_806803C8,
        &&label_806803CC,
        &&label_806803D0,
        &&label_806803D4,
        &&label_806803D8,
        &&label_806803DC,
        &&label_806803E0,
        &&label_806803E4,
        &&label_806803E8,
        &&label_806803EC,
        &&label_806803F0,
        &&label_806803F4,
        &&label_806803F8,
        &&label_806803FC,
        &&label_80680400,
        &&label_80680404,
        &&label_80680408,
        &&label_8068040C,
        &&label_80680410,
        &&label_80680414,
        &&label_80680418,
        &&label_8068041C,
        &&label_80680420,
        &&label_80680424,
        &&label_80680428,
        &&label_8068042C,
        &&label_80680430,
        &&label_80680434,
        &&label_80680438,
        &&label_8068043C,
        &&label_80680440,
        &&label_80680444,
        &&label_80680448,
        &&label_8068044C,
        &&label_80680450,
        &&label_80680454,
        &&label_80680458,
        &&label_8068045C,
        &&label_80680460,
        &&label_80680464,
        &&label_80680468,
        &&label_8068046C,
        &&label_80680470,
        &&label_80680474,
        &&label_80680478,
        &&label_8068047C,
        &&label_80680480,
        &&label_80680484,
        &&label_80680488,
        &&label_8068048C,
        &&label_80680490,
        &&label_80680494,
        &&label_80680498,
        &&label_8068049C,
        &&label_806804A0,
        &&label_806804A4,
        &&label_806804A8,
        &&label_806804AC,
        &&label_806804B0,
        &&label_806804B4,
        &&label_806804B8,
        &&label_806804BC,
        &&label_806804C0,
        &&label_806804C4,
        &&label_806804C8,
        &&label_806804CC,
        &&label_806804D0,
        &&label_806804D4,
        &&label_806804D8,
        &&label_806804DC,
        &&label_806804E0,
        &&label_806804E4,
        &&label_806804E8,
        &&label_806804EC,
        &&label_806804F0,
        &&label_806804F4,
        &&label_806804F8,
        &&label_806804FC,
        &&label_80680500,
        &&label_80680504,
        &&label_80680508,
        &&label_8068050C,
        &&label_80680510,
        &&label_80680514,
        &&label_80680518,
        &&label_8068051C,
        &&label_80680520,
        &&label_80680524,
        &&label_80680528,
        &&label_8068052C,
        &&label_80680530,
        &&label_80680534,
        &&label_80680538,
        &&label_8068053C,
        &&label_80680540,
        &&label_80680544,
        &&label_80680548,
        &&label_8068054C,
        &&label_80680550,
        &&label_80680554,
        &&label_80680558,
        &&label_8068055C,
        &&label_80680560,
        &&label_80680564,
        &&label_80680568,
        &&label_8068056C,
        &&label_80680570,
        &&label_80680574,
        &&label_80680578,
        &&label_8068057C,
        &&label_80680580,
        &&label_80680584,
        &&label_80680588,
        &&label_8068058C,
        &&label_80680590,
        &&label_80680594,
        &&label_80680598,
        &&label_8068059C,
        &&label_806805A0,
        &&label_806805A4,
        &&label_806805A8,
        &&label_806805AC,
        &&label_806805B0,
        &&label_806805B4,
        &&label_806805B8,
        &&label_806805BC,
        &&label_806805C0,
        &&label_806805C4,
        &&label_806805C8,
        &&label_806805CC,
        &&label_806805D0,
        &&label_806805D4,
        &&label_806805D8,
        &&label_806805DC,
        &&label_806805E0,
        &&label_806805E4,
        &&label_806805E8,
        &&label_806805EC,
        &&label_806805F0,
        &&label_806805F4,
        &&label_806805F8,
        &&label_806805FC,
        &&label_80680600,
        &&label_80680604,
        &&label_80680608,
        &&label_8068060C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x8067F040u && pc <= 0x8068060Cu && ((pc - 0x8067F040u) & 3u) == 0u)
            goto *pc_table_8067F040[(pc - 0x8067F040u) >> 2];
    }
    return;
label_8067F040:
    ctx->pc = 0x8067F040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F040: stwu     r1, -16(r1)
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
label_8067F044:
    ctx->pc = 0x8067F044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F044: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F048:
    ctx->pc = 0x8067F048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F048u)) return;
    // 8067F048: cmplwi  r3, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F04C:
    ctx->pc = 0x8067F04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F04Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F04C: stw     r0, 20(r1)
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
label_8067F050:
    ctx->pc = 0x8067F050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F050u)) return;
    // 8067F050: bc    12, 1, 0x8067F198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F198;
        }
    }

label_8067F054:
    ctx->pc = 0x8067F054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067F054: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067F058:
    ctx->pc = 0x8067F058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F058u)) return;
    // 8067F058: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067F05C:
    ctx->pc = 0x8067F05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F05Cu)) return;
    // 8067F05C: addi    r3, r4, -22264
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-22264);

label_8067F060:
    ctx->pc = 0x8067F060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F060: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F064:
    ctx->pc = 0x8067F064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F064: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F068:
    ctx->pc = 0x8067F068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F068u)) return;
    // 8067F068: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067F06C:
    ctx->pc = 0x8067F06Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F06Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F06C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F070:
    ctx->pc = 0x8067F070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F070u)) return;
    // 8067F070: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8067F074:
    ctx->pc = 0x8067F074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F074u)) return;
    // 8067F074: bl      0x80503804
    {
            ctx->lr = 0x8067F078u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F078:
    ctx->pc = 0x8067F078u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F078u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F078: cmpwi   r3, 0
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

label_8067F07C:
    ctx->pc = 0x8067F07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F07Cu)) return;
    // 8067F07C: bc    12, 2, 0x8067F198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F198;
        }
    }

label_8067F080:
    ctx->pc = 0x8067F080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F080: li      r3, 152
    ctx->gpr[3] = (u32)(s32)(152);

label_8067F084:
    ctx->pc = 0x8067F084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F084u)) return;
    // 8067F084: bl      0x805039F8
    {
            ctx->lr = 0x8067F088u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F088:
    ctx->pc = 0x8067F088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F088: b       0x8067F194
    {
            goto label_8067F194;
    }

label_8067F08C:
    ctx->pc = 0x8067F08Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F08Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F08C: li      r3, 268
    ctx->gpr[3] = (u32)(s32)(268);

label_8067F090:
    ctx->pc = 0x8067F090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F090u)) return;
    // 8067F090: bl      0x8050386C
    {
            ctx->lr = 0x8067F094u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F094:
    ctx->pc = 0x8067F094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8067F094: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_8067F098:
    ctx->pc = 0x8067F098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F098u)) return;
    // 8067F098: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8067F09C:
    ctx->pc = 0x8067F09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F09Cu)) return;
    // 8067F09C: addi    r3, r3, -6352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6352);

label_8067F0A0:
    ctx->pc = 0x8067F0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F0A0: stb     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F0A4:
    ctx->pc = 0x8067F0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0A4u)) return;
    // 8067F0A4: bl      0x80503D0C
    {
            ctx->lr = 0x8067F0A8u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F0A8:
    ctx->pc = 0x8067F0A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F0A8: b       0x8067F194
    {
            goto label_8067F194;
    }

label_8067F0AC:
    ctx->pc = 0x8067F0ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F0AC: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F0B0:
    ctx->pc = 0x8067F0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0B0u)) return;
    // 8067F0B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F0B4:
    ctx->pc = 0x8067F0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0B4u)) return;
    // 8067F0B4: bl      0x80503804
    {
            ctx->lr = 0x8067F0B8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F0B8:
    ctx->pc = 0x8067F0B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F0B8: cmpwi   r3, 0
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

label_8067F0BC:
    ctx->pc = 0x8067F0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0BCu)) return;
    // 8067F0BC: bc    12, 2, 0x8067F198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F198;
        }
    }

label_8067F0C0:
    ctx->pc = 0x8067F0C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F0C0: li      r3, 154
    ctx->gpr[3] = (u32)(s32)(154);

label_8067F0C4:
    ctx->pc = 0x8067F0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0C4u)) return;
    // 8067F0C4: bl      0x805039F8
    {
            ctx->lr = 0x8067F0C8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F0C8:
    ctx->pc = 0x8067F0C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F0C8: b       0x8067F194
    {
            goto label_8067F194;
    }

label_8067F0CC:
    ctx->pc = 0x8067F0CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F0CC: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F0D0:
    ctx->pc = 0x8067F0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0D0u)) return;
    // 8067F0D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F0D4:
    ctx->pc = 0x8067F0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0D4u)) return;
    // 8067F0D4: bl      0x80503804
    {
            ctx->lr = 0x8067F0D8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F0D8:
    ctx->pc = 0x8067F0D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F0D8: cmpwi   r3, 0
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

label_8067F0DC:
    ctx->pc = 0x8067F0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0DCu)) return;
    // 8067F0DC: bc    12, 2, 0x8067F198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F198;
        }
    }

label_8067F0E0:
    ctx->pc = 0x8067F0E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F0E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8067F0E0: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067F0E4:
    ctx->pc = 0x8067F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0E4u)) return;
    // 8067F0E4: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067F0E8:
    ctx->pc = 0x8067F0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0E8u)) return;
    // 8067F0E8: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_8067F0EC:
    ctx->pc = 0x8067F0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F0EC: lfs     f0, -22416(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067F0ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22416);
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
label_8067F0F0:
    ctx->pc = 0x8067F0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F0F0: lwz     r4, 0(r4)
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
label_8067F0F4:
    ctx->pc = 0x8067F0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F0F4: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067F0F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_8067F0F8:
    ctx->pc = 0x8067F0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0F8u)) return;
    // 8067F0F8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067F0F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8067F0FC:
    ctx->pc = 0x8067F0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F0FCu)) return;
    // 8067F0FC: bc    12, 0, 0x8067F194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F194;
        }
    }

label_8067F100:
    ctx->pc = 0x8067F100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F100: b       0x8067F198
    {
            goto label_8067F198;
    }

label_8067F104:
    ctx->pc = 0x8067F104u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F104u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F104: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_8067F108:
    ctx->pc = 0x8067F108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F108u)) return;
    // 8067F108: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F10C:
    ctx->pc = 0x8067F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F10Cu)) return;
    // 8067F10C: bl      0x805036C4
    {
            ctx->lr = 0x8067F110u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F110:
    ctx->pc = 0x8067F110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F110: b       0x8067F194
    {
            goto label_8067F194;
    }

label_8067F114:
    ctx->pc = 0x8067F114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F114: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_8067F118:
    ctx->pc = 0x8067F118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F118u)) return;
    // 8067F118: bl      0x805033D4
    {
            ctx->lr = 0x8067F11Cu;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067F11C:
    ctx->pc = 0x8067F11Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F11Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F11C: cmpwi   r3, 0
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

label_8067F120:
    ctx->pc = 0x8067F120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F120u)) return;
    // 8067F120: bc    12, 2, 0x8067F198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F198;
        }
    }

label_8067F124:
    ctx->pc = 0x8067F124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F124: li      r3, 155
    ctx->gpr[3] = (u32)(s32)(155);

label_8067F128:
    ctx->pc = 0x8067F128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F128u)) return;
    // 8067F128: bl      0x805039F8
    {
            ctx->lr = 0x8067F12Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F12C:
    ctx->pc = 0x8067F12Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F12Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F12C: b       0x8067F194
    {
            goto label_8067F194;
    }

label_8067F130:
    ctx->pc = 0x8067F130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8067F130: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067F134:
    ctx->pc = 0x8067F134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F134u)) return;
    // 8067F134: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_8067F138:
    ctx->pc = 0x8067F138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F138u)) return;
    // 8067F138: addi    r4, r4, -6352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6352);

label_8067F13C:
    ctx->pc = 0x8067F13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F13Cu)) return;
    // 8067F13C: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_8067F140:
    ctx->pc = 0x8067F140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8067F140: lbz     r6, 74(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(74);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F144:
    ctx->pc = 0x8067F144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F144u)) return;
    // 8067F144: addi    r4, r3, -4408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4408);

label_8067F148:
    ctx->pc = 0x8067F148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F148u)) return;
    // 8067F148: li      r3, 84
    ctx->gpr[3] = (u32)(s32)(84);

label_8067F14C:
    ctx->pc = 0x8067F14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F14Cu)) return;
    // 8067F14C: neg  r5, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[5] = (~a) + 1u;
    }

label_8067F150:
    ctx->pc = 0x8067F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F150u)) return;
    // 8067F150: or   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[6];
    }

label_8067F154:
    ctx->pc = 0x8067F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F154u)) return;
    // 8067F154: srawi r5, r5, 31
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

label_8067F158:
    ctx->pc = 0x8067F158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F158u)) return;
    // 8067F158: andc   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[5];
    }

label_8067F15C:
    ctx->pc = 0x8067F15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F15C: stw     r0, 0(r4)
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
label_8067F160:
    ctx->pc = 0x8067F160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F160u)) return;
    // 8067F160: bl      0x80503880
    {
            ctx->lr = 0x8067F164u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F164:
    ctx->pc = 0x8067F164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F164: li      r3, 266
    ctx->gpr[3] = (u32)(s32)(266);

label_8067F168:
    ctx->pc = 0x8067F168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F168u)) return;
    // 8067F168: bl      0x80503880
    {
            ctx->lr = 0x8067F16Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F16C:
    ctx->pc = 0x8067F16Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F16Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F16C: li      r3, 267
    ctx->gpr[3] = (u32)(s32)(267);

label_8067F170:
    ctx->pc = 0x8067F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F170u)) return;
    // 8067F170: bl      0x80503880
    {
            ctx->lr = 0x8067F174u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F174:
    ctx->pc = 0x8067F174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F174: li      r3, 268
    ctx->gpr[3] = (u32)(s32)(268);

label_8067F178:
    ctx->pc = 0x8067F178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F178u)) return;
    // 8067F178: bl      0x8050386C
    {
            ctx->lr = 0x8067F17Cu;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F17C:
    ctx->pc = 0x8067F17Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F17Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F17C: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_8067F180:
    ctx->pc = 0x8067F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F180u)) return;
    // 8067F180: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F184:
    ctx->pc = 0x8067F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F184u)) return;
    // 8067F184: bl      0x805036C4
    {
            ctx->lr = 0x8067F188u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F188:
    ctx->pc = 0x8067F188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F188: bl      0x80503B3C
    {
            ctx->lr = 0x8067F18Cu;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F18C:
    ctx->pc = 0x8067F18Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F18Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F18C: b       0x8067F194
    {
            goto label_8067F194;
    }

label_8067F190:
    ctx->pc = 0x8067F190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F190: b       0x8067F198
    {
            goto label_8067F198;
    }

label_8067F194:
    ctx->pc = 0x8067F194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F194: bl      0x80503C34
    {
            ctx->lr = 0x8067F198u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F198:
    ctx->pc = 0x8067F198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F198: lwz     r0, 20(r1)
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
label_8067F19C:
    ctx->pc = 0x8067F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F19C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F1A0:
    ctx->pc = 0x8067F1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1A0u)) return;
    // 8067F1A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F1A4:
    ctx->pc = 0x8067F1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1A4u)) return;
    // 8067F1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F1A8:
    ctx->pc = 0x8067F1A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F1A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F1AC:
    ctx->pc = 0x8067F1ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F1AC: stwu     r1, -16(r1)
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
label_8067F1B0:
    ctx->pc = 0x8067F1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F1B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F1B4:
    ctx->pc = 0x8067F1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1B4u)) return;
    // 8067F1B4: cmplwi  r3, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F1B8:
    ctx->pc = 0x8067F1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F1B8: stw     r0, 20(r1)
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
label_8067F1BC:
    ctx->pc = 0x8067F1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1BCu)) return;
    // 8067F1BC: bc    12, 1, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F1C0:
    ctx->pc = 0x8067F1C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067F1C0: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067F1C4:
    ctx->pc = 0x8067F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1C4u)) return;
    // 8067F1C4: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067F1C8:
    ctx->pc = 0x8067F1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1C8u)) return;
    // 8067F1C8: addi    r3, r4, -22208
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-22208);

label_8067F1CC:
    ctx->pc = 0x8067F1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F1CC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F1D0:
    ctx->pc = 0x8067F1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F1D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F1D4:
    ctx->pc = 0x8067F1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1D4u)) return;
    // 8067F1D4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067F1D8:
    ctx->pc = 0x8067F1D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F1D8: li      r3, 330
    ctx->gpr[3] = (u32)(s32)(330);

label_8067F1DC:
    ctx->pc = 0x8067F1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1DCu)) return;
    // 8067F1DC: bl      0x80503880
    {
            ctx->lr = 0x8067F1E0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F1E0:
    ctx->pc = 0x8067F1E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F1E0: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_8067F1E4:
    ctx->pc = 0x8067F1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1E4u)) return;
    // 8067F1E4: bl      0x8050386C
    {
            ctx->lr = 0x8067F1E8u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F1E8:
    ctx->pc = 0x8067F1E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F1E8: bl      0x80503D0C
    {
            ctx->lr = 0x8067F1ECu;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F1EC:
    ctx->pc = 0x8067F1ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F1EC: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F1F0:
    ctx->pc = 0x8067F1F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F1F0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F1F4:
    ctx->pc = 0x8067F1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1F4u)) return;
    // 8067F1F4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8067F1F8:
    ctx->pc = 0x8067F1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F1F8u)) return;
    // 8067F1F8: bl      0x80503804
    {
            ctx->lr = 0x8067F1FCu;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F1FC:
    ctx->pc = 0x8067F1FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F1FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F1FC: cmpwi   r3, 0
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

label_8067F200:
    ctx->pc = 0x8067F200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F200u)) return;
    // 8067F200: bc    12, 2, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F204:
    ctx->pc = 0x8067F204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F204: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_8067F208:
    ctx->pc = 0x8067F208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F208u)) return;
    // 8067F208: bl      0x805039F8
    {
            ctx->lr = 0x8067F20Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F20C:
    ctx->pc = 0x8067F20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F20C: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F210:
    ctx->pc = 0x8067F210u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F210u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F210: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8067F214:
    ctx->pc = 0x8067F214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F214u)) return;
    // 8067F214: bl      0x804C7340
    {
            ctx->lr = 0x8067F218u;
            ctx->pc = 0x804C7340u;
            return;
    }

label_8067F218:
    ctx->pc = 0x8067F218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F218: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F21C:
    ctx->pc = 0x8067F21Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F21Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F21C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F220:
    ctx->pc = 0x8067F220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F220u)) return;
    // 8067F220: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067F224:
    ctx->pc = 0x8067F224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F224u)) return;
    // 8067F224: bl      0x80503804
    {
            ctx->lr = 0x8067F228u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F228:
    ctx->pc = 0x8067F228u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F228u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F228: cmpwi   r3, 0
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

label_8067F22C:
    ctx->pc = 0x8067F22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F22Cu)) return;
    // 8067F22C: bc    12, 2, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F230:
    ctx->pc = 0x8067F230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F230: li      r3, 304
    ctx->gpr[3] = (u32)(s32)(304);

label_8067F234:
    ctx->pc = 0x8067F234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F234u)) return;
    // 8067F234: bl      0x805039F8
    {
            ctx->lr = 0x8067F238u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F238:
    ctx->pc = 0x8067F238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F238: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F23C:
    ctx->pc = 0x8067F23Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F23Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F23C: li      r3, 331
    ctx->gpr[3] = (u32)(s32)(331);

label_8067F240:
    ctx->pc = 0x8067F240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F240u)) return;
    // 8067F240: bl      0x80503850
    {
            ctx->lr = 0x8067F244u;
            ctx->pc = 0x80503850u;
            return;
    }

label_8067F244:
    ctx->pc = 0x8067F244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F244: cmpwi   r3, 0
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

label_8067F248:
    ctx->pc = 0x8067F248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F248u)) return;
    // 8067F248: bc    12, 2, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F24C:
    ctx->pc = 0x8067F24Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F24Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F24C: li      r3, 305
    ctx->gpr[3] = (u32)(s32)(305);

label_8067F250:
    ctx->pc = 0x8067F250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F250u)) return;
    // 8067F250: bl      0x805039F8
    {
            ctx->lr = 0x8067F254u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F254:
    ctx->pc = 0x8067F254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F254: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F258:
    ctx->pc = 0x8067F258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F258: li      r3, 338
    ctx->gpr[3] = (u32)(s32)(338);

label_8067F25C:
    ctx->pc = 0x8067F25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F25Cu)) return;
    // 8067F25C: bl      0x80503850
    {
            ctx->lr = 0x8067F260u;
            ctx->pc = 0x80503850u;
            return;
    }

label_8067F260:
    ctx->pc = 0x8067F260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F260: cmpwi   r3, 0
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

label_8067F264:
    ctx->pc = 0x8067F264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F264u)) return;
    // 8067F264: bc    12, 2, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F268:
    ctx->pc = 0x8067F268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F268: bl      0x80503D0C
    {
            ctx->lr = 0x8067F26Cu;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F26C:
    ctx->pc = 0x8067F26Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F26Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F26C: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F270:
    ctx->pc = 0x8067F270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F270: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F274:
    ctx->pc = 0x8067F274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F274u)) return;
    // 8067F274: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F278:
    ctx->pc = 0x8067F278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F278u)) return;
    // 8067F278: bl      0x80503804
    {
            ctx->lr = 0x8067F27Cu;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F27C:
    ctx->pc = 0x8067F27Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F27Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F27C: cmpwi   r3, 0
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

label_8067F280:
    ctx->pc = 0x8067F280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F280u)) return;
    // 8067F280: bc    12, 2, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F284:
    ctx->pc = 0x8067F284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F284: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_8067F288:
    ctx->pc = 0x8067F288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F288u)) return;
    // 8067F288: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F28C:
    ctx->pc = 0x8067F28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F28Cu)) return;
    // 8067F28C: bl      0x80503660
    {
            ctx->lr = 0x8067F290u;
            ctx->pc = 0x80503660u;
            return;
    }

label_8067F290:
    ctx->pc = 0x8067F290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F290: cmpwi   r3, 0
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

label_8067F294:
    ctx->pc = 0x8067F294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F294u)) return;
    // 8067F294: bc    12, 2, 0x8067F2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2A8;
        }
    }

label_8067F298:
    ctx->pc = 0x8067F298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F298: bl      0x80503B3C
    {
            ctx->lr = 0x8067F29Cu;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F29C:
    ctx->pc = 0x8067F29Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F29Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F29C: b       0x8067F2A4
    {
            goto label_8067F2A4;
    }

label_8067F2A0:
    ctx->pc = 0x8067F2A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2A0: b       0x8067F2A8
    {
            goto label_8067F2A8;
    }

label_8067F2A4:
    ctx->pc = 0x8067F2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2A4: bl      0x80503C34
    {
            ctx->lr = 0x8067F2A8u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F2A8:
    ctx->pc = 0x8067F2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F2A8: lwz     r0, 20(r1)
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
label_8067F2AC:
    ctx->pc = 0x8067F2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F2ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F2AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F2B0:
    ctx->pc = 0x8067F2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2B0u)) return;
    // 8067F2B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F2B4:
    ctx->pc = 0x8067F2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2B4u)) return;
    // 8067F2B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F2B8:
    ctx->pc = 0x8067F2B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F2BC:
    ctx->pc = 0x8067F2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F2BC: stwu     r1, -16(r1)
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
label_8067F2C0:
    ctx->pc = 0x8067F2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F2C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F2C4:
    ctx->pc = 0x8067F2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2C4u)) return;
    // 8067F2C4: cmpwi   r3, 2
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

label_8067F2C8:
    ctx->pc = 0x8067F2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F2C8: stw     r0, 20(r1)
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
label_8067F2CC:
    ctx->pc = 0x8067F2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2CCu)) return;
    // 8067F2CC: bc    12, 2, 0x8067F334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F334;
        }
    }

label_8067F2D0:
    ctx->pc = 0x8067F2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2D0: bc    4, 0, 0x8067F2E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F2E4;
        }
    }

label_8067F2D4:
    ctx->pc = 0x8067F2D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F2D4: cmpwi   r3, 0
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

label_8067F2D8:
    ctx->pc = 0x8067F2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2D8u)) return;
    // 8067F2D8: bc    12, 2, 0x8067F2F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F2F4;
        }
    }

label_8067F2DC:
    ctx->pc = 0x8067F2DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2DC: bc    4, 0, 0x8067F314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F314;
        }
    }

label_8067F2E0:
    ctx->pc = 0x8067F2E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2E0: b       0x8067F3D8
    {
            goto label_8067F3D8;
    }

label_8067F2E4:
    ctx->pc = 0x8067F2E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F2E4: cmpwi   r3, 4
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

label_8067F2E8:
    ctx->pc = 0x8067F2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2E8u)) return;
    // 8067F2E8: bc    12, 2, 0x8067F360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F360;
        }
    }

label_8067F2EC:
    ctx->pc = 0x8067F2ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2EC: bc    4, 0, 0x8067F3D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F3D8;
        }
    }

label_8067F2F0:
    ctx->pc = 0x8067F2F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F2F0: b       0x8067F354
    {
            goto label_8067F354;
    }

label_8067F2F4:
    ctx->pc = 0x8067F2F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F2F4: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_8067F2F8:
    ctx->pc = 0x8067F2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F2F8u)) return;
    // 8067F2F8: bl      0x805033D4
    {
            ctx->lr = 0x8067F2FCu;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067F2FC:
    ctx->pc = 0x8067F2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F2FC: cmpwi   r3, 0
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

label_8067F300:
    ctx->pc = 0x8067F300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F300u)) return;
    // 8067F300: bc    12, 2, 0x8067F3D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F3D8;
        }
    }

label_8067F304:
    ctx->pc = 0x8067F304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F304: li      r3, 330
    ctx->gpr[3] = (u32)(s32)(330);

label_8067F308:
    ctx->pc = 0x8067F308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F308u)) return;
    // 8067F308: bl      0x80503880
    {
            ctx->lr = 0x8067F30Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F30C:
    ctx->pc = 0x8067F30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F30C: bl      0x80503D0C
    {
            ctx->lr = 0x8067F310u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F310:
    ctx->pc = 0x8067F310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F310: b       0x8067F3D4
    {
            goto label_8067F3D4;
    }

label_8067F314:
    ctx->pc = 0x8067F314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F314: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F318:
    ctx->pc = 0x8067F318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F318u)) return;
    // 8067F318: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8067F31C:
    ctx->pc = 0x8067F31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F31Cu)) return;
    // 8067F31C: bl      0x80503804
    {
            ctx->lr = 0x8067F320u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F320:
    ctx->pc = 0x8067F320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F320: cmpwi   r3, 0
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

label_8067F324:
    ctx->pc = 0x8067F324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F324u)) return;
    // 8067F324: bc    12, 2, 0x8067F3D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F3D8;
        }
    }

label_8067F328:
    ctx->pc = 0x8067F328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F328: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_8067F32C:
    ctx->pc = 0x8067F32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F32Cu)) return;
    // 8067F32C: bl      0x805039F8
    {
            ctx->lr = 0x8067F330u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F330:
    ctx->pc = 0x8067F330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F330: b       0x8067F3D4
    {
            goto label_8067F3D4;
    }

label_8067F334:
    ctx->pc = 0x8067F334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F334: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F338:
    ctx->pc = 0x8067F338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F338u)) return;
    // 8067F338: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067F33C:
    ctx->pc = 0x8067F33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F33Cu)) return;
    // 8067F33C: bl      0x80503804
    {
            ctx->lr = 0x8067F340u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F340:
    ctx->pc = 0x8067F340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F340: cmpwi   r3, 0
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

label_8067F344:
    ctx->pc = 0x8067F344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F344u)) return;
    // 8067F344: bc    12, 2, 0x8067F3D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F3D8;
        }
    }

label_8067F348:
    ctx->pc = 0x8067F348u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F348u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F348: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_8067F34C:
    ctx->pc = 0x8067F34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F34Cu)) return;
    // 8067F34C: bl      0x805039F8
    {
            ctx->lr = 0x8067F350u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F350:
    ctx->pc = 0x8067F350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F350: b       0x8067F3D4
    {
            goto label_8067F3D4;
    }

label_8067F354:
    ctx->pc = 0x8067F354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F354: li      r3, 106
    ctx->gpr[3] = (u32)(s32)(106);

label_8067F358:
    ctx->pc = 0x8067F358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F358u)) return;
    // 8067F358: bl      0x805039F8
    {
            ctx->lr = 0x8067F35Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F35C:
    ctx->pc = 0x8067F35Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F35Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F35C: b       0x8067F3D4
    {
            goto label_8067F3D4;
    }

label_8067F360:
    ctx->pc = 0x8067F360u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F360u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8067F360: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067F364:
    ctx->pc = 0x8067F364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F364u)) return;
    // 8067F364: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_8067F368:
    ctx->pc = 0x8067F368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F368u)) return;
    // 8067F368: addi    r4, r4, -6352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6352);

label_8067F36C:
    ctx->pc = 0x8067F36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F36Cu)) return;
    // 8067F36C: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_8067F370:
    ctx->pc = 0x8067F370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8067F370: lbz     r7, 75(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(75);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F374:
    ctx->pc = 0x8067F374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F374u)) return;
    // 8067F374: addi    r5, r3, -4408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4408);

label_8067F378:
    ctx->pc = 0x8067F378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F378u)) return;
    // 8067F378: li      r3, 26
    ctx->gpr[3] = (u32)(s32)(26);

label_8067F37C:
    ctx->pc = 0x8067F37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F37Cu)) return;
    // 8067F37C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8067F380:
    ctx->pc = 0x8067F380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F380u)) return;
    // 8067F380: neg  r6, r7
    {
        u32 a = ctx->gpr[7];
        ctx->gpr[6] = (~a) + 1u;
    }

label_8067F384:
    ctx->pc = 0x8067F384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F384u)) return;
    // 8067F384: or   r6, r6, r7
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[7];
    }

label_8067F388:
    ctx->pc = 0x8067F388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F388u)) return;
    // 8067F388: srawi r6, r6, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8067F38C:
    ctx->pc = 0x8067F38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F38Cu)) return;
    // 8067F38C: andc   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[6];
    }

label_8067F390:
    ctx->pc = 0x8067F390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F390: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F394:
    ctx->pc = 0x8067F394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F394u)) return;
    // 8067F394: bl      0x805036C4
    {
            ctx->lr = 0x8067F398u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F398:
    ctx->pc = 0x8067F398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F398: li      r3, 326
    ctx->gpr[3] = (u32)(s32)(326);

label_8067F39C:
    ctx->pc = 0x8067F39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F39Cu)) return;
    // 8067F39C: bl      0x80503880
    {
            ctx->lr = 0x8067F3A0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F3A0:
    ctx->pc = 0x8067F3A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F3A0: li      r3, 340
    ctx->gpr[3] = (u32)(s32)(340);

label_8067F3A4:
    ctx->pc = 0x8067F3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3A4u)) return;
    // 8067F3A4: bl      0x80503880
    {
            ctx->lr = 0x8067F3A8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F3A8:
    ctx->pc = 0x8067F3A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F3A8: li      r3, 329
    ctx->gpr[3] = (u32)(s32)(329);

label_8067F3AC:
    ctx->pc = 0x8067F3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3ACu)) return;
    // 8067F3AC: bl      0x80503880
    {
            ctx->lr = 0x8067F3B0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F3B0:
    ctx->pc = 0x8067F3B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F3B0: li      r3, 328
    ctx->gpr[3] = (u32)(s32)(328);

label_8067F3B4:
    ctx->pc = 0x8067F3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3B4u)) return;
    // 8067F3B4: bl      0x80503880
    {
            ctx->lr = 0x8067F3B8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F3B8:
    ctx->pc = 0x8067F3B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F3B8: li      r3, 85
    ctx->gpr[3] = (u32)(s32)(85);

label_8067F3BC:
    ctx->pc = 0x8067F3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3BCu)) return;
    // 8067F3BC: bl      0x80503880
    {
            ctx->lr = 0x8067F3C0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F3C0:
    ctx->pc = 0x8067F3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F3C0: li      r3, 330
    ctx->gpr[3] = (u32)(s32)(330);

label_8067F3C4:
    ctx->pc = 0x8067F3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3C4u)) return;
    // 8067F3C4: bl      0x8050386C
    {
            ctx->lr = 0x8067F3C8u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F3C8:
    ctx->pc = 0x8067F3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F3C8: bl      0x80503B3C
    {
            ctx->lr = 0x8067F3CCu;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F3CC:
    ctx->pc = 0x8067F3CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F3CC: b       0x8067F3D4
    {
            goto label_8067F3D4;
    }

label_8067F3D0:
    ctx->pc = 0x8067F3D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F3D0: b       0x8067F3D8
    {
            goto label_8067F3D8;
    }

label_8067F3D4:
    ctx->pc = 0x8067F3D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F3D4: bl      0x80503C34
    {
            ctx->lr = 0x8067F3D8u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F3D8:
    ctx->pc = 0x8067F3D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F3D8: lwz     r0, 20(r1)
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
label_8067F3DC:
    ctx->pc = 0x8067F3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F3DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F3DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F3E0:
    ctx->pc = 0x8067F3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3E0u)) return;
    // 8067F3E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F3E4:
    ctx->pc = 0x8067F3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3E4u)) return;
    // 8067F3E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F3E8:
    ctx->pc = 0x8067F3E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F3E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F3EC:
    ctx->pc = 0x8067F3ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F3ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F3EC: stwu     r1, -16(r1)
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
label_8067F3F0:
    ctx->pc = 0x8067F3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F3F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F3F4:
    ctx->pc = 0x8067F3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3F4u)) return;
    // 8067F3F4: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F3F8:
    ctx->pc = 0x8067F3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F3F8: stw     r0, 20(r1)
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
label_8067F3FC:
    ctx->pc = 0x8067F3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F3FCu)) return;
    // 8067F3FC: bc    12, 2, 0x8067F464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F464;
        }
    }

label_8067F400:
    ctx->pc = 0x8067F400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F400: bc    4, 0, 0x8067F41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F41C;
        }
    }

label_8067F404:
    ctx->pc = 0x8067F404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F404: cmpwi   r3, 1
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

label_8067F408:
    ctx->pc = 0x8067F408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F408u)) return;
    // 8067F408: bc    12, 2, 0x8067F434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F434;
        }
    }

label_8067F40C:
    ctx->pc = 0x8067F40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F40C: bc    4, 0, 0x8067F454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F454;
        }
    }

label_8067F410:
    ctx->pc = 0x8067F410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F410: cmpwi   r3, 0
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

label_8067F414:
    ctx->pc = 0x8067F414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F414u)) return;
    // 8067F414: bc    4, 0, 0x8067F42C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F42C;
        }
    }

label_8067F418:
    ctx->pc = 0x8067F418u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F418u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F418: b       0x8067F494
    {
            goto label_8067F494;
    }

label_8067F41C:
    ctx->pc = 0x8067F41Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F41Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F41C: cmpwi   r3, 5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F420:
    ctx->pc = 0x8067F420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F420u)) return;
    // 8067F420: bc    12, 2, 0x8067F484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F484;
        }
    }

label_8067F424:
    ctx->pc = 0x8067F424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F424: bc    4, 0, 0x8067F494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F494;
        }
    }

label_8067F428:
    ctx->pc = 0x8067F428u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F428u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F428: b       0x8067F478
    {
            goto label_8067F478;
    }

label_8067F42C:
    ctx->pc = 0x8067F42Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F42Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F42C: bl      0x80503D0C
    {
            ctx->lr = 0x8067F430u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F430:
    ctx->pc = 0x8067F430u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F430u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F430: b       0x8067F490
    {
            goto label_8067F490;
    }

label_8067F434:
    ctx->pc = 0x8067F434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F434: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F438:
    ctx->pc = 0x8067F438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F438u)) return;
    // 8067F438: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F43C:
    ctx->pc = 0x8067F43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F43Cu)) return;
    // 8067F43C: bl      0x80503804
    {
            ctx->lr = 0x8067F440u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F440:
    ctx->pc = 0x8067F440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F440: cmpwi   r3, 0
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

label_8067F444:
    ctx->pc = 0x8067F444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F444u)) return;
    // 8067F444: bc    12, 2, 0x8067F494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F494;
        }
    }

label_8067F448:
    ctx->pc = 0x8067F448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F448: li      r3, 113
    ctx->gpr[3] = (u32)(s32)(113);

label_8067F44C:
    ctx->pc = 0x8067F44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F44Cu)) return;
    // 8067F44C: bl      0x805039F8
    {
            ctx->lr = 0x8067F450u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F450:
    ctx->pc = 0x8067F450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F450: b       0x8067F490
    {
            goto label_8067F490;
    }

label_8067F454:
    ctx->pc = 0x8067F454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F454: li      r3, 23
    ctx->gpr[3] = (u32)(s32)(23);

label_8067F458:
    ctx->pc = 0x8067F458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F458u)) return;
    // 8067F458: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F45C:
    ctx->pc = 0x8067F45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F45Cu)) return;
    // 8067F45C: bl      0x805036C4
    {
            ctx->lr = 0x8067F460u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F460:
    ctx->pc = 0x8067F460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F460: b       0x8067F490
    {
            goto label_8067F490;
    }

label_8067F464:
    ctx->pc = 0x8067F464u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F464u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F464: li      r3, 23
    ctx->gpr[3] = (u32)(s32)(23);

label_8067F468:
    ctx->pc = 0x8067F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F468u)) return;
    // 8067F468: bl      0x805033D4
    {
            ctx->lr = 0x8067F46Cu;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067F46C:
    ctx->pc = 0x8067F46Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F46Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F46C: cmpwi   r3, 0
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

label_8067F470:
    ctx->pc = 0x8067F470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F470u)) return;
    // 8067F470: bc    4, 2, 0x8067F490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F490;
        }
    }

label_8067F474:
    ctx->pc = 0x8067F474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F474: b       0x8067F494
    {
            goto label_8067F494;
    }

label_8067F478:
    ctx->pc = 0x8067F478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F478: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_8067F47C:
    ctx->pc = 0x8067F47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F47Cu)) return;
    // 8067F47C: bl      0x805039F8
    {
            ctx->lr = 0x8067F480u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F480:
    ctx->pc = 0x8067F480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F480: b       0x8067F490
    {
            goto label_8067F490;
    }

label_8067F484:
    ctx->pc = 0x8067F484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F484: bl      0x80503B3C
    {
            ctx->lr = 0x8067F488u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F488:
    ctx->pc = 0x8067F488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F488: b       0x8067F490
    {
            goto label_8067F490;
    }

label_8067F48C:
    ctx->pc = 0x8067F48Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F48Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F48C: b       0x8067F494
    {
            goto label_8067F494;
    }

label_8067F490:
    ctx->pc = 0x8067F490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F490: bl      0x80503C34
    {
            ctx->lr = 0x8067F494u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F494:
    ctx->pc = 0x8067F494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F494: lwz     r0, 20(r1)
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
label_8067F498:
    ctx->pc = 0x8067F498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F498: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F49C:
    ctx->pc = 0x8067F49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F49Cu)) return;
    // 8067F49C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F4A0:
    ctx->pc = 0x8067F4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4A0u)) return;
    // 8067F4A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F4A4:
    ctx->pc = 0x8067F4A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F4A8:
    ctx->pc = 0x8067F4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F4A8: stwu     r1, -16(r1)
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
label_8067F4AC:
    ctx->pc = 0x8067F4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F4AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F4B0:
    ctx->pc = 0x8067F4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4B0u)) return;
    // 8067F4B0: cmpwi   r3, 2
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

label_8067F4B4:
    ctx->pc = 0x8067F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F4B4: stw     r0, 20(r1)
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
label_8067F4B8:
    ctx->pc = 0x8067F4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4B8u)) return;
    // 8067F4B8: bc    12, 2, 0x8067F50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F50C;
        }
    }

label_8067F4BC:
    ctx->pc = 0x8067F4BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4BC: bc    4, 0, 0x8067F4D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F4D0;
        }
    }

label_8067F4C0:
    ctx->pc = 0x8067F4C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F4C0: cmpwi   r3, 0
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

label_8067F4C4:
    ctx->pc = 0x8067F4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4C4u)) return;
    // 8067F4C4: bc    12, 2, 0x8067F4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F4DC;
        }
    }

label_8067F4C8:
    ctx->pc = 0x8067F4C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4C8: bc    4, 0, 0x8067F500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F500;
        }
    }

label_8067F4CC:
    ctx->pc = 0x8067F4CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4CC: b       0x8067F534
    {
            goto label_8067F534;
    }

label_8067F4D0:
    ctx->pc = 0x8067F4D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F4D0: cmpwi   r3, 4
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

label_8067F4D4:
    ctx->pc = 0x8067F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4D4u)) return;
    // 8067F4D4: bc    4, 0, 0x8067F534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F534;
        }
    }

label_8067F4D8:
    ctx->pc = 0x8067F4D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4D8: b       0x8067F524
    {
            goto label_8067F524;
    }

label_8067F4DC:
    ctx->pc = 0x8067F4DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F4DC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F4E0:
    ctx->pc = 0x8067F4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4E0u)) return;
    // 8067F4E0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F4E4:
    ctx->pc = 0x8067F4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4E4u)) return;
    // 8067F4E4: bl      0x80503804
    {
            ctx->lr = 0x8067F4E8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F4E8:
    ctx->pc = 0x8067F4E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F4E8: cmpwi   r3, 0
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

label_8067F4EC:
    ctx->pc = 0x8067F4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4ECu)) return;
    // 8067F4EC: bc    12, 2, 0x8067F534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F534;
        }
    }

label_8067F4F0:
    ctx->pc = 0x8067F4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F4F0: li      r3, 87
    ctx->gpr[3] = (u32)(s32)(87);

label_8067F4F4:
    ctx->pc = 0x8067F4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F4F4u)) return;
    // 8067F4F4: bl      0x8050386C
    {
            ctx->lr = 0x8067F4F8u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F4F8:
    ctx->pc = 0x8067F4F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4F8: bl      0x80503D0C
    {
            ctx->lr = 0x8067F4FCu;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F4FC:
    ctx->pc = 0x8067F4FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F4FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F4FC: b       0x8067F530
    {
            goto label_8067F530;
    }

label_8067F500:
    ctx->pc = 0x8067F500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F500: li      r3, 216
    ctx->gpr[3] = (u32)(s32)(216);

label_8067F504:
    ctx->pc = 0x8067F504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F504u)) return;
    // 8067F504: bl      0x805039F8
    {
            ctx->lr = 0x8067F508u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F508:
    ctx->pc = 0x8067F508u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F508u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F508: b       0x8067F530
    {
            goto label_8067F530;
    }

label_8067F50C:
    ctx->pc = 0x8067F50Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F50Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F50C: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_8067F510:
    ctx->pc = 0x8067F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F510u)) return;
    // 8067F510: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F514:
    ctx->pc = 0x8067F514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F514u)) return;
    // 8067F514: bl      0x80503660
    {
            ctx->lr = 0x8067F518u;
            ctx->pc = 0x80503660u;
            return;
    }

label_8067F518:
    ctx->pc = 0x8067F518u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F518u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F518: cmpwi   r3, 0
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

label_8067F51C:
    ctx->pc = 0x8067F51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F51Cu)) return;
    // 8067F51C: bc    4, 2, 0x8067F530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F530;
        }
    }

label_8067F520:
    ctx->pc = 0x8067F520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F520: b       0x8067F534
    {
            goto label_8067F534;
    }

label_8067F524:
    ctx->pc = 0x8067F524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F524: bl      0x80503B3C
    {
            ctx->lr = 0x8067F528u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F528:
    ctx->pc = 0x8067F528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F528: b       0x8067F530
    {
            goto label_8067F530;
    }

label_8067F52C:
    ctx->pc = 0x8067F52Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F52Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F52C: b       0x8067F534
    {
            goto label_8067F534;
    }

label_8067F530:
    ctx->pc = 0x8067F530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F530: bl      0x80503C34
    {
            ctx->lr = 0x8067F534u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F534:
    ctx->pc = 0x8067F534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F534: lwz     r0, 20(r1)
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
label_8067F538:
    ctx->pc = 0x8067F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F538: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F53C:
    ctx->pc = 0x8067F53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F53Cu)) return;
    // 8067F53C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F540:
    ctx->pc = 0x8067F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F540u)) return;
    // 8067F540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F544:
    ctx->pc = 0x8067F544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F544: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F548:
    ctx->pc = 0x8067F548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F548: stwu     r1, -16(r1)
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
label_8067F54C:
    ctx->pc = 0x8067F54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F54C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F550:
    ctx->pc = 0x8067F550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F550u)) return;
    // 8067F550: cmplwi  r3, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F554:
    ctx->pc = 0x8067F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F554: stw     r0, 20(r1)
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
label_8067F558:
    ctx->pc = 0x8067F558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F558u)) return;
    // 8067F558: bc    12, 1, 0x8067F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F6DC;
        }
    }

label_8067F55C:
    ctx->pc = 0x8067F55Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F55Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067F55C: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067F560:
    ctx->pc = 0x8067F560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F560u)) return;
    // 8067F560: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067F564:
    ctx->pc = 0x8067F564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F564u)) return;
    // 8067F564: addi    r3, r4, -22120
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-22120);

label_8067F568:
    ctx->pc = 0x8067F568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F568: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F56C:
    ctx->pc = 0x8067F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F56Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F56C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F570:
    ctx->pc = 0x8067F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F570u)) return;
    // 8067F570: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067F574:
    ctx->pc = 0x8067F574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F574: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F578:
    ctx->pc = 0x8067F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F578u)) return;
    // 8067F578: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F57C:
    ctx->pc = 0x8067F57Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F57Cu)) return;
    // 8067F57C: bl      0x80503804
    {
            ctx->lr = 0x8067F580u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F580:
    ctx->pc = 0x8067F580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F580: cmpwi   r3, 0
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

label_8067F584:
    ctx->pc = 0x8067F584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F584u)) return;
    // 8067F584: bc    12, 2, 0x8067F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F6DC;
        }
    }

label_8067F588:
    ctx->pc = 0x8067F588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F588: li      r3, 221
    ctx->gpr[3] = (u32)(s32)(221);

label_8067F58C:
    ctx->pc = 0x8067F58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F58Cu)) return;
    // 8067F58C: bl      0x805039F8
    {
            ctx->lr = 0x8067F590u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F590:
    ctx->pc = 0x8067F590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F590: b       0x8067F6D8
    {
            goto label_8067F6D8;
    }

label_8067F594:
    ctx->pc = 0x8067F594u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F594u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F594: li      r3, 336
    ctx->gpr[3] = (u32)(s32)(336);

label_8067F598:
    ctx->pc = 0x8067F598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F598u)) return;
    // 8067F598: bl      0x805039F8
    {
            ctx->lr = 0x8067F59Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F59C:
    ctx->pc = 0x8067F59Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F59Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F59C: b       0x8067F6D8
    {
            goto label_8067F6D8;
    }

label_8067F5A0:
    ctx->pc = 0x8067F5A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F5A0: li      r3, 455
    ctx->gpr[3] = (u32)(s32)(455);

label_8067F5A4:
    ctx->pc = 0x8067F5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5A4u)) return;
    // 8067F5A4: bl      0x80503880
    {
            ctx->lr = 0x8067F5A8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F5A8:
    ctx->pc = 0x8067F5A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F5A8: li      r3, 457
    ctx->gpr[3] = (u32)(s32)(457);

label_8067F5AC:
    ctx->pc = 0x8067F5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5ACu)) return;
    // 8067F5AC: bl      0x8050386C
    {
            ctx->lr = 0x8067F5B0u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F5B0:
    ctx->pc = 0x8067F5B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F5B0: bl      0x80503D0C
    {
            ctx->lr = 0x8067F5B4u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F5B4:
    ctx->pc = 0x8067F5B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F5B4: b       0x8067F6D8
    {
            goto label_8067F6D8;
    }

label_8067F5B8:
    ctx->pc = 0x8067F5B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F5B8: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F5BC:
    ctx->pc = 0x8067F5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5BCu)) return;
    // 8067F5BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F5C0:
    ctx->pc = 0x8067F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5C0u)) return;
    // 8067F5C0: bl      0x80503804
    {
            ctx->lr = 0x8067F5C4u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F5C4:
    ctx->pc = 0x8067F5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F5C4: cmpwi   r3, 0
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

label_8067F5C8:
    ctx->pc = 0x8067F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5C8u)) return;
    // 8067F5C8: bc    12, 2, 0x8067F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F6DC;
        }
    }

label_8067F5CC:
    ctx->pc = 0x8067F5CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 8067F5CC: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067F5D0:
    ctx->pc = 0x8067F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5D0u)) return;
    // 8067F5D0: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067F5D4:
    ctx->pc = 0x8067F5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5D4u)) return;
    // 8067F5D4: addi    r5, r4, -22408
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22408);

label_8067F5D8:
    ctx->pc = 0x8067F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5D8u)) return;
    // 8067F5D8: lis     r6, -28429
    ctx->gpr[6] = ((u32)(s32)(-28429) << 16);

label_8067F5DC:
    ctx->pc = 0x8067F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5DCu)) return;
    // 8067F5DC: addi    r4, r3, -22404
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22404);

label_8067F5E0:
    ctx->pc = 0x8067F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F5E0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067F5E0u)) return;
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
label_8067F5E4:
    ctx->pc = 0x8067F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F5E4: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067F5E4u)) return;
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
label_8067F5E8:
    ctx->pc = 0x8067F5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5E8u)) return;
    // 8067F5E8: addi    r3, r6, -22132
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-22132);

label_8067F5EC:
    ctx->pc = 0x8067F5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5ECu)) return;
    // 8067F5EC: bl      0x804C92A8
    {
            ctx->lr = 0x8067F5F0u;
            ctx->pc = 0x804C92A8u;
            return;
    }

label_8067F5F0:
    ctx->pc = 0x8067F5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F5F0: cmpwi   r3, 1
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

label_8067F5F4:
    ctx->pc = 0x8067F5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F5F4u)) return;
    // 8067F5F4: bc    12, 2, 0x8067F6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F6D8;
        }
    }

label_8067F5F8:
    ctx->pc = 0x8067F5F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F5F8: b       0x8067F6DC
    {
            goto label_8067F6DC;
    }

label_8067F5FC:
    ctx->pc = 0x8067F5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F5FC: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_8067F600:
    ctx->pc = 0x8067F600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F600u)) return;
    // 8067F600: bl      0x805033D4
    {
            ctx->lr = 0x8067F604u;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067F604:
    ctx->pc = 0x8067F604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F604: cmpwi   r3, 0
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

label_8067F608:
    ctx->pc = 0x8067F608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F608u)) return;
    // 8067F608: bc    4, 2, 0x8067F6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F6D8;
        }
    }

label_8067F60C:
    ctx->pc = 0x8067F60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F60C: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_8067F610:
    ctx->pc = 0x8067F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F610u)) return;
    // 8067F610: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F614:
    ctx->pc = 0x8067F614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F614u)) return;
    // 8067F614: bl      0x805036C4
    {
            ctx->lr = 0x8067F618u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F618:
    ctx->pc = 0x8067F618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F618: b       0x8067F6D8
    {
            goto label_8067F6D8;
    }

label_8067F61C:
    ctx->pc = 0x8067F61Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F61Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F61C: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_8067F620:
    ctx->pc = 0x8067F620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F620u)) return;
    // 8067F620: bl      0x805033D4
    {
            ctx->lr = 0x8067F624u;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067F624:
    ctx->pc = 0x8067F624u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F624u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F624: cmpwi   r3, 0
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

label_8067F628:
    ctx->pc = 0x8067F628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F628u)) return;
    // 8067F628: bc    4, 2, 0x8067F6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F6D8;
        }
    }

label_8067F62C:
    ctx->pc = 0x8067F62Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F62Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F62C: b       0x8067F6DC
    {
            goto label_8067F6DC;
    }

label_8067F630:
    ctx->pc = 0x8067F630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F630: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F634:
    ctx->pc = 0x8067F634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F634u)) return;
    // 8067F634: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F638:
    ctx->pc = 0x8067F638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F638u)) return;
    // 8067F638: bl      0x80503804
    {
            ctx->lr = 0x8067F63Cu;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F63C:
    ctx->pc = 0x8067F63Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F63Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F63C: cmpwi   r3, 0
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

label_8067F640:
    ctx->pc = 0x8067F640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F640u)) return;
    // 8067F640: bc    12, 2, 0x8067F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F6DC;
        }
    }

label_8067F644:
    ctx->pc = 0x8067F644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8067F644: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067F648:
    ctx->pc = 0x8067F648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F648u)) return;
    // 8067F648: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_8067F64C:
    ctx->pc = 0x8067F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F64Cu)) return;
    // 8067F64C: addi    r4, r3, -22400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22400);

label_8067F650:
    ctx->pc = 0x8067F650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F650: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067F650u)) return;
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
label_8067F654:
    ctx->pc = 0x8067F654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F654u)) return;
    // 8067F654: addi    r3, r5, -22144
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-22144);

label_8067F658:
    ctx->pc = 0x8067F658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F658u)) return;
    // 8067F658: bl      0x804C9324
    {
            ctx->lr = 0x8067F65Cu;
            ctx->pc = 0x804C9324u;
            return;
    }

label_8067F65C:
    ctx->pc = 0x8067F65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F65C: cmpwi   r3, 0
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

label_8067F660:
    ctx->pc = 0x8067F660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F660u)) return;
    // 8067F660: bc    12, 2, 0x8067F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F6DC;
        }
    }

label_8067F664:
    ctx->pc = 0x8067F664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F664: li      r3, 224
    ctx->gpr[3] = (u32)(s32)(224);

label_8067F668:
    ctx->pc = 0x8067F668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F668u)) return;
    // 8067F668: bl      0x805039F8
    {
            ctx->lr = 0x8067F66Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F66C:
    ctx->pc = 0x8067F66Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F66Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F66C: b       0x8067F6D8
    {
            goto label_8067F6D8;
    }

label_8067F670:
    ctx->pc = 0x8067F670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F670: b       0x8067F6DC
    {
            goto label_8067F6DC;
    }

label_8067F674:
    ctx->pc = 0x8067F674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 8067F674: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067F678:
    ctx->pc = 0x8067F678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F678u)) return;
    // 8067F678: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_8067F67C:
    ctx->pc = 0x8067F67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F67Cu)) return;
    // 8067F67C: addi    r4, r4, -6352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6352);

label_8067F680:
    ctx->pc = 0x8067F680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F680u)) return;
    // 8067F680: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_8067F684:
    ctx->pc = 0x8067F684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8067F684: lbz     r7, 77(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(77);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F688:
    ctx->pc = 0x8067F688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F688u)) return;
    // 8067F688: addi    r5, r3, -4408
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-4408);

label_8067F68C:
    ctx->pc = 0x8067F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F68Cu)) return;
    // 8067F68C: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_8067F690:
    ctx->pc = 0x8067F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F690u)) return;
    // 8067F690: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067F694:
    ctx->pc = 0x8067F694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F694u)) return;
    // 8067F694: neg  r6, r7
    {
        u32 a = ctx->gpr[7];
        ctx->gpr[6] = (~a) + 1u;
    }

label_8067F698:
    ctx->pc = 0x8067F698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F698u)) return;
    // 8067F698: or   r6, r6, r7
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[7];
    }

label_8067F69C:
    ctx->pc = 0x8067F69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F69Cu)) return;
    // 8067F69C: srawi r6, r6, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[6];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8067F6A0:
    ctx->pc = 0x8067F6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6A0u)) return;
    // 8067F6A0: andc   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[6];
    }

label_8067F6A4:
    ctx->pc = 0x8067F6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F6A4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F6A8:
    ctx->pc = 0x8067F6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6A8u)) return;
    // 8067F6A8: bl      0x805036C4
    {
            ctx->lr = 0x8067F6ACu;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F6AC:
    ctx->pc = 0x8067F6ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F6AC: li      r3, 87
    ctx->gpr[3] = (u32)(s32)(87);

label_8067F6B0:
    ctx->pc = 0x8067F6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6B0u)) return;
    // 8067F6B0: bl      0x80503880
    {
            ctx->lr = 0x8067F6B4u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F6B4:
    ctx->pc = 0x8067F6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F6B4: li      r3, 456
    ctx->gpr[3] = (u32)(s32)(456);

label_8067F6B8:
    ctx->pc = 0x8067F6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6B8u)) return;
    // 8067F6B8: bl      0x80503880
    {
            ctx->lr = 0x8067F6BCu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F6BC:
    ctx->pc = 0x8067F6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F6BC: li      r3, 468
    ctx->gpr[3] = (u32)(s32)(468);

label_8067F6C0:
    ctx->pc = 0x8067F6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6C0u)) return;
    // 8067F6C0: bl      0x80503880
    {
            ctx->lr = 0x8067F6C4u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F6C4:
    ctx->pc = 0x8067F6C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F6C4: li      r3, 467
    ctx->gpr[3] = (u32)(s32)(467);

label_8067F6C8:
    ctx->pc = 0x8067F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6C8u)) return;
    // 8067F6C8: bl      0x80503880
    {
            ctx->lr = 0x8067F6CCu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F6CC:
    ctx->pc = 0x8067F6CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F6CC: bl      0x80503B3C
    {
            ctx->lr = 0x8067F6D0u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F6D0:
    ctx->pc = 0x8067F6D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F6D0: b       0x8067F6D8
    {
            goto label_8067F6D8;
    }

label_8067F6D4:
    ctx->pc = 0x8067F6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F6D4: b       0x8067F6DC
    {
            goto label_8067F6DC;
    }

label_8067F6D8:
    ctx->pc = 0x8067F6D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F6D8: bl      0x80503C34
    {
            ctx->lr = 0x8067F6DCu;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F6DC:
    ctx->pc = 0x8067F6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F6DC: lwz     r0, 20(r1)
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
label_8067F6E0:
    ctx->pc = 0x8067F6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F6E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F6E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F6E4:
    ctx->pc = 0x8067F6E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6E4u)) return;
    // 8067F6E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F6E8:
    ctx->pc = 0x8067F6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6E8u)) return;
    // 8067F6E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F6EC:
    ctx->pc = 0x8067F6ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F6EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F6F0:
    ctx->pc = 0x8067F6F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F6F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F6F0: stwu     r1, -16(r1)
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
label_8067F6F4:
    ctx->pc = 0x8067F6F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F6F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F6F8:
    ctx->pc = 0x8067F6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6F8u)) return;
    // 8067F6F8: cmpwi   r3, 1
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

label_8067F6FC:
    ctx->pc = 0x8067F6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F6FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F6FC: stw     r0, 20(r1)
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
label_8067F700:
    ctx->pc = 0x8067F700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F700u)) return;
    // 8067F700: bc    12, 2, 0x8067F728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F728;
        }
    }

label_8067F704:
    ctx->pc = 0x8067F704u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F704u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F704: bc    4, 0, 0x8067F714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F714;
        }
    }

label_8067F708:
    ctx->pc = 0x8067F708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F708: cmpwi   r3, 0
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

label_8067F70C:
    ctx->pc = 0x8067F70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F70Cu)) return;
    // 8067F70C: bc    4, 0, 0x8067F720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F720;
        }
    }

label_8067F710:
    ctx->pc = 0x8067F710u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F710u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F710: b       0x8067F76C
    {
            goto label_8067F76C;
    }

label_8067F714:
    ctx->pc = 0x8067F714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F714: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F718:
    ctx->pc = 0x8067F718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F718u)) return;
    // 8067F718: bc    4, 0, 0x8067F76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F76C;
        }
    }

label_8067F71C:
    ctx->pc = 0x8067F71Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F71Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F71C: b       0x8067F748
    {
            goto label_8067F748;
    }

label_8067F720:
    ctx->pc = 0x8067F720u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F720u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F720: bl      0x80503D0C
    {
            ctx->lr = 0x8067F724u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F724:
    ctx->pc = 0x8067F724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F724: b       0x8067F768
    {
            goto label_8067F768;
    }

label_8067F728:
    ctx->pc = 0x8067F728u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F728u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F728: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F72C:
    ctx->pc = 0x8067F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F72Cu)) return;
    // 8067F72C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F730:
    ctx->pc = 0x8067F730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F730u)) return;
    // 8067F730: bl      0x80503804
    {
            ctx->lr = 0x8067F734u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F734:
    ctx->pc = 0x8067F734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F734: cmpwi   r3, 0
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

label_8067F738:
    ctx->pc = 0x8067F738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F738u)) return;
    // 8067F738: bc    12, 2, 0x8067F76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F76C;
        }
    }

label_8067F73C:
    ctx->pc = 0x8067F73Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F73Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F73C: li      r3, 183
    ctx->gpr[3] = (u32)(s32)(183);

label_8067F740:
    ctx->pc = 0x8067F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F740u)) return;
    // 8067F740: bl      0x805039F8
    {
            ctx->lr = 0x8067F744u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F744:
    ctx->pc = 0x8067F744u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F744u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F744: b       0x8067F768
    {
            goto label_8067F768;
    }

label_8067F748:
    ctx->pc = 0x8067F748u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F748u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F748: li      r3, 384
    ctx->gpr[3] = (u32)(s32)(384);

label_8067F74C:
    ctx->pc = 0x8067F74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F74Cu)) return;
    // 8067F74C: bl      0x80503880
    {
            ctx->lr = 0x8067F750u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F750:
    ctx->pc = 0x8067F750u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F750u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F750: li      r3, 26
    ctx->gpr[3] = (u32)(s32)(26);

label_8067F754:
    ctx->pc = 0x8067F754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F754u)) return;
    // 8067F754: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8067F758:
    ctx->pc = 0x8067F758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F758u)) return;
    // 8067F758: bl      0x805036C4
    {
            ctx->lr = 0x8067F75Cu;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F75C:
    ctx->pc = 0x8067F75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F75C: bl      0x80503B3C
    {
            ctx->lr = 0x8067F760u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F760:
    ctx->pc = 0x8067F760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F760: b       0x8067F768
    {
            goto label_8067F768;
    }

label_8067F764:
    ctx->pc = 0x8067F764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F764: b       0x8067F76C
    {
            goto label_8067F76C;
    }

label_8067F768:
    ctx->pc = 0x8067F768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F768: bl      0x80503C34
    {
            ctx->lr = 0x8067F76Cu;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F76C:
    ctx->pc = 0x8067F76Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F76Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F76C: lwz     r0, 20(r1)
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
label_8067F770:
    ctx->pc = 0x8067F770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F770: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F774:
    ctx->pc = 0x8067F774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F774u)) return;
    // 8067F774: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F778:
    ctx->pc = 0x8067F778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F778u)) return;
    // 8067F778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F77C:
    ctx->pc = 0x8067F77Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F77Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F77C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F780:
    ctx->pc = 0x8067F780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F780: stwu     r1, -16(r1)
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
label_8067F784:
    ctx->pc = 0x8067F784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F784: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F788:
    ctx->pc = 0x8067F788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F788u)) return;
    // 8067F788: cmplwi  r3, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F78C:
    ctx->pc = 0x8067F78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F78C: stw     r0, 20(r1)
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
label_8067F790:
    ctx->pc = 0x8067F790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F790u)) return;
    // 8067F790: bc    12, 1, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F794:
    ctx->pc = 0x8067F794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067F794: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067F798:
    ctx->pc = 0x8067F798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F798u)) return;
    // 8067F798: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067F79C:
    ctx->pc = 0x8067F79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F79Cu)) return;
    // 8067F79C: addi    r3, r4, -22064
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-22064);

label_8067F7A0:
    ctx->pc = 0x8067F7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F7A0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F7A4:
    ctx->pc = 0x8067F7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F7A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F7A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F7A8:
    ctx->pc = 0x8067F7A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7A8u)) return;
    // 8067F7A8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067F7AC:
    ctx->pc = 0x8067F7ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F7AC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F7B0:
    ctx->pc = 0x8067F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7B0u)) return;
    // 8067F7B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F7B4:
    ctx->pc = 0x8067F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7B4u)) return;
    // 8067F7B4: bl      0x80503804
    {
            ctx->lr = 0x8067F7B8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F7B8:
    ctx->pc = 0x8067F7B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7B8: cmpwi   r3, 0
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

label_8067F7BC:
    ctx->pc = 0x8067F7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7BCu)) return;
    // 8067F7BC: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F7C0:
    ctx->pc = 0x8067F7C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7C0: li      r3, 187
    ctx->gpr[3] = (u32)(s32)(187);

label_8067F7C4:
    ctx->pc = 0x8067F7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7C4u)) return;
    // 8067F7C4: bl      0x805039F8
    {
            ctx->lr = 0x8067F7C8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F7C8:
    ctx->pc = 0x8067F7C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7C8: li      r3, 392
    ctx->gpr[3] = (u32)(s32)(392);

label_8067F7CC:
    ctx->pc = 0x8067F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7CCu)) return;
    // 8067F7CC: bl      0x80503880
    {
            ctx->lr = 0x8067F7D0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F7D0:
    ctx->pc = 0x8067F7D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F7D0: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F7D4:
    ctx->pc = 0x8067F7D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7D4: li      r3, 86
    ctx->gpr[3] = (u32)(s32)(86);

label_8067F7D8:
    ctx->pc = 0x8067F7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7D8u)) return;
    // 8067F7D8: bl      0x8050386C
    {
            ctx->lr = 0x8067F7DCu;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F7DC:
    ctx->pc = 0x8067F7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F7DC: bl      0x80503D0C
    {
            ctx->lr = 0x8067F7E0u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F7E0:
    ctx->pc = 0x8067F7E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F7E0: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F7E4:
    ctx->pc = 0x8067F7E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7E4: li      r3, 188
    ctx->gpr[3] = (u32)(s32)(188);

label_8067F7E8:
    ctx->pc = 0x8067F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7E8u)) return;
    // 8067F7E8: bl      0x805039F8
    {
            ctx->lr = 0x8067F7ECu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F7EC:
    ctx->pc = 0x8067F7ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F7EC: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F7F0:
    ctx->pc = 0x8067F7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7F0: li      r3, 189
    ctx->gpr[3] = (u32)(s32)(189);

label_8067F7F4:
    ctx->pc = 0x8067F7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F7F4u)) return;
    // 8067F7F4: bl      0x805039F8
    {
            ctx->lr = 0x8067F7F8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F7F8:
    ctx->pc = 0x8067F7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F7F8: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F7FC:
    ctx->pc = 0x8067F7FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F7FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F7FC: li      r3, 190
    ctx->gpr[3] = (u32)(s32)(190);

label_8067F800:
    ctx->pc = 0x8067F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F800u)) return;
    // 8067F800: bl      0x805039F8
    {
            ctx->lr = 0x8067F804u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F804:
    ctx->pc = 0x8067F804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F804: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F808:
    ctx->pc = 0x8067F808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F808: bl      0x80503D0C
    {
            ctx->lr = 0x8067F80Cu;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F80C:
    ctx->pc = 0x8067F80Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F80Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F80C: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F810:
    ctx->pc = 0x8067F810u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F810u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F810: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F814:
    ctx->pc = 0x8067F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F814u)) return;
    // 8067F814: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8067F818:
    ctx->pc = 0x8067F818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F818u)) return;
    // 8067F818: bl      0x80503804
    {
            ctx->lr = 0x8067F81Cu;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F81C:
    ctx->pc = 0x8067F81Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F81Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F81C: cmpwi   r3, 0
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

label_8067F820:
    ctx->pc = 0x8067F820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F820u)) return;
    // 8067F820: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F824:
    ctx->pc = 0x8067F824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F824: li      r3, 191
    ctx->gpr[3] = (u32)(s32)(191);

label_8067F828:
    ctx->pc = 0x8067F828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F828u)) return;
    // 8067F828: bl      0x805039F8
    {
            ctx->lr = 0x8067F82Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F82C:
    ctx->pc = 0x8067F82Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F82Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F82C: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F830:
    ctx->pc = 0x8067F830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F830: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8067F834:
    ctx->pc = 0x8067F834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F834u)) return;
    // 8067F834: bl      0x804C7340
    {
            ctx->lr = 0x8067F838u;
            ctx->pc = 0x804C7340u;
            return;
    }

label_8067F838:
    ctx->pc = 0x8067F838u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F838u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F838: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F83C:
    ctx->pc = 0x8067F83Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F83Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F83C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F840:
    ctx->pc = 0x8067F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F840u)) return;
    // 8067F840: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F844:
    ctx->pc = 0x8067F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F844u)) return;
    // 8067F844: bl      0x80503804
    {
            ctx->lr = 0x8067F848u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F848:
    ctx->pc = 0x8067F848u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F848u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F848: cmpwi   r3, 0
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

label_8067F84C:
    ctx->pc = 0x8067F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F84Cu)) return;
    // 8067F84C: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F850:
    ctx->pc = 0x8067F850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F850: li      r3, 320
    ctx->gpr[3] = (u32)(s32)(320);

label_8067F854:
    ctx->pc = 0x8067F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F854u)) return;
    // 8067F854: bl      0x805039F8
    {
            ctx->lr = 0x8067F858u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F858:
    ctx->pc = 0x8067F858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F858: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F85C:
    ctx->pc = 0x8067F85Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F85Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F85C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F860:
    ctx->pc = 0x8067F860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F860u)) return;
    // 8067F860: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F864:
    ctx->pc = 0x8067F864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F864u)) return;
    // 8067F864: bl      0x80503804
    {
            ctx->lr = 0x8067F868u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F868:
    ctx->pc = 0x8067F868u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F868u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F868: cmpwi   r3, 0
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

label_8067F86C:
    ctx->pc = 0x8067F86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F86Cu)) return;
    // 8067F86C: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F870:
    ctx->pc = 0x8067F870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F870: li      r3, 393
    ctx->gpr[3] = (u32)(s32)(393);

label_8067F874:
    ctx->pc = 0x8067F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F874u)) return;
    // 8067F874: bl      0x80503850
    {
            ctx->lr = 0x8067F878u;
            ctx->pc = 0x80503850u;
            return;
    }

label_8067F878:
    ctx->pc = 0x8067F878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F878: cmpwi   r3, 0
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

label_8067F87C:
    ctx->pc = 0x8067F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F87Cu)) return;
    // 8067F87C: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F880:
    ctx->pc = 0x8067F880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F880: li      r3, 391
    ctx->gpr[3] = (u32)(s32)(391);

label_8067F884:
    ctx->pc = 0x8067F884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F884u)) return;
    // 8067F884: bl      0x80503880
    {
            ctx->lr = 0x8067F888u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F888:
    ctx->pc = 0x8067F888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F888: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F88C:
    ctx->pc = 0x8067F88Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F88Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F88C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_8067F890:
    ctx->pc = 0x8067F890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F890u)) return;
    // 8067F890: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8067F894:
    ctx->pc = 0x8067F894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F894u)) return;
    // 8067F894: bl      0x80503804
    {
            ctx->lr = 0x8067F898u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F898:
    ctx->pc = 0x8067F898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F898: cmpwi   r3, 0
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

label_8067F89C:
    ctx->pc = 0x8067F89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F89Cu)) return;
    // 8067F89C: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F8A0:
    ctx->pc = 0x8067F8A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F8A0: li      r3, 192
    ctx->gpr[3] = (u32)(s32)(192);

label_8067F8A4:
    ctx->pc = 0x8067F8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8A4u)) return;
    // 8067F8A4: bl      0x805039F8
    {
            ctx->lr = 0x8067F8A8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F8A8:
    ctx->pc = 0x8067F8A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F8A8: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F8AC:
    ctx->pc = 0x8067F8ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F8AC: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F8B0:
    ctx->pc = 0x8067F8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8B0u)) return;
    // 8067F8B0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067F8B4:
    ctx->pc = 0x8067F8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8B4u)) return;
    // 8067F8B4: bl      0x80503804
    {
            ctx->lr = 0x8067F8B8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F8B8:
    ctx->pc = 0x8067F8B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F8B8: cmpwi   r3, 0
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

label_8067F8BC:
    ctx->pc = 0x8067F8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8BCu)) return;
    // 8067F8BC: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F8C0:
    ctx->pc = 0x8067F8C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F8C0: bl      0x80503D0C
    {
            ctx->lr = 0x8067F8C4u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067F8C4:
    ctx->pc = 0x8067F8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F8C4: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F8C8:
    ctx->pc = 0x8067F8C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F8C8: li      r3, 193
    ctx->gpr[3] = (u32)(s32)(193);

label_8067F8CC:
    ctx->pc = 0x8067F8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8CCu)) return;
    // 8067F8CC: bl      0x805039F8
    {
            ctx->lr = 0x8067F8D0u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F8D0:
    ctx->pc = 0x8067F8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F8D0: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F8D4:
    ctx->pc = 0x8067F8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F8D4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8067F8D8:
    ctx->pc = 0x8067F8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8D8u)) return;
    // 8067F8D8: bl      0x80503434
    {
            ctx->lr = 0x8067F8DCu;
            ctx->pc = 0x80503434u;
            return;
    }

label_8067F8DC:
    ctx->pc = 0x8067F8DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F8DC: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F8E0:
    ctx->pc = 0x8067F8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F8E0: li      r3, 410
    ctx->gpr[3] = (u32)(s32)(410);

label_8067F8E4:
    ctx->pc = 0x8067F8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8E4u)) return;
    // 8067F8E4: bl      0x80503850
    {
            ctx->lr = 0x8067F8E8u;
            ctx->pc = 0x80503850u;
            return;
    }

label_8067F8E8:
    ctx->pc = 0x8067F8E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F8E8: cmpwi   r3, 0
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

label_8067F8EC:
    ctx->pc = 0x8067F8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8ECu)) return;
    // 8067F8EC: bc    4, 2, 0x8067F95C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F95C;
        }
    }

label_8067F8F0:
    ctx->pc = 0x8067F8F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F8F0: b       0x8067F960
    {
            goto label_8067F960;
    }

label_8067F8F4:
    ctx->pc = 0x8067F8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F8F4: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067F8F8:
    ctx->pc = 0x8067F8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8F8u)) return;
    // 8067F8F8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067F8FC:
    ctx->pc = 0x8067F8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F8FCu)) return;
    // 8067F8FC: bl      0x80503804
    {
            ctx->lr = 0x8067F900u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067F900:
    ctx->pc = 0x8067F900u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F900u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F900: cmpwi   r3, 0
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

label_8067F904:
    ctx->pc = 0x8067F904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F904u)) return;
    // 8067F904: bc    12, 2, 0x8067F960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067F960;
        }
    }

label_8067F908:
    ctx->pc = 0x8067F908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F908: li      r3, 194
    ctx->gpr[3] = (u32)(s32)(194);

label_8067F90C:
    ctx->pc = 0x8067F90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F90Cu)) return;
    // 8067F90C: bl      0x805039F8
    {
            ctx->lr = 0x8067F910u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067F910:
    ctx->pc = 0x8067F910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F910: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F914:
    ctx->pc = 0x8067F914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F914: li      r3, 392
    ctx->gpr[3] = (u32)(s32)(392);

label_8067F918:
    ctx->pc = 0x8067F918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F918u)) return;
    // 8067F918: bl      0x8050386C
    {
            ctx->lr = 0x8067F91Cu;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067F91C:
    ctx->pc = 0x8067F91Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F91Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F91C: li      r3, 395
    ctx->gpr[3] = (u32)(s32)(395);

label_8067F920:
    ctx->pc = 0x8067F920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F920u)) return;
    // 8067F920: bl      0x80503880
    {
            ctx->lr = 0x8067F924u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F924:
    ctx->pc = 0x8067F924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F924: li      r3, 390
    ctx->gpr[3] = (u32)(s32)(390);

label_8067F928:
    ctx->pc = 0x8067F928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F928u)) return;
    // 8067F928: bl      0x80503880
    {
            ctx->lr = 0x8067F92Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F92C:
    ctx->pc = 0x8067F92Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F92Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F92C: li      r3, 408
    ctx->gpr[3] = (u32)(s32)(408);

label_8067F930:
    ctx->pc = 0x8067F930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F930u)) return;
    // 8067F930: bl      0x80503880
    {
            ctx->lr = 0x8067F934u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F934:
    ctx->pc = 0x8067F934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F934: li      r3, 409
    ctx->gpr[3] = (u32)(s32)(409);

label_8067F938:
    ctx->pc = 0x8067F938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F938u)) return;
    // 8067F938: bl      0x80503880
    {
            ctx->lr = 0x8067F93Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F93C:
    ctx->pc = 0x8067F93Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F93Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067F93C: li      r3, 86
    ctx->gpr[3] = (u32)(s32)(86);

label_8067F940:
    ctx->pc = 0x8067F940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F940u)) return;
    // 8067F940: bl      0x80503880
    {
            ctx->lr = 0x8067F944u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067F944:
    ctx->pc = 0x8067F944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067F944: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_8067F948:
    ctx->pc = 0x8067F948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F948u)) return;
    // 8067F948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067F94C:
    ctx->pc = 0x8067F94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F94Cu)) return;
    // 8067F94C: bl      0x805036C4
    {
            ctx->lr = 0x8067F950u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067F950:
    ctx->pc = 0x8067F950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F950: bl      0x80503B3C
    {
            ctx->lr = 0x8067F954u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067F954:
    ctx->pc = 0x8067F954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F954: b       0x8067F95C
    {
            goto label_8067F95C;
    }

label_8067F958:
    ctx->pc = 0x8067F958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F958: b       0x8067F960
    {
            goto label_8067F960;
    }

label_8067F95C:
    ctx->pc = 0x8067F95Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067F95C: bl      0x80503C34
    {
            ctx->lr = 0x8067F960u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067F960:
    ctx->pc = 0x8067F960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F960: lwz     r0, 20(r1)
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
label_8067F964:
    ctx->pc = 0x8067F964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F964: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F968:
    ctx->pc = 0x8067F968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F968u)) return;
    // 8067F968: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F96C:
    ctx->pc = 0x8067F96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F96Cu)) return;
    // 8067F96C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F970:
    ctx->pc = 0x8067F970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067F970: stwu     r1, -16(r1)
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
label_8067F974:
    ctx->pc = 0x8067F974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F974u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067F974: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F978:
    ctx->pc = 0x8067F978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F978u)) return;
    // 8067F978: lis     r3, -28628
    ctx->gpr[3] = ((u32)(s32)(-28628) << 16);

label_8067F97C:
    ctx->pc = 0x8067F97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F97Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F97C: stw     r0, 20(r1)
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
label_8067F980:
    ctx->pc = 0x8067F980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F980u)) return;
    // 8067F980: addi    r3, r3, -6352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6352);

label_8067F984:
    ctx->pc = 0x8067F984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F984: lbz     r0, 391(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(391);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F988:
    ctx->pc = 0x8067F988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F988u)) return;
    // 8067F988: cmplwi  r0, 0x0000
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

label_8067F98C:
    ctx->pc = 0x8067F98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F98Cu)) return;
    // 8067F98C: bc    4, 2, 0x8067F9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F9B0;
        }
    }

label_8067F990:
    ctx->pc = 0x8067F990u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F990u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F990: lbz     r0, 393(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(393);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F994:
    ctx->pc = 0x8067F994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F994u)) return;
    // 8067F994: cmplwi  r0, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067F998:
    ctx->pc = 0x8067F998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F998u)) return;
    // 8067F998: bc    4, 2, 0x8067F9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067F9B0;
        }
    }

label_8067F99C:
    ctx->pc = 0x8067F99Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F99Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8067F99C: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_8067F9A0:
    ctx->pc = 0x8067F9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9A0u)) return;
    // 8067F9A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8067F9A4:
    ctx->pc = 0x8067F9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9A4u)) return;
    // 8067F9A4: addi    r5, r4, -1600
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-1600);

label_8067F9A8:
    ctx->pc = 0x8067F9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9A8u)) return;
    // 8067F9A8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067F9AC:
    ctx->pc = 0x8067F9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9ACu)) return;
    // 8067F9AC: bl      0x8050FD60
    {
            ctx->lr = 0x8067F9B0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_8067F9B0:
    ctx->pc = 0x8067F9B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F9B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067F9B0: lwz     r0, 20(r1)
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
label_8067F9B4:
    ctx->pc = 0x8067F9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067F9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067F9B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F9B8:
    ctx->pc = 0x8067F9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9B8u)) return;
    // 8067F9B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067F9BC:
    ctx->pc = 0x8067F9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9BCu)) return;
    // 8067F9BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F9C0:
    ctx->pc = 0x8067F9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8067F9C0: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_8067F9C4:
    ctx->pc = 0x8067F9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9C4u)) return;
    // 8067F9C4: addi    r0, r4, -1584
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1584);

label_8067F9C8:
    ctx->pc = 0x8067F9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F9C8: stw     r0, 16(r3)
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
label_8067F9CC:
    ctx->pc = 0x8067F9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9CCu)) return;
    // 8067F9CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067F9D0:
    ctx->pc = 0x8067F9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067F9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8067F9D0: stwu     r1, -16(r1)
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
label_8067F9D4:
    ctx->pc = 0x8067F9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067F9D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067F9D8:
    ctx->pc = 0x8067F9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9D8u)) return;
    // 8067F9D8: lis     r6, -28429
    ctx->gpr[6] = ((u32)(s32)(-28429) << 16);

label_8067F9DC:
    ctx->pc = 0x8067F9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9DCu)) return;
    // 8067F9DC: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_8067F9E0:
    ctx->pc = 0x8067F9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8067F9E0: stw     r0, 20(r1)
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
label_8067F9E4:
    ctx->pc = 0x8067F9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9E4u)) return;
    // 8067F9E4: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067F9E8:
    ctx->pc = 0x8067F9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067F9E8: lfs     f1, -22392(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067F9E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-22392);
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
label_8067F9EC:
    ctx->pc = 0x8067F9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067F9EC: stw     r31, 12(r1)
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
label_8067F9F0:
    ctx->pc = 0x8067F9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9F0u)) return;
    // 8067F9F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8067F9F4:
    ctx->pc = 0x8067F9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067F9F4: lfs     f2, -22388(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067F9F4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-22388);
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
label_8067F9F8:
    ctx->pc = 0x8067F9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9F8u)) return;
    // 8067F9F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8067F9FC:
    ctx->pc = 0x8067F9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067F9FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067F9FC: lfs     f3, -22384(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067F9FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22384);
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
label_8067FA00:
    ctx->pc = 0x8067FA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA00u)) return;
    // 8067FA00: bl      0x804C9830
    {
            ctx->lr = 0x8067FA04u;
            ctx->pc = 0x804C9830u;
            return;
    }

label_8067FA04:
    ctx->pc = 0x8067FA04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8067FA08:
    ctx->pc = 0x8067FA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA08u)) return;
    // 8067FA08: bl      0x8050F9E0
    {
            ctx->lr = 0x8067FA0Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_8067FA0C:
    ctx->pc = 0x8067FA0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FA0C: lwz     r0, 20(r1)
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
label_8067FA10:
    ctx->pc = 0x8067FA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FA10: lwz     r31, 12(r1)
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
label_8067FA14:
    ctx->pc = 0x8067FA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FA14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FA14: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FA18:
    ctx->pc = 0x8067FA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA18u)) return;
    // 8067FA18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067FA1C:
    ctx->pc = 0x8067FA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA1Cu)) return;
    // 8067FA1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FA20:
    ctx->pc = 0x8067FA20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FA20: stwu     r1, -16(r1)
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
label_8067FA24:
    ctx->pc = 0x8067FA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FA24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FA28:
    ctx->pc = 0x8067FA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA28u)) return;
    // 8067FA28: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067FA2C:
    ctx->pc = 0x8067FA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FA2C: stw     r0, 20(r1)
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
label_8067FA30:
    ctx->pc = 0x8067FA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA30u)) return;
    // 8067FA30: bc    12, 1, 0x8067FB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FB2C;
        }
    }

label_8067FA34:
    ctx->pc = 0x8067FA34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067FA34: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FA38:
    ctx->pc = 0x8067FA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA38u)) return;
    // 8067FA38: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067FA3C:
    ctx->pc = 0x8067FA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA3Cu)) return;
    // 8067FA3C: addi    r3, r4, -21984
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-21984);

label_8067FA40:
    ctx->pc = 0x8067FA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FA40: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FA44:
    ctx->pc = 0x8067FA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FA44: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FA48:
    ctx->pc = 0x8067FA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA48u)) return;
    // 8067FA48: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067FA4C:
    ctx->pc = 0x8067FA4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FA4C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FA50:
    ctx->pc = 0x8067FA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA50u)) return;
    // 8067FA50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FA54:
    ctx->pc = 0x8067FA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA54u)) return;
    // 8067FA54: bl      0x80503804
    {
            ctx->lr = 0x8067FA58u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FA58:
    ctx->pc = 0x8067FA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA58: cmpwi   r3, 0
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

label_8067FA5C:
    ctx->pc = 0x8067FA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA5Cu)) return;
    // 8067FA5C: bc    12, 2, 0x8067FB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FB2C;
        }
    }

label_8067FA60:
    ctx->pc = 0x8067FA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA60: li      r3, 321
    ctx->gpr[3] = (u32)(s32)(321);

label_8067FA64:
    ctx->pc = 0x8067FA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA64u)) return;
    // 8067FA64: bl      0x805039F8
    {
            ctx->lr = 0x8067FA68u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FA68:
    ctx->pc = 0x8067FA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FA68: b       0x8067FB28
    {
            goto label_8067FB28;
    }

label_8067FA6C:
    ctx->pc = 0x8067FA6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA6C: li      r3, 391
    ctx->gpr[3] = (u32)(s32)(391);

label_8067FA70:
    ctx->pc = 0x8067FA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA70u)) return;
    // 8067FA70: bl      0x80503880
    {
            ctx->lr = 0x8067FA74u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067FA74:
    ctx->pc = 0x8067FA74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA74: li      r3, 397
    ctx->gpr[3] = (u32)(s32)(397);

label_8067FA78:
    ctx->pc = 0x8067FA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA78u)) return;
    // 8067FA78: bl      0x80503880
    {
            ctx->lr = 0x8067FA7Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067FA7C:
    ctx->pc = 0x8067FA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FA7C: bl      0x80503D0C
    {
            ctx->lr = 0x8067FA80u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067FA80:
    ctx->pc = 0x8067FA80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FA80: b       0x8067FB28
    {
            goto label_8067FB28;
    }

label_8067FA84:
    ctx->pc = 0x8067FA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA84: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_8067FA88:
    ctx->pc = 0x8067FA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA88u)) return;
    // 8067FA88: bl      0x805033D4
    {
            ctx->lr = 0x8067FA8Cu;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067FA8C:
    ctx->pc = 0x8067FA8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FA8C: cmpwi   r3, 0
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

label_8067FA90:
    ctx->pc = 0x8067FA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA90u)) return;
    // 8067FA90: bc    4, 2, 0x8067FB28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067FB28;
        }
    }

label_8067FA94:
    ctx->pc = 0x8067FA94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FA94: b       0x8067FB2C
    {
            goto label_8067FB2C;
    }

label_8067FA98:
    ctx->pc = 0x8067FA98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FA98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FA98: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FA9C:
    ctx->pc = 0x8067FA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FA9Cu)) return;
    // 8067FA9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FAA0:
    ctx->pc = 0x8067FAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAA0u)) return;
    // 8067FAA0: bl      0x80503804
    {
            ctx->lr = 0x8067FAA4u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FAA4:
    ctx->pc = 0x8067FAA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FAA4: cmpwi   r3, 0
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

label_8067FAA8:
    ctx->pc = 0x8067FAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAA8u)) return;
    // 8067FAA8: bc    12, 2, 0x8067FB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FB2C;
        }
    }

label_8067FAAC:
    ctx->pc = 0x8067FAACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FAAC: li      r3, 322
    ctx->gpr[3] = (u32)(s32)(322);

label_8067FAB0:
    ctx->pc = 0x8067FAB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAB0u)) return;
    // 8067FAB0: bl      0x805039F8
    {
            ctx->lr = 0x8067FAB4u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FAB4:
    ctx->pc = 0x8067FAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FAB4: b       0x8067FB28
    {
            goto label_8067FB28;
    }

label_8067FAB8:
    ctx->pc = 0x8067FAB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FAB8: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FABC:
    ctx->pc = 0x8067FABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FABCu)) return;
    // 8067FABC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FAC0:
    ctx->pc = 0x8067FAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAC0u)) return;
    // 8067FAC0: bl      0x80503804
    {
            ctx->lr = 0x8067FAC4u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FAC4:
    ctx->pc = 0x8067FAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FAC4: cmpwi   r3, 0
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

label_8067FAC8:
    ctx->pc = 0x8067FAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAC8u)) return;
    // 8067FAC8: bc    12, 2, 0x8067FB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FB2C;
        }
    }

label_8067FACC:
    ctx->pc = 0x8067FACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8067FACC: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067FAD0:
    ctx->pc = 0x8067FAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAD0u)) return;
    // 8067FAD0: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FAD4:
    ctx->pc = 0x8067FAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAD4u)) return;
    // 8067FAD4: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_8067FAD8:
    ctx->pc = 0x8067FAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FAD8: lfs     f0, -22376(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FAD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22376);
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
label_8067FADC:
    ctx->pc = 0x8067FADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FADC: lwz     r4, 0(r4)
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
label_8067FAE0:
    ctx->pc = 0x8067FAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FAE0: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FAE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_8067FAE4:
    ctx->pc = 0x8067FAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAE4u)) return;
    // 8067FAE4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FAE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8067FAE8:
    ctx->pc = 0x8067FAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAE8u)) return;
    // 8067FAE8: bc    12, 0, 0x8067FB28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FB28;
        }
    }

label_8067FAEC:
    ctx->pc = 0x8067FAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FAEC: b       0x8067FB2C
    {
            goto label_8067FB2C;
    }

label_8067FAF0:
    ctx->pc = 0x8067FAF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FAF0: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_8067FAF4:
    ctx->pc = 0x8067FAF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAF4u)) return;
    // 8067FAF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FAF8:
    ctx->pc = 0x8067FAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FAF8u)) return;
    // 8067FAF8: bl      0x805036C4
    {
            ctx->lr = 0x8067FAFCu;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067FAFC:
    ctx->pc = 0x8067FAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FAFC: b       0x8067FB28
    {
            goto label_8067FB28;
    }

label_8067FB00:
    ctx->pc = 0x8067FB00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FB00: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_8067FB04:
    ctx->pc = 0x8067FB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB04u)) return;
    // 8067FB04: bl      0x805033D4
    {
            ctx->lr = 0x8067FB08u;
            ctx->pc = 0x805033D4u;
            return;
    }

label_8067FB08:
    ctx->pc = 0x8067FB08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FB08: cmpwi   r3, 0
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

label_8067FB0C:
    ctx->pc = 0x8067FB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB0Cu)) return;
    // 8067FB0C: bc    12, 2, 0x8067FB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FB2C;
        }
    }

label_8067FB10:
    ctx->pc = 0x8067FB10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FB10: li      r3, 199
    ctx->gpr[3] = (u32)(s32)(199);

label_8067FB14:
    ctx->pc = 0x8067FB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB14u)) return;
    // 8067FB14: bl      0x805039F8
    {
            ctx->lr = 0x8067FB18u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FB18:
    ctx->pc = 0x8067FB18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FB18: b       0x8067FB28
    {
            goto label_8067FB28;
    }

label_8067FB1C:
    ctx->pc = 0x8067FB1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FB1C: bl      0x80503B3C
    {
            ctx->lr = 0x8067FB20u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067FB20:
    ctx->pc = 0x8067FB20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FB20: b       0x8067FB28
    {
            goto label_8067FB28;
    }

label_8067FB24:
    ctx->pc = 0x8067FB24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FB24: b       0x8067FB2C
    {
            goto label_8067FB2C;
    }

label_8067FB28:
    ctx->pc = 0x8067FB28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FB28: bl      0x80503C34
    {
            ctx->lr = 0x8067FB2Cu;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067FB2C:
    ctx->pc = 0x8067FB2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FB2C: lwz     r0, 20(r1)
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
label_8067FB30:
    ctx->pc = 0x8067FB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FB30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FB30: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FB34:
    ctx->pc = 0x8067FB34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB34u)) return;
    // 8067FB34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067FB38:
    ctx->pc = 0x8067FB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB38u)) return;
    // 8067FB38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FB3C:
    ctx->pc = 0x8067FB3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FB3C: stwu     r1, -16(r1)
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
label_8067FB40:
    ctx->pc = 0x8067FB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FB40: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FB44:
    ctx->pc = 0x8067FB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB44u)) return;
    // 8067FB44: li      r3, 392
    ctx->gpr[3] = (u32)(s32)(392);

label_8067FB48:
    ctx->pc = 0x8067FB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FB48: stw     r0, 20(r1)
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
label_8067FB4C:
    ctx->pc = 0x8067FB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB4Cu)) return;
    // 8067FB4C: bl      0x8050386C
    {
            ctx->lr = 0x8067FB50u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067FB50:
    ctx->pc = 0x8067FB50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FB50: lwz     r0, 20(r1)
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
label_8067FB54:
    ctx->pc = 0x8067FB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FB54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FB54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FB58:
    ctx->pc = 0x8067FB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB58u)) return;
    // 8067FB58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067FB5C:
    ctx->pc = 0x8067FB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB5Cu)) return;
    // 8067FB5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FB60:
    ctx->pc = 0x8067FB60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FB60: stwu     r1, -16(r1)
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
label_8067FB64:
    ctx->pc = 0x8067FB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FB64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FB68:
    ctx->pc = 0x8067FB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB68u)) return;
    // 8067FB68: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067FB6C:
    ctx->pc = 0x8067FB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FB6C: stw     r0, 20(r1)
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
label_8067FB70:
    ctx->pc = 0x8067FB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB70u)) return;
    // 8067FB70: bc    12, 1, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FB74:
    ctx->pc = 0x8067FB74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067FB74: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FB78:
    ctx->pc = 0x8067FB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB78u)) return;
    // 8067FB78: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067FB7C:
    ctx->pc = 0x8067FB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB7Cu)) return;
    // 8067FB7C: addi    r3, r4, -21932
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-21932);

label_8067FB80:
    ctx->pc = 0x8067FB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FB80: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FB84:
    ctx->pc = 0x8067FB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FB84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FB84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FB88:
    ctx->pc = 0x8067FB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB88u)) return;
    // 8067FB88: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067FB8C:
    ctx->pc = 0x8067FB8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FB8C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FB90:
    ctx->pc = 0x8067FB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB90u)) return;
    // 8067FB90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FB94:
    ctx->pc = 0x8067FB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB94u)) return;
    // 8067FB94: bl      0x80503804
    {
            ctx->lr = 0x8067FB98u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FB98:
    ctx->pc = 0x8067FB98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FB98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FB98: cmpwi   r3, 0
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

label_8067FB9C:
    ctx->pc = 0x8067FB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FB9Cu)) return;
    // 8067FB9C: bc    12, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FBA0:
    ctx->pc = 0x8067FBA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FBA0: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_8067FBA4:
    ctx->pc = 0x8067FBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBA4u)) return;
    // 8067FBA4: bl      0x805039F8
    {
            ctx->lr = 0x8067FBA8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FBA8:
    ctx->pc = 0x8067FBA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FBA8: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FBAC:
    ctx->pc = 0x8067FBACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FBAC: li      r3, 84
    ctx->gpr[3] = (u32)(s32)(84);

label_8067FBB0:
    ctx->pc = 0x8067FBB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBB0u)) return;
    // 8067FBB0: bl      0x8050386C
    {
            ctx->lr = 0x8067FBB4u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067FBB4:
    ctx->pc = 0x8067FBB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FBB4: bl      0x80503D0C
    {
            ctx->lr = 0x8067FBB8u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067FBB8:
    ctx->pc = 0x8067FBB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FBB8: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FBBC:
    ctx->pc = 0x8067FBBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FBBC: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FBC0:
    ctx->pc = 0x8067FBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBC0u)) return;
    // 8067FBC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FBC4:
    ctx->pc = 0x8067FBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBC4u)) return;
    // 8067FBC4: bl      0x80503804
    {
            ctx->lr = 0x8067FBC8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FBC8:
    ctx->pc = 0x8067FBC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FBC8: cmpwi   r3, 0
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

label_8067FBCC:
    ctx->pc = 0x8067FBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBCCu)) return;
    // 8067FBCC: bc    12, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FBD0:
    ctx->pc = 0x8067FBD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 8067FBD0: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067FBD4:
    ctx->pc = 0x8067FBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBD4u)) return;
    // 8067FBD4: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FBD8:
    ctx->pc = 0x8067FBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBD8u)) return;
    // 8067FBD8: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_8067FBDC:
    ctx->pc = 0x8067FBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FBDC: lfs     f0, -22368(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FBDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22368);
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
label_8067FBE0:
    ctx->pc = 0x8067FBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FBE0: lwz     r4, 0(r4)
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
label_8067FBE4:
    ctx->pc = 0x8067FBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FBE4: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FBE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_8067FBE8:
    ctx->pc = 0x8067FBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBE8u)) return;
    // 8067FBE8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FBE8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8067FBEC:
    ctx->pc = 0x8067FBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBECu)) return;
    // 8067FBEC: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8067FBF0:
    ctx->pc = 0x8067FBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBF0u)) return;
    // 8067FBF0: bc    4, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FBF4:
    ctx->pc = 0x8067FBF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FBF4: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_8067FBF8:
    ctx->pc = 0x8067FBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FBF8u)) return;
    // 8067FBF8: bl      0x805039F8
    {
            ctx->lr = 0x8067FBFCu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FBFC:
    ctx->pc = 0x8067FBFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FBFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FBFC: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FC00:
    ctx->pc = 0x8067FC00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC00: b       0x8067FCC0
    {
            goto label_8067FCC0;
    }

label_8067FC04:
    ctx->pc = 0x8067FC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC04: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8067FC08:
    ctx->pc = 0x8067FC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC08u)) return;
    // 8067FC08: bl      0x8046EECC
    {
            ctx->lr = 0x8067FC0Cu;
            ctx->pc = 0x8046EECCu;
            return;
    }

label_8067FC0C:
    ctx->pc = 0x8067FC0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FC0C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FC10:
    ctx->pc = 0x8067FC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC10u)) return;
    // 8067FC10: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8067FC14:
    ctx->pc = 0x8067FC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC14u)) return;
    // 8067FC14: bl      0x805036C4
    {
            ctx->lr = 0x8067FC18u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_8067FC18:
    ctx->pc = 0x8067FC18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC18: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FC1C:
    ctx->pc = 0x8067FC1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FC1C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FC20:
    ctx->pc = 0x8067FC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC20u)) return;
    // 8067FC20: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067FC24:
    ctx->pc = 0x8067FC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC24u)) return;
    // 8067FC24: bl      0x80503804
    {
            ctx->lr = 0x8067FC28u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FC28:
    ctx->pc = 0x8067FC28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC28: cmpwi   r3, 0
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

label_8067FC2C:
    ctx->pc = 0x8067FC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC2Cu)) return;
    // 8067FC2C: bc    12, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FC30:
    ctx->pc = 0x8067FC30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC30: li      r3, 289
    ctx->gpr[3] = (u32)(s32)(289);

label_8067FC34:
    ctx->pc = 0x8067FC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC34u)) return;
    // 8067FC34: bl      0x805039F8
    {
            ctx->lr = 0x8067FC38u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FC38:
    ctx->pc = 0x8067FC38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC38: li      r3, 269
    ctx->gpr[3] = (u32)(s32)(269);

label_8067FC3C:
    ctx->pc = 0x8067FC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC3Cu)) return;
    // 8067FC3C: bl      0x80503880
    {
            ctx->lr = 0x8067FC40u;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067FC40:
    ctx->pc = 0x8067FC40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC40: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FC44:
    ctx->pc = 0x8067FC44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC44: bl      0x80503D0C
    {
            ctx->lr = 0x8067FC48u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067FC48:
    ctx->pc = 0x8067FC48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC48: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FC4C:
    ctx->pc = 0x8067FC4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FC4C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FC50:
    ctx->pc = 0x8067FC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC50u)) return;
    // 8067FC50: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8067FC54:
    ctx->pc = 0x8067FC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC54u)) return;
    // 8067FC54: bl      0x80503804
    {
            ctx->lr = 0x8067FC58u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FC58:
    ctx->pc = 0x8067FC58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC58: cmpwi   r3, 0
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

label_8067FC5C:
    ctx->pc = 0x8067FC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC5Cu)) return;
    // 8067FC5C: bc    12, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FC60:
    ctx->pc = 0x8067FC60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 8067FC60: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FC64:
    ctx->pc = 0x8067FC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC64u)) return;
    // 8067FC64: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FC68:
    ctx->pc = 0x8067FC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC68u)) return;
    // 8067FC68: addi    r5, r4, -22364
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22364);

label_8067FC6C:
    ctx->pc = 0x8067FC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC6Cu)) return;
    // 8067FC6C: lis     r6, -28429
    ctx->gpr[6] = ((u32)(s32)(-28429) << 16);

label_8067FC70:
    ctx->pc = 0x8067FC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC70u)) return;
    // 8067FC70: addi    r4, r3, -22360
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22360);

label_8067FC74:
    ctx->pc = 0x8067FC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FC74: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067FC74u)) return;
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
label_8067FC78:
    ctx->pc = 0x8067FC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FC78: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FC78u)) return;
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
label_8067FC7C:
    ctx->pc = 0x8067FC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC7Cu)) return;
    // 8067FC7C: addi    r3, r6, -21952
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-21952);

label_8067FC80:
    ctx->pc = 0x8067FC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC80u)) return;
    // 8067FC80: bl      0x804C92A8
    {
            ctx->lr = 0x8067FC84u;
            ctx->pc = 0x804C92A8u;
            return;
    }

label_8067FC84:
    ctx->pc = 0x8067FC84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC84: cmpwi   r3, 1
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

label_8067FC88:
    ctx->pc = 0x8067FC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC88u)) return;
    // 8067FC88: bc    4, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FC8C:
    ctx->pc = 0x8067FC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FC8C: li      r3, 290
    ctx->gpr[3] = (u32)(s32)(290);

label_8067FC90:
    ctx->pc = 0x8067FC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FC90u)) return;
    // 8067FC90: bl      0x805039F8
    {
            ctx->lr = 0x8067FC94u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FC94:
    ctx->pc = 0x8067FC94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC94: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FC98:
    ctx->pc = 0x8067FC98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FC98: b       0x8067FCC0
    {
            goto label_8067FCC0;
    }

label_8067FC9C:
    ctx->pc = 0x8067FC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FC9C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8067FCA0:
    ctx->pc = 0x8067FCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCA0u)) return;
    // 8067FCA0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8067FCA4:
    ctx->pc = 0x8067FCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCA4u)) return;
    // 8067FCA4: bl      0x80503660
    {
            ctx->lr = 0x8067FCA8u;
            ctx->pc = 0x80503660u;
            return;
    }

label_8067FCA8:
    ctx->pc = 0x8067FCA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FCA8: cmpwi   r3, 0
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

label_8067FCAC:
    ctx->pc = 0x8067FCACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCACu)) return;
    // 8067FCAC: bc    12, 2, 0x8067FCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FCC0;
        }
    }

label_8067FCB0:
    ctx->pc = 0x8067FCB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FCB0: bl      0x80503B3C
    {
            ctx->lr = 0x8067FCB4u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_8067FCB4:
    ctx->pc = 0x8067FCB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FCB4: b       0x8067FCBC
    {
            goto label_8067FCBC;
    }

label_8067FCB8:
    ctx->pc = 0x8067FCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FCB8: b       0x8067FCC0
    {
            goto label_8067FCC0;
    }

label_8067FCBC:
    ctx->pc = 0x8067FCBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FCBC: bl      0x80503C34
    {
            ctx->lr = 0x8067FCC0u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8067FCC0:
    ctx->pc = 0x8067FCC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FCC0: lwz     r0, 20(r1)
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
label_8067FCC4:
    ctx->pc = 0x8067FCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FCC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FCC8:
    ctx->pc = 0x8067FCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCC8u)) return;
    // 8067FCC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067FCCC:
    ctx->pc = 0x8067FCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCCCu)) return;
    // 8067FCCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FCD0:
    ctx->pc = 0x8067FCD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FCD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FCD4:
    ctx->pc = 0x8067FCD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FCD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067FCD4: stwu     r1, -48(r1)
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
label_8067FCD8:
    ctx->pc = 0x8067FCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8067FCD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FCDC:
    ctx->pc = 0x8067FCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCDCu)) return;
    // 8067FCDC: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_8067FCE0:
    ctx->pc = 0x8067FCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCE0u)) return;
    // 8067FCE0: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_8067FCE4:
    ctx->pc = 0x8067FCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067FCE4: stw     r0, 52(r1)
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
label_8067FCE8:
    ctx->pc = 0x8067FCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCE8u)) return;
    // 8067FCE8: addi    r5, r5, -21716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21716);

label_8067FCEC:
    ctx->pc = 0x8067FCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCECu)) return;
    // 8067FCEC: addi    r4, r4, -468
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-468);

label_8067FCF0:
    ctx->pc = 0x8067FCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FCF0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FCF4:
    ctx->pc = 0x8067FCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FCF4: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FCF8:
    ctx->pc = 0x8067FCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCF8u)) return;
    // 8067FCF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8067FCFC:
    ctx->pc = 0x8067FCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FCFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FCFC: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD00:
    ctx->pc = 0x8067FD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD00u)) return;
    // 8067FD00: bl      0x8050E0BC
    {
            ctx->lr = 0x8067FD04u;
            ctx->pc = 0x8050E0BCu;
            return;
    }

label_8067FD04:
    ctx->pc = 0x8067FD04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FD04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FD04: or.   r31, r3, r3
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

label_8067FD08:
    ctx->pc = 0x8067FD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD08u)) return;
    // 8067FD08: bc    12, 2, 0x8067FE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FE14;
        }
    }

label_8067FD0C:
    ctx->pc = 0x8067FD0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FD0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8067FD0C: lwz     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD10:
    ctx->pc = 0x8067FD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD10u)) return;
    // 8067FD10: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FD14:
    ctx->pc = 0x8067FD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8067FD14: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD18:
    ctx->pc = 0x8067FD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8067FD18: lfs     f1, -22352(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FD18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22352);
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
label_8067FD1C:
    ctx->pc = 0x8067FD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8067FD1C: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD20:
    ctx->pc = 0x8067FD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8067FD20: stw     r0, 28(r31)
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
label_8067FD24:
    ctx->pc = 0x8067FD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067FD24: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD28:
    ctx->pc = 0x8067FD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8067FD28: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD2C:
    ctx->pc = 0x8067FD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8067FD2C: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD30:
    ctx->pc = 0x8067FD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8067FD30: lwz     r0, 36(r30)
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
label_8067FD34:
    ctx->pc = 0x8067FD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067FD34: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD38:
    ctx->pc = 0x8067FD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067FD38: stw     r0, 40(r31)
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
label_8067FD3C:
    ctx->pc = 0x8067FD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FD3C: lwz     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD40:
    ctx->pc = 0x8067FD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FD40: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD44:
    ctx->pc = 0x8067FD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FD44: lfs     f0, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x8067FD44u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
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
label_8067FD48:
    ctx->pc = 0x8067FD48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD48u)) return;
    // 8067FD48: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FD48u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_8067FD4C:
    ctx->pc = 0x8067FD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FD4C: stfs     f0, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x8067FD4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD50:
    ctx->pc = 0x8067FD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD50u)) return;
    // 8067FD50: bl      0x8000DD2C
    {
            ctx->lr = 0x8067FD54u;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8067FD54:
    ctx->pc = 0x8067FD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 8067FD54: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8067FD58:
    ctx->pc = 0x8067FD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD58u)) return;
    // 8067FD58: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8067FD5C:
    ctx->pc = 0x8067FD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD5Cu)) return;
    // 8067FD5C: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FD60:
    ctx->pc = 0x8067FD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8067FD60: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD64:
    ctx->pc = 0x8067FD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD64u)) return;
    // 8067FD64: addi    r5, r4, -22336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22336);

label_8067FD68:
    ctx->pc = 0x8067FD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD68u)) return;
    // 8067FD68: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FD6C:
    ctx->pc = 0x8067FD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067FD6C: stw     r0, 8(r1)
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
label_8067FD70:
    ctx->pc = 0x8067FD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD70u)) return;
    // 8067FD70: addi    r4, r3, -22344
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22344);

label_8067FD74:
    ctx->pc = 0x8067FD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8067FD74: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067FD74u)) return;
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
label_8067FD78:
    ctx->pc = 0x8067FD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD78u)) return;
    // 8067FD78: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FD7C:
    ctx->pc = 0x8067FD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067FD7C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8067FD7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD80:
    ctx->pc = 0x8067FD80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067FD80: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FD80u)) return;
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
label_8067FD84:
    ctx->pc = 0x8067FD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD84u)) return;
    // 8067FD84: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8067FD84u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8067FD88:
    ctx->pc = 0x8067FD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FD88: lfs     f0, -22348(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FD88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22348);
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
label_8067FD8C:
    ctx->pc = 0x8067FD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD8Cu)) return;
    // 8067FD8C: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8067FD8Cu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8067FD90:
    ctx->pc = 0x8067FD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD90u)) return;
    // 8067FD90: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8067FD90u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8067FD94:
    ctx->pc = 0x8067FD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FD94: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x8067FD94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FD98:
    ctx->pc = 0x8067FD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FD98u)) return;
    // 8067FD98: bl      0x8000DD2C
    {
            ctx->lr = 0x8067FD9Cu;
            ctx->pc = 0x8000DD2Cu;
            return;
    }

label_8067FD9C:
    ctx->pc = 0x8067FD9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FD9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    // 8067FD9C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_8067FDA0:
    ctx->pc = 0x8067FDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDA0u)) return;
    // 8067FDA0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8067FDA4:
    ctx->pc = 0x8067FDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDA4u)) return;
    // 8067FDA4: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FDA8:
    ctx->pc = 0x8067FDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8067FDA8: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FDAC:
    ctx->pc = 0x8067FDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDACu)) return;
    // 8067FDAC: addi    r5, r4, -22336
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22336);

label_8067FDB0:
    ctx->pc = 0x8067FDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDB0u)) return;
    // 8067FDB0: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FDB4:
    ctx->pc = 0x8067FDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8067FDB4: stw     r0, 16(r1)
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
label_8067FDB8:
    ctx->pc = 0x8067FDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDB8u)) return;
    // 8067FDB8: addi    r4, r3, -22344
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22344);

label_8067FDBC:
    ctx->pc = 0x8067FDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8067FDBC: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067FDBCu)) return;
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
label_8067FDC0:
    ctx->pc = 0x8067FDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDC0u)) return;
    // 8067FDC0: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FDC4:
    ctx->pc = 0x8067FDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8067FDC4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8067FDC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FDC8:
    ctx->pc = 0x8067FDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8067FDC8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FDC8u)) return;
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
label_8067FDCC:
    ctx->pc = 0x8067FDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDCCu)) return;
    // 8067FDCC: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8067FDCCu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_8067FDD0:
    ctx->pc = 0x8067FDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8067FDD0: lfs     f0, -22340(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FDD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22340);
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
label_8067FDD4:
    ctx->pc = 0x8067FDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDD4u)) return;
    // 8067FDD4: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8067FDD4u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8067FDD8:
    ctx->pc = 0x8067FDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDD8u)) return;
    // 8067FDD8: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8067FDD8u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8067FDDC:
    ctx->pc = 0x8067FDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDDCu)) return;
    // 8067FDDC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FDDCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8067FDE0:
    ctx->pc = 0x8067FDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8067FDE0: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8067FDE0u)) return;
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
label_8067FDE4:
    ctx->pc = 0x8067FDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067FDE4: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FDE8:
    ctx->pc = 0x8067FDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDE8u)) return;
    // 8067FDE8: subfic  r0, r0, 8192
    {
        u64 res = (u64)(u32)(s32)(8192) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8067FDEC:
    ctx->pc = 0x8067FDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8067FDEC: stw     r0, 12(r31)
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
label_8067FDF0:
    ctx->pc = 0x8067FDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8067FDF0: lwz     r3, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FDF4:
    ctx->pc = 0x8067FDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067FDF4: lwz     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FDF8:
    ctx->pc = 0x8067FDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067FDF8: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FDFC:
    ctx->pc = 0x8067FDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FDFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FDFC: stw     r0, 52(r31)
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
label_8067FE00:
    ctx->pc = 0x8067FE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FE00: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE04:
    ctx->pc = 0x8067FE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FE04: lwz     r0, 56(r30)
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
label_8067FE08:
    ctx->pc = 0x8067FE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FE08: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE0C:
    ctx->pc = 0x8067FE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FE0C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE10:
    ctx->pc = 0x8067FE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8067FE10: stw     r30, 68(r31)
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
label_8067FE14:
    ctx->pc = 0x8067FE14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067FE14: lwz     r0, 52(r1)
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
label_8067FE18:
    ctx->pc = 0x8067FE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FE18: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE1C:
    ctx->pc = 0x8067FE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FE1C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE20:
    ctx->pc = 0x8067FE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FE20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FE20: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE24:
    ctx->pc = 0x8067FE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE24u)) return;
    // 8067FE24: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8067FE28:
    ctx->pc = 0x8067FE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE28u)) return;
    // 8067FE28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FE2C:
    ctx->pc = 0x8067FE2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067FE2C: stwu     r1, -16(r1)
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
label_8067FE30:
    ctx->pc = 0x8067FE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8067FE30: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE34:
    ctx->pc = 0x8067FE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8067FE34: stw     r0, 20(r1)
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
label_8067FE38:
    ctx->pc = 0x8067FE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8067FE38: lfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FE38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
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
label_8067FE3C:
    ctx->pc = 0x8067FE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067FE3C: lwz     r6, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE40:
    ctx->pc = 0x8067FE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE40u)) return;
    // 8067FE40: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FE40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8067FE44:
    ctx->pc = 0x8067FE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FE44: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8067FE44u)) return;
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
label_8067FE48:
    ctx->pc = 0x8067FE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FE48: lwz     r0, 12(r1)
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
label_8067FE4C:
    ctx->pc = 0x8067FE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FE4C: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE50:
    ctx->pc = 0x8067FE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FE50: lha     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE54:
    ctx->pc = 0x8067FE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE54u)) return;
    // 8067FE54: cmpwi   r0, 8
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

label_8067FE58:
    ctx->pc = 0x8067FE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE58u)) return;
    // 8067FE58: bc    12, 0, 0x8067FE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8067FE6C;
        }
    }

label_8067FE5C:
    ctx->pc = 0x8067FE5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FE5C: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_8067FE60:
    ctx->pc = 0x8067FE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FE60: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FE64:
    ctx->pc = 0x8067FE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE64u)) return;
    // 8067FE64: bl      0x8050E02C
    {
            ctx->lr = 0x8067FE68u;
            ctx->pc = 0x8050E02Cu;
            return;
    }

label_8067FE68:
    ctx->pc = 0x8067FE68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FE68: b       0x8067FF34
    {
            goto label_8067FF34;
    }

label_8067FE6C:
    ctx->pc = 0x8067FE6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 8067FE6C: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FE70:
    ctx->pc = 0x8067FE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FE70: lfs     f3, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FE70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
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
label_8067FE74:
    ctx->pc = 0x8067FE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FE74: lfs     f0, -22328(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FE74u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22328);
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
label_8067FE78:
    ctx->pc = 0x8067FE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE78u)) return;
    // 8067FE78: fcmpo   cr0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FE78u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[3], ctx->fpr[0], true);

label_8067FE7C:
    ctx->pc = 0x8067FE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE7Cu)) return;
    // 8067FE7C: bc    4, 0, 0x8067FE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8067FE90;
        }
    }

label_8067FE80:
    ctx->pc = 0x8067FE80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FE80: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067FE80u)) return;
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
label_8067FE84:
    ctx->pc = 0x8067FE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE84u)) return;
    // 8067FE84: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FE84u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_8067FE88:
    ctx->pc = 0x8067FE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FE88: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FE88u)) return;
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
label_8067FE8C:
    ctx->pc = 0x8067FE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE8Cu)) return;
    // 8067FE8C: b       0x8067FEBC
    {
            goto label_8067FEBC;
    }

label_8067FE90:
    ctx->pc = 0x8067FE90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FE90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    // 8067FE90: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_8067FE94:
    ctx->pc = 0x8067FE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE94u)) return;
    // 8067FE94: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FE98:
    ctx->pc = 0x8067FE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8067FE98: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067FE98u)) return;
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
label_8067FE9C:
    ctx->pc = 0x8067FE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FE9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8067FE9C: lfs     f1, -22324(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067FE9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-22324);
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
label_8067FEA0:
    ctx->pc = 0x8067FEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067FEA0: lfs     f2, -22320(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FEA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22320);
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
label_8067FEA4:
    ctx->pc = 0x8067FEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEA4u)) return;
    // 8067FEA4: fmadds f0, f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x8067FEA4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[3], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8067FEA8:
    ctx->pc = 0x8067FEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FEA8: stfs     f0, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FEA8u)) return;
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
label_8067FEAC:
    ctx->pc = 0x8067FEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FEAC: lfs     f1, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067FEACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
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
label_8067FEB0:
    ctx->pc = 0x8067FEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FEB0: lfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FEB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
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
label_8067FEB4:
    ctx->pc = 0x8067FEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEB4u)) return;
    // 8067FEB4: fnmsubs f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FEB4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, true, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8067FEB8:
    ctx->pc = 0x8067FEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8067FEB8: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FEB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FEBC:
    ctx->pc = 0x8067FEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 30u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 30u : 1u;
    // 8067FEBC: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_8067FEC0:
    ctx->pc = 0x8067FEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEC0u)) return;
    // 8067FEC0: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FEC4:
    ctx->pc = 0x8067FEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8067FEC4: lfs     f0, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067FEC4u)) return;
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
label_8067FEC8:
    ctx->pc = 0x8067FEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8067FEC8: lfs     f1, -22316(r5)
    if (!ppc_fp_available_inline(ctx, 0x8067FEC8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-22316);
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
label_8067FECC:
    ctx->pc = 0x8067FECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8067FECC: lfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FECCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
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
label_8067FED0:
    ctx->pc = 0x8067FED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FED0u)) return;
    // 8067FED0: fsubs   f5, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FED0u)) return;
    ppc_fsubs(ctx, 5, 1, 0);

label_8067FED4:
    ctx->pc = 0x8067FED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8067FED4: lfs     f4, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FED4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
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
label_8067FED8:
    ctx->pc = 0x8067FED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8067FED8: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FED8u)) return;
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
label_8067FEDC:
    ctx->pc = 0x8067FEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8067FEDC: lfs     f0, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067FEDCu)) return;
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
label_8067FEE0:
    ctx->pc = 0x8067FEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEE0u)) return;
    // 8067FEE0: fmuls   f3, f3, f5
    if (!ppc_fp_available_inline(ctx, 0x8067FEE0u)) return;
    ppc_fmuls(ctx, 3, 3, 5);

label_8067FEE4:
    ctx->pc = 0x8067FEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8067FEE4: lfs     f2, -22352(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FEE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22352);
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
label_8067FEE8:
    ctx->pc = 0x8067FEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEE8u)) return;
    // 8067FEE8: fmuls   f4, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x8067FEE8u)) return;
    ppc_fmuls(ctx, 4, 4, 5);

label_8067FEEC:
    ctx->pc = 0x8067FEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEECu)) return;
    // 8067FEEC: fmuls   f1, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x8067FEECu)) return;
    ppc_fmuls(ctx, 1, 1, 5);

label_8067FEF0:
    ctx->pc = 0x8067FEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEF0u)) return;
    // 8067FEF0: fadds   f3, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FEF0u)) return;
    ppc_fadds(ctx, 3, 3, 0);

label_8067FEF4:
    ctx->pc = 0x8067FEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8067FEF4: stfs     f4, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FEF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FEF8:
    ctx->pc = 0x8067FEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8067FEF8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FEF8u)) return;
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
label_8067FEFC:
    ctx->pc = 0x8067FEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8067FEFC: stfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FEFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF00:
    ctx->pc = 0x8067FF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8067FF00: lfs     f6, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF04:
    ctx->pc = 0x8067FF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8067FF04: lfs     f5, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
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
label_8067FF08:
    ctx->pc = 0x8067FF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8067FF08: lfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
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
label_8067FF0C:
    ctx->pc = 0x8067FF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF0Cu)) return;
    // 8067FF0C: fadds   f6, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8067FF0Cu)) return;
    ppc_fadds(ctx, 6, 6, 4);

label_8067FF10:
    ctx->pc = 0x8067FF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF10u)) return;
    // 8067FF10: fadds   f5, f5, f3
    if (!ppc_fp_available_inline(ctx, 0x8067FF10u)) return;
    ppc_fadds(ctx, 5, 5, 3);

label_8067FF14:
    ctx->pc = 0x8067FF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF14u)) return;
    // 8067FF14: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8067FF14u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_8067FF18:
    ctx->pc = 0x8067FF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8067FF18: stfs     f6, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF1C:
    ctx->pc = 0x8067FF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8067FF1C: stfs     f5, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF20:
    ctx->pc = 0x8067FF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FF20: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF24:
    ctx->pc = 0x8067FF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FF24: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x8067FF24u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
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
label_8067FF28:
    ctx->pc = 0x8067FF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FF28: lfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
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
label_8067FF2C:
    ctx->pc = 0x8067FF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF2Cu)) return;
    // 8067FF2C: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FF2Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_8067FF30:
    ctx->pc = 0x8067FF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8067FF30: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FF30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF34:
    ctx->pc = 0x8067FF34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FF34: lwz     r0, 20(r1)
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
label_8067FF38:
    ctx->pc = 0x8067FF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FF38: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF3C:
    ctx->pc = 0x8067FF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF3Cu)) return;
    // 8067FF3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8067FF40:
    ctx->pc = 0x8067FF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF40u)) return;
    // 8067FF40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8067FF44:
    ctx->pc = 0x8067FF44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FF44: stwu     r1, -16(r1)
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
label_8067FF48:
    ctx->pc = 0x8067FF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FF48: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF4C:
    ctx->pc = 0x8067FF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF4Cu)) return;
    // 8067FF4C: cmplwi  r3, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8067FF50:
    ctx->pc = 0x8067FF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FF50: stw     r0, 20(r1)
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
label_8067FF54:
    ctx->pc = 0x8067FF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF54u)) return;
    // 8067FF54: bc    12, 1, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_8067FF58:
    ctx->pc = 0x8067FF58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8067FF58: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8067FF5C:
    ctx->pc = 0x8067FF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF5Cu)) return;
    // 8067FF5C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8067FF60:
    ctx->pc = 0x8067FF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF60u)) return;
    // 8067FF60: addi    r3, r4, -21676
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-21676);

label_8067FF64:
    ctx->pc = 0x8067FF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FF64: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF68:
    ctx->pc = 0x8067FF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8067FF68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8067FF68: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8067FF6C:
    ctx->pc = 0x8067FF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF6Cu)) return;
    // 8067FF6C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8067FF70:
    ctx->pc = 0x8067FF70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FF70: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FF74:
    ctx->pc = 0x8067FF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF74u)) return;
    // 8067FF74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FF78:
    ctx->pc = 0x8067FF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF78u)) return;
    // 8067FF78: bl      0x80503804
    {
            ctx->lr = 0x8067FF7Cu;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FF7C:
    ctx->pc = 0x8067FF7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FF7C: cmpwi   r3, 0
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

label_8067FF80:
    ctx->pc = 0x8067FF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF80u)) return;
    // 8067FF80: bc    12, 2, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_8067FF84:
    ctx->pc = 0x8067FF84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FF84: li      r3, 209
    ctx->gpr[3] = (u32)(s32)(209);

label_8067FF88:
    ctx->pc = 0x8067FF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF88u)) return;
    // 8067FF88: bl      0x80503880
    {
            ctx->lr = 0x8067FF8Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8067FF8C:
    ctx->pc = 0x8067FF8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FF8C: li      r3, 84
    ctx->gpr[3] = (u32)(s32)(84);

label_8067FF90:
    ctx->pc = 0x8067FF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF90u)) return;
    // 8067FF90: bl      0x805039F8
    {
            ctx->lr = 0x8067FF94u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FF94:
    ctx->pc = 0x8067FF94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FF94: b       0x80680088
    {
            goto label_80680088;
    }

label_8067FF98:
    ctx->pc = 0x8067FF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8067FF98: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8067FF9C:
    ctx->pc = 0x8067FF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FF9Cu)) return;
    // 8067FF9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8067FFA0:
    ctx->pc = 0x8067FFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFA0u)) return;
    // 8067FFA0: bl      0x80503804
    {
            ctx->lr = 0x8067FFA4u;
            ctx->pc = 0x80503804u;
            return;
    }

label_8067FFA4:
    ctx->pc = 0x8067FFA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FFA4: cmpwi   r3, 0
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

label_8067FFA8:
    ctx->pc = 0x8067FFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFA8u)) return;
    // 8067FFA8: bc    12, 2, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_8067FFAC:
    ctx->pc = 0x8067FFACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FFAC: li      r3, 209
    ctx->gpr[3] = (u32)(s32)(209);

label_8067FFB0:
    ctx->pc = 0x8067FFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFB0u)) return;
    // 8067FFB0: bl      0x8050386C
    {
            ctx->lr = 0x8067FFB4u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067FFB4:
    ctx->pc = 0x8067FFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FFB4: li      r3, 83
    ctx->gpr[3] = (u32)(s32)(83);

label_8067FFB8:
    ctx->pc = 0x8067FFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFB8u)) return;
    // 8067FFB8: bl      0x8050386C
    {
            ctx->lr = 0x8067FFBCu;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8067FFBC:
    ctx->pc = 0x8067FFBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FFBC: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8067FFC0:
    ctx->pc = 0x8067FFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFC0u)) return;
    // 8067FFC0: bl      0x805039F8
    {
            ctx->lr = 0x8067FFC4u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FFC4:
    ctx->pc = 0x8067FFC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FFC4: b       0x80680088
    {
            goto label_80680088;
    }

label_8067FFC8:
    ctx->pc = 0x8067FFC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FFC8: bl      0x80503D0C
    {
            ctx->lr = 0x8067FFCCu;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_8067FFCC:
    ctx->pc = 0x8067FFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FFCC: b       0x80680088
    {
            goto label_80680088;
    }

label_8067FFD0:
    ctx->pc = 0x8067FFD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8067FFD0: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_8067FFD4:
    ctx->pc = 0x8067FFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFD4u)) return;
    // 8067FFD4: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8067FFD8:
    ctx->pc = 0x8067FFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFD8u)) return;
    // 8067FFD8: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_8067FFDC:
    ctx->pc = 0x8067FFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8067FFDC: lfs     f0, -22312(r3)
    if (!ppc_fp_available_inline(ctx, 0x8067FFDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22312);
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
label_8067FFE0:
    ctx->pc = 0x8067FFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8067FFE0: lwz     r4, 0(r4)
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
label_8067FFE4:
    ctx->pc = 0x8067FFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8067FFE4: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x8067FFE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_8067FFE8:
    ctx->pc = 0x8067FFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFE8u)) return;
    // 8067FFE8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8067FFE8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8067FFEC:
    ctx->pc = 0x8067FFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFECu)) return;
    // 8067FFEC: bc    12, 0, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_8067FFF0:
    ctx->pc = 0x8067FFF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FFF0: li      r3, 273
    ctx->gpr[3] = (u32)(s32)(273);

label_8067FFF4:
    ctx->pc = 0x8067FFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8067FFF4u)) return;
    // 8067FFF4: bl      0x805039F8
    {
            ctx->lr = 0x8067FFF8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8067FFF8:
    ctx->pc = 0x8067FFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8067FFF8: b       0x80680088
    {
            goto label_80680088;
    }

label_8067FFFC:
    ctx->pc = 0x8067FFFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8067FFFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8067FFFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80680000:
    ctx->pc = 0x80680000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680000u)) return;
    // 80680000: bl      0x8046EECC
    {
            ctx->lr = 0x80680004u;
            ctx->pc = 0x8046EECCu;
            return;
    }

label_80680004:
    ctx->pc = 0x80680004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680004: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680008:
    ctx->pc = 0x80680008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680008u)) return;
    // 80680008: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8068000C:
    ctx->pc = 0x8068000Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068000Cu)) return;
    // 8068000C: bl      0x805036C4
    {
            ctx->lr = 0x80680010u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_80680010:
    ctx->pc = 0x80680010u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680010u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680010: b       0x80680088
    {
            goto label_80680088;
    }

label_80680014:
    ctx->pc = 0x80680014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680014: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680018:
    ctx->pc = 0x80680018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680018u)) return;
    // 80680018: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8068001C:
    ctx->pc = 0x8068001Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068001Cu)) return;
    // 8068001C: bl      0x80503804
    {
            ctx->lr = 0x80680020u;
            ctx->pc = 0x80503804u;
            return;
    }

label_80680020:
    ctx->pc = 0x80680020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680020: cmpwi   r3, 0
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

label_80680024:
    ctx->pc = 0x80680024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680024u)) return;
    // 80680024: bc    12, 2, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_80680028:
    ctx->pc = 0x80680028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680028: li      r3, 274
    ctx->gpr[3] = (u32)(s32)(274);

label_8068002C:
    ctx->pc = 0x8068002Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068002Cu)) return;
    // 8068002C: bl      0x805039F8
    {
            ctx->lr = 0x80680030u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680030:
    ctx->pc = 0x80680030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680030: b       0x80680088
    {
            goto label_80680088;
    }

label_80680034:
    ctx->pc = 0x80680034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680034: bl      0x80503D0C
    {
            ctx->lr = 0x80680038u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_80680038:
    ctx->pc = 0x80680038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680038: b       0x80680088
    {
            goto label_80680088;
    }

label_8068003C:
    ctx->pc = 0x8068003Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068003Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8068003C: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_80680040:
    ctx->pc = 0x80680040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680040u)) return;
    // 80680040: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_80680044:
    ctx->pc = 0x80680044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680044u)) return;
    // 80680044: addi    r4, r3, -22308
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22308);

label_80680048:
    ctx->pc = 0x80680048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680048: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80680048u)) return;
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
label_8068004C:
    ctx->pc = 0x8068004Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068004Cu)) return;
    // 8068004C: addi    r3, r5, -21688
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-21688);

label_80680050:
    ctx->pc = 0x80680050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680050u)) return;
    // 80680050: bl      0x804C9324
    {
            ctx->lr = 0x80680054u;
            ctx->pc = 0x804C9324u;
            return;
    }

label_80680054:
    ctx->pc = 0x80680054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680054: cmpwi   r3, 1
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

label_80680058:
    ctx->pc = 0x80680058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680058u)) return;
    // 80680058: bc    4, 2, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_8068005C:
    ctx->pc = 0x8068005Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068005Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8068005C: li      r3, 275
    ctx->gpr[3] = (u32)(s32)(275);

label_80680060:
    ctx->pc = 0x80680060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680060u)) return;
    // 80680060: bl      0x805039F8
    {
            ctx->lr = 0x80680064u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680064:
    ctx->pc = 0x80680064u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680064u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680064: b       0x80680088
    {
            goto label_80680088;
    }

label_80680068:
    ctx->pc = 0x80680068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680068: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8068006C:
    ctx->pc = 0x8068006Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068006Cu)) return;
    // 8068006C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80680070:
    ctx->pc = 0x80680070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680070u)) return;
    // 80680070: bl      0x80503660
    {
            ctx->lr = 0x80680074u;
            ctx->pc = 0x80503660u;
            return;
    }

label_80680074:
    ctx->pc = 0x80680074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680074: cmpwi   r3, 0
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

label_80680078:
    ctx->pc = 0x80680078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680078u)) return;
    // 80680078: bc    12, 2, 0x8068008C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8068008C;
        }
    }

label_8068007C:
    ctx->pc = 0x8068007Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068007Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068007C: bl      0x80503B3C
    {
            ctx->lr = 0x80680080u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_80680080:
    ctx->pc = 0x80680080u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680080u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680080: b       0x80680088
    {
            goto label_80680088;
    }

label_80680084:
    ctx->pc = 0x80680084u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680084u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680084: b       0x8068008C
    {
            goto label_8068008C;
    }

label_80680088:
    ctx->pc = 0x80680088u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680088u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680088: bl      0x80503C34
    {
            ctx->lr = 0x8068008Cu;
            ctx->pc = 0x80503C34u;
            return;
    }

label_8068008C:
    ctx->pc = 0x8068008Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068008Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8068008C: lwz     r0, 20(r1)
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
label_80680090:
    ctx->pc = 0x80680090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80680090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680090: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680094:
    ctx->pc = 0x80680094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680094u)) return;
    // 80680094: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80680098:
    ctx->pc = 0x80680098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680098u)) return;
    // 80680098: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_8068009C:
    ctx->pc = 0x8068009Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068009Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068009C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_806800A0:
    ctx->pc = 0x806800A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806800A0: stwu     r1, -16(r1)
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
label_806800A4:
    ctx->pc = 0x806800A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806800A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806800A8:
    ctx->pc = 0x806800A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800A8u)) return;
    // 806800A8: cmplwi  r3, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_806800AC:
    ctx->pc = 0x806800ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806800AC: stw     r0, 20(r1)
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
label_806800B0:
    ctx->pc = 0x806800B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800B0u)) return;
    // 806800B0: bc    12, 1, 0x806801E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806801E4;
        }
    }

label_806800B4:
    ctx->pc = 0x806800B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 806800B4: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_806800B8:
    ctx->pc = 0x806800B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800B8u)) return;
    // 806800B8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_806800BC:
    ctx->pc = 0x806800BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800BCu)) return;
    // 806800BC: addi    r3, r4, -21632
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-21632);

label_806800C0:
    ctx->pc = 0x806800C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806800C0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806800C4:
    ctx->pc = 0x806800C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806800C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806800C4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806800C8:
    ctx->pc = 0x806800C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800C8u)) return;
    // 806800C8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_806800CC:
    ctx->pc = 0x806800CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806800CC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_806800D0:
    ctx->pc = 0x806800D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800D0u)) return;
    // 806800D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_806800D4:
    ctx->pc = 0x806800D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800D4u)) return;
    // 806800D4: bl      0x80503804
    {
            ctx->lr = 0x806800D8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_806800D8:
    ctx->pc = 0x806800D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806800D8: cmpwi   r3, 0
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

label_806800DC:
    ctx->pc = 0x806800DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800DCu)) return;
    // 806800DC: bc    12, 2, 0x806801E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806801E4;
        }
    }

label_806800E0:
    ctx->pc = 0x806800E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806800E0: li      r3, 276
    ctx->gpr[3] = (u32)(s32)(276);

label_806800E4:
    ctx->pc = 0x806800E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800E4u)) return;
    // 806800E4: bl      0x805039F8
    {
            ctx->lr = 0x806800E8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_806800E8:
    ctx->pc = 0x806800E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806800E8: li      r3, 207
    ctx->gpr[3] = (u32)(s32)(207);

label_806800EC:
    ctx->pc = 0x806800ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800ECu)) return;
    // 806800EC: bl      0x80503880
    {
            ctx->lr = 0x806800F0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806800F0:
    ctx->pc = 0x806800F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806800F0: li      r3, 208
    ctx->gpr[3] = (u32)(s32)(208);

label_806800F4:
    ctx->pc = 0x806800F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806800F4u)) return;
    // 806800F4: bl      0x80503880
    {
            ctx->lr = 0x806800F8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806800F8:
    ctx->pc = 0x806800F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806800F8: b       0x806801E0
    {
            goto label_806801E0;
    }

label_806800FC:
    ctx->pc = 0x806800FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806800FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806800FC: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680100:
    ctx->pc = 0x80680100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680100u)) return;
    // 80680100: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80680104:
    ctx->pc = 0x80680104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680104u)) return;
    // 80680104: bl      0x80503804
    {
            ctx->lr = 0x80680108u;
            ctx->pc = 0x80503804u;
            return;
    }

label_80680108:
    ctx->pc = 0x80680108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680108: cmpwi   r3, 0
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

label_8068010C:
    ctx->pc = 0x8068010Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068010Cu)) return;
    // 8068010C: bc    12, 2, 0x806801E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806801E4;
        }
    }

label_80680110:
    ctx->pc = 0x80680110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680110: bl      0x80503D0C
    {
            ctx->lr = 0x80680114u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_80680114:
    ctx->pc = 0x80680114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680114: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680118:
    ctx->pc = 0x80680118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680118: li      r3, 75
    ctx->gpr[3] = (u32)(s32)(75);

label_8068011C:
    ctx->pc = 0x8068011Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068011Cu)) return;
    // 8068011C: bl      0x805039F8
    {
            ctx->lr = 0x80680120u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680120:
    ctx->pc = 0x80680120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680120: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680124:
    ctx->pc = 0x80680124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680124: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80680128:
    ctx->pc = 0x80680128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680128u)) return;
    // 80680128: bl      0x80503434
    {
            ctx->lr = 0x8068012Cu;
            ctx->pc = 0x80503434u;
            return;
    }

label_8068012C:
    ctx->pc = 0x8068012Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068012Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068012C: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680130:
    ctx->pc = 0x80680130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680130: li      r3, 223
    ctx->gpr[3] = (u32)(s32)(223);

label_80680134:
    ctx->pc = 0x80680134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680134u)) return;
    // 80680134: bl      0x80503850
    {
            ctx->lr = 0x80680138u;
            ctx->pc = 0x80503850u;
            return;
    }

label_80680138:
    ctx->pc = 0x80680138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680138: cmpwi   r3, 0
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

label_8068013C:
    ctx->pc = 0x8068013Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068013Cu)) return;
    // 8068013C: bc    12, 2, 0x806801E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_806801E4;
        }
    }

label_80680140:
    ctx->pc = 0x80680140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680140: bl      0x80503D0C
    {
            ctx->lr = 0x80680144u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_80680144:
    ctx->pc = 0x80680144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680144: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680148:
    ctx->pc = 0x80680148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680148: li      r3, 76
    ctx->gpr[3] = (u32)(s32)(76);

label_8068014C:
    ctx->pc = 0x8068014Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068014Cu)) return;
    // 8068014C: bl      0x805039F8
    {
            ctx->lr = 0x80680150u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680150:
    ctx->pc = 0x80680150u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680150u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680150: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680154:
    ctx->pc = 0x80680154u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680154u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680154: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80680158:
    ctx->pc = 0x80680158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680158u)) return;
    // 80680158: bl      0x804C7340
    {
            ctx->lr = 0x8068015Cu;
            ctx->pc = 0x804C7340u;
            return;
    }

label_8068015C:
    ctx->pc = 0x8068015Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068015Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8068015C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80680160:
    ctx->pc = 0x80680160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680160u)) return;
    // 80680160: bl      0x804C8D1C
    {
            ctx->lr = 0x80680164u;
            ctx->pc = 0x804C8D1Cu;
            return;
    }

label_80680164:
    ctx->pc = 0x80680164u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680164u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680164: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680168:
    ctx->pc = 0x80680168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680168: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_8068016C:
    ctx->pc = 0x8068016Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068016Cu)) return;
    // 8068016C: bl      0x804C7340
    {
            ctx->lr = 0x80680170u;
            ctx->pc = 0x804C7340u;
            return;
    }

label_80680170:
    ctx->pc = 0x80680170u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680170u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680170: b       0x806801E0
    {
            goto label_806801E0;
    }

label_80680174:
    ctx->pc = 0x80680174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80680174: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_80680178:
    ctx->pc = 0x80680178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680178u)) return;
    // 80680178: lis     r3, -28629
    ctx->gpr[3] = ((u32)(s32)(-28629) << 16);

label_8068017C:
    ctx->pc = 0x8068017Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068017Cu)) return;
    // 8068017C: addi    r4, r4, -6352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6352);

label_80680180:
    ctx->pc = 0x80680180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680180u)) return;
    // 80680180: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80680184:
    ctx->pc = 0x80680184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80680184: lbz     r6, 73(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(73);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680188:
    ctx->pc = 0x80680188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680188u)) return;
    // 80680188: addi    r4, r3, -4408
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4408);

label_8068018C:
    ctx->pc = 0x8068018Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068018Cu)) return;
    // 8068018C: li      r3, 207
    ctx->gpr[3] = (u32)(s32)(207);

label_80680190:
    ctx->pc = 0x80680190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680190u)) return;
    // 80680190: neg  r5, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[5] = (~a) + 1u;
    }

label_80680194:
    ctx->pc = 0x80680194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680194u)) return;
    // 80680194: or   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[6];
    }

label_80680198:
    ctx->pc = 0x80680198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680198u)) return;
    // 80680198: srawi r5, r5, 31
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

label_8068019C:
    ctx->pc = 0x8068019Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068019Cu)) return;
    // 8068019C: andc   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[5];
    }

label_806801A0:
    ctx->pc = 0x806801A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806801A0: stw     r0, 0(r4)
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
label_806801A4:
    ctx->pc = 0x806801A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801A4u)) return;
    // 806801A4: bl      0x80503880
    {
            ctx->lr = 0x806801A8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806801A8:
    ctx->pc = 0x806801A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806801A8: li      r3, 206
    ctx->gpr[3] = (u32)(s32)(206);

label_806801AC:
    ctx->pc = 0x806801ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801ACu)) return;
    // 806801AC: bl      0x80503880
    {
            ctx->lr = 0x806801B0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806801B0:
    ctx->pc = 0x806801B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806801B0: li      r3, 221
    ctx->gpr[3] = (u32)(s32)(221);

label_806801B4:
    ctx->pc = 0x806801B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801B4u)) return;
    // 806801B4: bl      0x80503880
    {
            ctx->lr = 0x806801B8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806801B8:
    ctx->pc = 0x806801B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806801B8: li      r3, 222
    ctx->gpr[3] = (u32)(s32)(222);

label_806801BC:
    ctx->pc = 0x806801BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801BCu)) return;
    // 806801BC: bl      0x80503880
    {
            ctx->lr = 0x806801C0u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806801C0:
    ctx->pc = 0x806801C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806801C0: li      r3, 83
    ctx->gpr[3] = (u32)(s32)(83);

label_806801C4:
    ctx->pc = 0x806801C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801C4u)) return;
    // 806801C4: bl      0x80503880
    {
            ctx->lr = 0x806801C8u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806801C8:
    ctx->pc = 0x806801C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806801C8: li      r3, 26
    ctx->gpr[3] = (u32)(s32)(26);

label_806801CC:
    ctx->pc = 0x806801CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801CCu)) return;
    // 806801CC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_806801D0:
    ctx->pc = 0x806801D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801D0u)) return;
    // 806801D0: bl      0x805036C4
    {
            ctx->lr = 0x806801D4u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_806801D4:
    ctx->pc = 0x806801D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806801D4: bl      0x80503B3C
    {
            ctx->lr = 0x806801D8u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_806801D8:
    ctx->pc = 0x806801D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806801D8: b       0x806801E0
    {
            goto label_806801E0;
    }

label_806801DC:
    ctx->pc = 0x806801DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806801DC: b       0x806801E4
    {
            goto label_806801E4;
    }

label_806801E0:
    ctx->pc = 0x806801E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806801E0: bl      0x80503C34
    {
            ctx->lr = 0x806801E4u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_806801E4:
    ctx->pc = 0x806801E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806801E4: lwz     r0, 20(r1)
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
label_806801E8:
    ctx->pc = 0x806801E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x806801E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806801E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806801EC:
    ctx->pc = 0x806801ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801ECu)) return;
    // 806801EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_806801F0:
    ctx->pc = 0x806801F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801F0u)) return;
    // 806801F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_806801F4:
    ctx->pc = 0x806801F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806801F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_806801F8:
    ctx->pc = 0x806801F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806801F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806801F8: stwu     r1, -16(r1)
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
label_806801FC:
    ctx->pc = 0x806801FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806801FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806801FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680200:
    ctx->pc = 0x80680200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680200u)) return;
    // 80680200: cmplwi  r3, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80680204:
    ctx->pc = 0x80680204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80680204: stw     r0, 20(r1)
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
label_80680208:
    ctx->pc = 0x80680208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680208u)) return;
    // 80680208: bc    12, 1, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_8068020C:
    ctx->pc = 0x8068020Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068020Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 8068020C: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_80680210:
    ctx->pc = 0x80680210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680210u)) return;
    // 80680210: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80680214:
    ctx->pc = 0x80680214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680214u)) return;
    // 80680214: addi    r3, r4, -21572
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-21572);

label_80680218:
    ctx->pc = 0x80680218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80680218: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8068021C:
    ctx->pc = 0x8068021Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8068021Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8068021C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680220:
    ctx->pc = 0x80680220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680220u)) return;
    // 80680220: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80680224:
    ctx->pc = 0x80680224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680224: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680228:
    ctx->pc = 0x80680228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680228u)) return;
    // 80680228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8068022C:
    ctx->pc = 0x8068022Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068022Cu)) return;
    // 8068022C: bl      0x80503804
    {
            ctx->lr = 0x80680230u;
            ctx->pc = 0x80503804u;
            return;
    }

label_80680230:
    ctx->pc = 0x80680230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680230: cmpwi   r3, 0
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

label_80680234:
    ctx->pc = 0x80680234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680234u)) return;
    // 80680234: bc    12, 2, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_80680238:
    ctx->pc = 0x80680238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680238: li      r3, 146
    ctx->gpr[3] = (u32)(s32)(146);

label_8068023C:
    ctx->pc = 0x8068023Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068023Cu)) return;
    // 8068023C: bl      0x80503880
    {
            ctx->lr = 0x80680240u;
            ctx->pc = 0x80503880u;
            return;
    }

label_80680240:
    ctx->pc = 0x80680240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680240: li      r3, 41
    ctx->gpr[3] = (u32)(s32)(41);

label_80680244:
    ctx->pc = 0x80680244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680244u)) return;
    // 80680244: bl      0x805039F8
    {
            ctx->lr = 0x80680248u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680248:
    ctx->pc = 0x80680248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680248: b       0x8068033C
    {
            goto label_8068033C;
    }

label_8068024C:
    ctx->pc = 0x8068024Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068024Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8068024C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680250:
    ctx->pc = 0x80680250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680250u)) return;
    // 80680250: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80680254:
    ctx->pc = 0x80680254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680254u)) return;
    // 80680254: bl      0x80503804
    {
            ctx->lr = 0x80680258u;
            ctx->pc = 0x80503804u;
            return;
    }

label_80680258:
    ctx->pc = 0x80680258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680258: cmpwi   r3, 0
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

label_8068025C:
    ctx->pc = 0x8068025Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068025Cu)) return;
    // 8068025C: bc    12, 2, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_80680260:
    ctx->pc = 0x80680260u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680260: li      r3, 146
    ctx->gpr[3] = (u32)(s32)(146);

label_80680264:
    ctx->pc = 0x80680264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680264u)) return;
    // 80680264: bl      0x8050386C
    {
            ctx->lr = 0x80680268u;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_80680268:
    ctx->pc = 0x80680268u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680268u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680268: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_8068026C:
    ctx->pc = 0x8068026Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068026Cu)) return;
    // 8068026C: bl      0x805039F8
    {
            ctx->lr = 0x80680270u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680270:
    ctx->pc = 0x80680270u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680270u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680270: b       0x8068033C
    {
            goto label_8068033C;
    }

label_80680274:
    ctx->pc = 0x80680274u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680274u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680274: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_80680278:
    ctx->pc = 0x80680278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680278u)) return;
    // 80680278: bl      0x8050386C
    {
            ctx->lr = 0x8068027Cu;
            ctx->pc = 0x8050386Cu;
            return;
    }

label_8068027C:
    ctx->pc = 0x8068027Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068027Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068027C: bl      0x80503D0C
    {
            ctx->lr = 0x80680280u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_80680280:
    ctx->pc = 0x80680280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680280: b       0x8068033C
    {
            goto label_8068033C;
    }

label_80680284:
    ctx->pc = 0x80680284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80680284: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_80680288:
    ctx->pc = 0x80680288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680288u)) return;
    // 80680288: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8068028C:
    ctx->pc = 0x8068028Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068028Cu)) return;
    // 8068028C: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_80680290:
    ctx->pc = 0x80680290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80680290: lfs     f0, -22304(r3)
    if (!ppc_fp_available_inline(ctx, 0x80680290u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22304);
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
label_80680294:
    ctx->pc = 0x80680294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80680294: lwz     r4, 0(r4)
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
label_80680298:
    ctx->pc = 0x80680298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680298: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80680298u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_8068029C:
    ctx->pc = 0x8068029Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068029Cu)) return;
    // 8068029C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8068029Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_806802A0:
    ctx->pc = 0x806802A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802A0u)) return;
    // 806802A0: bc    12, 0, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_806802A4:
    ctx->pc = 0x806802A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806802A4: li      r3, 257
    ctx->gpr[3] = (u32)(s32)(257);

label_806802A8:
    ctx->pc = 0x806802A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802A8u)) return;
    // 806802A8: bl      0x805039F8
    {
            ctx->lr = 0x806802ACu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_806802AC:
    ctx->pc = 0x806802ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806802AC: b       0x8068033C
    {
            goto label_8068033C;
    }

label_806802B0:
    ctx->pc = 0x806802B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806802B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_806802B4:
    ctx->pc = 0x806802B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802B4u)) return;
    // 806802B4: bl      0x8046EECC
    {
            ctx->lr = 0x806802B8u;
            ctx->pc = 0x8046EECCu;
            return;
    }

label_806802B8:
    ctx->pc = 0x806802B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806802B8: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_806802BC:
    ctx->pc = 0x806802BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802BCu)) return;
    // 806802BC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_806802C0:
    ctx->pc = 0x806802C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802C0u)) return;
    // 806802C0: bl      0x805036C4
    {
            ctx->lr = 0x806802C4u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_806802C4:
    ctx->pc = 0x806802C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806802C4: b       0x8068033C
    {
            goto label_8068033C;
    }

label_806802C8:
    ctx->pc = 0x806802C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806802C8: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_806802CC:
    ctx->pc = 0x806802CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802CCu)) return;
    // 806802CC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_806802D0:
    ctx->pc = 0x806802D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802D0u)) return;
    // 806802D0: bl      0x80503804
    {
            ctx->lr = 0x806802D4u;
            ctx->pc = 0x80503804u;
            return;
    }

label_806802D4:
    ctx->pc = 0x806802D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806802D4: cmpwi   r3, 0
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

label_806802D8:
    ctx->pc = 0x806802D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802D8u)) return;
    // 806802D8: bc    12, 2, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_806802DC:
    ctx->pc = 0x806802DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806802DC: li      r3, 258
    ctx->gpr[3] = (u32)(s32)(258);

label_806802E0:
    ctx->pc = 0x806802E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802E0u)) return;
    // 806802E0: bl      0x805039F8
    {
            ctx->lr = 0x806802E4u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_806802E4:
    ctx->pc = 0x806802E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806802E4: b       0x8068033C
    {
            goto label_8068033C;
    }

label_806802E8:
    ctx->pc = 0x806802E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806802E8: bl      0x80503D0C
    {
            ctx->lr = 0x806802ECu;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_806802EC:
    ctx->pc = 0x806802ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806802EC: b       0x8068033C
    {
            goto label_8068033C;
    }

label_806802F0:
    ctx->pc = 0x806802F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806802F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 806802F0: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_806802F4:
    ctx->pc = 0x806802F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802F4u)) return;
    // 806802F4: lis     r5, -28429
    ctx->gpr[5] = ((u32)(s32)(-28429) << 16);

label_806802F8:
    ctx->pc = 0x806802F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802F8u)) return;
    // 806802F8: addi    r4, r3, -22300
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22300);

label_806802FC:
    ctx->pc = 0x806802FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806802FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806802FC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x806802FCu)) return;
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
label_80680300:
    ctx->pc = 0x80680300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680300u)) return;
    // 80680300: addi    r3, r5, -21584
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-21584);

label_80680304:
    ctx->pc = 0x80680304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680304u)) return;
    // 80680304: bl      0x804C9324
    {
            ctx->lr = 0x80680308u;
            ctx->pc = 0x804C9324u;
            return;
    }

label_80680308:
    ctx->pc = 0x80680308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680308: cmpwi   r3, 1
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

label_8068030C:
    ctx->pc = 0x8068030Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068030Cu)) return;
    // 8068030C: bc    4, 2, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_80680310:
    ctx->pc = 0x80680310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680310: li      r3, 259
    ctx->gpr[3] = (u32)(s32)(259);

label_80680314:
    ctx->pc = 0x80680314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680314u)) return;
    // 80680314: bl      0x805039F8
    {
            ctx->lr = 0x80680318u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680318:
    ctx->pc = 0x80680318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680318: b       0x8068033C
    {
            goto label_8068033C;
    }

label_8068031C:
    ctx->pc = 0x8068031Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068031Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8068031C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80680320:
    ctx->pc = 0x80680320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680320u)) return;
    // 80680320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80680324:
    ctx->pc = 0x80680324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680324u)) return;
    // 80680324: bl      0x80503660
    {
            ctx->lr = 0x80680328u;
            ctx->pc = 0x80503660u;
            return;
    }

label_80680328:
    ctx->pc = 0x80680328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680328: cmpwi   r3, 0
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

label_8068032C:
    ctx->pc = 0x8068032Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068032Cu)) return;
    // 8068032C: bc    12, 2, 0x80680340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680340;
        }
    }

label_80680330:
    ctx->pc = 0x80680330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680330: bl      0x80503B3C
    {
            ctx->lr = 0x80680334u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_80680334:
    ctx->pc = 0x80680334u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680334u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680334: b       0x8068033C
    {
            goto label_8068033C;
    }

label_80680338:
    ctx->pc = 0x80680338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680338: b       0x80680340
    {
            goto label_80680340;
    }

label_8068033C:
    ctx->pc = 0x8068033Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068033Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068033C: bl      0x80503C34
    {
            ctx->lr = 0x80680340u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_80680340:
    ctx->pc = 0x80680340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80680340: lwz     r0, 20(r1)
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
label_80680344:
    ctx->pc = 0x80680344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80680344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680344: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680348:
    ctx->pc = 0x80680348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680348u)) return;
    // 80680348: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8068034C:
    ctx->pc = 0x8068034Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068034Cu)) return;
    // 8068034C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_80680350:
    ctx->pc = 0x80680350u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680350u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_80680354:
    ctx->pc = 0x80680354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80680354: stwu     r1, -16(r1)
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
label_80680358:
    ctx->pc = 0x80680358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80680358: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8068035C:
    ctx->pc = 0x8068035Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068035Cu)) return;
    // 8068035C: cmplwi  r3, 0x000C
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x000Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80680360:
    ctx->pc = 0x80680360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80680360: stw     r0, 20(r1)
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
label_80680364:
    ctx->pc = 0x80680364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680364u)) return;
    // 80680364: bc    12, 1, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_80680368:
    ctx->pc = 0x80680368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80680368: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_8068036C:
    ctx->pc = 0x8068036Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068036Cu)) return;
    // 8068036C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80680370:
    ctx->pc = 0x80680370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680370u)) return;
    // 80680370: addi    r3, r4, -21528
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-21528);

label_80680374:
    ctx->pc = 0x80680374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80680374: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680378:
    ctx->pc = 0x80680378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80680378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80680378: mtctr    r0
    ctx->ctr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8068037C:
    ctx->pc = 0x8068037Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068037Cu)) return;
    // 8068037C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80680380:
    ctx->pc = 0x80680380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680380: li      r3, 260
    ctx->gpr[3] = (u32)(s32)(260);

label_80680384:
    ctx->pc = 0x80680384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680384u)) return;
    // 80680384: bl      0x805039F8
    {
            ctx->lr = 0x80680388u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680388:
    ctx->pc = 0x80680388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680388: li      r3, 145
    ctx->gpr[3] = (u32)(s32)(145);

label_8068038C:
    ctx->pc = 0x8068038Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068038Cu)) return;
    // 8068038C: bl      0x80503880
    {
            ctx->lr = 0x80680390u;
            ctx->pc = 0x80503880u;
            return;
    }

label_80680390:
    ctx->pc = 0x80680390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680390: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_80680394:
    ctx->pc = 0x80680394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680394u)) return;
    // 80680394: bl      0x80503880
    {
            ctx->lr = 0x80680398u;
            ctx->pc = 0x80503880u;
            return;
    }

label_80680398:
    ctx->pc = 0x80680398u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680398u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680398: b       0x8068052C
    {
            goto label_8068052C;
    }

label_8068039C:
    ctx->pc = 0x8068039Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068039Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 8068039C: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_806803A0:
    ctx->pc = 0x806803A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803A0u)) return;
    // 806803A0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_806803A4:
    ctx->pc = 0x806803A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803A4u)) return;
    // 806803A4: bl      0x80503804
    {
            ctx->lr = 0x806803A8u;
            ctx->pc = 0x80503804u;
            return;
    }

label_806803A8:
    ctx->pc = 0x806803A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803A8: cmpwi   r3, 0
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

label_806803AC:
    ctx->pc = 0x806803ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803ACu)) return;
    // 806803AC: bc    12, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_806803B0:
    ctx->pc = 0x806803B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803B0: bl      0x80503D0C
    {
            ctx->lr = 0x806803B4u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_806803B4:
    ctx->pc = 0x806803B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803B4: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806803B8:
    ctx->pc = 0x806803B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803B8: li      r3, 26
    ctx->gpr[3] = (u32)(s32)(26);

label_806803BC:
    ctx->pc = 0x806803BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803BCu)) return;
    // 806803BC: bl      0x805039F8
    {
            ctx->lr = 0x806803C0u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_806803C0:
    ctx->pc = 0x806803C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803C0: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806803C4:
    ctx->pc = 0x806803C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_806803C8:
    ctx->pc = 0x806803C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803C8u)) return;
    // 806803C8: bl      0x80503434
    {
            ctx->lr = 0x806803CCu;
            ctx->pc = 0x80503434u;
            return;
    }

label_806803CC:
    ctx->pc = 0x806803CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803CC: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806803D0:
    ctx->pc = 0x806803D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803D0: li      r3, 164
    ctx->gpr[3] = (u32)(s32)(164);

label_806803D4:
    ctx->pc = 0x806803D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803D4u)) return;
    // 806803D4: bl      0x80503850
    {
            ctx->lr = 0x806803D8u;
            ctx->pc = 0x80503850u;
            return;
    }

label_806803D8:
    ctx->pc = 0x806803D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803D8: cmpwi   r3, 0
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

label_806803DC:
    ctx->pc = 0x806803DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803DCu)) return;
    // 806803DC: bc    12, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_806803E0:
    ctx->pc = 0x806803E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803E0: bl      0x80503D0C
    {
            ctx->lr = 0x806803E4u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_806803E4:
    ctx->pc = 0x806803E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803E4: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806803E8:
    ctx->pc = 0x806803E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803E8: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_806803EC:
    ctx->pc = 0x806803ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803ECu)) return;
    // 806803EC: bl      0x805039F8
    {
            ctx->lr = 0x806803F0u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_806803F0:
    ctx->pc = 0x806803F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803F0: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806803F4:
    ctx->pc = 0x806803F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806803F4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_806803F8:
    ctx->pc = 0x806803F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806803F8u)) return;
    // 806803F8: bl      0x804C7340
    {
            ctx->lr = 0x806803FCu;
            ctx->pc = 0x804C7340u;
            return;
    }

label_806803FC:
    ctx->pc = 0x806803FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806803FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806803FC: b       0x8068052C
    {
            goto label_8068052C;
    }

label_80680400:
    ctx->pc = 0x80680400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680400: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680404:
    ctx->pc = 0x80680404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680404u)) return;
    // 80680404: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80680408:
    ctx->pc = 0x80680408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680408u)) return;
    // 80680408: bl      0x80503804
    {
            ctx->lr = 0x8068040Cu;
            ctx->pc = 0x80503804u;
            return;
    }

label_8068040C:
    ctx->pc = 0x8068040Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068040Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8068040C: cmpwi   r3, 0
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

label_80680410:
    ctx->pc = 0x80680410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680410u)) return;
    // 80680410: bc    12, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_80680414:
    ctx->pc = 0x80680414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80680414: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_80680418:
    ctx->pc = 0x80680418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680418u)) return;
    // 80680418: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_8068041C:
    ctx->pc = 0x8068041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068041Cu)) return;
    // 8068041C: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_80680420:
    ctx->pc = 0x80680420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80680420: lfs     f0, -22296(r3)
    if (!ppc_fp_available_inline(ctx, 0x80680420u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22296);
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
label_80680424:
    ctx->pc = 0x80680424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80680424: lwz     r4, 0(r4)
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
label_80680428:
    ctx->pc = 0x80680428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680428: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80680428u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_8068042C:
    ctx->pc = 0x8068042Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068042Cu)) return;
    // 8068042C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8068042Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80680430:
    ctx->pc = 0x80680430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680430u)) return;
    // 80680430: bc    4, 0, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_80680434:
    ctx->pc = 0x80680434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680434: li      r3, 262
    ctx->gpr[3] = (u32)(s32)(262);

label_80680438:
    ctx->pc = 0x80680438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680438u)) return;
    // 80680438: bl      0x805039F8
    {
            ctx->lr = 0x8068043Cu;
            ctx->pc = 0x805039F8u;
            return;
    }

label_8068043C:
    ctx->pc = 0x8068043Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068043Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068043C: b       0x8068052C
    {
            goto label_8068052C;
    }

label_80680440:
    ctx->pc = 0x80680440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680440: b       0x80680530
    {
            goto label_80680530;
    }

label_80680444:
    ctx->pc = 0x80680444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680444: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_80680448:
    ctx->pc = 0x80680448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680448u)) return;
    // 80680448: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8068044C:
    ctx->pc = 0x8068044Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068044Cu)) return;
    // 8068044C: bl      0x80503804
    {
            ctx->lr = 0x80680450u;
            ctx->pc = 0x80503804u;
            return;
    }

label_80680450:
    ctx->pc = 0x80680450u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680450u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680450: cmpwi   r3, 0
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

label_80680454:
    ctx->pc = 0x80680454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680454u)) return;
    // 80680454: bc    12, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_80680458:
    ctx->pc = 0x80680458u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680458u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680458: li      r3, 145
    ctx->gpr[3] = (u32)(s32)(145);

label_8068045C:
    ctx->pc = 0x8068045Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068045Cu)) return;
    // 8068045C: bl      0x80503850
    {
            ctx->lr = 0x80680460u;
            ctx->pc = 0x80503850u;
            return;
    }

label_80680460:
    ctx->pc = 0x80680460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680460: cmpwi   r3, 0
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

label_80680464:
    ctx->pc = 0x80680464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680464u)) return;
    // 80680464: bc    4, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_80680468:
    ctx->pc = 0x80680468u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680468u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680468: li      r3, 263
    ctx->gpr[3] = (u32)(s32)(263);

label_8068046C:
    ctx->pc = 0x8068046Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068046Cu)) return;
    // 8068046C: bl      0x805039F8
    {
            ctx->lr = 0x80680470u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_80680470:
    ctx->pc = 0x80680470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680470: b       0x8068052C
    {
            goto label_8068052C;
    }

label_80680474:
    ctx->pc = 0x80680474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680474: b       0x80680530
    {
            goto label_80680530;
    }

label_80680478:
    ctx->pc = 0x80680478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680478: li      r3, 143
    ctx->gpr[3] = (u32)(s32)(143);

label_8068047C:
    ctx->pc = 0x8068047Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068047Cu)) return;
    // 8068047C: bl      0x80503880
    {
            ctx->lr = 0x80680480u;
            ctx->pc = 0x80503880u;
            return;
    }

label_80680480:
    ctx->pc = 0x80680480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680480: bl      0x80503D0C
    {
            ctx->lr = 0x80680484u;
            ctx->pc = 0x80503D0Cu;
            return;
    }

label_80680484:
    ctx->pc = 0x80680484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680484: b       0x8068052C
    {
            goto label_8068052C;
    }

label_80680488:
    ctx->pc = 0x80680488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680488: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_8068048C:
    ctx->pc = 0x8068048Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068048Cu)) return;
    // 8068048C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80680490:
    ctx->pc = 0x80680490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680490u)) return;
    // 80680490: bl      0x80503804
    {
            ctx->lr = 0x80680494u;
            ctx->pc = 0x80503804u;
            return;
    }

label_80680494:
    ctx->pc = 0x80680494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680494: cmpwi   r3, 0
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

label_80680498:
    ctx->pc = 0x80680498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680498u)) return;
    // 80680498: bc    12, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_8068049C:
    ctx->pc = 0x8068049Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068049Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8068049C: lis     r4, -28628
    ctx->gpr[4] = ((u32)(s32)(-28628) << 16);

label_806804A0:
    ctx->pc = 0x806804A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804A0u)) return;
    // 806804A0: lis     r3, -28429
    ctx->gpr[3] = ((u32)(s32)(-28429) << 16);

label_806804A4:
    ctx->pc = 0x806804A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804A4u)) return;
    // 806804A4: addi    r4, r4, -14944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-14944);

label_806804A8:
    ctx->pc = 0x806804A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 806804A8: lfs     f0, -22292(r3)
    if (!ppc_fp_available_inline(ctx, 0x806804A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22292);
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
label_806804AC:
    ctx->pc = 0x806804ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 806804AC: lwz     r4, 0(r4)
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
label_806804B0:
    ctx->pc = 0x806804B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806804B0: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x806804B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
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
label_806804B4:
    ctx->pc = 0x806804B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804B4u)) return;
    // 806804B4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x806804B4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_806804B8:
    ctx->pc = 0x806804B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804B8u)) return;
    // 806804B8: bc    4, 0, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_806804BC:
    ctx->pc = 0x806804BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 806804BC: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_806804C0:
    ctx->pc = 0x806804C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804C0u)) return;
    // 806804C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_806804C4:
    ctx->pc = 0x806804C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804C4u)) return;
    // 806804C4: bl      0x805036C4
    {
            ctx->lr = 0x806804C8u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_806804C8:
    ctx->pc = 0x806804C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806804C8: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806804CC:
    ctx->pc = 0x806804CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806804CC: b       0x80680530
    {
            goto label_80680530;
    }

label_806804D0:
    ctx->pc = 0x806804D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806804D0: li      r3, 18
    ctx->gpr[3] = (u32)(s32)(18);

label_806804D4:
    ctx->pc = 0x806804D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804D4u)) return;
    // 806804D4: bl      0x805033D4
    {
            ctx->lr = 0x806804D8u;
            ctx->pc = 0x805033D4u;
            return;
    }

label_806804D8:
    ctx->pc = 0x806804D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806804D8: cmpwi   r3, 0
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

label_806804DC:
    ctx->pc = 0x806804DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804DCu)) return;
    // 806804DC: bc    12, 2, 0x80680530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80680530;
        }
    }

label_806804E0:
    ctx->pc = 0x806804E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806804E0: li      r3, 29
    ctx->gpr[3] = (u32)(s32)(29);

label_806804E4:
    ctx->pc = 0x806804E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804E4u)) return;
    // 806804E4: bl      0x805039F8
    {
            ctx->lr = 0x806804E8u;
            ctx->pc = 0x805039F8u;
            return;
    }

label_806804E8:
    ctx->pc = 0x806804E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806804E8: b       0x8068052C
    {
            goto label_8068052C;
    }

label_806804EC:
    ctx->pc = 0x806804ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806804EC: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_806804F0:
    ctx->pc = 0x806804F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804F0u)) return;
    // 806804F0: bl      0x80503880
    {
            ctx->lr = 0x806804F4u;
            ctx->pc = 0x80503880u;
            return;
    }

label_806804F4:
    ctx->pc = 0x806804F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806804F4: li      r3, 162
    ctx->gpr[3] = (u32)(s32)(162);

label_806804F8:
    ctx->pc = 0x806804F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806804F8u)) return;
    // 806804F8: bl      0x80503880
    {
            ctx->lr = 0x806804FCu;
            ctx->pc = 0x80503880u;
            return;
    }

label_806804FC:
    ctx->pc = 0x806804FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806804FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 806804FC: li      r3, 163
    ctx->gpr[3] = (u32)(s32)(163);

label_80680500:
    ctx->pc = 0x80680500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680500u)) return;
    // 80680500: bl      0x80503880
    {
            ctx->lr = 0x80680504u;
            ctx->pc = 0x80503880u;
            return;
    }

label_80680504:
    ctx->pc = 0x80680504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80680504: li      r3, 146
    ctx->gpr[3] = (u32)(s32)(146);

label_80680508:
    ctx->pc = 0x80680508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680508u)) return;
    // 80680508: bl      0x80503880
    {
            ctx->lr = 0x8068050Cu;
            ctx->pc = 0x80503880u;
            return;
    }

label_8068050C:
    ctx->pc = 0x8068050Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068050Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 8068050C: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_80680510:
    ctx->pc = 0x80680510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680510u)) return;
    // 80680510: bl      0x80503880
    {
            ctx->lr = 0x80680514u;
            ctx->pc = 0x80503880u;
            return;
    }

label_80680514:
    ctx->pc = 0x80680514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80680514: li      r3, 33
    ctx->gpr[3] = (u32)(s32)(33);

label_80680518:
    ctx->pc = 0x80680518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680518u)) return;
    // 80680518: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8068051C:
    ctx->pc = 0x8068051Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068051Cu)) return;
    // 8068051C: bl      0x805036C4
    {
            ctx->lr = 0x80680520u;
            ctx->pc = 0x805036C4u;
            return;
    }

label_80680520:
    ctx->pc = 0x80680520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680520: bl      0x80503B3C
    {
            ctx->lr = 0x80680524u;
            ctx->pc = 0x80503B3Cu;
            return;
    }

label_80680524:
    ctx->pc = 0x80680524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680524: b       0x8068052C
    {
            goto label_8068052C;
    }

label_80680528:
    ctx->pc = 0x80680528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680528: b       0x80680530
    {
            goto label_80680530;
    }

label_8068052C:
    ctx->pc = 0x8068052Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068052Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 8068052C: bl      0x80503C34
    {
            ctx->lr = 0x80680530u;
            ctx->pc = 0x80503C34u;
            return;
    }

label_80680530:
    ctx->pc = 0x80680530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80680530: lwz     r0, 20(r1)
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
label_80680534:
    ctx->pc = 0x80680534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80680534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680534: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680538:
    ctx->pc = 0x80680538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680538u)) return;
    // 80680538: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8068053C:
    ctx->pc = 0x8068053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068053Cu)) return;
    // 8068053C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_80680540:
    ctx->pc = 0x80680540u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680540u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

label_80680544:
    ctx->pc = 0x80680544u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680544u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80680544: stwu     r1, -16(r1)
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
label_80680548:
    ctx->pc = 0x80680548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80680548: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8068054C:
    ctx->pc = 0x8068054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068054Cu)) return;
    // 8068054C: lis     r5, -28634
    ctx->gpr[5] = ((u32)(s32)(-28634) << 16);

label_80680550:
    ctx->pc = 0x80680550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680550u)) return;
    // 80680550: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80680554:
    ctx->pc = 0x80680554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80680554: stw     r0, 20(r1)
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
label_80680558:
    ctx->pc = 0x80680558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80680558: stw     r31, 12(r1)
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
label_8068055C:
    ctx->pc = 0x8068055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068055Cu)) return;
    // 8068055C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80680560:
    ctx->pc = 0x80680560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680560u)) return;
    // 80680560: addi    r3, r4, -5404
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-5404);

label_80680564:
    ctx->pc = 0x80680564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80680564: stw     r30, 8(r1)
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
label_80680568:
    ctx->pc = 0x80680568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80680568: lha     r4, -5402(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5402);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8068056C:
    ctx->pc = 0x8068056Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068056Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8068056C: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680570:
    ctx->pc = 0x80680570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680570u)) return;
    // 80680570: rlwinm r3, r4, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80680574:
    ctx->pc = 0x80680574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680574u)) return;
    // 80680574: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80680578:
    ctx->pc = 0x80680578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680578u)) return;
    // 80680578: rlwinm r3, r0, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_8068057C:
    ctx->pc = 0x8068057Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068057Cu)) return;
    // 8068057C: cmpwi   r3, 29
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(29);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80680580:
    ctx->pc = 0x80680580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680580u)) return;
    // 80680580: rlwinm r30, r0, 0, 24, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80680584:
    ctx->pc = 0x80680584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680584u)) return;
    // 80680584: bc    4, 2, 0x806805AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_806805AC;
        }
    }

label_80680588:
    ctx->pc = 0x80680588u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80680588u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80680588: bl      0x8046EEBC
    {
            ctx->lr = 0x8068058Cu;
            ctx->pc = 0x8046EEBCu;
            return;
    }

label_8068058C:
    ctx->pc = 0x8068058Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8068058Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 8068058C: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_80680590:
    ctx->pc = 0x80680590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680590u)) return;
    // 80680590: extsb r5, r3
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_80680594:
    ctx->pc = 0x80680594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680594u)) return;
    // 80680594: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_80680598:
    ctx->pc = 0x80680598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680598u)) return;
    // 80680598: addi    r3, r4, -20784
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-20784);

label_8068059C:
    ctx->pc = 0x8068059Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068059Cu)) return;
    // 8068059C: rlwinm r4, r5, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_806805A0:
    ctx->pc = 0x806805A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 806805A0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805A4:
    ctx->pc = 0x806805A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805A4u)) return;
    // 806805A4: add   r5, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_806805A8:
    ctx->pc = 0x806805A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805A8u)) return;
    // 806805A8: b       0x806805CC
    {
            goto label_806805CC;
    }

label_806805AC:
    ctx->pc = 0x806805ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806805ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 806805AC: bl      0x8046EEBC
    {
            ctx->lr = 0x806805B0u;
            ctx->pc = 0x8046EEBCu;
            return;
    }

label_806805B0:
    ctx->pc = 0x806805B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806805B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 806805B0: lis     r4, -28429
    ctx->gpr[4] = ((u32)(s32)(-28429) << 16);

label_806805B4:
    ctx->pc = 0x806805B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805B4u)) return;
    // 806805B4: extsb r5, r3
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_806805B8:
    ctx->pc = 0x806805B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805B8u)) return;
    // 806805B8: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_806805BC:
    ctx->pc = 0x806805BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805BCu)) return;
    // 806805BC: addi    r3, r4, -20752
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-20752);

label_806805C0:
    ctx->pc = 0x806805C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805C0u)) return;
    // 806805C0: rlwinm r4, r5, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_806805C4:
    ctx->pc = 0x806805C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 806805C4: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805C8:
    ctx->pc = 0x806805C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805C8u)) return;
    // 806805C8: add   r5, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_806805CC:
    ctx->pc = 0x806805CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x806805CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 806805CC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805D0:
    ctx->pc = 0x806805D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805D0u)) return;
    // 806805D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_806805D4:
    ctx->pc = 0x806805D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 806805D4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805D8:
    ctx->pc = 0x806805D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 806805D8: stw     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805DC:
    ctx->pc = 0x806805DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 806805DC: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805E0:
    ctx->pc = 0x806805E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 806805E0: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805E4:
    ctx->pc = 0x806805E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 806805E4: stw     r0, 40(r31)
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
label_806805E8:
    ctx->pc = 0x806805E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 806805E8: stw     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805EC:
    ctx->pc = 0x806805ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 806805EC: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805F0:
    ctx->pc = 0x806805F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 806805F0: stw     r0, 24(r31)
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
label_806805F4:
    ctx->pc = 0x806805F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 806805F4: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_806805F8:
    ctx->pc = 0x806805F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 806805F8: lwz     r31, 12(r1)
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
label_806805FC:
    ctx->pc = 0x806805FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x806805FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 806805FC: lwz     r30, 8(r1)
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
label_80680600:
    ctx->pc = 0x80680600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80680600: lwz     r0, 20(r1)
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
label_80680604:
    ctx->pc = 0x80680604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80680604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80680604: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80680608:
    ctx->pc = 0x80680608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80680608u)) return;
    // 80680608: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8068060C:
    ctx->pc = 0x8068060Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8068060Cu)) return;
    // 8068060C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8067F040;
        }
    }

    ctx->pc = 0x80680610u;
    return;
return_dispatch_8067F040:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8067F078u: goto label_8067F078;
    case 0x8067F088u: goto label_8067F088;
    case 0x8067F094u: goto label_8067F094;
    case 0x8067F0A8u: goto label_8067F0A8;
    case 0x8067F0B8u: goto label_8067F0B8;
    case 0x8067F0C8u: goto label_8067F0C8;
    case 0x8067F0D8u: goto label_8067F0D8;
    case 0x8067F110u: goto label_8067F110;
    case 0x8067F11Cu: goto label_8067F11C;
    case 0x8067F12Cu: goto label_8067F12C;
    case 0x8067F164u: goto label_8067F164;
    case 0x8067F16Cu: goto label_8067F16C;
    case 0x8067F174u: goto label_8067F174;
    case 0x8067F17Cu: goto label_8067F17C;
    case 0x8067F188u: goto label_8067F188;
    case 0x8067F18Cu: goto label_8067F18C;
    case 0x8067F198u: goto label_8067F198;
    case 0x8067F1E0u: goto label_8067F1E0;
    case 0x8067F1E8u: goto label_8067F1E8;
    case 0x8067F1ECu: goto label_8067F1EC;
    case 0x8067F1FCu: goto label_8067F1FC;
    case 0x8067F20Cu: goto label_8067F20C;
    case 0x8067F218u: goto label_8067F218;
    case 0x8067F228u: goto label_8067F228;
    case 0x8067F238u: goto label_8067F238;
    case 0x8067F244u: goto label_8067F244;
    case 0x8067F254u: goto label_8067F254;
    case 0x8067F260u: goto label_8067F260;
    case 0x8067F26Cu: goto label_8067F26C;
    case 0x8067F27Cu: goto label_8067F27C;
    case 0x8067F290u: goto label_8067F290;
    case 0x8067F29Cu: goto label_8067F29C;
    case 0x8067F2A8u: goto label_8067F2A8;
    case 0x8067F2FCu: goto label_8067F2FC;
    case 0x8067F30Cu: goto label_8067F30C;
    case 0x8067F310u: goto label_8067F310;
    case 0x8067F320u: goto label_8067F320;
    case 0x8067F330u: goto label_8067F330;
    case 0x8067F340u: goto label_8067F340;
    case 0x8067F350u: goto label_8067F350;
    case 0x8067F35Cu: goto label_8067F35C;
    case 0x8067F398u: goto label_8067F398;
    case 0x8067F3A0u: goto label_8067F3A0;
    case 0x8067F3A8u: goto label_8067F3A8;
    case 0x8067F3B0u: goto label_8067F3B0;
    case 0x8067F3B8u: goto label_8067F3B8;
    case 0x8067F3C0u: goto label_8067F3C0;
    case 0x8067F3C8u: goto label_8067F3C8;
    case 0x8067F3CCu: goto label_8067F3CC;
    case 0x8067F3D8u: goto label_8067F3D8;
    case 0x8067F430u: goto label_8067F430;
    case 0x8067F440u: goto label_8067F440;
    case 0x8067F450u: goto label_8067F450;
    case 0x8067F460u: goto label_8067F460;
    case 0x8067F46Cu: goto label_8067F46C;
    case 0x8067F480u: goto label_8067F480;
    case 0x8067F488u: goto label_8067F488;
    case 0x8067F494u: goto label_8067F494;
    case 0x8067F4E8u: goto label_8067F4E8;
    case 0x8067F4F8u: goto label_8067F4F8;
    case 0x8067F4FCu: goto label_8067F4FC;
    case 0x8067F508u: goto label_8067F508;
    case 0x8067F518u: goto label_8067F518;
    case 0x8067F528u: goto label_8067F528;
    case 0x8067F534u: goto label_8067F534;
    case 0x8067F580u: goto label_8067F580;
    case 0x8067F590u: goto label_8067F590;
    case 0x8067F59Cu: goto label_8067F59C;
    case 0x8067F5A8u: goto label_8067F5A8;
    case 0x8067F5B0u: goto label_8067F5B0;
    case 0x8067F5B4u: goto label_8067F5B4;
    case 0x8067F5C4u: goto label_8067F5C4;
    case 0x8067F5F0u: goto label_8067F5F0;
    case 0x8067F604u: goto label_8067F604;
    case 0x8067F618u: goto label_8067F618;
    case 0x8067F624u: goto label_8067F624;
    case 0x8067F63Cu: goto label_8067F63C;
    case 0x8067F65Cu: goto label_8067F65C;
    case 0x8067F66Cu: goto label_8067F66C;
    case 0x8067F6ACu: goto label_8067F6AC;
    case 0x8067F6B4u: goto label_8067F6B4;
    case 0x8067F6BCu: goto label_8067F6BC;
    case 0x8067F6C4u: goto label_8067F6C4;
    case 0x8067F6CCu: goto label_8067F6CC;
    case 0x8067F6D0u: goto label_8067F6D0;
    case 0x8067F6DCu: goto label_8067F6DC;
    case 0x8067F724u: goto label_8067F724;
    case 0x8067F734u: goto label_8067F734;
    case 0x8067F744u: goto label_8067F744;
    case 0x8067F750u: goto label_8067F750;
    case 0x8067F75Cu: goto label_8067F75C;
    case 0x8067F760u: goto label_8067F760;
    case 0x8067F76Cu: goto label_8067F76C;
    case 0x8067F7B8u: goto label_8067F7B8;
    case 0x8067F7C8u: goto label_8067F7C8;
    case 0x8067F7D0u: goto label_8067F7D0;
    case 0x8067F7DCu: goto label_8067F7DC;
    case 0x8067F7E0u: goto label_8067F7E0;
    case 0x8067F7ECu: goto label_8067F7EC;
    case 0x8067F7F8u: goto label_8067F7F8;
    case 0x8067F804u: goto label_8067F804;
    case 0x8067F80Cu: goto label_8067F80C;
    case 0x8067F81Cu: goto label_8067F81C;
    case 0x8067F82Cu: goto label_8067F82C;
    case 0x8067F838u: goto label_8067F838;
    case 0x8067F848u: goto label_8067F848;
    case 0x8067F858u: goto label_8067F858;
    case 0x8067F868u: goto label_8067F868;
    case 0x8067F878u: goto label_8067F878;
    case 0x8067F888u: goto label_8067F888;
    case 0x8067F898u: goto label_8067F898;
    case 0x8067F8A8u: goto label_8067F8A8;
    case 0x8067F8B8u: goto label_8067F8B8;
    case 0x8067F8C4u: goto label_8067F8C4;
    case 0x8067F8D0u: goto label_8067F8D0;
    case 0x8067F8DCu: goto label_8067F8DC;
    case 0x8067F8E8u: goto label_8067F8E8;
    case 0x8067F900u: goto label_8067F900;
    case 0x8067F910u: goto label_8067F910;
    case 0x8067F91Cu: goto label_8067F91C;
    case 0x8067F924u: goto label_8067F924;
    case 0x8067F92Cu: goto label_8067F92C;
    case 0x8067F934u: goto label_8067F934;
    case 0x8067F93Cu: goto label_8067F93C;
    case 0x8067F944u: goto label_8067F944;
    case 0x8067F950u: goto label_8067F950;
    case 0x8067F954u: goto label_8067F954;
    case 0x8067F960u: goto label_8067F960;
    case 0x8067F9B0u: goto label_8067F9B0;
    case 0x8067FA04u: goto label_8067FA04;
    case 0x8067FA0Cu: goto label_8067FA0C;
    case 0x8067FA58u: goto label_8067FA58;
    case 0x8067FA68u: goto label_8067FA68;
    case 0x8067FA74u: goto label_8067FA74;
    case 0x8067FA7Cu: goto label_8067FA7C;
    case 0x8067FA80u: goto label_8067FA80;
    case 0x8067FA8Cu: goto label_8067FA8C;
    case 0x8067FAA4u: goto label_8067FAA4;
    case 0x8067FAB4u: goto label_8067FAB4;
    case 0x8067FAC4u: goto label_8067FAC4;
    case 0x8067FAFCu: goto label_8067FAFC;
    case 0x8067FB08u: goto label_8067FB08;
    case 0x8067FB18u: goto label_8067FB18;
    case 0x8067FB20u: goto label_8067FB20;
    case 0x8067FB2Cu: goto label_8067FB2C;
    case 0x8067FB50u: goto label_8067FB50;
    case 0x8067FB98u: goto label_8067FB98;
    case 0x8067FBA8u: goto label_8067FBA8;
    case 0x8067FBB4u: goto label_8067FBB4;
    case 0x8067FBB8u: goto label_8067FBB8;
    case 0x8067FBC8u: goto label_8067FBC8;
    case 0x8067FBFCu: goto label_8067FBFC;
    case 0x8067FC0Cu: goto label_8067FC0C;
    case 0x8067FC18u: goto label_8067FC18;
    case 0x8067FC28u: goto label_8067FC28;
    case 0x8067FC38u: goto label_8067FC38;
    case 0x8067FC40u: goto label_8067FC40;
    case 0x8067FC48u: goto label_8067FC48;
    case 0x8067FC58u: goto label_8067FC58;
    case 0x8067FC84u: goto label_8067FC84;
    case 0x8067FC94u: goto label_8067FC94;
    case 0x8067FCA8u: goto label_8067FCA8;
    case 0x8067FCB4u: goto label_8067FCB4;
    case 0x8067FCC0u: goto label_8067FCC0;
    case 0x8067FD04u: goto label_8067FD04;
    case 0x8067FD54u: goto label_8067FD54;
    case 0x8067FD9Cu: goto label_8067FD9C;
    case 0x8067FE68u: goto label_8067FE68;
    case 0x8067FF7Cu: goto label_8067FF7C;
    case 0x8067FF8Cu: goto label_8067FF8C;
    case 0x8067FF94u: goto label_8067FF94;
    case 0x8067FFA4u: goto label_8067FFA4;
    case 0x8067FFB4u: goto label_8067FFB4;
    case 0x8067FFBCu: goto label_8067FFBC;
    case 0x8067FFC4u: goto label_8067FFC4;
    case 0x8067FFCCu: goto label_8067FFCC;
    case 0x8067FFF8u: goto label_8067FFF8;
    case 0x80680004u: goto label_80680004;
    case 0x80680010u: goto label_80680010;
    case 0x80680020u: goto label_80680020;
    case 0x80680030u: goto label_80680030;
    case 0x80680038u: goto label_80680038;
    case 0x80680054u: goto label_80680054;
    case 0x80680064u: goto label_80680064;
    case 0x80680074u: goto label_80680074;
    case 0x80680080u: goto label_80680080;
    case 0x8068008Cu: goto label_8068008C;
    case 0x806800D8u: goto label_806800D8;
    case 0x806800E8u: goto label_806800E8;
    case 0x806800F0u: goto label_806800F0;
    case 0x806800F8u: goto label_806800F8;
    case 0x80680108u: goto label_80680108;
    case 0x80680114u: goto label_80680114;
    case 0x80680120u: goto label_80680120;
    case 0x8068012Cu: goto label_8068012C;
    case 0x80680138u: goto label_80680138;
    case 0x80680144u: goto label_80680144;
    case 0x80680150u: goto label_80680150;
    case 0x8068015Cu: goto label_8068015C;
    case 0x80680164u: goto label_80680164;
    case 0x80680170u: goto label_80680170;
    case 0x806801A8u: goto label_806801A8;
    case 0x806801B0u: goto label_806801B0;
    case 0x806801B8u: goto label_806801B8;
    case 0x806801C0u: goto label_806801C0;
    case 0x806801C8u: goto label_806801C8;
    case 0x806801D4u: goto label_806801D4;
    case 0x806801D8u: goto label_806801D8;
    case 0x806801E4u: goto label_806801E4;
    case 0x80680230u: goto label_80680230;
    case 0x80680240u: goto label_80680240;
    case 0x80680248u: goto label_80680248;
    case 0x80680258u: goto label_80680258;
    case 0x80680268u: goto label_80680268;
    case 0x80680270u: goto label_80680270;
    case 0x8068027Cu: goto label_8068027C;
    case 0x80680280u: goto label_80680280;
    case 0x806802ACu: goto label_806802AC;
    case 0x806802B8u: goto label_806802B8;
    case 0x806802C4u: goto label_806802C4;
    case 0x806802D4u: goto label_806802D4;
    case 0x806802E4u: goto label_806802E4;
    case 0x806802ECu: goto label_806802EC;
    case 0x80680308u: goto label_80680308;
    case 0x80680318u: goto label_80680318;
    case 0x80680328u: goto label_80680328;
    case 0x80680334u: goto label_80680334;
    case 0x80680340u: goto label_80680340;
    case 0x80680388u: goto label_80680388;
    case 0x80680390u: goto label_80680390;
    case 0x80680398u: goto label_80680398;
    case 0x806803A8u: goto label_806803A8;
    case 0x806803B4u: goto label_806803B4;
    case 0x806803C0u: goto label_806803C0;
    case 0x806803CCu: goto label_806803CC;
    case 0x806803D8u: goto label_806803D8;
    case 0x806803E4u: goto label_806803E4;
    case 0x806803F0u: goto label_806803F0;
    case 0x806803FCu: goto label_806803FC;
    case 0x8068040Cu: goto label_8068040C;
    case 0x8068043Cu: goto label_8068043C;
    case 0x80680450u: goto label_80680450;
    case 0x80680460u: goto label_80680460;
    case 0x80680470u: goto label_80680470;
    case 0x80680480u: goto label_80680480;
    case 0x80680484u: goto label_80680484;
    case 0x80680494u: goto label_80680494;
    case 0x806804C8u: goto label_806804C8;
    case 0x806804D8u: goto label_806804D8;
    case 0x806804E8u: goto label_806804E8;
    case 0x806804F4u: goto label_806804F4;
    case 0x806804FCu: goto label_806804FC;
    case 0x80680504u: goto label_80680504;
    case 0x8068050Cu: goto label_8068050C;
    case 0x80680514u: goto label_80680514;
    case 0x80680520u: goto label_80680520;
    case 0x80680524u: goto label_80680524;
    case 0x80680530u: goto label_80680530;
    case 0x8068058Cu: goto label_8068058C;
    case 0x806805B0u: goto label_806805B0;
    default: return;
    }
}

