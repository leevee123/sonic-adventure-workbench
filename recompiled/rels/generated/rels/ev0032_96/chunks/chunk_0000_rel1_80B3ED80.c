// DolRecomp output
#include "../generated.h"

void func_80B3ED80(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80B3ED80[1679] = {
        &&label_80B3ED80,
        &&label_80B3ED84,
        &&label_80B3ED88,
        &&label_80B3ED8C,
        &&label_80B3ED90,
        &&label_80B3ED94,
        &&label_80B3ED98,
        &&label_80B3ED9C,
        &&label_80B3EDA0,
        &&label_80B3EDA4,
        &&label_80B3EDA8,
        &&label_80B3EDAC,
        &&label_80B3EDB0,
        &&label_80B3EDB4,
        &&label_80B3EDB8,
        &&label_80B3EDBC,
        &&label_80B3EDC0,
        &&label_80B3EDC4,
        &&label_80B3EDC8,
        &&label_80B3EDCC,
        &&label_80B3EDD0,
        &&label_80B3EDD4,
        &&label_80B3EDD8,
        &&label_80B3EDDC,
        &&label_80B3EDE0,
        &&label_80B3EDE4,
        &&label_80B3EDE8,
        &&label_80B3EDEC,
        &&label_80B3EDF0,
        &&label_80B3EDF4,
        &&label_80B3EDF8,
        &&label_80B3EDFC,
        &&label_80B3EE00,
        &&label_80B3EE04,
        &&label_80B3EE08,
        &&label_80B3EE0C,
        &&label_80B3EE10,
        &&label_80B3EE14,
        &&label_80B3EE18,
        &&label_80B3EE1C,
        &&label_80B3EE20,
        &&label_80B3EE24,
        &&label_80B3EE28,
        &&label_80B3EE2C,
        &&label_80B3EE30,
        &&label_80B3EE34,
        &&label_80B3EE38,
        &&label_80B3EE3C,
        &&label_80B3EE40,
        &&label_80B3EE44,
        &&label_80B3EE48,
        &&label_80B3EE4C,
        &&label_80B3EE50,
        &&label_80B3EE54,
        &&label_80B3EE58,
        &&label_80B3EE5C,
        &&label_80B3EE60,
        &&label_80B3EE64,
        &&label_80B3EE68,
        &&label_80B3EE6C,
        &&label_80B3EE70,
        &&label_80B3EE74,
        &&label_80B3EE78,
        &&label_80B3EE7C,
        &&label_80B3EE80,
        &&label_80B3EE84,
        &&label_80B3EE88,
        &&label_80B3EE8C,
        &&label_80B3EE90,
        &&label_80B3EE94,
        &&label_80B3EE98,
        &&label_80B3EE9C,
        &&label_80B3EEA0,
        &&label_80B3EEA4,
        &&label_80B3EEA8,
        &&label_80B3EEAC,
        &&label_80B3EEB0,
        &&label_80B3EEB4,
        &&label_80B3EEB8,
        &&label_80B3EEBC,
        &&label_80B3EEC0,
        &&label_80B3EEC4,
        &&label_80B3EEC8,
        &&label_80B3EECC,
        &&label_80B3EED0,
        &&label_80B3EED4,
        &&label_80B3EED8,
        &&label_80B3EEDC,
        &&label_80B3EEE0,
        &&label_80B3EEE4,
        &&label_80B3EEE8,
        &&label_80B3EEEC,
        &&label_80B3EEF0,
        &&label_80B3EEF4,
        &&label_80B3EEF8,
        &&label_80B3EEFC,
        &&label_80B3EF00,
        &&label_80B3EF04,
        &&label_80B3EF08,
        &&label_80B3EF0C,
        &&label_80B3EF10,
        &&label_80B3EF14,
        &&label_80B3EF18,
        &&label_80B3EF1C,
        &&label_80B3EF20,
        &&label_80B3EF24,
        &&label_80B3EF28,
        &&label_80B3EF2C,
        &&label_80B3EF30,
        &&label_80B3EF34,
        &&label_80B3EF38,
        &&label_80B3EF3C,
        &&label_80B3EF40,
        &&label_80B3EF44,
        &&label_80B3EF48,
        &&label_80B3EF4C,
        &&label_80B3EF50,
        &&label_80B3EF54,
        &&label_80B3EF58,
        &&label_80B3EF5C,
        &&label_80B3EF60,
        &&label_80B3EF64,
        &&label_80B3EF68,
        &&label_80B3EF6C,
        &&label_80B3EF70,
        &&label_80B3EF74,
        &&label_80B3EF78,
        &&label_80B3EF7C,
        &&label_80B3EF80,
        &&label_80B3EF84,
        &&label_80B3EF88,
        &&label_80B3EF8C,
        &&label_80B3EF90,
        &&label_80B3EF94,
        &&label_80B3EF98,
        &&label_80B3EF9C,
        &&label_80B3EFA0,
        &&label_80B3EFA4,
        &&label_80B3EFA8,
        &&label_80B3EFAC,
        &&label_80B3EFB0,
        &&label_80B3EFB4,
        &&label_80B3EFB8,
        &&label_80B3EFBC,
        &&label_80B3EFC0,
        &&label_80B3EFC4,
        &&label_80B3EFC8,
        &&label_80B3EFCC,
        &&label_80B3EFD0,
        &&label_80B3EFD4,
        &&label_80B3EFD8,
        &&label_80B3EFDC,
        &&label_80B3EFE0,
        &&label_80B3EFE4,
        &&label_80B3EFE8,
        &&label_80B3EFEC,
        &&label_80B3EFF0,
        &&label_80B3EFF4,
        &&label_80B3EFF8,
        &&label_80B3EFFC,
        &&label_80B3F000,
        &&label_80B3F004,
        &&label_80B3F008,
        &&label_80B3F00C,
        &&label_80B3F010,
        &&label_80B3F014,
        &&label_80B3F018,
        &&label_80B3F01C,
        &&label_80B3F020,
        &&label_80B3F024,
        &&label_80B3F028,
        &&label_80B3F02C,
        &&label_80B3F030,
        &&label_80B3F034,
        &&label_80B3F038,
        &&label_80B3F03C,
        &&label_80B3F040,
        &&label_80B3F044,
        &&label_80B3F048,
        &&label_80B3F04C,
        &&label_80B3F050,
        &&label_80B3F054,
        &&label_80B3F058,
        &&label_80B3F05C,
        &&label_80B3F060,
        &&label_80B3F064,
        &&label_80B3F068,
        &&label_80B3F06C,
        &&label_80B3F070,
        &&label_80B3F074,
        &&label_80B3F078,
        &&label_80B3F07C,
        &&label_80B3F080,
        &&label_80B3F084,
        &&label_80B3F088,
        &&label_80B3F08C,
        &&label_80B3F090,
        &&label_80B3F094,
        &&label_80B3F098,
        &&label_80B3F09C,
        &&label_80B3F0A0,
        &&label_80B3F0A4,
        &&label_80B3F0A8,
        &&label_80B3F0AC,
        &&label_80B3F0B0,
        &&label_80B3F0B4,
        &&label_80B3F0B8,
        &&label_80B3F0BC,
        &&label_80B3F0C0,
        &&label_80B3F0C4,
        &&label_80B3F0C8,
        &&label_80B3F0CC,
        &&label_80B3F0D0,
        &&label_80B3F0D4,
        &&label_80B3F0D8,
        &&label_80B3F0DC,
        &&label_80B3F0E0,
        &&label_80B3F0E4,
        &&label_80B3F0E8,
        &&label_80B3F0EC,
        &&label_80B3F0F0,
        &&label_80B3F0F4,
        &&label_80B3F0F8,
        &&label_80B3F0FC,
        &&label_80B3F100,
        &&label_80B3F104,
        &&label_80B3F108,
        &&label_80B3F10C,
        &&label_80B3F110,
        &&label_80B3F114,
        &&label_80B3F118,
        &&label_80B3F11C,
        &&label_80B3F120,
        &&label_80B3F124,
        &&label_80B3F128,
        &&label_80B3F12C,
        &&label_80B3F130,
        &&label_80B3F134,
        &&label_80B3F138,
        &&label_80B3F13C,
        &&label_80B3F140,
        &&label_80B3F144,
        &&label_80B3F148,
        &&label_80B3F14C,
        &&label_80B3F150,
        &&label_80B3F154,
        &&label_80B3F158,
        &&label_80B3F15C,
        &&label_80B3F160,
        &&label_80B3F164,
        &&label_80B3F168,
        &&label_80B3F16C,
        &&label_80B3F170,
        &&label_80B3F174,
        &&label_80B3F178,
        &&label_80B3F17C,
        &&label_80B3F180,
        &&label_80B3F184,
        &&label_80B3F188,
        &&label_80B3F18C,
        &&label_80B3F190,
        &&label_80B3F194,
        &&label_80B3F198,
        &&label_80B3F19C,
        &&label_80B3F1A0,
        &&label_80B3F1A4,
        &&label_80B3F1A8,
        &&label_80B3F1AC,
        &&label_80B3F1B0,
        &&label_80B3F1B4,
        &&label_80B3F1B8,
        &&label_80B3F1BC,
        &&label_80B3F1C0,
        &&label_80B3F1C4,
        &&label_80B3F1C8,
        &&label_80B3F1CC,
        &&label_80B3F1D0,
        &&label_80B3F1D4,
        &&label_80B3F1D8,
        &&label_80B3F1DC,
        &&label_80B3F1E0,
        &&label_80B3F1E4,
        &&label_80B3F1E8,
        &&label_80B3F1EC,
        &&label_80B3F1F0,
        &&label_80B3F1F4,
        &&label_80B3F1F8,
        &&label_80B3F1FC,
        &&label_80B3F200,
        &&label_80B3F204,
        &&label_80B3F208,
        &&label_80B3F20C,
        &&label_80B3F210,
        &&label_80B3F214,
        &&label_80B3F218,
        &&label_80B3F21C,
        &&label_80B3F220,
        &&label_80B3F224,
        &&label_80B3F228,
        &&label_80B3F22C,
        &&label_80B3F230,
        &&label_80B3F234,
        &&label_80B3F238,
        &&label_80B3F23C,
        &&label_80B3F240,
        &&label_80B3F244,
        &&label_80B3F248,
        &&label_80B3F24C,
        &&label_80B3F250,
        &&label_80B3F254,
        &&label_80B3F258,
        &&label_80B3F25C,
        &&label_80B3F260,
        &&label_80B3F264,
        &&label_80B3F268,
        &&label_80B3F26C,
        &&label_80B3F270,
        &&label_80B3F274,
        &&label_80B3F278,
        &&label_80B3F27C,
        &&label_80B3F280,
        &&label_80B3F284,
        &&label_80B3F288,
        &&label_80B3F28C,
        &&label_80B3F290,
        &&label_80B3F294,
        &&label_80B3F298,
        &&label_80B3F29C,
        &&label_80B3F2A0,
        &&label_80B3F2A4,
        &&label_80B3F2A8,
        &&label_80B3F2AC,
        &&label_80B3F2B0,
        &&label_80B3F2B4,
        &&label_80B3F2B8,
        &&label_80B3F2BC,
        &&label_80B3F2C0,
        &&label_80B3F2C4,
        &&label_80B3F2C8,
        &&label_80B3F2CC,
        &&label_80B3F2D0,
        &&label_80B3F2D4,
        &&label_80B3F2D8,
        &&label_80B3F2DC,
        &&label_80B3F2E0,
        &&label_80B3F2E4,
        &&label_80B3F2E8,
        &&label_80B3F2EC,
        &&label_80B3F2F0,
        &&label_80B3F2F4,
        &&label_80B3F2F8,
        &&label_80B3F2FC,
        &&label_80B3F300,
        &&label_80B3F304,
        &&label_80B3F308,
        &&label_80B3F30C,
        &&label_80B3F310,
        &&label_80B3F314,
        &&label_80B3F318,
        &&label_80B3F31C,
        &&label_80B3F320,
        &&label_80B3F324,
        &&label_80B3F328,
        &&label_80B3F32C,
        &&label_80B3F330,
        &&label_80B3F334,
        &&label_80B3F338,
        &&label_80B3F33C,
        &&label_80B3F340,
        &&label_80B3F344,
        &&label_80B3F348,
        &&label_80B3F34C,
        &&label_80B3F350,
        &&label_80B3F354,
        &&label_80B3F358,
        &&label_80B3F35C,
        &&label_80B3F360,
        &&label_80B3F364,
        &&label_80B3F368,
        &&label_80B3F36C,
        &&label_80B3F370,
        &&label_80B3F374,
        &&label_80B3F378,
        &&label_80B3F37C,
        &&label_80B3F380,
        &&label_80B3F384,
        &&label_80B3F388,
        &&label_80B3F38C,
        &&label_80B3F390,
        &&label_80B3F394,
        &&label_80B3F398,
        &&label_80B3F39C,
        &&label_80B3F3A0,
        &&label_80B3F3A4,
        &&label_80B3F3A8,
        &&label_80B3F3AC,
        &&label_80B3F3B0,
        &&label_80B3F3B4,
        &&label_80B3F3B8,
        &&label_80B3F3BC,
        &&label_80B3F3C0,
        &&label_80B3F3C4,
        &&label_80B3F3C8,
        &&label_80B3F3CC,
        &&label_80B3F3D0,
        &&label_80B3F3D4,
        &&label_80B3F3D8,
        &&label_80B3F3DC,
        &&label_80B3F3E0,
        &&label_80B3F3E4,
        &&label_80B3F3E8,
        &&label_80B3F3EC,
        &&label_80B3F3F0,
        &&label_80B3F3F4,
        &&label_80B3F3F8,
        &&label_80B3F3FC,
        &&label_80B3F400,
        &&label_80B3F404,
        &&label_80B3F408,
        &&label_80B3F40C,
        &&label_80B3F410,
        &&label_80B3F414,
        &&label_80B3F418,
        &&label_80B3F41C,
        &&label_80B3F420,
        &&label_80B3F424,
        &&label_80B3F428,
        &&label_80B3F42C,
        &&label_80B3F430,
        &&label_80B3F434,
        &&label_80B3F438,
        &&label_80B3F43C,
        &&label_80B3F440,
        &&label_80B3F444,
        &&label_80B3F448,
        &&label_80B3F44C,
        &&label_80B3F450,
        &&label_80B3F454,
        &&label_80B3F458,
        &&label_80B3F45C,
        &&label_80B3F460,
        &&label_80B3F464,
        &&label_80B3F468,
        &&label_80B3F46C,
        &&label_80B3F470,
        &&label_80B3F474,
        &&label_80B3F478,
        &&label_80B3F47C,
        &&label_80B3F480,
        &&label_80B3F484,
        &&label_80B3F488,
        &&label_80B3F48C,
        &&label_80B3F490,
        &&label_80B3F494,
        &&label_80B3F498,
        &&label_80B3F49C,
        &&label_80B3F4A0,
        &&label_80B3F4A4,
        &&label_80B3F4A8,
        &&label_80B3F4AC,
        &&label_80B3F4B0,
        &&label_80B3F4B4,
        &&label_80B3F4B8,
        &&label_80B3F4BC,
        &&label_80B3F4C0,
        &&label_80B3F4C4,
        &&label_80B3F4C8,
        &&label_80B3F4CC,
        &&label_80B3F4D0,
        &&label_80B3F4D4,
        &&label_80B3F4D8,
        &&label_80B3F4DC,
        &&label_80B3F4E0,
        &&label_80B3F4E4,
        &&label_80B3F4E8,
        &&label_80B3F4EC,
        &&label_80B3F4F0,
        &&label_80B3F4F4,
        &&label_80B3F4F8,
        &&label_80B3F4FC,
        &&label_80B3F500,
        &&label_80B3F504,
        &&label_80B3F508,
        &&label_80B3F50C,
        &&label_80B3F510,
        &&label_80B3F514,
        &&label_80B3F518,
        &&label_80B3F51C,
        &&label_80B3F520,
        &&label_80B3F524,
        &&label_80B3F528,
        &&label_80B3F52C,
        &&label_80B3F530,
        &&label_80B3F534,
        &&label_80B3F538,
        &&label_80B3F53C,
        &&label_80B3F540,
        &&label_80B3F544,
        &&label_80B3F548,
        &&label_80B3F54C,
        &&label_80B3F550,
        &&label_80B3F554,
        &&label_80B3F558,
        &&label_80B3F55C,
        &&label_80B3F560,
        &&label_80B3F564,
        &&label_80B3F568,
        &&label_80B3F56C,
        &&label_80B3F570,
        &&label_80B3F574,
        &&label_80B3F578,
        &&label_80B3F57C,
        &&label_80B3F580,
        &&label_80B3F584,
        &&label_80B3F588,
        &&label_80B3F58C,
        &&label_80B3F590,
        &&label_80B3F594,
        &&label_80B3F598,
        &&label_80B3F59C,
        &&label_80B3F5A0,
        &&label_80B3F5A4,
        &&label_80B3F5A8,
        &&label_80B3F5AC,
        &&label_80B3F5B0,
        &&label_80B3F5B4,
        &&label_80B3F5B8,
        &&label_80B3F5BC,
        &&label_80B3F5C0,
        &&label_80B3F5C4,
        &&label_80B3F5C8,
        &&label_80B3F5CC,
        &&label_80B3F5D0,
        &&label_80B3F5D4,
        &&label_80B3F5D8,
        &&label_80B3F5DC,
        &&label_80B3F5E0,
        &&label_80B3F5E4,
        &&label_80B3F5E8,
        &&label_80B3F5EC,
        &&label_80B3F5F0,
        &&label_80B3F5F4,
        &&label_80B3F5F8,
        &&label_80B3F5FC,
        &&label_80B3F600,
        &&label_80B3F604,
        &&label_80B3F608,
        &&label_80B3F60C,
        &&label_80B3F610,
        &&label_80B3F614,
        &&label_80B3F618,
        &&label_80B3F61C,
        &&label_80B3F620,
        &&label_80B3F624,
        &&label_80B3F628,
        &&label_80B3F62C,
        &&label_80B3F630,
        &&label_80B3F634,
        &&label_80B3F638,
        &&label_80B3F63C,
        &&label_80B3F640,
        &&label_80B3F644,
        &&label_80B3F648,
        &&label_80B3F64C,
        &&label_80B3F650,
        &&label_80B3F654,
        &&label_80B3F658,
        &&label_80B3F65C,
        &&label_80B3F660,
        &&label_80B3F664,
        &&label_80B3F668,
        &&label_80B3F66C,
        &&label_80B3F670,
        &&label_80B3F674,
        &&label_80B3F678,
        &&label_80B3F67C,
        &&label_80B3F680,
        &&label_80B3F684,
        &&label_80B3F688,
        &&label_80B3F68C,
        &&label_80B3F690,
        &&label_80B3F694,
        &&label_80B3F698,
        &&label_80B3F69C,
        &&label_80B3F6A0,
        &&label_80B3F6A4,
        &&label_80B3F6A8,
        &&label_80B3F6AC,
        &&label_80B3F6B0,
        &&label_80B3F6B4,
        &&label_80B3F6B8,
        &&label_80B3F6BC,
        &&label_80B3F6C0,
        &&label_80B3F6C4,
        &&label_80B3F6C8,
        &&label_80B3F6CC,
        &&label_80B3F6D0,
        &&label_80B3F6D4,
        &&label_80B3F6D8,
        &&label_80B3F6DC,
        &&label_80B3F6E0,
        &&label_80B3F6E4,
        &&label_80B3F6E8,
        &&label_80B3F6EC,
        &&label_80B3F6F0,
        &&label_80B3F6F4,
        &&label_80B3F6F8,
        &&label_80B3F6FC,
        &&label_80B3F700,
        &&label_80B3F704,
        &&label_80B3F708,
        &&label_80B3F70C,
        &&label_80B3F710,
        &&label_80B3F714,
        &&label_80B3F718,
        &&label_80B3F71C,
        &&label_80B3F720,
        &&label_80B3F724,
        &&label_80B3F728,
        &&label_80B3F72C,
        &&label_80B3F730,
        &&label_80B3F734,
        &&label_80B3F738,
        &&label_80B3F73C,
        &&label_80B3F740,
        &&label_80B3F744,
        &&label_80B3F748,
        &&label_80B3F74C,
        &&label_80B3F750,
        &&label_80B3F754,
        &&label_80B3F758,
        &&label_80B3F75C,
        &&label_80B3F760,
        &&label_80B3F764,
        &&label_80B3F768,
        &&label_80B3F76C,
        &&label_80B3F770,
        &&label_80B3F774,
        &&label_80B3F778,
        &&label_80B3F77C,
        &&label_80B3F780,
        &&label_80B3F784,
        &&label_80B3F788,
        &&label_80B3F78C,
        &&label_80B3F790,
        &&label_80B3F794,
        &&label_80B3F798,
        &&label_80B3F79C,
        &&label_80B3F7A0,
        &&label_80B3F7A4,
        &&label_80B3F7A8,
        &&label_80B3F7AC,
        &&label_80B3F7B0,
        &&label_80B3F7B4,
        &&label_80B3F7B8,
        &&label_80B3F7BC,
        &&label_80B3F7C0,
        &&label_80B3F7C4,
        &&label_80B3F7C8,
        &&label_80B3F7CC,
        &&label_80B3F7D0,
        &&label_80B3F7D4,
        &&label_80B3F7D8,
        &&label_80B3F7DC,
        &&label_80B3F7E0,
        &&label_80B3F7E4,
        &&label_80B3F7E8,
        &&label_80B3F7EC,
        &&label_80B3F7F0,
        &&label_80B3F7F4,
        &&label_80B3F7F8,
        &&label_80B3F7FC,
        &&label_80B3F800,
        &&label_80B3F804,
        &&label_80B3F808,
        &&label_80B3F80C,
        &&label_80B3F810,
        &&label_80B3F814,
        &&label_80B3F818,
        &&label_80B3F81C,
        &&label_80B3F820,
        &&label_80B3F824,
        &&label_80B3F828,
        &&label_80B3F82C,
        &&label_80B3F830,
        &&label_80B3F834,
        &&label_80B3F838,
        &&label_80B3F83C,
        &&label_80B3F840,
        &&label_80B3F844,
        &&label_80B3F848,
        &&label_80B3F84C,
        &&label_80B3F850,
        &&label_80B3F854,
        &&label_80B3F858,
        &&label_80B3F85C,
        &&label_80B3F860,
        &&label_80B3F864,
        &&label_80B3F868,
        &&label_80B3F86C,
        &&label_80B3F870,
        &&label_80B3F874,
        &&label_80B3F878,
        &&label_80B3F87C,
        &&label_80B3F880,
        &&label_80B3F884,
        &&label_80B3F888,
        &&label_80B3F88C,
        &&label_80B3F890,
        &&label_80B3F894,
        &&label_80B3F898,
        &&label_80B3F89C,
        &&label_80B3F8A0,
        &&label_80B3F8A4,
        &&label_80B3F8A8,
        &&label_80B3F8AC,
        &&label_80B3F8B0,
        &&label_80B3F8B4,
        &&label_80B3F8B8,
        &&label_80B3F8BC,
        &&label_80B3F8C0,
        &&label_80B3F8C4,
        &&label_80B3F8C8,
        &&label_80B3F8CC,
        &&label_80B3F8D0,
        &&label_80B3F8D4,
        &&label_80B3F8D8,
        &&label_80B3F8DC,
        &&label_80B3F8E0,
        &&label_80B3F8E4,
        &&label_80B3F8E8,
        &&label_80B3F8EC,
        &&label_80B3F8F0,
        &&label_80B3F8F4,
        &&label_80B3F8F8,
        &&label_80B3F8FC,
        &&label_80B3F900,
        &&label_80B3F904,
        &&label_80B3F908,
        &&label_80B3F90C,
        &&label_80B3F910,
        &&label_80B3F914,
        &&label_80B3F918,
        &&label_80B3F91C,
        &&label_80B3F920,
        &&label_80B3F924,
        &&label_80B3F928,
        &&label_80B3F92C,
        &&label_80B3F930,
        &&label_80B3F934,
        &&label_80B3F938,
        &&label_80B3F93C,
        &&label_80B3F940,
        &&label_80B3F944,
        &&label_80B3F948,
        &&label_80B3F94C,
        &&label_80B3F950,
        &&label_80B3F954,
        &&label_80B3F958,
        &&label_80B3F95C,
        &&label_80B3F960,
        &&label_80B3F964,
        &&label_80B3F968,
        &&label_80B3F96C,
        &&label_80B3F970,
        &&label_80B3F974,
        &&label_80B3F978,
        &&label_80B3F97C,
        &&label_80B3F980,
        &&label_80B3F984,
        &&label_80B3F988,
        &&label_80B3F98C,
        &&label_80B3F990,
        &&label_80B3F994,
        &&label_80B3F998,
        &&label_80B3F99C,
        &&label_80B3F9A0,
        &&label_80B3F9A4,
        &&label_80B3F9A8,
        &&label_80B3F9AC,
        &&label_80B3F9B0,
        &&label_80B3F9B4,
        &&label_80B3F9B8,
        &&label_80B3F9BC,
        &&label_80B3F9C0,
        &&label_80B3F9C4,
        &&label_80B3F9C8,
        &&label_80B3F9CC,
        &&label_80B3F9D0,
        &&label_80B3F9D4,
        &&label_80B3F9D8,
        &&label_80B3F9DC,
        &&label_80B3F9E0,
        &&label_80B3F9E4,
        &&label_80B3F9E8,
        &&label_80B3F9EC,
        &&label_80B3F9F0,
        &&label_80B3F9F4,
        &&label_80B3F9F8,
        &&label_80B3F9FC,
        &&label_80B3FA00,
        &&label_80B3FA04,
        &&label_80B3FA08,
        &&label_80B3FA0C,
        &&label_80B3FA10,
        &&label_80B3FA14,
        &&label_80B3FA18,
        &&label_80B3FA1C,
        &&label_80B3FA20,
        &&label_80B3FA24,
        &&label_80B3FA28,
        &&label_80B3FA2C,
        &&label_80B3FA30,
        &&label_80B3FA34,
        &&label_80B3FA38,
        &&label_80B3FA3C,
        &&label_80B3FA40,
        &&label_80B3FA44,
        &&label_80B3FA48,
        &&label_80B3FA4C,
        &&label_80B3FA50,
        &&label_80B3FA54,
        &&label_80B3FA58,
        &&label_80B3FA5C,
        &&label_80B3FA60,
        &&label_80B3FA64,
        &&label_80B3FA68,
        &&label_80B3FA6C,
        &&label_80B3FA70,
        &&label_80B3FA74,
        &&label_80B3FA78,
        &&label_80B3FA7C,
        &&label_80B3FA80,
        &&label_80B3FA84,
        &&label_80B3FA88,
        &&label_80B3FA8C,
        &&label_80B3FA90,
        &&label_80B3FA94,
        &&label_80B3FA98,
        &&label_80B3FA9C,
        &&label_80B3FAA0,
        &&label_80B3FAA4,
        &&label_80B3FAA8,
        &&label_80B3FAAC,
        &&label_80B3FAB0,
        &&label_80B3FAB4,
        &&label_80B3FAB8,
        &&label_80B3FABC,
        &&label_80B3FAC0,
        &&label_80B3FAC4,
        &&label_80B3FAC8,
        &&label_80B3FACC,
        &&label_80B3FAD0,
        &&label_80B3FAD4,
        &&label_80B3FAD8,
        &&label_80B3FADC,
        &&label_80B3FAE0,
        &&label_80B3FAE4,
        &&label_80B3FAE8,
        &&label_80B3FAEC,
        &&label_80B3FAF0,
        &&label_80B3FAF4,
        &&label_80B3FAF8,
        &&label_80B3FAFC,
        &&label_80B3FB00,
        &&label_80B3FB04,
        &&label_80B3FB08,
        &&label_80B3FB0C,
        &&label_80B3FB10,
        &&label_80B3FB14,
        &&label_80B3FB18,
        &&label_80B3FB1C,
        &&label_80B3FB20,
        &&label_80B3FB24,
        &&label_80B3FB28,
        &&label_80B3FB2C,
        &&label_80B3FB30,
        &&label_80B3FB34,
        &&label_80B3FB38,
        &&label_80B3FB3C,
        &&label_80B3FB40,
        &&label_80B3FB44,
        &&label_80B3FB48,
        &&label_80B3FB4C,
        &&label_80B3FB50,
        &&label_80B3FB54,
        &&label_80B3FB58,
        &&label_80B3FB5C,
        &&label_80B3FB60,
        &&label_80B3FB64,
        &&label_80B3FB68,
        &&label_80B3FB6C,
        &&label_80B3FB70,
        &&label_80B3FB74,
        &&label_80B3FB78,
        &&label_80B3FB7C,
        &&label_80B3FB80,
        &&label_80B3FB84,
        &&label_80B3FB88,
        &&label_80B3FB8C,
        &&label_80B3FB90,
        &&label_80B3FB94,
        &&label_80B3FB98,
        &&label_80B3FB9C,
        &&label_80B3FBA0,
        &&label_80B3FBA4,
        &&label_80B3FBA8,
        &&label_80B3FBAC,
        &&label_80B3FBB0,
        &&label_80B3FBB4,
        &&label_80B3FBB8,
        &&label_80B3FBBC,
        &&label_80B3FBC0,
        &&label_80B3FBC4,
        &&label_80B3FBC8,
        &&label_80B3FBCC,
        &&label_80B3FBD0,
        &&label_80B3FBD4,
        &&label_80B3FBD8,
        &&label_80B3FBDC,
        &&label_80B3FBE0,
        &&label_80B3FBE4,
        &&label_80B3FBE8,
        &&label_80B3FBEC,
        &&label_80B3FBF0,
        &&label_80B3FBF4,
        &&label_80B3FBF8,
        &&label_80B3FBFC,
        &&label_80B3FC00,
        &&label_80B3FC04,
        &&label_80B3FC08,
        &&label_80B3FC0C,
        &&label_80B3FC10,
        &&label_80B3FC14,
        &&label_80B3FC18,
        &&label_80B3FC1C,
        &&label_80B3FC20,
        &&label_80B3FC24,
        &&label_80B3FC28,
        &&label_80B3FC2C,
        &&label_80B3FC30,
        &&label_80B3FC34,
        &&label_80B3FC38,
        &&label_80B3FC3C,
        &&label_80B3FC40,
        &&label_80B3FC44,
        &&label_80B3FC48,
        &&label_80B3FC4C,
        &&label_80B3FC50,
        &&label_80B3FC54,
        &&label_80B3FC58,
        &&label_80B3FC5C,
        &&label_80B3FC60,
        &&label_80B3FC64,
        &&label_80B3FC68,
        &&label_80B3FC6C,
        &&label_80B3FC70,
        &&label_80B3FC74,
        &&label_80B3FC78,
        &&label_80B3FC7C,
        &&label_80B3FC80,
        &&label_80B3FC84,
        &&label_80B3FC88,
        &&label_80B3FC8C,
        &&label_80B3FC90,
        &&label_80B3FC94,
        &&label_80B3FC98,
        &&label_80B3FC9C,
        &&label_80B3FCA0,
        &&label_80B3FCA4,
        &&label_80B3FCA8,
        &&label_80B3FCAC,
        &&label_80B3FCB0,
        &&label_80B3FCB4,
        &&label_80B3FCB8,
        &&label_80B3FCBC,
        &&label_80B3FCC0,
        &&label_80B3FCC4,
        &&label_80B3FCC8,
        &&label_80B3FCCC,
        &&label_80B3FCD0,
        &&label_80B3FCD4,
        &&label_80B3FCD8,
        &&label_80B3FCDC,
        &&label_80B3FCE0,
        &&label_80B3FCE4,
        &&label_80B3FCE8,
        &&label_80B3FCEC,
        &&label_80B3FCF0,
        &&label_80B3FCF4,
        &&label_80B3FCF8,
        &&label_80B3FCFC,
        &&label_80B3FD00,
        &&label_80B3FD04,
        &&label_80B3FD08,
        &&label_80B3FD0C,
        &&label_80B3FD10,
        &&label_80B3FD14,
        &&label_80B3FD18,
        &&label_80B3FD1C,
        &&label_80B3FD20,
        &&label_80B3FD24,
        &&label_80B3FD28,
        &&label_80B3FD2C,
        &&label_80B3FD30,
        &&label_80B3FD34,
        &&label_80B3FD38,
        &&label_80B3FD3C,
        &&label_80B3FD40,
        &&label_80B3FD44,
        &&label_80B3FD48,
        &&label_80B3FD4C,
        &&label_80B3FD50,
        &&label_80B3FD54,
        &&label_80B3FD58,
        &&label_80B3FD5C,
        &&label_80B3FD60,
        &&label_80B3FD64,
        &&label_80B3FD68,
        &&label_80B3FD6C,
        &&label_80B3FD70,
        &&label_80B3FD74,
        &&label_80B3FD78,
        &&label_80B3FD7C,
        &&label_80B3FD80,
        &&label_80B3FD84,
        &&label_80B3FD88,
        &&label_80B3FD8C,
        &&label_80B3FD90,
        &&label_80B3FD94,
        &&label_80B3FD98,
        &&label_80B3FD9C,
        &&label_80B3FDA0,
        &&label_80B3FDA4,
        &&label_80B3FDA8,
        &&label_80B3FDAC,
        &&label_80B3FDB0,
        &&label_80B3FDB4,
        &&label_80B3FDB8,
        &&label_80B3FDBC,
        &&label_80B3FDC0,
        &&label_80B3FDC4,
        &&label_80B3FDC8,
        &&label_80B3FDCC,
        &&label_80B3FDD0,
        &&label_80B3FDD4,
        &&label_80B3FDD8,
        &&label_80B3FDDC,
        &&label_80B3FDE0,
        &&label_80B3FDE4,
        &&label_80B3FDE8,
        &&label_80B3FDEC,
        &&label_80B3FDF0,
        &&label_80B3FDF4,
        &&label_80B3FDF8,
        &&label_80B3FDFC,
        &&label_80B3FE00,
        &&label_80B3FE04,
        &&label_80B3FE08,
        &&label_80B3FE0C,
        &&label_80B3FE10,
        &&label_80B3FE14,
        &&label_80B3FE18,
        &&label_80B3FE1C,
        &&label_80B3FE20,
        &&label_80B3FE24,
        &&label_80B3FE28,
        &&label_80B3FE2C,
        &&label_80B3FE30,
        &&label_80B3FE34,
        &&label_80B3FE38,
        &&label_80B3FE3C,
        &&label_80B3FE40,
        &&label_80B3FE44,
        &&label_80B3FE48,
        &&label_80B3FE4C,
        &&label_80B3FE50,
        &&label_80B3FE54,
        &&label_80B3FE58,
        &&label_80B3FE5C,
        &&label_80B3FE60,
        &&label_80B3FE64,
        &&label_80B3FE68,
        &&label_80B3FE6C,
        &&label_80B3FE70,
        &&label_80B3FE74,
        &&label_80B3FE78,
        &&label_80B3FE7C,
        &&label_80B3FE80,
        &&label_80B3FE84,
        &&label_80B3FE88,
        &&label_80B3FE8C,
        &&label_80B3FE90,
        &&label_80B3FE94,
        &&label_80B3FE98,
        &&label_80B3FE9C,
        &&label_80B3FEA0,
        &&label_80B3FEA4,
        &&label_80B3FEA8,
        &&label_80B3FEAC,
        &&label_80B3FEB0,
        &&label_80B3FEB4,
        &&label_80B3FEB8,
        &&label_80B3FEBC,
        &&label_80B3FEC0,
        &&label_80B3FEC4,
        &&label_80B3FEC8,
        &&label_80B3FECC,
        &&label_80B3FED0,
        &&label_80B3FED4,
        &&label_80B3FED8,
        &&label_80B3FEDC,
        &&label_80B3FEE0,
        &&label_80B3FEE4,
        &&label_80B3FEE8,
        &&label_80B3FEEC,
        &&label_80B3FEF0,
        &&label_80B3FEF4,
        &&label_80B3FEF8,
        &&label_80B3FEFC,
        &&label_80B3FF00,
        &&label_80B3FF04,
        &&label_80B3FF08,
        &&label_80B3FF0C,
        &&label_80B3FF10,
        &&label_80B3FF14,
        &&label_80B3FF18,
        &&label_80B3FF1C,
        &&label_80B3FF20,
        &&label_80B3FF24,
        &&label_80B3FF28,
        &&label_80B3FF2C,
        &&label_80B3FF30,
        &&label_80B3FF34,
        &&label_80B3FF38,
        &&label_80B3FF3C,
        &&label_80B3FF40,
        &&label_80B3FF44,
        &&label_80B3FF48,
        &&label_80B3FF4C,
        &&label_80B3FF50,
        &&label_80B3FF54,
        &&label_80B3FF58,
        &&label_80B3FF5C,
        &&label_80B3FF60,
        &&label_80B3FF64,
        &&label_80B3FF68,
        &&label_80B3FF6C,
        &&label_80B3FF70,
        &&label_80B3FF74,
        &&label_80B3FF78,
        &&label_80B3FF7C,
        &&label_80B3FF80,
        &&label_80B3FF84,
        &&label_80B3FF88,
        &&label_80B3FF8C,
        &&label_80B3FF90,
        &&label_80B3FF94,
        &&label_80B3FF98,
        &&label_80B3FF9C,
        &&label_80B3FFA0,
        &&label_80B3FFA4,
        &&label_80B3FFA8,
        &&label_80B3FFAC,
        &&label_80B3FFB0,
        &&label_80B3FFB4,
        &&label_80B3FFB8,
        &&label_80B3FFBC,
        &&label_80B3FFC0,
        &&label_80B3FFC4,
        &&label_80B3FFC8,
        &&label_80B3FFCC,
        &&label_80B3FFD0,
        &&label_80B3FFD4,
        &&label_80B3FFD8,
        &&label_80B3FFDC,
        &&label_80B3FFE0,
        &&label_80B3FFE4,
        &&label_80B3FFE8,
        &&label_80B3FFEC,
        &&label_80B3FFF0,
        &&label_80B3FFF4,
        &&label_80B3FFF8,
        &&label_80B3FFFC,
        &&label_80B40000,
        &&label_80B40004,
        &&label_80B40008,
        &&label_80B4000C,
        &&label_80B40010,
        &&label_80B40014,
        &&label_80B40018,
        &&label_80B4001C,
        &&label_80B40020,
        &&label_80B40024,
        &&label_80B40028,
        &&label_80B4002C,
        &&label_80B40030,
        &&label_80B40034,
        &&label_80B40038,
        &&label_80B4003C,
        &&label_80B40040,
        &&label_80B40044,
        &&label_80B40048,
        &&label_80B4004C,
        &&label_80B40050,
        &&label_80B40054,
        &&label_80B40058,
        &&label_80B4005C,
        &&label_80B40060,
        &&label_80B40064,
        &&label_80B40068,
        &&label_80B4006C,
        &&label_80B40070,
        &&label_80B40074,
        &&label_80B40078,
        &&label_80B4007C,
        &&label_80B40080,
        &&label_80B40084,
        &&label_80B40088,
        &&label_80B4008C,
        &&label_80B40090,
        &&label_80B40094,
        &&label_80B40098,
        &&label_80B4009C,
        &&label_80B400A0,
        &&label_80B400A4,
        &&label_80B400A8,
        &&label_80B400AC,
        &&label_80B400B0,
        &&label_80B400B4,
        &&label_80B400B8,
        &&label_80B400BC,
        &&label_80B400C0,
        &&label_80B400C4,
        &&label_80B400C8,
        &&label_80B400CC,
        &&label_80B400D0,
        &&label_80B400D4,
        &&label_80B400D8,
        &&label_80B400DC,
        &&label_80B400E0,
        &&label_80B400E4,
        &&label_80B400E8,
        &&label_80B400EC,
        &&label_80B400F0,
        &&label_80B400F4,
        &&label_80B400F8,
        &&label_80B400FC,
        &&label_80B40100,
        &&label_80B40104,
        &&label_80B40108,
        &&label_80B4010C,
        &&label_80B40110,
        &&label_80B40114,
        &&label_80B40118,
        &&label_80B4011C,
        &&label_80B40120,
        &&label_80B40124,
        &&label_80B40128,
        &&label_80B4012C,
        &&label_80B40130,
        &&label_80B40134,
        &&label_80B40138,
        &&label_80B4013C,
        &&label_80B40140,
        &&label_80B40144,
        &&label_80B40148,
        &&label_80B4014C,
        &&label_80B40150,
        &&label_80B40154,
        &&label_80B40158,
        &&label_80B4015C,
        &&label_80B40160,
        &&label_80B40164,
        &&label_80B40168,
        &&label_80B4016C,
        &&label_80B40170,
        &&label_80B40174,
        &&label_80B40178,
        &&label_80B4017C,
        &&label_80B40180,
        &&label_80B40184,
        &&label_80B40188,
        &&label_80B4018C,
        &&label_80B40190,
        &&label_80B40194,
        &&label_80B40198,
        &&label_80B4019C,
        &&label_80B401A0,
        &&label_80B401A4,
        &&label_80B401A8,
        &&label_80B401AC,
        &&label_80B401B0,
        &&label_80B401B4,
        &&label_80B401B8,
        &&label_80B401BC,
        &&label_80B401C0,
        &&label_80B401C4,
        &&label_80B401C8,
        &&label_80B401CC,
        &&label_80B401D0,
        &&label_80B401D4,
        &&label_80B401D8,
        &&label_80B401DC,
        &&label_80B401E0,
        &&label_80B401E4,
        &&label_80B401E8,
        &&label_80B401EC,
        &&label_80B401F0,
        &&label_80B401F4,
        &&label_80B401F8,
        &&label_80B401FC,
        &&label_80B40200,
        &&label_80B40204,
        &&label_80B40208,
        &&label_80B4020C,
        &&label_80B40210,
        &&label_80B40214,
        &&label_80B40218,
        &&label_80B4021C,
        &&label_80B40220,
        &&label_80B40224,
        &&label_80B40228,
        &&label_80B4022C,
        &&label_80B40230,
        &&label_80B40234,
        &&label_80B40238,
        &&label_80B4023C,
        &&label_80B40240,
        &&label_80B40244,
        &&label_80B40248,
        &&label_80B4024C,
        &&label_80B40250,
        &&label_80B40254,
        &&label_80B40258,
        &&label_80B4025C,
        &&label_80B40260,
        &&label_80B40264,
        &&label_80B40268,
        &&label_80B4026C,
        &&label_80B40270,
        &&label_80B40274,
        &&label_80B40278,
        &&label_80B4027C,
        &&label_80B40280,
        &&label_80B40284,
        &&label_80B40288,
        &&label_80B4028C,
        &&label_80B40290,
        &&label_80B40294,
        &&label_80B40298,
        &&label_80B4029C,
        &&label_80B402A0,
        &&label_80B402A4,
        &&label_80B402A8,
        &&label_80B402AC,
        &&label_80B402B0,
        &&label_80B402B4,
        &&label_80B402B8,
        &&label_80B402BC,
        &&label_80B402C0,
        &&label_80B402C4,
        &&label_80B402C8,
        &&label_80B402CC,
        &&label_80B402D0,
        &&label_80B402D4,
        &&label_80B402D8,
        &&label_80B402DC,
        &&label_80B402E0,
        &&label_80B402E4,
        &&label_80B402E8,
        &&label_80B402EC,
        &&label_80B402F0,
        &&label_80B402F4,
        &&label_80B402F8,
        &&label_80B402FC,
        &&label_80B40300,
        &&label_80B40304,
        &&label_80B40308,
        &&label_80B4030C,
        &&label_80B40310,
        &&label_80B40314,
        &&label_80B40318,
        &&label_80B4031C,
        &&label_80B40320,
        &&label_80B40324,
        &&label_80B40328,
        &&label_80B4032C,
        &&label_80B40330,
        &&label_80B40334,
        &&label_80B40338,
        &&label_80B4033C,
        &&label_80B40340,
        &&label_80B40344,
        &&label_80B40348,
        &&label_80B4034C,
        &&label_80B40350,
        &&label_80B40354,
        &&label_80B40358,
        &&label_80B4035C,
        &&label_80B40360,
        &&label_80B40364,
        &&label_80B40368,
        &&label_80B4036C,
        &&label_80B40370,
        &&label_80B40374,
        &&label_80B40378,
        &&label_80B4037C,
        &&label_80B40380,
        &&label_80B40384,
        &&label_80B40388,
        &&label_80B4038C,
        &&label_80B40390,
        &&label_80B40394,
        &&label_80B40398,
        &&label_80B4039C,
        &&label_80B403A0,
        &&label_80B403A4,
        &&label_80B403A8,
        &&label_80B403AC,
        &&label_80B403B0,
        &&label_80B403B4,
        &&label_80B403B8,
        &&label_80B403BC,
        &&label_80B403C0,
        &&label_80B403C4,
        &&label_80B403C8,
        &&label_80B403CC,
        &&label_80B403D0,
        &&label_80B403D4,
        &&label_80B403D8,
        &&label_80B403DC,
        &&label_80B403E0,
        &&label_80B403E4,
        &&label_80B403E8,
        &&label_80B403EC,
        &&label_80B403F0,
        &&label_80B403F4,
        &&label_80B403F8,
        &&label_80B403FC,
        &&label_80B40400,
        &&label_80B40404,
        &&label_80B40408,
        &&label_80B4040C,
        &&label_80B40410,
        &&label_80B40414,
        &&label_80B40418,
        &&label_80B4041C,
        &&label_80B40420,
        &&label_80B40424,
        &&label_80B40428,
        &&label_80B4042C,
        &&label_80B40430,
        &&label_80B40434,
        &&label_80B40438,
        &&label_80B4043C,
        &&label_80B40440,
        &&label_80B40444,
        &&label_80B40448,
        &&label_80B4044C,
        &&label_80B40450,
        &&label_80B40454,
        &&label_80B40458,
        &&label_80B4045C,
        &&label_80B40460,
        &&label_80B40464,
        &&label_80B40468,
        &&label_80B4046C,
        &&label_80B40470,
        &&label_80B40474,
        &&label_80B40478,
        &&label_80B4047C,
        &&label_80B40480,
        &&label_80B40484,
        &&label_80B40488,
        &&label_80B4048C,
        &&label_80B40490,
        &&label_80B40494,
        &&label_80B40498,
        &&label_80B4049C,
        &&label_80B404A0,
        &&label_80B404A4,
        &&label_80B404A8,
        &&label_80B404AC,
        &&label_80B404B0,
        &&label_80B404B4,
        &&label_80B404B8,
        &&label_80B404BC,
        &&label_80B404C0,
        &&label_80B404C4,
        &&label_80B404C8,
        &&label_80B404CC,
        &&label_80B404D0,
        &&label_80B404D4,
        &&label_80B404D8,
        &&label_80B404DC,
        &&label_80B404E0,
        &&label_80B404E4,
        &&label_80B404E8,
        &&label_80B404EC,
        &&label_80B404F0,
        &&label_80B404F4,
        &&label_80B404F8,
        &&label_80B404FC,
        &&label_80B40500,
        &&label_80B40504,
        &&label_80B40508,
        &&label_80B4050C,
        &&label_80B40510,
        &&label_80B40514,
        &&label_80B40518,
        &&label_80B4051C,
        &&label_80B40520,
        &&label_80B40524,
        &&label_80B40528,
        &&label_80B4052C,
        &&label_80B40530,
        &&label_80B40534,
        &&label_80B40538,
        &&label_80B4053C,
        &&label_80B40540,
        &&label_80B40544,
        &&label_80B40548,
        &&label_80B4054C,
        &&label_80B40550,
        &&label_80B40554,
        &&label_80B40558,
        &&label_80B4055C,
        &&label_80B40560,
        &&label_80B40564,
        &&label_80B40568,
        &&label_80B4056C,
        &&label_80B40570,
        &&label_80B40574,
        &&label_80B40578,
        &&label_80B4057C,
        &&label_80B40580,
        &&label_80B40584,
        &&label_80B40588,
        &&label_80B4058C,
        &&label_80B40590,
        &&label_80B40594,
        &&label_80B40598,
        &&label_80B4059C,
        &&label_80B405A0,
        &&label_80B405A4,
        &&label_80B405A8,
        &&label_80B405AC,
        &&label_80B405B0,
        &&label_80B405B4,
        &&label_80B405B8,
        &&label_80B405BC,
        &&label_80B405C0,
        &&label_80B405C4,
        &&label_80B405C8,
        &&label_80B405CC,
        &&label_80B405D0,
        &&label_80B405D4,
        &&label_80B405D8,
        &&label_80B405DC,
        &&label_80B405E0,
        &&label_80B405E4,
        &&label_80B405E8,
        &&label_80B405EC,
        &&label_80B405F0,
        &&label_80B405F4,
        &&label_80B405F8,
        &&label_80B405FC,
        &&label_80B40600,
        &&label_80B40604,
        &&label_80B40608,
        &&label_80B4060C,
        &&label_80B40610,
        &&label_80B40614,
        &&label_80B40618,
        &&label_80B4061C,
        &&label_80B40620,
        &&label_80B40624,
        &&label_80B40628,
        &&label_80B4062C,
        &&label_80B40630,
        &&label_80B40634,
        &&label_80B40638,
        &&label_80B4063C,
        &&label_80B40640,
        &&label_80B40644,
        &&label_80B40648,
        &&label_80B4064C,
        &&label_80B40650,
        &&label_80B40654,
        &&label_80B40658,
        &&label_80B4065C,
        &&label_80B40660,
        &&label_80B40664,
        &&label_80B40668,
        &&label_80B4066C,
        &&label_80B40670,
        &&label_80B40674,
        &&label_80B40678,
        &&label_80B4067C,
        &&label_80B40680,
        &&label_80B40684,
        &&label_80B40688,
        &&label_80B4068C,
        &&label_80B40690,
        &&label_80B40694,
        &&label_80B40698,
        &&label_80B4069C,
        &&label_80B406A0,
        &&label_80B406A4,
        &&label_80B406A8,
        &&label_80B406AC,
        &&label_80B406B0,
        &&label_80B406B4,
        &&label_80B406B8,
        &&label_80B406BC,
        &&label_80B406C0,
        &&label_80B406C4,
        &&label_80B406C8,
        &&label_80B406CC,
        &&label_80B406D0,
        &&label_80B406D4,
        &&label_80B406D8,
        &&label_80B406DC,
        &&label_80B406E0,
        &&label_80B406E4,
        &&label_80B406E8,
        &&label_80B406EC,
        &&label_80B406F0,
        &&label_80B406F4,
        &&label_80B406F8,
        &&label_80B406FC,
        &&label_80B40700,
        &&label_80B40704,
        &&label_80B40708,
        &&label_80B4070C,
        &&label_80B40710,
        &&label_80B40714,
        &&label_80B40718,
        &&label_80B4071C,
        &&label_80B40720,
        &&label_80B40724,
        &&label_80B40728,
        &&label_80B4072C,
        &&label_80B40730,
        &&label_80B40734,
        &&label_80B40738,
        &&label_80B4073C,
        &&label_80B40740,
        &&label_80B40744,
        &&label_80B40748,
        &&label_80B4074C,
        &&label_80B40750,
        &&label_80B40754,
        &&label_80B40758,
        &&label_80B4075C,
        &&label_80B40760,
        &&label_80B40764,
        &&label_80B40768,
        &&label_80B4076C,
        &&label_80B40770,
        &&label_80B40774,
        &&label_80B40778,
        &&label_80B4077C,
        &&label_80B40780,
        &&label_80B40784,
        &&label_80B40788,
        &&label_80B4078C,
        &&label_80B40790,
        &&label_80B40794,
        &&label_80B40798,
        &&label_80B4079C,
        &&label_80B407A0,
        &&label_80B407A4,
        &&label_80B407A8,
        &&label_80B407AC,
        &&label_80B407B0,
        &&label_80B407B4,
        &&label_80B407B8
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80B3ED80u && pc <= 0x80B407B8u && ((pc - 0x80B3ED80u) & 3u) == 0u)
            goto *pc_table_80B3ED80[(pc - 0x80B3ED80u) >> 2];
    }
    return;
