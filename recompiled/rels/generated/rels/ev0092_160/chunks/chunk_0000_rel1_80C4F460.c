// DolRecomp output
#include "../generated.h"

void func_80C4F460(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C4F460[1080] = {
        &&label_80C4F460,
        &&label_80C4F464,
        &&label_80C4F468,
        &&label_80C4F46C,
        &&label_80C4F470,
        &&label_80C4F474,
        &&label_80C4F478,
        &&label_80C4F47C,
        &&label_80C4F480,
        &&label_80C4F484,
        &&label_80C4F488,
        &&label_80C4F48C,
        &&label_80C4F490,
        &&label_80C4F494,
        &&label_80C4F498,
        &&label_80C4F49C,
        &&label_80C4F4A0,
        &&label_80C4F4A4,
        &&label_80C4F4A8,
        &&label_80C4F4AC,
        &&label_80C4F4B0,
        &&label_80C4F4B4,
        &&label_80C4F4B8,
        &&label_80C4F4BC,
        &&label_80C4F4C0,
        &&label_80C4F4C4,
        &&label_80C4F4C8,
        &&label_80C4F4CC,
        &&label_80C4F4D0,
        &&label_80C4F4D4,
        &&label_80C4F4D8,
        &&label_80C4F4DC,
        &&label_80C4F4E0,
        &&label_80C4F4E4,
        &&label_80C4F4E8,
        &&label_80C4F4EC,
        &&label_80C4F4F0,
        &&label_80C4F4F4,
        &&label_80C4F4F8,
        &&label_80C4F4FC,
        &&label_80C4F500,
        &&label_80C4F504,
        &&label_80C4F508,
        &&label_80C4F50C,
        &&label_80C4F510,
        &&label_80C4F514,
        &&label_80C4F518,
        &&label_80C4F51C,
        &&label_80C4F520,
        &&label_80C4F524,
        &&label_80C4F528,
        &&label_80C4F52C,
        &&label_80C4F530,
        &&label_80C4F534,
        &&label_80C4F538,
        &&label_80C4F53C,
        &&label_80C4F540,
        &&label_80C4F544,
        &&label_80C4F548,
        &&label_80C4F54C,
        &&label_80C4F550,
        &&label_80C4F554,
        &&label_80C4F558,
        &&label_80C4F55C,
        &&label_80C4F560,
        &&label_80C4F564,
        &&label_80C4F568,
        &&label_80C4F56C,
        &&label_80C4F570,
        &&label_80C4F574,
        &&label_80C4F578,
        &&label_80C4F57C,
        &&label_80C4F580,
        &&label_80C4F584,
        &&label_80C4F588,
        &&label_80C4F58C,
        &&label_80C4F590,
        &&label_80C4F594,
        &&label_80C4F598,
        &&label_80C4F59C,
        &&label_80C4F5A0,
        &&label_80C4F5A4,
        &&label_80C4F5A8,
        &&label_80C4F5AC,
        &&label_80C4F5B0,
        &&label_80C4F5B4,
        &&label_80C4F5B8,
        &&label_80C4F5BC,
        &&label_80C4F5C0,
        &&label_80C4F5C4,
        &&label_80C4F5C8,
        &&label_80C4F5CC,
        &&label_80C4F5D0,
        &&label_80C4F5D4,
        &&label_80C4F5D8,
        &&label_80C4F5DC,
        &&label_80C4F5E0,
        &&label_80C4F5E4,
        &&label_80C4F5E8,
        &&label_80C4F5EC,
        &&label_80C4F5F0,
        &&label_80C4F5F4,
        &&label_80C4F5F8,
        &&label_80C4F5FC,
        &&label_80C4F600,
        &&label_80C4F604,
        &&label_80C4F608,
        &&label_80C4F60C,
        &&label_80C4F610,
        &&label_80C4F614,
        &&label_80C4F618,
        &&label_80C4F61C,
        &&label_80C4F620,
        &&label_80C4F624,
        &&label_80C4F628,
        &&label_80C4F62C,
        &&label_80C4F630,
        &&label_80C4F634,
        &&label_80C4F638,
        &&label_80C4F63C,
        &&label_80C4F640,
        &&label_80C4F644,
        &&label_80C4F648,
        &&label_80C4F64C,
        &&label_80C4F650,
        &&label_80C4F654,
        &&label_80C4F658,
        &&label_80C4F65C,
        &&label_80C4F660,
        &&label_80C4F664,
        &&label_80C4F668,
        &&label_80C4F66C,
        &&label_80C4F670,
        &&label_80C4F674,
        &&label_80C4F678,
        &&label_80C4F67C,
        &&label_80C4F680,
        &&label_80C4F684,
        &&label_80C4F688,
        &&label_80C4F68C,
        &&label_80C4F690,
        &&label_80C4F694,
        &&label_80C4F698,
        &&label_80C4F69C,
        &&label_80C4F6A0,
        &&label_80C4F6A4,
        &&label_80C4F6A8,
        &&label_80C4F6AC,
        &&label_80C4F6B0,
        &&label_80C4F6B4,
        &&label_80C4F6B8,
        &&label_80C4F6BC,
        &&label_80C4F6C0,
        &&label_80C4F6C4,
        &&label_80C4F6C8,
        &&label_80C4F6CC,
        &&label_80C4F6D0,
        &&label_80C4F6D4,
        &&label_80C4F6D8,
        &&label_80C4F6DC,
        &&label_80C4F6E0,
        &&label_80C4F6E4,
        &&label_80C4F6E8,
        &&label_80C4F6EC,
        &&label_80C4F6F0,
        &&label_80C4F6F4,
        &&label_80C4F6F8,
        &&label_80C4F6FC,
        &&label_80C4F700,
        &&label_80C4F704,
        &&label_80C4F708,
        &&label_80C4F70C,
        &&label_80C4F710,
        &&label_80C4F714,
        &&label_80C4F718,
        &&label_80C4F71C,
        &&label_80C4F720,
        &&label_80C4F724,
        &&label_80C4F728,
        &&label_80C4F72C,
        &&label_80C4F730,
        &&label_80C4F734,
        &&label_80C4F738,
        &&label_80C4F73C,
        &&label_80C4F740,
        &&label_80C4F744,
        &&label_80C4F748,
        &&label_80C4F74C,
        &&label_80C4F750,
        &&label_80C4F754,
        &&label_80C4F758,
        &&label_80C4F75C,
        &&label_80C4F760,
        &&label_80C4F764,
        &&label_80C4F768,
        &&label_80C4F76C,
        &&label_80C4F770,
        &&label_80C4F774,
        &&label_80C4F778,
        &&label_80C4F77C,
        &&label_80C4F780,
        &&label_80C4F784,
        &&label_80C4F788,
        &&label_80C4F78C,
        &&label_80C4F790,
        &&label_80C4F794,
        &&label_80C4F798,
        &&label_80C4F79C,
        &&label_80C4F7A0,
        &&label_80C4F7A4,
        &&label_80C4F7A8,
        &&label_80C4F7AC,
        &&label_80C4F7B0,
        &&label_80C4F7B4,
        &&label_80C4F7B8,
        &&label_80C4F7BC,
        &&label_80C4F7C0,
        &&label_80C4F7C4,
        &&label_80C4F7C8,
        &&label_80C4F7CC,
        &&label_80C4F7D0,
        &&label_80C4F7D4,
        &&label_80C4F7D8,
        &&label_80C4F7DC,
        &&label_80C4F7E0,
        &&label_80C4F7E4,
        &&label_80C4F7E8,
        &&label_80C4F7EC,
        &&label_80C4F7F0,
        &&label_80C4F7F4,
        &&label_80C4F7F8,
        &&label_80C4F7FC,
        &&label_80C4F800,
        &&label_80C4F804,
        &&label_80C4F808,
        &&label_80C4F80C,
        &&label_80C4F810,
        &&label_80C4F814,
        &&label_80C4F818,
        &&label_80C4F81C,
        &&label_80C4F820,
        &&label_80C4F824,
        &&label_80C4F828,
        &&label_80C4F82C,
        &&label_80C4F830,
        &&label_80C4F834,
        &&label_80C4F838,
        &&label_80C4F83C,
        &&label_80C4F840,
        &&label_80C4F844,
        &&label_80C4F848,
        &&label_80C4F84C,
        &&label_80C4F850,
        &&label_80C4F854,
        &&label_80C4F858,
        &&label_80C4F85C,
        &&label_80C4F860,
        &&label_80C4F864,
        &&label_80C4F868,
        &&label_80C4F86C,
        &&label_80C4F870,
        &&label_80C4F874,
        &&label_80C4F878,
        &&label_80C4F87C,
        &&label_80C4F880,
        &&label_80C4F884,
        &&label_80C4F888,
        &&label_80C4F88C,
        &&label_80C4F890,
        &&label_80C4F894,
        &&label_80C4F898,
        &&label_80C4F89C,
        &&label_80C4F8A0,
        &&label_80C4F8A4,
        &&label_80C4F8A8,
        &&label_80C4F8AC,
        &&label_80C4F8B0,
        &&label_80C4F8B4,
        &&label_80C4F8B8,
        &&label_80C4F8BC,
        &&label_80C4F8C0,
        &&label_80C4F8C4,
        &&label_80C4F8C8,
        &&label_80C4F8CC,
        &&label_80C4F8D0,
        &&label_80C4F8D4,
        &&label_80C4F8D8,
        &&label_80C4F8DC,
        &&label_80C4F8E0,
        &&label_80C4F8E4,
        &&label_80C4F8E8,
        &&label_80C4F8EC,
        &&label_80C4F8F0,
        &&label_80C4F8F4,
        &&label_80C4F8F8,
        &&label_80C4F8FC,
        &&label_80C4F900,
        &&label_80C4F904,
        &&label_80C4F908,
        &&label_80C4F90C,
        &&label_80C4F910,
        &&label_80C4F914,
        &&label_80C4F918,
        &&label_80C4F91C,
        &&label_80C4F920,
        &&label_80C4F924,
        &&label_80C4F928,
        &&label_80C4F92C,
        &&label_80C4F930,
        &&label_80C4F934,
        &&label_80C4F938,
        &&label_80C4F93C,
        &&label_80C4F940,
        &&label_80C4F944,
        &&label_80C4F948,
        &&label_80C4F94C,
        &&label_80C4F950,
        &&label_80C4F954,
        &&label_80C4F958,
        &&label_80C4F95C,
        &&label_80C4F960,
        &&label_80C4F964,
        &&label_80C4F968,
        &&label_80C4F96C,
        &&label_80C4F970,
        &&label_80C4F974,
        &&label_80C4F978,
        &&label_80C4F97C,
        &&label_80C4F980,
        &&label_80C4F984,
        &&label_80C4F988,
        &&label_80C4F98C,
        &&label_80C4F990,
        &&label_80C4F994,
        &&label_80C4F998,
        &&label_80C4F99C,
        &&label_80C4F9A0,
        &&label_80C4F9A4,
        &&label_80C4F9A8,
        &&label_80C4F9AC,
        &&label_80C4F9B0,
        &&label_80C4F9B4,
        &&label_80C4F9B8,
        &&label_80C4F9BC,
        &&label_80C4F9C0,
        &&label_80C4F9C4,
        &&label_80C4F9C8,
        &&label_80C4F9CC,
        &&label_80C4F9D0,
        &&label_80C4F9D4,
        &&label_80C4F9D8,
        &&label_80C4F9DC,
        &&label_80C4F9E0,
        &&label_80C4F9E4,
        &&label_80C4F9E8,
        &&label_80C4F9EC,
        &&label_80C4F9F0,
        &&label_80C4F9F4,
        &&label_80C4F9F8,
        &&label_80C4F9FC,
        &&label_80C4FA00,
        &&label_80C4FA04,
        &&label_80C4FA08,
        &&label_80C4FA0C,
        &&label_80C4FA10,
        &&label_80C4FA14,
        &&label_80C4FA18,
        &&label_80C4FA1C,
        &&label_80C4FA20,
        &&label_80C4FA24,
        &&label_80C4FA28,
        &&label_80C4FA2C,
        &&label_80C4FA30,
        &&label_80C4FA34,
        &&label_80C4FA38,
        &&label_80C4FA3C,
        &&label_80C4FA40,
        &&label_80C4FA44,
        &&label_80C4FA48,
        &&label_80C4FA4C,
        &&label_80C4FA50,
        &&label_80C4FA54,
        &&label_80C4FA58,
        &&label_80C4FA5C,
        &&label_80C4FA60,
        &&label_80C4FA64,
        &&label_80C4FA68,
        &&label_80C4FA6C,
        &&label_80C4FA70,
        &&label_80C4FA74,
        &&label_80C4FA78,
        &&label_80C4FA7C,
        &&label_80C4FA80,
        &&label_80C4FA84,
        &&label_80C4FA88,
        &&label_80C4FA8C,
        &&label_80C4FA90,
        &&label_80C4FA94,
        &&label_80C4FA98,
        &&label_80C4FA9C,
        &&label_80C4FAA0,
        &&label_80C4FAA4,
        &&label_80C4FAA8,
        &&label_80C4FAAC,
        &&label_80C4FAB0,
        &&label_80C4FAB4,
        &&label_80C4FAB8,
        &&label_80C4FABC,
        &&label_80C4FAC0,
        &&label_80C4FAC4,
        &&label_80C4FAC8,
        &&label_80C4FACC,
        &&label_80C4FAD0,
        &&label_80C4FAD4,
        &&label_80C4FAD8,
        &&label_80C4FADC,
        &&label_80C4FAE0,
        &&label_80C4FAE4,
        &&label_80C4FAE8,
        &&label_80C4FAEC,
        &&label_80C4FAF0,
        &&label_80C4FAF4,
        &&label_80C4FAF8,
        &&label_80C4FAFC,
        &&label_80C4FB00,
        &&label_80C4FB04,
        &&label_80C4FB08,
        &&label_80C4FB0C,
        &&label_80C4FB10,
        &&label_80C4FB14,
        &&label_80C4FB18,
        &&label_80C4FB1C,
        &&label_80C4FB20,
        &&label_80C4FB24,
        &&label_80C4FB28,
        &&label_80C4FB2C,
        &&label_80C4FB30,
        &&label_80C4FB34,
        &&label_80C4FB38,
        &&label_80C4FB3C,
        &&label_80C4FB40,
        &&label_80C4FB44,
        &&label_80C4FB48,
        &&label_80C4FB4C,
        &&label_80C4FB50,
        &&label_80C4FB54,
        &&label_80C4FB58,
        &&label_80C4FB5C,
        &&label_80C4FB60,
        &&label_80C4FB64,
        &&label_80C4FB68,
        &&label_80C4FB6C,
        &&label_80C4FB70,
        &&label_80C4FB74,
        &&label_80C4FB78,
        &&label_80C4FB7C,
        &&label_80C4FB80,
        &&label_80C4FB84,
        &&label_80C4FB88,
        &&label_80C4FB8C,
        &&label_80C4FB90,
        &&label_80C4FB94,
        &&label_80C4FB98,
        &&label_80C4FB9C,
        &&label_80C4FBA0,
        &&label_80C4FBA4,
        &&label_80C4FBA8,
        &&label_80C4FBAC,
        &&label_80C4FBB0,
        &&label_80C4FBB4,
        &&label_80C4FBB8,
        &&label_80C4FBBC,
        &&label_80C4FBC0,
        &&label_80C4FBC4,
        &&label_80C4FBC8,
        &&label_80C4FBCC,
        &&label_80C4FBD0,
        &&label_80C4FBD4,
        &&label_80C4FBD8,
        &&label_80C4FBDC,
        &&label_80C4FBE0,
        &&label_80C4FBE4,
        &&label_80C4FBE8,
        &&label_80C4FBEC,
        &&label_80C4FBF0,
        &&label_80C4FBF4,
        &&label_80C4FBF8,
        &&label_80C4FBFC,
        &&label_80C4FC00,
        &&label_80C4FC04,
        &&label_80C4FC08,
        &&label_80C4FC0C,
        &&label_80C4FC10,
        &&label_80C4FC14,
        &&label_80C4FC18,
        &&label_80C4FC1C,
        &&label_80C4FC20,
        &&label_80C4FC24,
        &&label_80C4FC28,
        &&label_80C4FC2C,
        &&label_80C4FC30,
        &&label_80C4FC34,
        &&label_80C4FC38,
        &&label_80C4FC3C,
        &&label_80C4FC40,
        &&label_80C4FC44,
        &&label_80C4FC48,
        &&label_80C4FC4C,
        &&label_80C4FC50,
        &&label_80C4FC54,
        &&label_80C4FC58,
        &&label_80C4FC5C,
        &&label_80C4FC60,
        &&label_80C4FC64,
        &&label_80C4FC68,
        &&label_80C4FC6C,
        &&label_80C4FC70,
        &&label_80C4FC74,
        &&label_80C4FC78,
        &&label_80C4FC7C,
        &&label_80C4FC80,
        &&label_80C4FC84,
        &&label_80C4FC88,
        &&label_80C4FC8C,
        &&label_80C4FC90,
        &&label_80C4FC94,
        &&label_80C4FC98,
        &&label_80C4FC9C,
        &&label_80C4FCA0,
        &&label_80C4FCA4,
        &&label_80C4FCA8,
        &&label_80C4FCAC,
        &&label_80C4FCB0,
        &&label_80C4FCB4,
        &&label_80C4FCB8,
        &&label_80C4FCBC,
        &&label_80C4FCC0,
        &&label_80C4FCC4,
        &&label_80C4FCC8,
        &&label_80C4FCCC,
        &&label_80C4FCD0,
        &&label_80C4FCD4,
        &&label_80C4FCD8,
        &&label_80C4FCDC,
        &&label_80C4FCE0,
        &&label_80C4FCE4,
        &&label_80C4FCE8,
        &&label_80C4FCEC,
        &&label_80C4FCF0,
        &&label_80C4FCF4,
        &&label_80C4FCF8,
        &&label_80C4FCFC,
        &&label_80C4FD00,
        &&label_80C4FD04,
        &&label_80C4FD08,
        &&label_80C4FD0C,
        &&label_80C4FD10,
        &&label_80C4FD14,
        &&label_80C4FD18,
        &&label_80C4FD1C,
        &&label_80C4FD20,
        &&label_80C4FD24,
        &&label_80C4FD28,
        &&label_80C4FD2C,
        &&label_80C4FD30,
        &&label_80C4FD34,
        &&label_80C4FD38,
        &&label_80C4FD3C,
        &&label_80C4FD40,
        &&label_80C4FD44,
        &&label_80C4FD48,
        &&label_80C4FD4C,
        &&label_80C4FD50,
        &&label_80C4FD54,
        &&label_80C4FD58,
        &&label_80C4FD5C,
        &&label_80C4FD60,
        &&label_80C4FD64,
        &&label_80C4FD68,
        &&label_80C4FD6C,
        &&label_80C4FD70,
        &&label_80C4FD74,
        &&label_80C4FD78,
        &&label_80C4FD7C,
        &&label_80C4FD80,
        &&label_80C4FD84,
        &&label_80C4FD88,
        &&label_80C4FD8C,
        &&label_80C4FD90,
        &&label_80C4FD94,
        &&label_80C4FD98,
        &&label_80C4FD9C,
        &&label_80C4FDA0,
        &&label_80C4FDA4,
        &&label_80C4FDA8,
        &&label_80C4FDAC,
        &&label_80C4FDB0,
        &&label_80C4FDB4,
        &&label_80C4FDB8,
        &&label_80C4FDBC,
        &&label_80C4FDC0,
        &&label_80C4FDC4,
        &&label_80C4FDC8,
        &&label_80C4FDCC,
        &&label_80C4FDD0,
        &&label_80C4FDD4,
        &&label_80C4FDD8,
        &&label_80C4FDDC,
        &&label_80C4FDE0,
        &&label_80C4FDE4,
        &&label_80C4FDE8,
        &&label_80C4FDEC,
        &&label_80C4FDF0,
        &&label_80C4FDF4,
        &&label_80C4FDF8,
        &&label_80C4FDFC,
        &&label_80C4FE00,
        &&label_80C4FE04,
        &&label_80C4FE08,
        &&label_80C4FE0C,
        &&label_80C4FE10,
        &&label_80C4FE14,
        &&label_80C4FE18,
        &&label_80C4FE1C,
        &&label_80C4FE20,
        &&label_80C4FE24,
        &&label_80C4FE28,
        &&label_80C4FE2C,
        &&label_80C4FE30,
        &&label_80C4FE34,
        &&label_80C4FE38,
        &&label_80C4FE3C,
        &&label_80C4FE40,
        &&label_80C4FE44,
        &&label_80C4FE48,
        &&label_80C4FE4C,
        &&label_80C4FE50,
        &&label_80C4FE54,
        &&label_80C4FE58,
        &&label_80C4FE5C,
        &&label_80C4FE60,
        &&label_80C4FE64,
        &&label_80C4FE68,
        &&label_80C4FE6C,
        &&label_80C4FE70,
        &&label_80C4FE74,
        &&label_80C4FE78,
        &&label_80C4FE7C,
        &&label_80C4FE80,
        &&label_80C4FE84,
        &&label_80C4FE88,
        &&label_80C4FE8C,
        &&label_80C4FE90,
        &&label_80C4FE94,
        &&label_80C4FE98,
        &&label_80C4FE9C,
        &&label_80C4FEA0,
        &&label_80C4FEA4,
        &&label_80C4FEA8,
        &&label_80C4FEAC,
        &&label_80C4FEB0,
        &&label_80C4FEB4,
        &&label_80C4FEB8,
        &&label_80C4FEBC,
        &&label_80C4FEC0,
        &&label_80C4FEC4,
        &&label_80C4FEC8,
        &&label_80C4FECC,
        &&label_80C4FED0,
        &&label_80C4FED4,
        &&label_80C4FED8,
        &&label_80C4FEDC,
        &&label_80C4FEE0,
        &&label_80C4FEE4,
        &&label_80C4FEE8,
        &&label_80C4FEEC,
        &&label_80C4FEF0,
        &&label_80C4FEF4,
        &&label_80C4FEF8,
        &&label_80C4FEFC,
        &&label_80C4FF00,
        &&label_80C4FF04,
        &&label_80C4FF08,
        &&label_80C4FF0C,
        &&label_80C4FF10,
        &&label_80C4FF14,
        &&label_80C4FF18,
        &&label_80C4FF1C,
        &&label_80C4FF20,
        &&label_80C4FF24,
        &&label_80C4FF28,
        &&label_80C4FF2C,
        &&label_80C4FF30,
        &&label_80C4FF34,
        &&label_80C4FF38,
        &&label_80C4FF3C,
        &&label_80C4FF40,
        &&label_80C4FF44,
        &&label_80C4FF48,
        &&label_80C4FF4C,
        &&label_80C4FF50,
        &&label_80C4FF54,
        &&label_80C4FF58,
        &&label_80C4FF5C,
        &&label_80C4FF60,
        &&label_80C4FF64,
        &&label_80C4FF68,
        &&label_80C4FF6C,
        &&label_80C4FF70,
        &&label_80C4FF74,
        &&label_80C4FF78,
        &&label_80C4FF7C,
        &&label_80C4FF80,
        &&label_80C4FF84,
        &&label_80C4FF88,
        &&label_80C4FF8C,
        &&label_80C4FF90,
        &&label_80C4FF94,
        &&label_80C4FF98,
        &&label_80C4FF9C,
        &&label_80C4FFA0,
        &&label_80C4FFA4,
        &&label_80C4FFA8,
        &&label_80C4FFAC,
        &&label_80C4FFB0,
        &&label_80C4FFB4,
        &&label_80C4FFB8,
        &&label_80C4FFBC,
        &&label_80C4FFC0,
        &&label_80C4FFC4,
        &&label_80C4FFC8,
        &&label_80C4FFCC,
        &&label_80C4FFD0,
        &&label_80C4FFD4,
        &&label_80C4FFD8,
        &&label_80C4FFDC,
        &&label_80C4FFE0,
        &&label_80C4FFE4,
        &&label_80C4FFE8,
        &&label_80C4FFEC,
        &&label_80C4FFF0,
        &&label_80C4FFF4,
        &&label_80C4FFF8,
        &&label_80C4FFFC,
        &&label_80C50000,
        &&label_80C50004,
        &&label_80C50008,
        &&label_80C5000C,
        &&label_80C50010,
        &&label_80C50014,
        &&label_80C50018,
        &&label_80C5001C,
        &&label_80C50020,
        &&label_80C50024,
        &&label_80C50028,
        &&label_80C5002C,
        &&label_80C50030,
        &&label_80C50034,
        &&label_80C50038,
        &&label_80C5003C,
        &&label_80C50040,
        &&label_80C50044,
        &&label_80C50048,
        &&label_80C5004C,
        &&label_80C50050,
        &&label_80C50054,
        &&label_80C50058,
        &&label_80C5005C,
        &&label_80C50060,
        &&label_80C50064,
        &&label_80C50068,
        &&label_80C5006C,
        &&label_80C50070,
        &&label_80C50074,
        &&label_80C50078,
        &&label_80C5007C,
        &&label_80C50080,
        &&label_80C50084,
        &&label_80C50088,
        &&label_80C5008C,
        &&label_80C50090,
        &&label_80C50094,
        &&label_80C50098,
        &&label_80C5009C,
        &&label_80C500A0,
        &&label_80C500A4,
        &&label_80C500A8,
        &&label_80C500AC,
        &&label_80C500B0,
        &&label_80C500B4,
        &&label_80C500B8,
        &&label_80C500BC,
        &&label_80C500C0,
        &&label_80C500C4,
        &&label_80C500C8,
        &&label_80C500CC,
        &&label_80C500D0,
        &&label_80C500D4,
        &&label_80C500D8,
        &&label_80C500DC,
        &&label_80C500E0,
        &&label_80C500E4,
        &&label_80C500E8,
        &&label_80C500EC,
        &&label_80C500F0,
        &&label_80C500F4,
        &&label_80C500F8,
        &&label_80C500FC,
        &&label_80C50100,
        &&label_80C50104,
        &&label_80C50108,
        &&label_80C5010C,
        &&label_80C50110,
        &&label_80C50114,
        &&label_80C50118,
        &&label_80C5011C,
        &&label_80C50120,
        &&label_80C50124,
        &&label_80C50128,
        &&label_80C5012C,
        &&label_80C50130,
        &&label_80C50134,
        &&label_80C50138,
        &&label_80C5013C,
        &&label_80C50140,
        &&label_80C50144,
        &&label_80C50148,
        &&label_80C5014C,
        &&label_80C50150,
        &&label_80C50154,
        &&label_80C50158,
        &&label_80C5015C,
        &&label_80C50160,
        &&label_80C50164,
        &&label_80C50168,
        &&label_80C5016C,
        &&label_80C50170,
        &&label_80C50174,
        &&label_80C50178,
        &&label_80C5017C,
        &&label_80C50180,
        &&label_80C50184,
        &&label_80C50188,
        &&label_80C5018C,
        &&label_80C50190,
        &&label_80C50194,
        &&label_80C50198,
        &&label_80C5019C,
        &&label_80C501A0,
        &&label_80C501A4,
        &&label_80C501A8,
        &&label_80C501AC,
        &&label_80C501B0,
        &&label_80C501B4,
        &&label_80C501B8,
        &&label_80C501BC,
        &&label_80C501C0,
        &&label_80C501C4,
        &&label_80C501C8,
        &&label_80C501CC,
        &&label_80C501D0,
        &&label_80C501D4,
        &&label_80C501D8,
        &&label_80C501DC,
        &&label_80C501E0,
        &&label_80C501E4,
        &&label_80C501E8,
        &&label_80C501EC,
        &&label_80C501F0,
        &&label_80C501F4,
        &&label_80C501F8,
        &&label_80C501FC,
        &&label_80C50200,
        &&label_80C50204,
        &&label_80C50208,
        &&label_80C5020C,
        &&label_80C50210,
        &&label_80C50214,
        &&label_80C50218,
        &&label_80C5021C,
        &&label_80C50220,
        &&label_80C50224,
        &&label_80C50228,
        &&label_80C5022C,
        &&label_80C50230,
        &&label_80C50234,
        &&label_80C50238,
        &&label_80C5023C,
        &&label_80C50240,
        &&label_80C50244,
        &&label_80C50248,
        &&label_80C5024C,
        &&label_80C50250,
        &&label_80C50254,
        &&label_80C50258,
        &&label_80C5025C,
        &&label_80C50260,
        &&label_80C50264,
        &&label_80C50268,
        &&label_80C5026C,
        &&label_80C50270,
        &&label_80C50274,
        &&label_80C50278,
        &&label_80C5027C,
        &&label_80C50280,
        &&label_80C50284,
        &&label_80C50288,
        &&label_80C5028C,
        &&label_80C50290,
        &&label_80C50294,
        &&label_80C50298,
        &&label_80C5029C,
        &&label_80C502A0,
        &&label_80C502A4,
        &&label_80C502A8,
        &&label_80C502AC,
        &&label_80C502B0,
        &&label_80C502B4,
        &&label_80C502B8,
        &&label_80C502BC,
        &&label_80C502C0,
        &&label_80C502C4,
        &&label_80C502C8,
        &&label_80C502CC,
        &&label_80C502D0,
        &&label_80C502D4,
        &&label_80C502D8,
        &&label_80C502DC,
        &&label_80C502E0,
        &&label_80C502E4,
        &&label_80C502E8,
        &&label_80C502EC,
        &&label_80C502F0,
        &&label_80C502F4,
        &&label_80C502F8,
        &&label_80C502FC,
        &&label_80C50300,
        &&label_80C50304,
        &&label_80C50308,
        &&label_80C5030C,
        &&label_80C50310,
        &&label_80C50314,
        &&label_80C50318,
        &&label_80C5031C,
        &&label_80C50320,
        &&label_80C50324,
        &&label_80C50328,
        &&label_80C5032C,
        &&label_80C50330,
        &&label_80C50334,
        &&label_80C50338,
        &&label_80C5033C,
        &&label_80C50340,
        &&label_80C50344,
        &&label_80C50348,
        &&label_80C5034C,
        &&label_80C50350,
        &&label_80C50354,
        &&label_80C50358,
        &&label_80C5035C,
        &&label_80C50360,
        &&label_80C50364,
        &&label_80C50368,
        &&label_80C5036C,
        &&label_80C50370,
        &&label_80C50374,
        &&label_80C50378,
        &&label_80C5037C,
        &&label_80C50380,
        &&label_80C50384,
        &&label_80C50388,
        &&label_80C5038C,
        &&label_80C50390,
        &&label_80C50394,
        &&label_80C50398,
        &&label_80C5039C,
        &&label_80C503A0,
        &&label_80C503A4,
        &&label_80C503A8,
        &&label_80C503AC,
        &&label_80C503B0,
        &&label_80C503B4,
        &&label_80C503B8,
        &&label_80C503BC,
        &&label_80C503C0,
        &&label_80C503C4,
        &&label_80C503C8,
        &&label_80C503CC,
        &&label_80C503D0,
        &&label_80C503D4,
        &&label_80C503D8,
        &&label_80C503DC,
        &&label_80C503E0,
        &&label_80C503E4,
        &&label_80C503E8,
        &&label_80C503EC,
        &&label_80C503F0,
        &&label_80C503F4,
        &&label_80C503F8,
        &&label_80C503FC,
        &&label_80C50400,
        &&label_80C50404,
        &&label_80C50408,
        &&label_80C5040C,
        &&label_80C50410,
        &&label_80C50414,
        &&label_80C50418,
        &&label_80C5041C,
        &&label_80C50420,
        &&label_80C50424,
        &&label_80C50428,
        &&label_80C5042C,
        &&label_80C50430,
        &&label_80C50434,
        &&label_80C50438,
        &&label_80C5043C,
        &&label_80C50440,
        &&label_80C50444,
        &&label_80C50448,
        &&label_80C5044C,
        &&label_80C50450,
        &&label_80C50454,
        &&label_80C50458,
        &&label_80C5045C,
        &&label_80C50460,
        &&label_80C50464,
        &&label_80C50468,
        &&label_80C5046C,
        &&label_80C50470,
        &&label_80C50474,
        &&label_80C50478,
        &&label_80C5047C,
        &&label_80C50480,
        &&label_80C50484,
        &&label_80C50488,
        &&label_80C5048C,
        &&label_80C50490,
        &&label_80C50494,
        &&label_80C50498,
        &&label_80C5049C,
        &&label_80C504A0,
        &&label_80C504A4,
        &&label_80C504A8,
        &&label_80C504AC,
        &&label_80C504B0,
        &&label_80C504B4,
        &&label_80C504B8,
        &&label_80C504BC,
        &&label_80C504C0,
        &&label_80C504C4,
        &&label_80C504C8,
        &&label_80C504CC,
        &&label_80C504D0,
        &&label_80C504D4,
        &&label_80C504D8,
        &&label_80C504DC,
        &&label_80C504E0,
        &&label_80C504E4,
        &&label_80C504E8,
        &&label_80C504EC,
        &&label_80C504F0,
        &&label_80C504F4,
        &&label_80C504F8,
        &&label_80C504FC,
        &&label_80C50500,
        &&label_80C50504,
        &&label_80C50508,
        &&label_80C5050C,
        &&label_80C50510,
        &&label_80C50514,
        &&label_80C50518,
        &&label_80C5051C,
        &&label_80C50520,
        &&label_80C50524,
        &&label_80C50528,
        &&label_80C5052C,
        &&label_80C50530,
        &&label_80C50534,
        &&label_80C50538,
        &&label_80C5053C
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C4F460u && pc <= 0x80C5053Cu && ((pc - 0x80C4F460u) & 3u) == 0u)
            goto *pc_table_80C4F460[(pc - 0x80C4F460u) >> 2];
    }
    return;