label_80B3ED80:
    ctx->pc = 0x80B3ED80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ED80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3ED80: stwu     r1, -64(r1)
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
label_80B3ED84:
    ctx->pc = 0x80B3ED84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3ED84: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3ED88:
    ctx->pc = 0x80B3ED88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3ED88: stw     r0, 68(r1)
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
label_80B3ED8C:
    ctx->pc = 0x80B3ED8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3ED8C: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B3ED8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3ED90:
    ctx->pc = 0x80B3ED90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3ED90: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B3ED90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80B3ED90u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3ED94:
    ctx->pc = 0x80B3ED94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED94u)) return;
    // 80B3ED94: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80B3ED98:
    ctx->pc = 0x80B3ED98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3ED98u)) return;
    // 80B3ED98: bl      0x80006DD4
    {
            ctx->lr = 0x80B3ED9Cu;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80B3ED9C:
    ctx->pc = 0x80B3ED9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3ED9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3ED9C: cmpwi   r3, 2
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

label_80B3EDA0:
    ctx->pc = 0x80B3EDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDA0u)) return;
    // 80B3EDA0: bc    12, 2, 0x80B400D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B400D0;
        }
    }

label_80B3EDA4:
    ctx->pc = 0x80B3EDA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EDA4: bc    4, 0, 0x80B3EDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EDB8;
        }
    }

label_80B3EDA8:
    ctx->pc = 0x80B3EDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EDA8: cmpwi   r3, 0
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

label_80B3EDAC:
    ctx->pc = 0x80B3EDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDACu)) return;
    // 80B3EDAC: bc    12, 2, 0x80B4013C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B4013C;
        }
    }

label_80B3EDB0:
    ctx->pc = 0x80B3EDB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EDB0: bc    4, 0, 0x80B3EDC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3EDC0;
        }
    }

label_80B3EDB4:
    ctx->pc = 0x80B3EDB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EDB4: b       0x80B4013C
    {
            goto label_80B4013C;
    }

label_80B3EDB8:
    ctx->pc = 0x80B3EDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EDB8: cmpwi   r3, 4
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

label_80B3EDBC:
    ctx->pc = 0x80B3EDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDBCu)) return;
    // 80B3EDBC: b       0x80B4013C
    {
            goto label_80B4013C;
    }

label_80B3EDC0:
    ctx->pc = 0x80B3EDC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EDC0: bl      0x8045DE7C
    {
            ctx->lr = 0x80B3EDC4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80B3EDC4:
    ctx->pc = 0x80B3EDC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EDC4: bl      0x80460A60
    {
            ctx->lr = 0x80B3EDC8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80B3EDC8:
    ctx->pc = 0x80B3EDC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3EDC8: bl      0x80460A24
    {
            ctx->lr = 0x80B3EDCCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80B3EDCC:
    ctx->pc = 0x80B3EDCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EDCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EDD0:
    ctx->pc = 0x80B3EDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDD0u)) return;
    // 80B3EDD0: bl      0x8045EC10
    {
            ctx->lr = 0x80B3EDD4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B3EDD4:
    ctx->pc = 0x80B3EDD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EDD4: li      r3, 94
    ctx->gpr[3] = (u32)(s32)(94);

label_80B3EDD8:
    ctx->pc = 0x80B3EDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDD8u)) return;
    // 80B3EDD8: bl      0x80406090
    {
            ctx->lr = 0x80B3EDDCu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80B3EDDC:
    ctx->pc = 0x80B3EDDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EDDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EDE0:
    ctx->pc = 0x80B3EDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDE0u)) return;
    // 80B3EDE0: bl      0x8045F220
    {
            ctx->lr = 0x80B3EDE4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EDE4:
    ctx->pc = 0x80B3EDE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EDE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3EDE4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EDE8:
    ctx->pc = 0x80B3EDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDE8u)) return;
    // 80B3EDE8: addi    r4, r4, 3120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3120);

label_80B3EDEC:
    ctx->pc = 0x80B3EDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EDEC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3EDECu)) return;
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
label_80B3EDF0:
    ctx->pc = 0x80B3EDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDF0u)) return;
    // 80B3EDF0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EDF4:
    ctx->pc = 0x80B3EDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDF4u)) return;
    // 80B3EDF4: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B3EDF8:
    ctx->pc = 0x80B3EDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EDF8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3EDF8u)) return;
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
label_80B3EDFC:
    ctx->pc = 0x80B3EDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EDFCu)) return;
    // 80B3EDFC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3EE00:
    ctx->pc = 0x80B3EE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE00u)) return;
    // 80B3EE00: addi    r4, r4, 3128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3128);

label_80B3EE04:
    ctx->pc = 0x80B3EE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EE04: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3EE04u)) return;
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
label_80B3EE08:
    ctx->pc = 0x80B3EE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE08u)) return;
    // 80B3EE08: bl      0x8045EF2C
    {
            ctx->lr = 0x80B3EE0Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B3EE0C:
    ctx->pc = 0x80B3EE0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EE0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE10:
    ctx->pc = 0x80B3EE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE10u)) return;
    // 80B3EE10: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE14u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE14:
    ctx->pc = 0x80B3EE14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3EE14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3EE18:
    ctx->pc = 0x80B3EE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE18u)) return;
    // 80B3EE18: li      r5, 25611
    ctx->gpr[5] = (u32)(s32)(25611);

label_80B3EE1C:
    ctx->pc = 0x80B3EE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE1Cu)) return;
    // 80B3EE1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3EE20:
    ctx->pc = 0x80B3EE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE20u)) return;
    // 80B3EE20: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3EE24u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3EE24:
    ctx->pc = 0x80B3EE24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EE24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE28:
    ctx->pc = 0x80B3EE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE28u)) return;
    // 80B3EE28: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE2C:
    ctx->pc = 0x80B3EE2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3EE2C: lis     r4, -28601
    ctx->gpr[4] = ((u32)(s32)(-28601) << 16);

label_80B3EE30:
    ctx->pc = 0x80B3EE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE30u)) return;
    // 80B3EE30: addi    r4, r4, 9936
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9936);

label_80B3EE34:
    ctx->pc = 0x80B3EE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE34u)) return;
    // 80B3EE34: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B3EE38:
    ctx->pc = 0x80B3EE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE38u)) return;
    // 80B3EE38: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B3EE3C:
    ctx->pc = 0x80B3EE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE3Cu)) return;
    // 80B3EE3C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EE40:
    ctx->pc = 0x80B3EE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE40u)) return;
    // 80B3EE40: addi    r6, r6, 3132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3132);

label_80B3EE44:
    ctx->pc = 0x80B3EE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EE44: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3EE44u)) return;
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
label_80B3EE48:
    ctx->pc = 0x80B3EE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE48u)) return;
    // 80B3EE48: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3EE4C:
    ctx->pc = 0x80B3EE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE4Cu)) return;
    // 80B3EE4C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3EE50:
    ctx->pc = 0x80B3EE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE50u)) return;
    // 80B3EE50: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3EE54u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3EE54:
    ctx->pc = 0x80B3EE54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EE54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE58:
    ctx->pc = 0x80B3EE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE58u)) return;
    // 80B3EE58: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE5Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE5C:
    ctx->pc = 0x80B3EE5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EE5C: lwz     r27, 32(r3)
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
label_80B3EE60:
    ctx->pc = 0x80B3EE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE60u)) return;
    // 80B3EE60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE64:
    ctx->pc = 0x80B3EE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE64u)) return;
    // 80B3EE64: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE68:
    ctx->pc = 0x80B3EE68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EE68: lwz     r3, 32(r3)
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
label_80B3EE6C:
    ctx->pc = 0x80B3EE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EE6C: lwz     r0, 24(r3)
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
label_80B3EE70:
    ctx->pc = 0x80B3EE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE70u)) return;
    // 80B3EE70: subfic  r31, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80B3EE74:
    ctx->pc = 0x80B3EE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE74u)) return;
    // 80B3EE74: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE78:
    ctx->pc = 0x80B3EE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE78u)) return;
    // 80B3EE78: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE7Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE7C:
    ctx->pc = 0x80B3EE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EE7C: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EE80:
    ctx->pc = 0x80B3EE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE80u)) return;
    // 80B3EE80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE84:
    ctx->pc = 0x80B3EE84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE84u)) return;
    // 80B3EE84: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE88u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE88:
    ctx->pc = 0x80B3EE88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EE88: lwz     r29, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EE8C:
    ctx->pc = 0x80B3EE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE8Cu)) return;
    // 80B3EE8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE90:
    ctx->pc = 0x80B3EE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE90u)) return;
    // 80B3EE90: bl      0x8045F220
    {
            ctx->lr = 0x80B3EE94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EE94:
    ctx->pc = 0x80B3EE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EE94: lwz     r28, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EE98:
    ctx->pc = 0x80B3EE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE98u)) return;
    // 80B3EE98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EE9C:
    ctx->pc = 0x80B3EE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EE9Cu)) return;
    // 80B3EE9C: bl      0x8045F220
    {
            ctx->lr = 0x80B3EEA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EEA0:
    ctx->pc = 0x80B3EEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B3EEA0: lwz     r4, 32(r3)
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
label_80B3EEA4:
    ctx->pc = 0x80B3EEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEA4u)) return;
    // 80B3EEA4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EEA8:
    ctx->pc = 0x80B3EEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEA8u)) return;
    // 80B3EEA8: addi    r3, r3, 29184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29184);

label_80B3EEAC:
    ctx->pc = 0x80B3EEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EEAC: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3EEACu)) return;
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
label_80B3EEB0:
    ctx->pc = 0x80B3EEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EEB0: lfs     f2, 36(r28)
    if (!ppc_fp_available_inline(ctx, 0x80B3EEB0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
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
label_80B3EEB4:
    ctx->pc = 0x80B3EEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EEB4: lfs     f3, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80B3EEB4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
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
label_80B3EEB8:
    ctx->pc = 0x80B3EEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EEB8: lwz     r4, 20(r30)
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
label_80B3EEBC:
    ctx->pc = 0x80B3EEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEBCu)) return;
    // 80B3EEBC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3EEC0:
    ctx->pc = 0x80B3EEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EEC0: lwz     r6, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EEC4:
    ctx->pc = 0x80B3EEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEC4u)) return;
    // 80B3EEC4: bl      0x8045F170
    {
            ctx->lr = 0x80B3EEC8u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80B3EEC8:
    ctx->pc = 0x80B3EEC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EEC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EEC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EECC:
    ctx->pc = 0x80B3EECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EECCu)) return;
    // 80B3EECC: bl      0x8045F220
    {
            ctx->lr = 0x80B3EED0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EED0:
    ctx->pc = 0x80B3EED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EED0: lwz     r28, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EED4:
    ctx->pc = 0x80B3EED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EED4u)) return;
    // 80B3EED4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EED8:
    ctx->pc = 0x80B3EED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EED8u)) return;
    // 80B3EED8: bl      0x8045F220
    {
            ctx->lr = 0x80B3EEDCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EEDC:
    ctx->pc = 0x80B3EEDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EEDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EEDC: lwz     r3, 32(r3)
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
label_80B3EEE0:
    ctx->pc = 0x80B3EEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EEE0: lwz     r0, 24(r3)
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
label_80B3EEE4:
    ctx->pc = 0x80B3EEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEE4u)) return;
    // 80B3EEE4: subfic  r29, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80B3EEE8:
    ctx->pc = 0x80B3EEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEE8u)) return;
    // 80B3EEE8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EEEC:
    ctx->pc = 0x80B3EEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEECu)) return;
    // 80B3EEEC: bl      0x8045F220
    {
            ctx->lr = 0x80B3EEF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EEF0:
    ctx->pc = 0x80B3EEF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EEF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EEF0: lwz     r31, 32(r3)
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
label_80B3EEF4:
    ctx->pc = 0x80B3EEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEF4u)) return;
    // 80B3EEF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EEF8:
    ctx->pc = 0x80B3EEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EEF8u)) return;
    // 80B3EEF8: bl      0x8045F220
    {
            ctx->lr = 0x80B3EEFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EEFC:
    ctx->pc = 0x80B3EEFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EEFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EEFC: lwz     r3, 32(r3)
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
label_80B3EF00:
    ctx->pc = 0x80B3EF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3EF00: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3EF00u)) return;
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
label_80B3EF04:
    ctx->pc = 0x80B3EF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF04u)) return;
    // 80B3EF04: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EF08:
    ctx->pc = 0x80B3EF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF08u)) return;
    // 80B3EF08: addi    r3, r3, 3140
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3140);

label_80B3EF0C:
    ctx->pc = 0x80B3EF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EF0C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3EF0Cu)) return;
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
label_80B3EF10:
    ctx->pc = 0x80B3EF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF10u)) return;
    // 80B3EF10: fsubs   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80B3EF10u)) return;
    ppc_fsubs(ctx, 31, 1, 0);

label_80B3EF14:
    ctx->pc = 0x80B3EF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF14u)) return;
    // 80B3EF14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EF18:
    ctx->pc = 0x80B3EF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF18u)) return;
    // 80B3EF18: bl      0x8045F220
    {
            ctx->lr = 0x80B3EF1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EF1C:
    ctx->pc = 0x80B3EF1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EF1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3EF1C: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EF20:
    ctx->pc = 0x80B3EF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF20u)) return;
    // 80B3EF20: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EF24:
    ctx->pc = 0x80B3EF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF24u)) return;
    // 80B3EF24: bl      0x8045F220
    {
            ctx->lr = 0x80B3EF28u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EF28:
    ctx->pc = 0x80B3EF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80B3EF28: lwz     r3, 32(r3)
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
label_80B3EF2C:
    ctx->pc = 0x80B3EF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3EF2C: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3EF2Cu)) return;
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
label_80B3EF30:
    ctx->pc = 0x80B3EF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF30u)) return;
    // 80B3EF30: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3EF34:
    ctx->pc = 0x80B3EF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF34u)) return;
    // 80B3EF34: addi    r3, r3, 3136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3136);

label_80B3EF38:
    ctx->pc = 0x80B3EF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3EF38: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80B3EF38u)) return;
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
label_80B3EF3C:
    ctx->pc = 0x80B3EF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF3Cu)) return;
    // 80B3EF3C: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3EF3Cu)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_80B3EF40:
    ctx->pc = 0x80B3EF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF40u)) return;
    // 80B3EF40: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3EF44:
    ctx->pc = 0x80B3EF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF44u)) return;
    // 80B3EF44: lis     r4, -32677
    ctx->gpr[4] = ((u32)(s32)(-32677) << 16);

label_80B3EF48:
    ctx->pc = 0x80B3EF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF48u)) return;
    // 80B3EF48: addi    r4, r4, -3644
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3644);

label_80B3EF4C:
    ctx->pc = 0x80B3EF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3EF4C: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80B3EF4Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80B3EF50:
    ctx->pc = 0x80B3EF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF50u)) return;
    // 80B3EF50: fmr    f3, f31
    if (!ppc_fp_available_inline(ctx, 0x80B3EF50u)) return;
    ctx->fpr[3] = ctx->fpr[31];

label_80B3EF54:
    ctx->pc = 0x80B3EF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EF54: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EF58:
    ctx->pc = 0x80B3EF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF58u)) return;
    // 80B3EF58: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B3EF5C:
    ctx->pc = 0x80B3EF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EF5C: lwz     r7, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3EF60:
    ctx->pc = 0x80B3EF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF60u)) return;
    // 80B3EF60: bl      0x8045ED84
    {
            ctx->lr = 0x80B3EF64u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80B3EF64:
    ctx->pc = 0x80B3EF64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EF64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EF64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3EF68:
    ctx->pc = 0x80B3EF68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF68u)) return;
    // 80B3EF68: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3EF6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3EF6C:
    ctx->pc = 0x80B3EF6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EF6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EF6C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3EF70:
    ctx->pc = 0x80B3EF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF70u)) return;
    // 80B3EF70: bl      0x8045F220
    {
            ctx->lr = 0x80B3EF74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EF74:
    ctx->pc = 0x80B3EF74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EF74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3EF74: lis     r4, -28586
    ctx->gpr[4] = ((u32)(s32)(-28586) << 16);

label_80B3EF78:
    ctx->pc = 0x80B3EF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF78u)) return;
    // 80B3EF78: addi    r4, r4, -20508
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20508);

label_80B3EF7C:
    ctx->pc = 0x80B3EF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF7Cu)) return;
    // 80B3EF7C: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B3EF80:
    ctx->pc = 0x80B3EF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF80u)) return;
    // 80B3EF80: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B3EF84:
    ctx->pc = 0x80B3EF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF84u)) return;
    // 80B3EF84: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3EF88:
    ctx->pc = 0x80B3EF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF88u)) return;
    // 80B3EF88: addi    r6, r6, 3132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3132);

label_80B3EF8C:
    ctx->pc = 0x80B3EF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3EF8C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3EF8Cu)) return;
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
label_80B3EF90:
    ctx->pc = 0x80B3EF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF90u)) return;
    // 80B3EF90: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3EF94:
    ctx->pc = 0x80B3EF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF94u)) return;
    // 80B3EF94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3EF98:
    ctx->pc = 0x80B3EF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EF98u)) return;
    // 80B3EF98: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3EF9Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3EF9C:
    ctx->pc = 0x80B3EF9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EF9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3EF9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3EFA0:
    ctx->pc = 0x80B3EFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFA0u)) return;
    // 80B3EFA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3EFA4:
    ctx->pc = 0x80B3EFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFA4u)) return;
    // 80B3EFA4: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3EFA8:
    ctx->pc = 0x80B3EFA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFA8u)) return;
    // 80B3EFA8: addi    r5, r6, -11776
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-11776);

label_80B3EFAC:
    ctx->pc = 0x80B3EFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFACu)) return;
    // 80B3EFAC: addi    r6, r6, -31488
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31488);

label_80B3EFB0:
    ctx->pc = 0x80B3EFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFB0u)) return;
    // 80B3EFB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3EFB4:
    ctx->pc = 0x80B3EFB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFB4u)) return;
    // 80B3EFB4: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3EFB8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3EFB8:
    ctx->pc = 0x80B3EFB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EFB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3EFB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3EFBC:
    ctx->pc = 0x80B3EFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFBCu)) return;
    // 80B3EFBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3EFC0:
    ctx->pc = 0x80B3EFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFC0u)) return;
    // 80B3EFC0: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3EFC4:
    ctx->pc = 0x80B3EFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFC4u)) return;
    // 80B3EFC4: addi    r5, r5, 3144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3144);

label_80B3EFC8:
    ctx->pc = 0x80B3EFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3EFC8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3EFC8u)) return;
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
label_80B3EFCC:
    ctx->pc = 0x80B3EFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFCCu)) return;
    // 80B3EFCC: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3EFD0:
    ctx->pc = 0x80B3EFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFD0u)) return;
    // 80B3EFD0: addi    r5, r5, 3148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3148);

label_80B3EFD4:
    ctx->pc = 0x80B3EFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3EFD4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3EFD4u)) return;
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
label_80B3EFD8:
    ctx->pc = 0x80B3EFD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFD8u)) return;
    // 80B3EFD8: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3EFDC:
    ctx->pc = 0x80B3EFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFDCu)) return;
    // 80B3EFDC: addi    r5, r5, 3152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3152);

label_80B3EFE0:
    ctx->pc = 0x80B3EFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3EFE0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3EFE0u)) return;
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
label_80B3EFE4:
    ctx->pc = 0x80B3EFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFE4u)) return;
    // 80B3EFE4: bl      0x8045C750
    {
            ctx->lr = 0x80B3EFE8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3EFE8:
    ctx->pc = 0x80B3EFE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EFE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3EFEC:
    ctx->pc = 0x80B3EFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFECu)) return;
    // 80B3EFEC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3EFF0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3EFF0:
    ctx->pc = 0x80B3EFF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EFF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3EFF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3EFF4:
    ctx->pc = 0x80B3EFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFF4u)) return;
    // 80B3EFF4: bl      0x8045F220
    {
            ctx->lr = 0x80B3EFF8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3EFF8:
    ctx->pc = 0x80B3EFF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3EFF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3EFF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3EFFC:
    ctx->pc = 0x80B3EFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3EFFCu)) return;
    // 80B3EFFC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F000:
    ctx->pc = 0x80B3F000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F000u)) return;
    // 80B3F000: bl      0x8045F220
    {
            ctx->lr = 0x80B3F004u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F004:
    ctx->pc = 0x80B3F004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F004: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3F008:
    ctx->pc = 0x80B3F008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F008u)) return;
    // 80B3F008: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F00C:
    ctx->pc = 0x80B3F00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F00Cu)) return;
    // 80B3F00C: addi    r5, r5, 3156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3156);

label_80B3F010:
    ctx->pc = 0x80B3F010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3F010: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F010u)) return;
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
label_80B3F014:
    ctx->pc = 0x80B3F014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F014u)) return;
    // 80B3F014: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F018:
    ctx->pc = 0x80B3F018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F018u)) return;
    // 80B3F018: addi    r5, r5, 3160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3160);

label_80B3F01C:
    ctx->pc = 0x80B3F01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F01C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F01Cu)) return;
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
label_80B3F020:
    ctx->pc = 0x80B3F020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F020u)) return;
    // 80B3F020: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3F020u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3F024:
    ctx->pc = 0x80B3F024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F024u)) return;
    // 80B3F024: bl      0x8045E734
    {
            ctx->lr = 0x80B3F028u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B3F028:
    ctx->pc = 0x80B3F028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F028: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F02C:
    ctx->pc = 0x80B3F02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F02Cu)) return;
    // 80B3F02C: bl      0x8045F220
    {
            ctx->lr = 0x80B3F030u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F030:
    ctx->pc = 0x80B3F030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F030: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3F034:
    ctx->pc = 0x80B3F034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F034u)) return;
    // 80B3F034: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F038:
    ctx->pc = 0x80B3F038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F038u)) return;
    // 80B3F038: bl      0x8045F220
    {
            ctx->lr = 0x80B3F03Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F03C:
    ctx->pc = 0x80B3F03Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F03Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F03C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B3F040:
    ctx->pc = 0x80B3F040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F040u)) return;
    // 80B3F040: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F044:
    ctx->pc = 0x80B3F044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F044u)) return;
    // 80B3F044: addi    r5, r5, 3156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3156);

label_80B3F048:
    ctx->pc = 0x80B3F048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3F048: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F048u)) return;
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
label_80B3F04C:
    ctx->pc = 0x80B3F04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F04Cu)) return;
    // 80B3F04C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F050:
    ctx->pc = 0x80B3F050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F050u)) return;
    // 80B3F050: addi    r5, r5, 3160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3160);

label_80B3F054:
    ctx->pc = 0x80B3F054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F054: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F054u)) return;
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
label_80B3F058:
    ctx->pc = 0x80B3F058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F058u)) return;
    // 80B3F058: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3F058u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3F05C:
    ctx->pc = 0x80B3F05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F05Cu)) return;
    // 80B3F05C: bl      0x8045E734
    {
            ctx->lr = 0x80B3F060u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B3F060:
    ctx->pc = 0x80B3F060u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F060u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F060: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F064:
    ctx->pc = 0x80B3F064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F064u)) return;
    // 80B3F064: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F068u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F068:
    ctx->pc = 0x80B3F068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F068: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F06C:
    ctx->pc = 0x80B3F06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F06Cu)) return;
    // 80B3F06C: bl      0x8045F220
    {
            ctx->lr = 0x80B3F070u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F070:
    ctx->pc = 0x80B3F070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3F070: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F074:
    ctx->pc = 0x80B3F074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F074u)) return;
    // 80B3F074: addi    r4, r4, 3164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3164);

label_80B3F078:
    ctx->pc = 0x80B3F078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3F078: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F078u)) return;
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
label_80B3F07C:
    ctx->pc = 0x80B3F07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F07Cu)) return;
    // 80B3F07C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F080:
    ctx->pc = 0x80B3F080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F080u)) return;
    // 80B3F080: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B3F084:
    ctx->pc = 0x80B3F084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3F084: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F084u)) return;
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
label_80B3F088:
    ctx->pc = 0x80B3F088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F088u)) return;
    // 80B3F088: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F08C:
    ctx->pc = 0x80B3F08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F08Cu)) return;
    // 80B3F08C: addi    r4, r4, 3168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3168);

label_80B3F090:
    ctx->pc = 0x80B3F090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F090: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F090u)) return;
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
label_80B3F094:
    ctx->pc = 0x80B3F094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F094u)) return;
    // 80B3F094: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F098:
    ctx->pc = 0x80B3F098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F098u)) return;
    // 80B3F098: addi    r4, r4, 3172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3172);

label_80B3F09C:
    ctx->pc = 0x80B3F09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F09C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F09Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F0A0:
    ctx->pc = 0x80B3F0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0A0u)) return;
    // 80B3F0A0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F0A4:
    ctx->pc = 0x80B3F0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0A4u)) return;
    // 80B3F0A4: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_80B3F0A8:
    ctx->pc = 0x80B3F0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F0A8: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F0A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F0AC:
    ctx->pc = 0x80B3F0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0ACu)) return;
    // 80B3F0AC: bl      0x8045E570
    {
            ctx->lr = 0x80B3F0B0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B3F0B0:
    ctx->pc = 0x80B3F0B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F0B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F0B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F0B4:
    ctx->pc = 0x80B3F0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0B4u)) return;
    // 80B3F0B4: bl      0x8045F220
    {
            ctx->lr = 0x80B3F0B8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F0B8:
    ctx->pc = 0x80B3F0B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F0B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3F0B8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F0BC:
    ctx->pc = 0x80B3F0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0BCu)) return;
    // 80B3F0BC: addi    r4, r4, 3180
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3180);

label_80B3F0C0:
    ctx->pc = 0x80B3F0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3F0C0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F0C0u)) return;
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
label_80B3F0C4:
    ctx->pc = 0x80B3F0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0C4u)) return;
    // 80B3F0C4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F0C8:
    ctx->pc = 0x80B3F0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0C8u)) return;
    // 80B3F0C8: addi    r4, r4, 3184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3184);

label_80B3F0CC:
    ctx->pc = 0x80B3F0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3F0CC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F0CCu)) return;
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
label_80B3F0D0:
    ctx->pc = 0x80B3F0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0D0u)) return;
    // 80B3F0D0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F0D4:
    ctx->pc = 0x80B3F0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0D4u)) return;
    // 80B3F0D4: addi    r4, r4, 3188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3188);

label_80B3F0D8:
    ctx->pc = 0x80B3F0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F0D8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F0D8u)) return;
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
label_80B3F0DC:
    ctx->pc = 0x80B3F0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0DCu)) return;
    // 80B3F0DC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F0E0:
    ctx->pc = 0x80B3F0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0E0u)) return;
    // 80B3F0E0: addi    r4, r4, 3192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3192);

label_80B3F0E4:
    ctx->pc = 0x80B3F0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F0E4: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F0E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F0E8:
    ctx->pc = 0x80B3F0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0E8u)) return;
    // 80B3F0E8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F0EC:
    ctx->pc = 0x80B3F0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0ECu)) return;
    // 80B3F0EC: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_80B3F0F0:
    ctx->pc = 0x80B3F0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F0F0: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F0F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F0F4:
    ctx->pc = 0x80B3F0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0F4u)) return;
    // 80B3F0F4: bl      0x8045E570
    {
            ctx->lr = 0x80B3F0F8u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B3F0F8:
    ctx->pc = 0x80B3F0F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F0F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F0F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F0FC:
    ctx->pc = 0x80B3F0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F0FCu)) return;
    // 80B3F0FC: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B3F100:
    ctx->pc = 0x80B3F100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F100u)) return;
    // 80B3F100: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3F104:
    ctx->pc = 0x80B3F104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F104u)) return;
    // 80B3F104: addi    r5, r6, -11776
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-11776);

label_80B3F108:
    ctx->pc = 0x80B3F108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F108u)) return;
    // 80B3F108: addi    r6, r6, -31488
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31488);

label_80B3F10C:
    ctx->pc = 0x80B3F10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F10Cu)) return;
    // 80B3F10C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F110:
    ctx->pc = 0x80B3F110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F110u)) return;
    // 80B3F110: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F114u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F114:
    ctx->pc = 0x80B3F114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F114: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F118:
    ctx->pc = 0x80B3F118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F118u)) return;
    // 80B3F118: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B3F11C:
    ctx->pc = 0x80B3F11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F11Cu)) return;
    // 80B3F11C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F120:
    ctx->pc = 0x80B3F120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F120u)) return;
    // 80B3F120: addi    r5, r5, 3196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3196);

label_80B3F124:
    ctx->pc = 0x80B3F124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F124: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F124u)) return;
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
label_80B3F128:
    ctx->pc = 0x80B3F128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F128u)) return;
    // 80B3F128: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F12C:
    ctx->pc = 0x80B3F12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F12Cu)) return;
    // 80B3F12C: addi    r5, r5, 3200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3200);

label_80B3F130:
    ctx->pc = 0x80B3F130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F130: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F130u)) return;
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
label_80B3F134:
    ctx->pc = 0x80B3F134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F134u)) return;
    // 80B3F134: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F138:
    ctx->pc = 0x80B3F138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F138u)) return;
    // 80B3F138: addi    r5, r5, 3204
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3204);

label_80B3F13C:
    ctx->pc = 0x80B3F13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F13C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F13Cu)) return;
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
label_80B3F140:
    ctx->pc = 0x80B3F140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F140u)) return;
    // 80B3F140: bl      0x8045C750
    {
            ctx->lr = 0x80B3F144u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F144:
    ctx->pc = 0x80B3F144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F144: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80B3F148:
    ctx->pc = 0x80B3F148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F148u)) return;
    // 80B3F148: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F14Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F14C:
    ctx->pc = 0x80B3F14Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F14Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F14C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F150:
    ctx->pc = 0x80B3F150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F150u)) return;
    // 80B3F150: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F154:
    ctx->pc = 0x80B3F154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F154u)) return;
    // 80B3F154: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3F158:
    ctx->pc = 0x80B3F158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F158u)) return;
    // 80B3F158: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80B3F15C:
    ctx->pc = 0x80B3F15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F15Cu)) return;
    // 80B3F15C: addi    r6, r6, -18432
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18432);

label_80B3F160:
    ctx->pc = 0x80B3F160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F160u)) return;
    // 80B3F160: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F164:
    ctx->pc = 0x80B3F164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F164u)) return;
    // 80B3F164: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F168u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F168:
    ctx->pc = 0x80B3F168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F168: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F16C:
    ctx->pc = 0x80B3F16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F16Cu)) return;
    // 80B3F16C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F170:
    ctx->pc = 0x80B3F170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F170u)) return;
    // 80B3F170: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F174:
    ctx->pc = 0x80B3F174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F174u)) return;
    // 80B3F174: addi    r5, r5, 3208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3208);

label_80B3F178:
    ctx->pc = 0x80B3F178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F178: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F178u)) return;
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
label_80B3F17C:
    ctx->pc = 0x80B3F17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F17Cu)) return;
    // 80B3F17C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F180:
    ctx->pc = 0x80B3F180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F180u)) return;
    // 80B3F180: addi    r5, r5, 3212
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3212);

label_80B3F184:
    ctx->pc = 0x80B3F184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F184: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F184u)) return;
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
label_80B3F188:
    ctx->pc = 0x80B3F188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F188u)) return;
    // 80B3F188: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F18C:
    ctx->pc = 0x80B3F18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F18Cu)) return;
    // 80B3F18C: addi    r5, r5, 3216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3216);

label_80B3F190:
    ctx->pc = 0x80B3F190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F190: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F190u)) return;
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
label_80B3F194:
    ctx->pc = 0x80B3F194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F194u)) return;
    // 80B3F194: bl      0x8045C750
    {
            ctx->lr = 0x80B3F198u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F198:
    ctx->pc = 0x80B3F198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F198: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F19C:
    ctx->pc = 0x80B3F19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F19Cu)) return;
    // 80B3F19C: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80B3F1A0:
    ctx->pc = 0x80B3F1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1A0u)) return;
    // 80B3F1A0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3F1A4:
    ctx->pc = 0x80B3F1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1A4u)) return;
    // 80B3F1A4: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80B3F1A8:
    ctx->pc = 0x80B3F1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1A8u)) return;
    // 80B3F1A8: addi    r6, r6, -11264
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11264);

label_80B3F1AC:
    ctx->pc = 0x80B3F1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1ACu)) return;
    // 80B3F1AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F1B0:
    ctx->pc = 0x80B3F1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1B0u)) return;
    // 80B3F1B0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F1B4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F1B4:
    ctx->pc = 0x80B3F1B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F1B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F1B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F1B8:
    ctx->pc = 0x80B3F1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1B8u)) return;
    // 80B3F1B8: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80B3F1BC:
    ctx->pc = 0x80B3F1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1BCu)) return;
    // 80B3F1BC: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F1C0:
    ctx->pc = 0x80B3F1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1C0u)) return;
    // 80B3F1C0: addi    r5, r5, 3220
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3220);

label_80B3F1C4:
    ctx->pc = 0x80B3F1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F1C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F1C4u)) return;
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
label_80B3F1C8:
    ctx->pc = 0x80B3F1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1C8u)) return;
    // 80B3F1C8: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F1CC:
    ctx->pc = 0x80B3F1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1CCu)) return;
    // 80B3F1CC: addi    r5, r5, 3224
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3224);

label_80B3F1D0:
    ctx->pc = 0x80B3F1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F1D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F1D0u)) return;
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
label_80B3F1D4:
    ctx->pc = 0x80B3F1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1D4u)) return;
    // 80B3F1D4: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F1D8:
    ctx->pc = 0x80B3F1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1D8u)) return;
    // 80B3F1D8: addi    r5, r5, 3228
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3228);

label_80B3F1DC:
    ctx->pc = 0x80B3F1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F1DC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F1DCu)) return;
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
label_80B3F1E0:
    ctx->pc = 0x80B3F1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1E0u)) return;
    // 80B3F1E0: bl      0x8045C750
    {
            ctx->lr = 0x80B3F1E4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F1E4:
    ctx->pc = 0x80B3F1E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F1E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F1E4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B3F1E8:
    ctx->pc = 0x80B3F1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1E8u)) return;
    // 80B3F1E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F1ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F1EC:
    ctx->pc = 0x80B3F1ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F1ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F1EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F1F0:
    ctx->pc = 0x80B3F1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1F0u)) return;
    // 80B3F1F0: bl      0x8045F220
    {
            ctx->lr = 0x80B3F1F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F1F4:
    ctx->pc = 0x80B3F1F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F1F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F1F4: bl      0x8045E6B8
    {
            ctx->lr = 0x80B3F1F8u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80B3F1F8:
    ctx->pc = 0x80B3F1F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F1F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F1F8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F1FC:
    ctx->pc = 0x80B3F1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F1FCu)) return;
    // 80B3F1FC: bl      0x8045F220
    {
            ctx->lr = 0x80B3F200u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F200:
    ctx->pc = 0x80B3F200u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F200u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F200: bl      0x8045E6B8
    {
            ctx->lr = 0x80B3F204u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80B3F204:
    ctx->pc = 0x80B3F204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F204: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F208:
    ctx->pc = 0x80B3F208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F208u)) return;
    // 80B3F208: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F20Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F20C:
    ctx->pc = 0x80B3F20Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F20Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F20C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F210:
    ctx->pc = 0x80B3F210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F210u)) return;
    // 80B3F210: bl      0x8045F220
    {
            ctx->lr = 0x80B3F214u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F214:
    ctx->pc = 0x80B3F214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3F214: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F218:
    ctx->pc = 0x80B3F218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F218u)) return;
    // 80B3F218: addi    r4, r4, 3164
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3164);

label_80B3F21C:
    ctx->pc = 0x80B3F21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3F21C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F21Cu)) return;
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
label_80B3F220:
    ctx->pc = 0x80B3F220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F220u)) return;
    // 80B3F220: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F224:
    ctx->pc = 0x80B3F224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F224u)) return;
    // 80B3F224: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B3F228:
    ctx->pc = 0x80B3F228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3F228: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F228u)) return;
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
label_80B3F22C:
    ctx->pc = 0x80B3F22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F22Cu)) return;
    // 80B3F22C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F230:
    ctx->pc = 0x80B3F230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F230u)) return;
    // 80B3F230: addi    r4, r4, 3168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3168);

label_80B3F234:
    ctx->pc = 0x80B3F234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F234: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F234u)) return;
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
label_80B3F238:
    ctx->pc = 0x80B3F238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F238u)) return;
    // 80B3F238: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F23C:
    ctx->pc = 0x80B3F23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F23Cu)) return;
    // 80B3F23C: addi    r4, r4, 3172
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3172);

label_80B3F240:
    ctx->pc = 0x80B3F240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F240: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F240u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F244:
    ctx->pc = 0x80B3F244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F244u)) return;
    // 80B3F244: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F248:
    ctx->pc = 0x80B3F248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F248u)) return;
    // 80B3F248: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_80B3F24C:
    ctx->pc = 0x80B3F24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F24C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F24Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F250:
    ctx->pc = 0x80B3F250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F250u)) return;
    // 80B3F250: bl      0x8045E570
    {
            ctx->lr = 0x80B3F254u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B3F254:
    ctx->pc = 0x80B3F254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F258:
    ctx->pc = 0x80B3F258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F258u)) return;
    // 80B3F258: bl      0x8045F220
    {
            ctx->lr = 0x80B3F25Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F25C:
    ctx->pc = 0x80B3F25Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F25Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3F25C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F260:
    ctx->pc = 0x80B3F260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F260u)) return;
    // 80B3F260: addi    r4, r4, 3232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3232);

label_80B3F264:
    ctx->pc = 0x80B3F264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3F264: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F264u)) return;
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
label_80B3F268:
    ctx->pc = 0x80B3F268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F268u)) return;
    // 80B3F268: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F26C:
    ctx->pc = 0x80B3F26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F26Cu)) return;
    // 80B3F26C: addi    r4, r4, 3184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3184);

label_80B3F270:
    ctx->pc = 0x80B3F270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3F270: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F270u)) return;
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
label_80B3F274:
    ctx->pc = 0x80B3F274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F274u)) return;
    // 80B3F274: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F278:
    ctx->pc = 0x80B3F278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F278u)) return;
    // 80B3F278: addi    r4, r4, 3236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3236);

label_80B3F27C:
    ctx->pc = 0x80B3F27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F27Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F27C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F27Cu)) return;
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
label_80B3F280:
    ctx->pc = 0x80B3F280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F280u)) return;
    // 80B3F280: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F284:
    ctx->pc = 0x80B3F284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F284u)) return;
    // 80B3F284: addi    r4, r4, 3192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3192);

label_80B3F288:
    ctx->pc = 0x80B3F288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F288: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F288u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F28C:
    ctx->pc = 0x80B3F28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F28Cu)) return;
    // 80B3F28C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F290:
    ctx->pc = 0x80B3F290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F290u)) return;
    // 80B3F290: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_80B3F294:
    ctx->pc = 0x80B3F294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F294: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F294u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F298:
    ctx->pc = 0x80B3F298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F298u)) return;
    // 80B3F298: bl      0x8045E570
    {
            ctx->lr = 0x80B3F29Cu;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B3F29C:
    ctx->pc = 0x80B3F29Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F29Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F29C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F2A0:
    ctx->pc = 0x80B3F2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2A0u)) return;
    // 80B3F2A0: bl      0x8045F220
    {
            ctx->lr = 0x80B3F2A4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F2A4:
    ctx->pc = 0x80B3F2A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F2A4: bl      0x8045EB8C
    {
            ctx->lr = 0x80B3F2A8u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B3F2A8:
    ctx->pc = 0x80B3F2A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F2A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F2AC:
    ctx->pc = 0x80B3F2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2ACu)) return;
    // 80B3F2AC: bl      0x8045F220
    {
            ctx->lr = 0x80B3F2B0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F2B0:
    ctx->pc = 0x80B3F2B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F2B0: bl      0x8045EB8C
    {
            ctx->lr = 0x80B3F2B4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B3F2B4:
    ctx->pc = 0x80B3F2B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F2B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F2B8:
    ctx->pc = 0x80B3F2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2B8u)) return;
    // 80B3F2B8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F2BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F2BC:
    ctx->pc = 0x80B3F2BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F2BC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F2C0:
    ctx->pc = 0x80B3F2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2C0u)) return;
    // 80B3F2C0: addi    r4, r4, 7356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7356);

label_80B3F2C4:
    ctx->pc = 0x80B3F2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2C4u)) return;
    // 80B3F2C4: bl      0x8045C060
    {
            ctx->lr = 0x80B3F2C8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F2C8:
    ctx->pc = 0x80B3F2C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F2C8: li      r3, 625
    ctx->gpr[3] = (u32)(s32)(625);

label_80B3F2CC:
    ctx->pc = 0x80B3F2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2CCu)) return;
    // 80B3F2CC: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F2D0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F2D0:
    ctx->pc = 0x80B3F2D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F2D0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F2D4:
    ctx->pc = 0x80B3F2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2D4u)) return;
    // 80B3F2D4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F2D8:
    ctx->pc = 0x80B3F2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F2D8: lwz     r0, 0(r3)
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
label_80B3F2DC:
    ctx->pc = 0x80B3F2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2DCu)) return;
    // 80B3F2DC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F2E0:
    ctx->pc = 0x80B3F2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2E0u)) return;
    // 80B3F2E0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F2E4:
    ctx->pc = 0x80B3F2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2E4u)) return;
    // 80B3F2E4: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F2E8:
    ctx->pc = 0x80B3F2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F2E8: lwzx    r3, r3, r0
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
label_80B3F2EC:
    ctx->pc = 0x80B3F2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F2EC: lwz     r3, 0(r3)
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
label_80B3F2F0:
    ctx->pc = 0x80B3F2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2F0u)) return;
    // 80B3F2F0: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F2F4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F2F4:
    ctx->pc = 0x80B3F2F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F2F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F2F8:
    ctx->pc = 0x80B3F2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F2F8u)) return;
    // 80B3F2F8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F2FCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F2FC:
    ctx->pc = 0x80B3F2FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F2FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F2FC: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F300u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F300:
    ctx->pc = 0x80B3F300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F300: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F304:
    ctx->pc = 0x80B3F304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F304u)) return;
    // 80B3F304: bl      0x8045F220
    {
            ctx->lr = 0x80B3F308u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F308:
    ctx->pc = 0x80B3F308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F308: bl      0x8045C034
    {
            ctx->lr = 0x80B3F30Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F30C:
    ctx->pc = 0x80B3F30Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F30Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F30C: bl      0x8045F300
    {
            ctx->lr = 0x80B3F310u;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80B3F310:
    ctx->pc = 0x80B3F310u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F310u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F310: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B3F314:
    ctx->pc = 0x80B3F314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F314u)) return;
    // 80B3F314: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F318u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F318:
    ctx->pc = 0x80B3F318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F318: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F31C:
    ctx->pc = 0x80B3F31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F31Cu)) return;
    // 80B3F31C: bl      0x8045F220
    {
            ctx->lr = 0x80B3F320u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F320:
    ctx->pc = 0x80B3F320u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F320u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3F320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F324:
    ctx->pc = 0x80B3F324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F324u)) return;
    // 80B3F324: li      r5, 29184
    ctx->gpr[5] = (u32)(s32)(29184);

label_80B3F328:
    ctx->pc = 0x80B3F328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F328u)) return;
    // 80B3F328: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3F32C:
    ctx->pc = 0x80B3F32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F32Cu)) return;
    // 80B3F32C: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3F330u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3F330:
    ctx->pc = 0x80B3F330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F330: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F334:
    ctx->pc = 0x80B3F334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F334u)) return;
    // 80B3F334: bl      0x8045F220
    {
            ctx->lr = 0x80B3F338u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F338:
    ctx->pc = 0x80B3F338u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F338u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F338: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F33C:
    ctx->pc = 0x80B3F33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F33Cu)) return;
    // 80B3F33C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B3F340:
    ctx->pc = 0x80B3F340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F340u)) return;
    // 80B3F340: addi    r5, r5, -5632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-5632);

label_80B3F344:
    ctx->pc = 0x80B3F344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F344u)) return;
    // 80B3F344: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3F348:
    ctx->pc = 0x80B3F348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F348u)) return;
    // 80B3F348: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3F34Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3F34C:
    ctx->pc = 0x80B3F34Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F34Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F34C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F350:
    ctx->pc = 0x80B3F350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F350u)) return;
    // 80B3F350: bl      0x8045F220
    {
            ctx->lr = 0x80B3F354u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F354:
    ctx->pc = 0x80B3F354u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F354u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F354: bl      0x8045E760
    {
            ctx->lr = 0x80B3F358u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80B3F358:
    ctx->pc = 0x80B3F358u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F358u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F358: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F35C:
    ctx->pc = 0x80B3F35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F35Cu)) return;
    // 80B3F35C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F360:
    ctx->pc = 0x80B3F360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F360u)) return;
    // 80B3F360: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3F364:
    ctx->pc = 0x80B3F364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F364u)) return;
    // 80B3F364: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80B3F368:
    ctx->pc = 0x80B3F368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F368u)) return;
    // 80B3F368: addi    r6, r6, -19456
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-19456);

label_80B3F36C:
    ctx->pc = 0x80B3F36Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F36Cu)) return;
    // 80B3F36C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F370:
    ctx->pc = 0x80B3F370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F370u)) return;
    // 80B3F370: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F374u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F374:
    ctx->pc = 0x80B3F374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F378:
    ctx->pc = 0x80B3F378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F378u)) return;
    // 80B3F378: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F37C:
    ctx->pc = 0x80B3F37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F37Cu)) return;
    // 80B3F37C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F380:
    ctx->pc = 0x80B3F380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F380u)) return;
    // 80B3F380: addi    r5, r5, 3240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3240);

label_80B3F384:
    ctx->pc = 0x80B3F384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F384: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F384u)) return;
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
label_80B3F388:
    ctx->pc = 0x80B3F388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F388u)) return;
    // 80B3F388: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F38C:
    ctx->pc = 0x80B3F38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F38Cu)) return;
    // 80B3F38C: addi    r5, r5, 3244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3244);

label_80B3F390:
    ctx->pc = 0x80B3F390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F390: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F390u)) return;
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
label_80B3F394:
    ctx->pc = 0x80B3F394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F394u)) return;
    // 80B3F394: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F398:
    ctx->pc = 0x80B3F398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F398u)) return;
    // 80B3F398: addi    r5, r5, 3248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3248);

label_80B3F39C:
    ctx->pc = 0x80B3F39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F39Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F39C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F39Cu)) return;
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
label_80B3F3A0:
    ctx->pc = 0x80B3F3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3A0u)) return;
    // 80B3F3A0: bl      0x8045C750
    {
            ctx->lr = 0x80B3F3A4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F3A4:
    ctx->pc = 0x80B3F3A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F3A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F3A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F3A8:
    ctx->pc = 0x80B3F3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3A8u)) return;
    // 80B3F3A8: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80B3F3AC:
    ctx->pc = 0x80B3F3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3ACu)) return;
    // 80B3F3AC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3F3B0:
    ctx->pc = 0x80B3F3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3B0u)) return;
    // 80B3F3B0: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80B3F3B4:
    ctx->pc = 0x80B3F3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3B4u)) return;
    // 80B3F3B4: addi    r6, r6, -14592
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-14592);

label_80B3F3B8:
    ctx->pc = 0x80B3F3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3B8u)) return;
    // 80B3F3B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F3BC:
    ctx->pc = 0x80B3F3BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3BCu)) return;
    // 80B3F3BC: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F3C0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F3C0:
    ctx->pc = 0x80B3F3C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F3C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F3C0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B3F3C4:
    ctx->pc = 0x80B3F3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3C4u)) return;
    // 80B3F3C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F3C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F3C8:
    ctx->pc = 0x80B3F3C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F3C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F3C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F3CC:
    ctx->pc = 0x80B3F3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3CCu)) return;
    // 80B3F3CC: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80B3F3D0:
    ctx->pc = 0x80B3F3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3D0u)) return;
    // 80B3F3D0: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F3D4:
    ctx->pc = 0x80B3F3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3D4u)) return;
    // 80B3F3D4: addi    r5, r5, 3252
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3252);

label_80B3F3D8:
    ctx->pc = 0x80B3F3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F3D8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F3D8u)) return;
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
label_80B3F3DC:
    ctx->pc = 0x80B3F3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3DCu)) return;
    // 80B3F3DC: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F3E0:
    ctx->pc = 0x80B3F3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3E0u)) return;
    // 80B3F3E0: addi    r5, r5, 3256
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3256);

label_80B3F3E4:
    ctx->pc = 0x80B3F3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F3E4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F3E4u)) return;
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
label_80B3F3E8:
    ctx->pc = 0x80B3F3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3E8u)) return;
    // 80B3F3E8: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F3EC:
    ctx->pc = 0x80B3F3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3ECu)) return;
    // 80B3F3EC: addi    r5, r5, 3260
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3260);