label_80C4F460:
    ctx->pc = 0x80C4F460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F460: stwu     r1, -16(r1)
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
label_80C4F464:
    ctx->pc = 0x80C4F464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4F464: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4F468:
    ctx->pc = 0x80C4F468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4F468: stw     r0, 20(r1)
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
label_80C4F46C:
    ctx->pc = 0x80C4F46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F46Cu)) return;
    // 80C4F46C: cmpwi   r3, 2
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

label_80C4F470:
    ctx->pc = 0x80C4F470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F470u)) return;
    // 80C4F470: bc    12, 2, 0x80C4FB74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C4FB74;
        }
    }

label_80C4F474:
    ctx->pc = 0x80C4F474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F474: bc    4, 0, 0x80C4F488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4F488;
        }
    }

label_80C4F478:
    ctx->pc = 0x80C4F478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F478: cmpwi   r3, 0
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

label_80C4F47C:
    ctx->pc = 0x80C4F47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F47Cu)) return;
    // 80C4F47C: bc    12, 2, 0x80C4FBB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C4FBB4;
        }
    }

label_80C4F480:
    ctx->pc = 0x80C4F480u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F480u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F480: bc    4, 0, 0x80C4F490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4F490;
        }
    }

label_80C4F484:
    ctx->pc = 0x80C4F484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F484: b       0x80C4FBB4
    {
            goto label_80C4FBB4;
    }

label_80C4F488:
    ctx->pc = 0x80C4F488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F488: cmpwi   r3, 4
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

label_80C4F48C:
    ctx->pc = 0x80C4F48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F48Cu)) return;
    // 80C4F48C: b       0x80C4FBB4
    {
            goto label_80C4FBB4;
    }

label_80C4F490:
    ctx->pc = 0x80C4F490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F490: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F494:
    ctx->pc = 0x80C4F494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F494u)) return;
    // 80C4F494: bl      0x8045EC10
    {
            ctx->lr = 0x80C4F498u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C4F498:
    ctx->pc = 0x80C4F498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F498: bl      0x8045DE7C
    {
            ctx->lr = 0x80C4F49Cu;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C4F49C:
    ctx->pc = 0x80C4F49Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F49Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F49C: bl      0x80460A60
    {
            ctx->lr = 0x80C4F4A0u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C4F4A0:
    ctx->pc = 0x80C4F4A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F4A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F4A0: bl      0x80460A24
    {
            ctx->lr = 0x80C4F4A4u;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C4F4A4:
    ctx->pc = 0x80C4F4A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F4A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F4A4: li      r3, 91
    ctx->gpr[3] = (u32)(s32)(91);

label_80C4F4A8:
    ctx->pc = 0x80C4F4A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4A8u)) return;
    // 80C4F4A8: bl      0x80406090
    {
            ctx->lr = 0x80C4F4ACu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C4F4AC:
    ctx->pc = 0x80C4F4ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F4ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C4F4AC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F4B0:
    ctx->pc = 0x80C4F4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4B0u)) return;
    // 80C4F4B0: lis     r4, -32680
    ctx->gpr[4] = ((u32)(s32)(-32680) << 16);

label_80C4F4B4:
    ctx->pc = 0x80C4F4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4B4u)) return;
    // 80C4F4B4: addi    r4, r4, -11512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11512);

label_80C4F4B8:
    ctx->pc = 0x80C4F4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4B8u)) return;
    // 80C4F4B8: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F4BC:
    ctx->pc = 0x80C4F4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4BCu)) return;
    // 80C4F4BC: addi    r5, r5, -912
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-912);

label_80C4F4C0:
    ctx->pc = 0x80C4F4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4F4C0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F4C0u)) return;
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
label_80C4F4C4:
    ctx->pc = 0x80C4F4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4C4u)) return;
    // 80C4F4C4: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F4C8:
    ctx->pc = 0x80C4F4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4C8u)) return;
    // 80C4F4C8: addi    r5, r5, -908
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-908);

label_80C4F4CC:
    ctx->pc = 0x80C4F4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4F4CC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F4CCu)) return;
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
label_80C4F4D0:
    ctx->pc = 0x80C4F4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4D0u)) return;
    // 80C4F4D0: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F4D4:
    ctx->pc = 0x80C4F4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4D4u)) return;
    // 80C4F4D4: addi    r5, r5, -904
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-904);

label_80C4F4D8:
    ctx->pc = 0x80C4F4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4F4D8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F4D8u)) return;
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
label_80C4F4DC:
    ctx->pc = 0x80C4F4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4DCu)) return;
    // 80C4F4DC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C4F4E0:
    ctx->pc = 0x80C4F4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4E0u)) return;
    // 80C4F4E0: addi    r5, r5, -17
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-17);

label_80C4F4E4:
    ctx->pc = 0x80C4F4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4E4u)) return;
    // 80C4F4E4: li      r6, 13249
    ctx->gpr[6] = (u32)(s32)(13249);

label_80C4F4E8:
    ctx->pc = 0x80C4F4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4E8u)) return;
    // 80C4F4E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F4EC:
    ctx->pc = 0x80C4F4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4ECu)) return;
    // 80C4F4EC: bl      0x8045ED84
    {
            ctx->lr = 0x80C4F4F0u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80C4F4F0:
    ctx->pc = 0x80C4F4F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F4F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F4F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F4F4:
    ctx->pc = 0x80C4F4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4F4u)) return;
    // 80C4F4F4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F4F8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F4F8:
    ctx->pc = 0x80C4F4F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F4F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F4F8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F4FC:
    ctx->pc = 0x80C4F4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F4FCu)) return;
    // 80C4F4FC: bl      0x8045F220
    {
            ctx->lr = 0x80C4F500u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F500:
    ctx->pc = 0x80C4F500u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F500u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F500: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C4F504:
    ctx->pc = 0x80C4F504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F504u)) return;
    // 80C4F504: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80C4F508:
    ctx->pc = 0x80C4F508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F508u)) return;
    // 80C4F508: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C4F50C:
    ctx->pc = 0x80C4F50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F50Cu)) return;
    // 80C4F50C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C4F510:
    ctx->pc = 0x80C4F510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F510u)) return;
    // 80C4F510: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F514:
    ctx->pc = 0x80C4F514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F514u)) return;
    // 80C4F514: addi    r6, r6, -900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-900);

label_80C4F518:
    ctx->pc = 0x80C4F518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4F518: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4F518u)) return;
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
label_80C4F51C:
    ctx->pc = 0x80C4F51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F51Cu)) return;
    // 80C4F51C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C4F520:
    ctx->pc = 0x80C4F520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F520u)) return;
    // 80C4F520: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F524:
    ctx->pc = 0x80C4F524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F524u)) return;
    // 80C4F524: bl      0x8045EBE4
    {
            ctx->lr = 0x80C4F528u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C4F528:
    ctx->pc = 0x80C4F528u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F528u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F528: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F52C:
    ctx->pc = 0x80C4F52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F52Cu)) return;
    // 80C4F52C: bl      0x8045F220
    {
            ctx->lr = 0x80C4F530u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F530:
    ctx->pc = 0x80C4F530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F530: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F534:
    ctx->pc = 0x80C4F534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F534u)) return;
    // 80C4F534: addi    r4, r4, -896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-896);

label_80C4F538:
    ctx->pc = 0x80C4F538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F538: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F538u)) return;
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
label_80C4F53C:
    ctx->pc = 0x80C4F53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F53Cu)) return;
    // 80C4F53C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F540:
    ctx->pc = 0x80C4F540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F540u)) return;
    // 80C4F540: addi    r4, r4, -908
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-908);

label_80C4F544:
    ctx->pc = 0x80C4F544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F544: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F544u)) return;
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
label_80C4F548:
    ctx->pc = 0x80C4F548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F548u)) return;
    // 80C4F548: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F54C:
    ctx->pc = 0x80C4F54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F54Cu)) return;
    // 80C4F54C: addi    r4, r4, -892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-892);

label_80C4F550:
    ctx->pc = 0x80C4F550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F550: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F550u)) return;
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
label_80C4F554:
    ctx->pc = 0x80C4F554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F554u)) return;
    // 80C4F554: bl      0x8045EF2C
    {
            ctx->lr = 0x80C4F558u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C4F558:
    ctx->pc = 0x80C4F558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F558: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F55C:
    ctx->pc = 0x80C4F55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F55Cu)) return;
    // 80C4F55C: bl      0x8045F220
    {
            ctx->lr = 0x80C4F560u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F560:
    ctx->pc = 0x80C4F560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C4F560: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80C4F564:
    ctx->pc = 0x80C4F564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F564u)) return;
    // 80C4F564: addi    r4, r4, -30
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30);

label_80C4F568:
    ctx->pc = 0x80C4F568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F568u)) return;
    // 80C4F568: li      r5, 24276
    ctx->gpr[5] = (u32)(s32)(24276);

label_80C4F56C:
    ctx->pc = 0x80C4F56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F56Cu)) return;
    // 80C4F56C: li      r6, 29
    ctx->gpr[6] = (u32)(s32)(29);