label_80B3F3F0:
    ctx->pc = 0x80B3F3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F3F0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F3F0u)) return;
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
label_80B3F3F4:
    ctx->pc = 0x80B3F3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3F4u)) return;
    // 80B3F3F4: bl      0x8045C750
    {
            ctx->lr = 0x80B3F3F8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F3F8:
    ctx->pc = 0x80B3F3F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F3F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F3F8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F3FC:
    ctx->pc = 0x80B3F3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F3FCu)) return;
    // 80B3F3FC: bl      0x8045F220
    {
            ctx->lr = 0x80B3F400u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F400:
    ctx->pc = 0x80B3F400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F400: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F404:
    ctx->pc = 0x80B3F404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F404u)) return;
    // 80B3F404: addi    r4, r4, 7360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7360);

label_80B3F408:
    ctx->pc = 0x80B3F408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F408u)) return;
    // 80B3F408: bl      0x8045C060
    {
            ctx->lr = 0x80B3F40Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F40C:
    ctx->pc = 0x80B3F40Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F40Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F40C: li      r3, 626
    ctx->gpr[3] = (u32)(s32)(626);

label_80B3F410:
    ctx->pc = 0x80B3F410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F410u)) return;
    // 80B3F410: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F414u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F414:
    ctx->pc = 0x80B3F414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F414: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F418:
    ctx->pc = 0x80B3F418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F418u)) return;
    // 80B3F418: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F41C:
    ctx->pc = 0x80B3F41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F41Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F41C: lwz     r0, 0(r3)
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
label_80B3F420:
    ctx->pc = 0x80B3F420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F420u)) return;
    // 80B3F420: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F424:
    ctx->pc = 0x80B3F424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F424u)) return;
    // 80B3F424: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F428:
    ctx->pc = 0x80B3F428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F428u)) return;
    // 80B3F428: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F42C:
    ctx->pc = 0x80B3F42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F42C: lwzx    r3, r3, r0
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
label_80B3F430:
    ctx->pc = 0x80B3F430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F430: lwz     r3, 4(r3)
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
label_80B3F434:
    ctx->pc = 0x80B3F434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F434u)) return;
    // 80B3F434: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F438u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F438:
    ctx->pc = 0x80B3F438u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F438u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F438: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F43C:
    ctx->pc = 0x80B3F43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F43Cu)) return;
    // 80B3F43C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F440u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F440:
    ctx->pc = 0x80B3F440u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F440u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F440: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F444u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F444:
    ctx->pc = 0x80B3F444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F444: li      r3, 627
    ctx->gpr[3] = (u32)(s32)(627);

label_80B3F448:
    ctx->pc = 0x80B3F448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F448u)) return;
    // 80B3F448: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F44Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F44C:
    ctx->pc = 0x80B3F44Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F44Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F44C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F450:
    ctx->pc = 0x80B3F450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F450u)) return;
    // 80B3F450: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F454:
    ctx->pc = 0x80B3F454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F454: lwz     r0, 0(r3)
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
label_80B3F458:
    ctx->pc = 0x80B3F458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F458u)) return;
    // 80B3F458: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F45C:
    ctx->pc = 0x80B3F45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F45Cu)) return;
    // 80B3F45C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F460:
    ctx->pc = 0x80B3F460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F460u)) return;
    // 80B3F460: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F464:
    ctx->pc = 0x80B3F464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F464: lwzx    r3, r3, r0
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
label_80B3F468:
    ctx->pc = 0x80B3F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F468: lwz     r3, 8(r3)
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
label_80B3F46C:
    ctx->pc = 0x80B3F46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F46Cu)) return;
    // 80B3F46C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F470u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F470:
    ctx->pc = 0x80B3F470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F470: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F474:
    ctx->pc = 0x80B3F474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F474u)) return;
    // 80B3F474: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F478u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F478:
    ctx->pc = 0x80B3F478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F478: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F47Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F47C:
    ctx->pc = 0x80B3F47Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F47Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F47C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F480:
    ctx->pc = 0x80B3F480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F480u)) return;
    // 80B3F480: bl      0x8045F220
    {
            ctx->lr = 0x80B3F484u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F484:
    ctx->pc = 0x80B3F484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F484: bl      0x8045C034
    {
            ctx->lr = 0x80B3F488u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F488:
    ctx->pc = 0x80B3F488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F488: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F48C:
    ctx->pc = 0x80B3F48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F48Cu)) return;
    // 80B3F48C: bl      0x8045F220
    {
            ctx->lr = 0x80B3F490u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F490:
    ctx->pc = 0x80B3F490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3F490: lis     r4, -28587
    ctx->gpr[4] = ((u32)(s32)(-28587) << 16);

label_80B3F494:
    ctx->pc = 0x80B3F494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F494u)) return;
    // 80B3F494: addi    r4, r4, 8236
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8236);

label_80B3F498:
    ctx->pc = 0x80B3F498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F498u)) return;
    // 80B3F498: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B3F49C:
    ctx->pc = 0x80B3F49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F49Cu)) return;
    // 80B3F49C: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B3F4A0:
    ctx->pc = 0x80B3F4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4A0u)) return;
    // 80B3F4A0: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3F4A4:
    ctx->pc = 0x80B3F4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4A4u)) return;
    // 80B3F4A4: addi    r6, r6, 3132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3132);

label_80B3F4A8:
    ctx->pc = 0x80B3F4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F4A8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3F4A8u)) return;
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
label_80B3F4AC:
    ctx->pc = 0x80B3F4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4ACu)) return;
    // 80B3F4AC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3F4B0:
    ctx->pc = 0x80B3F4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4B0u)) return;
    // 80B3F4B0: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80B3F4B4:
    ctx->pc = 0x80B3F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4B4u)) return;
    // 80B3F4B4: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3F4B8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3F4B8:
    ctx->pc = 0x80B3F4B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F4B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F4B8: bl      0x8045F32C
    {
            ctx->lr = 0x80B3F4BCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B3F4BC:
    ctx->pc = 0x80B3F4BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F4BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F4BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F4C0:
    ctx->pc = 0x80B3F4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4C0u)) return;
    // 80B3F4C0: bl      0x8045F220
    {
            ctx->lr = 0x80B3F4C4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F4C4:
    ctx->pc = 0x80B3F4C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F4C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3F4C4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F4C8:
    ctx->pc = 0x80B3F4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4C8u)) return;
    // 80B3F4C8: addi    r4, r4, 3232
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3232);

label_80B3F4CC:
    ctx->pc = 0x80B3F4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3F4CC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F4CCu)) return;
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
label_80B3F4D0:
    ctx->pc = 0x80B3F4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4D0u)) return;
    // 80B3F4D0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F4D4:
    ctx->pc = 0x80B3F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4D4u)) return;
    // 80B3F4D4: addi    r4, r4, 3184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3184);

label_80B3F4D8:
    ctx->pc = 0x80B3F4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3F4D8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F4D8u)) return;
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
label_80B3F4DC:
    ctx->pc = 0x80B3F4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4DCu)) return;
    // 80B3F4DC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F4E0:
    ctx->pc = 0x80B3F4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4E0u)) return;
    // 80B3F4E0: addi    r4, r4, 3264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3264);

label_80B3F4E4:
    ctx->pc = 0x80B3F4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F4E4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F4E4u)) return;
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
label_80B3F4E8:
    ctx->pc = 0x80B3F4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4E8u)) return;
    // 80B3F4E8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F4EC:
    ctx->pc = 0x80B3F4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4ECu)) return;
    // 80B3F4EC: addi    r4, r4, 3192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3192);

label_80B3F4F0:
    ctx->pc = 0x80B3F4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F4F0: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F4F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F4F4:
    ctx->pc = 0x80B3F4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4F4u)) return;
    // 80B3F4F4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F4F8:
    ctx->pc = 0x80B3F4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4F8u)) return;
    // 80B3F4F8: addi    r4, r4, 3268
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3268);

label_80B3F4FC:
    ctx->pc = 0x80B3F4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F4FC: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F4FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3F500:
    ctx->pc = 0x80B3F500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F500u)) return;
    // 80B3F500: bl      0x8045E570
    {
            ctx->lr = 0x80B3F504u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B3F504:
    ctx->pc = 0x80B3F504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F504: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F508:
    ctx->pc = 0x80B3F508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F508u)) return;
    // 80B3F508: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B3F50C:
    ctx->pc = 0x80B3F50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F50Cu)) return;
    // 80B3F50C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3F510:
    ctx->pc = 0x80B3F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F510u)) return;
    // 80B3F510: addi    r5, r6, -768
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-768);

label_80B3F514:
    ctx->pc = 0x80B3F514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F514u)) return;
    // 80B3F514: addi    r6, r6, -28416
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28416);

label_80B3F518:
    ctx->pc = 0x80B3F518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F518u)) return;
    // 80B3F518: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F51C:
    ctx->pc = 0x80B3F51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F51Cu)) return;
    // 80B3F51C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F520u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F520:
    ctx->pc = 0x80B3F520u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F520u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F520: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F524:
    ctx->pc = 0x80B3F524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F524u)) return;
    // 80B3F524: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_80B3F528:
    ctx->pc = 0x80B3F528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F528u)) return;
    // 80B3F528: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F52C:
    ctx->pc = 0x80B3F52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F52Cu)) return;
    // 80B3F52C: addi    r5, r5, 3272
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3272);

label_80B3F530:
    ctx->pc = 0x80B3F530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F530: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F530u)) return;
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
label_80B3F534:
    ctx->pc = 0x80B3F534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F534u)) return;
    // 80B3F534: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F538:
    ctx->pc = 0x80B3F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F538u)) return;
    // 80B3F538: addi    r5, r5, 3244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3244);

label_80B3F53C:
    ctx->pc = 0x80B3F53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F53C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F53Cu)) return;
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
label_80B3F540:
    ctx->pc = 0x80B3F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F540u)) return;
    // 80B3F540: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F544:
    ctx->pc = 0x80B3F544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F544u)) return;
    // 80B3F544: addi    r5, r5, 3276
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3276);

label_80B3F548:
    ctx->pc = 0x80B3F548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F548: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F548u)) return;
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
label_80B3F54C:
    ctx->pc = 0x80B3F54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F54Cu)) return;
    // 80B3F54C: bl      0x8045C750
    {
            ctx->lr = 0x80B3F550u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F550:
    ctx->pc = 0x80B3F550u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F550u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F550: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F554:
    ctx->pc = 0x80B3F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F554u)) return;
    // 80B3F554: bl      0x8045F220
    {
            ctx->lr = 0x80B3F558u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F558:
    ctx->pc = 0x80B3F558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F558: bl      0x8045E4DC
    {
            ctx->lr = 0x80B3F55Cu;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80B3F55C:
    ctx->pc = 0x80B3F55Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F55Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F55C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F560:
    ctx->pc = 0x80B3F560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F560u)) return;
    // 80B3F560: bl      0x8045F220
    {
            ctx->lr = 0x80B3F564u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F564:
    ctx->pc = 0x80B3F564u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F564u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3F564: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F568:
    ctx->pc = 0x80B3F568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F568u)) return;
    // 80B3F568: li      r5, 29184
    ctx->gpr[5] = (u32)(s32)(29184);

label_80B3F56C:
    ctx->pc = 0x80B3F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F56Cu)) return;
    // 80B3F56C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3F570:
    ctx->pc = 0x80B3F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F570u)) return;
    // 80B3F570: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3F574u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3F574:
    ctx->pc = 0x80B3F574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F574: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B3F578:
    ctx->pc = 0x80B3F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F578u)) return;
    // 80B3F578: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F57Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F57C:
    ctx->pc = 0x80B3F57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F57C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F580:
    ctx->pc = 0x80B3F580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F580u)) return;
    // 80B3F580: bl      0x8045F220
    {
            ctx->lr = 0x80B3F584u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F584:
    ctx->pc = 0x80B3F584u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F584u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F584: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F588:
    ctx->pc = 0x80B3F588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F588u)) return;
    // 80B3F588: addi    r4, r4, 7368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7368);

label_80B3F58C:
    ctx->pc = 0x80B3F58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F58Cu)) return;
    // 80B3F58C: bl      0x8045C060
    {
            ctx->lr = 0x80B3F590u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F590:
    ctx->pc = 0x80B3F590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F590: li      r3, 628
    ctx->gpr[3] = (u32)(s32)(628);

label_80B3F594:
    ctx->pc = 0x80B3F594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F594u)) return;
    // 80B3F594: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F598u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F598:
    ctx->pc = 0x80B3F598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F598: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F59C:
    ctx->pc = 0x80B3F59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F59Cu)) return;
    // 80B3F59C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F5A0:
    ctx->pc = 0x80B3F5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F5A0: lwz     r0, 0(r3)
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
label_80B3F5A4:
    ctx->pc = 0x80B3F5A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5A4u)) return;
    // 80B3F5A4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F5A8:
    ctx->pc = 0x80B3F5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5A8u)) return;
    // 80B3F5A8: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F5AC:
    ctx->pc = 0x80B3F5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5ACu)) return;
    // 80B3F5AC: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F5B0:
    ctx->pc = 0x80B3F5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F5B0: lwzx    r3, r3, r0
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
label_80B3F5B4:
    ctx->pc = 0x80B3F5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F5B4: lwz     r3, 12(r3)
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
label_80B3F5B8:
    ctx->pc = 0x80B3F5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5B8u)) return;
    // 80B3F5B8: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F5BCu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F5BC:
    ctx->pc = 0x80B3F5BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F5BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F5BC: li      r3, 75
    ctx->gpr[3] = (u32)(s32)(75);

label_80B3F5C0:
    ctx->pc = 0x80B3F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5C0u)) return;
    // 80B3F5C0: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F5C4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F5C4:
    ctx->pc = 0x80B3F5C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F5C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F5C4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F5C8:
    ctx->pc = 0x80B3F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5C8u)) return;
    // 80B3F5C8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F5CC:
    ctx->pc = 0x80B3F5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F5CC: lwz     r0, 0(r3)
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
label_80B3F5D0:
    ctx->pc = 0x80B3F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5D0u)) return;
    // 80B3F5D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F5D4:
    ctx->pc = 0x80B3F5D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5D4u)) return;
    // 80B3F5D4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F5D8:
    ctx->pc = 0x80B3F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5D8u)) return;
    // 80B3F5D8: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F5DC:
    ctx->pc = 0x80B3F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F5DC: lwzx    r3, r3, r0
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
label_80B3F5E0:
    ctx->pc = 0x80B3F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F5E0: lwz     r3, 16(r3)
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
label_80B3F5E4:
    ctx->pc = 0x80B3F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5E4u)) return;
    // 80B3F5E4: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F5E8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F5E8:
    ctx->pc = 0x80B3F5E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F5E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F5E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F5EC:
    ctx->pc = 0x80B3F5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5ECu)) return;
    // 80B3F5EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F5F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F5F0:
    ctx->pc = 0x80B3F5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F5F0: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F5F4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F5F4:
    ctx->pc = 0x80B3F5F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F5F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F5F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F5F8:
    ctx->pc = 0x80B3F5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F5F8u)) return;
    // 80B3F5F8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F5FCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F5FC:
    ctx->pc = 0x80B3F5FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F5FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F5FC: bl      0x8045C034
    {
            ctx->lr = 0x80B3F600u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F600:
    ctx->pc = 0x80B3F600u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F600u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F600: bl      0x8045F32C
    {
            ctx->lr = 0x80B3F604u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B3F604:
    ctx->pc = 0x80B3F604u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F604u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F604: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B3F608:
    ctx->pc = 0x80B3F608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F608u)) return;
    // 80B3F608: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F60Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F60C:
    ctx->pc = 0x80B3F60Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F60Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F60C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F610:
    ctx->pc = 0x80B3F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F610u)) return;
    // 80B3F610: bl      0x8045F220
    {
            ctx->lr = 0x80B3F614u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F614:
    ctx->pc = 0x80B3F614u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F614u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F614: bl      0x8045C034
    {
            ctx->lr = 0x80B3F618u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F618:
    ctx->pc = 0x80B3F618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F618: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F61C:
    ctx->pc = 0x80B3F61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F61Cu)) return;
    // 80B3F61C: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F620:
    ctx->pc = 0x80B3F620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F620: lwz     r0, 0(r3)
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
label_80B3F624:
    ctx->pc = 0x80B3F624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F624u)) return;
    // 80B3F624: cmpwi   r0, 0
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

label_80B3F628:
    ctx->pc = 0x80B3F628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F628u)) return;
    // 80B3F628: bc    4, 2, 0x80B3F640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F640;
        }
    }

label_80B3F62C:
    ctx->pc = 0x80B3F62Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F62Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F62C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F630:
    ctx->pc = 0x80B3F630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F630u)) return;
    // 80B3F630: bl      0x8045F220
    {
            ctx->lr = 0x80B3F634u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F634:
    ctx->pc = 0x80B3F634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F634: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F638:
    ctx->pc = 0x80B3F638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F638u)) return;
    // 80B3F638: addi    r4, r4, 7376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7376);

label_80B3F63C:
    ctx->pc = 0x80B3F63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F63Cu)) return;
    // 80B3F63C: bl      0x8045C060
    {
            ctx->lr = 0x80B3F640u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F640:
    ctx->pc = 0x80B3F640u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F640u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F640: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F644:
    ctx->pc = 0x80B3F644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F644u)) return;
    // 80B3F644: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F648:
    ctx->pc = 0x80B3F648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F648: lwz     r0, 0(r3)
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
label_80B3F64C:
    ctx->pc = 0x80B3F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F64Cu)) return;
    // 80B3F64C: cmpwi   r0, 1
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

label_80B3F650:
    ctx->pc = 0x80B3F650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F650u)) return;
    // 80B3F650: bc    4, 2, 0x80B3F668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F668;
        }
    }

label_80B3F654:
    ctx->pc = 0x80B3F654u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F654u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F654: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F658:
    ctx->pc = 0x80B3F658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F658u)) return;
    // 80B3F658: bl      0x8045F220
    {
            ctx->lr = 0x80B3F65Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F65C:
    ctx->pc = 0x80B3F65Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F65Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F65C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F660:
    ctx->pc = 0x80B3F660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F660u)) return;
    // 80B3F660: addi    r4, r4, 7380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7380);

label_80B3F664:
    ctx->pc = 0x80B3F664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F664u)) return;
    // 80B3F664: bl      0x8045C060
    {
            ctx->lr = 0x80B3F668u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F668:
    ctx->pc = 0x80B3F668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F668: li      r3, 629
    ctx->gpr[3] = (u32)(s32)(629);

label_80B3F66C:
    ctx->pc = 0x80B3F66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F66Cu)) return;
    // 80B3F66C: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F670u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F670:
    ctx->pc = 0x80B3F670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F670: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F674:
    ctx->pc = 0x80B3F674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F674u)) return;
    // 80B3F674: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F678:
    ctx->pc = 0x80B3F678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F678: lwz     r0, 0(r3)
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
label_80B3F67C:
    ctx->pc = 0x80B3F67Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F67Cu)) return;
    // 80B3F67C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F680:
    ctx->pc = 0x80B3F680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F680u)) return;
    // 80B3F680: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F684:
    ctx->pc = 0x80B3F684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F684u)) return;
    // 80B3F684: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F688:
    ctx->pc = 0x80B3F688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F688: lwzx    r3, r3, r0
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
label_80B3F68C:
    ctx->pc = 0x80B3F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F68Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F68C: lwz     r3, 20(r3)
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
label_80B3F690:
    ctx->pc = 0x80B3F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F690u)) return;
    // 80B3F690: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F694u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F694:
    ctx->pc = 0x80B3F694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F694: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F698:
    ctx->pc = 0x80B3F698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F698u)) return;
    // 80B3F698: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F69Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F69C:
    ctx->pc = 0x80B3F69Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F69Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F69C: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F6A0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F6A0:
    ctx->pc = 0x80B3F6A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F6A0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F6A4:
    ctx->pc = 0x80B3F6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6A4u)) return;
    // 80B3F6A4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F6A8:
    ctx->pc = 0x80B3F6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F6A8: lwz     r0, 0(r3)
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
label_80B3F6AC:
    ctx->pc = 0x80B3F6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6ACu)) return;
    // 80B3F6AC: cmpwi   r0, 0
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

label_80B3F6B0:
    ctx->pc = 0x80B3F6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6B0u)) return;
    // 80B3F6B0: bc    4, 2, 0x80B3F6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F6C0;
        }
    }

label_80B3F6B4:
    ctx->pc = 0x80B3F6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F6B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F6B8:
    ctx->pc = 0x80B3F6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6B8u)) return;
    // 80B3F6B8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F6BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F6BC:
    ctx->pc = 0x80B3F6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F6BC: bl      0x8045C034
    {
            ctx->lr = 0x80B3F6C0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F6C0:
    ctx->pc = 0x80B3F6C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F6C0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F6C4:
    ctx->pc = 0x80B3F6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6C4u)) return;
    // 80B3F6C4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F6C8:
    ctx->pc = 0x80B3F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F6C8: lwz     r0, 0(r3)
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
label_80B3F6CC:
    ctx->pc = 0x80B3F6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6CCu)) return;
    // 80B3F6CC: cmpwi   r0, 1
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

label_80B3F6D0:
    ctx->pc = 0x80B3F6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6D0u)) return;
    // 80B3F6D0: bc    4, 2, 0x80B3F6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F6E0;
        }
    }

label_80B3F6D4:
    ctx->pc = 0x80B3F6D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F6D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3F6D8:
    ctx->pc = 0x80B3F6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6D8u)) return;
    // 80B3F6D8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F6DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F6DC:
    ctx->pc = 0x80B3F6DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F6DC: bl      0x8045C034
    {
            ctx->lr = 0x80B3F6E0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F6E0:
    ctx->pc = 0x80B3F6E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F6E0: bl      0x8045F32C
    {
            ctx->lr = 0x80B3F6E4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B3F6E4:
    ctx->pc = 0x80B3F6E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F6E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F6E8:
    ctx->pc = 0x80B3F6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6E8u)) return;
    // 80B3F6E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F6ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F6EC:
    ctx->pc = 0x80B3F6ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F6EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F6F0:
    ctx->pc = 0x80B3F6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6F0u)) return;
    // 80B3F6F0: bl      0x8045F220
    {
            ctx->lr = 0x80B3F6F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F6F4:
    ctx->pc = 0x80B3F6F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F6F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F6F4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3F6F8:
    ctx->pc = 0x80B3F6F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6F8u)) return;
    // 80B3F6F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F6FC:
    ctx->pc = 0x80B3F6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F6FCu)) return;
    // 80B3F6FC: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B3F700:
    ctx->pc = 0x80B3F700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F700u)) return;
    // 80B3F700: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3F704:
    ctx->pc = 0x80B3F704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F704u)) return;
    // 80B3F704: addi    r6, r6, 3156
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3156);

label_80B3F708:
    ctx->pc = 0x80B3F708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F708: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3F708u)) return;
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
label_80B3F70C:
    ctx->pc = 0x80B3F70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F70Cu)) return;
    // 80B3F70C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3F710:
    ctx->pc = 0x80B3F710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F710u)) return;
    // 80B3F710: addi    r6, r6, 3160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3160);

label_80B3F714:
    ctx->pc = 0x80B3F714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F714: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3F714u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80B3F718:
    ctx->pc = 0x80B3F718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F718u)) return;
    // 80B3F718: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3F718u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3F71C:
    ctx->pc = 0x80B3F71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F71Cu)) return;
    // 80B3F71C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3F720:
    ctx->pc = 0x80B3F720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F720u)) return;
    // 80B3F720: bl      0x8045C3C0
    {
            ctx->lr = 0x80B3F724u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B3F724:
    ctx->pc = 0x80B3F724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F724: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F728:
    ctx->pc = 0x80B3F728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F728u)) return;
    // 80B3F728: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80B3F72C:
    ctx->pc = 0x80B3F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F72Cu)) return;
    // 80B3F72C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F730:
    ctx->pc = 0x80B3F730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F730u)) return;
    // 80B3F730: addi    r5, r5, 3280
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3280);

label_80B3F734:
    ctx->pc = 0x80B3F734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F734: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F734u)) return;
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
label_80B3F738:
    ctx->pc = 0x80B3F738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F738u)) return;
    // 80B3F738: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F73C:
    ctx->pc = 0x80B3F73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F73Cu)) return;
    // 80B3F73C: addi    r5, r5, 3284
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3284);

label_80B3F740:
    ctx->pc = 0x80B3F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F740: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F740u)) return;
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
label_80B3F744:
    ctx->pc = 0x80B3F744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F744u)) return;
    // 80B3F744: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F748:
    ctx->pc = 0x80B3F748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F748u)) return;
    // 80B3F748: addi    r5, r5, 3288
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3288);

label_80B3F74C:
    ctx->pc = 0x80B3F74Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F74Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F74C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F74Cu)) return;
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
label_80B3F750:
    ctx->pc = 0x80B3F750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F750u)) return;
    // 80B3F750: bl      0x8045C750
    {
            ctx->lr = 0x80B3F754u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F754:
    ctx->pc = 0x80B3F754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F754: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F758:
    ctx->pc = 0x80B3F758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F758u)) return;
    // 80B3F758: bl      0x8045F220
    {
            ctx->lr = 0x80B3F75Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F75C:
    ctx->pc = 0x80B3F75Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F75Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F75C: lwz     r31, 32(r3)
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
label_80B3F760:
    ctx->pc = 0x80B3F760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F760u)) return;
    // 80B3F760: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F764:
    ctx->pc = 0x80B3F764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F764u)) return;
    // 80B3F764: bl      0x8045F220
    {
            ctx->lr = 0x80B3F768u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F768:
    ctx->pc = 0x80B3F768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F768: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3F76C:
    ctx->pc = 0x80B3F76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F76Cu)) return;
    // 80B3F76C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F770:
    ctx->pc = 0x80B3F770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F770u)) return;
    // 80B3F770: bl      0x8045F220
    {
            ctx->lr = 0x80B3F774u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F774:
    ctx->pc = 0x80B3F774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F774: lwz     r4, 32(r3)
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
label_80B3F778:
    ctx->pc = 0x80B3F778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F778u)) return;
    // 80B3F778: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F77C:
    ctx->pc = 0x80B3F77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F77Cu)) return;
    // 80B3F77C: addi    r3, r3, 29184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29184);

label_80B3F780:
    ctx->pc = 0x80B3F780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F780u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F780: lwz     r3, 0(r3)
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
label_80B3F784:
    ctx->pc = 0x80B3F784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F784: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3F784u)) return;
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
label_80B3F788:
    ctx->pc = 0x80B3F788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F788: lfs     f2, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x80B3F788u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
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
label_80B3F78C:
    ctx->pc = 0x80B3F78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F78Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F78C: lfs     f3, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80B3F78Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
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
label_80B3F790:
    ctx->pc = 0x80B3F790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F790u)) return;
    // 80B3F790: bl      0x8045EF2C
    {
            ctx->lr = 0x80B3F794u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B3F794:
    ctx->pc = 0x80B3F794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F794: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F798:
    ctx->pc = 0x80B3F798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F798u)) return;
    // 80B3F798: bl      0x8045F220
    {
            ctx->lr = 0x80B3F79Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F79C:
    ctx->pc = 0x80B3F79Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F79Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F79C: lwz     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3F7A0:
    ctx->pc = 0x80B3F7A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7A0u)) return;
    // 80B3F7A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F7A4:
    ctx->pc = 0x80B3F7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7A4u)) return;
    // 80B3F7A4: bl      0x8045F220
    {
            ctx->lr = 0x80B3F7A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F7A8:
    ctx->pc = 0x80B3F7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F7A8: lwz     r3, 32(r3)
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
label_80B3F7AC:
    ctx->pc = 0x80B3F7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F7AC: lwz     r0, 24(r3)
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
label_80B3F7B0:
    ctx->pc = 0x80B3F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7B0u)) return;
    // 80B3F7B0: subfic  r31, r0, 16384
    {
        u64 res = (u64)(u32)(s32)(16384) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80B3F7B4:
    ctx->pc = 0x80B3F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7B4u)) return;
    // 80B3F7B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F7B8:
    ctx->pc = 0x80B3F7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7B8u)) return;
    // 80B3F7B8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F7BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F7BC:
    ctx->pc = 0x80B3F7BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F7BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F7BC: lwz     r4, 32(r3)
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
label_80B3F7C0:
    ctx->pc = 0x80B3F7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7C0u)) return;
    // 80B3F7C0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F7C4:
    ctx->pc = 0x80B3F7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7C4u)) return;
    // 80B3F7C4: addi    r3, r3, 29184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29184);

label_80B3F7C8:
    ctx->pc = 0x80B3F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F7C8: lwz     r3, 0(r3)
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
label_80B3F7CC:
    ctx->pc = 0x80B3F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F7CC: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3F7D0:
    ctx->pc = 0x80B3F7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7D0u)) return;
    // 80B3F7D0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3F7D4:
    ctx->pc = 0x80B3F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F7D4: lwz     r6, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3F7D8:
    ctx->pc = 0x80B3F7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7D8u)) return;
    // 80B3F7D8: bl      0x8045EEA8
    {
            ctx->lr = 0x80B3F7DCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B3F7DC:
    ctx->pc = 0x80B3F7DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F7DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F7DC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F7E0:
    ctx->pc = 0x80B3F7E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7E0u)) return;
    // 80B3F7E0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F7E4:
    ctx->pc = 0x80B3F7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F7E4: lwz     r0, 0(r3)
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
label_80B3F7E8:
    ctx->pc = 0x80B3F7E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7E8u)) return;
    // 80B3F7E8: cmpwi   r0, 0
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

label_80B3F7EC:
    ctx->pc = 0x80B3F7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7ECu)) return;
    // 80B3F7EC: bc    4, 2, 0x80B3F804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F804;
        }
    }

label_80B3F7F0:
    ctx->pc = 0x80B3F7F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F7F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F7F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F7F4:
    ctx->pc = 0x80B3F7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7F4u)) return;
    // 80B3F7F4: bl      0x8045F220
    {
            ctx->lr = 0x80B3F7F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F7F8:
    ctx->pc = 0x80B3F7F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F7F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F7F8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F7FC:
    ctx->pc = 0x80B3F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F7FCu)) return;
    // 80B3F7FC: addi    r4, r4, 7388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7388);

label_80B3F800:
    ctx->pc = 0x80B3F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F800u)) return;
    // 80B3F800: bl      0x8045C060
    {
            ctx->lr = 0x80B3F804u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F804:
    ctx->pc = 0x80B3F804u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F804u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F804: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F808:
    ctx->pc = 0x80B3F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F808u)) return;
    // 80B3F808: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F80C:
    ctx->pc = 0x80B3F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F80Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F80C: lwz     r0, 0(r3)
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
label_80B3F810:
    ctx->pc = 0x80B3F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F810u)) return;
    // 80B3F810: cmpwi   r0, 1
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

label_80B3F814:
    ctx->pc = 0x80B3F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F814u)) return;
    // 80B3F814: bc    4, 2, 0x80B3F82C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F82C;
        }
    }

label_80B3F818:
    ctx->pc = 0x80B3F818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F81C:
    ctx->pc = 0x80B3F81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F81Cu)) return;
    // 80B3F81C: bl      0x8045F220
    {
            ctx->lr = 0x80B3F820u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F820:
    ctx->pc = 0x80B3F820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F820: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F824:
    ctx->pc = 0x80B3F824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F824u)) return;
    // 80B3F824: addi    r4, r4, 7396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7396);

label_80B3F828:
    ctx->pc = 0x80B3F828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F828u)) return;
    // 80B3F828: bl      0x8045C060
    {
            ctx->lr = 0x80B3F82Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F82C:
    ctx->pc = 0x80B3F82Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F82Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F82C: li      r3, 630
    ctx->gpr[3] = (u32)(s32)(630);

label_80B3F830:
    ctx->pc = 0x80B3F830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F830u)) return;
    // 80B3F830: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F834u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F834:
    ctx->pc = 0x80B3F834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F834: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F838:
    ctx->pc = 0x80B3F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F838u)) return;
    // 80B3F838: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F83C:
    ctx->pc = 0x80B3F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F83Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F83C: lwz     r0, 0(r3)
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
label_80B3F840:
    ctx->pc = 0x80B3F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F840u)) return;
    // 80B3F840: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F844:
    ctx->pc = 0x80B3F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F844u)) return;
    // 80B3F844: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F848:
    ctx->pc = 0x80B3F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F848u)) return;
    // 80B3F848: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F84C:
    ctx->pc = 0x80B3F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F84Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F84C: lwzx    r3, r3, r0
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
label_80B3F850:
    ctx->pc = 0x80B3F850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F850: lwz     r3, 24(r3)
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
label_80B3F854:
    ctx->pc = 0x80B3F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F854u)) return;
    // 80B3F854: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F858u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F858:
    ctx->pc = 0x80B3F858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F858: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B3F85C:
    ctx->pc = 0x80B3F85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F85Cu)) return;
    // 80B3F85C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F860u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F860:
    ctx->pc = 0x80B3F860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F860: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F864:
    ctx->pc = 0x80B3F864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F864u)) return;
    // 80B3F864: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F868:
    ctx->pc = 0x80B3F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F868: lwz     r0, 0(r3)
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
label_80B3F86C:
    ctx->pc = 0x80B3F86Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F86Cu)) return;
    // 80B3F86C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F870:
    ctx->pc = 0x80B3F870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F870u)) return;
    // 80B3F870: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F874:
    ctx->pc = 0x80B3F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F874u)) return;
    // 80B3F874: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F878:
    ctx->pc = 0x80B3F878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F878: lwzx    r3, r3, r0
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
label_80B3F87C:
    ctx->pc = 0x80B3F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F87Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F87C: lwz     r3, 28(r3)
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
label_80B3F880:
    ctx->pc = 0x80B3F880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F880u)) return;
    // 80B3F880: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F884u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F884:
    ctx->pc = 0x80B3F884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F884: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F888:
    ctx->pc = 0x80B3F888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F888u)) return;
    // 80B3F888: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F88Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F88C:
    ctx->pc = 0x80B3F88Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F88Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F88C: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F890u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F890:
    ctx->pc = 0x80B3F890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F890: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F894:
    ctx->pc = 0x80B3F894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F894u)) return;
    // 80B3F894: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F898:
    ctx->pc = 0x80B3F898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F898: lwz     r0, 0(r3)
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
label_80B3F89C:
    ctx->pc = 0x80B3F89Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F89Cu)) return;
    // 80B3F89C: cmpwi   r0, 0
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