label_80C4F570:
    ctx->pc = 0x80C4F570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F570u)) return;
    // 80C4F570: bl      0x8045EEA8
    {
            ctx->lr = 0x80C4F574u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C4F574:
    ctx->pc = 0x80C4F574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F574: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F578:
    ctx->pc = 0x80C4F578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F578u)) return;
    // 80C4F578: bl      0x8045F220
    {
            ctx->lr = 0x80C4F57Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F57C:
    ctx->pc = 0x80C4F57Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F57Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F57C: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C4F580:
    ctx->pc = 0x80C4F580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F580u)) return;
    // 80C4F580: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C4F584:
    ctx->pc = 0x80C4F584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F584u)) return;
    // 80C4F584: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C4F588:
    ctx->pc = 0x80C4F588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F588u)) return;
    // 80C4F588: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C4F58C:
    ctx->pc = 0x80C4F58Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F58Cu)) return;
    // 80C4F58C: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F590:
    ctx->pc = 0x80C4F590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F590u)) return;
    // 80C4F590: addi    r6, r6, -888
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-888);

label_80C4F594:
    ctx->pc = 0x80C4F594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4F594: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4F594u)) return;
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
label_80C4F598:
    ctx->pc = 0x80C4F598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F598u)) return;
    // 80C4F598: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C4F59C:
    ctx->pc = 0x80C4F59Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F59Cu)) return;
    // 80C4F59C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F5A0:
    ctx->pc = 0x80C4F5A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5A0u)) return;
    // 80C4F5A0: bl      0x8045EBE4
    {
            ctx->lr = 0x80C4F5A4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C4F5A4:
    ctx->pc = 0x80C4F5A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F5A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F5A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F5A8:
    ctx->pc = 0x80C4F5A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5A8u)) return;
    // 80C4F5A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F5AC:
    ctx->pc = 0x80C4F5ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5ACu)) return;
    // 80C4F5AC: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F5B0:
    ctx->pc = 0x80C4F5B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5B0u)) return;
    // 80C4F5B0: addi    r5, r5, -884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-884);

label_80C4F5B4:
    ctx->pc = 0x80C4F5B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F5B4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F5B4u)) return;
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
label_80C4F5B8:
    ctx->pc = 0x80C4F5B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5B8u)) return;
    // 80C4F5B8: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F5BC:
    ctx->pc = 0x80C4F5BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5BCu)) return;
    // 80C4F5BC: addi    r5, r5, -880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-880);

label_80C4F5C0:
    ctx->pc = 0x80C4F5C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F5C0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F5C0u)) return;
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
label_80C4F5C4:
    ctx->pc = 0x80C4F5C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5C4u)) return;
    // 80C4F5C4: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F5C8:
    ctx->pc = 0x80C4F5C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5C8u)) return;
    // 80C4F5C8: addi    r5, r5, -876
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-876);

label_80C4F5CC:
    ctx->pc = 0x80C4F5CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F5CC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F5CCu)) return;
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
label_80C4F5D0:
    ctx->pc = 0x80C4F5D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5D0u)) return;
    // 80C4F5D0: bl      0x8045C750
    {
            ctx->lr = 0x80C4F5D4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C4F5D4:
    ctx->pc = 0x80C4F5D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F5D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C4F5D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F5D8:
    ctx->pc = 0x80C4F5D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5D8u)) return;
    // 80C4F5D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F5DC:
    ctx->pc = 0x80C4F5DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5DCu)) return;
    // 80C4F5DC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C4F5E0:
    ctx->pc = 0x80C4F5E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5E0u)) return;
    // 80C4F5E0: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C4F5E4:
    ctx->pc = 0x80C4F5E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5E4u)) return;
    // 80C4F5E4: addi    r6, r6, -16724
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-16724);

label_80C4F5E8:
    ctx->pc = 0x80C4F5E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5E8u)) return;
    // 80C4F5E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F5EC:
    ctx->pc = 0x80C4F5ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5ECu)) return;
    // 80C4F5EC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C4F5F0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C4F5F0:
    ctx->pc = 0x80C4F5F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F5F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F5F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F5F4:
    ctx->pc = 0x80C4F5F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5F4u)) return;
    // 80C4F5F4: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80C4F5F8:
    ctx->pc = 0x80C4F5F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5F8u)) return;
    // 80C4F5F8: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F5FC:
    ctx->pc = 0x80C4F5FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F5FCu)) return;
    // 80C4F5FC: addi    r5, r5, -872
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-872);

label_80C4F600:
    ctx->pc = 0x80C4F600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F600: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F600u)) return;
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
label_80C4F604:
    ctx->pc = 0x80C4F604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F604u)) return;
    // 80C4F604: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F608:
    ctx->pc = 0x80C4F608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F608u)) return;
    // 80C4F608: addi    r5, r5, -868
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-868);

label_80C4F60C:
    ctx->pc = 0x80C4F60Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F60Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F60C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F60Cu)) return;
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
label_80C4F610:
    ctx->pc = 0x80C4F610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F610u)) return;
    // 80C4F610: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F614:
    ctx->pc = 0x80C4F614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F614u)) return;
    // 80C4F614: addi    r5, r5, -864
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-864);

label_80C4F618:
    ctx->pc = 0x80C4F618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F618: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F618u)) return;
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
label_80C4F61C:
    ctx->pc = 0x80C4F61Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F61Cu)) return;
    // 80C4F61C: bl      0x8045C750
    {
            ctx->lr = 0x80C4F620u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C4F620:
    ctx->pc = 0x80C4F620u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F620u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F620: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C4F624:
    ctx->pc = 0x80C4F624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F624u)) return;
    // 80C4F624: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F628u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F628:
    ctx->pc = 0x80C4F628u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F628u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F628: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F62C:
    ctx->pc = 0x80C4F62Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F62Cu)) return;
    // 80C4F62C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F630:
    ctx->pc = 0x80C4F630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F630u)) return;
    // 80C4F630: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F634:
    ctx->pc = 0x80C4F634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F634u)) return;
    // 80C4F634: addi    r5, r5, -860
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-860);

label_80C4F638:
    ctx->pc = 0x80C4F638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F638: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F638u)) return;
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
label_80C4F63C:
    ctx->pc = 0x80C4F63Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F63Cu)) return;
    // 80C4F63C: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F640:
    ctx->pc = 0x80C4F640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F640u)) return;
    // 80C4F640: addi    r5, r5, -856
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-856);

label_80C4F644:
    ctx->pc = 0x80C4F644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F644: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F644u)) return;
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
label_80C4F648:
    ctx->pc = 0x80C4F648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F648u)) return;
    // 80C4F648: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F64C:
    ctx->pc = 0x80C4F64Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F64Cu)) return;
    // 80C4F64C: addi    r5, r5, -852
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-852);

label_80C4F650:
    ctx->pc = 0x80C4F650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F650: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F650u)) return;
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
label_80C4F654:
    ctx->pc = 0x80C4F654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F654u)) return;
    // 80C4F654: bl      0x8045C750
    {
            ctx->lr = 0x80C4F658u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C4F658:
    ctx->pc = 0x80C4F658u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F658u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C4F658: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F65C:
    ctx->pc = 0x80C4F65Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F65Cu)) return;
    // 80C4F65C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F660:
    ctx->pc = 0x80C4F660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F660u)) return;
    // 80C4F660: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C4F664:
    ctx->pc = 0x80C4F664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F664u)) return;
    // 80C4F664: addi    r5, r5, -2048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-2048);

label_80C4F668:
    ctx->pc = 0x80C4F668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F668u)) return;
    // 80C4F668: li      r6, 21164
    ctx->gpr[6] = (u32)(s32)(21164);

label_80C4F66C:
    ctx->pc = 0x80C4F66Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F66Cu)) return;
    // 80C4F66C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F670:
    ctx->pc = 0x80C4F670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F670u)) return;
    // 80C4F670: bl      0x8045C7B4
    {
            ctx->lr = 0x80C4F674u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C4F674:
    ctx->pc = 0x80C4F674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F674: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F678:
    ctx->pc = 0x80C4F678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F678u)) return;
    // 80C4F678: bl      0x8045F220
    {
            ctx->lr = 0x80C4F67Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F67C:
    ctx->pc = 0x80C4F67Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F67Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80C4F67C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F680:
    ctx->pc = 0x80C4F680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F680u)) return;
    // 80C4F680: addi    r4, r4, -848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-848);

label_80C4F684:
    ctx->pc = 0x80C4F684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4F684: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F684u)) return;
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
label_80C4F688:
    ctx->pc = 0x80C4F688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F688u)) return;
    // 80C4F688: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F68C:
    ctx->pc = 0x80C4F68Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F68Cu)) return;
    // 80C4F68C: addi    r4, r4, -844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-844);

label_80C4F690:
    ctx->pc = 0x80C4F690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F690u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4F690: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F690u)) return;
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
label_80C4F694:
    ctx->pc = 0x80C4F694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F694u)) return;
    // 80C4F694: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F698:
    ctx->pc = 0x80C4F698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F698u)) return;
    // 80C4F698: addi    r4, r4, -840
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-840);

label_80C4F69C:
    ctx->pc = 0x80C4F69Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F69Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4F69C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F69Cu)) return;
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
label_80C4F6A0:
    ctx->pc = 0x80C4F6A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6A0u)) return;
    // 80C4F6A0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F6A4:
    ctx->pc = 0x80C4F6A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6A4u)) return;
    // 80C4F6A4: addi    r4, r4, -836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-836);

label_80C4F6A8:
    ctx->pc = 0x80C4F6A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4F6A8: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F6A8u)) return;
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
label_80C4F6AC:
    ctx->pc = 0x80C4F6ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6ACu)) return;
    // 80C4F6AC: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80C4F6ACu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_80C4F6B0:
    ctx->pc = 0x80C4F6B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6B0u)) return;
    // 80C4F6B0: bl      0x8045E570
    {
            ctx->lr = 0x80C4F6B4u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C4F6B4:
    ctx->pc = 0x80C4F6B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F6B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F6B4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F6B8:
    ctx->pc = 0x80C4F6B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6B8u)) return;
    // 80C4F6B8: bl      0x8045F220
    {
            ctx->lr = 0x80C4F6BCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F6BC:
    ctx->pc = 0x80C4F6BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F6BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F6BC: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80C4F6C0:
    ctx->pc = 0x80C4F6C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6C0u)) return;
    // 80C4F6C0: addi    r4, r4, 17636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17636);

label_80C4F6C4:
    ctx->pc = 0x80C4F6C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6C4u)) return;
    // 80C4F6C4: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80C4F6C8:
    ctx->pc = 0x80C4F6C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6C8u)) return;
    // 80C4F6C8: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C4F6CC:
    ctx->pc = 0x80C4F6CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6CCu)) return;
    // 80C4F6CC: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F6D0:
    ctx->pc = 0x80C4F6D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6D0u)) return;
    // 80C4F6D0: addi    r6, r6, -900
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-900);

label_80C4F6D4:
    ctx->pc = 0x80C4F6D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4F6D4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4F6D4u)) return;
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
label_80C4F6D8:
    ctx->pc = 0x80C4F6D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6D8u)) return;
    // 80C4F6D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C4F6DC:
    ctx->pc = 0x80C4F6DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6DCu)) return;
    // 80C4F6DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F6E0:
    ctx->pc = 0x80C4F6E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6E0u)) return;
    // 80C4F6E0: bl      0x8045EBE4
    {
            ctx->lr = 0x80C4F6E4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C4F6E4:
    ctx->pc = 0x80C4F6E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F6E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F6E4: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C4F6E8:
    ctx->pc = 0x80C4F6E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6E8u)) return;
    // 80C4F6E8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F6ECu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F6EC:
    ctx->pc = 0x80C4F6ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F6ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F6EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F6F0:
    ctx->pc = 0x80C4F6F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6F0u)) return;
    // 80C4F6F0: bl      0x8045F220
    {
            ctx->lr = 0x80C4F6F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F6F4:
    ctx->pc = 0x80C4F6F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F6F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F6F4: bl      0x8045E6B8
    {
            ctx->lr = 0x80C4F6F8u;
            ctx->pc = 0x8045E6B8u;
            return;
    }

label_80C4F6F8:
    ctx->pc = 0x80C4F6F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F6F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F6F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F6FC:
    ctx->pc = 0x80C4F6FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F6FCu)) return;
    // 80C4F6FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F700u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F700:
    ctx->pc = 0x80C4F700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F700: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F704:
    ctx->pc = 0x80C4F704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F704u)) return;
    // 80C4F704: bl      0x8045F220
    {
            ctx->lr = 0x80C4F708u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F708:
    ctx->pc = 0x80C4F708u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F708u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F708: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F70C:
    ctx->pc = 0x80C4F70Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F70Cu)) return;
    // 80C4F70C: addi    r4, r4, -848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-848);

label_80C4F710:
    ctx->pc = 0x80C4F710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F710u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F710: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F710u)) return;
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
label_80C4F714:
    ctx->pc = 0x80C4F714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F714u)) return;
    // 80C4F714: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F718:
    ctx->pc = 0x80C4F718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F718u)) return;
    // 80C4F718: addi    r4, r4, -844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-844);

label_80C4F71C:
    ctx->pc = 0x80C4F71Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F71Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F71C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F71Cu)) return;
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
label_80C4F720:
    ctx->pc = 0x80C4F720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F720u)) return;
    // 80C4F720: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F724:
    ctx->pc = 0x80C4F724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F724u)) return;
    // 80C4F724: addi    r4, r4, -832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-832);

label_80C4F728:
    ctx->pc = 0x80C4F728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F728: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F728u)) return;
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
label_80C4F72C:
    ctx->pc = 0x80C4F72Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F72Cu)) return;
    // 80C4F72C: bl      0x8045EF2C
    {
            ctx->lr = 0x80C4F730u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C4F730:
    ctx->pc = 0x80C4F730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F730: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F734:
    ctx->pc = 0x80C4F734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F734u)) return;
    // 80C4F734: bl      0x8045F220
    {
            ctx->lr = 0x80C4F738u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F738:
    ctx->pc = 0x80C4F738u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F738u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C4F738: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F73C:
    ctx->pc = 0x80C4F73Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F73Cu)) return;
    // 80C4F73C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C4F740:
    ctx->pc = 0x80C4F740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F740u)) return;
    // 80C4F740: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80C4F744:
    ctx->pc = 0x80C4F744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F744u)) return;
    // 80C4F744: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C4F748:
    ctx->pc = 0x80C4F748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F748u)) return;
    // 80C4F748: bl      0x8045EEA8
    {
            ctx->lr = 0x80C4F74Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C4F74C:
    ctx->pc = 0x80C4F74Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F74Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F74C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F750:
    ctx->pc = 0x80C4F750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F750u)) return;
    // 80C4F750: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F754u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F754:
    ctx->pc = 0x80C4F754u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F754u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F754: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F758:
    ctx->pc = 0x80C4F758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F758u)) return;
    // 80C4F758: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F75C:
    ctx->pc = 0x80C4F75Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F75Cu)) return;
    // 80C4F75C: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F760:
    ctx->pc = 0x80C4F760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F760u)) return;
    // 80C4F760: addi    r5, r5, -828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-828);

label_80C4F764:
    ctx->pc = 0x80C4F764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F764: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F764u)) return;
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
label_80C4F768:
    ctx->pc = 0x80C4F768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F768u)) return;
    // 80C4F768: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F76C:
    ctx->pc = 0x80C4F76Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F76Cu)) return;
    // 80C4F76C: addi    r5, r5, -824
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-824);

label_80C4F770:
    ctx->pc = 0x80C4F770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F770: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F770u)) return;
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
label_80C4F774:
    ctx->pc = 0x80C4F774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F774u)) return;
    // 80C4F774: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F778:
    ctx->pc = 0x80C4F778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F778u)) return;
    // 80C4F778: addi    r5, r5, -820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-820);

label_80C4F77C:
    ctx->pc = 0x80C4F77Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F77Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F77C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F77Cu)) return;
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
label_80C4F780:
    ctx->pc = 0x80C4F780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F780u)) return;
    // 80C4F780: bl      0x8045C750
    {
            ctx->lr = 0x80C4F784u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C4F784:
    ctx->pc = 0x80C4F784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C4F784: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F788:
    ctx->pc = 0x80C4F788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F788u)) return;
    // 80C4F788: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F78C:
    ctx->pc = 0x80C4F78Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F78Cu)) return;
    // 80C4F78C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C4F790:
    ctx->pc = 0x80C4F790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F790u)) return;
    // 80C4F790: addi    r5, r5, -1024
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1024);

label_80C4F794:
    ctx->pc = 0x80C4F794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F794u)) return;
    // 80C4F794: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C4F798:
    ctx->pc = 0x80C4F798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F798u)) return;
    // 80C4F798: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F79C:
    ctx->pc = 0x80C4F79Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F79Cu)) return;
    // 80C4F79C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C4F7A0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C4F7A0:
    ctx->pc = 0x80C4F7A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F7A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F7A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F7A4:
    ctx->pc = 0x80C4F7A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7A4u)) return;
    // 80C4F7A4: bl      0x8045F220
    {
            ctx->lr = 0x80C4F7A8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F7A8:
    ctx->pc = 0x80C4F7A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F7A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80C4F7A8: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F7AC:
    ctx->pc = 0x80C4F7ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7ACu)) return;
    // 80C4F7AC: addi    r4, r4, -816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-816);

label_80C4F7B0:
    ctx->pc = 0x80C4F7B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4F7B0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F7B0u)) return;
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
label_80C4F7B4:
    ctx->pc = 0x80C4F7B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7B4u)) return;
    // 80C4F7B4: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F7B8:
    ctx->pc = 0x80C4F7B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7B8u)) return;
    // 80C4F7B8: addi    r4, r4, -812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-812);

label_80C4F7BC:
    ctx->pc = 0x80C4F7BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4F7BC: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F7BCu)) return;
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
label_80C4F7C0:
    ctx->pc = 0x80C4F7C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7C0u)) return;
    // 80C4F7C0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F7C4:
    ctx->pc = 0x80C4F7C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7C4u)) return;
    // 80C4F7C4: addi    r4, r4, -808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-808);

label_80C4F7C8:
    ctx->pc = 0x80C4F7C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4F7C8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F7C8u)) return;
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
label_80C4F7CC:
    ctx->pc = 0x80C4F7CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7CCu)) return;
    // 80C4F7CC: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F7D0:
    ctx->pc = 0x80C4F7D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7D0u)) return;
    // 80C4F7D0: addi    r4, r4, -836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-836);

label_80C4F7D4:
    ctx->pc = 0x80C4F7D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4F7D4: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F7D4u)) return;
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
label_80C4F7D8:
    ctx->pc = 0x80C4F7D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7D8u)) return;
    // 80C4F7D8: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80C4F7D8u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_80C4F7DC:
    ctx->pc = 0x80C4F7DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7DCu)) return;
    // 80C4F7DC: bl      0x8045E570
    {
            ctx->lr = 0x80C4F7E0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C4F7E0:
    ctx->pc = 0x80C4F7E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F7E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F7E0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C4F7E4:
    ctx->pc = 0x80C4F7E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7E4u)) return;
    // 80C4F7E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F7E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F7E8:
    ctx->pc = 0x80C4F7E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F7E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F7E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F7EC:
    ctx->pc = 0x80C4F7ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7ECu)) return;
    // 80C4F7EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F7F0:
    ctx->pc = 0x80C4F7F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7F0u)) return;
    // 80C4F7F0: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F7F4:
    ctx->pc = 0x80C4F7F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7F4u)) return;
    // 80C4F7F4: addi    r5, r5, -884
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-884);

label_80C4F7F8:
    ctx->pc = 0x80C4F7F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F7F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F7F8u)) return;
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
label_80C4F7FC:
    ctx->pc = 0x80C4F7FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F7FCu)) return;
    // 80C4F7FC: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F800:
    ctx->pc = 0x80C4F800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F800u)) return;
    // 80C4F800: addi    r5, r5, -880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-880);

label_80C4F804:
    ctx->pc = 0x80C4F804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F804: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F804u)) return;
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
label_80C4F808:
    ctx->pc = 0x80C4F808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F808u)) return;
    // 80C4F808: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F80C:
    ctx->pc = 0x80C4F80Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F80Cu)) return;
    // 80C4F80C: addi    r5, r5, -804
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-804);

label_80C4F810:
    ctx->pc = 0x80C4F810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F810: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F810u)) return;
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
label_80C4F814:
    ctx->pc = 0x80C4F814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F814u)) return;
    // 80C4F814: bl      0x8045C750
    {
            ctx->lr = 0x80C4F818u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C4F818:
    ctx->pc = 0x80C4F818u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F818u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F818: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F81C:
    ctx->pc = 0x80C4F81Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F81Cu)) return;
    // 80C4F81C: bl      0x8045F220
    {
            ctx->lr = 0x80C4F820u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F820:
    ctx->pc = 0x80C4F820u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F820u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F820: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C4F824:
    ctx->pc = 0x80C4F824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F824u)) return;
    // 80C4F824: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F828:
    ctx->pc = 0x80C4F828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F828u)) return;
    // 80C4F828: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F82C:
    ctx->pc = 0x80C4F82Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F82Cu)) return;
    // 80C4F82C: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F830:
    ctx->pc = 0x80C4F830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F830u)) return;
    // 80C4F830: addi    r6, r6, -908
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-908);

label_80C4F834:
    ctx->pc = 0x80C4F834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F834u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4F834: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4F834u)) return;
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
label_80C4F838:
    ctx->pc = 0x80C4F838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F838u)) return;
    // 80C4F838: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F83C:
    ctx->pc = 0x80C4F83Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F83Cu)) return;
    // 80C4F83C: addi    r6, r6, -800
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-800);