label_80B3F8A0:
    ctx->pc = 0x80B3F8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8A0u)) return;
    // 80B3F8A0: bc    4, 2, 0x80B3F8B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F8B0;
        }
    }

label_80B3F8A4:
    ctx->pc = 0x80B3F8A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F8A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F8A8:
    ctx->pc = 0x80B3F8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8A8u)) return;
    // 80B3F8A8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F8ACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F8AC:
    ctx->pc = 0x80B3F8ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F8AC: bl      0x8045C034
    {
            ctx->lr = 0x80B3F8B0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F8B0:
    ctx->pc = 0x80B3F8B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F8B0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F8B4:
    ctx->pc = 0x80B3F8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8B4u)) return;
    // 80B3F8B4: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3F8B8:
    ctx->pc = 0x80B3F8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F8B8: lwz     r0, 0(r3)
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
label_80B3F8BC:
    ctx->pc = 0x80B3F8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8BCu)) return;
    // 80B3F8BC: cmpwi   r0, 1
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

label_80B3F8C0:
    ctx->pc = 0x80B3F8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8C0u)) return;
    // 80B3F8C0: bc    4, 2, 0x80B3F8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3F8D0;
        }
    }

label_80B3F8C4:
    ctx->pc = 0x80B3F8C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F8C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F8C8:
    ctx->pc = 0x80B3F8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8C8u)) return;
    // 80B3F8C8: bl      0x8045F220
    {
            ctx->lr = 0x80B3F8CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F8CC:
    ctx->pc = 0x80B3F8CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F8CC: bl      0x8045C034
    {
            ctx->lr = 0x80B3F8D0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F8D0:
    ctx->pc = 0x80B3F8D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F8D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F8D4:
    ctx->pc = 0x80B3F8D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8D4u)) return;
    // 80B3F8D4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F8D8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F8D8:
    ctx->pc = 0x80B3F8D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F8D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F8DC:
    ctx->pc = 0x80B3F8DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8DCu)) return;
    // 80B3F8DC: bl      0x8045F220
    {
            ctx->lr = 0x80B3F8E0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F8E0:
    ctx->pc = 0x80B3F8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3F8E0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F8E4:
    ctx->pc = 0x80B3F8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8E4u)) return;
    // 80B3F8E4: addi    r4, r4, 7408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7408);

label_80B3F8E8:
    ctx->pc = 0x80B3F8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8E8u)) return;
    // 80B3F8E8: bl      0x8045C060
    {
            ctx->lr = 0x80B3F8ECu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3F8EC:
    ctx->pc = 0x80B3F8ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F8EC: li      r3, 631
    ctx->gpr[3] = (u32)(s32)(631);

label_80B3F8F0:
    ctx->pc = 0x80B3F8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8F0u)) return;
    // 80B3F8F0: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3F8F4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3F8F4:
    ctx->pc = 0x80B3F8F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F8F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3F8F4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3F8F8:
    ctx->pc = 0x80B3F8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8F8u)) return;
    // 80B3F8F8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3F8FC:
    ctx->pc = 0x80B3F8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3F8FC: lwz     r0, 0(r3)
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
label_80B3F900:
    ctx->pc = 0x80B3F900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F900u)) return;
    // 80B3F900: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3F904:
    ctx->pc = 0x80B3F904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F904u)) return;
    // 80B3F904: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F908:
    ctx->pc = 0x80B3F908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F908u)) return;
    // 80B3F908: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3F90C:
    ctx->pc = 0x80B3F90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F90Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3F90C: lwzx    r3, r3, r0
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
label_80B3F910:
    ctx->pc = 0x80B3F910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F910u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F910: lwz     r3, 32(r3)
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
label_80B3F914:
    ctx->pc = 0x80B3F914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F914u)) return;
    // 80B3F914: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3F918u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3F918:
    ctx->pc = 0x80B3F918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F918: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F91C:
    ctx->pc = 0x80B3F91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F91Cu)) return;
    // 80B3F91C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F920u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F920:
    ctx->pc = 0x80B3F920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F920: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3F924u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3F924:
    ctx->pc = 0x80B3F924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F924: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F928:
    ctx->pc = 0x80B3F928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F928u)) return;
    // 80B3F928: bl      0x8045F220
    {
            ctx->lr = 0x80B3F92Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F92C:
    ctx->pc = 0x80B3F92Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F92Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F92C: bl      0x8045C034
    {
            ctx->lr = 0x80B3F930u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3F930:
    ctx->pc = 0x80B3F930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F930: bl      0x8045F32C
    {
            ctx->lr = 0x80B3F934u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B3F934:
    ctx->pc = 0x80B3F934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3F934: bl      0x8045C4A4
    {
            ctx->lr = 0x80B3F938u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80B3F938:
    ctx->pc = 0x80B3F938u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F938u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F938: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3F93C:
    ctx->pc = 0x80B3F93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F93Cu)) return;
    // 80B3F93C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3F940u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3F940:
    ctx->pc = 0x80B3F940u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F940u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3F940: li      r3, 743
    ctx->gpr[3] = (u32)(s32)(743);

label_80B3F944:
    ctx->pc = 0x80B3F944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F944u)) return;
    // 80B3F944: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F948:
    ctx->pc = 0x80B3F948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F948u)) return;
    // 80B3F948: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B3F94C:
    ctx->pc = 0x80B3F94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F94Cu)) return;
    // 80B3F94C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3F950:
    ctx->pc = 0x80B3F950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F950u)) return;
    // 80B3F950: bl      0x80B40700
    {
            ctx->lr = 0x80B3F954u;
            goto label_80B40700;
    }

label_80B3F954:
    ctx->pc = 0x80B3F954u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F954u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3F954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F958:
    ctx->pc = 0x80B3F958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F958u)) return;
    // 80B3F958: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F95C:
    ctx->pc = 0x80B3F95Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F95Cu)) return;
    // 80B3F95C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B3F960:
    ctx->pc = 0x80B3F960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F960u)) return;
    // 80B3F960: addi    r5, r5, -7424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7424);

label_80B3F964:
    ctx->pc = 0x80B3F964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F964u)) return;
    // 80B3F964: li      r6, 29952
    ctx->gpr[6] = (u32)(s32)(29952);

label_80B3F968:
    ctx->pc = 0x80B3F968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F968u)) return;
    // 80B3F968: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F96C:
    ctx->pc = 0x80B3F96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F96Cu)) return;
    // 80B3F96C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3F970u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3F970:
    ctx->pc = 0x80B3F970u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F970u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3F970: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F974:
    ctx->pc = 0x80B3F974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F974u)) return;
    // 80B3F974: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3F978:
    ctx->pc = 0x80B3F978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F978u)) return;
    // 80B3F978: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F97C:
    ctx->pc = 0x80B3F97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F97Cu)) return;
    // 80B3F97C: addi    r5, r5, 3292
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3292);

label_80B3F980:
    ctx->pc = 0x80B3F980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3F980: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F980u)) return;
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
label_80B3F984:
    ctx->pc = 0x80B3F984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F984u)) return;
    // 80B3F984: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F988:
    ctx->pc = 0x80B3F988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F988u)) return;
    // 80B3F988: addi    r5, r5, 3296
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3296);

label_80B3F98C:
    ctx->pc = 0x80B3F98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F98Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3F98C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F98Cu)) return;
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
label_80B3F990:
    ctx->pc = 0x80B3F990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F990u)) return;
    // 80B3F990: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F994:
    ctx->pc = 0x80B3F994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F994u)) return;
    // 80B3F994: addi    r5, r5, 3300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3300);

label_80B3F998:
    ctx->pc = 0x80B3F998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3F998: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3F998u)) return;
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
label_80B3F99C:
    ctx->pc = 0x80B3F99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F99Cu)) return;
    // 80B3F99C: bl      0x8045C750
    {
            ctx->lr = 0x80B3F9A0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3F9A0:
    ctx->pc = 0x80B3F9A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F9A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3F9A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3F9A4:
    ctx->pc = 0x80B3F9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9A4u)) return;
    // 80B3F9A4: bl      0x8045F220
    {
            ctx->lr = 0x80B3F9A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3F9A8:
    ctx->pc = 0x80B3F9A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F9A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3F9A8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F9AC:
    ctx->pc = 0x80B3F9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9ACu)) return;
    // 80B3F9AC: addi    r4, r4, 24048
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24048);

label_80B3F9B0:
    ctx->pc = 0x80B3F9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9B0u)) return;
    // 80B3F9B0: lis     r5, -28615
    ctx->gpr[5] = ((u32)(s32)(-28615) << 16);

label_80B3F9B4:
    ctx->pc = 0x80B3F9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9B4u)) return;
    // 80B3F9B4: addi    r5, r5, -7300
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7300);

label_80B3F9B8:
    ctx->pc = 0x80B3F9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9B8u)) return;
    // 80B3F9B8: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3F9BC:
    ctx->pc = 0x80B3F9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9BCu)) return;
    // 80B3F9BC: addi    r6, r6, 3132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3132);

label_80B3F9C0:
    ctx->pc = 0x80B3F9C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F9C0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3F9C0u)) return;
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
label_80B3F9C4:
    ctx->pc = 0x80B3F9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9C4u)) return;
    // 80B3F9C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3F9C8:
    ctx->pc = 0x80B3F9C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9C8u)) return;
    // 80B3F9C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3F9CC:
    ctx->pc = 0x80B3F9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9CCu)) return;
    // 80B3F9CC: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3F9D0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3F9D0:
    ctx->pc = 0x80B3F9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3F9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80B3F9D0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3F9D4:
    ctx->pc = 0x80B3F9D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9D4u)) return;
    // 80B3F9D4: addi    r3, r3, 29184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29184);

label_80B3F9D8:
    ctx->pc = 0x80B3F9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3F9D8: lwz     r3, 0(r3)
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
label_80B3F9DC:
    ctx->pc = 0x80B3F9DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9DCu)) return;
    // 80B3F9DC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3F9E0:
    ctx->pc = 0x80B3F9E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9E0u)) return;
    // 80B3F9E0: addi    r4, r4, 29152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29152);

label_80B3F9E4:
    ctx->pc = 0x80B3F9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9E4u)) return;
    // 80B3F9E4: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3F9E8:
    ctx->pc = 0x80B3F9E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9E8u)) return;
    // 80B3F9E8: addi    r5, r5, 24084
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24084);

label_80B3F9EC:
    ctx->pc = 0x80B3F9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9ECu)) return;
    // 80B3F9EC: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3F9F0:
    ctx->pc = 0x80B3F9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9F0u)) return;
    // 80B3F9F0: addi    r6, r6, 3132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3132);

label_80B3F9F4:
    ctx->pc = 0x80B3F9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3F9F4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3F9F4u)) return;
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
label_80B3F9F8:
    ctx->pc = 0x80B3F9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9F8u)) return;
    // 80B3F9F8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3F9FC:
    ctx->pc = 0x80B3F9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3F9FCu)) return;
    // 80B3F9FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3FA00:
    ctx->pc = 0x80B3FA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA00u)) return;
    // 80B3FA00: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3FA04u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3FA04:
    ctx->pc = 0x80B3FA04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FA04: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FA08:
    ctx->pc = 0x80B3FA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA08u)) return;
    // 80B3FA08: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FA0Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FA0C:
    ctx->pc = 0x80B3FA0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3FA0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FA10:
    ctx->pc = 0x80B3FA10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA10u)) return;
    // 80B3FA10: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80B3FA14:
    ctx->pc = 0x80B3FA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA14u)) return;
    // 80B3FA14: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80B3FA18:
    ctx->pc = 0x80B3FA18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA18u)) return;
    // 80B3FA18: addi    r5, r5, -7424
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7424);

label_80B3FA1C:
    ctx->pc = 0x80B3FA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA1Cu)) return;
    // 80B3FA1C: li      r6, 29952
    ctx->gpr[6] = (u32)(s32)(29952);

label_80B3FA20:
    ctx->pc = 0x80B3FA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA20u)) return;
    // 80B3FA20: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3FA24:
    ctx->pc = 0x80B3FA24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA24u)) return;
    // 80B3FA24: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3FA28u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3FA28:
    ctx->pc = 0x80B3FA28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3FA28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FA2C:
    ctx->pc = 0x80B3FA2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA2Cu)) return;
    // 80B3FA2C: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_80B3FA30:
    ctx->pc = 0x80B3FA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA30u)) return;
    // 80B3FA30: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FA34:
    ctx->pc = 0x80B3FA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA34u)) return;
    // 80B3FA34: addi    r5, r5, 3304
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3304);

label_80B3FA38:
    ctx->pc = 0x80B3FA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3FA38: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FA38u)) return;
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
label_80B3FA3C:
    ctx->pc = 0x80B3FA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA3Cu)) return;
    // 80B3FA3C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FA40:
    ctx->pc = 0x80B3FA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA40u)) return;
    // 80B3FA40: addi    r5, r5, 3308
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3308);

label_80B3FA44:
    ctx->pc = 0x80B3FA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FA44: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FA44u)) return;
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
label_80B3FA48:
    ctx->pc = 0x80B3FA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA48u)) return;
    // 80B3FA48: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FA4C:
    ctx->pc = 0x80B3FA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA4Cu)) return;
    // 80B3FA4C: addi    r5, r5, 3312
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3312);

label_80B3FA50:
    ctx->pc = 0x80B3FA50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FA50: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FA50u)) return;
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
label_80B3FA54:
    ctx->pc = 0x80B3FA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA54u)) return;
    // 80B3FA54: bl      0x8045C750
    {
            ctx->lr = 0x80B3FA58u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3FA58:
    ctx->pc = 0x80B3FA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FA58: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80B3FA5C:
    ctx->pc = 0x80B3FA5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA5Cu)) return;
    // 80B3FA5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FA60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FA60:
    ctx->pc = 0x80B3FA60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FA60: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FA64:
    ctx->pc = 0x80B3FA64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA64u)) return;
    // 80B3FA64: bl      0x8045F220
    {
            ctx->lr = 0x80B3FA68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FA68:
    ctx->pc = 0x80B3FA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3FA68: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FA6C:
    ctx->pc = 0x80B3FA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA6Cu)) return;
    // 80B3FA6C: addi    r4, r4, 12028
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12028);

label_80B3FA70:
    ctx->pc = 0x80B3FA70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA70u)) return;
    // 80B3FA70: lis     r5, -28593
    ctx->gpr[5] = ((u32)(s32)(-28593) << 16);

label_80B3FA74:
    ctx->pc = 0x80B3FA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA74u)) return;
    // 80B3FA74: addi    r5, r5, 1208
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1208);

label_80B3FA78:
    ctx->pc = 0x80B3FA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA78u)) return;
    // 80B3FA78: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FA7C:
    ctx->pc = 0x80B3FA7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA7Cu)) return;
    // 80B3FA7C: addi    r6, r6, 3316
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3316);

label_80B3FA80:
    ctx->pc = 0x80B3FA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3FA80: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FA80u)) return;
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
label_80B3FA84:
    ctx->pc = 0x80B3FA84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA84u)) return;
    // 80B3FA84: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80B3FA88:
    ctx->pc = 0x80B3FA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA88u)) return;
    // 80B3FA88: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80B3FA8C:
    ctx->pc = 0x80B3FA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA8Cu)) return;
    // 80B3FA8C: bl      0x8045EBE4
    {
            ctx->lr = 0x80B3FA90u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80B3FA90:
    ctx->pc = 0x80B3FA90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FA90: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FA94:
    ctx->pc = 0x80B3FA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FA94u)) return;
    // 80B3FA94: bl      0x8045F220
    {
            ctx->lr = 0x80B3FA98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FA98:
    ctx->pc = 0x80B3FA98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FA98: bl      0x8045C034
    {
            ctx->lr = 0x80B3FA9Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3FA9C:
    ctx->pc = 0x80B3FA9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FA9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3FA9C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FAA0:
    ctx->pc = 0x80B3FAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAA0u)) return;
    // 80B3FAA0: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3FAA4:
    ctx->pc = 0x80B3FAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FAA4: lwz     r0, 0(r3)
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
label_80B3FAA8:
    ctx->pc = 0x80B3FAA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAA8u)) return;
    // 80B3FAA8: cmpwi   r0, 0
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

label_80B3FAAC:
    ctx->pc = 0x80B3FAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAACu)) return;
    // 80B3FAAC: bc    4, 2, 0x80B3FAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3FAC4;
        }
    }

label_80B3FAB0:
    ctx->pc = 0x80B3FAB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FAB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FAB4:
    ctx->pc = 0x80B3FAB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAB4u)) return;
    // 80B3FAB4: bl      0x8045F220
    {
            ctx->lr = 0x80B3FAB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FAB8:
    ctx->pc = 0x80B3FAB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FAB8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FABC:
    ctx->pc = 0x80B3FABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FABCu)) return;
    // 80B3FABC: addi    r4, r4, 7412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7412);

label_80B3FAC0:
    ctx->pc = 0x80B3FAC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAC0u)) return;
    // 80B3FAC0: bl      0x8045C060
    {
            ctx->lr = 0x80B3FAC4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FAC4:
    ctx->pc = 0x80B3FAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B3FAC4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FAC8:
    ctx->pc = 0x80B3FAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAC8u)) return;
    // 80B3FAC8: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80B3FACC:
    ctx->pc = 0x80B3FACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FACCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FACC: lwz     r0, 0(r3)
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
label_80B3FAD0:
    ctx->pc = 0x80B3FAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAD0u)) return;
    // 80B3FAD0: cmpwi   r0, 1
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

label_80B3FAD4:
    ctx->pc = 0x80B3FAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAD4u)) return;
    // 80B3FAD4: bc    4, 2, 0x80B3FAEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B3FAEC;
        }
    }

label_80B3FAD8:
    ctx->pc = 0x80B3FAD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FAD8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FADC:
    ctx->pc = 0x80B3FADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FADCu)) return;
    // 80B3FADC: bl      0x8045F220
    {
            ctx->lr = 0x80B3FAE0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FAE0:
    ctx->pc = 0x80B3FAE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FAE0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FAE4:
    ctx->pc = 0x80B3FAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAE4u)) return;
    // 80B3FAE4: addi    r4, r4, 7420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7420);

label_80B3FAE8:
    ctx->pc = 0x80B3FAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAE8u)) return;
    // 80B3FAE8: bl      0x8045C060
    {
            ctx->lr = 0x80B3FAECu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FAEC:
    ctx->pc = 0x80B3FAECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FAEC: li      r3, 632
    ctx->gpr[3] = (u32)(s32)(632);

label_80B3FAF0:
    ctx->pc = 0x80B3FAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAF0u)) return;
    // 80B3FAF0: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3FAF4u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3FAF4:
    ctx->pc = 0x80B3FAF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FAF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FAF4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FAF8:
    ctx->pc = 0x80B3FAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAF8u)) return;
    // 80B3FAF8: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FAFC:
    ctx->pc = 0x80B3FAFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FAFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FAFC: lwz     r0, 0(r3)
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
label_80B3FB00:
    ctx->pc = 0x80B3FB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB00u)) return;
    // 80B3FB00: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FB04:
    ctx->pc = 0x80B3FB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB04u)) return;
    // 80B3FB04: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FB08:
    ctx->pc = 0x80B3FB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB08u)) return;
    // 80B3FB08: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FB0C:
    ctx->pc = 0x80B3FB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FB0C: lwzx    r3, r3, r0
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
label_80B3FB10:
    ctx->pc = 0x80B3FB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FB10: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3FB14:
    ctx->pc = 0x80B3FB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB14u)) return;
    // 80B3FB14: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3FB18u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3FB18:
    ctx->pc = 0x80B3FB18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FB18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3FB18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FB1C:
    ctx->pc = 0x80B3FB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB1Cu)) return;
    // 80B3FB1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3FB20:
    ctx->pc = 0x80B3FB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB20u)) return;
    // 80B3FB20: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3FB24:
    ctx->pc = 0x80B3FB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB24u)) return;
    // 80B3FB24: addi    r5, r6, -5120
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-5120);

label_80B3FB28:
    ctx->pc = 0x80B3FB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB28u)) return;
    // 80B3FB28: addi    r6, r6, -7424
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7424);

label_80B3FB2C:
    ctx->pc = 0x80B3FB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB2Cu)) return;
    // 80B3FB2C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3FB30:
    ctx->pc = 0x80B3FB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB30u)) return;
    // 80B3FB30: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3FB34u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3FB34:
    ctx->pc = 0x80B3FB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3FB34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FB38:
    ctx->pc = 0x80B3FB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB38u)) return;
    // 80B3FB38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3FB3C:
    ctx->pc = 0x80B3FB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB3Cu)) return;
    // 80B3FB3C: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FB40:
    ctx->pc = 0x80B3FB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB40u)) return;
    // 80B3FB40: addi    r5, r5, 3320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3320);

label_80B3FB44:
    ctx->pc = 0x80B3FB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3FB44: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FB44u)) return;
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
label_80B3FB48:
    ctx->pc = 0x80B3FB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB48u)) return;
    // 80B3FB48: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FB4C:
    ctx->pc = 0x80B3FB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB4Cu)) return;
    // 80B3FB4C: addi    r5, r5, 3324
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3324);

label_80B3FB50:
    ctx->pc = 0x80B3FB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FB50: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FB50u)) return;
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
label_80B3FB54:
    ctx->pc = 0x80B3FB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB54u)) return;
    // 80B3FB54: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FB58:
    ctx->pc = 0x80B3FB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB58u)) return;
    // 80B3FB58: addi    r5, r5, 3328
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3328);

label_80B3FB5C:
    ctx->pc = 0x80B3FB5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FB5C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FB5Cu)) return;
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
label_80B3FB60:
    ctx->pc = 0x80B3FB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB60u)) return;
    // 80B3FB60: bl      0x8045C750
    {
            ctx->lr = 0x80B3FB64u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3FB64:
    ctx->pc = 0x80B3FB64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FB64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3FB64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FB68:
    ctx->pc = 0x80B3FB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB68u)) return;
    // 80B3FB68: li      r4, 25
    ctx->gpr[4] = (u32)(s32)(25);

label_80B3FB6C:
    ctx->pc = 0x80B3FB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB6Cu)) return;
    // 80B3FB6C: li      r5, 256
    ctx->gpr[5] = (u32)(s32)(256);

label_80B3FB70:
    ctx->pc = 0x80B3FB70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB70u)) return;
    // 80B3FB70: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3FB74:
    ctx->pc = 0x80B3FB74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB74u)) return;
    // 80B3FB74: addi    r6, r6, -6400
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6400);

label_80B3FB78:
    ctx->pc = 0x80B3FB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB78u)) return;
    // 80B3FB78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3FB7C:
    ctx->pc = 0x80B3FB7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB7Cu)) return;
    // 80B3FB7C: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3FB80u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3FB80:
    ctx->pc = 0x80B3FB80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FB80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3FB80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FB84:
    ctx->pc = 0x80B3FB84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB84u)) return;
    // 80B3FB84: li      r4, 25
    ctx->gpr[4] = (u32)(s32)(25);

label_80B3FB88:
    ctx->pc = 0x80B3FB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB88u)) return;
    // 80B3FB88: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FB8C:
    ctx->pc = 0x80B3FB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB8Cu)) return;
    // 80B3FB8C: addi    r5, r5, 3332
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3332);

label_80B3FB90:
    ctx->pc = 0x80B3FB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3FB90: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FB90u)) return;
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
label_80B3FB94:
    ctx->pc = 0x80B3FB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB94u)) return;
    // 80B3FB94: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FB98:
    ctx->pc = 0x80B3FB98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB98u)) return;
    // 80B3FB98: addi    r5, r5, 3336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3336);

label_80B3FB9C:
    ctx->pc = 0x80B3FB9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FB9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FB9C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FB9Cu)) return;
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
label_80B3FBA0:
    ctx->pc = 0x80B3FBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBA0u)) return;
    // 80B3FBA0: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FBA4:
    ctx->pc = 0x80B3FBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBA4u)) return;
    // 80B3FBA4: addi    r5, r5, 3340
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3340);

label_80B3FBA8:
    ctx->pc = 0x80B3FBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FBA8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FBA8u)) return;
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
label_80B3FBAC:
    ctx->pc = 0x80B3FBACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBACu)) return;
    // 80B3FBAC: bl      0x8045C750
    {
            ctx->lr = 0x80B3FBB0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3FBB0:
    ctx->pc = 0x80B3FBB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FBB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FBB0: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80B3FBB4:
    ctx->pc = 0x80B3FBB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBB4u)) return;
    // 80B3FBB4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FBB8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FBB8:
    ctx->pc = 0x80B3FBB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FBB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B3FBB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FBBC:
    ctx->pc = 0x80B3FBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBBCu)) return;
    // 80B3FBBC: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80B3FBC0:
    ctx->pc = 0x80B3FBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBC0u)) return;
    // 80B3FBC0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80B3FBC4:
    ctx->pc = 0x80B3FBC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBC4u)) return;
    // 80B3FBC4: addi    r5, r6, -512
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-512);

label_80B3FBC8:
    ctx->pc = 0x80B3FBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBC8u)) return;
    // 80B3FBC8: addi    r6, r6, -7424
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-7424);

label_80B3FBCC:
    ctx->pc = 0x80B3FBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBCCu)) return;
    // 80B3FBCC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80B3FBD0:
    ctx->pc = 0x80B3FBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBD0u)) return;
    // 80B3FBD0: bl      0x8045C7B4
    {
            ctx->lr = 0x80B3FBD4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80B3FBD4:
    ctx->pc = 0x80B3FBD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FBD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3FBD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FBD8:
    ctx->pc = 0x80B3FBD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBD8u)) return;
    // 80B3FBD8: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80B3FBDC:
    ctx->pc = 0x80B3FBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBDCu)) return;
    // 80B3FBDC: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FBE0:
    ctx->pc = 0x80B3FBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBE0u)) return;
    // 80B3FBE0: addi    r5, r5, 3344
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3344);

label_80B3FBE4:
    ctx->pc = 0x80B3FBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3FBE4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FBE4u)) return;
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
label_80B3FBE8:
    ctx->pc = 0x80B3FBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBE8u)) return;
    // 80B3FBE8: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FBEC:
    ctx->pc = 0x80B3FBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBECu)) return;
    // 80B3FBEC: addi    r5, r5, 3348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3348);

label_80B3FBF0:
    ctx->pc = 0x80B3FBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FBF0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FBF0u)) return;
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
label_80B3FBF4:
    ctx->pc = 0x80B3FBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBF4u)) return;
    // 80B3FBF4: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FBF8:
    ctx->pc = 0x80B3FBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBF8u)) return;
    // 80B3FBF8: addi    r5, r5, 3352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3352);

label_80B3FBFC:
    ctx->pc = 0x80B3FBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FBFC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FBFCu)) return;
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
label_80B3FC00:
    ctx->pc = 0x80B3FC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC00u)) return;
    // 80B3FC00: bl      0x8045C750
    {
            ctx->lr = 0x80B3FC04u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80B3FC04:
    ctx->pc = 0x80B3FC04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FC04: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3FC08u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3FC08:
    ctx->pc = 0x80B3FC08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FC08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FC0C:
    ctx->pc = 0x80B3FC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC0Cu)) return;
    // 80B3FC0C: bl      0x8045F220
    {
            ctx->lr = 0x80B3FC10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FC10:
    ctx->pc = 0x80B3FC10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FC10: bl      0x8045C034
    {
            ctx->lr = 0x80B3FC14u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3FC14:
    ctx->pc = 0x80B3FC14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FC14: bl      0x8045F32C
    {
            ctx->lr = 0x80B3FC18u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B3FC18:
    ctx->pc = 0x80B3FC18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FC18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FC1C:
    ctx->pc = 0x80B3FC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC1Cu)) return;
    // 80B3FC1C: bl      0x8045F220
    {
            ctx->lr = 0x80B3FC20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FC20:
    ctx->pc = 0x80B3FC20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 19u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 19u : 1u;
    // 80B3FC20: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3FC24:
    ctx->pc = 0x80B3FC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC24u)) return;
    // 80B3FC24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3FC28:
    ctx->pc = 0x80B3FC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80B3FC28: stw     r0, 8(r1)
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
label_80B3FC2C:
    ctx->pc = 0x80B3FC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC2Cu)) return;
    // 80B3FC2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FC30:
    ctx->pc = 0x80B3FC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC30u)) return;
    // 80B3FC30: li      r4, 240
    ctx->gpr[4] = (u32)(s32)(240);

label_80B3FC34:
    ctx->pc = 0x80B3FC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC34u)) return;
    // 80B3FC34: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FC38:
    ctx->pc = 0x80B3FC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC38u)) return;
    // 80B3FC38: addi    r6, r6, 3356
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3356);

label_80B3FC3C:
    ctx->pc = 0x80B3FC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B3FC3C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FC3Cu)) return;
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
label_80B3FC40:
    ctx->pc = 0x80B3FC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC40u)) return;
    // 80B3FC40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3FC44:
    ctx->pc = 0x80B3FC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC44u)) return;
    // 80B3FC44: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_80B3FC48:
    ctx->pc = 0x80B3FC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC48u)) return;
    // 80B3FC48: addi    r7, r7, -32768
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-32768);

label_80B3FC4C:
    ctx->pc = 0x80B3FC4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC4Cu)) return;
    // 80B3FC4C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80B3FC50:
    ctx->pc = 0x80B3FC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC50u)) return;
    // 80B3FC50: lis     r9, -27571
    ctx->gpr[9] = ((u32)(s32)(-27571) << 16);

label_80B3FC54:
    ctx->pc = 0x80B3FC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC54u)) return;
    // 80B3FC54: addi    r9, r9, 3140
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(3140);

label_80B3FC58:
    ctx->pc = 0x80B3FC58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FC58: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80B3FC58u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
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
label_80B3FC5C:
    ctx->pc = 0x80B3FC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC5Cu)) return;
    // 80B3FC5C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80B3FC60:
    ctx->pc = 0x80B3FC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC60u)) return;
    // 80B3FC60: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80B3FC64:
    ctx->pc = 0x80B3FC64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC64u)) return;
    // 80B3FC64: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80B3FC64u)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80B3FC68:
    ctx->pc = 0x80B3FC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC68u)) return;
    // 80B3FC68: bl      0x8045C260
    {
            ctx->lr = 0x80B3FC6Cu;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80B3FC6C:
    ctx->pc = 0x80B3FC6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FC6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FC70:
    ctx->pc = 0x80B3FC70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC70u)) return;
    // 80B3FC70: bl      0x8045F220
    {
            ctx->lr = 0x80B3FC74u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FC74:
    ctx->pc = 0x80B3FC74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FC74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3FC74: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3FC78:
    ctx->pc = 0x80B3FC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC78u)) return;
    // 80B3FC78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FC7C:
    ctx->pc = 0x80B3FC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC7Cu)) return;
    // 80B3FC7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3FC80:
    ctx->pc = 0x80B3FC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC80u)) return;
    // 80B3FC80: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FC84:
    ctx->pc = 0x80B3FC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC84u)) return;
    // 80B3FC84: addi    r6, r6, 3156
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3156);

label_80B3FC88:
    ctx->pc = 0x80B3FC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FC88: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FC88u)) return;
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
label_80B3FC8C:
    ctx->pc = 0x80B3FC8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC8Cu)) return;
    // 80B3FC8C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FC90:
    ctx->pc = 0x80B3FC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC90u)) return;
    // 80B3FC90: addi    r6, r6, 3160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3160);

label_80B3FC94:
    ctx->pc = 0x80B3FC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3FC94: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FC94u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80B3FC98:
    ctx->pc = 0x80B3FC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC98u)) return;
    // 80B3FC98: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3FC98u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3FC9C:
    ctx->pc = 0x80B3FC9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FC9Cu)) return;
    // 80B3FC9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3FCA0:
    ctx->pc = 0x80B3FCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCA0u)) return;
    // 80B3FCA0: bl      0x8045C3C0
    {
            ctx->lr = 0x80B3FCA4u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B3FCA4:
    ctx->pc = 0x80B3FCA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FCA4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FCA8:
    ctx->pc = 0x80B3FCA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCA8u)) return;
    // 80B3FCA8: bl      0x8045F220
    {
            ctx->lr = 0x80B3FCACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FCAC:
    ctx->pc = 0x80B3FCACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FCAC: bl      0x8045EB8C
    {
            ctx->lr = 0x80B3FCB0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B3FCB0:
    ctx->pc = 0x80B3FCB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FCB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FCB4:
    ctx->pc = 0x80B3FCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCB4u)) return;
    // 80B3FCB4: bl      0x8045F220
    {
            ctx->lr = 0x80B3FCB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FCB8:
    ctx->pc = 0x80B3FCB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B3FCB8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FCBC:
    ctx->pc = 0x80B3FCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCBCu)) return;
    // 80B3FCBC: addi    r4, r4, 3360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3360);

label_80B3FCC0:
    ctx->pc = 0x80B3FCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3FCC0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FCC0u)) return;
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
label_80B3FCC4:
    ctx->pc = 0x80B3FCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCC4u)) return;
    // 80B3FCC4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FCC8:
    ctx->pc = 0x80B3FCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCC8u)) return;
    // 80B3FCC8: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B3FCCC:
    ctx->pc = 0x80B3FCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FCCC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FCCCu)) return;
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
label_80B3FCD0:
    ctx->pc = 0x80B3FCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCD0u)) return;
    // 80B3FCD0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FCD4:
    ctx->pc = 0x80B3FCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCD4u)) return;
    // 80B3FCD4: addi    r4, r4, 3168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3168);

label_80B3FCD8:
    ctx->pc = 0x80B3FCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FCD8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FCD8u)) return;
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
label_80B3FCDC:
    ctx->pc = 0x80B3FCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCDCu)) return;
    // 80B3FCDC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B3FCE0u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B3FCE0:
    ctx->pc = 0x80B3FCE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FCE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FCE4:
    ctx->pc = 0x80B3FCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCE4u)) return;
    // 80B3FCE4: bl      0x8045F220
    {
            ctx->lr = 0x80B3FCE8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FCE8:
    ctx->pc = 0x80B3FCE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FCE8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FCEC:
    ctx->pc = 0x80B3FCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCECu)) return;
    // 80B3FCEC: addi    r4, r4, 7424
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7424);

label_80B3FCF0:
    ctx->pc = 0x80B3FCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCF0u)) return;
    // 80B3FCF0: bl      0x8045C060
    {
            ctx->lr = 0x80B3FCF4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FCF4:
    ctx->pc = 0x80B3FCF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FCF4: li      r3, 633
    ctx->gpr[3] = (u32)(s32)(633);

label_80B3FCF8:
    ctx->pc = 0x80B3FCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FCF8u)) return;
    // 80B3FCF8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3FCFCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3FCFC:
    ctx->pc = 0x80B3FCFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FCFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FCFC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FD00:
    ctx->pc = 0x80B3FD00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD00u)) return;
    // 80B3FD00: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FD04:
    ctx->pc = 0x80B3FD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FD04: lwz     r0, 0(r3)
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
label_80B3FD08:
    ctx->pc = 0x80B3FD08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD08u)) return;
    // 80B3FD08: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FD0C:
    ctx->pc = 0x80B3FD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD0Cu)) return;
    // 80B3FD0C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FD10:
    ctx->pc = 0x80B3FD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD10u)) return;
    // 80B3FD10: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FD14:
    ctx->pc = 0x80B3FD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FD14: lwzx    r3, r3, r0
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
label_80B3FD18:
    ctx->pc = 0x80B3FD18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FD18: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3FD1C:
    ctx->pc = 0x80B3FD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD1Cu)) return;
    // 80B3FD1C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3FD20u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3FD20:
    ctx->pc = 0x80B3FD20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD20: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FD24:
    ctx->pc = 0x80B3FD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD24u)) return;
    // 80B3FD24: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FD28u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FD28:
    ctx->pc = 0x80B3FD28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FD28: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3FD2Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3FD2C:
    ctx->pc = 0x80B3FD2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FD30:
    ctx->pc = 0x80B3FD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD30u)) return;
    // 80B3FD30: bl      0x8045F220
    {
            ctx->lr = 0x80B3FD34u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FD34:
    ctx->pc = 0x80B3FD34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FD34: bl      0x8045C034
    {
            ctx->lr = 0x80B3FD38u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3FD38:
    ctx->pc = 0x80B3FD38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD38: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80B3FD3C:
    ctx->pc = 0x80B3FD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD3Cu)) return;
    // 80B3FD3C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FD40u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FD40:
    ctx->pc = 0x80B3FD40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FD44:
    ctx->pc = 0x80B3FD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD44u)) return;
    // 80B3FD44: bl      0x8045F220
    {
            ctx->lr = 0x80B3FD48u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FD48:
    ctx->pc = 0x80B3FD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FD48: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FD4C:
    ctx->pc = 0x80B3FD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD4Cu)) return;
    // 80B3FD4C: addi    r4, r4, 7432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7432);

label_80B3FD50:
    ctx->pc = 0x80B3FD50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD50u)) return;
    // 80B3FD50: bl      0x8045C060
    {
            ctx->lr = 0x80B3FD54u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FD54:
    ctx->pc = 0x80B3FD54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD54: li      r3, 634
    ctx->gpr[3] = (u32)(s32)(634);

label_80B3FD58:
    ctx->pc = 0x80B3FD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD58u)) return;
    // 80B3FD58: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3FD5Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3FD5C:
    ctx->pc = 0x80B3FD5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FD5C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FD60:
    ctx->pc = 0x80B3FD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD60u)) return;
    // 80B3FD60: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FD64:
    ctx->pc = 0x80B3FD64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FD64: lwz     r0, 0(r3)
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
label_80B3FD68:
    ctx->pc = 0x80B3FD68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD68u)) return;
    // 80B3FD68: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FD6C:
    ctx->pc = 0x80B3FD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD6Cu)) return;
    // 80B3FD6C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FD70:
    ctx->pc = 0x80B3FD70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD70u)) return;
    // 80B3FD70: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FD74:
    ctx->pc = 0x80B3FD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FD74: lwzx    r3, r3, r0
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
label_80B3FD78:
    ctx->pc = 0x80B3FD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FD78: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3FD7C:
    ctx->pc = 0x80B3FD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD7Cu)) return;
    // 80B3FD7C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3FD80u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3FD80:
    ctx->pc = 0x80B3FD80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FD84:
    ctx->pc = 0x80B3FD84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD84u)) return;
    // 80B3FD84: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FD88u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FD88:
    ctx->pc = 0x80B3FD88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FD88: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3FD8Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3FD8C:
    ctx->pc = 0x80B3FD8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FD90:
    ctx->pc = 0x80B3FD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD90u)) return;
    // 80B3FD90: bl      0x8045F220
    {
            ctx->lr = 0x80B3FD94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FD94:
    ctx->pc = 0x80B3FD94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FD94: bl      0x8045C034
    {
            ctx->lr = 0x80B3FD98u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3FD98:
    ctx->pc = 0x80B3FD98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FD98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FD98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FD9C:
    ctx->pc = 0x80B3FD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FD9Cu)) return;
    // 80B3FD9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FDA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FDA0:
    ctx->pc = 0x80B3FDA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FDA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FDA4:
    ctx->pc = 0x80B3FDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDA4u)) return;
    // 80B3FDA4: bl      0x8045F220
    {
            ctx->lr = 0x80B3FDA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FDA8:
    ctx->pc = 0x80B3FDA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FDA8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FDAC:
    ctx->pc = 0x80B3FDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDACu)) return;
    // 80B3FDAC: addi    r4, r4, 7436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7436);

label_80B3FDB0:
    ctx->pc = 0x80B3FDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDB0u)) return;
    // 80B3FDB0: bl      0x8045C060
    {
            ctx->lr = 0x80B3FDB4u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FDB4:
    ctx->pc = 0x80B3FDB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FDB4: li      r3, 635
    ctx->gpr[3] = (u32)(s32)(635);

label_80B3FDB8:
    ctx->pc = 0x80B3FDB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDB8u)) return;
    // 80B3FDB8: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3FDBCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3FDBC:
    ctx->pc = 0x80B3FDBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FDBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FDC0:
    ctx->pc = 0x80B3FDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDC0u)) return;
    // 80B3FDC0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FDC4:
    ctx->pc = 0x80B3FDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FDC4: lwz     r0, 0(r3)
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
label_80B3FDC8:
    ctx->pc = 0x80B3FDC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDC8u)) return;
    // 80B3FDC8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FDCC:
    ctx->pc = 0x80B3FDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDCCu)) return;
    // 80B3FDCC: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FDD0:
    ctx->pc = 0x80B3FDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDD0u)) return;
    // 80B3FDD0: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FDD4:
    ctx->pc = 0x80B3FDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FDD4: lwzx    r3, r3, r0
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
label_80B3FDD8:
    ctx->pc = 0x80B3FDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FDD8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3FDDC:
    ctx->pc = 0x80B3FDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDDCu)) return;
    // 80B3FDDC: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3FDE0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3FDE0:
    ctx->pc = 0x80B3FDE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FDE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FDE4:
    ctx->pc = 0x80B3FDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDE4u)) return;
    // 80B3FDE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FDE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FDE8:
    ctx->pc = 0x80B3FDE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FDE8: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3FDECu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3FDEC:
    ctx->pc = 0x80B3FDECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FDEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FDF0:
    ctx->pc = 0x80B3FDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FDF0u)) return;
    // 80B3FDF0: bl      0x8045F220
    {
            ctx->lr = 0x80B3FDF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FDF4:
    ctx->pc = 0x80B3FDF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FDF4: bl      0x8045C034
    {
            ctx->lr = 0x80B3FDF8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3FDF8:
    ctx->pc = 0x80B3FDF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FDF8: bl      0x8045F300
    {
            ctx->lr = 0x80B3FDFCu;
            ctx->pc = 0x8045F300u;
            return;
    }

label_80B3FDFC:
    ctx->pc = 0x80B3FDFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FDFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FDFC: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80B3FE00:
    ctx->pc = 0x80B3FE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE00u)) return;
    // 80B3FE00: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FE04u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FE04:
    ctx->pc = 0x80B3FE04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FE08:
    ctx->pc = 0x80B3FE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE08u)) return;
    // 80B3FE08: bl      0x8045F220
    {
            ctx->lr = 0x80B3FE0Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FE0C:
    ctx->pc = 0x80B3FE0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FE0C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FE10:
    ctx->pc = 0x80B3FE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE10u)) return;
    // 80B3FE10: addi    r4, r4, 7444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7444);

label_80B3FE14:
    ctx->pc = 0x80B3FE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE14u)) return;
    // 80B3FE14: bl      0x8045C060
    {
            ctx->lr = 0x80B3FE18u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FE18:
    ctx->pc = 0x80B3FE18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE18: li      r3, 636
    ctx->gpr[3] = (u32)(s32)(636);

label_80B3FE1C:
    ctx->pc = 0x80B3FE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE1Cu)) return;
    // 80B3FE1C: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3FE20u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3FE20:
    ctx->pc = 0x80B3FE20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FE20: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FE24:
    ctx->pc = 0x80B3FE24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE24u)) return;
    // 80B3FE24: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FE28:
    ctx->pc = 0x80B3FE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FE28: lwz     r0, 0(r3)
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
label_80B3FE2C:
    ctx->pc = 0x80B3FE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE2Cu)) return;
    // 80B3FE2C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FE30:
    ctx->pc = 0x80B3FE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE30u)) return;
    // 80B3FE30: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FE34:
    ctx->pc = 0x80B3FE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE34u)) return;
    // 80B3FE34: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FE38:
    ctx->pc = 0x80B3FE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FE38: lwzx    r3, r3, r0
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
label_80B3FE3C:
    ctx->pc = 0x80B3FE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FE3C: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3FE40:
    ctx->pc = 0x80B3FE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE40u)) return;
    // 80B3FE40: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3FE44u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3FE44:
    ctx->pc = 0x80B3FE44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE44: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B3FE48:
    ctx->pc = 0x80B3FE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE48u)) return;
    // 80B3FE48: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FE4Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FE4C:
    ctx->pc = 0x80B3FE4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FE4C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FE50:
    ctx->pc = 0x80B3FE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE50u)) return;
    // 80B3FE50: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FE54:
    ctx->pc = 0x80B3FE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FE54: lwz     r0, 0(r3)
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
label_80B3FE58:
    ctx->pc = 0x80B3FE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE58u)) return;
    // 80B3FE58: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FE5C:
    ctx->pc = 0x80B3FE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE5Cu)) return;
    // 80B3FE5C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FE60:
    ctx->pc = 0x80B3FE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE60u)) return;
    // 80B3FE60: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FE64:
    ctx->pc = 0x80B3FE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FE64: lwzx    r3, r3, r0
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
label_80B3FE68:
    ctx->pc = 0x80B3FE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FE68: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B3FE6C:
    ctx->pc = 0x80B3FE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE6Cu)) return;
    // 80B3FE6C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B3FE70u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B3FE70:
    ctx->pc = 0x80B3FE70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FE74:
    ctx->pc = 0x80B3FE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE74u)) return;
    // 80B3FE74: bl      0x8045F7C8
    {
            ctx->lr = 0x80B3FE78u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B3FE78:
    ctx->pc = 0x80B3FE78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FE78: bl      0x8045BFF4
    {
            ctx->lr = 0x80B3FE7Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B3FE7C:
    ctx->pc = 0x80B3FE7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FE80:
    ctx->pc = 0x80B3FE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE80u)) return;
    // 80B3FE80: bl      0x8045F220
    {
            ctx->lr = 0x80B3FE84u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FE84:
    ctx->pc = 0x80B3FE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FE84: bl      0x8045C034
    {
            ctx->lr = 0x80B3FE88u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B3FE88:
    ctx->pc = 0x80B3FE88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FE88: bl      0x8045C4A4
    {
            ctx->lr = 0x80B3FE8Cu;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80B3FE8C:
    ctx->pc = 0x80B3FE8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FE90:
    ctx->pc = 0x80B3FE90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE90u)) return;
    // 80B3FE90: bl      0x8045F220
    {
            ctx->lr = 0x80B3FE94u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FE94:
    ctx->pc = 0x80B3FE94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FE94: bl      0x8045E760
    {
            ctx->lr = 0x80B3FE98u;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80B3FE98:
    ctx->pc = 0x80B3FE98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FE98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FE98: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B3FE9C:
    ctx->pc = 0x80B3FE9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FE9Cu)) return;
    // 80B3FE9C: bl      0x8045F220
    {
            ctx->lr = 0x80B3FEA0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FEA0:
    ctx->pc = 0x80B3FEA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FEA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FEA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3FEA4:
    ctx->pc = 0x80B3FEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEA4u)) return;
    // 80B3FEA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FEA8:
    ctx->pc = 0x80B3FEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEA8u)) return;
    // 80B3FEA8: bl      0x8045F220
    {
            ctx->lr = 0x80B3FEACu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FEAC:
    ctx->pc = 0x80B3FEACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FEACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FEAC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B3FEB0:
    ctx->pc = 0x80B3FEB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEB0u)) return;
    // 80B3FEB0: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FEB4:
    ctx->pc = 0x80B3FEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEB4u)) return;
    // 80B3FEB4: addi    r5, r5, 3156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3156);

label_80B3FEB8:
    ctx->pc = 0x80B3FEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B3FEB8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FEB8u)) return;
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
label_80B3FEBC:
    ctx->pc = 0x80B3FEBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEBCu)) return;
    // 80B3FEBC: lis     r5, -27571
    ctx->gpr[5] = ((u32)(s32)(-27571) << 16);

label_80B3FEC0:
    ctx->pc = 0x80B3FEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEC0u)) return;
    // 80B3FEC0: addi    r5, r5, 3160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3160);

label_80B3FEC4:
    ctx->pc = 0x80B3FEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FEC4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80B3FEC4u)) return;
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
label_80B3FEC8:
    ctx->pc = 0x80B3FEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEC8u)) return;
    // 80B3FEC8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3FEC8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3FECC:
    ctx->pc = 0x80B3FECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FECCu)) return;
    // 80B3FECC: bl      0x8045E734
    {
            ctx->lr = 0x80B3FED0u;
            ctx->pc = 0x8045E734u;
            return;
    }

label_80B3FED0:
    ctx->pc = 0x80B3FED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FED0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FED4:
    ctx->pc = 0x80B3FED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FED4u)) return;
    // 80B3FED4: bl      0x8045F220
    {
            ctx->lr = 0x80B3FED8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FED8:
    ctx->pc = 0x80B3FED8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FED8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    // 80B3FED8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3FEDC:
    ctx->pc = 0x80B3FEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEDCu)) return;
    // 80B3FEDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B3FEE0:
    ctx->pc = 0x80B3FEE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80B3FEE0: stw     r0, 8(r1)
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
label_80B3FEE4:
    ctx->pc = 0x80B3FEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEE4u)) return;
    // 80B3FEE4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FEE8:
    ctx->pc = 0x80B3FEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEE8u)) return;
    // 80B3FEE8: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80B3FEEC:
    ctx->pc = 0x80B3FEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEECu)) return;
    // 80B3FEEC: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FEF0:
    ctx->pc = 0x80B3FEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEF0u)) return;
    // 80B3FEF0: addi    r6, r6, 3356
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3356);

label_80B3FEF4:
    ctx->pc = 0x80B3FEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B3FEF4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FEF4u)) return;
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
label_80B3FEF8:
    ctx->pc = 0x80B3FEF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEF8u)) return;
    // 80B3FEF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3FEFC:
    ctx->pc = 0x80B3FEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FEFCu)) return;
    // 80B3FEFC: li      r7, 16384
    ctx->gpr[7] = (u32)(s32)(16384);

label_80B3FF00:
    ctx->pc = 0x80B3FF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF00u)) return;
    // 80B3FF00: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80B3FF04:
    ctx->pc = 0x80B3FF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF04u)) return;
    // 80B3FF04: lis     r9, -27571
    ctx->gpr[9] = ((u32)(s32)(-27571) << 16);

label_80B3FF08:
    ctx->pc = 0x80B3FF08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF08u)) return;
    // 80B3FF08: addi    r9, r9, 3140
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(3140);

label_80B3FF0C:
    ctx->pc = 0x80B3FF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FF0C: lfs     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF0Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
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
label_80B3FF10:
    ctx->pc = 0x80B3FF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF10u)) return;
    // 80B3FF10: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80B3FF14:
    ctx->pc = 0x80B3FF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF14u)) return;
    // 80B3FF14: li      r10, -4096
    ctx->gpr[10] = (u32)(s32)(-4096);

label_80B3FF18:
    ctx->pc = 0x80B3FF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF18u)) return;
    // 80B3FF18: lis     r11, -27571
    ctx->gpr[11] = ((u32)(s32)(-27571) << 16);

label_80B3FF1C:
    ctx->pc = 0x80B3FF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF1Cu)) return;
    // 80B3FF1C: addi    r11, r11, 3364
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(3364);

label_80B3FF20:
    ctx->pc = 0x80B3FF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FF20: lfs     f3, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF20u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
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
label_80B3FF24:
    ctx->pc = 0x80B3FF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF24u)) return;
    // 80B3FF24: bl      0x8045C260
    {
            ctx->lr = 0x80B3FF28u;
            ctx->pc = 0x8045C260u;
            return;
    }

label_80B3FF28:
    ctx->pc = 0x80B3FF28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FF28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FF28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FF2C:
    ctx->pc = 0x80B3FF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF2Cu)) return;
    // 80B3FF2C: bl      0x8045F220
    {
            ctx->lr = 0x80B3FF30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FF30:
    ctx->pc = 0x80B3FF30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FF30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80B3FF30: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B3FF34:
    ctx->pc = 0x80B3FF34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF34u)) return;
    // 80B3FF34: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B3FF38:
    ctx->pc = 0x80B3FF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF38u)) return;
    // 80B3FF38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B3FF3C:
    ctx->pc = 0x80B3FF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF3Cu)) return;
    // 80B3FF3C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FF40:
    ctx->pc = 0x80B3FF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF40u)) return;
    // 80B3FF40: addi    r6, r6, 3156
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3156);

label_80B3FF44:
    ctx->pc = 0x80B3FF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FF44: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF44u)) return;
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
label_80B3FF48:
    ctx->pc = 0x80B3FF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF48u)) return;
    // 80B3FF48: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B3FF4C:
    ctx->pc = 0x80B3FF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF4Cu)) return;
    // 80B3FF4C: addi    r6, r6, 3160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3160);

label_80B3FF50:
    ctx->pc = 0x80B3FF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B3FF50: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF50u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
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
label_80B3FF54:
    ctx->pc = 0x80B3FF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF54u)) return;
    // 80B3FF54: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80B3FF54u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80B3FF58:
    ctx->pc = 0x80B3FF58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF58u)) return;
    // 80B3FF58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B3FF5C:
    ctx->pc = 0x80B3FF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF5Cu)) return;
    // 80B3FF5C: bl      0x8045C3C0
    {
            ctx->lr = 0x80B3FF60u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80B3FF60:
    ctx->pc = 0x80B3FF60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FF60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FF60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FF64:
    ctx->pc = 0x80B3FF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF64u)) return;
    // 80B3FF64: bl      0x8045F220
    {
            ctx->lr = 0x80B3FF68u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FF68:
    ctx->pc = 0x80B3FF68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FF68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B3FF68: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FF6C:
    ctx->pc = 0x80B3FF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF6Cu)) return;
    // 80B3FF6C: addi    r4, r4, 3368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3368);

label_80B3FF70:
    ctx->pc = 0x80B3FF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B3FF70: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF70u)) return;
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
label_80B3FF74:
    ctx->pc = 0x80B3FF74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF74u)) return;
    // 80B3FF74: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FF78:
    ctx->pc = 0x80B3FF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF78u)) return;
    // 80B3FF78: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B3FF7C:
    ctx->pc = 0x80B3FF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B3FF7C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF7Cu)) return;
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
label_80B3FF80:
    ctx->pc = 0x80B3FF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF80u)) return;
    // 80B3FF80: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FF84:
    ctx->pc = 0x80B3FF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF84u)) return;
    // 80B3FF84: addi    r4, r4, 3372
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3372);

label_80B3FF88:
    ctx->pc = 0x80B3FF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B3FF88: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF88u)) return;
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
label_80B3FF8C:
    ctx->pc = 0x80B3FF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF8Cu)) return;
    // 80B3FF8C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FF90:
    ctx->pc = 0x80B3FF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF90u)) return;
    // 80B3FF90: addi    r4, r4, 3376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3376);

label_80B3FF94:
    ctx->pc = 0x80B3FF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B3FF94: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FF94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3FF98:
    ctx->pc = 0x80B3FF98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF98u)) return;
    // 80B3FF98: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FF9C:
    ctx->pc = 0x80B3FF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FF9Cu)) return;
    // 80B3FF9C: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_80B3FFA0:
    ctx->pc = 0x80B3FFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FFA0: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B3FFA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B3FFA4:
    ctx->pc = 0x80B3FFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFA4u)) return;
    // 80B3FFA4: bl      0x8045E570
    {
            ctx->lr = 0x80B3FFA8u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B3FFA8:
    ctx->pc = 0x80B3FFA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FFA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FFAC:
    ctx->pc = 0x80B3FFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFACu)) return;
    // 80B3FFAC: bl      0x8045F220
    {
            ctx->lr = 0x80B3FFB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FFB0:
    ctx->pc = 0x80B3FFB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B3FFB0: bl      0x8045EB8C
    {
            ctx->lr = 0x80B3FFB4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B3FFB4:
    ctx->pc = 0x80B3FFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B3FFB4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FFB8:
    ctx->pc = 0x80B3FFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFB8u)) return;
    // 80B3FFB8: addi    r3, r3, 29184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29184);

label_80B3FFBC:
    ctx->pc = 0x80B3FFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FFBC: lwz     r3, 0(r3)
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
label_80B3FFC0:
    ctx->pc = 0x80B3FFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFC0u)) return;
    // 80B3FFC0: bl      0x8045EB8C
    {
            ctx->lr = 0x80B3FFC4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80B3FFC4:
    ctx->pc = 0x80B3FFC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FFC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B3FFC8:
    ctx->pc = 0x80B3FFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFC8u)) return;
    // 80B3FFC8: bl      0x8045F220
    {
            ctx->lr = 0x80B3FFCCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B3FFCC:
    ctx->pc = 0x80B3FFCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B3FFCC: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B3FFD0:
    ctx->pc = 0x80B3FFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFD0u)) return;
    // 80B3FFD0: addi    r4, r4, 7452
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7452);

label_80B3FFD4:
    ctx->pc = 0x80B3FFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFD4u)) return;
    // 80B3FFD4: bl      0x8045C060
    {
            ctx->lr = 0x80B3FFD8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80B3FFD8:
    ctx->pc = 0x80B3FFD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B3FFD8: li      r3, 637
    ctx->gpr[3] = (u32)(s32)(637);

label_80B3FFDC:
    ctx->pc = 0x80B3FFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFDCu)) return;
    // 80B3FFDC: bl      0x8045BFA0
    {
            ctx->lr = 0x80B3FFE0u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80B3FFE0:
    ctx->pc = 0x80B3FFE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B3FFE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B3FFE0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B3FFE4:
    ctx->pc = 0x80B3FFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFE4u)) return;
    // 80B3FFE4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B3FFE8:
    ctx->pc = 0x80B3FFE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B3FFE8: lwz     r0, 0(r3)
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
label_80B3FFEC:
    ctx->pc = 0x80B3FFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFECu)) return;
    // 80B3FFEC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B3FFF0:
    ctx->pc = 0x80B3FFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFF0u)) return;
    // 80B3FFF0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B3FFF4:
    ctx->pc = 0x80B3FFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFF4u)) return;
    // 80B3FFF4: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B3FFF8:
    ctx->pc = 0x80B3FFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B3FFF8: lwzx    r3, r3, r0
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
label_80B3FFFC:
    ctx->pc = 0x80B3FFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B3FFFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B3FFFC: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40000:
    ctx->pc = 0x80B40000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40000u)) return;
    // 80B40000: bl      0x8045F6FC
    {
            ctx->lr = 0x80B40004u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B40004:
    ctx->pc = 0x80B40004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40004: li      r3, 25
    ctx->gpr[3] = (u32)(s32)(25);

label_80B40008:
    ctx->pc = 0x80B40008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40008u)) return;
    // 80B40008: bl      0x8045F7C8
    {
            ctx->lr = 0x80B4000Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B4000C:
    ctx->pc = 0x80B4000Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4000Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B4000C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80B40010:
    ctx->pc = 0x80B40010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40010u)) return;
    // 80B40010: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80B40014:
    ctx->pc = 0x80B40014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40014: lwz     r0, 0(r3)
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
label_80B40018:
    ctx->pc = 0x80B40018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40018u)) return;
    // 80B40018: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80B4001C:
    ctx->pc = 0x80B4001Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4001Cu)) return;
    // 80B4001C: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B40020:
    ctx->pc = 0x80B40020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40020u)) return;
    // 80B40020: addi    r3, r3, 7292
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7292);

label_80B40024:
    ctx->pc = 0x80B40024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40024: lwzx    r3, r3, r0
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
label_80B40028:
    ctx->pc = 0x80B40028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40028u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B40028: lwz     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B4002C:
    ctx->pc = 0x80B4002Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4002Cu)) return;
    // 80B4002C: bl      0x8045F6FC
    {
            ctx->lr = 0x80B40030u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80B40030:
    ctx->pc = 0x80B40030u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40030u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40030: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80B40034:
    ctx->pc = 0x80B40034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40034u)) return;
    // 80B40034: bl      0x8045F7C8
    {
            ctx->lr = 0x80B40038u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B40038:
    ctx->pc = 0x80B40038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40038: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80B4003C:
    ctx->pc = 0x80B4003Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4003Cu)) return;
    // 80B4003C: bl      0x8045F7C8
    {
            ctx->lr = 0x80B40040u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B40040:
    ctx->pc = 0x80B40040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40040: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B40044:
    ctx->pc = 0x80B40044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40044u)) return;
    // 80B40044: bl      0x8045F220
    {
            ctx->lr = 0x80B40048u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B40048:
    ctx->pc = 0x80B40048u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40048u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B40048: bl      0x8045E760
    {
            ctx->lr = 0x80B4004Cu;
            ctx->pc = 0x8045E760u;
            return;
    }

label_80B4004C:
    ctx->pc = 0x80B4004Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4004Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B4004C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B40050:
    ctx->pc = 0x80B40050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40050u)) return;
    // 80B40050: bl      0x8045F220
    {
            ctx->lr = 0x80B40054u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B40054:
    ctx->pc = 0x80B40054u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40054u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B40054: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40058:
    ctx->pc = 0x80B40058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40058u)) return;
    // 80B40058: addi    r4, r4, 3380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3380);

label_80B4005C:
    ctx->pc = 0x80B4005Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4005Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B4005C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B4005Cu)) return;
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
label_80B40060:
    ctx->pc = 0x80B40060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40060u)) return;
    // 80B40060: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40064:
    ctx->pc = 0x80B40064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40064u)) return;
    // 80B40064: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B40068:
    ctx->pc = 0x80B40068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B40068: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B40068u)) return;
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
label_80B4006C:
    ctx->pc = 0x80B4006Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4006Cu)) return;
    // 80B4006C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40070:
    ctx->pc = 0x80B40070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40070u)) return;
    // 80B40070: addi    r4, r4, 3384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3384);

label_80B40074:
    ctx->pc = 0x80B40074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40074: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B40074u)) return;
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
label_80B40078:
    ctx->pc = 0x80B40078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40078u)) return;
    // 80B40078: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B4007C:
    ctx->pc = 0x80B4007Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4007Cu)) return;
    // 80B4007C: addi    r4, r4, 3376
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3376);

label_80B40080:
    ctx->pc = 0x80B40080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40080: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B40080u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B40084:
    ctx->pc = 0x80B40084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40084u)) return;
    // 80B40084: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40088:
    ctx->pc = 0x80B40088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40088u)) return;
    // 80B40088: addi    r4, r4, 3176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3176);

label_80B4008C:
    ctx->pc = 0x80B4008Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4008Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B4008C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B4008Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
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
label_80B40090:
    ctx->pc = 0x80B40090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40090u)) return;
    // 80B40090: bl      0x8045E570
    {
            ctx->lr = 0x80B40094u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80B40094:
    ctx->pc = 0x80B40094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40094: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B40098:
    ctx->pc = 0x80B40098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40098u)) return;
    // 80B40098: bl      0x8045F7C8
    {
            ctx->lr = 0x80B4009Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B4009C:
    ctx->pc = 0x80B4009Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4009Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B4009C: bl      0x8045BFF4
    {
            ctx->lr = 0x80B400A0u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80B400A0:
    ctx->pc = 0x80B400A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B400A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B400A4:
    ctx->pc = 0x80B400A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400A4u)) return;
    // 80B400A4: bl      0x8045F220
    {
            ctx->lr = 0x80B400A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B400A8:
    ctx->pc = 0x80B400A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B400A8: bl      0x8045C034
    {
            ctx->lr = 0x80B400ACu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80B400AC:
    ctx->pc = 0x80B400ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B400AC: bl      0x8045F32C
    {
            ctx->lr = 0x80B400B0u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80B400B0:
    ctx->pc = 0x80B400B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B400B0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B400B4:
    ctx->pc = 0x80B400B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400B4u)) return;
    // 80B400B4: bl      0x8045ED54
    {
            ctx->lr = 0x80B400B8u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B400B8:
    ctx->pc = 0x80B400B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B400B8: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80B400BC:
    ctx->pc = 0x80B400BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400BCu)) return;
    // 80B400BC: bl      0x8045F7C8
    {
            ctx->lr = 0x80B400C0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B400C0:
    ctx->pc = 0x80B400C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B400C0: bl      0x8045C4A4
    {
            ctx->lr = 0x80B400C4u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80B400C4:
    ctx->pc = 0x80B400C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B400C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80B400C8:
    ctx->pc = 0x80B400C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400C8u)) return;
    // 80B400C8: bl      0x8045F7C8
    {
            ctx->lr = 0x80B400CCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80B400CC:
    ctx->pc = 0x80B400CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B400CC: b       0x80B4013C
    {
            goto label_80B4013C;
    }

label_80B400D0:
    ctx->pc = 0x80B400D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B400D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B400D4:
    ctx->pc = 0x80B400D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400D4u)) return;
    // 80B400D4: bl      0x8045F220
    {
            ctx->lr = 0x80B400D8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B400D8:
    ctx->pc = 0x80B400D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B400D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B400D8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B400DC:
    ctx->pc = 0x80B400DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400DCu)) return;
    // 80B400DC: addi    r4, r4, 3380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3380);

label_80B400E0:
    ctx->pc = 0x80B400E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B400E0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B400E0u)) return;
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
label_80B400E4:
    ctx->pc = 0x80B400E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400E4u)) return;
    // 80B400E4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B400E8:
    ctx->pc = 0x80B400E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400E8u)) return;
    // 80B400E8: addi    r4, r4, 3124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3124);

label_80B400EC:
    ctx->pc = 0x80B400ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B400EC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B400ECu)) return;
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
label_80B400F0:
    ctx->pc = 0x80B400F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400F0u)) return;
    // 80B400F0: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B400F4:
    ctx->pc = 0x80B400F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400F4u)) return;
    // 80B400F4: addi    r4, r4, 3384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3384);

label_80B400F8:
    ctx->pc = 0x80B400F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B400F8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80B400F8u)) return;
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
label_80B400FC:
    ctx->pc = 0x80B400FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B400FCu)) return;
    // 80B400FC: bl      0x8045EF2C
    {
            ctx->lr = 0x80B40100u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80B40100:
    ctx->pc = 0x80B40100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40100: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B40104:
    ctx->pc = 0x80B40104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40104u)) return;
    // 80B40104: bl      0x8045F220
    {
            ctx->lr = 0x80B40108u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80B40108:
    ctx->pc = 0x80B40108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B40108: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80B4010C:
    ctx->pc = 0x80B4010Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4010Cu)) return;
    // 80B4010C: li      r5, 25709
    ctx->gpr[5] = (u32)(s32)(25709);