label_80C4F840:
    ctx->pc = 0x80C4F840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4F840: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4F840u)) return;
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
label_80C4F844:
    ctx->pc = 0x80C4F844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F844u)) return;
    // 80C4F844: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80C4F844u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80C4F848:
    ctx->pc = 0x80C4F848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F848u)) return;
    // 80C4F848: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C4F84C:
    ctx->pc = 0x80C4F84Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F84Cu)) return;
    // 80C4F84C: bl      0x8045C3C0
    {
            ctx->lr = 0x80C4F850u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80C4F850:
    ctx->pc = 0x80C4F850u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F850u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F850: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4F854:
    ctx->pc = 0x80C4F854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F854u)) return;
    // 80C4F854: bl      0x8045ED54
    {
            ctx->lr = 0x80C4F858u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C4F858:
    ctx->pc = 0x80C4F858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F85C:
    ctx->pc = 0x80C4F85Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F85Cu)) return;
    // 80C4F85C: bl      0x8045F220
    {
            ctx->lr = 0x80C4F860u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F860:
    ctx->pc = 0x80C4F860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F860: bl      0x8045EB8C
    {
            ctx->lr = 0x80C4F864u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C4F864:
    ctx->pc = 0x80C4F864u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F864u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F864: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F868:
    ctx->pc = 0x80C4F868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F868u)) return;
    // 80C4F868: bl      0x8045F220
    {
            ctx->lr = 0x80C4F86Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F86C:
    ctx->pc = 0x80C4F86Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F86Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F86C: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C4F870:
    ctx->pc = 0x80C4F870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F870u)) return;
    // 80C4F870: addi    r4, r4, 30148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30148);

label_80C4F874:
    ctx->pc = 0x80C4F874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F874u)) return;
    // 80C4F874: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C4F878:
    ctx->pc = 0x80C4F878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F878u)) return;
    // 80C4F878: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C4F87C:
    ctx->pc = 0x80C4F87Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F87Cu)) return;
    // 80C4F87C: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F880:
    ctx->pc = 0x80C4F880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F880u)) return;
    // 80C4F880: addi    r6, r6, -796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-796);

label_80C4F884:
    ctx->pc = 0x80C4F884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F884u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4F884: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4F884u)) return;
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
label_80C4F888:
    ctx->pc = 0x80C4F888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F888u)) return;
    // 80C4F888: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C4F88C:
    ctx->pc = 0x80C4F88Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F88Cu)) return;
    // 80C4F88C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F890:
    ctx->pc = 0x80C4F890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F890u)) return;
    // 80C4F890: bl      0x8045EBE4
    {
            ctx->lr = 0x80C4F894u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C4F894:
    ctx->pc = 0x80C4F894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F894: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F898:
    ctx->pc = 0x80C4F898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F898u)) return;
    // 80C4F898: bl      0x8045F220
    {
            ctx->lr = 0x80C4F89Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F89C:
    ctx->pc = 0x80C4F89Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F89Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80C4F89C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F8A0:
    ctx->pc = 0x80C4F8A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8A0u)) return;
    // 80C4F8A0: addi    r4, r4, -792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-792);

label_80C4F8A4:
    ctx->pc = 0x80C4F8A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4F8A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F8A4u)) return;
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
label_80C4F8A8:
    ctx->pc = 0x80C4F8A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8A8u)) return;
    // 80C4F8A8: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F8AC:
    ctx->pc = 0x80C4F8ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8ACu)) return;
    // 80C4F8AC: addi    r4, r4, -788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-788);

label_80C4F8B0:
    ctx->pc = 0x80C4F8B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4F8B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F8B0u)) return;
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
label_80C4F8B4:
    ctx->pc = 0x80C4F8B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8B4u)) return;
    // 80C4F8B4: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F8B8:
    ctx->pc = 0x80C4F8B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8B8u)) return;
    // 80C4F8B8: addi    r4, r4, -784
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-784);

label_80C4F8BC:
    ctx->pc = 0x80C4F8BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4F8BC: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F8BCu)) return;
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
label_80C4F8C0:
    ctx->pc = 0x80C4F8C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8C0u)) return;
    // 80C4F8C0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F8C4:
    ctx->pc = 0x80C4F8C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8C4u)) return;
    // 80C4F8C4: addi    r4, r4, -888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-888);

label_80C4F8C8:
    ctx->pc = 0x80C4F8C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4F8C8: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F8C8u)) return;
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
label_80C4F8CC:
    ctx->pc = 0x80C4F8CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8CCu)) return;
    // 80C4F8CC: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80C4F8CCu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_80C4F8D0:
    ctx->pc = 0x80C4F8D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8D0u)) return;
    // 80C4F8D0: bl      0x8045E570
    {
            ctx->lr = 0x80C4F8D4u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C4F8D4:
    ctx->pc = 0x80C4F8D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F8D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F8D4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C4F8D8:
    ctx->pc = 0x80C4F8D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8D8u)) return;
    // 80C4F8D8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F8DCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F8DC:
    ctx->pc = 0x80C4F8DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F8DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F8DC: bl      0x8045C4A4
    {
            ctx->lr = 0x80C4F8E0u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80C4F8E0:
    ctx->pc = 0x80C4F8E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F8E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C4F8E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F8E4:
    ctx->pc = 0x80C4F8E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8E4u)) return;
    // 80C4F8E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F8E8:
    ctx->pc = 0x80C4F8E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8E8u)) return;
    // 80C4F8E8: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F8EC:
    ctx->pc = 0x80C4F8ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8ECu)) return;
    // 80C4F8EC: addi    r5, r5, -780
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-780);

label_80C4F8F0:
    ctx->pc = 0x80C4F8F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F8F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F8F0u)) return;
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
label_80C4F8F4:
    ctx->pc = 0x80C4F8F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8F4u)) return;
    // 80C4F8F4: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F8F8:
    ctx->pc = 0x80C4F8F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8F8u)) return;
    // 80C4F8F8: addi    r5, r5, -776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-776);

label_80C4F8FC:
    ctx->pc = 0x80C4F8FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F8FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F8FC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F8FCu)) return;
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
label_80C4F900:
    ctx->pc = 0x80C4F900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F900u)) return;
    // 80C4F900: lis     r5, -27436
    ctx->gpr[5] = ((u32)(s32)(-27436) << 16);

label_80C4F904:
    ctx->pc = 0x80C4F904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F904u)) return;
    // 80C4F904: addi    r5, r5, -772
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-772);

label_80C4F908:
    ctx->pc = 0x80C4F908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F908: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4F908u)) return;
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
label_80C4F90C:
    ctx->pc = 0x80C4F90Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F90Cu)) return;
    // 80C4F90C: bl      0x8045C750
    {
            ctx->lr = 0x80C4F910u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C4F910:
    ctx->pc = 0x80C4F910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C4F910: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F914:
    ctx->pc = 0x80C4F914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F914u)) return;
    // 80C4F914: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C4F918:
    ctx->pc = 0x80C4F918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F918u)) return;
    // 80C4F918: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C4F91C:
    ctx->pc = 0x80C4F91Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F91Cu)) return;
    // 80C4F91C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C4F920:
    ctx->pc = 0x80C4F920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F920u)) return;
    // 80C4F920: addi    r6, r6, -1364
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1364);

label_80C4F924:
    ctx->pc = 0x80C4F924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F924u)) return;
    // 80C4F924: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4F928:
    ctx->pc = 0x80C4F928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F928u)) return;
    // 80C4F928: bl      0x8045C7B4
    {
            ctx->lr = 0x80C4F92Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C4F92C:
    ctx->pc = 0x80C4F92Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F92Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F92C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F930:
    ctx->pc = 0x80C4F930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F930u)) return;
    // 80C4F930: bl      0x8045F220
    {
            ctx->lr = 0x80C4F934u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F934:
    ctx->pc = 0x80C4F934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F934: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F938:
    ctx->pc = 0x80C4F938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F938u)) return;
    // 80C4F938: addi    r4, r4, -768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-768);

label_80C4F93C:
    ctx->pc = 0x80C4F93Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F93Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4F93C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F93Cu)) return;
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
label_80C4F940:
    ctx->pc = 0x80C4F940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F940u)) return;
    // 80C4F940: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F944:
    ctx->pc = 0x80C4F944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F944u)) return;
    // 80C4F944: addi    r4, r4, -764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-764);

label_80C4F948:
    ctx->pc = 0x80C4F948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4F948: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F948u)) return;
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
label_80C4F94C:
    ctx->pc = 0x80C4F94Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F94Cu)) return;
    // 80C4F94C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F950:
    ctx->pc = 0x80C4F950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F950u)) return;
    // 80C4F950: addi    r4, r4, -760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-760);

label_80C4F954:
    ctx->pc = 0x80C4F954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4F954: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F954u)) return;
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
label_80C4F958:
    ctx->pc = 0x80C4F958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F958u)) return;
    // 80C4F958: bl      0x8045EF2C
    {
            ctx->lr = 0x80C4F95Cu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C4F95C:
    ctx->pc = 0x80C4F95Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F95Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F95C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F960:
    ctx->pc = 0x80C4F960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F960u)) return;
    // 80C4F960: bl      0x8045F220
    {
            ctx->lr = 0x80C4F964u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F964:
    ctx->pc = 0x80C4F964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C4F964: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C4F968:
    ctx->pc = 0x80C4F968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F968u)) return;
    // 80C4F968: addi    r4, r6, -18
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-18);

label_80C4F96C:
    ctx->pc = 0x80C4F96Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F96Cu)) return;
    // 80C4F96C: li      r5, 25995
    ctx->gpr[5] = (u32)(s32)(25995);

label_80C4F970:
    ctx->pc = 0x80C4F970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F970u)) return;
    // 80C4F970: addi    r6, r6, -3
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3);

label_80C4F974:
    ctx->pc = 0x80C4F974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F974u)) return;
    // 80C4F974: bl      0x8045EEA8
    {
            ctx->lr = 0x80C4F978u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C4F978:
    ctx->pc = 0x80C4F978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F978: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F97C:
    ctx->pc = 0x80C4F97Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F97Cu)) return;
    // 80C4F97C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F980u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F980:
    ctx->pc = 0x80C4F980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F980: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F984:
    ctx->pc = 0x80C4F984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F984u)) return;
    // 80C4F984: bl      0x8045F220
    {
            ctx->lr = 0x80C4F988u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F988:
    ctx->pc = 0x80C4F988u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F988u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80C4F988: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F98C:
    ctx->pc = 0x80C4F98Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F98Cu)) return;
    // 80C4F98C: addi    r4, r4, -756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-756);

label_80C4F990:
    ctx->pc = 0x80C4F990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4F990: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F990u)) return;
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
label_80C4F994:
    ctx->pc = 0x80C4F994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F994u)) return;
    // 80C4F994: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F998:
    ctx->pc = 0x80C4F998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F998u)) return;
    // 80C4F998: addi    r4, r4, -752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-752);

label_80C4F99C:
    ctx->pc = 0x80C4F99Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F99Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4F99C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F99Cu)) return;
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
label_80C4F9A0:
    ctx->pc = 0x80C4F9A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9A0u)) return;
    // 80C4F9A0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F9A4:
    ctx->pc = 0x80C4F9A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9A4u)) return;
    // 80C4F9A4: addi    r4, r4, -748
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-748);

label_80C4F9A8:
    ctx->pc = 0x80C4F9A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4F9A8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F9A8u)) return;
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
label_80C4F9AC:
    ctx->pc = 0x80C4F9ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9ACu)) return;
    // 80C4F9AC: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4F9B0:
    ctx->pc = 0x80C4F9B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9B0u)) return;
    // 80C4F9B0: addi    r4, r4, -744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-744);

label_80C4F9B4:
    ctx->pc = 0x80C4F9B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4F9B4: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4F9B4u)) return;
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
label_80C4F9B8:
    ctx->pc = 0x80C4F9B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9B8u)) return;
    // 80C4F9B8: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80C4F9B8u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_80C4F9BC:
    ctx->pc = 0x80C4F9BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9BCu)) return;
    // 80C4F9BC: bl      0x8045E570
    {
            ctx->lr = 0x80C4F9C0u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C4F9C0:
    ctx->pc = 0x80C4F9C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F9C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4F9C4:
    ctx->pc = 0x80C4F9C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9C4u)) return;
    // 80C4F9C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4F9C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4F9C8:
    ctx->pc = 0x80C4F9C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F9C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F9CC:
    ctx->pc = 0x80C4F9CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9CCu)) return;
    // 80C4F9CC: bl      0x8045F220
    {
            ctx->lr = 0x80C4F9D0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F9D0:
    ctx->pc = 0x80C4F9D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F9D0: bl      0x8045E4DC
    {
            ctx->lr = 0x80C4F9D4u;
            ctx->pc = 0x8045E4DCu;
            return;
    }

label_80C4F9D4:
    ctx->pc = 0x80C4F9D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F9D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F9D8:
    ctx->pc = 0x80C4F9D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9D8u)) return;
    // 80C4F9D8: bl      0x8045F220
    {
            ctx->lr = 0x80C4F9DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F9DC:
    ctx->pc = 0x80C4F9DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4F9DC: bl      0x8045EB8C
    {
            ctx->lr = 0x80C4F9E0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C4F9E0:
    ctx->pc = 0x80C4F9E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4F9E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4F9E4:
    ctx->pc = 0x80C4F9E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9E4u)) return;
    // 80C4F9E4: bl      0x8045F220
    {
            ctx->lr = 0x80C4F9E8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4F9E8:
    ctx->pc = 0x80C4F9E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4F9E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4F9E8: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C4F9EC:
    ctx->pc = 0x80C4F9ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9ECu)) return;
    // 80C4F9EC: addi    r4, r4, 17360
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17360);

label_80C4F9F0:
    ctx->pc = 0x80C4F9F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9F0u)) return;
    // 80C4F9F0: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C4F9F4:
    ctx->pc = 0x80C4F9F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9F4u)) return;
    // 80C4F9F4: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C4F9F8:
    ctx->pc = 0x80C4F9F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9F8u)) return;
    // 80C4F9F8: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4F9FC:
    ctx->pc = 0x80C4F9FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4F9FCu)) return;
    // 80C4F9FC: addi    r6, r6, -796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-796);

label_80C4FA00:
    ctx->pc = 0x80C4FA00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FA00: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4FA00u)) return;
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
label_80C4FA04:
    ctx->pc = 0x80C4FA04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA04u)) return;
    // 80C4FA04: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C4FA08:
    ctx->pc = 0x80C4FA08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA08u)) return;
    // 80C4FA08: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4FA0C:
    ctx->pc = 0x80C4FA0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA0Cu)) return;
    // 80C4FA0C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C4FA10u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C4FA10:
    ctx->pc = 0x80C4FA10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FA10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FA14:
    ctx->pc = 0x80C4FA14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA14u)) return;
    // 80C4FA14: bl      0x8045F220
    {
            ctx->lr = 0x80C4FA18u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4FA18:
    ctx->pc = 0x80C4FA18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C4FA18: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FA1C:
    ctx->pc = 0x80C4FA1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA1Cu)) return;
    // 80C4FA1C: addi    r4, r4, -332
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-332);

label_80C4FA20:
    ctx->pc = 0x80C4FA20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA20u)) return;
    // 80C4FA20: bl      0x8045C060
    {
            ctx->lr = 0x80C4FA24u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C4FA24:
    ctx->pc = 0x80C4FA24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FA24: li      r3, 1124
    ctx->gpr[3] = (u32)(s32)(1124);

label_80C4FA28:
    ctx->pc = 0x80C4FA28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA28u)) return;
    // 80C4FA28: bl      0x8045BFA0
    {
            ctx->lr = 0x80C4FA2Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C4FA2C:
    ctx->pc = 0x80C4FA2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C4FA2C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C4FA30:
    ctx->pc = 0x80C4FA30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA30u)) return;
    // 80C4FA30: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C4FA34:
    ctx->pc = 0x80C4FA34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FA34: lwz     r0, 0(r3)
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
label_80C4FA38:
    ctx->pc = 0x80C4FA38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA38u)) return;
    // 80C4FA38: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C4FA3C:
    ctx->pc = 0x80C4FA3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA3Cu)) return;
    // 80C4FA3C: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FA40:
    ctx->pc = 0x80C4FA40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA40u)) return;
    // 80C4FA40: addi    r3, r3, -376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-376);

label_80C4FA44:
    ctx->pc = 0x80C4FA44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FA44: lwzx    r3, r3, r0
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
label_80C4FA48:
    ctx->pc = 0x80C4FA48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FA48: lwz     r3, 0(r3)
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
label_80C4FA4C:
    ctx->pc = 0x80C4FA4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA4Cu)) return;
    // 80C4FA4C: bl      0x8045F6FC
    {
            ctx->lr = 0x80C4FA50u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C4FA50:
    ctx->pc = 0x80C4FA50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FA50: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4FA54:
    ctx->pc = 0x80C4FA54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA54u)) return;
    // 80C4FA54: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4FA58u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4FA58:
    ctx->pc = 0x80C4FA58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FA58: bl      0x8045BFF4
    {
            ctx->lr = 0x80C4FA5Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C4FA5C:
    ctx->pc = 0x80C4FA5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FA5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FA60:
    ctx->pc = 0x80C4FA60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA60u)) return;
    // 80C4FA60: bl      0x8045F220
    {
            ctx->lr = 0x80C4FA64u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4FA64:
    ctx->pc = 0x80C4FA64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FA64: bl      0x8045C034
    {
            ctx->lr = 0x80C4FA68u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C4FA68:
    ctx->pc = 0x80C4FA68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FA68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FA6C:
    ctx->pc = 0x80C4FA6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA6Cu)) return;
    // 80C4FA6C: bl      0x8045F220
    {
            ctx->lr = 0x80C4FA70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4FA70:
    ctx->pc = 0x80C4FA70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C4FA70: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FA74:
    ctx->pc = 0x80C4FA74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA74u)) return;
    // 80C4FA74: addi    r4, r4, -328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-328);

label_80C4FA78:
    ctx->pc = 0x80C4FA78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA78u)) return;
    // 80C4FA78: bl      0x8045C060
    {
            ctx->lr = 0x80C4FA7Cu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C4FA7C:
    ctx->pc = 0x80C4FA7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FA7C: li      r3, 1125
    ctx->gpr[3] = (u32)(s32)(1125);

label_80C4FA80:
    ctx->pc = 0x80C4FA80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA80u)) return;
    // 80C4FA80: bl      0x8045BFA0
    {
            ctx->lr = 0x80C4FA84u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C4FA84:
    ctx->pc = 0x80C4FA84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FA84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C4FA84: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C4FA88:
    ctx->pc = 0x80C4FA88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA88u)) return;
    // 80C4FA88: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C4FA8C:
    ctx->pc = 0x80C4FA8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FA8C: lwz     r0, 0(r3)
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
label_80C4FA90:
    ctx->pc = 0x80C4FA90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA90u)) return;
    // 80C4FA90: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C4FA94:
    ctx->pc = 0x80C4FA94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA94u)) return;
    // 80C4FA94: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FA98:
    ctx->pc = 0x80C4FA98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA98u)) return;
    // 80C4FA98: addi    r3, r3, -376
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-376);

label_80C4FA9C:
    ctx->pc = 0x80C4FA9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FA9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FA9C: lwzx    r3, r3, r0
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
label_80C4FAA0:
    ctx->pc = 0x80C4FAA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FAA0: lwz     r3, 4(r3)
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
label_80C4FAA4:
    ctx->pc = 0x80C4FAA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAA4u)) return;
    // 80C4FAA4: bl      0x8045F6FC
    {
            ctx->lr = 0x80C4FAA8u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C4FAA8:
    ctx->pc = 0x80C4FAA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FAA8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4FAAC:
    ctx->pc = 0x80C4FAACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAACu)) return;
    // 80C4FAAC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4FAB0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4FAB0:
    ctx->pc = 0x80C4FAB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FAB0: bl      0x8045BFF4
    {
            ctx->lr = 0x80C4FAB4u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C4FAB4:
    ctx->pc = 0x80C4FAB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FAB4: bl      0x8045F32C
    {
            ctx->lr = 0x80C4FAB8u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C4FAB8:
    ctx->pc = 0x80C4FAB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FAB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FABC:
    ctx->pc = 0x80C4FABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FABCu)) return;
    // 80C4FABC: bl      0x8045F220
    {
            ctx->lr = 0x80C4FAC0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4FAC0:
    ctx->pc = 0x80C4FAC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FAC0: bl      0x8045EB8C
    {
            ctx->lr = 0x80C4FAC4u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C4FAC4:
    ctx->pc = 0x80C4FAC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FAC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FAC8:
    ctx->pc = 0x80C4FAC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAC8u)) return;
    // 80C4FAC8: bl      0x8045F220
    {
            ctx->lr = 0x80C4FACCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4FACC:
    ctx->pc = 0x80C4FACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4FACC: lis     r4, -28567
    ctx->gpr[4] = ((u32)(s32)(-28567) << 16);

label_80C4FAD0:
    ctx->pc = 0x80C4FAD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAD0u)) return;
    // 80C4FAD0: addi    r4, r4, 30148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30148);

label_80C4FAD4:
    ctx->pc = 0x80C4FAD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAD4u)) return;
    // 80C4FAD4: lis     r5, -28581
    ctx->gpr[5] = ((u32)(s32)(-28581) << 16);

label_80C4FAD8:
    ctx->pc = 0x80C4FAD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAD8u)) return;
    // 80C4FAD8: addi    r5, r5, 4544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4544);

label_80C4FADC:
    ctx->pc = 0x80C4FADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FADCu)) return;
    // 80C4FADC: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C4FAE0:
    ctx->pc = 0x80C4FAE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAE0u)) return;
    // 80C4FAE0: addi    r6, r6, -796
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-796);

label_80C4FAE4:
    ctx->pc = 0x80C4FAE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FAE4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C4FAE4u)) return;
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
label_80C4FAE8:
    ctx->pc = 0x80C4FAE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAE8u)) return;
    // 80C4FAE8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C4FAEC:
    ctx->pc = 0x80C4FAECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAECu)) return;
    // 80C4FAEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C4FAF0:
    ctx->pc = 0x80C4FAF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAF0u)) return;
    // 80C4FAF0: bl      0x8045EBE4
    {
            ctx->lr = 0x80C4FAF4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C4FAF4:
    ctx->pc = 0x80C4FAF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FAF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FAF8:
    ctx->pc = 0x80C4FAF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FAF8u)) return;
    // 80C4FAF8: bl      0x8045F220
    {
            ctx->lr = 0x80C4FAFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C4FAFC:
    ctx->pc = 0x80C4FAFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FAFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80C4FAFC: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FB00:
    ctx->pc = 0x80C4FB00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB00u)) return;
    // 80C4FB00: addi    r4, r4, -816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-816);

label_80C4FB04:
    ctx->pc = 0x80C4FB04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FB04: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FB04u)) return;
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
label_80C4FB08:
    ctx->pc = 0x80C4FB08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB08u)) return;
    // 80C4FB08: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FB0C:
    ctx->pc = 0x80C4FB0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB0Cu)) return;
    // 80C4FB0C: addi    r4, r4, -812
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-812);

label_80C4FB10:
    ctx->pc = 0x80C4FB10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4FB10: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FB10u)) return;
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
label_80C4FB14:
    ctx->pc = 0x80C4FB14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB14u)) return;
    // 80C4FB14: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FB18:
    ctx->pc = 0x80C4FB18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB18u)) return;
    // 80C4FB18: addi    r4, r4, -808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-808);

label_80C4FB1C:
    ctx->pc = 0x80C4FB1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4FB1C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FB1Cu)) return;
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
label_80C4FB20:
    ctx->pc = 0x80C4FB20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB20u)) return;
    // 80C4FB20: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FB24:
    ctx->pc = 0x80C4FB24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB24u)) return;
    // 80C4FB24: addi    r4, r4, -836
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-836);

label_80C4FB28:
    ctx->pc = 0x80C4FB28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FB28: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FB28u)) return;
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
label_80C4FB2C:
    ctx->pc = 0x80C4FB2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB2Cu)) return;
    // 80C4FB2C: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x80C4FB2Cu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_80C4FB30:
    ctx->pc = 0x80C4FB30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB30u)) return;
    // 80C4FB30: bl      0x8045E570
    {
            ctx->lr = 0x80C4FB34u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C4FB34:
    ctx->pc = 0x80C4FB34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C4FB34: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FB38:
    ctx->pc = 0x80C4FB38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB38u)) return;
    // 80C4FB38: addi    r3, r3, -740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-740);

label_80C4FB3C:
    ctx->pc = 0x80C4FB3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4FB3C: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FB3Cu)) return;
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
label_80C4FB40:
    ctx->pc = 0x80C4FB40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB40u)) return;
    // 80C4FB40: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FB44:
    ctx->pc = 0x80C4FB44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB44u)) return;
    // 80C4FB44: addi    r3, r3, -908
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-908);

label_80C4FB48:
    ctx->pc = 0x80C4FB48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FB48: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FB48u)) return;
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
label_80C4FB4C:
    ctx->pc = 0x80C4FB4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB4Cu)) return;
    // 80C4FB4C: fmr    f3, f2
    if (!ppc_fp_available_inline(ctx, 0x80C4FB4Cu)) return;
    ctx->fpr[3] = ctx->fpr[2];

label_80C4FB50:
    ctx->pc = 0x80C4FB50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB50u)) return;
    // 80C4FB50: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80C4FB50u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80C4FB54:
    ctx->pc = 0x80C4FB54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB54u)) return;
    // 80C4FB54: fmr    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x80C4FB54u)) return;
    ctx->fpr[5] = ctx->fpr[2];

label_80C4FB58:
    ctx->pc = 0x80C4FB58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB58u)) return;
    // 80C4FB58: bl      0x80C4FDC8
    {
            ctx->lr = 0x80C4FB5Cu;
            goto label_80C4FDC8;
    }

label_80C4FB5C:
    ctx->pc = 0x80C4FB5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C4FB5C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FB60:
    ctx->pc = 0x80C4FB60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB60u)) return;
    // 80C4FB60: addi    r4, r4, -288
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-288);

label_80C4FB64:
    ctx->pc = 0x80C4FB64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FB64: stw     r3, 0(r4)
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
label_80C4FB68:
    ctx->pc = 0x80C4FB68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB68u)) return;
    // 80C4FB68: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C4FB6C:
    ctx->pc = 0x80C4FB6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB6Cu)) return;
    // 80C4FB6C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C4FB70u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C4FB70:
    ctx->pc = 0x80C4FB70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FB70: b       0x80C4FBB4
    {
            goto label_80C4FBB4;
    }

label_80C4FB74:
    ctx->pc = 0x80C4FB74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FB74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4FB78:
    ctx->pc = 0x80C4FB78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB78u)) return;
    // 80C4FB78: bl      0x8045ED54
    {
            ctx->lr = 0x80C4FB7Cu;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C4FB7C:
    ctx->pc = 0x80C4FB7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FB7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FB80:
    ctx->pc = 0x80C4FB80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB80u)) return;
    // 80C4FB80: bl      0x8045EC10
    {
            ctx->lr = 0x80C4FB84u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C4FB84:
    ctx->pc = 0x80C4FB84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C4FB84: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FB88:
    ctx->pc = 0x80C4FB88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB88u)) return;
    // 80C4FB88: addi    r3, r3, -288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-288);

label_80C4FB8C:
    ctx->pc = 0x80C4FB8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FB8C: lwz     r3, 0(r3)
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
label_80C4FB90:
    ctx->pc = 0x80C4FB90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB90u)) return;
    // 80C4FB90: cmplwi  r3, 0x0000
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

label_80C4FB94:
    ctx->pc = 0x80C4FB94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FB94u)) return;
    // 80C4FB94: bc    12, 2, 0x80C4FBAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C4FBAC;
        }
    }

label_80C4FB98:
    ctx->pc = 0x80C4FB98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FB98: bl      0x8050F9E0
    {
            ctx->lr = 0x80C4FB9Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C4FB9C:
    ctx->pc = 0x80C4FB9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FB9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C4FB9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C4FBA0:
    ctx->pc = 0x80C4FBA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBA0u)) return;
    // 80C4FBA0: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FBA4:
    ctx->pc = 0x80C4FBA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBA4u)) return;
    // 80C4FBA4: addi    r3, r3, -288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-288);

label_80C4FBA8:
    ctx->pc = 0x80C4FBA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C4FBA8: stw     r0, 0(r3)
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
label_80C4FBAC:
    ctx->pc = 0x80C4FBACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FBACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FBAC: bl      0x8045DE34
    {
            ctx->lr = 0x80C4FBB0u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C4FBB0:
    ctx->pc = 0x80C4FBB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FBB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FBB0: bl      0x80460A80
    {
            ctx->lr = 0x80C4FBB4u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C4FBB4:
    ctx->pc = 0x80C4FBB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FBB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FBB4: lwz     r0, 20(r1)
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
label_80C4FBB8:
    ctx->pc = 0x80C4FBB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FBB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FBB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FBBC:
    ctx->pc = 0x80C4FBBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBBCu)) return;
    // 80C4FBBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C4FBC0:
    ctx->pc = 0x80C4FBC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBC0u)) return;
    // 80C4FBC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FBC4:
    ctx->pc = 0x80C4FBC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FBC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FBC4: stwu     r1, -64(r1)
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
label_80C4FBC8:
    ctx->pc = 0x80C4FBC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FBC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FBCC:
    ctx->pc = 0x80C4FBCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FBCC: stw     r0, 68(r1)
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
label_80C4FBD0:
    ctx->pc = 0x80C4FBD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBD0u)) return;
    // 80C4FBD0: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C4FBD4:
    ctx->pc = 0x80C4FBD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBD4u)) return;
    // 80C4FBD4: bl      0x80006DD4
    {
            ctx->lr = 0x80C4FBD8u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C4FBD8:
    ctx->pc = 0x80C4FBD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FBD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C4FBD8: lwz     r27, 32(r3)
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
label_80C4FBDC:
    ctx->pc = 0x80C4FBDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBDCu)) return;
    // 80C4FBDC: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FBE0:
    ctx->pc = 0x80C4FBE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBE0u)) return;
    // 80C4FBE0: addi    r3, r3, -736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-736);

label_80C4FBE4:
    ctx->pc = 0x80C4FBE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C4FBE4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FBE4u)) return;
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
label_80C4FBE8:
    ctx->pc = 0x80C4FBE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C4FBE8: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C4FBE8u)) return;
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
label_80C4FBEC:
    ctx->pc = 0x80C4FBECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBECu)) return;
    // 80C4FBEC: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FBECu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C4FBF0:
    ctx->pc = 0x80C4FBF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBF0u)) return;
    // 80C4FBF0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FBF0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C4FBF4:
    ctx->pc = 0x80C4FBF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C4FBF4: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FBF4u)) return;
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
label_80C4FBF8:
    ctx->pc = 0x80C4FBF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C4FBF8: lwz     r31, 12(r1)
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
label_80C4FBFC:
    ctx->pc = 0x80C4FBFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FBFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C4FBFC: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C4FBFCu)) return;
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
label_80C4FC00:
    ctx->pc = 0x80C4FC00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC00u)) return;
    // 80C4FC00: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC00u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C4FC04:
    ctx->pc = 0x80C4FC04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC04u)) return;
    // 80C4FC04: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC04u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C4FC08:
    ctx->pc = 0x80C4FC08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C4FC08: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC08u)) return;
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
label_80C4FC0C:
    ctx->pc = 0x80C4FC0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C4FC0C: lwz     r30, 20(r1)
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
label_80C4FC10:
    ctx->pc = 0x80C4FC10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C4FC10: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC10u)) return;
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
label_80C4FC14:
    ctx->pc = 0x80C4FC14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC14u)) return;
    // 80C4FC14: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC14u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C4FC18:
    ctx->pc = 0x80C4FC18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC18u)) return;
    // 80C4FC18: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC18u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C4FC1C:
    ctx->pc = 0x80C4FC1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FC1C: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC1Cu)) return;
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
label_80C4FC20:
    ctx->pc = 0x80C4FC20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C4FC20: lwz     r29, 28(r1)
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
label_80C4FC24:
    ctx->pc = 0x80C4FC24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C4FC24: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC24u)) return;
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
label_80C4FC28:
    ctx->pc = 0x80C4FC28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC28u)) return;
    // 80C4FC28: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC28u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C4FC2C:
    ctx->pc = 0x80C4FC2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC2Cu)) return;
    // 80C4FC2C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC2Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C4FC30:
    ctx->pc = 0x80C4FC30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FC30: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC30u)) return;
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
label_80C4FC34:
    ctx->pc = 0x80C4FC34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4FC34: lwz     r28, 36(r1)
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
label_80C4FC38:
    ctx->pc = 0x80C4FC38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC38u)) return;
    // 80C4FC38: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C4FC3C:
    ctx->pc = 0x80C4FC3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC3Cu)) return;
    // 80C4FC3C: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C4FC40:
    ctx->pc = 0x80C4FC40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FC40: lwz     r0, 0(r3)
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
label_80C4FC44:
    ctx->pc = 0x80C4FC44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC44u)) return;
    // 80C4FC44: cmpwi   r0, 0
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

label_80C4FC48:
    ctx->pc = 0x80C4FC48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC48u)) return;
    // 80C4FC48: bc    4, 2, 0x80C4FD00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FD00;
        }
    }

label_80C4FC4C:
    ctx->pc = 0x80C4FC4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FC4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C4FC4C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C4FC50:
    ctx->pc = 0x80C4FC50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC50u)) return;
    // 80C4FC50: cmplwi  r0, 0x0000
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

label_80C4FC54:
    ctx->pc = 0x80C4FC54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC54u)) return;
    // 80C4FC54: bc    12, 2, 0x80C4FD00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C4FD00;
        }
    }

label_80C4FC58:
    ctx->pc = 0x80C4FC58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FC58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C4FC58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C4FC5C:
    ctx->pc = 0x80C4FC5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC5Cu)) return;
    // 80C4FC5C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C4FC60:
    ctx->pc = 0x80C4FC60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC60u)) return;
    // 80C4FC60: bl      0x8060F4F8
    {
            ctx->lr = 0x80C4FC64u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C4FC64:
    ctx->pc = 0x80C4FC64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FC64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C4FC64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C4FC68:
    ctx->pc = 0x80C4FC68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC68u)) return;
    // 80C4FC68: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C4FC6C:
    ctx->pc = 0x80C4FC6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC6Cu)) return;
    // 80C4FC6C: bl      0x8060F4F8
    {
            ctx->lr = 0x80C4FC70u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C4FC70:
    ctx->pc = 0x80C4FC70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FC70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FC70: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC70u)) return;
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
label_80C4FC74:
    ctx->pc = 0x80C4FC74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC74u)) return;
    // 80C4FC74: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FC78:
    ctx->pc = 0x80C4FC78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC78u)) return;
    // 80C4FC78: addi    r3, r3, -728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-728);

label_80C4FC7C:
    ctx->pc = 0x80C4FC7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FC7C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC7Cu)) return;
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
label_80C4FC80:
    ctx->pc = 0x80C4FC80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC80u)) return;
    // 80C4FC80: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC80u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C4FC84:
    ctx->pc = 0x80C4FC84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC84u)) return;
    // 80C4FC84: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C4FC88:
    ctx->pc = 0x80C4FC88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC88u)) return;
    // 80C4FC88: bc    4, 2, 0x80C4FC9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FC9C;
        }
    }

label_80C4FC8C:
    ctx->pc = 0x80C4FC8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FC8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C4FC8C: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FC90:
    ctx->pc = 0x80C4FC90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC90u)) return;
    // 80C4FC90: addi    r3, r3, -732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-732);

label_80C4FC94:
    ctx->pc = 0x80C4FC94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FC94: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FC94u)) return;
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
label_80C4FC98:
    ctx->pc = 0x80C4FC98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FC98u)) return;
    // 80C4FC98: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FC98u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C4FC9C:
    ctx->pc = 0x80C4FC9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FC9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C4FC9C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C4FCA0:
    ctx->pc = 0x80C4FCA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCA0u)) return;
    // 80C4FCA0: cmplwi  r0, 0x00FF
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

label_80C4FCA4:
    ctx->pc = 0x80C4FCA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCA4u)) return;
    // 80C4FCA4: bc    4, 1, 0x80C4FCAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FCAC;
        }
    }

label_80C4FCA8:
    ctx->pc = 0x80C4FCA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FCA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FCA8: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C4FCAC:
    ctx->pc = 0x80C4FCACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FCACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C4FCAC: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FCB0:
    ctx->pc = 0x80C4FCB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCB0u)) return;
    // 80C4FCB0: addi    r3, r3, -724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-724);

label_80C4FCB4:
    ctx->pc = 0x80C4FCB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C4FCB4: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FCB4u)) return;
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
label_80C4FCB8:
    ctx->pc = 0x80C4FCB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCB8u)) return;
    // 80C4FCB8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C4FCB8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C4FCBC:
    ctx->pc = 0x80C4FCBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCBCu)) return;
    // 80C4FCBC: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FCC0:
    ctx->pc = 0x80C4FCC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCC0u)) return;
    // 80C4FCC0: addi    r3, r3, -720
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-720);

label_80C4FCC4:
    ctx->pc = 0x80C4FCC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C4FCC4: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FCC4u)) return;
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
label_80C4FCC8:
    ctx->pc = 0x80C4FCC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCC8u)) return;
    // 80C4FCC8: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C4FCCC:
    ctx->pc = 0x80C4FCCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCCCu)) return;
    // 80C4FCCC: addi    r3, r3, -716
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-716);

label_80C4FCD0:
    ctx->pc = 0x80C4FCD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FCD0: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FCD0u)) return;
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
label_80C4FCD4:
    ctx->pc = 0x80C4FCD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCD4u)) return;
    // 80C4FCD4: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C4FCD8:
    ctx->pc = 0x80C4FCD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCD8u)) return;
    // 80C4FCD8: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C4FCDC:
    ctx->pc = 0x80C4FCDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCDCu)) return;
    // 80C4FCDC: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C4FCE0:
    ctx->pc = 0x80C4FCE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCE0u)) return;
    // 80C4FCE0: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C4FCE4:
    ctx->pc = 0x80C4FCE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCE4u)) return;
    // 80C4FCE4: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C4FCE8:
    ctx->pc = 0x80C4FCE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCE8u)) return;
    // 80C4FCE8: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C4FCEC:
    ctx->pc = 0x80C4FCECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCECu)) return;
    // 80C4FCEC: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C4FCF0:
    ctx->pc = 0x80C4FCF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCF0u)) return;
    // 80C4FCF0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C4FCF4:
    ctx->pc = 0x80C4FCF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCF4u)) return;
    // 80C4FCF4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C4FCF8:
    ctx->pc = 0x80C4FCF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCF8u)) return;
    // 80C4FCF8: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C4FCFC:
    ctx->pc = 0x80C4FCFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FCFCu)) return;
    // 80C4FCFC: bl      0x80C4FEBC
    {
            ctx->lr = 0x80C4FD00u;
            goto label_80C4FEBC;
    }

label_80C4FD00:
    ctx->pc = 0x80C4FD00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FD00: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C4FD04:
    ctx->pc = 0x80C4FD04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD04u)) return;
    // 80C4FD04: bl      0x80006E20
    {
            ctx->lr = 0x80C4FD08u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C4FD08:
    ctx->pc = 0x80C4FD08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FD08: lwz     r0, 68(r1)
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
label_80C4FD0C:
    ctx->pc = 0x80C4FD0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FD0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FD0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FD10:
    ctx->pc = 0x80C4FD10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD10u)) return;
    // 80C4FD10: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C4FD14:
    ctx->pc = 0x80C4FD14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD14u)) return;
    // 80C4FD14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FD18:
    ctx->pc = 0x80C4FD18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FD18: stwu     r1, -16(r1)
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
label_80C4FD1C:
    ctx->pc = 0x80C4FD1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C4FD1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FD20:
    ctx->pc = 0x80C4FD20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C4FD20: stw     r0, 20(r1)
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
label_80C4FD24:
    ctx->pc = 0x80C4FD24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4FD24: lwz     r5, 32(r3)
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
label_80C4FD28:
    ctx->pc = 0x80C4FD28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4FD28: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FD28u)) return;
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
label_80C4FD2C:
    ctx->pc = 0x80C4FD2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FD2C: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FD2Cu)) return;
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
label_80C4FD30:
    ctx->pc = 0x80C4FD30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD30u)) return;
    // 80C4FD30: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FD30u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C4FD34:
    ctx->pc = 0x80C4FD34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD34u)) return;
    // 80C4FD34: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FD38:
    ctx->pc = 0x80C4FD38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD38u)) return;
    // 80C4FD38: addi    r4, r4, -712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-712);

label_80C4FD3C:
    ctx->pc = 0x80C4FD3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FD3C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FD3Cu)) return;
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
label_80C4FD40:
    ctx->pc = 0x80C4FD40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD40u)) return;
    // 80C4FD40: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FD40u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C4FD44:
    ctx->pc = 0x80C4FD44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD44u)) return;
    // 80C4FD44: bc    4, 1, 0x80C4FD50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FD50;
        }
    }

label_80C4FD48:
    ctx->pc = 0x80C4FD48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C4FD48: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FD48u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C4FD4C:
    ctx->pc = 0x80C4FD4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD4Cu)) return;
    // 80C4FD4C: b       0x80C4FD68
    {
            goto label_80C4FD68;
    }

label_80C4FD50:
    ctx->pc = 0x80C4FD50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C4FD50: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FD54:
    ctx->pc = 0x80C4FD54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD54u)) return;
    // 80C4FD54: addi    r4, r4, -724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-724);

label_80C4FD58:
    ctx->pc = 0x80C4FD58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FD58: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FD58u)) return;
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
label_80C4FD5C:
    ctx->pc = 0x80C4FD5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD5Cu)) return;
    // 80C4FD5C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FD5Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C4FD60:
    ctx->pc = 0x80C4FD60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD60u)) return;
    // 80C4FD60: bc    4, 0, 0x80C4FD68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FD68;
        }
    }

label_80C4FD64:
    ctx->pc = 0x80C4FD64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FD64: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C4FD64u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C4FD68:
    ctx->pc = 0x80C4FD68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FD68: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FD68u)) return;
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
label_80C4FD6C:
    ctx->pc = 0x80C4FD6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD6Cu)) return;
    // 80C4FD6C: bl      0x80C4FBC4
    {
            ctx->lr = 0x80C4FD70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C4FBC4u;
                return;
            }
            goto label_80C4FBC4;
    }

label_80C4FD70:
    ctx->pc = 0x80C4FD70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FD70: lwz     r0, 20(r1)
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
label_80C4FD74:
    ctx->pc = 0x80C4FD74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FD74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FD74: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FD78:
    ctx->pc = 0x80C4FD78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD78u)) return;
    // 80C4FD78: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C4FD7C:
    ctx->pc = 0x80C4FD7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD7Cu)) return;
    // 80C4FD7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FD80:
    ctx->pc = 0x80C4FD80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C4FD80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FD84:
    ctx->pc = 0x80C4FD84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FD84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C4FD84: stwu     r1, -16(r1)
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
label_80C4FD88:
    ctx->pc = 0x80C4FD88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FD88: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FD8C:
    ctx->pc = 0x80C4FD8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C4FD8C: stw     r0, 20(r1)
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
label_80C4FD90:
    ctx->pc = 0x80C4FD90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD90u)) return;
    // 80C4FD90: lis     r4, -32571
    ctx->gpr[4] = ((u32)(s32)(-32571) << 16);