label_80B40110:
    ctx->pc = 0x80B40110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40110u)) return;
    // 80B40110: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B40114:
    ctx->pc = 0x80B40114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40114u)) return;
    // 80B40114: bl      0x8045EEA8
    {
            ctx->lr = 0x80B40118u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80B40118:
    ctx->pc = 0x80B40118u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40118u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40118: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B4011C:
    ctx->pc = 0x80B4011Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4011Cu)) return;
    // 80B4011C: bl      0x8045EC10
    {
            ctx->lr = 0x80B40120u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80B40120:
    ctx->pc = 0x80B40120u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40120u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40120: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B40124:
    ctx->pc = 0x80B40124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40124u)) return;
    // 80B40124: bl      0x8045ED54
    {
            ctx->lr = 0x80B40128u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80B40128:
    ctx->pc = 0x80B40128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B40128: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B4012C:
    ctx->pc = 0x80B4012Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4012Cu)) return;
    // 80B4012C: addi    r3, r3, 29184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29184);

label_80B40130:
    ctx->pc = 0x80B40130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40130u)) return;
    // 80B40130: bl      0x8045F070
    {
            ctx->lr = 0x80B40134u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80B40134:
    ctx->pc = 0x80B40134u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40134u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B40134: bl      0x8045DE34
    {
            ctx->lr = 0x80B40138u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80B40138:
    ctx->pc = 0x80B40138u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40138u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B40138: bl      0x80460A80
    {
            ctx->lr = 0x80B4013Cu;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80B4013C:
    ctx->pc = 0x80B4013Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4013Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B4013C: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80B4013Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80B4013Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40140:
    ctx->pc = 0x80B40140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40140: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80B40140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40144:
    ctx->pc = 0x80B40144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40144u)) return;
    // 80B40144: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80B40148:
    ctx->pc = 0x80B40148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40148u)) return;
    // 80B40148: bl      0x80006E20
    {
            ctx->lr = 0x80B4014Cu;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80B4014C:
    ctx->pc = 0x80B4014Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4014Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B4014C: lwz     r0, 68(r1)
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
label_80B40150:
    ctx->pc = 0x80B40150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40150: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40154:
    ctx->pc = 0x80B40154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40154u)) return;
    // 80B40154: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80B40158:
    ctx->pc = 0x80B40158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40158u)) return;
    // 80B40158: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B4015C:
    ctx->pc = 0x80B4015Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4015Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B4015C: stwu     r1, -16(r1)
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
label_80B40160:
    ctx->pc = 0x80B40160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40160: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40164:
    ctx->pc = 0x80B40164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B40164: stw     r0, 20(r1)
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
label_80B40168:
    ctx->pc = 0x80B40168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40168: lwz     r3, 32(r3)
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
label_80B4016C:
    ctx->pc = 0x80B4016Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4016Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B4016C: lwz     r3, 16(r3)
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
label_80B40170:
    ctx->pc = 0x80B40170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40170u)) return;
    // 80B40170: bl      0x80509CF0
    {
            ctx->lr = 0x80B40174u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80B40174:
    ctx->pc = 0x80B40174u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40174u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40174: lwz     r0, 20(r1)
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
label_80B40178:
    ctx->pc = 0x80B40178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40178: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B4017C:
    ctx->pc = 0x80B4017Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4017Cu)) return;
    // 80B4017C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B40180:
    ctx->pc = 0x80B40180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40180u)) return;
    // 80B40180: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40184:
    ctx->pc = 0x80B40184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B40184: stwu     r1, -32(r1)
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
label_80B40188:
    ctx->pc = 0x80B40188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B40188: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B4018C:
    ctx->pc = 0x80B4018Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4018Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B4018C: stw     r0, 36(r1)
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
label_80B40190:
    ctx->pc = 0x80B40190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40190: stw     r31, 28(r1)
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
label_80B40194:
    ctx->pc = 0x80B40194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40194: stw     r30, 24(r1)
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
label_80B40198:
    ctx->pc = 0x80B40198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40198: stw     r29, 20(r1)
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
label_80B4019C:
    ctx->pc = 0x80B4019Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4019Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B4019C: lwz     r31, 32(r3)
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
label_80B401A0:
    ctx->pc = 0x80B401A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B401A0: lwz     r30, 16(r31)
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
label_80B401A4:
    ctx->pc = 0x80B401A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B401A4: lwz     r5, 28(r31)
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
label_80B401A8:
    ctx->pc = 0x80B401A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401A8u)) return;
    // 80B401A8: cmpwi   r5, 0
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

label_80B401AC:
    ctx->pc = 0x80B401ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401ACu)) return;
    // 80B401AC: bc    4, 1, 0x80B401E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B401E4;
        }
    }

label_80B401B0:
    ctx->pc = 0x80B401B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B401B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B401B0: lwz     r4, 24(r31)
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
label_80B401B4:
    ctx->pc = 0x80B401B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401B4u)) return;
    // 80B401B4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B401B8:
    ctx->pc = 0x80B401B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B401B8: lwz     r0, 20(r31)
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
label_80B401BC:
    ctx->pc = 0x80B401BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B401BCu)) return;
    // 80B401BC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B401C0:
    ctx->pc = 0x80B401C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401C0u)) return;
    // 80B401C0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B401C4:
    ctx->pc = 0x80B401C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B401C4u)) return;
    // 80B401C4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B401C8:
    ctx->pc = 0x80B401C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401C8u)) return;
    // 80B401C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B401CC:
    ctx->pc = 0x80B401CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401CCu)) return;
    // 80B401CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B401D0:
    ctx->pc = 0x80B401D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401D0u)) return;
    // 80B401D0: bl      0x80509C74
    {
            ctx->lr = 0x80B401D4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B401D4:
    ctx->pc = 0x80B401D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B401D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B401D4: stw     r29, 20(r31)
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
label_80B401D8:
    ctx->pc = 0x80B401D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B401D8: lwz     r3, 28(r31)
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
label_80B401DC:
    ctx->pc = 0x80B401DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401DCu)) return;
    // 80B401DC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B401E0:
    ctx->pc = 0x80B401E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B401E0: stw     r0, 28(r31)
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
label_80B401E4:
    ctx->pc = 0x80B401E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B401E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B401E4: lwz     r5, 40(r31)
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
label_80B401E8:
    ctx->pc = 0x80B401E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401E8u)) return;
    // 80B401E8: cmpwi   r5, 0
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

label_80B401EC:
    ctx->pc = 0x80B401ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401ECu)) return;
    // 80B401EC: bc    4, 1, 0x80B40224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B40224;
        }
    }

label_80B401F0:
    ctx->pc = 0x80B401F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B401F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B401F0: lwz     r4, 36(r31)
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
label_80B401F4:
    ctx->pc = 0x80B401F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401F4u)) return;
    // 80B401F4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B401F8:
    ctx->pc = 0x80B401F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B401F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B401F8: lwz     r0, 32(r31)
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
label_80B401FC:
    ctx->pc = 0x80B401FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B401FCu)) return;
    // 80B401FC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B40200:
    ctx->pc = 0x80B40200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40200u)) return;
    // 80B40200: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B40204:
    ctx->pc = 0x80B40204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B40204u)) return;
    // 80B40204: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B40208:
    ctx->pc = 0x80B40208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40208u)) return;
    // 80B40208: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B4020C:
    ctx->pc = 0x80B4020Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4020Cu)) return;
    // 80B4020C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B40210:
    ctx->pc = 0x80B40210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40210u)) return;
    // 80B40210: bl      0x80509BF8
    {
            ctx->lr = 0x80B40214u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B40214:
    ctx->pc = 0x80B40214u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40214u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B40214: stw     r29, 32(r31)
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
label_80B40218:
    ctx->pc = 0x80B40218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40218: lwz     r3, 40(r31)
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
label_80B4021C:
    ctx->pc = 0x80B4021Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4021Cu)) return;
    // 80B4021C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B40220:
    ctx->pc = 0x80B40220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40220: stw     r0, 40(r31)
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
label_80B40224:
    ctx->pc = 0x80B40224u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40224u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40224: lwz     r5, 52(r31)
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
label_80B40228:
    ctx->pc = 0x80B40228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40228u)) return;
    // 80B40228: cmpwi   r5, 0
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

label_80B4022C:
    ctx->pc = 0x80B4022Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4022Cu)) return;
    // 80B4022C: bc    4, 1, 0x80B40264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B40264;
        }
    }

label_80B40230:
    ctx->pc = 0x80B40230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80B40230: lwz     r4, 48(r31)
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
label_80B40234:
    ctx->pc = 0x80B40234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40234u)) return;
    // 80B40234: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80B40238:
    ctx->pc = 0x80B40238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80B40238: lwz     r0, 44(r31)
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
label_80B4023C:
    ctx->pc = 0x80B4023Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80B4023Cu)) return;
    // 80B4023C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80B40240:
    ctx->pc = 0x80B40240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40240u)) return;
    // 80B40240: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80B40244:
    ctx->pc = 0x80B40244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80B40244u)) return;
    // 80B40244: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80B40248:
    ctx->pc = 0x80B40248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40248u)) return;
    // 80B40248: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B4024C:
    ctx->pc = 0x80B4024Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4024Cu)) return;
    // 80B4024C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B40250:
    ctx->pc = 0x80B40250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40250u)) return;
    // 80B40250: bl      0x80509B94
    {
            ctx->lr = 0x80B40254u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B40254:
    ctx->pc = 0x80B40254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B40254: stw     r29, 44(r31)
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
label_80B40258:
    ctx->pc = 0x80B40258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40258: lwz     r3, 52(r31)
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
label_80B4025C:
    ctx->pc = 0x80B4025Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4025Cu)) return;
    // 80B4025C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80B40260:
    ctx->pc = 0x80B40260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40260: stw     r0, 52(r31)
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
label_80B40264:
    ctx->pc = 0x80B40264u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40264: lwz     r31, 28(r1)
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
label_80B40268:
    ctx->pc = 0x80B40268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40268: lwz     r30, 24(r1)
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
label_80B4026C:
    ctx->pc = 0x80B4026Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4026Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B4026C: lwz     r29, 20(r1)
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
label_80B40270:
    ctx->pc = 0x80B40270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40270: lwz     r0, 36(r1)
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
label_80B40274:
    ctx->pc = 0x80B40274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40274: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40278:
    ctx->pc = 0x80B40278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40278u)) return;
    // 80B40278: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B4027C:
    ctx->pc = 0x80B4027Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4027Cu)) return;
    // 80B4027C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40280:
    ctx->pc = 0x80B40280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B40280: stwu     r1, -32(r1)
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
label_80B40284:
    ctx->pc = 0x80B40284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40284u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B40284: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40288:
    ctx->pc = 0x80B40288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B40288: stw     r0, 36(r1)
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
label_80B4028C:
    ctx->pc = 0x80B4028Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4028Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B4028C: stw     r31, 28(r1)
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
label_80B40290:
    ctx->pc = 0x80B40290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40290: stw     r30, 24(r1)
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
label_80B40294:
    ctx->pc = 0x80B40294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40294: stw     r29, 20(r1)
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
label_80B40298:
    ctx->pc = 0x80B40298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40298u)) return;
    // 80B40298: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B4029C:
    ctx->pc = 0x80B4029Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4029Cu)) return;
    // 80B4029C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B402A0:
    ctx->pc = 0x80B402A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402A0u)) return;
    // 80B402A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80B402A4:
    ctx->pc = 0x80B402A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402A4u)) return;
    // 80B402A4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80B402A8:
    ctx->pc = 0x80B402A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402A8u)) return;
    // 80B402A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80B402AC:
    ctx->pc = 0x80B402ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402ACu)) return;
    // 80B402AC: bl      0x8050FD60
    {
            ctx->lr = 0x80B402B0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80B402B0:
    ctx->pc = 0x80B402B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B402B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B402B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B402B4:
    ctx->pc = 0x80B402B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402B4u)) return;
    // 80B402B4: cmplwi  r31, 0x0000
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

label_80B402B8:
    ctx->pc = 0x80B402B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402B8u)) return;
    // 80B402B8: bc    12, 2, 0x80B4031C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B4031C;
        }
    }

label_80B402BC:
    ctx->pc = 0x80B402BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B402BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B402BC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B402C0:
    ctx->pc = 0x80B402C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402C0u)) return;
    // 80B402C0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B402C4:
    ctx->pc = 0x80B402C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402C4u)) return;
    // 80B402C4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B402C8:
    ctx->pc = 0x80B402C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402C8u)) return;
    // 80B402C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B402CC:
    ctx->pc = 0x80B402CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402CCu)) return;
    // 80B402CC: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B402D0:
    ctx->pc = 0x80B402D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402D0u)) return;
    // 80B402D0: bl      0x8050A0D4
    {
            ctx->lr = 0x80B402D4u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B402D4:
    ctx->pc = 0x80B402D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B402D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80B402D4: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B402D8:
    ctx->pc = 0x80B402D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402D8u)) return;
    // 80B402D8: addi    r0, r3, 388
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(388);

label_80B402DC:
    ctx->pc = 0x80B402DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80B402DC: stw     r0, 16(r31)
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
label_80B402E0:
    ctx->pc = 0x80B402E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402E0u)) return;
    // 80B402E0: lis     r3, -32588
    ctx->gpr[3] = ((u32)(s32)(-32588) << 16);

label_80B402E4:
    ctx->pc = 0x80B402E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402E4u)) return;
    // 80B402E4: addi    r0, r3, 348
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(348);

label_80B402E8:
    ctx->pc = 0x80B402E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B402E8: stw     r0, 24(r31)
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
label_80B402EC:
    ctx->pc = 0x80B402ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B402EC: lwz     r3, 32(r31)
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
label_80B402F0:
    ctx->pc = 0x80B402F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B402F0: stw     r31, 16(r3)
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
label_80B402F4:
    ctx->pc = 0x80B402F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402F4u)) return;
    // 80B402F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B402F8:
    ctx->pc = 0x80B402F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B402F8: stw     r0, 20(r3)
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
label_80B402FC:
    ctx->pc = 0x80B402FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B402FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B402FC: stw     r0, 24(r3)
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
label_80B40300:
    ctx->pc = 0x80B40300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40300: stw     r0, 28(r3)
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
label_80B40304:
    ctx->pc = 0x80B40304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40304: stw     r0, 32(r3)
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
label_80B40308:
    ctx->pc = 0x80B40308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40308: stw     r0, 36(r3)
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
label_80B4030C:
    ctx->pc = 0x80B4030Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4030Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B4030C: stw     r0, 40(r3)
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
label_80B40310:
    ctx->pc = 0x80B40310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40310: stw     r0, 44(r3)
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
label_80B40314:
    ctx->pc = 0x80B40314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B40314: stw     r0, 48(r3)
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
label_80B40318:
    ctx->pc = 0x80B40318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40318: stw     r0, 52(r3)
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
label_80B4031C:
    ctx->pc = 0x80B4031Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4031Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80B4031C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B40320:
    ctx->pc = 0x80B40320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40320: lwz     r31, 28(r1)
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
label_80B40324:
    ctx->pc = 0x80B40324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40324: lwz     r30, 24(r1)
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
label_80B40328:
    ctx->pc = 0x80B40328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40328: lwz     r29, 20(r1)
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
label_80B4032C:
    ctx->pc = 0x80B4032Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4032Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B4032C: lwz     r0, 36(r1)
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
label_80B40330:
    ctx->pc = 0x80B40330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40330: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40334:
    ctx->pc = 0x80B40334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40334u)) return;
    // 80B40334: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B40338:
    ctx->pc = 0x80B40338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40338u)) return;
    // 80B40338: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B4033C:
    ctx->pc = 0x80B4033Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4033Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B4033C: stwu     r1, -16(r1)
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
label_80B40340:
    ctx->pc = 0x80B40340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B40340: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40344:
    ctx->pc = 0x80B40344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40344: stw     r0, 20(r1)
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
label_80B40348:
    ctx->pc = 0x80B40348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40348: stw     r31, 12(r1)
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
label_80B4034C:
    ctx->pc = 0x80B4034Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4034Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B4034C: stw     r30, 8(r1)
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
label_80B40350:
    ctx->pc = 0x80B40350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40350u)) return;
    // 80B40350: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B40354:
    ctx->pc = 0x80B40354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40354: lwz     r31, 32(r3)
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
label_80B40358:
    ctx->pc = 0x80B40358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B40358: stw     r30, 24(r31)
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
label_80B4035C:
    ctx->pc = 0x80B4035Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4035Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B4035C: stw     r5, 28(r31)
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
label_80B40360:
    ctx->pc = 0x80B40360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40360u)) return;
    // 80B40360: cmpwi   r5, 0
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

label_80B40364:
    ctx->pc = 0x80B40364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40364u)) return;
    // 80B40364: bc    12, 1, 0x80B40374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B40374;
        }
    }

label_80B40368:
    ctx->pc = 0x80B40368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B40368: lwz     r3, 16(r31)
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
label_80B4036C:
    ctx->pc = 0x80B4036Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4036Cu)) return;
    // 80B4036C: bl      0x80509C74
    {
            ctx->lr = 0x80B40370u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B40370:
    ctx->pc = 0x80B40370u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40370u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40370: stw     r30, 20(r31)
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
label_80B40374:
    ctx->pc = 0x80B40374u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40374u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40374: lwz     r31, 12(r1)
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
label_80B40378:
    ctx->pc = 0x80B40378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40378: lwz     r30, 8(r1)
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
label_80B4037C:
    ctx->pc = 0x80B4037Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4037Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B4037C: lwz     r0, 20(r1)
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
label_80B40380:
    ctx->pc = 0x80B40380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40380: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40384:
    ctx->pc = 0x80B40384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40384u)) return;
    // 80B40384: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B40388:
    ctx->pc = 0x80B40388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40388u)) return;
    // 80B40388: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B4038C:
    ctx->pc = 0x80B4038Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4038Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B4038C: stwu     r1, -16(r1)
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
label_80B40390:
    ctx->pc = 0x80B40390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40390u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B40390: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40394:
    ctx->pc = 0x80B40394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40394: stw     r0, 20(r1)
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
label_80B40398:
    ctx->pc = 0x80B40398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40398: stw     r31, 12(r1)
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
label_80B4039C:
    ctx->pc = 0x80B4039Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4039Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B4039C: stw     r30, 8(r1)
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
label_80B403A0:
    ctx->pc = 0x80B403A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403A0u)) return;
    // 80B403A0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B403A4:
    ctx->pc = 0x80B403A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B403A4: lwz     r31, 32(r3)
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
label_80B403A8:
    ctx->pc = 0x80B403A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B403A8: stw     r30, 36(r31)
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
label_80B403AC:
    ctx->pc = 0x80B403ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B403AC: stw     r5, 40(r31)
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
label_80B403B0:
    ctx->pc = 0x80B403B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403B0u)) return;
    // 80B403B0: cmpwi   r5, 0
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

label_80B403B4:
    ctx->pc = 0x80B403B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403B4u)) return;
    // 80B403B4: bc    12, 1, 0x80B403C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B403C4;
        }
    }

label_80B403B8:
    ctx->pc = 0x80B403B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B403B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B403B8: lwz     r3, 16(r31)
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
label_80B403BC:
    ctx->pc = 0x80B403BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403BCu)) return;
    // 80B403BC: bl      0x80509BF8
    {
            ctx->lr = 0x80B403C0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B403C0:
    ctx->pc = 0x80B403C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B403C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B403C0: stw     r30, 32(r31)
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
label_80B403C4:
    ctx->pc = 0x80B403C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B403C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B403C4: lwz     r31, 12(r1)
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
label_80B403C8:
    ctx->pc = 0x80B403C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B403C8: lwz     r30, 8(r1)
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
label_80B403CC:
    ctx->pc = 0x80B403CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B403CC: lwz     r0, 20(r1)
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
label_80B403D0:
    ctx->pc = 0x80B403D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B403D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B403D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B403D4:
    ctx->pc = 0x80B403D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403D4u)) return;
    // 80B403D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B403D8:
    ctx->pc = 0x80B403D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403D8u)) return;
    // 80B403D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B403DC:
    ctx->pc = 0x80B403DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B403DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B403DC: stwu     r1, -16(r1)
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
label_80B403E0:
    ctx->pc = 0x80B403E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B403E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B403E4:
    ctx->pc = 0x80B403E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B403E4: stw     r0, 20(r1)
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
label_80B403E8:
    ctx->pc = 0x80B403E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B403E8: stw     r31, 12(r1)
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
label_80B403EC:
    ctx->pc = 0x80B403ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B403EC: stw     r30, 8(r1)
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
label_80B403F0:
    ctx->pc = 0x80B403F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403F0u)) return;
    // 80B403F0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B403F4:
    ctx->pc = 0x80B403F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B403F4: lwz     r31, 32(r3)
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
label_80B403F8:
    ctx->pc = 0x80B403F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B403F8: stw     r30, 48(r31)
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
label_80B403FC:
    ctx->pc = 0x80B403FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B403FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B403FC: stw     r5, 52(r31)
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
label_80B40400:
    ctx->pc = 0x80B40400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40400u)) return;
    // 80B40400: cmpwi   r5, 0
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

label_80B40404:
    ctx->pc = 0x80B40404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40404u)) return;
    // 80B40404: bc    12, 1, 0x80B40414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B40414;
        }
    }

label_80B40408:
    ctx->pc = 0x80B40408u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40408u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B40408: lwz     r3, 16(r31)
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
label_80B4040C:
    ctx->pc = 0x80B4040Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4040Cu)) return;
    // 80B4040C: bl      0x80509B94
    {
            ctx->lr = 0x80B40410u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B40410:
    ctx->pc = 0x80B40410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40410: stw     r30, 44(r31)
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
label_80B40414:
    ctx->pc = 0x80B40414u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40414u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40414: lwz     r31, 12(r1)
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
label_80B40418:
    ctx->pc = 0x80B40418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40418: lwz     r30, 8(r1)
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
label_80B4041C:
    ctx->pc = 0x80B4041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4041Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B4041C: lwz     r0, 20(r1)
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
label_80B40420:
    ctx->pc = 0x80B40420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40420: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40424:
    ctx->pc = 0x80B40424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40424u)) return;
    // 80B40424: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B40428:
    ctx->pc = 0x80B40428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40428u)) return;
    // 80B40428: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B4042C:
    ctx->pc = 0x80B4042Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4042Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B4042C: stwu     r1, -16(r1)
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
label_80B40430:
    ctx->pc = 0x80B40430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40430: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40434:
    ctx->pc = 0x80B40434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40434: stw     r0, 20(r1)
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
label_80B40438:
    ctx->pc = 0x80B40438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40438: stw     r31, 12(r1)
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
label_80B4043C:
    ctx->pc = 0x80B4043Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4043Cu)) return;
    // 80B4043C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B40440:
    ctx->pc = 0x80B40440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40440u)) return;
    // 80B40440: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40444:
    ctx->pc = 0x80B40444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40444u)) return;
    // 80B40444: addi    r4, r4, 29196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29196);

label_80B40448:
    ctx->pc = 0x80B40448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40448: lwz     r0, 0(r4)
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
label_80B4044C:
    ctx->pc = 0x80B4044Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4044Cu)) return;
    // 80B4044C: cmplwi  r0, 0x0000
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

label_80B40450:
    ctx->pc = 0x80B40450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40450u)) return;
    // 80B40450: bc    4, 2, 0x80B40474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B40474;
        }
    }

label_80B40454:
    ctx->pc = 0x80B40454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B40454: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80B40458:
    ctx->pc = 0x80B40458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40458u)) return;
    // 80B40458: bl      0x8050EEC0
    {
            ctx->lr = 0x80B4045Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80B4045C:
    ctx->pc = 0x80B4045Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4045Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80B4045C: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40460:
    ctx->pc = 0x80B40460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40460u)) return;
    // 80B40460: addi    r4, r4, 29196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29196);

label_80B40464:
    ctx->pc = 0x80B40464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B40464: stw     r3, 0(r4)
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
label_80B40468:
    ctx->pc = 0x80B40468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40468u)) return;
    // 80B40468: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B4046C:
    ctx->pc = 0x80B4046Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4046Cu)) return;
    // 80B4046C: addi    r3, r3, 29192
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29192);

label_80B40470:
    ctx->pc = 0x80B40470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40470: stw     r31, 0(r3)
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
label_80B40474:
    ctx->pc = 0x80B40474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40474: lwz     r31, 12(r1)
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
label_80B40478:
    ctx->pc = 0x80B40478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40478: lwz     r0, 20(r1)
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
label_80B4047C:
    ctx->pc = 0x80B4047Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B4047Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B4047C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40480:
    ctx->pc = 0x80B40480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40480u)) return;
    // 80B40480: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B40484:
    ctx->pc = 0x80B40484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40484u)) return;
    // 80B40484: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40488:
    ctx->pc = 0x80B40488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B40488: stwu     r1, -32(r1)
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
label_80B4048C:
    ctx->pc = 0x80B4048Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4048Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B4048C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40490:
    ctx->pc = 0x80B40490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B40490: stw     r0, 36(r1)
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
label_80B40494:
    ctx->pc = 0x80B40494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40494: stw     r31, 28(r1)
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
label_80B40498:
    ctx->pc = 0x80B40498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40498: stw     r30, 24(r1)
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
label_80B4049C:
    ctx->pc = 0x80B4049Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4049Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B4049C: stw     r29, 20(r1)
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
label_80B404A0:
    ctx->pc = 0x80B404A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B404A0: stw     r28, 16(r1)
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
label_80B404A4:
    ctx->pc = 0x80B404A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404A4u)) return;
    // 80B404A4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B404A8:
    ctx->pc = 0x80B404A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404A8u)) return;
    // 80B404A8: addi    r30, r3, 29196
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(29196);

label_80B404AC:
    ctx->pc = 0x80B404ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B404AC: lwz     r0, 0(r30)
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
label_80B404B0:
    ctx->pc = 0x80B404B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404B0u)) return;
    // 80B404B0: cmplwi  r0, 0x0000
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

label_80B404B4:
    ctx->pc = 0x80B404B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404B4u)) return;
    // 80B404B4: bc    12, 2, 0x80B40514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B40514;
        }
    }

label_80B404B8:
    ctx->pc = 0x80B404B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B404B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B404B8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80B404BC:
    ctx->pc = 0x80B404BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404BCu)) return;
    // 80B404BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80B404C0:
    ctx->pc = 0x80B404C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404C0u)) return;
    // 80B404C0: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B404C4:
    ctx->pc = 0x80B404C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404C4u)) return;
    // 80B404C4: addi    r31, r3, 29192
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(29192);

label_80B404C8:
    ctx->pc = 0x80B404C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404C8u)) return;
    // 80B404C8: b       0x80B404E8
    {
            goto label_80B404E8;
    }

label_80B404CC:
    ctx->pc = 0x80B404CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B404CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80B404CC: lwz     r3, 0(r30)
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
label_80B404D0:
    ctx->pc = 0x80B404D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B404D0: lwzx    r3, r3, r29
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
label_80B404D4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404D4u)) return;
    // 80B404D4: cmplwi  r3, 0x0000
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

label_80B404D8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404D8u)) return;
    // 80B404D8: bc    12, 2, 0x80B404E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B404E0;
        }
    }

label_80B404DC:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B404DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B404DC: bl      0x8050F9E0
    {
            ctx->lr = 0x80B404E0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B404E0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B404E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80B404E0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80B404E4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404E4u)) return;
    // 80B404E4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80B404E8:
    ctx->pc = 0x80B404E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B404E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B404E8: lwz     r0, 0(r31)
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
label_80B404EC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404ECu)) return;
    // 80B404EC: cmpw    r28, r0
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

label_80B404F0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404F0u)) return;
    // 80B404F0: bc    12, 0, 0x80B404CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B404CCu;
                return;
            }
            goto label_80B404CC;
        }
    }

label_80B404F4:
    ctx->pc = 0x80B404F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B404F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B404F4: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B404F8:
    ctx->pc = 0x80B404F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404F8u)) return;
    // 80B404F8: addi    r3, r3, 29196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29196);

label_80B404FC:
    ctx->pc = 0x80B404FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B404FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B404FC: lwz     r3, 0(r3)
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
label_80B40500:
    ctx->pc = 0x80B40500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40500u)) return;
    // 80B40500: bl      0x8050ED40
    {
            ctx->lr = 0x80B40504u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80B40504:
    ctx->pc = 0x80B40504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B40504: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B40508:
    ctx->pc = 0x80B40508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40508u)) return;
    // 80B40508: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B4050C:
    ctx->pc = 0x80B4050Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4050Cu)) return;
    // 80B4050C: addi    r3, r3, 29196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29196);

label_80B40510:
    ctx->pc = 0x80B40510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B40510: stw     r0, 0(r3)
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
label_80B40514:
    ctx->pc = 0x80B40514u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40514u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40514: lwz     r31, 28(r1)
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
label_80B40518:
    ctx->pc = 0x80B40518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40518: lwz     r30, 24(r1)
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
label_80B4051C:
    ctx->pc = 0x80B4051Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4051Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B4051C: lwz     r29, 20(r1)
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
label_80B40520:
    ctx->pc = 0x80B40520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40520: lwz     r28, 16(r1)
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
label_80B40524:
    ctx->pc = 0x80B40524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40524: lwz     r0, 36(r1)
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
label_80B40528:
    ctx->pc = 0x80B40528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40528: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B4052C:
    ctx->pc = 0x80B4052Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4052Cu)) return;
    // 80B4052C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B40530:
    ctx->pc = 0x80B40530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40530u)) return;
    // 80B40530: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40534:
    ctx->pc = 0x80B40534u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40534u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40534: stwu     r1, -16(r1)
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
label_80B40538:
    ctx->pc = 0x80B40538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40538: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B4053C:
    ctx->pc = 0x80B4053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4053Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B4053C: stw     r0, 20(r1)
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
label_80B40540:
    ctx->pc = 0x80B40540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40540: stw     r31, 12(r1)
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
label_80B40544:
    ctx->pc = 0x80B40544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40544u)) return;
    // 80B40544: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B40548:
    ctx->pc = 0x80B40548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40548u)) return;
    // 80B40548: addi    r6, r6, 29192
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29192);

label_80B4054C:
    ctx->pc = 0x80B4054Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4054Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B4054C: lwz     r0, 0(r6)
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
label_80B40550:
    ctx->pc = 0x80B40550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40550u)) return;
    // 80B40550: cmpw    r3, r0
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

label_80B40554:
    ctx->pc = 0x80B40554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40554u)) return;
    // 80B40554: bc    4, 0, 0x80B40590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B40590;
        }
    }

label_80B40558:
    ctx->pc = 0x80B40558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B40558: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B4055C:
    ctx->pc = 0x80B4055Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4055Cu)) return;
    // 80B4055C: addi    r6, r6, 29196
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29196);

label_80B40560:
    ctx->pc = 0x80B40560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40560: lwz     r6, 0(r6)
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
label_80B40564:
    ctx->pc = 0x80B40564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40564u)) return;
    // 80B40564: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B40568:
    ctx->pc = 0x80B40568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40568: lwzx    r0, r6, r31
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
label_80B4056C:
    ctx->pc = 0x80B4056Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4056Cu)) return;
    // 80B4056C: cmplwi  r0, 0x0000
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

label_80B40570:
    ctx->pc = 0x80B40570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40570u)) return;
    // 80B40570: bc    4, 2, 0x80B40590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B40590;
        }
    }

label_80B40574:
    ctx->pc = 0x80B40574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B40574: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B40578:
    ctx->pc = 0x80B40578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40578u)) return;
    // 80B40578: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B4057C:
    ctx->pc = 0x80B4057Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4057Cu)) return;
    // 80B4057C: bl      0x80B40280
    {
            ctx->lr = 0x80B40580u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B40280u;
                return;
            }
            goto label_80B40280;
    }

label_80B40580:
    ctx->pc = 0x80B40580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80B40580: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40584:
    ctx->pc = 0x80B40584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40584u)) return;
    // 80B40584: addi    r4, r4, 29196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29196);

label_80B40588:
    ctx->pc = 0x80B40588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B40588: lwz     r4, 0(r4)
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
label_80B4058C:
    ctx->pc = 0x80B4058Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4058Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B4058C: stwx    r3, r4, r31
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
label_80B40590:
    ctx->pc = 0x80B40590u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40590u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40590: lwz     r31, 12(r1)
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
label_80B40594:
    ctx->pc = 0x80B40594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40594: lwz     r0, 20(r1)
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
label_80B40598:
    ctx->pc = 0x80B40598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40598: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B4059C:
    ctx->pc = 0x80B4059Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4059Cu)) return;
    // 80B4059C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B405A0:
    ctx->pc = 0x80B405A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405A0u)) return;
    // 80B405A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B405A4:
    ctx->pc = 0x80B405A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B405A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B405A4: stwu     r1, -16(r1)
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
label_80B405A8:
    ctx->pc = 0x80B405A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B405A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B405AC:
    ctx->pc = 0x80B405ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B405AC: stw     r0, 20(r1)
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
label_80B405B0:
    ctx->pc = 0x80B405B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B405B0: stw     r31, 12(r1)
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
label_80B405B4:
    ctx->pc = 0x80B405B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405B4u)) return;
    // 80B405B4: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B405B8:
    ctx->pc = 0x80B405B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405B8u)) return;
    // 80B405B8: addi    r4, r4, 29192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29192);

label_80B405BC:
    ctx->pc = 0x80B405BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B405BC: lwz     r0, 0(r4)
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
label_80B405C0:
    ctx->pc = 0x80B405C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405C0u)) return;
    // 80B405C0: cmpw    r3, r0
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

label_80B405C4:
    ctx->pc = 0x80B405C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405C4u)) return;
    // 80B405C4: bc    4, 0, 0x80B405FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B405FC;
        }
    }

label_80B405C8:
    ctx->pc = 0x80B405C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B405C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B405C8: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B405CC:
    ctx->pc = 0x80B405CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405CCu)) return;
    // 80B405CC: addi    r4, r4, 29196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29196);