label_80C4FD94:
    ctx->pc = 0x80C4FD94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD94u)) return;
    // 80C4FD94: addi    r0, r4, -744
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-744);

label_80C4FD98:
    ctx->pc = 0x80C4FD98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4FD98: stw     r0, 16(r3)
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
label_80C4FD9C:
    ctx->pc = 0x80C4FD9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FD9Cu)) return;
    // 80C4FD9C: lis     r4, -32571
    ctx->gpr[4] = ((u32)(s32)(-32571) << 16);

label_80C4FDA0:
    ctx->pc = 0x80C4FDA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDA0u)) return;
    // 80C4FDA0: addi    r0, r4, -1084
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1084);

label_80C4FDA4:
    ctx->pc = 0x80C4FDA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FDA4: stw     r0, 20(r3)
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
label_80C4FDA8:
    ctx->pc = 0x80C4FDA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDA8u)) return;
    // 80C4FDA8: lis     r4, -32571
    ctx->gpr[4] = ((u32)(s32)(-32571) << 16);

label_80C4FDAC:
    ctx->pc = 0x80C4FDACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDACu)) return;
    // 80C4FDAC: addi    r0, r4, -640
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-640);

label_80C4FDB0:
    ctx->pc = 0x80C4FDB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FDB0: stw     r0, 24(r3)
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
label_80C4FDB4:
    ctx->pc = 0x80C4FDB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDB4u)) return;
    // 80C4FDB4: bl      0x80C4FD18
    {
            ctx->lr = 0x80C4FDB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C4FD18u;
                return;
            }
            goto label_80C4FD18;
    }

label_80C4FDB8:
    ctx->pc = 0x80C4FDB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FDB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FDB8: lwz     r0, 20(r1)
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
label_80C4FDBC:
    ctx->pc = 0x80C4FDBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FDBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FDBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDC0:
    ctx->pc = 0x80C4FDC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDC0u)) return;
    // 80C4FDC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C4FDC4:
    ctx->pc = 0x80C4FDC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDC4u)) return;
    // 80C4FDC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FDC8:
    ctx->pc = 0x80C4FDC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FDC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C4FDC8: stwu     r1, -96(r1)
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
label_80C4FDCC:
    ctx->pc = 0x80C4FDCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C4FDCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDD0:
    ctx->pc = 0x80C4FDD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C4FDD0: stw     r0, 100(r1)
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
label_80C4FDD4:
    ctx->pc = 0x80C4FDD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C4FDD4: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FDD4u)) return;
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
label_80C4FDD8:
    ctx->pc = 0x80C4FDD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C4FDD8: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FDD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C4FDD8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDDC:
    ctx->pc = 0x80C4FDDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C4FDDC: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FDDCu)) return;
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
label_80C4FDE0:
    ctx->pc = 0x80C4FDE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C4FDE0: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FDE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C4FDE0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDE4:
    ctx->pc = 0x80C4FDE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C4FDE4: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FDE4u)) return;
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
label_80C4FDE8:
    ctx->pc = 0x80C4FDE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C4FDE8: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FDE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C4FDE8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDEC:
    ctx->pc = 0x80C4FDECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C4FDEC: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FDECu)) return;
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
label_80C4FDF0:
    ctx->pc = 0x80C4FDF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C4FDF0: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FDF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C4FDF0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDF4:
    ctx->pc = 0x80C4FDF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FDF4: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FDF4u)) return;
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
label_80C4FDF8:
    ctx->pc = 0x80C4FDF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C4FDF8: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FDF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C4FDF8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FDFC:
    ctx->pc = 0x80C4FDFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FDFCu)) return;
    // 80C4FDFC: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C4FDFCu)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C4FE00:
    ctx->pc = 0x80C4FE00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE00u)) return;
    // 80C4FE00: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C4FE00u)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C4FE04:
    ctx->pc = 0x80C4FE04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE04u)) return;
    // 80C4FE04: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C4FE04u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C4FE08:
    ctx->pc = 0x80C4FE08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE08u)) return;
    // 80C4FE08: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C4FE08u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C4FE0C:
    ctx->pc = 0x80C4FE0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE0Cu)) return;
    // 80C4FE0C: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C4FE0Cu)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C4FE10:
    ctx->pc = 0x80C4FE10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE10u)) return;
    // 80C4FE10: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C4FE14:
    ctx->pc = 0x80C4FE14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE14u)) return;
    // 80C4FE14: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C4FE18:
    ctx->pc = 0x80C4FE18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE18u)) return;
    // 80C4FE18: lis     r5, -32571
    ctx->gpr[5] = ((u32)(s32)(-32571) << 16);

label_80C4FE1C:
    ctx->pc = 0x80C4FE1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE1Cu)) return;
    // 80C4FE1C: addi    r5, r5, -636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-636);

label_80C4FE20:
    ctx->pc = 0x80C4FE20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE20u)) return;
    // 80C4FE20: bl      0x8050FD60
    {
            ctx->lr = 0x80C4FE24u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C4FE24:
    ctx->pc = 0x80C4FE24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FE24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C4FE24: lwz     r5, 32(r3)
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
label_80C4FE28:
    ctx->pc = 0x80C4FE28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C4FE28: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE28u)) return;
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
label_80C4FE2C:
    ctx->pc = 0x80C4FE2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C4FE2C: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE2Cu)) return;
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
label_80C4FE30:
    ctx->pc = 0x80C4FE30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C4FE30: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE30u)) return;
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
label_80C4FE34:
    ctx->pc = 0x80C4FE34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C4FE34: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE34u)) return;
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
label_80C4FE38:
    ctx->pc = 0x80C4FE38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C4FE38: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE38u)) return;
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
label_80C4FE3C:
    ctx->pc = 0x80C4FE3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE3Cu)) return;
    // 80C4FE3C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C4FE40:
    ctx->pc = 0x80C4FE40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE40u)) return;
    // 80C4FE40: addi    r4, r4, -728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-728);

label_80C4FE44:
    ctx->pc = 0x80C4FE44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C4FE44: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE44u)) return;
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
label_80C4FE48:
    ctx->pc = 0x80C4FE48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C4FE48: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE48u)) return;
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
label_80C4FE4C:
    ctx->pc = 0x80C4FE4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C4FE4C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FE4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C4FE4Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FE50:
    ctx->pc = 0x80C4FE50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C4FE50: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE50u)) return;
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
label_80C4FE54:
    ctx->pc = 0x80C4FE54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C4FE54: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FE54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C4FE54u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FE58:
    ctx->pc = 0x80C4FE58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C4FE58: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE58u)) return;
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
label_80C4FE5C:
    ctx->pc = 0x80C4FE5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C4FE5C: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FE5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C4FE5Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FE60:
    ctx->pc = 0x80C4FE60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C4FE60: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE60u)) return;
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
label_80C4FE64:
    ctx->pc = 0x80C4FE64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4FE64: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FE64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C4FE64u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FE68:
    ctx->pc = 0x80C4FE68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4FE68: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE68u)) return;
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
label_80C4FE6C:
    ctx->pc = 0x80C4FE6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FE6C: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C4FE6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C4FE6Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FE70:
    ctx->pc = 0x80C4FE70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4FE70: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE70u)) return;
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
label_80C4FE74:
    ctx->pc = 0x80C4FE74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FE74: lwz     r0, 100(r1)
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
label_80C4FE78:
    ctx->pc = 0x80C4FE78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FE78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FE78: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FE7C:
    ctx->pc = 0x80C4FE7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE7Cu)) return;
    // 80C4FE7C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C4FE80:
    ctx->pc = 0x80C4FE80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE80u)) return;
    // 80C4FE80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FE84:
    ctx->pc = 0x80C4FE84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FE84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FE84: lwz     r3, 32(r3)
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
label_80C4FE88:
    ctx->pc = 0x80C4FE88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FE88: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE88u)) return;
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
label_80C4FE8C:
    ctx->pc = 0x80C4FE8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE8Cu)) return;
    // 80C4FE8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FE90:
    ctx->pc = 0x80C4FE90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FE90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FE90: lwz     r3, 32(r3)
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
label_80C4FE94:
    ctx->pc = 0x80C4FE94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FE94: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FE94u)) return;
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
label_80C4FE98:
    ctx->pc = 0x80C4FE98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FE98u)) return;
    // 80C4FE98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FE9C:
    ctx->pc = 0x80C4FE9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FE9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FE9C: lwz     r3, 32(r3)
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
label_80C4FEA0:
    ctx->pc = 0x80C4FEA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FEA0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FEA0u)) return;
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
label_80C4FEA4:
    ctx->pc = 0x80C4FEA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FEA4: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FEA4u)) return;
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
label_80C4FEA8:
    ctx->pc = 0x80C4FEA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FEA8: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FEA8u)) return;
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
label_80C4FEAC:
    ctx->pc = 0x80C4FEACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEACu)) return;
    // 80C4FEAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FEB0:
    ctx->pc = 0x80C4FEB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FEB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FEB0: lwz     r3, 32(r3)
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
label_80C4FEB4:
    ctx->pc = 0x80C4FEB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FEB4: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C4FEB4u)) return;
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
label_80C4FEB8:
    ctx->pc = 0x80C4FEB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEB8u)) return;
    // 80C4FEB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FEBC:
    ctx->pc = 0x80C4FEBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FEBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FEBC: stwu     r1, -16(r1)
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
label_80C4FEC0:
    ctx->pc = 0x80C4FEC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FEC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FEC4:
    ctx->pc = 0x80C4FEC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FEC4: stw     r0, 20(r1)
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
label_80C4FEC8:
    ctx->pc = 0x80C4FEC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEC8u)) return;
    // 80C4FEC8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C4FECC:
    ctx->pc = 0x80C4FECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FECCu)) return;
    // 80C4FECC: bl      0x80607948
    {
            ctx->lr = 0x80C4FED0u;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C4FED0:
    ctx->pc = 0x80C4FED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FED0: lwz     r0, 20(r1)
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
label_80C4FED4:
    ctx->pc = 0x80C4FED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FED8:
    ctx->pc = 0x80C4FED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FED8u)) return;
    // 80C4FED8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C4FEDC:
    ctx->pc = 0x80C4FEDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEDCu)) return;
    // 80C4FEDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FEE0:
    ctx->pc = 0x80C4FEE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FEE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4FEE0: stwu     r1, -16(r1)
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
label_80C4FEE4:
    ctx->pc = 0x80C4FEE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FEE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FEE8:
    ctx->pc = 0x80C4FEE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FEE8: stw     r0, 20(r1)
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
label_80C4FEEC:
    ctx->pc = 0x80C4FEECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FEEC: lwz     r3, 32(r3)
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
label_80C4FEF0:
    ctx->pc = 0x80C4FEF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C4FEF0: lwz     r3, 16(r3)
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
label_80C4FEF4:
    ctx->pc = 0x80C4FEF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FEF4u)) return;
    // 80C4FEF4: bl      0x80509CF0
    {
            ctx->lr = 0x80C4FEF8u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C4FEF8:
    ctx->pc = 0x80C4FEF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FEF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FEF8: lwz     r0, 20(r1)
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
label_80C4FEFC:
    ctx->pc = 0x80C4FEFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FEFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FEFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FF00:
    ctx->pc = 0x80C4FF00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF00u)) return;
    // 80C4FF00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C4FF04:
    ctx->pc = 0x80C4FF04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF04u)) return;
    // 80C4FF04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C4FF08:
    ctx->pc = 0x80C4FF08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FF08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C4FF08: stwu     r1, -32(r1)
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
label_80C4FF0C:
    ctx->pc = 0x80C4FF0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C4FF0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FF10:
    ctx->pc = 0x80C4FF10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C4FF10: stw     r0, 36(r1)
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
label_80C4FF14:
    ctx->pc = 0x80C4FF14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4FF14: stw     r31, 28(r1)
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
label_80C4FF18:
    ctx->pc = 0x80C4FF18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FF18: stw     r30, 24(r1)
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
label_80C4FF1C:
    ctx->pc = 0x80C4FF1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4FF1C: stw     r29, 20(r1)
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
label_80C4FF20:
    ctx->pc = 0x80C4FF20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FF20: lwz     r31, 32(r3)
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
label_80C4FF24:
    ctx->pc = 0x80C4FF24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FF24: lwz     r30, 16(r31)
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
label_80C4FF28:
    ctx->pc = 0x80C4FF28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FF28: lwz     r5, 28(r31)
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
label_80C4FF2C:
    ctx->pc = 0x80C4FF2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF2Cu)) return;
    // 80C4FF2C: cmpwi   r5, 0
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

label_80C4FF30:
    ctx->pc = 0x80C4FF30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF30u)) return;
    // 80C4FF30: bc    4, 1, 0x80C4FF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FF68;
        }
    }

label_80C4FF34:
    ctx->pc = 0x80C4FF34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FF34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C4FF34: lwz     r4, 24(r31)
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
label_80C4FF38:
    ctx->pc = 0x80C4FF38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF38u)) return;
    // 80C4FF38: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C4FF3C:
    ctx->pc = 0x80C4FF3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C4FF3C: lwz     r0, 20(r31)
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
label_80C4FF40:
    ctx->pc = 0x80C4FF40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C4FF40u)) return;
    // 80C4FF40: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C4FF44:
    ctx->pc = 0x80C4FF44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF44u)) return;
    // 80C4FF44: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C4FF48:
    ctx->pc = 0x80C4FF48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C4FF48u)) return;
    // 80C4FF48: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C4FF4C:
    ctx->pc = 0x80C4FF4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF4Cu)) return;
    // 80C4FF4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C4FF50:
    ctx->pc = 0x80C4FF50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF50u)) return;
    // 80C4FF50: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C4FF54:
    ctx->pc = 0x80C4FF54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF54u)) return;
    // 80C4FF54: bl      0x80509C74
    {
            ctx->lr = 0x80C4FF58u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C4FF58:
    ctx->pc = 0x80C4FF58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FF58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FF58: stw     r29, 20(r31)
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
label_80C4FF5C:
    ctx->pc = 0x80C4FF5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FF5C: lwz     r3, 28(r31)
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
label_80C4FF60:
    ctx->pc = 0x80C4FF60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF60u)) return;
    // 80C4FF60: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C4FF64:
    ctx->pc = 0x80C4FF64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C4FF64: stw     r0, 28(r31)
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
label_80C4FF68:
    ctx->pc = 0x80C4FF68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FF68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FF68: lwz     r5, 40(r31)
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
label_80C4FF6C:
    ctx->pc = 0x80C4FF6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF6Cu)) return;
    // 80C4FF6C: cmpwi   r5, 0
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

label_80C4FF70:
    ctx->pc = 0x80C4FF70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF70u)) return;
    // 80C4FF70: bc    4, 1, 0x80C4FFA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FFA8;
        }
    }

label_80C4FF74:
    ctx->pc = 0x80C4FF74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FF74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C4FF74: lwz     r4, 36(r31)
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
label_80C4FF78:
    ctx->pc = 0x80C4FF78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF78u)) return;
    // 80C4FF78: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C4FF7C:
    ctx->pc = 0x80C4FF7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C4FF7C: lwz     r0, 32(r31)
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
label_80C4FF80:
    ctx->pc = 0x80C4FF80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C4FF80u)) return;
    // 80C4FF80: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C4FF84:
    ctx->pc = 0x80C4FF84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF84u)) return;
    // 80C4FF84: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C4FF88:
    ctx->pc = 0x80C4FF88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C4FF88u)) return;
    // 80C4FF88: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C4FF8C:
    ctx->pc = 0x80C4FF8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF8Cu)) return;
    // 80C4FF8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C4FF90:
    ctx->pc = 0x80C4FF90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF90u)) return;
    // 80C4FF90: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C4FF94:
    ctx->pc = 0x80C4FF94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF94u)) return;
    // 80C4FF94: bl      0x80509BF8
    {
            ctx->lr = 0x80C4FF98u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C4FF98:
    ctx->pc = 0x80C4FF98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FF98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FF98: stw     r29, 32(r31)
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
label_80C4FF9C:
    ctx->pc = 0x80C4FF9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FF9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FF9C: lwz     r3, 40(r31)
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
label_80C4FFA0:
    ctx->pc = 0x80C4FFA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFA0u)) return;
    // 80C4FFA0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C4FFA4:
    ctx->pc = 0x80C4FFA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C4FFA4: stw     r0, 40(r31)
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
label_80C4FFA8:
    ctx->pc = 0x80C4FFA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FFA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FFA8: lwz     r5, 52(r31)
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
label_80C4FFAC:
    ctx->pc = 0x80C4FFACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFACu)) return;
    // 80C4FFAC: cmpwi   r5, 0
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

label_80C4FFB0:
    ctx->pc = 0x80C4FFB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFB0u)) return;
    // 80C4FFB0: bc    4, 1, 0x80C4FFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C4FFE8;
        }
    }

label_80C4FFB4:
    ctx->pc = 0x80C4FFB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FFB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C4FFB4: lwz     r4, 48(r31)
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
label_80C4FFB8:
    ctx->pc = 0x80C4FFB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFB8u)) return;
    // 80C4FFB8: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C4FFBC:
    ctx->pc = 0x80C4FFBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C4FFBC: lwz     r0, 44(r31)
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
label_80C4FFC0:
    ctx->pc = 0x80C4FFC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C4FFC0u)) return;
    // 80C4FFC0: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C4FFC4:
    ctx->pc = 0x80C4FFC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFC4u)) return;
    // 80C4FFC4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C4FFC8:
    ctx->pc = 0x80C4FFC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C4FFC8u)) return;
    // 80C4FFC8: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C4FFCC:
    ctx->pc = 0x80C4FFCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFCCu)) return;
    // 80C4FFCC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C4FFD0:
    ctx->pc = 0x80C4FFD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFD0u)) return;
    // 80C4FFD0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C4FFD4:
    ctx->pc = 0x80C4FFD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFD4u)) return;
    // 80C4FFD4: bl      0x80509B94
    {
            ctx->lr = 0x80C4FFD8u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C4FFD8:
    ctx->pc = 0x80C4FFD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FFD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C4FFD8: stw     r29, 44(r31)
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
label_80C4FFDC:
    ctx->pc = 0x80C4FFDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FFDC: lwz     r3, 52(r31)
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
label_80C4FFE0:
    ctx->pc = 0x80C4FFE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFE0u)) return;
    // 80C4FFE0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C4FFE4:
    ctx->pc = 0x80C4FFE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C4FFE4: stw     r0, 52(r31)
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
label_80C4FFE8:
    ctx->pc = 0x80C4FFE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C4FFE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C4FFE8: lwz     r31, 28(r1)
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
label_80C4FFEC:
    ctx->pc = 0x80C4FFECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C4FFEC: lwz     r30, 24(r1)
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
label_80C4FFF0:
    ctx->pc = 0x80C4FFF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C4FFF0: lwz     r29, 20(r1)
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
label_80C4FFF4:
    ctx->pc = 0x80C4FFF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C4FFF4: lwz     r0, 36(r1)
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
label_80C4FFF8:
    ctx->pc = 0x80C4FFF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C4FFF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C4FFF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C4FFFC:
    ctx->pc = 0x80C4FFFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C4FFFCu)) return;
    // 80C4FFFC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C50000:
    ctx->pc = 0x80C50000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50000u)) return;
    // 80C50000: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50004:
    ctx->pc = 0x80C50004u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50004u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C50004: stwu     r1, -32(r1)
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
label_80C50008:
    ctx->pc = 0x80C50008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C50008: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5000C:
    ctx->pc = 0x80C5000Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5000Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5000C: stw     r0, 36(r1)
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
label_80C50010:
    ctx->pc = 0x80C50010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50010u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50010: stw     r31, 28(r1)
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
label_80C50014:
    ctx->pc = 0x80C50014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50014: stw     r30, 24(r1)
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
label_80C50018:
    ctx->pc = 0x80C50018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50018: stw     r29, 20(r1)
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
label_80C5001C:
    ctx->pc = 0x80C5001Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5001Cu)) return;
    // 80C5001C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C50020:
    ctx->pc = 0x80C50020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50020u)) return;
    // 80C50020: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C50024:
    ctx->pc = 0x80C50024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50024u)) return;
    // 80C50024: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C50028:
    ctx->pc = 0x80C50028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50028u)) return;
    // 80C50028: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C5002C:
    ctx->pc = 0x80C5002Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5002Cu)) return;
    // 80C5002C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C50030:
    ctx->pc = 0x80C50030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50030u)) return;
    // 80C50030: bl      0x8050FD60
    {
            ctx->lr = 0x80C50034u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C50034:
    ctx->pc = 0x80C50034u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50034u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C50034: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C50038:
    ctx->pc = 0x80C50038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50038u)) return;
    // 80C50038: cmplwi  r31, 0x0000
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

label_80C5003C:
    ctx->pc = 0x80C5003Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5003Cu)) return;
    // 80C5003C: bc    12, 2, 0x80C500A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C500A0;
        }
    }

label_80C50040:
    ctx->pc = 0x80C50040u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50040u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C50040: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C50044:
    ctx->pc = 0x80C50044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50044u)) return;
    // 80C50044: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C50048:
    ctx->pc = 0x80C50048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50048u)) return;
    // 80C50048: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C5004C:
    ctx->pc = 0x80C5004Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5004Cu)) return;
    // 80C5004C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C50050:
    ctx->pc = 0x80C50050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50050u)) return;
    // 80C50050: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C50054:
    ctx->pc = 0x80C50054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50054u)) return;
    // 80C50054: bl      0x8050A0D4
    {
            ctx->lr = 0x80C50058u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C50058:
    ctx->pc = 0x80C50058u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50058u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C50058: lis     r3, -32571
    ctx->gpr[3] = ((u32)(s32)(-32571) << 16);

label_80C5005C:
    ctx->pc = 0x80C5005Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5005Cu)) return;
    // 80C5005C: addi    r0, r3, -248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-248);

label_80C50060:
    ctx->pc = 0x80C50060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C50060: stw     r0, 16(r31)
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
label_80C50064:
    ctx->pc = 0x80C50064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50064u)) return;
    // 80C50064: lis     r3, -32571
    ctx->gpr[3] = ((u32)(s32)(-32571) << 16);

label_80C50068:
    ctx->pc = 0x80C50068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50068u)) return;
    // 80C50068: addi    r0, r3, -288
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-288);

label_80C5006C:
    ctx->pc = 0x80C5006Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5006Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C5006C: stw     r0, 24(r31)
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
label_80C50070:
    ctx->pc = 0x80C50070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C50070: lwz     r3, 32(r31)
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
label_80C50074:
    ctx->pc = 0x80C50074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C50074: stw     r31, 16(r3)
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
label_80C50078:
    ctx->pc = 0x80C50078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50078u)) return;
    // 80C50078: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5007C:
    ctx->pc = 0x80C5007Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5007Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C5007C: stw     r0, 20(r3)
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
label_80C50080:
    ctx->pc = 0x80C50080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50080: stw     r0, 24(r3)
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
label_80C50084:
    ctx->pc = 0x80C50084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50084u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50084: stw     r0, 28(r3)
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
label_80C50088:
    ctx->pc = 0x80C50088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C50088: stw     r0, 32(r3)
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
label_80C5008C:
    ctx->pc = 0x80C5008Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5008Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5008C: stw     r0, 36(r3)
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
label_80C50090:
    ctx->pc = 0x80C50090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50090u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C50090: stw     r0, 40(r3)
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
label_80C50094:
    ctx->pc = 0x80C50094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50094: stw     r0, 44(r3)
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
label_80C50098:
    ctx->pc = 0x80C50098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C50098: stw     r0, 48(r3)
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
label_80C5009C:
    ctx->pc = 0x80C5009Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5009Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5009C: stw     r0, 52(r3)
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
label_80C500A0:
    ctx->pc = 0x80C500A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C500A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C500A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C500A4:
    ctx->pc = 0x80C500A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C500A4: lwz     r31, 28(r1)
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
label_80C500A8:
    ctx->pc = 0x80C500A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C500A8: lwz     r30, 24(r1)
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
label_80C500AC:
    ctx->pc = 0x80C500ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C500AC: lwz     r29, 20(r1)
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
label_80C500B0:
    ctx->pc = 0x80C500B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C500B0: lwz     r0, 36(r1)
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
label_80C500B4:
    ctx->pc = 0x80C500B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C500B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C500B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C500B8:
    ctx->pc = 0x80C500B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500B8u)) return;
    // 80C500B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C500BC:
    ctx->pc = 0x80C500BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500BCu)) return;
    // 80C500BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C500C0:
    ctx->pc = 0x80C500C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C500C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C500C0: stwu     r1, -16(r1)
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
label_80C500C4:
    ctx->pc = 0x80C500C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C500C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C500C8:
    ctx->pc = 0x80C500C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C500C8: stw     r0, 20(r1)
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
label_80C500CC:
    ctx->pc = 0x80C500CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C500CC: stw     r31, 12(r1)
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
label_80C500D0:
    ctx->pc = 0x80C500D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C500D0: stw     r30, 8(r1)
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
label_80C500D4:
    ctx->pc = 0x80C500D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500D4u)) return;
    // 80C500D4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C500D8:
    ctx->pc = 0x80C500D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C500D8: lwz     r31, 32(r3)
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
label_80C500DC:
    ctx->pc = 0x80C500DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C500DC: stw     r30, 24(r31)
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
label_80C500E0:
    ctx->pc = 0x80C500E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C500E0: stw     r5, 28(r31)
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
label_80C500E4:
    ctx->pc = 0x80C500E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500E4u)) return;
    // 80C500E4: cmpwi   r5, 0
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

label_80C500E8:
    ctx->pc = 0x80C500E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500E8u)) return;
    // 80C500E8: bc    12, 1, 0x80C500F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C500F8;
        }
    }

label_80C500EC:
    ctx->pc = 0x80C500ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C500ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C500EC: lwz     r3, 16(r31)
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
label_80C500F0:
    ctx->pc = 0x80C500F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500F0u)) return;
    // 80C500F0: bl      0x80509C74
    {
            ctx->lr = 0x80C500F4u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C500F4:
    ctx->pc = 0x80C500F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C500F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C500F4: stw     r30, 20(r31)
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
label_80C500F8:
    ctx->pc = 0x80C500F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C500F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C500F8: lwz     r31, 12(r1)
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
label_80C500FC:
    ctx->pc = 0x80C500FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C500FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C500FC: lwz     r30, 8(r1)
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
label_80C50100:
    ctx->pc = 0x80C50100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50100u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50100: lwz     r0, 20(r1)
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
label_80C50104:
    ctx->pc = 0x80C50104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50104: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50108:
    ctx->pc = 0x80C50108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50108u)) return;
    // 80C50108: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5010C:
    ctx->pc = 0x80C5010Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5010Cu)) return;
    // 80C5010C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50110:
    ctx->pc = 0x80C50110u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50110u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C50110: stwu     r1, -16(r1)
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
label_80C50114:
    ctx->pc = 0x80C50114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50114u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C50114: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50118:
    ctx->pc = 0x80C50118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50118: stw     r0, 20(r1)
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
label_80C5011C:
    ctx->pc = 0x80C5011Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5011Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5011C: stw     r31, 12(r1)
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
label_80C50120:
    ctx->pc = 0x80C50120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50120: stw     r30, 8(r1)
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
label_80C50124:
    ctx->pc = 0x80C50124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50124u)) return;
    // 80C50124: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C50128:
    ctx->pc = 0x80C50128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50128u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50128: lwz     r31, 32(r3)
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
label_80C5012C:
    ctx->pc = 0x80C5012Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5012Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5012C: stw     r30, 36(r31)
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
label_80C50130:
    ctx->pc = 0x80C50130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50130: stw     r5, 40(r31)
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
label_80C50134:
    ctx->pc = 0x80C50134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50134u)) return;
    // 80C50134: cmpwi   r5, 0
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

label_80C50138:
    ctx->pc = 0x80C50138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50138u)) return;
    // 80C50138: bc    12, 1, 0x80C50148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50148;
        }
    }

label_80C5013C:
    ctx->pc = 0x80C5013Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5013Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5013C: lwz     r3, 16(r31)
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
label_80C50140:
    ctx->pc = 0x80C50140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50140u)) return;
    // 80C50140: bl      0x80509BF8
    {
            ctx->lr = 0x80C50144u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C50144:
    ctx->pc = 0x80C50144u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50144u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C50144: stw     r30, 32(r31)
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
label_80C50148:
    ctx->pc = 0x80C50148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50148: lwz     r31, 12(r1)
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
label_80C5014C:
    ctx->pc = 0x80C5014Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5014Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5014C: lwz     r30, 8(r1)
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
label_80C50150:
    ctx->pc = 0x80C50150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50150: lwz     r0, 20(r1)
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
label_80C50154:
    ctx->pc = 0x80C50154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50154: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50158:
    ctx->pc = 0x80C50158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50158u)) return;
    // 80C50158: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C5015C:
    ctx->pc = 0x80C5015Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5015Cu)) return;
    // 80C5015C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50160:
    ctx->pc = 0x80C50160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C50160: stwu     r1, -16(r1)
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
label_80C50164:
    ctx->pc = 0x80C50164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C50164: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50168:
    ctx->pc = 0x80C50168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50168: stw     r0, 20(r1)
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
label_80C5016C:
    ctx->pc = 0x80C5016Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5016Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5016C: stw     r31, 12(r1)
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
label_80C50170:
    ctx->pc = 0x80C50170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50170: stw     r30, 8(r1)
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
label_80C50174:
    ctx->pc = 0x80C50174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50174u)) return;
    // 80C50174: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C50178:
    ctx->pc = 0x80C50178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50178: lwz     r31, 32(r3)
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
label_80C5017C:
    ctx->pc = 0x80C5017Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5017Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C5017C: stw     r30, 48(r31)
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
label_80C50180:
    ctx->pc = 0x80C50180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50180: stw     r5, 52(r31)
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
label_80C50184:
    ctx->pc = 0x80C50184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50184u)) return;
    // 80C50184: cmpwi   r5, 0
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

label_80C50188:
    ctx->pc = 0x80C50188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50188u)) return;
    // 80C50188: bc    12, 1, 0x80C50198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50198;
        }
    }

label_80C5018C:
    ctx->pc = 0x80C5018Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5018Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5018C: lwz     r3, 16(r31)
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
label_80C50190:
    ctx->pc = 0x80C50190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50190u)) return;
    // 80C50190: bl      0x80509B94
    {
            ctx->lr = 0x80C50194u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C50194:
    ctx->pc = 0x80C50194u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50194u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C50194: stw     r30, 44(r31)
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
label_80C50198:
    ctx->pc = 0x80C50198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50198: lwz     r31, 12(r1)
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
label_80C5019C:
    ctx->pc = 0x80C5019Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5019Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5019C: lwz     r30, 8(r1)
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
label_80C501A0:
    ctx->pc = 0x80C501A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C501A0: lwz     r0, 20(r1)
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
label_80C501A4:
    ctx->pc = 0x80C501A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C501A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C501A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C501A8:
    ctx->pc = 0x80C501A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501A8u)) return;
    // 80C501A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C501AC:
    ctx->pc = 0x80C501ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501ACu)) return;
    // 80C501AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C501B0:
    ctx->pc = 0x80C501B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C501B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C501B0: stwu     r1, -16(r1)
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
label_80C501B4:
    ctx->pc = 0x80C501B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C501B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C501B8:
    ctx->pc = 0x80C501B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C501B8: stw     r0, 20(r1)
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
label_80C501BC:
    ctx->pc = 0x80C501BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C501BC: stw     r31, 12(r1)
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
label_80C501C0:
    ctx->pc = 0x80C501C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501C0u)) return;
    // 80C501C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C501C4:
    ctx->pc = 0x80C501C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501C4u)) return;
    // 80C501C4: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C501C8:
    ctx->pc = 0x80C501C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501C8u)) return;
    // 80C501C8: addi    r4, r4, -276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-276);

label_80C501CC:
    ctx->pc = 0x80C501CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C501CC: lwz     r0, 0(r4)
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
label_80C501D0:
    ctx->pc = 0x80C501D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501D0u)) return;
    // 80C501D0: cmplwi  r0, 0x0000
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

label_80C501D4:
    ctx->pc = 0x80C501D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501D4u)) return;
    // 80C501D4: bc    4, 2, 0x80C501F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C501F8;
        }
    }

label_80C501D8:
    ctx->pc = 0x80C501D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C501D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C501D8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C501DC:
    ctx->pc = 0x80C501DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501DCu)) return;
    // 80C501DC: bl      0x8050EEC0
    {
            ctx->lr = 0x80C501E0u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C501E0:
    ctx->pc = 0x80C501E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C501E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C501E0: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C501E4:
    ctx->pc = 0x80C501E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501E4u)) return;
    // 80C501E4: addi    r4, r4, -276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-276);

label_80C501E8:
    ctx->pc = 0x80C501E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C501E8: stw     r3, 0(r4)
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
label_80C501EC:
    ctx->pc = 0x80C501ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501ECu)) return;
    // 80C501EC: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C501F0:
    ctx->pc = 0x80C501F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501F0u)) return;
    // 80C501F0: addi    r3, r3, -280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-280);

label_80C501F4:
    ctx->pc = 0x80C501F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C501F4: stw     r31, 0(r3)
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
label_80C501F8:
    ctx->pc = 0x80C501F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C501F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C501F8: lwz     r31, 12(r1)
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
label_80C501FC:
    ctx->pc = 0x80C501FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C501FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C501FC: lwz     r0, 20(r1)
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
label_80C50200:
    ctx->pc = 0x80C50200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50200: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50204:
    ctx->pc = 0x80C50204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50204u)) return;
    // 80C50204: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C50208:
    ctx->pc = 0x80C50208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50208u)) return;
    // 80C50208: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C5020C:
    ctx->pc = 0x80C5020Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5020Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C5020C: stwu     r1, -32(r1)
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
label_80C50210:
    ctx->pc = 0x80C50210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C50210: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50214:
    ctx->pc = 0x80C50214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C50214: stw     r0, 36(r1)
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
label_80C50218:
    ctx->pc = 0x80C50218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50218: stw     r31, 28(r1)
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
label_80C5021C:
    ctx->pc = 0x80C5021Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5021Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5021C: stw     r30, 24(r1)
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
label_80C50220:
    ctx->pc = 0x80C50220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50220: stw     r29, 20(r1)
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
label_80C50224:
    ctx->pc = 0x80C50224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C50224: stw     r28, 16(r1)
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
label_80C50228:
    ctx->pc = 0x80C50228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50228u)) return;
    // 80C50228: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C5022C:
    ctx->pc = 0x80C5022Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5022Cu)) return;
    // 80C5022C: addi    r30, r3, -276
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-276);

label_80C50230:
    ctx->pc = 0x80C50230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50230: lwz     r0, 0(r30)
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
label_80C50234:
    ctx->pc = 0x80C50234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50234u)) return;
    // 80C50234: cmplwi  r0, 0x0000
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

label_80C50238:
    ctx->pc = 0x80C50238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50238u)) return;
    // 80C50238: bc    12, 2, 0x80C50298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50298;
        }
    }

label_80C5023C:
    ctx->pc = 0x80C5023Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5023Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5023C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C50240:
    ctx->pc = 0x80C50240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50240u)) return;
    // 80C50240: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C50244:
    ctx->pc = 0x80C50244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50244u)) return;
    // 80C50244: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C50248:
    ctx->pc = 0x80C50248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50248u)) return;
    // 80C50248: addi    r31, r3, -280
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-280);

label_80C5024C:
    ctx->pc = 0x80C5024Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5024Cu)) return;
    // 80C5024C: b       0x80C5026C
    {
            goto label_80C5026C;
    }

label_80C50250:
    ctx->pc = 0x80C50250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C50250: lwz     r3, 0(r30)
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
label_80C50254:
    ctx->pc = 0x80C50254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50254: lwzx    r3, r3, r29
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
label_80C50258:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50258u)) return;
    // 80C50258: cmplwi  r3, 0x0000
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

label_80C5025C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5025Cu)) return;
    // 80C5025C: bc    12, 2, 0x80C50264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50264;
        }
    }

label_80C50260:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50260u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50260: bl      0x8050F9E0
    {
            ctx->lr = 0x80C50264u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C50264:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50264u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C50264: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C50268:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50268u)) return;
    // 80C50268: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C5026C:
    ctx->pc = 0x80C5026Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5026Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5026C: lwz     r0, 0(r31)
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
label_80C50270:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50270u)) return;
    // 80C50270: cmpw    r28, r0
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

label_80C50274:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50274u)) return;
    // 80C50274: bc    12, 0, 0x80C50250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C50250u;
                return;
            }
            goto label_80C50250;
        }
    }

label_80C50278:
    ctx->pc = 0x80C50278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C50278: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C5027C:
    ctx->pc = 0x80C5027Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5027Cu)) return;
    // 80C5027C: addi    r3, r3, -276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-276);

label_80C50280:
    ctx->pc = 0x80C50280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C50280: lwz     r3, 0(r3)
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
label_80C50284:
    ctx->pc = 0x80C50284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50284u)) return;
    // 80C50284: bl      0x8050ED40
    {
            ctx->lr = 0x80C50288u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C50288:
    ctx->pc = 0x80C50288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C50288: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C5028C:
    ctx->pc = 0x80C5028Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5028Cu)) return;
    // 80C5028C: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C50290:
    ctx->pc = 0x80C50290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50290u)) return;
    // 80C50290: addi    r3, r3, -276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-276);

label_80C50294:
    ctx->pc = 0x80C50294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50294u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C50294: stw     r0, 0(r3)
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
label_80C50298:
    ctx->pc = 0x80C50298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50298: lwz     r31, 28(r1)
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
label_80C5029C:
    ctx->pc = 0x80C5029Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5029Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5029C: lwz     r30, 24(r1)
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
label_80C502A0:
    ctx->pc = 0x80C502A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C502A0: lwz     r29, 20(r1)
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
label_80C502A4:
    ctx->pc = 0x80C502A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C502A4: lwz     r28, 16(r1)
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
label_80C502A8:
    ctx->pc = 0x80C502A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C502A8: lwz     r0, 36(r1)
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
label_80C502AC:
    ctx->pc = 0x80C502ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C502ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C502AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C502B0:
    ctx->pc = 0x80C502B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502B0u)) return;
    // 80C502B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C502B4:
    ctx->pc = 0x80C502B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502B4u)) return;
    // 80C502B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C502B8:
    ctx->pc = 0x80C502B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C502B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C502B8: stwu     r1, -16(r1)
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
label_80C502BC:
    ctx->pc = 0x80C502BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C502BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C502C0:
    ctx->pc = 0x80C502C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C502C0: stw     r0, 20(r1)
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
label_80C502C4:
    ctx->pc = 0x80C502C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C502C4: stw     r31, 12(r1)
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
label_80C502C8:
    ctx->pc = 0x80C502C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502C8u)) return;
    // 80C502C8: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C502CC:
    ctx->pc = 0x80C502CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502CCu)) return;
    // 80C502CC: addi    r6, r6, -280
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-280);

label_80C502D0:
    ctx->pc = 0x80C502D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C502D0: lwz     r0, 0(r6)
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
label_80C502D4:
    ctx->pc = 0x80C502D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502D4u)) return;
    // 80C502D4: cmpw    r3, r0
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

label_80C502D8:
    ctx->pc = 0x80C502D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502D8u)) return;
    // 80C502D8: bc    4, 0, 0x80C50314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50314;
        }
    }

label_80C502DC:
    ctx->pc = 0x80C502DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C502DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C502DC: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C502E0:
    ctx->pc = 0x80C502E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502E0u)) return;
    // 80C502E0: addi    r6, r6, -276
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-276);

label_80C502E4:
    ctx->pc = 0x80C502E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C502E4: lwz     r6, 0(r6)
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
label_80C502E8:
    ctx->pc = 0x80C502E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502E8u)) return;
    // 80C502E8: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C502EC:
    ctx->pc = 0x80C502ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C502EC: lwzx    r0, r6, r31
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
label_80C502F0:
    ctx->pc = 0x80C502F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502F0u)) return;
    // 80C502F0: cmplwi  r0, 0x0000
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

label_80C502F4:
    ctx->pc = 0x80C502F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502F4u)) return;
    // 80C502F4: bc    4, 2, 0x80C50314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50314;
        }
    }

label_80C502F8:
    ctx->pc = 0x80C502F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C502F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C502F8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C502FC:
    ctx->pc = 0x80C502FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C502FCu)) return;
    // 80C502FC: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C50300:
    ctx->pc = 0x80C50300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50300u)) return;
    // 80C50300: bl      0x80C50004
    {
            ctx->lr = 0x80C50304u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C50004u;
                return;
            }
            goto label_80C50004;
    }

label_80C50304:
    ctx->pc = 0x80C50304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C50304: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C50308:
    ctx->pc = 0x80C50308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50308u)) return;
    // 80C50308: addi    r4, r4, -276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-276);

label_80C5030C:
    ctx->pc = 0x80C5030Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5030Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C5030C: lwz     r4, 0(r4)
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
label_80C50310:
    ctx->pc = 0x80C50310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C50310: stwx    r3, r4, r31
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
label_80C50314:
    ctx->pc = 0x80C50314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C50314: lwz     r31, 12(r1)
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
label_80C50318:
    ctx->pc = 0x80C50318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50318: lwz     r0, 20(r1)
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
label_80C5031C:
    ctx->pc = 0x80C5031Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C5031Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5031C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50320:
    ctx->pc = 0x80C50320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50320u)) return;
    // 80C50320: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C50324:
    ctx->pc = 0x80C50324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50324u)) return;
    // 80C50324: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50328:
    ctx->pc = 0x80C50328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50328: stwu     r1, -16(r1)
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
label_80C5032C:
    ctx->pc = 0x80C5032Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5032Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C5032C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50330:
    ctx->pc = 0x80C50330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50330: stw     r0, 20(r1)
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
label_80C50334:
    ctx->pc = 0x80C50334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C50334: stw     r31, 12(r1)
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
label_80C50338:
    ctx->pc = 0x80C50338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50338u)) return;
    // 80C50338: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C5033C:
    ctx->pc = 0x80C5033Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5033Cu)) return;
    // 80C5033C: addi    r4, r4, -280
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-280);

label_80C50340:
    ctx->pc = 0x80C50340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50340: lwz     r0, 0(r4)
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
label_80C50344:
    ctx->pc = 0x80C50344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50344u)) return;
    // 80C50344: cmpw    r3, r0
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

label_80C50348:
    ctx->pc = 0x80C50348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50348u)) return;
    // 80C50348: bc    4, 0, 0x80C50380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50380;
        }
    }

label_80C5034C:
    ctx->pc = 0x80C5034Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5034Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C5034C: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C50350:
    ctx->pc = 0x80C50350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50350u)) return;
    // 80C50350: addi    r4, r4, -276
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-276);

label_80C50354:
    ctx->pc = 0x80C50354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50354: lwz     r4, 0(r4)
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
label_80C50358:
    ctx->pc = 0x80C50358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50358u)) return;
    // 80C50358: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C5035C:
    ctx->pc = 0x80C5035Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5035Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C5035C: lwzx    r3, r4, r31
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
label_80C50360:
    ctx->pc = 0x80C50360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50360u)) return;
    // 80C50360: cmplwi  r3, 0x0000
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