label_80B405D0:
    ctx->pc = 0x80B405D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B405D0: lwz     r4, 0(r4)
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
label_80B405D4:
    ctx->pc = 0x80B405D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405D4u)) return;
    // 80B405D4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B405D8:
    ctx->pc = 0x80B405D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B405D8: lwzx    r3, r4, r31
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
label_80B405DC:
    ctx->pc = 0x80B405DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405DCu)) return;
    // 80B405DC: cmplwi  r3, 0x0000
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

label_80B405E0:
    ctx->pc = 0x80B405E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405E0u)) return;
    // 80B405E0: bc    12, 2, 0x80B405FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B405FC;
        }
    }

label_80B405E4:
    ctx->pc = 0x80B405E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B405E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B405E4: bl      0x8050F9E0
    {
            ctx->lr = 0x80B405E8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80B405E8:
    ctx->pc = 0x80B405E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B405E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80B405E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80B405EC:
    ctx->pc = 0x80B405ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405ECu)) return;
    // 80B405EC: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B405F0:
    ctx->pc = 0x80B405F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405F0u)) return;
    // 80B405F0: addi    r3, r3, 29196
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29196);

label_80B405F4:
    ctx->pc = 0x80B405F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80B405F4: lwz     r3, 0(r3)
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
label_80B405F8:
    ctx->pc = 0x80B405F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B405F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80B405F8: stwx    r0, r3, r31
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
label_80B405FC:
    ctx->pc = 0x80B405FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B405FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B405FC: lwz     r31, 12(r1)
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
label_80B40600:
    ctx->pc = 0x80B40600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40600: lwz     r0, 20(r1)
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
label_80B40604:
    ctx->pc = 0x80B40604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40604: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40608:
    ctx->pc = 0x80B40608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40608u)) return;
    // 80B40608: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B4060C:
    ctx->pc = 0x80B4060Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4060Cu)) return;
    // 80B4060C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40610:
    ctx->pc = 0x80B40610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40610: stwu     r1, -16(r1)
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
label_80B40614:
    ctx->pc = 0x80B40614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40614: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40618:
    ctx->pc = 0x80B40618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40618: stw     r0, 20(r1)
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
label_80B4061C:
    ctx->pc = 0x80B4061Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4061Cu)) return;
    // 80B4061C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B40620:
    ctx->pc = 0x80B40620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40620u)) return;
    // 80B40620: addi    r6, r6, 29192
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29192);

label_80B40624:
    ctx->pc = 0x80B40624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40624: lwz     r0, 0(r6)
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
label_80B40628:
    ctx->pc = 0x80B40628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40628u)) return;
    // 80B40628: cmpw    r3, r0
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

label_80B4062C:
    ctx->pc = 0x80B4062Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4062Cu)) return;
    // 80B4062C: bc    4, 0, 0x80B40650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B40650;
        }
    }

label_80B40630:
    ctx->pc = 0x80B40630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B40630: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B40634:
    ctx->pc = 0x80B40634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40634u)) return;
    // 80B40634: addi    r6, r6, 29196
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29196);

label_80B40638:
    ctx->pc = 0x80B40638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40638: lwz     r6, 0(r6)
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
label_80B4063C:
    ctx->pc = 0x80B4063Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4063Cu)) return;
    // 80B4063C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B40640:
    ctx->pc = 0x80B40640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40640: lwzx    r3, r6, r0
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
label_80B40644:
    ctx->pc = 0x80B40644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40644u)) return;
    // 80B40644: cmplwi  r3, 0x0000
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

label_80B40648:
    ctx->pc = 0x80B40648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40648u)) return;
    // 80B40648: bc    12, 2, 0x80B40650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B40650;
        }
    }

label_80B4064C:
    ctx->pc = 0x80B4064Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4064Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B4064C: bl      0x80B4033C
    {
            ctx->lr = 0x80B40650u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B4033Cu;
                return;
            }
            goto label_80B4033C;
    }

label_80B40650:
    ctx->pc = 0x80B40650u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40650u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40650: lwz     r0, 20(r1)
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
label_80B40654:
    ctx->pc = 0x80B40654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B40654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40654: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40658:
    ctx->pc = 0x80B40658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40658u)) return;
    // 80B40658: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B4065C:
    ctx->pc = 0x80B4065Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4065Cu)) return;
    // 80B4065C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40660:
    ctx->pc = 0x80B40660u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40660u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40660: stwu     r1, -16(r1)
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
label_80B40664:
    ctx->pc = 0x80B40664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40664: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40668:
    ctx->pc = 0x80B40668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B40668: stw     r0, 20(r1)
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
label_80B4066C:
    ctx->pc = 0x80B4066Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4066Cu)) return;
    // 80B4066C: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B40670:
    ctx->pc = 0x80B40670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40670u)) return;
    // 80B40670: addi    r6, r6, 29192
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29192);

label_80B40674:
    ctx->pc = 0x80B40674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40674: lwz     r0, 0(r6)
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
label_80B40678:
    ctx->pc = 0x80B40678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40678u)) return;
    // 80B40678: cmpw    r3, r0
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

label_80B4067C:
    ctx->pc = 0x80B4067Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4067Cu)) return;
    // 80B4067C: bc    4, 0, 0x80B406A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B406A0;
        }
    }

label_80B40680:
    ctx->pc = 0x80B40680u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40680u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B40680: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B40684:
    ctx->pc = 0x80B40684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40684u)) return;
    // 80B40684: addi    r6, r6, 29196
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29196);

label_80B40688:
    ctx->pc = 0x80B40688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B40688: lwz     r6, 0(r6)
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
label_80B4068C:
    ctx->pc = 0x80B4068Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4068Cu)) return;
    // 80B4068C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B40690:
    ctx->pc = 0x80B40690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B40690: lwzx    r3, r6, r0
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
label_80B40694:
    ctx->pc = 0x80B40694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40694u)) return;
    // 80B40694: cmplwi  r3, 0x0000
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

label_80B40698:
    ctx->pc = 0x80B40698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40698u)) return;
    // 80B40698: bc    12, 2, 0x80B406A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B406A0;
        }
    }

label_80B4069C:
    ctx->pc = 0x80B4069Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4069Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B4069C: bl      0x80B4038C
    {
            ctx->lr = 0x80B406A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B4038Cu;
                return;
            }
            goto label_80B4038C;
    }

label_80B406A0:
    ctx->pc = 0x80B406A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B406A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B406A0: lwz     r0, 20(r1)
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
label_80B406A4:
    ctx->pc = 0x80B406A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B406A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B406A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B406A8:
    ctx->pc = 0x80B406A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406A8u)) return;
    // 80B406A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B406AC:
    ctx->pc = 0x80B406ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406ACu)) return;
    // 80B406AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B406B0:
    ctx->pc = 0x80B406B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B406B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B406B0: stwu     r1, -16(r1)
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
label_80B406B4:
    ctx->pc = 0x80B406B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B406B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B406B8:
    ctx->pc = 0x80B406B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B406B8: stw     r0, 20(r1)
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
label_80B406BC:
    ctx->pc = 0x80B406BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406BCu)) return;
    // 80B406BC: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B406C0:
    ctx->pc = 0x80B406C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406C0u)) return;
    // 80B406C0: addi    r6, r6, 29192
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29192);

label_80B406C4:
    ctx->pc = 0x80B406C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B406C4: lwz     r0, 0(r6)
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
label_80B406C8:
    ctx->pc = 0x80B406C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406C8u)) return;
    // 80B406C8: cmpw    r3, r0
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

label_80B406CC:
    ctx->pc = 0x80B406CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406CCu)) return;
    // 80B406CC: bc    4, 0, 0x80B406F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80B406F0;
        }
    }

label_80B406D0:
    ctx->pc = 0x80B406D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B406D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80B406D0: lis     r6, -27571
    ctx->gpr[6] = ((u32)(s32)(-27571) << 16);

label_80B406D4:
    ctx->pc = 0x80B406D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406D4u)) return;
    // 80B406D4: addi    r6, r6, 29196
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29196);

label_80B406D8:
    ctx->pc = 0x80B406D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B406D8: lwz     r6, 0(r6)
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
label_80B406DC:
    ctx->pc = 0x80B406DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406DCu)) return;
    // 80B406DC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80B406E0:
    ctx->pc = 0x80B406E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B406E0: lwzx    r3, r6, r0
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
label_80B406E4:
    ctx->pc = 0x80B406E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406E4u)) return;
    // 80B406E4: cmplwi  r3, 0x0000
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

label_80B406E8:
    ctx->pc = 0x80B406E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406E8u)) return;
    // 80B406E8: bc    12, 2, 0x80B406F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80B406F0;
        }
    }

label_80B406EC:
    ctx->pc = 0x80B406ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B406ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80B406EC: bl      0x80B403DC
    {
            ctx->lr = 0x80B406F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80B403DCu;
                return;
            }
            goto label_80B403DC;
    }

label_80B406F0:
    ctx->pc = 0x80B406F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B406F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B406F0: lwz     r0, 20(r1)
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
label_80B406F4:
    ctx->pc = 0x80B406F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B406F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B406F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B406F8:
    ctx->pc = 0x80B406F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406F8u)) return;
    // 80B406F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80B406FC:
    ctx->pc = 0x80B406FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B406FCu)) return;
    // 80B406FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

label_80B40700:
    ctx->pc = 0x80B40700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80B40700: stwu     r1, -32(r1)
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
label_80B40704:
    ctx->pc = 0x80B40704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40704u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B40704: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B40708:
    ctx->pc = 0x80B40708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80B40708: stw     r0, 36(r1)
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
label_80B4070C:
    ctx->pc = 0x80B4070Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4070Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B4070C: stw     r31, 28(r1)
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
label_80B40710:
    ctx->pc = 0x80B40710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B40710: stw     r30, 24(r1)
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
label_80B40714:
    ctx->pc = 0x80B40714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B40714: stw     r29, 20(r1)
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
label_80B40718:
    ctx->pc = 0x80B40718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B40718: stw     r28, 16(r1)
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
label_80B4071C:
    ctx->pc = 0x80B4071Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4071Cu)) return;
    // 80B4071C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80B40720:
    ctx->pc = 0x80B40720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40720u)) return;
    // 80B40720: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B40724:
    ctx->pc = 0x80B40724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40724u)) return;
    // 80B40724: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80B40728:
    ctx->pc = 0x80B40728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40728u)) return;
    // 80B40728: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80B4072C:
    ctx->pc = 0x80B4072Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4072Cu)) return;
    // 80B4072C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80B40730:
    ctx->pc = 0x80B40730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40730u)) return;
    // 80B40730: bl      0x80401DB0
    {
            ctx->lr = 0x80B40734u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80B40734:
    ctx->pc = 0x80B40734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80B40734: lis     r4, -27571
    ctx->gpr[4] = ((u32)(s32)(-27571) << 16);

label_80B40738:
    ctx->pc = 0x80B40738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40738u)) return;
    // 80B40738: addi    r4, r4, 29200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29200);

label_80B4073C:
    ctx->pc = 0x80B4073Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4073Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B4073C: lwz     r0, 0(r4)
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
label_80B40740:
    ctx->pc = 0x80B40740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40740u)) return;
    // 80B40740: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80B40744:
    ctx->pc = 0x80B40744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40744u)) return;
    // 80B40744: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B40748:
    ctx->pc = 0x80B40748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40748u)) return;
    // 80B40748: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80B4074C:
    ctx->pc = 0x80B4074Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4074Cu)) return;
    // 80B4074C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80B40750:
    ctx->pc = 0x80B40750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40750u)) return;
    // 80B40750: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80B40754:
    ctx->pc = 0x80B40754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40754u)) return;
    // 80B40754: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80B40758:
    ctx->pc = 0x80B40758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40758u)) return;
    // 80B40758: bl      0x8050A0D4
    {
            ctx->lr = 0x80B4075Cu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80B4075C:
    ctx->pc = 0x80B4075Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B4075Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B4075C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B40760:
    ctx->pc = 0x80B40760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40760u)) return;
    // 80B40760: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80B40764:
    ctx->pc = 0x80B40764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40764u)) return;
    // 80B40764: bl      0x80509C74
    {
            ctx->lr = 0x80B40768u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80B40768:
    ctx->pc = 0x80B40768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B40768: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B4076C:
    ctx->pc = 0x80B4076Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4076Cu)) return;
    // 80B4076C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80B40770:
    ctx->pc = 0x80B40770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40770u)) return;
    // 80B40770: bl      0x80509BF8
    {
            ctx->lr = 0x80B40774u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80B40774:
    ctx->pc = 0x80B40774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80B40774: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80B40778:
    ctx->pc = 0x80B40778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40778u)) return;
    // 80B40778: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80B4077C:
    ctx->pc = 0x80B4077Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4077Cu)) return;
    // 80B4077C: bl      0x80509B94
    {
            ctx->lr = 0x80B40780u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80B40780:
    ctx->pc = 0x80B40780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80B40780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80B40780: lis     r3, -27571
    ctx->gpr[3] = ((u32)(s32)(-27571) << 16);

label_80B40784:
    ctx->pc = 0x80B40784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40784u)) return;
    // 80B40784: addi    r4, r3, 29200
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29200);

label_80B40788:
    ctx->pc = 0x80B40788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80B40788: lwz     r3, 0(r4)
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
label_80B4078C:
    ctx->pc = 0x80B4078Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4078Cu)) return;
    // 80B4078C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80B40790:
    ctx->pc = 0x80B40790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80B40790: stw     r0, 0(r4)
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
label_80B40794:
    ctx->pc = 0x80B40794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40794u)) return;
    // 80B40794: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80B40798:
    ctx->pc = 0x80B40798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B40798u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80B40798: stw     r0, 0(r4)
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
label_80B4079C:
    ctx->pc = 0x80B4079Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B4079Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80B4079C: lwz     r31, 28(r1)
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
label_80B407A0:
    ctx->pc = 0x80B407A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B407A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80B407A0: lwz     r30, 24(r1)
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
label_80B407A4:
    ctx->pc = 0x80B407A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B407A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80B407A4: lwz     r29, 20(r1)
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
label_80B407A8:
    ctx->pc = 0x80B407A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B407A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80B407A8: lwz     r28, 16(r1)
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
label_80B407AC:
    ctx->pc = 0x80B407ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B407ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80B407AC: lwz     r0, 36(r1)
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
label_80B407B0:
    ctx->pc = 0x80B407B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80B407B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80B407B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80B407B4:
    ctx->pc = 0x80B407B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B407B4u)) return;
    // 80B407B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80B407B8:
    ctx->pc = 0x80B407B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80B407B8u)) return;
    // 80B407B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80B3ED80;
        }
    }

    ctx->pc = 0x80B407BCu;
    return;
return_dispatch_80B3ED80:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80B3ED9Cu: goto label_80B3ED9C;
    case 0x80B3EDC4u: goto label_80B3EDC4;
    case 0x80B3EDC8u: goto label_80B3EDC8;
    case 0x80B3EDCCu: goto label_80B3EDCC;
    case 0x80B3EDD4u: goto label_80B3EDD4;
    case 0x80B3EDDCu: goto label_80B3EDDC;
    case 0x80B3EDE4u: goto label_80B3EDE4;
    case 0x80B3EE0Cu: goto label_80B3EE0C;
    case 0x80B3EE14u: goto label_80B3EE14;
    case 0x80B3EE24u: goto label_80B3EE24;
    case 0x80B3EE2Cu: goto label_80B3EE2C;
    case 0x80B3EE54u: goto label_80B3EE54;
    case 0x80B3EE5Cu: goto label_80B3EE5C;
    case 0x80B3EE68u: goto label_80B3EE68;
    case 0x80B3EE7Cu: goto label_80B3EE7C;
    case 0x80B3EE88u: goto label_80B3EE88;
    case 0x80B3EE94u: goto label_80B3EE94;
    case 0x80B3EEA0u: goto label_80B3EEA0;
    case 0x80B3EEC8u: goto label_80B3EEC8;
    case 0x80B3EED0u: goto label_80B3EED0;
    case 0x80B3EEDCu: goto label_80B3EEDC;
    case 0x80B3EEF0u: goto label_80B3EEF0;
    case 0x80B3EEFCu: goto label_80B3EEFC;
    case 0x80B3EF1Cu: goto label_80B3EF1C;
    case 0x80B3EF28u: goto label_80B3EF28;
    case 0x80B3EF64u: goto label_80B3EF64;
    case 0x80B3EF6Cu: goto label_80B3EF6C;
    case 0x80B3EF74u: goto label_80B3EF74;
    case 0x80B3EF9Cu: goto label_80B3EF9C;
    case 0x80B3EFB8u: goto label_80B3EFB8;
    case 0x80B3EFE8u: goto label_80B3EFE8;
    case 0x80B3EFF0u: goto label_80B3EFF0;
    case 0x80B3EFF8u: goto label_80B3EFF8;
    case 0x80B3F004u: goto label_80B3F004;
    case 0x80B3F028u: goto label_80B3F028;
    case 0x80B3F030u: goto label_80B3F030;
    case 0x80B3F03Cu: goto label_80B3F03C;
    case 0x80B3F060u: goto label_80B3F060;
    case 0x80B3F068u: goto label_80B3F068;
    case 0x80B3F070u: goto label_80B3F070;
    case 0x80B3F0B0u: goto label_80B3F0B0;
    case 0x80B3F0B8u: goto label_80B3F0B8;
    case 0x80B3F0F8u: goto label_80B3F0F8;
    case 0x80B3F114u: goto label_80B3F114;
    case 0x80B3F144u: goto label_80B3F144;
    case 0x80B3F14Cu: goto label_80B3F14C;
    case 0x80B3F168u: goto label_80B3F168;
    case 0x80B3F198u: goto label_80B3F198;
    case 0x80B3F1B4u: goto label_80B3F1B4;
    case 0x80B3F1E4u: goto label_80B3F1E4;
    case 0x80B3F1ECu: goto label_80B3F1EC;
    case 0x80B3F1F4u: goto label_80B3F1F4;
    case 0x80B3F1F8u: goto label_80B3F1F8;
    case 0x80B3F200u: goto label_80B3F200;
    case 0x80B3F204u: goto label_80B3F204;
    case 0x80B3F20Cu: goto label_80B3F20C;
    case 0x80B3F214u: goto label_80B3F214;
    case 0x80B3F254u: goto label_80B3F254;
    case 0x80B3F25Cu: goto label_80B3F25C;
    case 0x80B3F29Cu: goto label_80B3F29C;
    case 0x80B3F2A4u: goto label_80B3F2A4;
    case 0x80B3F2A8u: goto label_80B3F2A8;
    case 0x80B3F2B0u: goto label_80B3F2B0;
    case 0x80B3F2B4u: goto label_80B3F2B4;
    case 0x80B3F2BCu: goto label_80B3F2BC;
    case 0x80B3F2C8u: goto label_80B3F2C8;
    case 0x80B3F2D0u: goto label_80B3F2D0;
    case 0x80B3F2F4u: goto label_80B3F2F4;
    case 0x80B3F2FCu: goto label_80B3F2FC;
    case 0x80B3F300u: goto label_80B3F300;
    case 0x80B3F308u: goto label_80B3F308;
    case 0x80B3F30Cu: goto label_80B3F30C;
    case 0x80B3F310u: goto label_80B3F310;
    case 0x80B3F318u: goto label_80B3F318;
    case 0x80B3F320u: goto label_80B3F320;
    case 0x80B3F330u: goto label_80B3F330;
    case 0x80B3F338u: goto label_80B3F338;
    case 0x80B3F34Cu: goto label_80B3F34C;
    case 0x80B3F354u: goto label_80B3F354;
    case 0x80B3F358u: goto label_80B3F358;
    case 0x80B3F374u: goto label_80B3F374;
    case 0x80B3F3A4u: goto label_80B3F3A4;
    case 0x80B3F3C0u: goto label_80B3F3C0;
    case 0x80B3F3C8u: goto label_80B3F3C8;
    case 0x80B3F3F8u: goto label_80B3F3F8;
    case 0x80B3F400u: goto label_80B3F400;
    case 0x80B3F40Cu: goto label_80B3F40C;
    case 0x80B3F414u: goto label_80B3F414;
    case 0x80B3F438u: goto label_80B3F438;
    case 0x80B3F440u: goto label_80B3F440;
    case 0x80B3F444u: goto label_80B3F444;
    case 0x80B3F44Cu: goto label_80B3F44C;
    case 0x80B3F470u: goto label_80B3F470;
    case 0x80B3F478u: goto label_80B3F478;
    case 0x80B3F47Cu: goto label_80B3F47C;
    case 0x80B3F484u: goto label_80B3F484;
    case 0x80B3F488u: goto label_80B3F488;
    case 0x80B3F490u: goto label_80B3F490;
    case 0x80B3F4B8u: goto label_80B3F4B8;
    case 0x80B3F4BCu: goto label_80B3F4BC;
    case 0x80B3F4C4u: goto label_80B3F4C4;
    case 0x80B3F504u: goto label_80B3F504;
    case 0x80B3F520u: goto label_80B3F520;
    case 0x80B3F550u: goto label_80B3F550;
    case 0x80B3F558u: goto label_80B3F558;
    case 0x80B3F55Cu: goto label_80B3F55C;
    case 0x80B3F564u: goto label_80B3F564;
    case 0x80B3F574u: goto label_80B3F574;
    case 0x80B3F57Cu: goto label_80B3F57C;
    case 0x80B3F584u: goto label_80B3F584;
    case 0x80B3F590u: goto label_80B3F590;
    case 0x80B3F598u: goto label_80B3F598;
    case 0x80B3F5BCu: goto label_80B3F5BC;
    case 0x80B3F5C4u: goto label_80B3F5C4;
    case 0x80B3F5E8u: goto label_80B3F5E8;
    case 0x80B3F5F0u: goto label_80B3F5F0;
    case 0x80B3F5F4u: goto label_80B3F5F4;
    case 0x80B3F5FCu: goto label_80B3F5FC;
    case 0x80B3F600u: goto label_80B3F600;
    case 0x80B3F604u: goto label_80B3F604;
    case 0x80B3F60Cu: goto label_80B3F60C;
    case 0x80B3F614u: goto label_80B3F614;
    case 0x80B3F618u: goto label_80B3F618;
    case 0x80B3F634u: goto label_80B3F634;
    case 0x80B3F640u: goto label_80B3F640;
    case 0x80B3F65Cu: goto label_80B3F65C;
    case 0x80B3F668u: goto label_80B3F668;
    case 0x80B3F670u: goto label_80B3F670;
    case 0x80B3F694u: goto label_80B3F694;
    case 0x80B3F69Cu: goto label_80B3F69C;
    case 0x80B3F6A0u: goto label_80B3F6A0;
    case 0x80B3F6BCu: goto label_80B3F6BC;
    case 0x80B3F6C0u: goto label_80B3F6C0;
    case 0x80B3F6DCu: goto label_80B3F6DC;
    case 0x80B3F6E0u: goto label_80B3F6E0;
    case 0x80B3F6E4u: goto label_80B3F6E4;
    case 0x80B3F6ECu: goto label_80B3F6EC;
    case 0x80B3F6F4u: goto label_80B3F6F4;
    case 0x80B3F724u: goto label_80B3F724;
    case 0x80B3F754u: goto label_80B3F754;
    case 0x80B3F75Cu: goto label_80B3F75C;
    case 0x80B3F768u: goto label_80B3F768;
    case 0x80B3F774u: goto label_80B3F774;
    case 0x80B3F794u: goto label_80B3F794;
    case 0x80B3F79Cu: goto label_80B3F79C;
    case 0x80B3F7A8u: goto label_80B3F7A8;
    case 0x80B3F7BCu: goto label_80B3F7BC;
    case 0x80B3F7DCu: goto label_80B3F7DC;
    case 0x80B3F7F8u: goto label_80B3F7F8;
    case 0x80B3F804u: goto label_80B3F804;
    case 0x80B3F820u: goto label_80B3F820;
    case 0x80B3F82Cu: goto label_80B3F82C;
    case 0x80B3F834u: goto label_80B3F834;
    case 0x80B3F858u: goto label_80B3F858;
    case 0x80B3F860u: goto label_80B3F860;
    case 0x80B3F884u: goto label_80B3F884;
    case 0x80B3F88Cu: goto label_80B3F88C;
    case 0x80B3F890u: goto label_80B3F890;
    case 0x80B3F8ACu: goto label_80B3F8AC;
    case 0x80B3F8B0u: goto label_80B3F8B0;
    case 0x80B3F8CCu: goto label_80B3F8CC;
    case 0x80B3F8D0u: goto label_80B3F8D0;
    case 0x80B3F8D8u: goto label_80B3F8D8;
    case 0x80B3F8E0u: goto label_80B3F8E0;
    case 0x80B3F8ECu: goto label_80B3F8EC;
    case 0x80B3F8F4u: goto label_80B3F8F4;
    case 0x80B3F918u: goto label_80B3F918;
    case 0x80B3F920u: goto label_80B3F920;
    case 0x80B3F924u: goto label_80B3F924;
    case 0x80B3F92Cu: goto label_80B3F92C;
    case 0x80B3F930u: goto label_80B3F930;
    case 0x80B3F934u: goto label_80B3F934;
    case 0x80B3F938u: goto label_80B3F938;
    case 0x80B3F940u: goto label_80B3F940;
    case 0x80B3F954u: goto label_80B3F954;
    case 0x80B3F970u: goto label_80B3F970;
    case 0x80B3F9A0u: goto label_80B3F9A0;
    case 0x80B3F9A8u: goto label_80B3F9A8;
    case 0x80B3F9D0u: goto label_80B3F9D0;
    case 0x80B3FA04u: goto label_80B3FA04;
    case 0x80B3FA0Cu: goto label_80B3FA0C;
    case 0x80B3FA28u: goto label_80B3FA28;
    case 0x80B3FA58u: goto label_80B3FA58;
    case 0x80B3FA60u: goto label_80B3FA60;
    case 0x80B3FA68u: goto label_80B3FA68;
    case 0x80B3FA90u: goto label_80B3FA90;
    case 0x80B3FA98u: goto label_80B3FA98;
    case 0x80B3FA9Cu: goto label_80B3FA9C;
    case 0x80B3FAB8u: goto label_80B3FAB8;
    case 0x80B3FAC4u: goto label_80B3FAC4;
    case 0x80B3FAE0u: goto label_80B3FAE0;
    case 0x80B3FAECu: goto label_80B3FAEC;
    case 0x80B3FAF4u: goto label_80B3FAF4;
    case 0x80B3FB18u: goto label_80B3FB18;
    case 0x80B3FB34u: goto label_80B3FB34;
    case 0x80B3FB64u: goto label_80B3FB64;
    case 0x80B3FB80u: goto label_80B3FB80;
    case 0x80B3FBB0u: goto label_80B3FBB0;
    case 0x80B3FBB8u: goto label_80B3FBB8;
    case 0x80B3FBD4u: goto label_80B3FBD4;
    case 0x80B3FC04u: goto label_80B3FC04;
    case 0x80B3FC08u: goto label_80B3FC08;
    case 0x80B3FC10u: goto label_80B3FC10;
    case 0x80B3FC14u: goto label_80B3FC14;
    case 0x80B3FC18u: goto label_80B3FC18;
    case 0x80B3FC20u: goto label_80B3FC20;
    case 0x80B3FC6Cu: goto label_80B3FC6C;
    case 0x80B3FC74u: goto label_80B3FC74;
    case 0x80B3FCA4u: goto label_80B3FCA4;
    case 0x80B3FCACu: goto label_80B3FCAC;
    case 0x80B3FCB0u: goto label_80B3FCB0;
    case 0x80B3FCB8u: goto label_80B3FCB8;
    case 0x80B3FCE0u: goto label_80B3FCE0;
    case 0x80B3FCE8u: goto label_80B3FCE8;
    case 0x80B3FCF4u: goto label_80B3FCF4;
    case 0x80B3FCFCu: goto label_80B3FCFC;
    case 0x80B3FD20u: goto label_80B3FD20;
    case 0x80B3FD28u: goto label_80B3FD28;
    case 0x80B3FD2Cu: goto label_80B3FD2C;
    case 0x80B3FD34u: goto label_80B3FD34;
    case 0x80B3FD38u: goto label_80B3FD38;
    case 0x80B3FD40u: goto label_80B3FD40;
    case 0x80B3FD48u: goto label_80B3FD48;
    case 0x80B3FD54u: goto label_80B3FD54;
    case 0x80B3FD5Cu: goto label_80B3FD5C;
    case 0x80B3FD80u: goto label_80B3FD80;
    case 0x80B3FD88u: goto label_80B3FD88;
    case 0x80B3FD8Cu: goto label_80B3FD8C;
    case 0x80B3FD94u: goto label_80B3FD94;
    case 0x80B3FD98u: goto label_80B3FD98;
    case 0x80B3FDA0u: goto label_80B3FDA0;
    case 0x80B3FDA8u: goto label_80B3FDA8;
    case 0x80B3FDB4u: goto label_80B3FDB4;
    case 0x80B3FDBCu: goto label_80B3FDBC;
    case 0x80B3FDE0u: goto label_80B3FDE0;
    case 0x80B3FDE8u: goto label_80B3FDE8;
    case 0x80B3FDECu: goto label_80B3FDEC;
    case 0x80B3FDF4u: goto label_80B3FDF4;
    case 0x80B3FDF8u: goto label_80B3FDF8;
    case 0x80B3FDFCu: goto label_80B3FDFC;
    case 0x80B3FE04u: goto label_80B3FE04;
    case 0x80B3FE0Cu: goto label_80B3FE0C;
    case 0x80B3FE18u: goto label_80B3FE18;
    case 0x80B3FE20u: goto label_80B3FE20;
    case 0x80B3FE44u: goto label_80B3FE44;
    case 0x80B3FE4Cu: goto label_80B3FE4C;
    case 0x80B3FE70u: goto label_80B3FE70;
    case 0x80B3FE78u: goto label_80B3FE78;
    case 0x80B3FE7Cu: goto label_80B3FE7C;
    case 0x80B3FE84u: goto label_80B3FE84;
    case 0x80B3FE88u: goto label_80B3FE88;
    case 0x80B3FE8Cu: goto label_80B3FE8C;
    case 0x80B3FE94u: goto label_80B3FE94;
    case 0x80B3FE98u: goto label_80B3FE98;
    case 0x80B3FEA0u: goto label_80B3FEA0;
    case 0x80B3FEACu: goto label_80B3FEAC;
    case 0x80B3FED0u: goto label_80B3FED0;
    case 0x80B3FED8u: goto label_80B3FED8;
    case 0x80B3FF28u: goto label_80B3FF28;
    case 0x80B3FF30u: goto label_80B3FF30;
    case 0x80B3FF60u: goto label_80B3FF60;
    case 0x80B3FF68u: goto label_80B3FF68;
    case 0x80B3FFA8u: goto label_80B3FFA8;
    case 0x80B3FFB0u: goto label_80B3FFB0;
    case 0x80B3FFB4u: goto label_80B3FFB4;
    case 0x80B3FFC4u: goto label_80B3FFC4;
    case 0x80B3FFCCu: goto label_80B3FFCC;
    case 0x80B3FFD8u: goto label_80B3FFD8;
    case 0x80B3FFE0u: goto label_80B3FFE0;
    case 0x80B40004u: goto label_80B40004;
    case 0x80B4000Cu: goto label_80B4000C;
    case 0x80B40030u: goto label_80B40030;
    case 0x80B40038u: goto label_80B40038;
    case 0x80B40040u: goto label_80B40040;
    case 0x80B40048u: goto label_80B40048;
    case 0x80B4004Cu: goto label_80B4004C;
    case 0x80B40054u: goto label_80B40054;
    case 0x80B40094u: goto label_80B40094;
    case 0x80B4009Cu: goto label_80B4009C;
    case 0x80B400A0u: goto label_80B400A0;
    case 0x80B400A8u: goto label_80B400A8;
    case 0x80B400ACu: goto label_80B400AC;
    case 0x80B400B0u: goto label_80B400B0;
    case 0x80B400B8u: goto label_80B400B8;
    case 0x80B400C0u: goto label_80B400C0;
    case 0x80B400C4u: goto label_80B400C4;
    case 0x80B400CCu: goto label_80B400CC;
    case 0x80B400D8u: goto label_80B400D8;
    case 0x80B40100u: goto label_80B40100;
    case 0x80B40108u: goto label_80B40108;
    case 0x80B40118u: goto label_80B40118;
    case 0x80B40120u: goto label_80B40120;
    case 0x80B40128u: goto label_80B40128;
    case 0x80B40134u: goto label_80B40134;
    case 0x80B40138u: goto label_80B40138;
    case 0x80B4013Cu: goto label_80B4013C;
    case 0x80B4014Cu: goto label_80B4014C;
    case 0x80B40174u: goto label_80B40174;
    case 0x80B401D4u: goto label_80B401D4;
    case 0x80B40214u: goto label_80B40214;
    case 0x80B40254u: goto label_80B40254;
    case 0x80B402B0u: goto label_80B402B0;
    case 0x80B402D4u: goto label_80B402D4;
    case 0x80B40370u: goto label_80B40370;
    case 0x80B403C0u: goto label_80B403C0;
    case 0x80B40410u: goto label_80B40410;
    case 0x80B4045Cu: goto label_80B4045C;
    case 0x80B404E0u: goto label_80B404E0;
    case 0x80B40504u: goto label_80B40504;
    case 0x80B40580u: goto label_80B40580;
    case 0x80B405E8u: goto label_80B405E8;
    case 0x80B40650u: goto label_80B40650;
    case 0x80B406A0u: goto label_80B406A0;
    case 0x80B406F0u: goto label_80B406F0;
    case 0x80B40734u: goto label_80B40734;
    case 0x80B4075Cu: goto label_80B4075C;
    case 0x80B40768u: goto label_80B40768;
    case 0x80B40774u: goto label_80B40774;
    case 0x80B40780u: goto label_80B40780;
    default: return;
    }
}