label_80C50364:
    ctx->pc = 0x80C50364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50364u)) return;
    // 80C50364: bc    12, 2, 0x80C50380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50380;
        }
    }

label_80C50368:
    ctx->pc = 0x80C50368u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50368u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50368: bl      0x8050F9E0
    {
            ctx->lr = 0x80C5036Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C5036C:
    ctx->pc = 0x80C5036Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C5036Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C5036C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C50370:
    ctx->pc = 0x80C50370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50370u)) return;
    // 80C50370: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C50374:
    ctx->pc = 0x80C50374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50374u)) return;
    // 80C50374: addi    r3, r3, -276
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-276);

label_80C50378:
    ctx->pc = 0x80C50378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C50378: lwz     r3, 0(r3)
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
label_80C5037C:
    ctx->pc = 0x80C5037Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5037Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C5037C: stwx    r0, r3, r31
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
label_80C50380:
    ctx->pc = 0x80C50380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C50380: lwz     r31, 12(r1)
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
label_80C50384:
    ctx->pc = 0x80C50384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50384: lwz     r0, 20(r1)
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
label_80C50388:
    ctx->pc = 0x80C50388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50388: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5038C:
    ctx->pc = 0x80C5038Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5038Cu)) return;
    // 80C5038C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C50390:
    ctx->pc = 0x80C50390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50390u)) return;
    // 80C50390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50394:
    ctx->pc = 0x80C50394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50394: stwu     r1, -16(r1)
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
label_80C50398:
    ctx->pc = 0x80C50398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50398: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5039C:
    ctx->pc = 0x80C5039Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5039Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5039C: stw     r0, 20(r1)
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
label_80C503A0:
    ctx->pc = 0x80C503A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503A0u)) return;
    // 80C503A0: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C503A4:
    ctx->pc = 0x80C503A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503A4u)) return;
    // 80C503A4: addi    r6, r6, -280
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-280);

label_80C503A8:
    ctx->pc = 0x80C503A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C503A8: lwz     r0, 0(r6)
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
label_80C503AC:
    ctx->pc = 0x80C503ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503ACu)) return;
    // 80C503AC: cmpw    r3, r0
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

label_80C503B0:
    ctx->pc = 0x80C503B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503B0u)) return;
    // 80C503B0: bc    4, 0, 0x80C503D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C503D4;
        }
    }

label_80C503B4:
    ctx->pc = 0x80C503B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C503B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C503B4: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C503B8:
    ctx->pc = 0x80C503B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503B8u)) return;
    // 80C503B8: addi    r6, r6, -276
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-276);

label_80C503BC:
    ctx->pc = 0x80C503BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C503BC: lwz     r6, 0(r6)
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
label_80C503C0:
    ctx->pc = 0x80C503C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503C0u)) return;
    // 80C503C0: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C503C4:
    ctx->pc = 0x80C503C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C503C4: lwzx    r3, r6, r0
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
label_80C503C8:
    ctx->pc = 0x80C503C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503C8u)) return;
    // 80C503C8: cmplwi  r3, 0x0000
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

label_80C503CC:
    ctx->pc = 0x80C503CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503CCu)) return;
    // 80C503CC: bc    12, 2, 0x80C503D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C503D4;
        }
    }

label_80C503D0:
    ctx->pc = 0x80C503D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C503D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C503D0: bl      0x80C500C0
    {
            ctx->lr = 0x80C503D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C500C0u;
                return;
            }
            goto label_80C500C0;
    }

label_80C503D4:
    ctx->pc = 0x80C503D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C503D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C503D4: lwz     r0, 20(r1)
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
label_80C503D8:
    ctx->pc = 0x80C503D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C503D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C503D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C503DC:
    ctx->pc = 0x80C503DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503DCu)) return;
    // 80C503DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C503E0:
    ctx->pc = 0x80C503E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503E0u)) return;
    // 80C503E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C503E4:
    ctx->pc = 0x80C503E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C503E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C503E4: stwu     r1, -16(r1)
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
label_80C503E8:
    ctx->pc = 0x80C503E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C503E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C503EC:
    ctx->pc = 0x80C503ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C503EC: stw     r0, 20(r1)
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
label_80C503F0:
    ctx->pc = 0x80C503F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503F0u)) return;
    // 80C503F0: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C503F4:
    ctx->pc = 0x80C503F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503F4u)) return;
    // 80C503F4: addi    r6, r6, -280
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-280);

label_80C503F8:
    ctx->pc = 0x80C503F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C503F8: lwz     r0, 0(r6)
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
label_80C503FC:
    ctx->pc = 0x80C503FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C503FCu)) return;
    // 80C503FC: cmpw    r3, r0
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

label_80C50400:
    ctx->pc = 0x80C50400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50400u)) return;
    // 80C50400: bc    4, 0, 0x80C50424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50424;
        }
    }

label_80C50404:
    ctx->pc = 0x80C50404u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50404u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C50404: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C50408:
    ctx->pc = 0x80C50408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50408u)) return;
    // 80C50408: addi    r6, r6, -276
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-276);

label_80C5040C:
    ctx->pc = 0x80C5040Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5040Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5040C: lwz     r6, 0(r6)
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
label_80C50410:
    ctx->pc = 0x80C50410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50410u)) return;
    // 80C50410: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C50414:
    ctx->pc = 0x80C50414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50414: lwzx    r3, r6, r0
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
label_80C50418:
    ctx->pc = 0x80C50418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50418u)) return;
    // 80C50418: cmplwi  r3, 0x0000
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

label_80C5041C:
    ctx->pc = 0x80C5041Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5041Cu)) return;
    // 80C5041C: bc    12, 2, 0x80C50424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50424;
        }
    }

label_80C50420:
    ctx->pc = 0x80C50420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50420: bl      0x80C50110
    {
            ctx->lr = 0x80C50424u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C50110u;
                return;
            }
            goto label_80C50110;
    }

label_80C50424:
    ctx->pc = 0x80C50424u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50424u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50424: lwz     r0, 20(r1)
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
label_80C50428:
    ctx->pc = 0x80C50428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50428: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5042C:
    ctx->pc = 0x80C5042Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5042Cu)) return;
    // 80C5042C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C50430:
    ctx->pc = 0x80C50430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50430u)) return;
    // 80C50430: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50434:
    ctx->pc = 0x80C50434u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50434u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50434: stwu     r1, -16(r1)
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
label_80C50438:
    ctx->pc = 0x80C50438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50438: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5043C:
    ctx->pc = 0x80C5043Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5043Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5043C: stw     r0, 20(r1)
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
label_80C50440:
    ctx->pc = 0x80C50440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50440u)) return;
    // 80C50440: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C50444:
    ctx->pc = 0x80C50444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50444u)) return;
    // 80C50444: addi    r6, r6, -280
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-280);

label_80C50448:
    ctx->pc = 0x80C50448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50448: lwz     r0, 0(r6)
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
label_80C5044C:
    ctx->pc = 0x80C5044Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5044Cu)) return;
    // 80C5044C: cmpw    r3, r0
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

label_80C50450:
    ctx->pc = 0x80C50450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50450u)) return;
    // 80C50450: bc    4, 0, 0x80C50474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C50474;
        }
    }

label_80C50454:
    ctx->pc = 0x80C50454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C50454: lis     r6, -27436
    ctx->gpr[6] = ((u32)(s32)(-27436) << 16);

label_80C50458:
    ctx->pc = 0x80C50458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50458u)) return;
    // 80C50458: addi    r6, r6, -276
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-276);

label_80C5045C:
    ctx->pc = 0x80C5045Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5045Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C5045C: lwz     r6, 0(r6)
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
label_80C50460:
    ctx->pc = 0x80C50460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50460u)) return;
    // 80C50460: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C50464:
    ctx->pc = 0x80C50464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50464: lwzx    r3, r6, r0
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
label_80C50468:
    ctx->pc = 0x80C50468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50468u)) return;
    // 80C50468: cmplwi  r3, 0x0000
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

label_80C5046C:
    ctx->pc = 0x80C5046Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5046Cu)) return;
    // 80C5046C: bc    12, 2, 0x80C50474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C50474;
        }
    }

label_80C50470:
    ctx->pc = 0x80C50470u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50470u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C50470: bl      0x80C50160
    {
            ctx->lr = 0x80C50474u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C50160u;
                return;
            }
            goto label_80C50160;
    }

label_80C50474:
    ctx->pc = 0x80C50474u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50474u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50474: lwz     r0, 20(r1)
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
label_80C50478:
    ctx->pc = 0x80C50478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50478: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5047C:
    ctx->pc = 0x80C5047Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5047Cu)) return;
    // 80C5047C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C50480:
    ctx->pc = 0x80C50480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50480u)) return;
    // 80C50480: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

label_80C50484:
    ctx->pc = 0x80C50484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C50484: stwu     r1, -32(r1)
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
label_80C50488:
    ctx->pc = 0x80C50488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50488u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C50488: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C5048C:
    ctx->pc = 0x80C5048Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5048Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C5048C: stw     r0, 36(r1)
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
label_80C50490:
    ctx->pc = 0x80C50490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50490u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C50490: stw     r31, 28(r1)
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
label_80C50494:
    ctx->pc = 0x80C50494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50494: stw     r30, 24(r1)
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
label_80C50498:
    ctx->pc = 0x80C50498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50498: stw     r29, 20(r1)
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
label_80C5049C:
    ctx->pc = 0x80C5049Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5049Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C5049C: stw     r28, 16(r1)
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
label_80C504A0:
    ctx->pc = 0x80C504A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504A0u)) return;
    // 80C504A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C504A4:
    ctx->pc = 0x80C504A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504A4u)) return;
    // 80C504A4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C504A8:
    ctx->pc = 0x80C504A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504A8u)) return;
    // 80C504A8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C504AC:
    ctx->pc = 0x80C504ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504ACu)) return;
    // 80C504AC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C504B0:
    ctx->pc = 0x80C504B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504B0u)) return;
    // 80C504B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C504B4:
    ctx->pc = 0x80C504B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504B4u)) return;
    // 80C504B4: bl      0x80401DB0
    {
            ctx->lr = 0x80C504B8u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C504B8:
    ctx->pc = 0x80C504B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C504B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C504B8: lis     r4, -27436
    ctx->gpr[4] = ((u32)(s32)(-27436) << 16);

label_80C504BC:
    ctx->pc = 0x80C504BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504BCu)) return;
    // 80C504BC: addi    r4, r4, -272
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-272);

label_80C504C0:
    ctx->pc = 0x80C504C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C504C0: lwz     r0, 0(r4)
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
label_80C504C4:
    ctx->pc = 0x80C504C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504C4u)) return;
    // 80C504C4: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C504C8:
    ctx->pc = 0x80C504C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504C8u)) return;
    // 80C504C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C504CC:
    ctx->pc = 0x80C504CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504CCu)) return;
    // 80C504CC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C504D0:
    ctx->pc = 0x80C504D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504D0u)) return;
    // 80C504D0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C504D4:
    ctx->pc = 0x80C504D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504D4u)) return;
    // 80C504D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C504D8:
    ctx->pc = 0x80C504D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504D8u)) return;
    // 80C504D8: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C504DC:
    ctx->pc = 0x80C504DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504DCu)) return;
    // 80C504DC: bl      0x8050A0D4
    {
            ctx->lr = 0x80C504E0u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C504E0:
    ctx->pc = 0x80C504E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C504E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C504E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C504E4:
    ctx->pc = 0x80C504E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504E4u)) return;
    // 80C504E4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C504E8:
    ctx->pc = 0x80C504E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504E8u)) return;
    // 80C504E8: bl      0x80509C74
    {
            ctx->lr = 0x80C504ECu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C504EC:
    ctx->pc = 0x80C504ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C504ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C504EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C504F0:
    ctx->pc = 0x80C504F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504F0u)) return;
    // 80C504F0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C504F4:
    ctx->pc = 0x80C504F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504F4u)) return;
    // 80C504F4: bl      0x80509BF8
    {
            ctx->lr = 0x80C504F8u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C504F8:
    ctx->pc = 0x80C504F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C504F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C504F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C504FC:
    ctx->pc = 0x80C504FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C504FCu)) return;
    // 80C504FC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C50500:
    ctx->pc = 0x80C50500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50500u)) return;
    // 80C50500: bl      0x80509B94
    {
            ctx->lr = 0x80C50504u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C50504:
    ctx->pc = 0x80C50504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C50504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C50504: lis     r3, -27436
    ctx->gpr[3] = ((u32)(s32)(-27436) << 16);

label_80C50508:
    ctx->pc = 0x80C50508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50508u)) return;
    // 80C50508: addi    r4, r3, -272
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-272);

label_80C5050C:
    ctx->pc = 0x80C5050Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5050Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C5050C: lwz     r3, 0(r4)
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
label_80C50510:
    ctx->pc = 0x80C50510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50510u)) return;
    // 80C50510: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C50514:
    ctx->pc = 0x80C50514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C50514: stw     r0, 0(r4)
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
label_80C50518:
    ctx->pc = 0x80C50518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50518u)) return;
    // 80C50518: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C5051C:
    ctx->pc = 0x80C5051Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5051Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C5051C: stw     r0, 0(r4)
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
label_80C50520:
    ctx->pc = 0x80C50520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C50520: lwz     r31, 28(r1)
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
label_80C50524:
    ctx->pc = 0x80C50524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C50524: lwz     r30, 24(r1)
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
label_80C50528:
    ctx->pc = 0x80C50528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C50528: lwz     r29, 20(r1)
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
label_80C5052C:
    ctx->pc = 0x80C5052Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5052Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C5052C: lwz     r28, 16(r1)
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
label_80C50530:
    ctx->pc = 0x80C50530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C50530: lwz     r0, 36(r1)
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
label_80C50534:
    ctx->pc = 0x80C50534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C50534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C50534: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C50538:
    ctx->pc = 0x80C50538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C50538u)) return;
    // 80C50538: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C5053C:
    ctx->pc = 0x80C5053Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C5053Cu)) return;
    // 80C5053C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C4F460;
        }
    }

    ctx->pc = 0x80C50540u;
    return;
return_dispatch_80C4F460:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C4F498u: goto label_80C4F498;
    case 0x80C4F49Cu: goto label_80C4F49C;
    case 0x80C4F4A0u: goto label_80C4F4A0;
    case 0x80C4F4A4u: goto label_80C4F4A4;
    case 0x80C4F4ACu: goto label_80C4F4AC;
    case 0x80C4F4F0u: goto label_80C4F4F0;
    case 0x80C4F4F8u: goto label_80C4F4F8;
    case 0x80C4F500u: goto label_80C4F500;
    case 0x80C4F528u: goto label_80C4F528;
    case 0x80C4F530u: goto label_80C4F530;
    case 0x80C4F558u: goto label_80C4F558;
    case 0x80C4F560u: goto label_80C4F560;
    case 0x80C4F574u: goto label_80C4F574;
    case 0x80C4F57Cu: goto label_80C4F57C;
    case 0x80C4F5A4u: goto label_80C4F5A4;
    case 0x80C4F5D4u: goto label_80C4F5D4;
    case 0x80C4F5F0u: goto label_80C4F5F0;
    case 0x80C4F620u: goto label_80C4F620;
    case 0x80C4F628u: goto label_80C4F628;
    case 0x80C4F658u: goto label_80C4F658;
    case 0x80C4F674u: goto label_80C4F674;
    case 0x80C4F67Cu: goto label_80C4F67C;
    case 0x80C4F6B4u: goto label_80C4F6B4;
    case 0x80C4F6BCu: goto label_80C4F6BC;
    case 0x80C4F6E4u: goto label_80C4F6E4;
    case 0x80C4F6ECu: goto label_80C4F6EC;
    case 0x80C4F6F4u: goto label_80C4F6F4;
    case 0x80C4F6F8u: goto label_80C4F6F8;
    case 0x80C4F700u: goto label_80C4F700;
    case 0x80C4F708u: goto label_80C4F708;
    case 0x80C4F730u: goto label_80C4F730;
    case 0x80C4F738u: goto label_80C4F738;
    case 0x80C4F74Cu: goto label_80C4F74C;
    case 0x80C4F754u: goto label_80C4F754;
    case 0x80C4F784u: goto label_80C4F784;
    case 0x80C4F7A0u: goto label_80C4F7A0;
    case 0x80C4F7A8u: goto label_80C4F7A8;
    case 0x80C4F7E0u: goto label_80C4F7E0;
    case 0x80C4F7E8u: goto label_80C4F7E8;
    case 0x80C4F818u: goto label_80C4F818;
    case 0x80C4F820u: goto label_80C4F820;
    case 0x80C4F850u: goto label_80C4F850;
    case 0x80C4F858u: goto label_80C4F858;
    case 0x80C4F860u: goto label_80C4F860;
    case 0x80C4F864u: goto label_80C4F864;
    case 0x80C4F86Cu: goto label_80C4F86C;
    case 0x80C4F894u: goto label_80C4F894;
    case 0x80C4F89Cu: goto label_80C4F89C;
    case 0x80C4F8D4u: goto label_80C4F8D4;
    case 0x80C4F8DCu: goto label_80C4F8DC;
    case 0x80C4F8E0u: goto label_80C4F8E0;
    case 0x80C4F910u: goto label_80C4F910;
    case 0x80C4F92Cu: goto label_80C4F92C;
    case 0x80C4F934u: goto label_80C4F934;
    case 0x80C4F95Cu: goto label_80C4F95C;
    case 0x80C4F964u: goto label_80C4F964;
    case 0x80C4F978u: goto label_80C4F978;
    case 0x80C4F980u: goto label_80C4F980;
    case 0x80C4F988u: goto label_80C4F988;
    case 0x80C4F9C0u: goto label_80C4F9C0;
    case 0x80C4F9C8u: goto label_80C4F9C8;
    case 0x80C4F9D0u: goto label_80C4F9D0;
    case 0x80C4F9D4u: goto label_80C4F9D4;
    case 0x80C4F9DCu: goto label_80C4F9DC;
    case 0x80C4F9E0u: goto label_80C4F9E0;
    case 0x80C4F9E8u: goto label_80C4F9E8;
    case 0x80C4FA10u: goto label_80C4FA10;
    case 0x80C4FA18u: goto label_80C4FA18;
    case 0x80C4FA24u: goto label_80C4FA24;
    case 0x80C4FA2Cu: goto label_80C4FA2C;
    case 0x80C4FA50u: goto label_80C4FA50;
    case 0x80C4FA58u: goto label_80C4FA58;
    case 0x80C4FA5Cu: goto label_80C4FA5C;
    case 0x80C4FA64u: goto label_80C4FA64;
    case 0x80C4FA68u: goto label_80C4FA68;
    case 0x80C4FA70u: goto label_80C4FA70;
    case 0x80C4FA7Cu: goto label_80C4FA7C;
    case 0x80C4FA84u: goto label_80C4FA84;
    case 0x80C4FAA8u: goto label_80C4FAA8;
    case 0x80C4FAB0u: goto label_80C4FAB0;
    case 0x80C4FAB4u: goto label_80C4FAB4;
    case 0x80C4FAB8u: goto label_80C4FAB8;
    case 0x80C4FAC0u: goto label_80C4FAC0;
    case 0x80C4FAC4u: goto label_80C4FAC4;
    case 0x80C4FACCu: goto label_80C4FACC;
    case 0x80C4FAF4u: goto label_80C4FAF4;
    case 0x80C4FAFCu: goto label_80C4FAFC;
    case 0x80C4FB34u: goto label_80C4FB34;
    case 0x80C4FB5Cu: goto label_80C4FB5C;
    case 0x80C4FB70u: goto label_80C4FB70;
    case 0x80C4FB7Cu: goto label_80C4FB7C;
    case 0x80C4FB84u: goto label_80C4FB84;
    case 0x80C4FB9Cu: goto label_80C4FB9C;
    case 0x80C4FBB0u: goto label_80C4FBB0;
    case 0x80C4FBB4u: goto label_80C4FBB4;
    case 0x80C4FBD8u: goto label_80C4FBD8;
    case 0x80C4FC64u: goto label_80C4FC64;
    case 0x80C4FC70u: goto label_80C4FC70;
    case 0x80C4FD00u: goto label_80C4FD00;
    case 0x80C4FD08u: goto label_80C4FD08;
    case 0x80C4FD70u: goto label_80C4FD70;
    case 0x80C4FDB8u: goto label_80C4FDB8;
    case 0x80C4FE24u: goto label_80C4FE24;
    case 0x80C4FED0u: goto label_80C4FED0;
    case 0x80C4FEF8u: goto label_80C4FEF8;
    case 0x80C4FF58u: goto label_80C4FF58;
    case 0x80C4FF98u: goto label_80C4FF98;
    case 0x80C4FFD8u: goto label_80C4FFD8;
    case 0x80C50034u: goto label_80C50034;
    case 0x80C50058u: goto label_80C50058;
    case 0x80C500F4u: goto label_80C500F4;
    case 0x80C50144u: goto label_80C50144;
    case 0x80C50194u: goto label_80C50194;
    case 0x80C501E0u: goto label_80C501E0;
    case 0x80C50264u: goto label_80C50264;
    case 0x80C50288u: goto label_80C50288;
    case 0x80C50304u: goto label_80C50304;
    case 0x80C5036Cu: goto label_80C5036C;
    case 0x80C503D4u: goto label_80C503D4;
    case 0x80C50424u: goto label_80C50424;
    case 0x80C50474u: goto label_80C50474;
    case 0x80C504B8u: goto label_80C504B8;
    case 0x80C504E0u: goto label_80C504E0;
    case 0x80C504ECu: goto label_80C504EC;
    case 0x80C504F8u: goto label_80C504F8;
    case 0x80C50504u: goto label_80C50504;
    default: return;
    }
}

