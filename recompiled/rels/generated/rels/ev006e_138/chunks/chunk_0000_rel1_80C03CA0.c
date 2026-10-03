// DolRecomp output
#include "../generated.h"

void func_80C03CA0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C03CA0[947] = {
        &&label_80C03CA0,
        &&label_80C03CA4,
        &&label_80C03CA8,
        &&label_80C03CAC,
        &&label_80C03CB0,
        &&label_80C03CB4,
        &&label_80C03CB8,
        &&label_80C03CBC,
        &&label_80C03CC0,
        &&label_80C03CC4,
        &&label_80C03CC8,
        &&label_80C03CCC,
        &&label_80C03CD0,
        &&label_80C03CD4,
        &&label_80C03CD8,
        &&label_80C03CDC,
        &&label_80C03CE0,
        &&label_80C03CE4,
        &&label_80C03CE8,
        &&label_80C03CEC,
        &&label_80C03CF0,
        &&label_80C03CF4,
        &&label_80C03CF8,
        &&label_80C03CFC,
        &&label_80C03D00,
        &&label_80C03D04,
        &&label_80C03D08,
        &&label_80C03D0C,
        &&label_80C03D10,
        &&label_80C03D14,
        &&label_80C03D18,
        &&label_80C03D1C,
        &&label_80C03D20,
        &&label_80C03D24,
        &&label_80C03D28,
        &&label_80C03D2C,
        &&label_80C03D30,
        &&label_80C03D34,
        &&label_80C03D38,
        &&label_80C03D3C,
        &&label_80C03D40,
        &&label_80C03D44,
        &&label_80C03D48,
        &&label_80C03D4C,
        &&label_80C03D50,
        &&label_80C03D54,
        &&label_80C03D58,
        &&label_80C03D5C,
        &&label_80C03D60,
        &&label_80C03D64,
        &&label_80C03D68,
        &&label_80C03D6C,
        &&label_80C03D70,
        &&label_80C03D74,
        &&label_80C03D78,
        &&label_80C03D7C,
        &&label_80C03D80,
        &&label_80C03D84,
        &&label_80C03D88,
        &&label_80C03D8C,
        &&label_80C03D90,
        &&label_80C03D94,
        &&label_80C03D98,
        &&label_80C03D9C,
        &&label_80C03DA0,
        &&label_80C03DA4,
        &&label_80C03DA8,
        &&label_80C03DAC,
        &&label_80C03DB0,
        &&label_80C03DB4,
        &&label_80C03DB8,
        &&label_80C03DBC,
        &&label_80C03DC0,
        &&label_80C03DC4,
        &&label_80C03DC8,
        &&label_80C03DCC,
        &&label_80C03DD0,
        &&label_80C03DD4,
        &&label_80C03DD8,
        &&label_80C03DDC,
        &&label_80C03DE0,
        &&label_80C03DE4,
        &&label_80C03DE8,
        &&label_80C03DEC,
        &&label_80C03DF0,
        &&label_80C03DF4,
        &&label_80C03DF8,
        &&label_80C03DFC,
        &&label_80C03E00,
        &&label_80C03E04,
        &&label_80C03E08,
        &&label_80C03E0C,
        &&label_80C03E10,
        &&label_80C03E14,
        &&label_80C03E18,
        &&label_80C03E1C,
        &&label_80C03E20,
        &&label_80C03E24,
        &&label_80C03E28,
        &&label_80C03E2C,
        &&label_80C03E30,
        &&label_80C03E34,
        &&label_80C03E38,
        &&label_80C03E3C,
        &&label_80C03E40,
        &&label_80C03E44,
        &&label_80C03E48,
        &&label_80C03E4C,
        &&label_80C03E50,
        &&label_80C03E54,
        &&label_80C03E58,
        &&label_80C03E5C,
        &&label_80C03E60,
        &&label_80C03E64,
        &&label_80C03E68,
        &&label_80C03E6C,
        &&label_80C03E70,
        &&label_80C03E74,
        &&label_80C03E78,
        &&label_80C03E7C,
        &&label_80C03E80,
        &&label_80C03E84,
        &&label_80C03E88,
        &&label_80C03E8C,
        &&label_80C03E90,
        &&label_80C03E94,
        &&label_80C03E98,
        &&label_80C03E9C,
        &&label_80C03EA0,
        &&label_80C03EA4,
        &&label_80C03EA8,
        &&label_80C03EAC,
        &&label_80C03EB0,
        &&label_80C03EB4,
        &&label_80C03EB8,
        &&label_80C03EBC,
        &&label_80C03EC0,
        &&label_80C03EC4,
        &&label_80C03EC8,
        &&label_80C03ECC,
        &&label_80C03ED0,
        &&label_80C03ED4,
        &&label_80C03ED8,
        &&label_80C03EDC,
        &&label_80C03EE0,
        &&label_80C03EE4,
        &&label_80C03EE8,
        &&label_80C03EEC,
        &&label_80C03EF0,
        &&label_80C03EF4,
        &&label_80C03EF8,
        &&label_80C03EFC,
        &&label_80C03F00,
        &&label_80C03F04,
        &&label_80C03F08,
        &&label_80C03F0C,
        &&label_80C03F10,
        &&label_80C03F14,
        &&label_80C03F18,
        &&label_80C03F1C,
        &&label_80C03F20,
        &&label_80C03F24,
        &&label_80C03F28,
        &&label_80C03F2C,
        &&label_80C03F30,
        &&label_80C03F34,
        &&label_80C03F38,
        &&label_80C03F3C,
        &&label_80C03F40,
        &&label_80C03F44,
        &&label_80C03F48,
        &&label_80C03F4C,
        &&label_80C03F50,
        &&label_80C03F54,
        &&label_80C03F58,
        &&label_80C03F5C,
        &&label_80C03F60,
        &&label_80C03F64,
        &&label_80C03F68,
        &&label_80C03F6C,
        &&label_80C03F70,
        &&label_80C03F74,
        &&label_80C03F78,
        &&label_80C03F7C,
        &&label_80C03F80,
        &&label_80C03F84,
        &&label_80C03F88,
        &&label_80C03F8C,
        &&label_80C03F90,
        &&label_80C03F94,
        &&label_80C03F98,
        &&label_80C03F9C,
        &&label_80C03FA0,
        &&label_80C03FA4,
        &&label_80C03FA8,
        &&label_80C03FAC,
        &&label_80C03FB0,
        &&label_80C03FB4,
        &&label_80C03FB8,
        &&label_80C03FBC,
        &&label_80C03FC0,
        &&label_80C03FC4,
        &&label_80C03FC8,
        &&label_80C03FCC,
        &&label_80C03FD0,
        &&label_80C03FD4,
        &&label_80C03FD8,
        &&label_80C03FDC,
        &&label_80C03FE0,
        &&label_80C03FE4,
        &&label_80C03FE8,
        &&label_80C03FEC,
        &&label_80C03FF0,
        &&label_80C03FF4,
        &&label_80C03FF8,
        &&label_80C03FFC,
        &&label_80C04000,
        &&label_80C04004,
        &&label_80C04008,
        &&label_80C0400C,
        &&label_80C04010,
        &&label_80C04014,
        &&label_80C04018,
        &&label_80C0401C,
        &&label_80C04020,
        &&label_80C04024,
        &&label_80C04028,
        &&label_80C0402C,
        &&label_80C04030,
        &&label_80C04034,
        &&label_80C04038,
        &&label_80C0403C,
        &&label_80C04040,
        &&label_80C04044,
        &&label_80C04048,
        &&label_80C0404C,
        &&label_80C04050,
        &&label_80C04054,
        &&label_80C04058,
        &&label_80C0405C,
        &&label_80C04060,
        &&label_80C04064,
        &&label_80C04068,
        &&label_80C0406C,
        &&label_80C04070,
        &&label_80C04074,
        &&label_80C04078,
        &&label_80C0407C,
        &&label_80C04080,
        &&label_80C04084,
        &&label_80C04088,
        &&label_80C0408C,
        &&label_80C04090,
        &&label_80C04094,
        &&label_80C04098,
        &&label_80C0409C,
        &&label_80C040A0,
        &&label_80C040A4,
        &&label_80C040A8,
        &&label_80C040AC,
        &&label_80C040B0,
        &&label_80C040B4,
        &&label_80C040B8,
        &&label_80C040BC,
        &&label_80C040C0,
        &&label_80C040C4,
        &&label_80C040C8,
        &&label_80C040CC,
        &&label_80C040D0,
        &&label_80C040D4,
        &&label_80C040D8,
        &&label_80C040DC,
        &&label_80C040E0,
        &&label_80C040E4,
        &&label_80C040E8,
        &&label_80C040EC,
        &&label_80C040F0,
        &&label_80C040F4,
        &&label_80C040F8,
        &&label_80C040FC,
        &&label_80C04100,
        &&label_80C04104,
        &&label_80C04108,
        &&label_80C0410C,
        &&label_80C04110,
        &&label_80C04114,
        &&label_80C04118,
        &&label_80C0411C,
        &&label_80C04120,
        &&label_80C04124,
        &&label_80C04128,
        &&label_80C0412C,
        &&label_80C04130,
        &&label_80C04134,
        &&label_80C04138,
        &&label_80C0413C,
        &&label_80C04140,
        &&label_80C04144,
        &&label_80C04148,
        &&label_80C0414C,
        &&label_80C04150,
        &&label_80C04154,
        &&label_80C04158,
        &&label_80C0415C,
        &&label_80C04160,
        &&label_80C04164,
        &&label_80C04168,
        &&label_80C0416C,
        &&label_80C04170,
        &&label_80C04174,
        &&label_80C04178,
        &&label_80C0417C,
        &&label_80C04180,
        &&label_80C04184,
        &&label_80C04188,
        &&label_80C0418C,
        &&label_80C04190,
        &&label_80C04194,
        &&label_80C04198,
        &&label_80C0419C,
        &&label_80C041A0,
        &&label_80C041A4,
        &&label_80C041A8,
        &&label_80C041AC,
        &&label_80C041B0,
        &&label_80C041B4,
        &&label_80C041B8,
        &&label_80C041BC,
        &&label_80C041C0,
        &&label_80C041C4,
        &&label_80C041C8,
        &&label_80C041CC,
        &&label_80C041D0,
        &&label_80C041D4,
        &&label_80C041D8,
        &&label_80C041DC,
        &&label_80C041E0,
        &&label_80C041E4,
        &&label_80C041E8,
        &&label_80C041EC,
        &&label_80C041F0,
        &&label_80C041F4,
        &&label_80C041F8,
        &&label_80C041FC,
        &&label_80C04200,
        &&label_80C04204,
        &&label_80C04208,
        &&label_80C0420C,
        &&label_80C04210,
        &&label_80C04214,
        &&label_80C04218,
        &&label_80C0421C,
        &&label_80C04220,
        &&label_80C04224,
        &&label_80C04228,
        &&label_80C0422C,
        &&label_80C04230,
        &&label_80C04234,
        &&label_80C04238,
        &&label_80C0423C,
        &&label_80C04240,
        &&label_80C04244,
        &&label_80C04248,
        &&label_80C0424C,
        &&label_80C04250,
        &&label_80C04254,
        &&label_80C04258,
        &&label_80C0425C,
        &&label_80C04260,
        &&label_80C04264,
        &&label_80C04268,
        &&label_80C0426C,
        &&label_80C04270,
        &&label_80C04274,
        &&label_80C04278,
        &&label_80C0427C,
        &&label_80C04280,
        &&label_80C04284,
        &&label_80C04288,
        &&label_80C0428C,
        &&label_80C04290,
        &&label_80C04294,
        &&label_80C04298,
        &&label_80C0429C,
        &&label_80C042A0,
        &&label_80C042A4,
        &&label_80C042A8,
        &&label_80C042AC,
        &&label_80C042B0,
        &&label_80C042B4,
        &&label_80C042B8,
        &&label_80C042BC,
        &&label_80C042C0,
        &&label_80C042C4,
        &&label_80C042C8,
        &&label_80C042CC,
        &&label_80C042D0,
        &&label_80C042D4,
        &&label_80C042D8,
        &&label_80C042DC,
        &&label_80C042E0,
        &&label_80C042E4,
        &&label_80C042E8,
        &&label_80C042EC,
        &&label_80C042F0,
        &&label_80C042F4,
        &&label_80C042F8,
        &&label_80C042FC,
        &&label_80C04300,
        &&label_80C04304,
        &&label_80C04308,
        &&label_80C0430C,
        &&label_80C04310,
        &&label_80C04314,
        &&label_80C04318,
        &&label_80C0431C,
        &&label_80C04320,
        &&label_80C04324,
        &&label_80C04328,
        &&label_80C0432C,
        &&label_80C04330,
        &&label_80C04334,
        &&label_80C04338,
        &&label_80C0433C,
        &&label_80C04340,
        &&label_80C04344,
        &&label_80C04348,
        &&label_80C0434C,
        &&label_80C04350,
        &&label_80C04354,
        &&label_80C04358,
        &&label_80C0435C,
        &&label_80C04360,
        &&label_80C04364,
        &&label_80C04368,
        &&label_80C0436C,
        &&label_80C04370,
        &&label_80C04374,
        &&label_80C04378,
        &&label_80C0437C,
        &&label_80C04380,
        &&label_80C04384,
        &&label_80C04388,
        &&label_80C0438C,
        &&label_80C04390,
        &&label_80C04394,
        &&label_80C04398,
        &&label_80C0439C,
        &&label_80C043A0,
        &&label_80C043A4,
        &&label_80C043A8,
        &&label_80C043AC,
        &&label_80C043B0,
        &&label_80C043B4,
        &&label_80C043B8,
        &&label_80C043BC,
        &&label_80C043C0,
        &&label_80C043C4,
        &&label_80C043C8,
        &&label_80C043CC,
        &&label_80C043D0,
        &&label_80C043D4,
        &&label_80C043D8,
        &&label_80C043DC,
        &&label_80C043E0,
        &&label_80C043E4,
        &&label_80C043E8,
        &&label_80C043EC,
        &&label_80C043F0,
        &&label_80C043F4,
        &&label_80C043F8,
        &&label_80C043FC,
        &&label_80C04400,
        &&label_80C04404,
        &&label_80C04408,
        &&label_80C0440C,
        &&label_80C04410,
        &&label_80C04414,
        &&label_80C04418,
        &&label_80C0441C,
        &&label_80C04420,
        &&label_80C04424,
        &&label_80C04428,
        &&label_80C0442C,
        &&label_80C04430,
        &&label_80C04434,
        &&label_80C04438,
        &&label_80C0443C,
        &&label_80C04440,
        &&label_80C04444,
        &&label_80C04448,
        &&label_80C0444C,
        &&label_80C04450,
        &&label_80C04454,
        &&label_80C04458,
        &&label_80C0445C,
        &&label_80C04460,
        &&label_80C04464,
        &&label_80C04468,
        &&label_80C0446C,
        &&label_80C04470,
        &&label_80C04474,
        &&label_80C04478,
        &&label_80C0447C,
        &&label_80C04480,
        &&label_80C04484,
        &&label_80C04488,
        &&label_80C0448C,
        &&label_80C04490,
        &&label_80C04494,
        &&label_80C04498,
        &&label_80C0449C,
        &&label_80C044A0,
        &&label_80C044A4,
        &&label_80C044A8,
        &&label_80C044AC,
        &&label_80C044B0,
        &&label_80C044B4,
        &&label_80C044B8,
        &&label_80C044BC,
        &&label_80C044C0,
        &&label_80C044C4,
        &&label_80C044C8,
        &&label_80C044CC,
        &&label_80C044D0,
        &&label_80C044D4,
        &&label_80C044D8,
        &&label_80C044DC,
        &&label_80C044E0,
        &&label_80C044E4,
        &&label_80C044E8,
        &&label_80C044EC,
        &&label_80C044F0,
        &&label_80C044F4,
        &&label_80C044F8,
        &&label_80C044FC,
        &&label_80C04500,
        &&label_80C04504,
        &&label_80C04508,
        &&label_80C0450C,
        &&label_80C04510,
        &&label_80C04514,
        &&label_80C04518,
        &&label_80C0451C,
        &&label_80C04520,
        &&label_80C04524,
        &&label_80C04528,
        &&label_80C0452C,
        &&label_80C04530,
        &&label_80C04534,
        &&label_80C04538,
        &&label_80C0453C,
        &&label_80C04540,
        &&label_80C04544,
        &&label_80C04548,
        &&label_80C0454C,
        &&label_80C04550,
        &&label_80C04554,
        &&label_80C04558,
        &&label_80C0455C,
        &&label_80C04560,
        &&label_80C04564,
        &&label_80C04568,
        &&label_80C0456C,
        &&label_80C04570,
        &&label_80C04574,
        &&label_80C04578,
        &&label_80C0457C,
        &&label_80C04580,
        &&label_80C04584,
        &&label_80C04588,
        &&label_80C0458C,
        &&label_80C04590,
        &&label_80C04594,
        &&label_80C04598,
        &&label_80C0459C,
        &&label_80C045A0,
        &&label_80C045A4,
        &&label_80C045A8,
        &&label_80C045AC,
        &&label_80C045B0,
        &&label_80C045B4,
        &&label_80C045B8,
        &&label_80C045BC,
        &&label_80C045C0,
        &&label_80C045C4,
        &&label_80C045C8,
        &&label_80C045CC,
        &&label_80C045D0,
        &&label_80C045D4,
        &&label_80C045D8,
        &&label_80C045DC,
        &&label_80C045E0,
        &&label_80C045E4,
        &&label_80C045E8,
        &&label_80C045EC,
        &&label_80C045F0,
        &&label_80C045F4,
        &&label_80C045F8,
        &&label_80C045FC,
        &&label_80C04600,
        &&label_80C04604,
        &&label_80C04608,
        &&label_80C0460C,
        &&label_80C04610,
        &&label_80C04614,
        &&label_80C04618,
        &&label_80C0461C,
        &&label_80C04620,
        &&label_80C04624,
        &&label_80C04628,
        &&label_80C0462C,
        &&label_80C04630,
        &&label_80C04634,
        &&label_80C04638,
        &&label_80C0463C,
        &&label_80C04640,
        &&label_80C04644,
        &&label_80C04648,
        &&label_80C0464C,
        &&label_80C04650,
        &&label_80C04654,
        &&label_80C04658,
        &&label_80C0465C,
        &&label_80C04660,
        &&label_80C04664,
        &&label_80C04668,
        &&label_80C0466C,
        &&label_80C04670,
        &&label_80C04674,
        &&label_80C04678,
        &&label_80C0467C,
        &&label_80C04680,
        &&label_80C04684,
        &&label_80C04688,
        &&label_80C0468C,
        &&label_80C04690,
        &&label_80C04694,
        &&label_80C04698,
        &&label_80C0469C,
        &&label_80C046A0,
        &&label_80C046A4,
        &&label_80C046A8,
        &&label_80C046AC,
        &&label_80C046B0,
        &&label_80C046B4,
        &&label_80C046B8,
        &&label_80C046BC,
        &&label_80C046C0,
        &&label_80C046C4,
        &&label_80C046C8,
        &&label_80C046CC,
        &&label_80C046D0,
        &&label_80C046D4,
        &&label_80C046D8,
        &&label_80C046DC,
        &&label_80C046E0,
        &&label_80C046E4,
        &&label_80C046E8,
        &&label_80C046EC,
        &&label_80C046F0,
        &&label_80C046F4,
        &&label_80C046F8,
        &&label_80C046FC,
        &&label_80C04700,
        &&label_80C04704,
        &&label_80C04708,
        &&label_80C0470C,
        &&label_80C04710,
        &&label_80C04714,
        &&label_80C04718,
        &&label_80C0471C,
        &&label_80C04720,
        &&label_80C04724,
        &&label_80C04728,
        &&label_80C0472C,
        &&label_80C04730,
        &&label_80C04734,
        &&label_80C04738,
        &&label_80C0473C,
        &&label_80C04740,
        &&label_80C04744,
        &&label_80C04748,
        &&label_80C0474C,
        &&label_80C04750,
        &&label_80C04754,
        &&label_80C04758,
        &&label_80C0475C,
        &&label_80C04760,
        &&label_80C04764,
        &&label_80C04768,
        &&label_80C0476C,
        &&label_80C04770,
        &&label_80C04774,
        &&label_80C04778,
        &&label_80C0477C,
        &&label_80C04780,
        &&label_80C04784,
        &&label_80C04788,
        &&label_80C0478C,
        &&label_80C04790,
        &&label_80C04794,
        &&label_80C04798,
        &&label_80C0479C,
        &&label_80C047A0,
        &&label_80C047A4,
        &&label_80C047A8,
        &&label_80C047AC,
        &&label_80C047B0,
        &&label_80C047B4,
        &&label_80C047B8,
        &&label_80C047BC,
        &&label_80C047C0,
        &&label_80C047C4,
        &&label_80C047C8,
        &&label_80C047CC,
        &&label_80C047D0,
        &&label_80C047D4,
        &&label_80C047D8,
        &&label_80C047DC,
        &&label_80C047E0,
        &&label_80C047E4,
        &&label_80C047E8,
        &&label_80C047EC,
        &&label_80C047F0,
        &&label_80C047F4,
        &&label_80C047F8,
        &&label_80C047FC,
        &&label_80C04800,
        &&label_80C04804,
        &&label_80C04808,
        &&label_80C0480C,
        &&label_80C04810,
        &&label_80C04814,
        &&label_80C04818,
        &&label_80C0481C,
        &&label_80C04820,
        &&label_80C04824,
        &&label_80C04828,
        &&label_80C0482C,
        &&label_80C04830,
        &&label_80C04834,
        &&label_80C04838,
        &&label_80C0483C,
        &&label_80C04840,
        &&label_80C04844,
        &&label_80C04848,
        &&label_80C0484C,
        &&label_80C04850,
        &&label_80C04854,
        &&label_80C04858,
        &&label_80C0485C,
        &&label_80C04860,
        &&label_80C04864,
        &&label_80C04868,
        &&label_80C0486C,
        &&label_80C04870,
        &&label_80C04874,
        &&label_80C04878,
        &&label_80C0487C,
        &&label_80C04880,
        &&label_80C04884,
        &&label_80C04888,
        &&label_80C0488C,
        &&label_80C04890,
        &&label_80C04894,
        &&label_80C04898,
        &&label_80C0489C,
        &&label_80C048A0,
        &&label_80C048A4,
        &&label_80C048A8,
        &&label_80C048AC,
        &&label_80C048B0,
        &&label_80C048B4,
        &&label_80C048B8,
        &&label_80C048BC,
        &&label_80C048C0,
        &&label_80C048C4,
        &&label_80C048C8,
        &&label_80C048CC,
        &&label_80C048D0,
        &&label_80C048D4,
        &&label_80C048D8,
        &&label_80C048DC,
        &&label_80C048E0,
        &&label_80C048E4,
        &&label_80C048E8,
        &&label_80C048EC,
        &&label_80C048F0,
        &&label_80C048F4,
        &&label_80C048F8,
        &&label_80C048FC,
        &&label_80C04900,
        &&label_80C04904,
        &&label_80C04908,
        &&label_80C0490C,
        &&label_80C04910,
        &&label_80C04914,
        &&label_80C04918,
        &&label_80C0491C,
        &&label_80C04920,
        &&label_80C04924,
        &&label_80C04928,
        &&label_80C0492C,
        &&label_80C04930,
        &&label_80C04934,
        &&label_80C04938,
        &&label_80C0493C,
        &&label_80C04940,
        &&label_80C04944,
        &&label_80C04948,
        &&label_80C0494C,
        &&label_80C04950,
        &&label_80C04954,
        &&label_80C04958,
        &&label_80C0495C,
        &&label_80C04960,
        &&label_80C04964,
        &&label_80C04968,
        &&label_80C0496C,
        &&label_80C04970,
        &&label_80C04974,
        &&label_80C04978,
        &&label_80C0497C,
        &&label_80C04980,
        &&label_80C04984,
        &&label_80C04988,
        &&label_80C0498C,
        &&label_80C04990,
        &&label_80C04994,
        &&label_80C04998,
        &&label_80C0499C,
        &&label_80C049A0,
        &&label_80C049A4,
        &&label_80C049A8,
        &&label_80C049AC,
        &&label_80C049B0,
        &&label_80C049B4,
        &&label_80C049B8,
        &&label_80C049BC,
        &&label_80C049C0,
        &&label_80C049C4,
        &&label_80C049C8,
        &&label_80C049CC,
        &&label_80C049D0,
        &&label_80C049D4,
        &&label_80C049D8,
        &&label_80C049DC,
        &&label_80C049E0,
        &&label_80C049E4,
        &&label_80C049E8,
        &&label_80C049EC,
        &&label_80C049F0,
        &&label_80C049F4,
        &&label_80C049F8,
        &&label_80C049FC,
        &&label_80C04A00,
        &&label_80C04A04,
        &&label_80C04A08,
        &&label_80C04A0C,
        &&label_80C04A10,
        &&label_80C04A14,
        &&label_80C04A18,
        &&label_80C04A1C,
        &&label_80C04A20,
        &&label_80C04A24,
        &&label_80C04A28,
        &&label_80C04A2C,
        &&label_80C04A30,
        &&label_80C04A34,
        &&label_80C04A38,
        &&label_80C04A3C,
        &&label_80C04A40,
        &&label_80C04A44,
        &&label_80C04A48,
        &&label_80C04A4C,
        &&label_80C04A50,
        &&label_80C04A54,
        &&label_80C04A58,
        &&label_80C04A5C,
        &&label_80C04A60,
        &&label_80C04A64,
        &&label_80C04A68,
        &&label_80C04A6C,
        &&label_80C04A70,
        &&label_80C04A74,
        &&label_80C04A78,
        &&label_80C04A7C,
        &&label_80C04A80,
        &&label_80C04A84,
        &&label_80C04A88,
        &&label_80C04A8C,
        &&label_80C04A90,
        &&label_80C04A94,
        &&label_80C04A98,
        &&label_80C04A9C,
        &&label_80C04AA0,
        &&label_80C04AA4,
        &&label_80C04AA8,
        &&label_80C04AAC,
        &&label_80C04AB0,
        &&label_80C04AB4,
        &&label_80C04AB8,
        &&label_80C04ABC,
        &&label_80C04AC0,
        &&label_80C04AC4,
        &&label_80C04AC8,
        &&label_80C04ACC,
        &&label_80C04AD0,
        &&label_80C04AD4,
        &&label_80C04AD8,
        &&label_80C04ADC,
        &&label_80C04AE0,
        &&label_80C04AE4,
        &&label_80C04AE8,
        &&label_80C04AEC,
        &&label_80C04AF0,
        &&label_80C04AF4,
        &&label_80C04AF8,
        &&label_80C04AFC,
        &&label_80C04B00,
        &&label_80C04B04,
        &&label_80C04B08,
        &&label_80C04B0C,
        &&label_80C04B10,
        &&label_80C04B14,
        &&label_80C04B18,
        &&label_80C04B1C,
        &&label_80C04B20,
        &&label_80C04B24,
        &&label_80C04B28,
        &&label_80C04B2C,
        &&label_80C04B30,
        &&label_80C04B34,
        &&label_80C04B38,
        &&label_80C04B3C,
        &&label_80C04B40,
        &&label_80C04B44,
        &&label_80C04B48,
        &&label_80C04B4C,
        &&label_80C04B50,
        &&label_80C04B54,
        &&label_80C04B58,
        &&label_80C04B5C,
        &&label_80C04B60,
        &&label_80C04B64,
        &&label_80C04B68
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C03CA0u && pc <= 0x80C04B68u && ((pc - 0x80C03CA0u) & 3u) == 0u)
            goto *pc_table_80C03CA0[(pc - 0x80C03CA0u) >> 2];
    }
    return;
label_80C03CA0:
    ctx->pc = 0x80C03CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03CA0: stwu     r1, -16(r1)
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
label_80C03CA4:
    ctx->pc = 0x80C03CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C03CA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C03CA8:
    ctx->pc = 0x80C03CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C03CA8: stw     r0, 20(r1)
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
label_80C03CAC:
    ctx->pc = 0x80C03CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CACu)) return;
    // 80C03CAC: cmpwi   r3, 2
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

label_80C03CB0:
    ctx->pc = 0x80C03CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CB0u)) return;
    // 80C03CB0: bc    12, 2, 0x80C04298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C04298;
        }
    }

label_80C03CB4:
    ctx->pc = 0x80C03CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CB4: bc    4, 0, 0x80C03CC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C03CC8;
        }
    }

label_80C03CB8:
    ctx->pc = 0x80C03CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03CB8: cmpwi   r3, 0
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

label_80C03CBC:
    ctx->pc = 0x80C03CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CBCu)) return;
    // 80C03CBC: bc    12, 2, 0x80C04308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C04308;
        }
    }

label_80C03CC0:
    ctx->pc = 0x80C03CC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CC0: bc    4, 0, 0x80C03CD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C03CD0;
        }
    }

label_80C03CC4:
    ctx->pc = 0x80C03CC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CC4: b       0x80C04308
    {
            goto label_80C04308;
    }

label_80C03CC8:
    ctx->pc = 0x80C03CC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03CC8: cmpwi   r3, 4
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

label_80C03CCC:
    ctx->pc = 0x80C03CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CCCu)) return;
    // 80C03CCC: b       0x80C04308
    {
            goto label_80C04308;
    }

label_80C03CD0:
    ctx->pc = 0x80C03CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CD0: bl      0x8045DE7C
    {
            ctx->lr = 0x80C03CD4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C03CD4:
    ctx->pc = 0x80C03CD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CD4: bl      0x80460A60
    {
            ctx->lr = 0x80C03CD8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C03CD8:
    ctx->pc = 0x80C03CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CD8: bl      0x80460A24
    {
            ctx->lr = 0x80C03CDCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C03CDC:
    ctx->pc = 0x80C03CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03CDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03CE0:
    ctx->pc = 0x80C03CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CE0u)) return;
    // 80C03CE0: bl      0x8045EC10
    {
            ctx->lr = 0x80C03CE4u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C03CE4:
    ctx->pc = 0x80C03CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03CE4: li      r3, 89
    ctx->gpr[3] = (u32)(s32)(89);

label_80C03CE8:
    ctx->pc = 0x80C03CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CE8u)) return;
    // 80C03CE8: bl      0x80406090
    {
            ctx->lr = 0x80C03CECu;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C03CEC:
    ctx->pc = 0x80C03CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03CEC: bl      0x80C04A4C
    {
            ctx->lr = 0x80C03CF0u;
            goto label_80C04A4C;
    }

label_80C03CF0:
    ctx->pc = 0x80C03CF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03CF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C03CF0: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C03CF4:
    ctx->pc = 0x80C03CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CF4u)) return;
    // 80C03CF4: addi    r4, r4, -25696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25696);

label_80C03CF8:
    ctx->pc = 0x80C03CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C03CF8: stw     r3, 0(r4)
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
label_80C03CFC:
    ctx->pc = 0x80C03CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03CFCu)) return;
    // 80C03CFC: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03D00:
    ctx->pc = 0x80C03D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D00u)) return;
    // 80C03D00: addi    r4, r4, 23056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23056);

label_80C03D04:
    ctx->pc = 0x80C03D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C03D04: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03D04u)) return;
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
label_80C03D08:
    ctx->pc = 0x80C03D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D08u)) return;
    // 80C03D08: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03D0C:
    ctx->pc = 0x80C03D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D0Cu)) return;
    // 80C03D0C: addi    r4, r4, 23060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23060);

label_80C03D10:
    ctx->pc = 0x80C03D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03D10: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03D10u)) return;
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
label_80C03D14:
    ctx->pc = 0x80C03D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D14u)) return;
    // 80C03D14: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03D18:
    ctx->pc = 0x80C03D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D18u)) return;
    // 80C03D18: addi    r4, r4, 23064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23064);

label_80C03D1C:
    ctx->pc = 0x80C03D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03D1C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03D1Cu)) return;
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
label_80C03D20:
    ctx->pc = 0x80C03D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D20u)) return;
    // 80C03D20: bl      0x8045EF2C
    {
            ctx->lr = 0x80C03D24u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C03D24:
    ctx->pc = 0x80C03D24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03D24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C03D24: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C03D28:
    ctx->pc = 0x80C03D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D28u)) return;
    // 80C03D28: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C03D2C:
    ctx->pc = 0x80C03D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03D2C: lwz     r3, 0(r3)
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
label_80C03D30:
    ctx->pc = 0x80C03D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D30u)) return;
    // 80C03D30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C03D34:
    ctx->pc = 0x80C03D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D34u)) return;
    // 80C03D34: li      r5, 21329
    ctx->gpr[5] = (u32)(s32)(21329);

label_80C03D38:
    ctx->pc = 0x80C03D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D38u)) return;
    // 80C03D38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C03D3C:
    ctx->pc = 0x80C03D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D3Cu)) return;
    // 80C03D3C: bl      0x8045EEA8
    {
            ctx->lr = 0x80C03D40u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C03D40:
    ctx->pc = 0x80C03D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03D40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C03D44:
    ctx->pc = 0x80C03D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D44u)) return;
    // 80C03D44: bl      0x8045F7C8
    {
            ctx->lr = 0x80C03D48u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C03D48:
    ctx->pc = 0x80C03D48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03D48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C03D48: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C03D4C:
    ctx->pc = 0x80C03D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D4Cu)) return;
    // 80C03D4C: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C03D50:
    ctx->pc = 0x80C03D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C03D50: lwz     r3, 0(r3)
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
label_80C03D54:
    ctx->pc = 0x80C03D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D54u)) return;
    // 80C03D54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C03D58:
    ctx->pc = 0x80C03D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D58u)) return;
    // 80C03D58: bl      0x8045EE90
    {
            ctx->lr = 0x80C03D5Cu;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C03D5C:
    ctx->pc = 0x80C03D5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03D5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C03D5C: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C03D60:
    ctx->pc = 0x80C03D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D60u)) return;
    // 80C03D60: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C03D64:
    ctx->pc = 0x80C03D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C03D64: lwz     r3, 0(r3)
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
label_80C03D68:
    ctx->pc = 0x80C03D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D68u)) return;
    // 80C03D68: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03D6C:
    ctx->pc = 0x80C03D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D6Cu)) return;
    // 80C03D6C: addi    r4, r4, 23068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23068);

label_80C03D70:
    ctx->pc = 0x80C03D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C03D70: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03D70u)) return;
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
label_80C03D74:
    ctx->pc = 0x80C03D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D74u)) return;
    // 80C03D74: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03D78:
    ctx->pc = 0x80C03D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D78u)) return;
    // 80C03D78: addi    r4, r4, 23072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23072);

label_80C03D7C:
    ctx->pc = 0x80C03D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03D7C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03D7Cu)) return;
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
label_80C03D80:
    ctx->pc = 0x80C03D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D80u)) return;
    // 80C03D80: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03D84:
    ctx->pc = 0x80C03D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D84u)) return;
    // 80C03D84: addi    r4, r4, 23076
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23076);

label_80C03D88:
    ctx->pc = 0x80C03D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03D88: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03D88u)) return;
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
label_80C03D8C:
    ctx->pc = 0x80C03D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D8Cu)) return;
    // 80C03D8C: bl      0x8045EF2C
    {
            ctx->lr = 0x80C03D90u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C03D90:
    ctx->pc = 0x80C03D90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03D90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80C03D90: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C03D94:
    ctx->pc = 0x80C03D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D94u)) return;
    // 80C03D94: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C03D98:
    ctx->pc = 0x80C03D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C03D98: lwz     r3, 0(r3)
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
label_80C03D9C:
    ctx->pc = 0x80C03D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03D9Cu)) return;
    // 80C03D9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C03DA0:
    ctx->pc = 0x80C03DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DA0u)) return;
    // 80C03DA0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C03DA4:
    ctx->pc = 0x80C03DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DA4u)) return;
    // 80C03DA4: addi    r5, r5, -24980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24980);

label_80C03DA8:
    ctx->pc = 0x80C03DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DA8u)) return;
    // 80C03DA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C03DAC:
    ctx->pc = 0x80C03DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DACu)) return;
    // 80C03DAC: bl      0x8045EEA8
    {
            ctx->lr = 0x80C03DB0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C03DB0:
    ctx->pc = 0x80C03DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C03DB0: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C03DB4:
    ctx->pc = 0x80C03DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DB4u)) return;
    // 80C03DB4: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C03DB8:
    ctx->pc = 0x80C03DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03DB8: lwz     r3, 0(r3)
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
label_80C03DBC:
    ctx->pc = 0x80C03DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DBCu)) return;
    // 80C03DBC: bl      0x8045EB8C
    {
            ctx->lr = 0x80C03DC0u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C03DC0:
    ctx->pc = 0x80C03DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C03DC0: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C03DC4:
    ctx->pc = 0x80C03DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DC4u)) return;
    // 80C03DC4: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C03DC8:
    ctx->pc = 0x80C03DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C03DC8: lwz     r3, 0(r3)
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
label_80C03DCC:
    ctx->pc = 0x80C03DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DCCu)) return;
    // 80C03DCC: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C03DD0:
    ctx->pc = 0x80C03DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DD0u)) return;
    // 80C03DD0: addi    r4, r4, -25832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25832);

label_80C03DD4:
    ctx->pc = 0x80C03DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DD4u)) return;
    // 80C03DD4: lis     r5, -27478
    ctx->gpr[5] = ((u32)(s32)(-27478) << 16);

label_80C03DD8:
    ctx->pc = 0x80C03DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DD8u)) return;
    // 80C03DD8: addi    r5, r5, 12880
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12880);

label_80C03DDC:
    ctx->pc = 0x80C03DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DDCu)) return;
    // 80C03DDC: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C03DE0:
    ctx->pc = 0x80C03DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DE0u)) return;
    // 80C03DE0: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C03DE4:
    ctx->pc = 0x80C03DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C03DE4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C03DE4u)) return;
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
label_80C03DE8:
    ctx->pc = 0x80C03DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DE8u)) return;
    // 80C03DE8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C03DEC:
    ctx->pc = 0x80C03DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DECu)) return;
    // 80C03DEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C03DF0:
    ctx->pc = 0x80C03DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DF0u)) return;
    // 80C03DF0: bl      0x8045EBE4
    {
            ctx->lr = 0x80C03DF4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C03DF4:
    ctx->pc = 0x80C03DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03DF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03DF8:
    ctx->pc = 0x80C03DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03DF8u)) return;
    // 80C03DF8: bl      0x8045F220
    {
            ctx->lr = 0x80C03DFCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03DFC:
    ctx->pc = 0x80C03DFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03DFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C03DFC: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E00:
    ctx->pc = 0x80C03E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E00u)) return;
    // 80C03E00: addi    r4, r4, 23084
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23084);

label_80C03E04:
    ctx->pc = 0x80C03E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C03E04: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E04u)) return;
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
label_80C03E08:
    ctx->pc = 0x80C03E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E08u)) return;
    // 80C03E08: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E0C:
    ctx->pc = 0x80C03E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E0Cu)) return;
    // 80C03E0C: addi    r4, r4, 23088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23088);

label_80C03E10:
    ctx->pc = 0x80C03E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03E10: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E10u)) return;
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
label_80C03E14:
    ctx->pc = 0x80C03E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E14u)) return;
    // 80C03E14: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E18:
    ctx->pc = 0x80C03E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E18u)) return;
    // 80C03E18: addi    r4, r4, 23092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23092);

label_80C03E1C:
    ctx->pc = 0x80C03E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03E1C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E1Cu)) return;
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
label_80C03E20:
    ctx->pc = 0x80C03E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E20u)) return;
    // 80C03E20: bl      0x8045EF2C
    {
            ctx->lr = 0x80C03E24u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C03E24:
    ctx->pc = 0x80C03E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03E24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03E28:
    ctx->pc = 0x80C03E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E28u)) return;
    // 80C03E28: bl      0x8045F220
    {
            ctx->lr = 0x80C03E2Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03E2C:
    ctx->pc = 0x80C03E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C03E2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C03E30:
    ctx->pc = 0x80C03E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E30u)) return;
    // 80C03E30: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C03E34:
    ctx->pc = 0x80C03E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E34u)) return;
    // 80C03E34: addi    r5, r5, -31298
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31298);

label_80C03E38:
    ctx->pc = 0x80C03E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E38u)) return;
    // 80C03E38: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C03E3C:
    ctx->pc = 0x80C03E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E3Cu)) return;
    // 80C03E3C: bl      0x8045EEA8
    {
            ctx->lr = 0x80C03E40u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C03E40:
    ctx->pc = 0x80C03E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03E40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C03E44:
    ctx->pc = 0x80C03E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E44u)) return;
    // 80C03E44: bl      0x8045F7C8
    {
            ctx->lr = 0x80C03E48u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C03E48:
    ctx->pc = 0x80C03E48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03E48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03E4C:
    ctx->pc = 0x80C03E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E4Cu)) return;
    // 80C03E4C: bl      0x8045F220
    {
            ctx->lr = 0x80C03E50u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03E50:
    ctx->pc = 0x80C03E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C03E50: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E54:
    ctx->pc = 0x80C03E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E54u)) return;
    // 80C03E54: addi    r4, r4, 23096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23096);

label_80C03E58:
    ctx->pc = 0x80C03E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C03E58: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E58u)) return;
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
label_80C03E5C:
    ctx->pc = 0x80C03E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E5Cu)) return;
    // 80C03E5C: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E60:
    ctx->pc = 0x80C03E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E60u)) return;
    // 80C03E60: addi    r4, r4, 23088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23088);

label_80C03E64:
    ctx->pc = 0x80C03E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C03E64: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E64u)) return;
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
label_80C03E68:
    ctx->pc = 0x80C03E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E68u)) return;
    // 80C03E68: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E6C:
    ctx->pc = 0x80C03E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E6Cu)) return;
    // 80C03E6C: addi    r4, r4, 23100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23100);

label_80C03E70:
    ctx->pc = 0x80C03E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C03E70: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E70u)) return;
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
label_80C03E74:
    ctx->pc = 0x80C03E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E74u)) return;
    // 80C03E74: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E78:
    ctx->pc = 0x80C03E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E78u)) return;
    // 80C03E78: addi    r4, r4, 23080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23080);

label_80C03E7C:
    ctx->pc = 0x80C03E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03E7C: lfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E7Cu)) return;
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
label_80C03E80:
    ctx->pc = 0x80C03E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E80u)) return;
    // 80C03E80: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03E84:
    ctx->pc = 0x80C03E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E84u)) return;
    // 80C03E84: addi    r4, r4, 23104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23104);

label_80C03E88:
    ctx->pc = 0x80C03E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03E88: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C03E88u)) return;
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
label_80C03E8C:
    ctx->pc = 0x80C03E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E8Cu)) return;
    // 80C03E8C: bl      0x8045E570
    {
            ctx->lr = 0x80C03E90u;
            ctx->pc = 0x8045E570u;
            return;
    }

label_80C03E90:
    ctx->pc = 0x80C03E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03E90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03E94:
    ctx->pc = 0x80C03E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E94u)) return;
    // 80C03E94: bl      0x8045F220
    {
            ctx->lr = 0x80C03E98u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03E98:
    ctx->pc = 0x80C03E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C03E98: lis     r4, -28561
    ctx->gpr[4] = ((u32)(s32)(-28561) << 16);

label_80C03E9C:
    ctx->pc = 0x80C03E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03E9Cu)) return;
    // 80C03E9C: addi    r4, r4, -21656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21656);

label_80C03EA0:
    ctx->pc = 0x80C03EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EA0u)) return;
    // 80C03EA0: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80C03EA4:
    ctx->pc = 0x80C03EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EA4u)) return;
    // 80C03EA4: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80C03EA8:
    ctx->pc = 0x80C03EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EA8u)) return;
    // 80C03EA8: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C03EAC:
    ctx->pc = 0x80C03EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EACu)) return;
    // 80C03EAC: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C03EB0:
    ctx->pc = 0x80C03EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C03EB0: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C03EB0u)) return;
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
label_80C03EB4:
    ctx->pc = 0x80C03EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EB4u)) return;
    // 80C03EB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C03EB8:
    ctx->pc = 0x80C03EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EB8u)) return;
    // 80C03EB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C03EBC:
    ctx->pc = 0x80C03EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EBCu)) return;
    // 80C03EBC: bl      0x8045EBE4
    {
            ctx->lr = 0x80C03EC0u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C03EC0:
    ctx->pc = 0x80C03EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C03EC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03EC4:
    ctx->pc = 0x80C03EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EC4u)) return;
    // 80C03EC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C03EC8:
    ctx->pc = 0x80C03EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EC8u)) return;
    // 80C03EC8: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C03ECC:
    ctx->pc = 0x80C03ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03ECCu)) return;
    // 80C03ECC: addi    r5, r5, 23108
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23108);

label_80C03ED0:
    ctx->pc = 0x80C03ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C03ED0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C03ED0u)) return;
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
label_80C03ED4:
    ctx->pc = 0x80C03ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03ED4u)) return;
    // 80C03ED4: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C03ED8:
    ctx->pc = 0x80C03ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03ED8u)) return;
    // 80C03ED8: addi    r5, r5, 23112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23112);

label_80C03EDC:
    ctx->pc = 0x80C03EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03EDC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C03EDCu)) return;
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
label_80C03EE0:
    ctx->pc = 0x80C03EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EE0u)) return;
    // 80C03EE0: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C03EE4:
    ctx->pc = 0x80C03EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EE4u)) return;
    // 80C03EE4: addi    r5, r5, 23116
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23116);

label_80C03EE8:
    ctx->pc = 0x80C03EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03EE8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C03EE8u)) return;
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
label_80C03EEC:
    ctx->pc = 0x80C03EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EECu)) return;
    // 80C03EEC: bl      0x8045C750
    {
            ctx->lr = 0x80C03EF0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C03EF0:
    ctx->pc = 0x80C03EF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03EF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C03EF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03EF4:
    ctx->pc = 0x80C03EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EF4u)) return;
    // 80C03EF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C03EF8:
    ctx->pc = 0x80C03EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EF8u)) return;
    // 80C03EF8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C03EFC:
    ctx->pc = 0x80C03EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03EFCu)) return;
    // 80C03EFC: addi    r5, r6, -216
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-216);

label_80C03F00:
    ctx->pc = 0x80C03F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F00u)) return;
    // 80C03F00: addi    r6, r6, -4500
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4500);

label_80C03F04:
    ctx->pc = 0x80C03F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F04u)) return;
    // 80C03F04: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C03F08:
    ctx->pc = 0x80C03F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F08u)) return;
    // 80C03F08: bl      0x8045C7B4
    {
            ctx->lr = 0x80C03F0Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C03F0C:
    ctx->pc = 0x80C03F0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03F0C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80C03F10:
    ctx->pc = 0x80C03F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F10u)) return;
    // 80C03F10: bl      0x8045F7C8
    {
            ctx->lr = 0x80C03F14u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C03F14:
    ctx->pc = 0x80C03F14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03F14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03F18:
    ctx->pc = 0x80C03F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F18u)) return;
    // 80C03F18: bl      0x8045F220
    {
            ctx->lr = 0x80C03F1Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03F1C:
    ctx->pc = 0x80C03F1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C03F1C: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03F20:
    ctx->pc = 0x80C03F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F20u)) return;
    // 80C03F20: addi    r4, r4, 30548
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30548);

label_80C03F24:
    ctx->pc = 0x80C03F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F24u)) return;
    // 80C03F24: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80C03F28:
    ctx->pc = 0x80C03F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F28u)) return;
    // 80C03F28: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80C03F2C:
    ctx->pc = 0x80C03F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F2Cu)) return;
    // 80C03F2C: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C03F30:
    ctx->pc = 0x80C03F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F30u)) return;
    // 80C03F30: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C03F34:
    ctx->pc = 0x80C03F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C03F34: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C03F34u)) return;
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
label_80C03F38:
    ctx->pc = 0x80C03F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F38u)) return;
    // 80C03F38: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C03F3C:
    ctx->pc = 0x80C03F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F3Cu)) return;
    // 80C03F3C: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C03F40:
    ctx->pc = 0x80C03F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F40u)) return;
    // 80C03F40: bl      0x8045EBE4
    {
            ctx->lr = 0x80C03F44u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C03F44:
    ctx->pc = 0x80C03F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03F44: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C03F48:
    ctx->pc = 0x80C03F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F48u)) return;
    // 80C03F48: bl      0x8045F7C8
    {
            ctx->lr = 0x80C03F4Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C03F4C:
    ctx->pc = 0x80C03F4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C03F4C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03F50:
    ctx->pc = 0x80C03F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F50u)) return;
    // 80C03F50: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80C03F54:
    ctx->pc = 0x80C03F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F54u)) return;
    // 80C03F54: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C03F58:
    ctx->pc = 0x80C03F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F58u)) return;
    // 80C03F58: addi    r5, r5, 23120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23120);

label_80C03F5C:
    ctx->pc = 0x80C03F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C03F5C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C03F5Cu)) return;
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
label_80C03F60:
    ctx->pc = 0x80C03F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F60u)) return;
    // 80C03F60: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C03F64:
    ctx->pc = 0x80C03F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F64u)) return;
    // 80C03F64: addi    r5, r5, 23124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23124);

label_80C03F68:
    ctx->pc = 0x80C03F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C03F68: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C03F68u)) return;
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
label_80C03F6C:
    ctx->pc = 0x80C03F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F6Cu)) return;
    // 80C03F6C: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C03F70:
    ctx->pc = 0x80C03F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F70u)) return;
    // 80C03F70: addi    r5, r5, 23128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23128);

label_80C03F74:
    ctx->pc = 0x80C03F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03F74: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C03F74u)) return;
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
label_80C03F78:
    ctx->pc = 0x80C03F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F78u)) return;
    // 80C03F78: bl      0x8045C750
    {
            ctx->lr = 0x80C03F7Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C03F7C:
    ctx->pc = 0x80C03F7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C03F7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03F80:
    ctx->pc = 0x80C03F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F80u)) return;
    // 80C03F80: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_80C03F84:
    ctx->pc = 0x80C03F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F84u)) return;
    // 80C03F84: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C03F88:
    ctx->pc = 0x80C03F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F88u)) return;
    // 80C03F88: addi    r5, r6, -216
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-216);

label_80C03F8C:
    ctx->pc = 0x80C03F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F8Cu)) return;
    // 80C03F8C: addi    r6, r6, -26772
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26772);

label_80C03F90:
    ctx->pc = 0x80C03F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F90u)) return;
    // 80C03F90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C03F94:
    ctx->pc = 0x80C03F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F94u)) return;
    // 80C03F94: bl      0x8045C7B4
    {
            ctx->lr = 0x80C03F98u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C03F98:
    ctx->pc = 0x80C03F98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03F98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03F98: li      r3, 50
    ctx->gpr[3] = (u32)(s32)(50);

label_80C03F9C:
    ctx->pc = 0x80C03F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03F9Cu)) return;
    // 80C03F9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C03FA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C03FA0:
    ctx->pc = 0x80C03FA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03FA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03FA4:
    ctx->pc = 0x80C03FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FA4u)) return;
    // 80C03FA4: bl      0x8045F220
    {
            ctx->lr = 0x80C03FA8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03FA8:
    ctx->pc = 0x80C03FA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C03FA8: bl      0x8045C034
    {
            ctx->lr = 0x80C03FACu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C03FAC:
    ctx->pc = 0x80C03FACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03FAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03FB0:
    ctx->pc = 0x80C03FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FB0u)) return;
    // 80C03FB0: bl      0x8045F220
    {
            ctx->lr = 0x80C03FB4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C03FB4:
    ctx->pc = 0x80C03FB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C03FB4: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03FB8:
    ctx->pc = 0x80C03FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FB8u)) return;
    // 80C03FB8: addi    r4, r4, 23760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23760);

label_80C03FBC:
    ctx->pc = 0x80C03FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FBCu)) return;
    // 80C03FBC: bl      0x8045C060
    {
            ctx->lr = 0x80C03FC0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C03FC0:
    ctx->pc = 0x80C03FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03FC0: li      r3, 977
    ctx->gpr[3] = (u32)(s32)(977);

label_80C03FC4:
    ctx->pc = 0x80C03FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FC4u)) return;
    // 80C03FC4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C03FC8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C03FC8:
    ctx->pc = 0x80C03FC8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FC8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C03FC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03FCC:
    ctx->pc = 0x80C03FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FCCu)) return;
    // 80C03FCC: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C03FD0:
    ctx->pc = 0x80C03FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FD0u)) return;
    // 80C03FD0: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C03FD4:
    ctx->pc = 0x80C03FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C03FD4: lwz     r0, 0(r4)
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
label_80C03FD8:
    ctx->pc = 0x80C03FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FD8u)) return;
    // 80C03FD8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C03FDC:
    ctx->pc = 0x80C03FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FDCu)) return;
    // 80C03FDC: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C03FE0:
    ctx->pc = 0x80C03FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FE0u)) return;
    // 80C03FE0: addi    r4, r4, 23712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23712);

label_80C03FE4:
    ctx->pc = 0x80C03FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C03FE4: lwzx    r4, r4, r0
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
label_80C03FE8:
    ctx->pc = 0x80C03FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C03FE8: lwz     r4, 0(r4)
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
label_80C03FEC:
    ctx->pc = 0x80C03FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FECu)) return;
    // 80C03FEC: bl      0x8045F608
    {
            ctx->lr = 0x80C03FF0u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C03FF0:
    ctx->pc = 0x80C03FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C03FF0: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80C03FF4:
    ctx->pc = 0x80C03FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FF4u)) return;
    // 80C03FF4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C03FF8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C03FF8:
    ctx->pc = 0x80C03FF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C03FF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C03FF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C03FFC:
    ctx->pc = 0x80C03FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C03FFCu)) return;
    // 80C03FFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C04000:
    ctx->pc = 0x80C04000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04000u)) return;
    // 80C04000: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C04004:
    ctx->pc = 0x80C04004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04004u)) return;
    // 80C04004: addi    r5, r5, 23132
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23132);

label_80C04008:
    ctx->pc = 0x80C04008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04008: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C04008u)) return;
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
label_80C0400C:
    ctx->pc = 0x80C0400Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0400Cu)) return;
    // 80C0400C: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C04010:
    ctx->pc = 0x80C04010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04010u)) return;
    // 80C04010: addi    r5, r5, 23136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23136);

label_80C04014:
    ctx->pc = 0x80C04014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04014: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C04014u)) return;
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
label_80C04018:
    ctx->pc = 0x80C04018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04018u)) return;
    // 80C04018: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C0401C:
    ctx->pc = 0x80C0401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0401Cu)) return;
    // 80C0401C: addi    r5, r5, 23140
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23140);

label_80C04020:
    ctx->pc = 0x80C04020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04020u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04020: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C04020u)) return;
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
label_80C04024:
    ctx->pc = 0x80C04024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04024u)) return;
    // 80C04024: bl      0x8045C750
    {
            ctx->lr = 0x80C04028u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C04028:
    ctx->pc = 0x80C04028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04028: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C0402C:
    ctx->pc = 0x80C0402Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0402Cu)) return;
    // 80C0402C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C04030:
    ctx->pc = 0x80C04030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04030u)) return;
    // 80C04030: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C04034:
    ctx->pc = 0x80C04034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04034u)) return;
    // 80C04034: addi    r5, r6, -2008
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2008);

label_80C04038:
    ctx->pc = 0x80C04038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04038u)) return;
    // 80C04038: addi    r6, r6, -4756
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4756);

label_80C0403C:
    ctx->pc = 0x80C0403Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0403Cu)) return;
    // 80C0403C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C04040:
    ctx->pc = 0x80C04040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04040u)) return;
    // 80C04040: bl      0x8045C7B4
    {
            ctx->lr = 0x80C04044u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C04044:
    ctx->pc = 0x80C04044u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04044u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C04044: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C04048:
    ctx->pc = 0x80C04048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04048u)) return;
    // 80C04048: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_80C0404C:
    ctx->pc = 0x80C0404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0404Cu)) return;
    // 80C0404C: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C04050:
    ctx->pc = 0x80C04050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04050u)) return;
    // 80C04050: addi    r5, r5, 23144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23144);

label_80C04054:
    ctx->pc = 0x80C04054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04054: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C04054u)) return;
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
label_80C04058:
    ctx->pc = 0x80C04058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04058u)) return;
    // 80C04058: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C0405C:
    ctx->pc = 0x80C0405Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0405Cu)) return;
    // 80C0405C: addi    r5, r5, 23148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23148);

label_80C04060:
    ctx->pc = 0x80C04060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04060u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04060: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C04060u)) return;
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
label_80C04064:
    ctx->pc = 0x80C04064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04064u)) return;
    // 80C04064: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C04068:
    ctx->pc = 0x80C04068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04068u)) return;
    // 80C04068: addi    r5, r5, 23152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23152);

label_80C0406C:
    ctx->pc = 0x80C0406Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0406Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C0406C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C0406Cu)) return;
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
label_80C04070:
    ctx->pc = 0x80C04070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04070u)) return;
    // 80C04070: bl      0x8045C750
    {
            ctx->lr = 0x80C04074u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C04074:
    ctx->pc = 0x80C04074u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04074u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04074: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C04078:
    ctx->pc = 0x80C04078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04078u)) return;
    // 80C04078: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80C0407C:
    ctx->pc = 0x80C0407Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0407Cu)) return;
    // 80C0407C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C04080:
    ctx->pc = 0x80C04080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04080u)) return;
    // 80C04080: addi    r5, r6, -2008
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2008);

label_80C04084:
    ctx->pc = 0x80C04084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04084u)) return;
    // 80C04084: addi    r6, r6, -3610
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-3610);

label_80C04088:
    ctx->pc = 0x80C04088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04088u)) return;
    // 80C04088: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C0408C:
    ctx->pc = 0x80C0408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0408Cu)) return;
    // 80C0408C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C04090u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C04090:
    ctx->pc = 0x80C04090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04090: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C04094:
    ctx->pc = 0x80C04094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04094u)) return;
    // 80C04094: bl      0x8045F7C8
    {
            ctx->lr = 0x80C04098u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C04098:
    ctx->pc = 0x80C04098u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04098u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C04098: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C0409C:
    ctx->pc = 0x80C0409Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0409Cu)) return;
    // 80C0409C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C040A0:
    ctx->pc = 0x80C040A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040A0u)) return;
    // 80C040A0: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C040A4:
    ctx->pc = 0x80C040A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040A4u)) return;
    // 80C040A4: addi    r5, r5, 23120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23120);

label_80C040A8:
    ctx->pc = 0x80C040A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C040A8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C040A8u)) return;
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
label_80C040AC:
    ctx->pc = 0x80C040ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040ACu)) return;
    // 80C040AC: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C040B0:
    ctx->pc = 0x80C040B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040B0u)) return;
    // 80C040B0: addi    r5, r5, 23124
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23124);

label_80C040B4:
    ctx->pc = 0x80C040B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C040B4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C040B4u)) return;
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
label_80C040B8:
    ctx->pc = 0x80C040B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040B8u)) return;
    // 80C040B8: lis     r5, -27479
    ctx->gpr[5] = ((u32)(s32)(-27479) << 16);

label_80C040BC:
    ctx->pc = 0x80C040BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040BCu)) return;
    // 80C040BC: addi    r5, r5, 23128
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23128);

label_80C040C0:
    ctx->pc = 0x80C040C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C040C0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C040C0u)) return;
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
label_80C040C4:
    ctx->pc = 0x80C040C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040C4u)) return;
    // 80C040C4: bl      0x8045C750
    {
            ctx->lr = 0x80C040C8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C040C8:
    ctx->pc = 0x80C040C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C040C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C040C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C040CC:
    ctx->pc = 0x80C040CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040CCu)) return;
    // 80C040CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C040D0:
    ctx->pc = 0x80C040D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040D0u)) return;
    // 80C040D0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C040D4:
    ctx->pc = 0x80C040D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040D4u)) return;
    // 80C040D4: addi    r5, r6, -216
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-216);

label_80C040D8:
    ctx->pc = 0x80C040D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040D8u)) return;
    // 80C040D8: addi    r6, r6, -26772
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26772);

label_80C040DC:
    ctx->pc = 0x80C040DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040DCu)) return;
    // 80C040DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C040E0:
    ctx->pc = 0x80C040E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040E0u)) return;
    // 80C040E0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C040E4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C040E4:
    ctx->pc = 0x80C040E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C040E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C040E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C040E8:
    ctx->pc = 0x80C040E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040E8u)) return;
    // 80C040E8: bl      0x8045F220
    {
            ctx->lr = 0x80C040ECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C040EC:
    ctx->pc = 0x80C040ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C040ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C040EC: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C040F0:
    ctx->pc = 0x80C040F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040F0u)) return;
    // 80C040F0: addi    r4, r4, 23764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23764);

label_80C040F4:
    ctx->pc = 0x80C040F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040F4u)) return;
    // 80C040F4: bl      0x8045C060
    {
            ctx->lr = 0x80C040F8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C040F8:
    ctx->pc = 0x80C040F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C040F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C040F8: li      r3, 978
    ctx->gpr[3] = (u32)(s32)(978);

label_80C040FC:
    ctx->pc = 0x80C040FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C040FCu)) return;
    // 80C040FC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C04100u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C04100:
    ctx->pc = 0x80C04100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C04100: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C04104:
    ctx->pc = 0x80C04104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04104u)) return;
    // 80C04104: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C04108:
    ctx->pc = 0x80C04108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04108u)) return;
    // 80C04108: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C0410C:
    ctx->pc = 0x80C0410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0410Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C0410C: lwz     r0, 0(r4)
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
label_80C04110:
    ctx->pc = 0x80C04110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04110u)) return;
    // 80C04110: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C04114:
    ctx->pc = 0x80C04114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04114u)) return;
    // 80C04114: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C04118:
    ctx->pc = 0x80C04118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04118u)) return;
    // 80C04118: addi    r4, r4, 23712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23712);

label_80C0411C:
    ctx->pc = 0x80C0411Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0411Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0411C: lwzx    r4, r4, r0
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
label_80C04120:
    ctx->pc = 0x80C04120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04120: lwz     r4, 4(r4)
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
label_80C04124:
    ctx->pc = 0x80C04124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04124u)) return;
    // 80C04124: bl      0x8045F608
    {
            ctx->lr = 0x80C04128u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C04128:
    ctx->pc = 0x80C04128u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04128u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04128: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C0412C:
    ctx->pc = 0x80C0412Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0412Cu)) return;
    // 80C0412C: bl      0x8045F220
    {
            ctx->lr = 0x80C04130u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C04130:
    ctx->pc = 0x80C04130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C04130: lis     r4, -27478
    ctx->gpr[4] = ((u32)(s32)(-27478) << 16);

label_80C04134:
    ctx->pc = 0x80C04134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04134u)) return;
    // 80C04134: addi    r4, r4, -22056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22056);

label_80C04138:
    ctx->pc = 0x80C04138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04138u)) return;
    // 80C04138: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80C0413C:
    ctx->pc = 0x80C0413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0413Cu)) return;
    // 80C0413C: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80C04140:
    ctx->pc = 0x80C04140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04140u)) return;
    // 80C04140: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C04144:
    ctx->pc = 0x80C04144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04144u)) return;
    // 80C04144: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C04148:
    ctx->pc = 0x80C04148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04148: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C04148u)) return;
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
label_80C0414C:
    ctx->pc = 0x80C0414Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0414Cu)) return;
    // 80C0414C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C04150:
    ctx->pc = 0x80C04150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04150u)) return;
    // 80C04150: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_80C04154:
    ctx->pc = 0x80C04154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04154u)) return;
    // 80C04154: bl      0x8045EBE4
    {
            ctx->lr = 0x80C04158u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C04158:
    ctx->pc = 0x80C04158u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04158u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04158: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80C0415C:
    ctx->pc = 0x80C0415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0415Cu)) return;
    // 80C0415C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C04160u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C04160:
    ctx->pc = 0x80C04160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C04164:
    ctx->pc = 0x80C04164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04164u)) return;
    // 80C04164: bl      0x8045F220
    {
            ctx->lr = 0x80C04168u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C04168:
    ctx->pc = 0x80C04168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C04168: lis     r4, -27478
    ctx->gpr[4] = ((u32)(s32)(-27478) << 16);

label_80C0416C:
    ctx->pc = 0x80C0416Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0416Cu)) return;
    // 80C0416C: addi    r4, r4, 1520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1520);

label_80C04170:
    ctx->pc = 0x80C04170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04170u)) return;
    // 80C04170: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80C04174:
    ctx->pc = 0x80C04174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04174u)) return;
    // 80C04174: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80C04178:
    ctx->pc = 0x80C04178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04178u)) return;
    // 80C04178: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C0417C:
    ctx->pc = 0x80C0417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0417Cu)) return;
    // 80C0417C: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C04180:
    ctx->pc = 0x80C04180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04180: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C04180u)) return;
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
label_80C04184:
    ctx->pc = 0x80C04184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04184u)) return;
    // 80C04184: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C04188:
    ctx->pc = 0x80C04188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04188u)) return;
    // 80C04188: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C0418C:
    ctx->pc = 0x80C0418Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0418Cu)) return;
    // 80C0418C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C04190u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C04190:
    ctx->pc = 0x80C04190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04190: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C04194:
    ctx->pc = 0x80C04194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04194u)) return;
    // 80C04194: bl      0x8045F7C8
    {
            ctx->lr = 0x80C04198u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C04198:
    ctx->pc = 0x80C04198u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04198u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04198: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C0419C:
    ctx->pc = 0x80C0419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0419Cu)) return;
    // 80C0419C: bl      0x8045F220
    {
            ctx->lr = 0x80C041A0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C041A0:
    ctx->pc = 0x80C041A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C041A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C041A0: lis     r4, -27478
    ctx->gpr[4] = ((u32)(s32)(-27478) << 16);

label_80C041A4:
    ctx->pc = 0x80C041A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041A4u)) return;
    // 80C041A4: addi    r4, r4, 12596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12596);

label_80C041A8:
    ctx->pc = 0x80C041A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041A8u)) return;
    // 80C041A8: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80C041AC:
    ctx->pc = 0x80C041ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041ACu)) return;
    // 80C041AC: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80C041B0:
    ctx->pc = 0x80C041B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041B0u)) return;
    // 80C041B0: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C041B4:
    ctx->pc = 0x80C041B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041B4u)) return;
    // 80C041B4: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C041B8:
    ctx->pc = 0x80C041B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C041B8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C041B8u)) return;
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
label_80C041BC:
    ctx->pc = 0x80C041BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041BCu)) return;
    // 80C041BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C041C0:
    ctx->pc = 0x80C041C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041C0u)) return;
    // 80C041C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C041C4:
    ctx->pc = 0x80C041C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041C4u)) return;
    // 80C041C4: bl      0x8045EBE4
    {
            ctx->lr = 0x80C041C8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C041C8:
    ctx->pc = 0x80C041C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C041C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C041C8: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C041CC:
    ctx->pc = 0x80C041CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041CCu)) return;
    // 80C041CC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C041D0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C041D0:
    ctx->pc = 0x80C041D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C041D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C041D0: bl      0x8045F32C
    {
            ctx->lr = 0x80C041D4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C041D4:
    ctx->pc = 0x80C041D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C041D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C041D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C041D8:
    ctx->pc = 0x80C041D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041D8u)) return;
    // 80C041D8: bl      0x8045F220
    {
            ctx->lr = 0x80C041DCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C041DC:
    ctx->pc = 0x80C041DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C041DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C041DC: lis     r4, -28559
    ctx->gpr[4] = ((u32)(s32)(-28559) << 16);

label_80C041E0:
    ctx->pc = 0x80C041E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041E0u)) return;
    // 80C041E0: addi    r4, r4, -3448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3448);

label_80C041E4:
    ctx->pc = 0x80C041E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041E4u)) return;
    // 80C041E4: lis     r5, -28566
    ctx->gpr[5] = ((u32)(s32)(-28566) << 16);

label_80C041E8:
    ctx->pc = 0x80C041E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041E8u)) return;
    // 80C041E8: addi    r5, r5, -3828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-3828);

label_80C041EC:
    ctx->pc = 0x80C041ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041ECu)) return;
    // 80C041EC: lis     r6, -27479
    ctx->gpr[6] = ((u32)(s32)(-27479) << 16);

label_80C041F0:
    ctx->pc = 0x80C041F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041F0u)) return;
    // 80C041F0: addi    r6, r6, 23080
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(23080);

label_80C041F4:
    ctx->pc = 0x80C041F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C041F4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C041F4u)) return;
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
label_80C041F8:
    ctx->pc = 0x80C041F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041F8u)) return;
    // 80C041F8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C041FC:
    ctx->pc = 0x80C041FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C041FCu)) return;
    // 80C041FC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80C04200:
    ctx->pc = 0x80C04200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04200u)) return;
    // 80C04200: bl      0x8045EBE4
    {
            ctx->lr = 0x80C04204u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C04204:
    ctx->pc = 0x80C04204u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04204u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04204: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C04208:
    ctx->pc = 0x80C04208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04208u)) return;
    // 80C04208: bl      0x8045F7C8
    {
            ctx->lr = 0x80C0420Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C0420C:
    ctx->pc = 0x80C0420Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0420Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C0420C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C04210:
    ctx->pc = 0x80C04210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04210u)) return;
    // 80C04210: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C04214:
    ctx->pc = 0x80C04214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04214u)) return;
    // 80C04214: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C04218:
    ctx->pc = 0x80C04218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04218: lwz     r0, 0(r4)
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
label_80C0421C:
    ctx->pc = 0x80C0421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0421Cu)) return;
    // 80C0421C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C04220:
    ctx->pc = 0x80C04220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04220u)) return;
    // 80C04220: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C04224:
    ctx->pc = 0x80C04224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04224u)) return;
    // 80C04224: addi    r4, r4, 23712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23712);

label_80C04228:
    ctx->pc = 0x80C04228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04228: lwzx    r4, r4, r0
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
label_80C0422C:
    ctx->pc = 0x80C0422Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0422Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C0422C: lwz     r4, 8(r4)
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
label_80C04230:
    ctx->pc = 0x80C04230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04230u)) return;
    // 80C04230: bl      0x8045F608
    {
            ctx->lr = 0x80C04234u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C04234:
    ctx->pc = 0x80C04234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04234: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C04238:
    ctx->pc = 0x80C04238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04238u)) return;
    // 80C04238: bl      0x8045F7C8
    {
            ctx->lr = 0x80C0423Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C0423C:
    ctx->pc = 0x80C0423Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0423Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C0423C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C04240:
    ctx->pc = 0x80C04240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04240u)) return;
    // 80C04240: bl      0x8045F220
    {
            ctx->lr = 0x80C04244u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C04244:
    ctx->pc = 0x80C04244u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04244u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04244: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C04248:
    ctx->pc = 0x80C04248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04248u)) return;
    // 80C04248: addi    r4, r4, 23768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23768);

label_80C0424C:
    ctx->pc = 0x80C0424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0424Cu)) return;
    // 80C0424C: bl      0x8045C060
    {
            ctx->lr = 0x80C04250u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C04250:
    ctx->pc = 0x80C04250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04250: li      r3, 979
    ctx->gpr[3] = (u32)(s32)(979);

label_80C04254:
    ctx->pc = 0x80C04254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04254u)) return;
    // 80C04254: bl      0x8045BFA0
    {
            ctx->lr = 0x80C04258u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C04258:
    ctx->pc = 0x80C04258u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04258u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C04258: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C0425C:
    ctx->pc = 0x80C0425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0425Cu)) return;
    // 80C0425C: lis     r4, -28634
    ctx->gpr[4] = ((u32)(s32)(-28634) << 16);

label_80C04260:
    ctx->pc = 0x80C04260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04260u)) return;
    // 80C04260: addi    r4, r4, -5392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5392);

label_80C04264:
    ctx->pc = 0x80C04264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04264: lwz     r0, 0(r4)
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
label_80C04268:
    ctx->pc = 0x80C04268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04268u)) return;
    // 80C04268: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C0426C:
    ctx->pc = 0x80C0426Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0426Cu)) return;
    // 80C0426C: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C04270:
    ctx->pc = 0x80C04270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04270u)) return;
    // 80C04270: addi    r4, r4, 23712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23712);

label_80C04274:
    ctx->pc = 0x80C04274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04274: lwzx    r4, r4, r0
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
label_80C04278:
    ctx->pc = 0x80C04278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04278: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C0427C:
    ctx->pc = 0x80C0427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0427Cu)) return;
    // 80C0427C: bl      0x8045F608
    {
            ctx->lr = 0x80C04280u;
            ctx->pc = 0x8045F608u;
            return;
    }

label_80C04280:
    ctx->pc = 0x80C04280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04280: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80C04284:
    ctx->pc = 0x80C04284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04284u)) return;
    // 80C04284: bl      0x8045F7C8
    {
            ctx->lr = 0x80C04288u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C04288:
    ctx->pc = 0x80C04288u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04288u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04288: bl      0x8045F32C
    {
            ctx->lr = 0x80C0428Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C0428C:
    ctx->pc = 0x80C0428Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0428Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C0428C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80C04290:
    ctx->pc = 0x80C04290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04290u)) return;
    // 80C04290: bl      0x8045F7C8
    {
            ctx->lr = 0x80C04294u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C04294:
    ctx->pc = 0x80C04294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04294: b       0x80C04308
    {
            goto label_80C04308;
    }

label_80C04298:
    ctx->pc = 0x80C04298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04298: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C0429C:
    ctx->pc = 0x80C0429Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0429Cu)) return;
    // 80C0429C: bl      0x8045EC10
    {
            ctx->lr = 0x80C042A0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C042A0:
    ctx->pc = 0x80C042A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C042A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C042A0: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C042A4:
    ctx->pc = 0x80C042A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042A4u)) return;
    // 80C042A4: addi    r3, r3, -25696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25696);

label_80C042A8:
    ctx->pc = 0x80C042A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042A8u)) return;
    // 80C042A8: bl      0x8045F070
    {
            ctx->lr = 0x80C042ACu;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C042AC:
    ctx->pc = 0x80C042ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C042ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C042AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C042B0:
    ctx->pc = 0x80C042B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042B0u)) return;
    // 80C042B0: bl      0x8045F220
    {
            ctx->lr = 0x80C042B4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C042B4:
    ctx->pc = 0x80C042B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C042B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C042B4: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C042B8:
    ctx->pc = 0x80C042B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042B8u)) return;
    // 80C042B8: addi    r4, r4, 23096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23096);

label_80C042BC:
    ctx->pc = 0x80C042BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C042BC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C042BCu)) return;
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
label_80C042C0:
    ctx->pc = 0x80C042C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042C0u)) return;
    // 80C042C0: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C042C4:
    ctx->pc = 0x80C042C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042C4u)) return;
    // 80C042C4: addi    r4, r4, 23088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23088);

label_80C042C8:
    ctx->pc = 0x80C042C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C042C8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C042C8u)) return;
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
label_80C042CC:
    ctx->pc = 0x80C042CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042CCu)) return;
    // 80C042CC: lis     r4, -27479
    ctx->gpr[4] = ((u32)(s32)(-27479) << 16);

label_80C042D0:
    ctx->pc = 0x80C042D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042D0u)) return;
    // 80C042D0: addi    r4, r4, 23100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23100);

label_80C042D4:
    ctx->pc = 0x80C042D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C042D4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C042D4u)) return;
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
label_80C042D8:
    ctx->pc = 0x80C042D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042D8u)) return;
    // 80C042D8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C042DCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C042DC:
    ctx->pc = 0x80C042DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C042DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C042DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C042E0:
    ctx->pc = 0x80C042E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042E0u)) return;
    // 80C042E0: bl      0x8045F220
    {
            ctx->lr = 0x80C042E4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C042E4:
    ctx->pc = 0x80C042E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C042E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C042E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C042E8:
    ctx->pc = 0x80C042E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042E8u)) return;
    // 80C042E8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C042EC:
    ctx->pc = 0x80C042ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042ECu)) return;
    // 80C042EC: addi    r5, r5, -31298
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31298);

label_80C042F0:
    ctx->pc = 0x80C042F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042F0u)) return;
    // 80C042F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C042F4:
    ctx->pc = 0x80C042F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042F4u)) return;
    // 80C042F4: bl      0x8045EEA8
    {
            ctx->lr = 0x80C042F8u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C042F8:
    ctx->pc = 0x80C042F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C042F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C042F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C042FC:
    ctx->pc = 0x80C042FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C042FCu)) return;
    // 80C042FC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C04300u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C04300:
    ctx->pc = 0x80C04300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04300: bl      0x8045DE34
    {
            ctx->lr = 0x80C04304u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C04304:
    ctx->pc = 0x80C04304u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04304u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04304: bl      0x80460A80
    {
            ctx->lr = 0x80C04308u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C04308:
    ctx->pc = 0x80C04308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04308: lwz     r0, 20(r1)
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
label_80C0430C:
    ctx->pc = 0x80C0430Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C0430Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0430C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04310:
    ctx->pc = 0x80C04310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04310u)) return;
    // 80C04310: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04314:
    ctx->pc = 0x80C04314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04314u)) return;
    // 80C04314: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04318:
    ctx->pc = 0x80C04318u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04318u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04318: stwu     r1, -16(r1)
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
label_80C0431C:
    ctx->pc = 0x80C0431Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0431Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C0431C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04320:
    ctx->pc = 0x80C04320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04320: stw     r0, 20(r1)
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
label_80C04324:
    ctx->pc = 0x80C04324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04324: lwz     r3, 32(r3)
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
label_80C04328:
    ctx->pc = 0x80C04328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04328u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04328: lwz     r3, 16(r3)
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
label_80C0432C:
    ctx->pc = 0x80C0432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0432Cu)) return;
    // 80C0432C: bl      0x80509CF0
    {
            ctx->lr = 0x80C04330u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C04330:
    ctx->pc = 0x80C04330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04330: lwz     r0, 20(r1)
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
label_80C04334:
    ctx->pc = 0x80C04334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04334: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04338:
    ctx->pc = 0x80C04338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04338u)) return;
    // 80C04338: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C0433C:
    ctx->pc = 0x80C0433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0433Cu)) return;
    // 80C0433C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04340:
    ctx->pc = 0x80C04340u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04340u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C04340: stwu     r1, -32(r1)
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
label_80C04344:
    ctx->pc = 0x80C04344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C04344: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04348:
    ctx->pc = 0x80C04348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04348: stw     r0, 36(r1)
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
label_80C0434C:
    ctx->pc = 0x80C0434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0434Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C0434C: stw     r31, 28(r1)
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
label_80C04350:
    ctx->pc = 0x80C04350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04350: stw     r30, 24(r1)
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
label_80C04354:
    ctx->pc = 0x80C04354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04354: stw     r29, 20(r1)
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
label_80C04358:
    ctx->pc = 0x80C04358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04358: lwz     r31, 32(r3)
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
label_80C0435C:
    ctx->pc = 0x80C0435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0435Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C0435C: lwz     r30, 16(r31)
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
label_80C04360:
    ctx->pc = 0x80C04360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04360: lwz     r5, 28(r31)
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
label_80C04364:
    ctx->pc = 0x80C04364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04364u)) return;
    // 80C04364: cmpwi   r5, 0
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

label_80C04368:
    ctx->pc = 0x80C04368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04368u)) return;
    // 80C04368: bc    4, 1, 0x80C043A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C043A0;
        }
    }

label_80C0436C:
    ctx->pc = 0x80C0436Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0436Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C0436C: lwz     r4, 24(r31)
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
label_80C04370:
    ctx->pc = 0x80C04370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04370u)) return;
    // 80C04370: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C04374:
    ctx->pc = 0x80C04374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C04374: lwz     r0, 20(r31)
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
label_80C04378:
    ctx->pc = 0x80C04378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C04378u)) return;
    // 80C04378: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C0437C:
    ctx->pc = 0x80C0437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0437Cu)) return;
    // 80C0437C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C04380:
    ctx->pc = 0x80C04380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C04380u)) return;
    // 80C04380: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C04384:
    ctx->pc = 0x80C04384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04384u)) return;
    // 80C04384: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C04388:
    ctx->pc = 0x80C04388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04388u)) return;
    // 80C04388: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C0438C:
    ctx->pc = 0x80C0438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0438Cu)) return;
    // 80C0438C: bl      0x80509C74
    {
            ctx->lr = 0x80C04390u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C04390:
    ctx->pc = 0x80C04390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04390: stw     r29, 20(r31)
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
label_80C04394:
    ctx->pc = 0x80C04394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04394: lwz     r3, 28(r31)
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
label_80C04398:
    ctx->pc = 0x80C04398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04398u)) return;
    // 80C04398: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C0439C:
    ctx->pc = 0x80C0439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0439Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C0439C: stw     r0, 28(r31)
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
label_80C043A0:
    ctx->pc = 0x80C043A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C043A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C043A0: lwz     r5, 40(r31)
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
label_80C043A4:
    ctx->pc = 0x80C043A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043A4u)) return;
    // 80C043A4: cmpwi   r5, 0
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

label_80C043A8:
    ctx->pc = 0x80C043A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043A8u)) return;
    // 80C043A8: bc    4, 1, 0x80C043E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C043E0;
        }
    }

label_80C043AC:
    ctx->pc = 0x80C043ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C043ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C043AC: lwz     r4, 36(r31)
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
label_80C043B0:
    ctx->pc = 0x80C043B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043B0u)) return;
    // 80C043B0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C043B4:
    ctx->pc = 0x80C043B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C043B4: lwz     r0, 32(r31)
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
label_80C043B8:
    ctx->pc = 0x80C043B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C043B8u)) return;
    // 80C043B8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C043BC:
    ctx->pc = 0x80C043BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043BCu)) return;
    // 80C043BC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C043C0:
    ctx->pc = 0x80C043C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C043C0u)) return;
    // 80C043C0: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C043C4:
    ctx->pc = 0x80C043C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043C4u)) return;
    // 80C043C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C043C8:
    ctx->pc = 0x80C043C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043C8u)) return;
    // 80C043C8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C043CC:
    ctx->pc = 0x80C043CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043CCu)) return;
    // 80C043CC: bl      0x80509BF8
    {
            ctx->lr = 0x80C043D0u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C043D0:
    ctx->pc = 0x80C043D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C043D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C043D0: stw     r29, 32(r31)
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
label_80C043D4:
    ctx->pc = 0x80C043D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C043D4: lwz     r3, 40(r31)
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
label_80C043D8:
    ctx->pc = 0x80C043D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043D8u)) return;
    // 80C043D8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C043DC:
    ctx->pc = 0x80C043DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C043DC: stw     r0, 40(r31)
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
label_80C043E0:
    ctx->pc = 0x80C043E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C043E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C043E0: lwz     r5, 52(r31)
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
label_80C043E4:
    ctx->pc = 0x80C043E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043E4u)) return;
    // 80C043E4: cmpwi   r5, 0
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

label_80C043E8:
    ctx->pc = 0x80C043E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043E8u)) return;
    // 80C043E8: bc    4, 1, 0x80C04420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C04420;
        }
    }

label_80C043EC:
    ctx->pc = 0x80C043ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C043ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C043EC: lwz     r4, 48(r31)
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
label_80C043F0:
    ctx->pc = 0x80C043F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043F0u)) return;
    // 80C043F0: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C043F4:
    ctx->pc = 0x80C043F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C043F4: lwz     r0, 44(r31)
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
label_80C043F8:
    ctx->pc = 0x80C043F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C043F8u)) return;
    // 80C043F8: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C043FC:
    ctx->pc = 0x80C043FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C043FCu)) return;
    // 80C043FC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C04400:
    ctx->pc = 0x80C04400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C04400u)) return;
    // 80C04400: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C04404:
    ctx->pc = 0x80C04404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04404u)) return;
    // 80C04404: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C04408:
    ctx->pc = 0x80C04408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04408u)) return;
    // 80C04408: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C0440C:
    ctx->pc = 0x80C0440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0440Cu)) return;
    // 80C0440C: bl      0x80509B94
    {
            ctx->lr = 0x80C04410u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C04410:
    ctx->pc = 0x80C04410u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04410u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04410: stw     r29, 44(r31)
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
label_80C04414:
    ctx->pc = 0x80C04414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04414u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04414: lwz     r3, 52(r31)
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
label_80C04418:
    ctx->pc = 0x80C04418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04418u)) return;
    // 80C04418: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C0441C:
    ctx->pc = 0x80C0441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0441Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C0441C: stw     r0, 52(r31)
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
label_80C04420:
    ctx->pc = 0x80C04420u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04420u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04420: lwz     r31, 28(r1)
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
label_80C04424:
    ctx->pc = 0x80C04424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04424: lwz     r30, 24(r1)
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
label_80C04428:
    ctx->pc = 0x80C04428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04428: lwz     r29, 20(r1)
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
label_80C0442C:
    ctx->pc = 0x80C0442Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0442Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C0442C: lwz     r0, 36(r1)
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
label_80C04430:
    ctx->pc = 0x80C04430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04430: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04434:
    ctx->pc = 0x80C04434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04434u)) return;
    // 80C04434: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C04438:
    ctx->pc = 0x80C04438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04438u)) return;
    // 80C04438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C0443C:
    ctx->pc = 0x80C0443Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0443Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C0443C: stwu     r1, -32(r1)
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
label_80C04440:
    ctx->pc = 0x80C04440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C04440: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04444:
    ctx->pc = 0x80C04444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C04444: stw     r0, 36(r1)
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
label_80C04448:
    ctx->pc = 0x80C04448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04448: stw     r31, 28(r1)
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
label_80C0444C:
    ctx->pc = 0x80C0444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0444Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C0444C: stw     r30, 24(r1)
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
label_80C04450:
    ctx->pc = 0x80C04450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04450: stw     r29, 20(r1)
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
label_80C04454:
    ctx->pc = 0x80C04454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04454u)) return;
    // 80C04454: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C04458:
    ctx->pc = 0x80C04458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04458u)) return;
    // 80C04458: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C0445C:
    ctx->pc = 0x80C0445Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0445Cu)) return;
    // 80C0445C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C04460:
    ctx->pc = 0x80C04460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04460u)) return;
    // 80C04460: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C04464:
    ctx->pc = 0x80C04464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04464u)) return;
    // 80C04464: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C04468:
    ctx->pc = 0x80C04468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04468u)) return;
    // 80C04468: bl      0x8050FD60
    {
            ctx->lr = 0x80C0446Cu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C0446C:
    ctx->pc = 0x80C0446Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0446Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C0446C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C04470:
    ctx->pc = 0x80C04470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04470u)) return;
    // 80C04470: cmplwi  r31, 0x0000
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

label_80C04474:
    ctx->pc = 0x80C04474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04474u)) return;
    // 80C04474: bc    12, 2, 0x80C044D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C044D8;
        }
    }

label_80C04478:
    ctx->pc = 0x80C04478u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04478u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C04478: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C0447C:
    ctx->pc = 0x80C0447Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0447Cu)) return;
    // 80C0447C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04480:
    ctx->pc = 0x80C04480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04480u)) return;
    // 80C04480: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C04484:
    ctx->pc = 0x80C04484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04484u)) return;
    // 80C04484: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C04488:
    ctx->pc = 0x80C04488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04488u)) return;
    // 80C04488: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C0448C:
    ctx->pc = 0x80C0448Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0448Cu)) return;
    // 80C0448C: bl      0x8050A0D4
    {
            ctx->lr = 0x80C04490u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C04490:
    ctx->pc = 0x80C04490u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04490u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C04490: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80C04494:
    ctx->pc = 0x80C04494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04494u)) return;
    // 80C04494: addi    r0, r3, 17216
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17216);

label_80C04498:
    ctx->pc = 0x80C04498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04498u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C04498: stw     r0, 16(r31)
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
label_80C0449C:
    ctx->pc = 0x80C0449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0449Cu)) return;
    // 80C0449C: lis     r3, -32576
    ctx->gpr[3] = ((u32)(s32)(-32576) << 16);

label_80C044A0:
    ctx->pc = 0x80C044A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044A0u)) return;
    // 80C044A0: addi    r0, r3, 17176
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17176);

label_80C044A4:
    ctx->pc = 0x80C044A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C044A4: stw     r0, 24(r31)
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
label_80C044A8:
    ctx->pc = 0x80C044A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C044A8: lwz     r3, 32(r31)
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
label_80C044AC:
    ctx->pc = 0x80C044ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C044AC: stw     r31, 16(r3)
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
label_80C044B0:
    ctx->pc = 0x80C044B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044B0u)) return;
    // 80C044B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C044B4:
    ctx->pc = 0x80C044B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C044B4: stw     r0, 20(r3)
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
label_80C044B8:
    ctx->pc = 0x80C044B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C044B8: stw     r0, 24(r3)
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
label_80C044BC:
    ctx->pc = 0x80C044BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C044BC: stw     r0, 28(r3)
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
label_80C044C0:
    ctx->pc = 0x80C044C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C044C0: stw     r0, 32(r3)
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
label_80C044C4:
    ctx->pc = 0x80C044C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C044C4: stw     r0, 36(r3)
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
label_80C044C8:
    ctx->pc = 0x80C044C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C044C8: stw     r0, 40(r3)
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
label_80C044CC:
    ctx->pc = 0x80C044CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C044CC: stw     r0, 44(r3)
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
label_80C044D0:
    ctx->pc = 0x80C044D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C044D0: stw     r0, 48(r3)
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
label_80C044D4:
    ctx->pc = 0x80C044D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C044D4: stw     r0, 52(r3)
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
label_80C044D8:
    ctx->pc = 0x80C044D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C044D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C044D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C044DC:
    ctx->pc = 0x80C044DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C044DC: lwz     r31, 28(r1)
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
label_80C044E0:
    ctx->pc = 0x80C044E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C044E0: lwz     r30, 24(r1)
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
label_80C044E4:
    ctx->pc = 0x80C044E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C044E4: lwz     r29, 20(r1)
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
label_80C044E8:
    ctx->pc = 0x80C044E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C044E8: lwz     r0, 36(r1)
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
label_80C044EC:
    ctx->pc = 0x80C044ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C044ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C044EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C044F0:
    ctx->pc = 0x80C044F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044F0u)) return;
    // 80C044F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C044F4:
    ctx->pc = 0x80C044F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044F4u)) return;
    // 80C044F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C044F8:
    ctx->pc = 0x80C044F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C044F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C044F8: stwu     r1, -16(r1)
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
label_80C044FC:
    ctx->pc = 0x80C044FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C044FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C044FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04500:
    ctx->pc = 0x80C04500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04500: stw     r0, 20(r1)
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
label_80C04504:
    ctx->pc = 0x80C04504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04504: stw     r31, 12(r1)
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
label_80C04508:
    ctx->pc = 0x80C04508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04508: stw     r30, 8(r1)
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
label_80C0450C:
    ctx->pc = 0x80C0450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0450Cu)) return;
    // 80C0450C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C04510:
    ctx->pc = 0x80C04510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04510: lwz     r31, 32(r3)
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
label_80C04514:
    ctx->pc = 0x80C04514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04514: stw     r30, 24(r31)
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
label_80C04518:
    ctx->pc = 0x80C04518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04518: stw     r5, 28(r31)
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
label_80C0451C:
    ctx->pc = 0x80C0451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0451Cu)) return;
    // 80C0451C: cmpwi   r5, 0
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

label_80C04520:
    ctx->pc = 0x80C04520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04520u)) return;
    // 80C04520: bc    12, 1, 0x80C04530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C04530;
        }
    }

label_80C04524:
    ctx->pc = 0x80C04524u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04524u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04524: lwz     r3, 16(r31)
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
label_80C04528:
    ctx->pc = 0x80C04528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04528u)) return;
    // 80C04528: bl      0x80509C74
    {
            ctx->lr = 0x80C0452Cu;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C0452C:
    ctx->pc = 0x80C0452Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0452Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C0452C: stw     r30, 20(r31)
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
label_80C04530:
    ctx->pc = 0x80C04530u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04530u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04530: lwz     r31, 12(r1)
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
label_80C04534:
    ctx->pc = 0x80C04534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04534: lwz     r30, 8(r1)
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
label_80C04538:
    ctx->pc = 0x80C04538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04538: lwz     r0, 20(r1)
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
label_80C0453C:
    ctx->pc = 0x80C0453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C0453Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0453C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04540:
    ctx->pc = 0x80C04540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04540u)) return;
    // 80C04540: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04544:
    ctx->pc = 0x80C04544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04544u)) return;
    // 80C04544: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04548:
    ctx->pc = 0x80C04548u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04548u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C04548: stwu     r1, -16(r1)
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
label_80C0454C:
    ctx->pc = 0x80C0454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0454Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C0454C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04550:
    ctx->pc = 0x80C04550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04550: stw     r0, 20(r1)
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
label_80C04554:
    ctx->pc = 0x80C04554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04554: stw     r31, 12(r1)
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
label_80C04558:
    ctx->pc = 0x80C04558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04558: stw     r30, 8(r1)
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
label_80C0455C:
    ctx->pc = 0x80C0455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0455Cu)) return;
    // 80C0455C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C04560:
    ctx->pc = 0x80C04560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04560: lwz     r31, 32(r3)
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
label_80C04564:
    ctx->pc = 0x80C04564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04564: stw     r30, 36(r31)
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
label_80C04568:
    ctx->pc = 0x80C04568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04568: stw     r5, 40(r31)
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
label_80C0456C:
    ctx->pc = 0x80C0456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0456Cu)) return;
    // 80C0456C: cmpwi   r5, 0
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

label_80C04570:
    ctx->pc = 0x80C04570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04570u)) return;
    // 80C04570: bc    12, 1, 0x80C04580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C04580;
        }
    }

label_80C04574:
    ctx->pc = 0x80C04574u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04574u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04574: lwz     r3, 16(r31)
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
label_80C04578:
    ctx->pc = 0x80C04578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04578u)) return;
    // 80C04578: bl      0x80509BF8
    {
            ctx->lr = 0x80C0457Cu;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C0457C:
    ctx->pc = 0x80C0457Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0457Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C0457C: stw     r30, 32(r31)
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
label_80C04580:
    ctx->pc = 0x80C04580u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04580u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04580: lwz     r31, 12(r1)
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
label_80C04584:
    ctx->pc = 0x80C04584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04584: lwz     r30, 8(r1)
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
label_80C04588:
    ctx->pc = 0x80C04588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04588: lwz     r0, 20(r1)
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
label_80C0458C:
    ctx->pc = 0x80C0458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C0458Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0458C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04590:
    ctx->pc = 0x80C04590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04590u)) return;
    // 80C04590: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04594:
    ctx->pc = 0x80C04594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04594u)) return;
    // 80C04594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04598:
    ctx->pc = 0x80C04598u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C04598: stwu     r1, -16(r1)
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
label_80C0459C:
    ctx->pc = 0x80C0459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0459Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C0459C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C045A0:
    ctx->pc = 0x80C045A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C045A0: stw     r0, 20(r1)
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
label_80C045A4:
    ctx->pc = 0x80C045A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C045A4: stw     r31, 12(r1)
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
label_80C045A8:
    ctx->pc = 0x80C045A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C045A8: stw     r30, 8(r1)
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
label_80C045AC:
    ctx->pc = 0x80C045ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045ACu)) return;
    // 80C045AC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C045B0:
    ctx->pc = 0x80C045B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C045B0: lwz     r31, 32(r3)
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
label_80C045B4:
    ctx->pc = 0x80C045B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C045B4: stw     r30, 48(r31)
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
label_80C045B8:
    ctx->pc = 0x80C045B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C045B8: stw     r5, 52(r31)
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
label_80C045BC:
    ctx->pc = 0x80C045BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045BCu)) return;
    // 80C045BC: cmpwi   r5, 0
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

label_80C045C0:
    ctx->pc = 0x80C045C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045C0u)) return;
    // 80C045C0: bc    12, 1, 0x80C045D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C045D0;
        }
    }

label_80C045C4:
    ctx->pc = 0x80C045C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C045C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C045C4: lwz     r3, 16(r31)
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
label_80C045C8:
    ctx->pc = 0x80C045C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045C8u)) return;
    // 80C045C8: bl      0x80509B94
    {
            ctx->lr = 0x80C045CCu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C045CC:
    ctx->pc = 0x80C045CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C045CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C045CC: stw     r30, 44(r31)
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
label_80C045D0:
    ctx->pc = 0x80C045D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C045D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C045D0: lwz     r31, 12(r1)
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
label_80C045D4:
    ctx->pc = 0x80C045D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C045D4: lwz     r30, 8(r1)
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
label_80C045D8:
    ctx->pc = 0x80C045D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C045D8: lwz     r0, 20(r1)
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
label_80C045DC:
    ctx->pc = 0x80C045DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C045DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C045DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C045E0:
    ctx->pc = 0x80C045E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045E0u)) return;
    // 80C045E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C045E4:
    ctx->pc = 0x80C045E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045E4u)) return;
    // 80C045E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C045E8:
    ctx->pc = 0x80C045E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C045E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C045E8: stwu     r1, -16(r1)
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
label_80C045EC:
    ctx->pc = 0x80C045ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C045EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C045F0:
    ctx->pc = 0x80C045F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C045F0: stw     r0, 20(r1)
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
label_80C045F4:
    ctx->pc = 0x80C045F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C045F4: stw     r31, 12(r1)
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
label_80C045F8:
    ctx->pc = 0x80C045F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045F8u)) return;
    // 80C045F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C045FC:
    ctx->pc = 0x80C045FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C045FCu)) return;
    // 80C045FC: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04600:
    ctx->pc = 0x80C04600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04600u)) return;
    // 80C04600: addi    r4, r4, -25684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25684);

label_80C04604:
    ctx->pc = 0x80C04604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04604: lwz     r0, 0(r4)
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
label_80C04608:
    ctx->pc = 0x80C04608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04608u)) return;
    // 80C04608: cmplwi  r0, 0x0000
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

label_80C0460C:
    ctx->pc = 0x80C0460Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0460Cu)) return;
    // 80C0460C: bc    4, 2, 0x80C04630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C04630;
        }
    }

label_80C04610:
    ctx->pc = 0x80C04610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C04610: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C04614:
    ctx->pc = 0x80C04614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04614u)) return;
    // 80C04614: bl      0x8050EEC0
    {
            ctx->lr = 0x80C04618u;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C04618:
    ctx->pc = 0x80C04618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C04618: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C0461C:
    ctx->pc = 0x80C0461Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0461Cu)) return;
    // 80C0461C: addi    r4, r4, -25684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25684);

label_80C04620:
    ctx->pc = 0x80C04620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04620: stw     r3, 0(r4)
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
label_80C04624:
    ctx->pc = 0x80C04624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04624u)) return;
    // 80C04624: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C04628:
    ctx->pc = 0x80C04628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04628u)) return;
    // 80C04628: addi    r3, r3, -25688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25688);

label_80C0462C:
    ctx->pc = 0x80C0462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0462Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C0462C: stw     r31, 0(r3)
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
label_80C04630:
    ctx->pc = 0x80C04630u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04630u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04630: lwz     r31, 12(r1)
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
label_80C04634:
    ctx->pc = 0x80C04634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04634: lwz     r0, 20(r1)
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
label_80C04638:
    ctx->pc = 0x80C04638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04638: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C0463C:
    ctx->pc = 0x80C0463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0463Cu)) return;
    // 80C0463C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04640:
    ctx->pc = 0x80C04640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04640u)) return;
    // 80C04640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04644:
    ctx->pc = 0x80C04644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C04644: stwu     r1, -32(r1)
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
label_80C04648:
    ctx->pc = 0x80C04648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C04648: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C0464C:
    ctx->pc = 0x80C0464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0464Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C0464C: stw     r0, 36(r1)
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
label_80C04650:
    ctx->pc = 0x80C04650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04650: stw     r31, 28(r1)
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
label_80C04654:
    ctx->pc = 0x80C04654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04654: stw     r30, 24(r1)
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
label_80C04658:
    ctx->pc = 0x80C04658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04658: stw     r29, 20(r1)
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
label_80C0465C:
    ctx->pc = 0x80C0465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0465Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C0465C: stw     r28, 16(r1)
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
label_80C04660:
    ctx->pc = 0x80C04660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04660u)) return;
    // 80C04660: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C04664:
    ctx->pc = 0x80C04664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04664u)) return;
    // 80C04664: addi    r30, r3, -25684
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-25684);

label_80C04668:
    ctx->pc = 0x80C04668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04668: lwz     r0, 0(r30)
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
label_80C0466C:
    ctx->pc = 0x80C0466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0466Cu)) return;
    // 80C0466C: cmplwi  r0, 0x0000
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

label_80C04670:
    ctx->pc = 0x80C04670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04670u)) return;
    // 80C04670: bc    12, 2, 0x80C046D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C046D0;
        }
    }

label_80C04674:
    ctx->pc = 0x80C04674u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04674u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C04674: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C04678:
    ctx->pc = 0x80C04678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04678u)) return;
    // 80C04678: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C0467C:
    ctx->pc = 0x80C0467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0467Cu)) return;
    // 80C0467C: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C04680:
    ctx->pc = 0x80C04680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04680u)) return;
    // 80C04680: addi    r31, r3, -25688
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25688);

label_80C04684:
    ctx->pc = 0x80C04684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04684u)) return;
    // 80C04684: b       0x80C046A4
    {
            goto label_80C046A4;
    }

label_80C04688:
    ctx->pc = 0x80C04688u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04688u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04688: lwz     r3, 0(r30)
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
label_80C0468C:
    ctx->pc = 0x80C0468Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0468Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0468C: lwzx    r3, r3, r29
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
label_80C04690:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04690u)) return;
    // 80C04690: cmplwi  r3, 0x0000
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

label_80C04694:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04694u)) return;
    // 80C04694: bc    12, 2, 0x80C0469C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C0469C;
        }
    }

label_80C04698:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04698: bl      0x8050F9E0
    {
            ctx->lr = 0x80C0469Cu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C0469C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0469Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C0469C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C046A0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046A0u)) return;
    // 80C046A0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C046A4:
    ctx->pc = 0x80C046A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C046A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C046A4: lwz     r0, 0(r31)
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
label_80C046A8:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046A8u)) return;
    // 80C046A8: cmpw    r28, r0
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

label_80C046AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046ACu)) return;
    // 80C046AC: bc    12, 0, 0x80C04688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C04688u;
                return;
            }
            goto label_80C04688;
        }
    }

label_80C046B0:
    ctx->pc = 0x80C046B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C046B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C046B0: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C046B4:
    ctx->pc = 0x80C046B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046B4u)) return;
    // 80C046B4: addi    r3, r3, -25684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25684);

label_80C046B8:
    ctx->pc = 0x80C046B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C046B8: lwz     r3, 0(r3)
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
label_80C046BC:
    ctx->pc = 0x80C046BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046BCu)) return;
    // 80C046BC: bl      0x8050ED40
    {
            ctx->lr = 0x80C046C0u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C046C0:
    ctx->pc = 0x80C046C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C046C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C046C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C046C4:
    ctx->pc = 0x80C046C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046C4u)) return;
    // 80C046C4: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C046C8:
    ctx->pc = 0x80C046C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046C8u)) return;
    // 80C046C8: addi    r3, r3, -25684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25684);

label_80C046CC:
    ctx->pc = 0x80C046CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C046CC: stw     r0, 0(r3)
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
label_80C046D0:
    ctx->pc = 0x80C046D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C046D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C046D0: lwz     r31, 28(r1)
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
label_80C046D4:
    ctx->pc = 0x80C046D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C046D4: lwz     r30, 24(r1)
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
label_80C046D8:
    ctx->pc = 0x80C046D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C046D8: lwz     r29, 20(r1)
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
label_80C046DC:
    ctx->pc = 0x80C046DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C046DC: lwz     r28, 16(r1)
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
label_80C046E0:
    ctx->pc = 0x80C046E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C046E0: lwz     r0, 36(r1)
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
label_80C046E4:
    ctx->pc = 0x80C046E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C046E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C046E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C046E8:
    ctx->pc = 0x80C046E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046E8u)) return;
    // 80C046E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C046EC:
    ctx->pc = 0x80C046ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046ECu)) return;
    // 80C046EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C046F0:
    ctx->pc = 0x80C046F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C046F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C046F0: stwu     r1, -16(r1)
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
label_80C046F4:
    ctx->pc = 0x80C046F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C046F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C046F8:
    ctx->pc = 0x80C046F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C046F8: stw     r0, 20(r1)
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
label_80C046FC:
    ctx->pc = 0x80C046FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C046FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C046FC: stw     r31, 12(r1)
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
label_80C04700:
    ctx->pc = 0x80C04700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04700u)) return;
    // 80C04700: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C04704:
    ctx->pc = 0x80C04704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04704u)) return;
    // 80C04704: addi    r6, r6, -25688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25688);

label_80C04708:
    ctx->pc = 0x80C04708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04708: lwz     r0, 0(r6)
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
label_80C0470C:
    ctx->pc = 0x80C0470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0470Cu)) return;
    // 80C0470C: cmpw    r3, r0
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

label_80C04710:
    ctx->pc = 0x80C04710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04710u)) return;
    // 80C04710: bc    4, 0, 0x80C0474C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C0474C;
        }
    }

label_80C04714:
    ctx->pc = 0x80C04714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04714: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C04718:
    ctx->pc = 0x80C04718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04718u)) return;
    // 80C04718: addi    r6, r6, -25684
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25684);

label_80C0471C:
    ctx->pc = 0x80C0471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0471Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C0471C: lwz     r6, 0(r6)
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
label_80C04720:
    ctx->pc = 0x80C04720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04720u)) return;
    // 80C04720: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C04724:
    ctx->pc = 0x80C04724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04724: lwzx    r0, r6, r31
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
label_80C04728:
    ctx->pc = 0x80C04728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04728u)) return;
    // 80C04728: cmplwi  r0, 0x0000
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

label_80C0472C:
    ctx->pc = 0x80C0472Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0472Cu)) return;
    // 80C0472C: bc    4, 2, 0x80C0474C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C0474C;
        }
    }

label_80C04730:
    ctx->pc = 0x80C04730u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04730u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04730: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C04734:
    ctx->pc = 0x80C04734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04734u)) return;
    // 80C04734: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C04738:
    ctx->pc = 0x80C04738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04738u)) return;
    // 80C04738: bl      0x80C0443C
    {
            ctx->lr = 0x80C0473Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C0443Cu;
                return;
            }
            goto label_80C0443C;
    }

label_80C0473C:
    ctx->pc = 0x80C0473Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0473Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C0473C: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04740:
    ctx->pc = 0x80C04740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04740u)) return;
    // 80C04740: addi    r4, r4, -25684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25684);

label_80C04744:
    ctx->pc = 0x80C04744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04744: lwz     r4, 0(r4)
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
label_80C04748:
    ctx->pc = 0x80C04748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C04748: stwx    r3, r4, r31
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
label_80C0474C:
    ctx->pc = 0x80C0474Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0474Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C0474C: lwz     r31, 12(r1)
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
label_80C04750:
    ctx->pc = 0x80C04750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04750: lwz     r0, 20(r1)
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
label_80C04754:
    ctx->pc = 0x80C04754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04754: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04758:
    ctx->pc = 0x80C04758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04758u)) return;
    // 80C04758: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C0475C:
    ctx->pc = 0x80C0475Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0475Cu)) return;
    // 80C0475C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04760:
    ctx->pc = 0x80C04760u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04760u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04760: stwu     r1, -16(r1)
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
label_80C04764:
    ctx->pc = 0x80C04764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04764u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04764: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04768:
    ctx->pc = 0x80C04768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04768: stw     r0, 20(r1)
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
label_80C0476C:
    ctx->pc = 0x80C0476Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0476Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C0476C: stw     r31, 12(r1)
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
label_80C04770:
    ctx->pc = 0x80C04770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04770u)) return;
    // 80C04770: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04774:
    ctx->pc = 0x80C04774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04774u)) return;
    // 80C04774: addi    r4, r4, -25688
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25688);

label_80C04778:
    ctx->pc = 0x80C04778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04778u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04778: lwz     r0, 0(r4)
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
label_80C0477C:
    ctx->pc = 0x80C0477Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0477Cu)) return;
    // 80C0477C: cmpw    r3, r0
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

label_80C04780:
    ctx->pc = 0x80C04780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04780u)) return;
    // 80C04780: bc    4, 0, 0x80C047B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C047B8;
        }
    }

label_80C04784:
    ctx->pc = 0x80C04784u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04784u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04784: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04788:
    ctx->pc = 0x80C04788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04788u)) return;
    // 80C04788: addi    r4, r4, -25684
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25684);

label_80C0478C:
    ctx->pc = 0x80C0478Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0478Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C0478C: lwz     r4, 0(r4)
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
label_80C04790:
    ctx->pc = 0x80C04790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04790u)) return;
    // 80C04790: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C04794:
    ctx->pc = 0x80C04794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04794u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04794: lwzx    r3, r4, r31
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
label_80C04798:
    ctx->pc = 0x80C04798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04798u)) return;
    // 80C04798: cmplwi  r3, 0x0000
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

label_80C0479C:
    ctx->pc = 0x80C0479Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0479Cu)) return;
    // 80C0479C: bc    12, 2, 0x80C047B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C047B8;
        }
    }

label_80C047A0:
    ctx->pc = 0x80C047A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C047A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C047A0: bl      0x8050F9E0
    {
            ctx->lr = 0x80C047A4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C047A4:
    ctx->pc = 0x80C047A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C047A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C047A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C047A8:
    ctx->pc = 0x80C047A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047A8u)) return;
    // 80C047A8: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C047AC:
    ctx->pc = 0x80C047ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047ACu)) return;
    // 80C047AC: addi    r3, r3, -25684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25684);

label_80C047B0:
    ctx->pc = 0x80C047B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C047B0: lwz     r3, 0(r3)
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
label_80C047B4:
    ctx->pc = 0x80C047B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C047B4: stwx    r0, r3, r31
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
label_80C047B8:
    ctx->pc = 0x80C047B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C047B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C047B8: lwz     r31, 12(r1)
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
label_80C047BC:
    ctx->pc = 0x80C047BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C047BC: lwz     r0, 20(r1)
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
label_80C047C0:
    ctx->pc = 0x80C047C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C047C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C047C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C047C4:
    ctx->pc = 0x80C047C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047C4u)) return;
    // 80C047C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C047C8:
    ctx->pc = 0x80C047C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047C8u)) return;
    // 80C047C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C047CC:
    ctx->pc = 0x80C047CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C047CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C047CC: stwu     r1, -16(r1)
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
label_80C047D0:
    ctx->pc = 0x80C047D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C047D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C047D4:
    ctx->pc = 0x80C047D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C047D4: stw     r0, 20(r1)
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
label_80C047D8:
    ctx->pc = 0x80C047D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047D8u)) return;
    // 80C047D8: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C047DC:
    ctx->pc = 0x80C047DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047DCu)) return;
    // 80C047DC: addi    r6, r6, -25688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25688);

label_80C047E0:
    ctx->pc = 0x80C047E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C047E0: lwz     r0, 0(r6)
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
label_80C047E4:
    ctx->pc = 0x80C047E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047E4u)) return;
    // 80C047E4: cmpw    r3, r0
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

label_80C047E8:
    ctx->pc = 0x80C047E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047E8u)) return;
    // 80C047E8: bc    4, 0, 0x80C0480C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C0480C;
        }
    }

label_80C047EC:
    ctx->pc = 0x80C047ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C047ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C047EC: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C047F0:
    ctx->pc = 0x80C047F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047F0u)) return;
    // 80C047F0: addi    r6, r6, -25684
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25684);

label_80C047F4:
    ctx->pc = 0x80C047F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C047F4: lwz     r6, 0(r6)
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
label_80C047F8:
    ctx->pc = 0x80C047F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047F8u)) return;
    // 80C047F8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C047FC:
    ctx->pc = 0x80C047FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C047FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C047FC: lwzx    r3, r6, r0
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
label_80C04800:
    ctx->pc = 0x80C04800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04800u)) return;
    // 80C04800: cmplwi  r3, 0x0000
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

label_80C04804:
    ctx->pc = 0x80C04804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04804u)) return;
    // 80C04804: bc    12, 2, 0x80C0480C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C0480C;
        }
    }

label_80C04808:
    ctx->pc = 0x80C04808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04808: bl      0x80C044F8
    {
            ctx->lr = 0x80C0480Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C044F8u;
                return;
            }
            goto label_80C044F8;
    }

label_80C0480C:
    ctx->pc = 0x80C0480Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0480Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C0480C: lwz     r0, 20(r1)
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
label_80C04810:
    ctx->pc = 0x80C04810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04810u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04810: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04814:
    ctx->pc = 0x80C04814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04814u)) return;
    // 80C04814: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04818:
    ctx->pc = 0x80C04818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04818u)) return;
    // 80C04818: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C0481C:
    ctx->pc = 0x80C0481Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0481Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C0481C: stwu     r1, -16(r1)
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
label_80C04820:
    ctx->pc = 0x80C04820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04820u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04820: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04824:
    ctx->pc = 0x80C04824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04824: stw     r0, 20(r1)
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
label_80C04828:
    ctx->pc = 0x80C04828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04828u)) return;
    // 80C04828: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C0482C:
    ctx->pc = 0x80C0482Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0482Cu)) return;
    // 80C0482C: addi    r6, r6, -25688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25688);

label_80C04830:
    ctx->pc = 0x80C04830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04830: lwz     r0, 0(r6)
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
label_80C04834:
    ctx->pc = 0x80C04834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04834u)) return;
    // 80C04834: cmpw    r3, r0
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

label_80C04838:
    ctx->pc = 0x80C04838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04838u)) return;
    // 80C04838: bc    4, 0, 0x80C0485C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C0485C;
        }
    }

label_80C0483C:
    ctx->pc = 0x80C0483Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0483Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C0483C: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C04840:
    ctx->pc = 0x80C04840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04840u)) return;
    // 80C04840: addi    r6, r6, -25684
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25684);

label_80C04844:
    ctx->pc = 0x80C04844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04844u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04844: lwz     r6, 0(r6)
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
label_80C04848:
    ctx->pc = 0x80C04848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04848u)) return;
    // 80C04848: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C0484C:
    ctx->pc = 0x80C0484Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0484Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0484C: lwzx    r3, r6, r0
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
label_80C04850:
    ctx->pc = 0x80C04850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04850u)) return;
    // 80C04850: cmplwi  r3, 0x0000
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

label_80C04854:
    ctx->pc = 0x80C04854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04854u)) return;
    // 80C04854: bc    12, 2, 0x80C0485C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C0485C;
        }
    }

label_80C04858:
    ctx->pc = 0x80C04858u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04858u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04858: bl      0x80C04548
    {
            ctx->lr = 0x80C0485Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C04548u;
                return;
            }
            goto label_80C04548;
    }

label_80C0485C:
    ctx->pc = 0x80C0485Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0485Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C0485C: lwz     r0, 20(r1)
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
label_80C04860:
    ctx->pc = 0x80C04860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04860: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04864:
    ctx->pc = 0x80C04864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04864u)) return;
    // 80C04864: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04868:
    ctx->pc = 0x80C04868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04868u)) return;
    // 80C04868: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C0486C:
    ctx->pc = 0x80C0486Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0486Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C0486C: stwu     r1, -16(r1)
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
label_80C04870:
    ctx->pc = 0x80C04870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04870: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04874:
    ctx->pc = 0x80C04874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04874: stw     r0, 20(r1)
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
label_80C04878:
    ctx->pc = 0x80C04878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04878u)) return;
    // 80C04878: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C0487C:
    ctx->pc = 0x80C0487Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0487Cu)) return;
    // 80C0487C: addi    r6, r6, -25688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25688);

label_80C04880:
    ctx->pc = 0x80C04880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04880: lwz     r0, 0(r6)
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
label_80C04884:
    ctx->pc = 0x80C04884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04884u)) return;
    // 80C04884: cmpw    r3, r0
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

label_80C04888:
    ctx->pc = 0x80C04888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04888u)) return;
    // 80C04888: bc    4, 0, 0x80C048AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C048AC;
        }
    }

label_80C0488C:
    ctx->pc = 0x80C0488Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0488Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C0488C: lis     r6, -27477
    ctx->gpr[6] = ((u32)(s32)(-27477) << 16);

label_80C04890:
    ctx->pc = 0x80C04890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04890u)) return;
    // 80C04890: addi    r6, r6, -25684
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25684);

label_80C04894:
    ctx->pc = 0x80C04894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04894: lwz     r6, 0(r6)
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
label_80C04898:
    ctx->pc = 0x80C04898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04898u)) return;
    // 80C04898: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C0489C:
    ctx->pc = 0x80C0489Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0489Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0489C: lwzx    r3, r6, r0
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
label_80C048A0:
    ctx->pc = 0x80C048A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048A0u)) return;
    // 80C048A0: cmplwi  r3, 0x0000
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

label_80C048A4:
    ctx->pc = 0x80C048A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048A4u)) return;
    // 80C048A4: bc    12, 2, 0x80C048AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C048AC;
        }
    }

label_80C048A8:
    ctx->pc = 0x80C048A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C048A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C048A8: bl      0x80C04598
    {
            ctx->lr = 0x80C048ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C04598u;
                return;
            }
            goto label_80C04598;
    }

label_80C048AC:
    ctx->pc = 0x80C048ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C048ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C048AC: lwz     r0, 20(r1)
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
label_80C048B0:
    ctx->pc = 0x80C048B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C048B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C048B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C048B4:
    ctx->pc = 0x80C048B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048B4u)) return;
    // 80C048B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C048B8:
    ctx->pc = 0x80C048B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048B8u)) return;
    // 80C048B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C048BC:
    ctx->pc = 0x80C048BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C048BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C048BC: stwu     r1, -32(r1)
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
label_80C048C0:
    ctx->pc = 0x80C048C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C048C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C048C4:
    ctx->pc = 0x80C048C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C048C4: stw     r0, 36(r1)
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
label_80C048C8:
    ctx->pc = 0x80C048C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C048C8: stw     r31, 28(r1)
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
label_80C048CC:
    ctx->pc = 0x80C048CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C048CC: stw     r30, 24(r1)
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
label_80C048D0:
    ctx->pc = 0x80C048D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C048D0: stw     r29, 20(r1)
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
label_80C048D4:
    ctx->pc = 0x80C048D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C048D4: stw     r28, 16(r1)
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
label_80C048D8:
    ctx->pc = 0x80C048D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048D8u)) return;
    // 80C048D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C048DC:
    ctx->pc = 0x80C048DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048DCu)) return;
    // 80C048DC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C048E0:
    ctx->pc = 0x80C048E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048E0u)) return;
    // 80C048E0: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C048E4:
    ctx->pc = 0x80C048E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048E4u)) return;
    // 80C048E4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C048E8:
    ctx->pc = 0x80C048E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048E8u)) return;
    // 80C048E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C048EC:
    ctx->pc = 0x80C048ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048ECu)) return;
    // 80C048EC: bl      0x80401DB0
    {
            ctx->lr = 0x80C048F0u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C048F0:
    ctx->pc = 0x80C048F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C048F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C048F0: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C048F4:
    ctx->pc = 0x80C048F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048F4u)) return;
    // 80C048F4: addi    r4, r4, -25680
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25680);

label_80C048F8:
    ctx->pc = 0x80C048F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C048F8: lwz     r0, 0(r4)
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
label_80C048FC:
    ctx->pc = 0x80C048FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C048FCu)) return;
    // 80C048FC: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C04900:
    ctx->pc = 0x80C04900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04900u)) return;
    // 80C04900: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04904:
    ctx->pc = 0x80C04904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04904u)) return;
    // 80C04904: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C04908:
    ctx->pc = 0x80C04908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04908u)) return;
    // 80C04908: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C0490C:
    ctx->pc = 0x80C0490Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0490Cu)) return;
    // 80C0490C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C04910:
    ctx->pc = 0x80C04910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04910u)) return;
    // 80C04910: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C04914:
    ctx->pc = 0x80C04914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04914u)) return;
    // 80C04914: bl      0x8050A0D4
    {
            ctx->lr = 0x80C04918u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C04918:
    ctx->pc = 0x80C04918u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04918u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04918: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C0491C:
    ctx->pc = 0x80C0491Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0491Cu)) return;
    // 80C0491C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C04920:
    ctx->pc = 0x80C04920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04920u)) return;
    // 80C04920: bl      0x80509C74
    {
            ctx->lr = 0x80C04924u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C04924:
    ctx->pc = 0x80C04924u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04924u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04924: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04928:
    ctx->pc = 0x80C04928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04928u)) return;
    // 80C04928: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C0492C:
    ctx->pc = 0x80C0492Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0492Cu)) return;
    // 80C0492C: bl      0x80509BF8
    {
            ctx->lr = 0x80C04930u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C04930:
    ctx->pc = 0x80C04930u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04930u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04930: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04934:
    ctx->pc = 0x80C04934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04934u)) return;
    // 80C04934: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C04938:
    ctx->pc = 0x80C04938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04938u)) return;
    // 80C04938: bl      0x80509B94
    {
            ctx->lr = 0x80C0493Cu;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C0493C:
    ctx->pc = 0x80C0493Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0493Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C0493C: lis     r3, -27477
    ctx->gpr[3] = ((u32)(s32)(-27477) << 16);

label_80C04940:
    ctx->pc = 0x80C04940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04940u)) return;
    // 80C04940: addi    r4, r3, -25680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-25680);

label_80C04944:
    ctx->pc = 0x80C04944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C04944: lwz     r3, 0(r4)
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
label_80C04948:
    ctx->pc = 0x80C04948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04948u)) return;
    // 80C04948: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C0494C:
    ctx->pc = 0x80C0494Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0494Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C0494C: stw     r0, 0(r4)
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
label_80C04950:
    ctx->pc = 0x80C04950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04950u)) return;
    // 80C04950: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C04954:
    ctx->pc = 0x80C04954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C04954: stw     r0, 0(r4)
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
label_80C04958:
    ctx->pc = 0x80C04958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04958: lwz     r31, 28(r1)
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
label_80C0495C:
    ctx->pc = 0x80C0495Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0495Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C0495C: lwz     r30, 24(r1)
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
label_80C04960:
    ctx->pc = 0x80C04960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04960: lwz     r29, 20(r1)
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
label_80C04964:
    ctx->pc = 0x80C04964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04964: lwz     r28, 16(r1)
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
label_80C04968:
    ctx->pc = 0x80C04968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04968: lwz     r0, 36(r1)
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
label_80C0496C:
    ctx->pc = 0x80C0496Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C0496Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0496C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04970:
    ctx->pc = 0x80C04970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04970u)) return;
    // 80C04970: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C04974:
    ctx->pc = 0x80C04974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04974u)) return;
    // 80C04974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04978:
    ctx->pc = 0x80C04978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C04978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C0497C:
    ctx->pc = 0x80C0497Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C0497Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C0497C: stwu     r1, -16(r1)
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
label_80C04980:
    ctx->pc = 0x80C04980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C04980: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04984:
    ctx->pc = 0x80C04984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04984: stw     r0, 20(r1)
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
label_80C04988:
    ctx->pc = 0x80C04988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04988: stw     r31, 12(r1)
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
label_80C0498C:
    ctx->pc = 0x80C0498Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0498Cu)) return;
    // 80C0498C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C04990:
    ctx->pc = 0x80C04990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04990u)) return;
    // 80C04990: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C04994:
    ctx->pc = 0x80C04994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04994u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04994: lwz     r3, 32(r31)
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
label_80C04998:
    ctx->pc = 0x80C04998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04998: lwz     r6, 60(r3)
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
label_80C0499C:
    ctx->pc = 0x80C0499Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C0499Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C0499C: lwz     r4, 64(r6)
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
label_80C049A0:
    ctx->pc = 0x80C049A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049A0u)) return;
    // 80C049A0: cmplwi  r4, 0x0000
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

label_80C049A4:
    ctx->pc = 0x80C049A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049A4u)) return;
    // 80C049A4: bc    12, 2, 0x80C049B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C049B8;
        }
    }

label_80C049A8:
    ctx->pc = 0x80C049A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C049A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C049A8: lwz     r3, 4(r4)
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
label_80C049AC:
    ctx->pc = 0x80C049ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C049AC: lwz     r4, 8(r4)
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
label_80C049B0:
    ctx->pc = 0x80C049B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C049B0: lfs     f1, 60(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C049B0u)) return;
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
label_80C049B4:
    ctx->pc = 0x80C049B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049B4u)) return;
    // 80C049B4: bl      0x8048BE20
    {
            ctx->lr = 0x80C049B8u;
            ctx->pc = 0x8048BE20u;
            return;
    }

label_80C049B8:
    ctx->pc = 0x80C049B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C049B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C049B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C049BC:
    ctx->pc = 0x80C049BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049BCu)) return;
    // 80C049BC: bl      0x80460B90
    {
            ctx->lr = 0x80C049C0u;
            ctx->pc = 0x80460B90u;
            return;
    }

label_80C049C0:
    ctx->pc = 0x80C049C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C049C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C049C0: lwz     r31, 12(r1)
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
label_80C049C4:
    ctx->pc = 0x80C049C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C049C4: lwz     r0, 20(r1)
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
label_80C049C8:
    ctx->pc = 0x80C049C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C049C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C049C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C049CC:
    ctx->pc = 0x80C049CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049CCu)) return;
    // 80C049CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C049D0:
    ctx->pc = 0x80C049D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049D0u)) return;
    // 80C049D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C049D4:
    ctx->pc = 0x80C049D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C049D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C049D4: stwu     r1, -16(r1)
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
label_80C049D8:
    ctx->pc = 0x80C049D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C049D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C049DC:
    ctx->pc = 0x80C049DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C049DC: stw     r0, 20(r1)
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
label_80C049E0:
    ctx->pc = 0x80C049E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049E0u)) return;
    // 80C049E0: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C049E4:
    ctx->pc = 0x80C049E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049E4u)) return;
    // 80C049E4: addi    r4, r4, -25816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25816);

label_80C049E8:
    ctx->pc = 0x80C049E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049E8u)) return;
    // 80C049E8: bl      0x80C0497C
    {
            ctx->lr = 0x80C049ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C0497Cu;
                return;
            }
            goto label_80C0497C;
    }

label_80C049EC:
    ctx->pc = 0x80C049ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C049ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C049EC: lwz     r0, 20(r1)
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
label_80C049F0:
    ctx->pc = 0x80C049F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C049F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C049F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C049F4:
    ctx->pc = 0x80C049F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049F4u)) return;
    // 80C049F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C049F8:
    ctx->pc = 0x80C049F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C049F8u)) return;
    // 80C049F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C049FC:
    ctx->pc = 0x80C049FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C049FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C049FC: stwu     r1, -16(r1)
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
label_80C04A00:
    ctx->pc = 0x80C04A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04A00: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04A04:
    ctx->pc = 0x80C04A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04A04: stw     r0, 20(r1)
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
label_80C04A08:
    ctx->pc = 0x80C04A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A08u)) return;
    // 80C04A08: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04A0C:
    ctx->pc = 0x80C04A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A0Cu)) return;
    // 80C04A0C: addi    r4, r4, -25792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25792);

label_80C04A10:
    ctx->pc = 0x80C04A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A10u)) return;
    // 80C04A10: bl      0x80C0497C
    {
            ctx->lr = 0x80C04A14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C0497Cu;
                return;
            }
            goto label_80C0497C;
    }

label_80C04A14:
    ctx->pc = 0x80C04A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04A14: lwz     r0, 20(r1)
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
label_80C04A18:
    ctx->pc = 0x80C04A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04A18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04A18: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04A1C:
    ctx->pc = 0x80C04A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A1Cu)) return;
    // 80C04A1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04A20:
    ctx->pc = 0x80C04A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A20u)) return;
    // 80C04A20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04A24:
    ctx->pc = 0x80C04A24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04A24: stwu     r1, -16(r1)
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
label_80C04A28:
    ctx->pc = 0x80C04A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04A28: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04A2C:
    ctx->pc = 0x80C04A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C04A2C: stw     r0, 20(r1)
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
label_80C04A30:
    ctx->pc = 0x80C04A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A30u)) return;
    // 80C04A30: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04A34:
    ctx->pc = 0x80C04A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A34u)) return;
    // 80C04A34: addi    r4, r4, -25768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25768);

label_80C04A38:
    ctx->pc = 0x80C04A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A38u)) return;
    // 80C04A38: bl      0x80C0497C
    {
            ctx->lr = 0x80C04A3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C0497Cu;
                return;
            }
            goto label_80C0497C;
    }

label_80C04A3C:
    ctx->pc = 0x80C04A3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04A3C: lwz     r0, 20(r1)
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
label_80C04A40:
    ctx->pc = 0x80C04A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04A40: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04A44:
    ctx->pc = 0x80C04A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A44u)) return;
    // 80C04A44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04A48:
    ctx->pc = 0x80C04A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A48u)) return;
    // 80C04A48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04A4C:
    ctx->pc = 0x80C04A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04A4C: stwu     r1, -16(r1)
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
label_80C04A50:
    ctx->pc = 0x80C04A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04A50: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04A54:
    ctx->pc = 0x80C04A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04A54: stw     r0, 20(r1)
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
label_80C04A58:
    ctx->pc = 0x80C04A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04A58: stw     r31, 12(r1)
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
label_80C04A5C:
    ctx->pc = 0x80C04A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A5Cu)) return;
    // 80C04A5C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C04A60:
    ctx->pc = 0x80C04A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A60u)) return;
    // 80C04A60: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C04A64:
    ctx->pc = 0x80C04A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A64u)) return;
    // 80C04A64: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80C04A68:
    ctx->pc = 0x80C04A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A68u)) return;
    // 80C04A68: addi    r5, r5, 18900
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18900);

label_80C04A6C:
    ctx->pc = 0x80C04A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A6Cu)) return;
    // 80C04A6C: bl      0x8050FD60
    {
            ctx->lr = 0x80C04A70u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C04A70:
    ctx->pc = 0x80C04A70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04A70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C04A74:
    ctx->pc = 0x80C04A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04A74: lwz     r3, 32(r31)
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
label_80C04A78:
    ctx->pc = 0x80C04A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A78u)) return;
    // 80C04A78: bl      0x80462174
    {
            ctx->lr = 0x80C04A7Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80C04A7C:
    ctx->pc = 0x80C04A7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C04A7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04A80:
    ctx->pc = 0x80C04A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A80u)) return;
    // 80C04A80: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04A84:
    ctx->pc = 0x80C04A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A84u)) return;
    // 80C04A84: addi    r4, r4, -25744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25744);

label_80C04A88:
    ctx->pc = 0x80C04A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A88u)) return;
    // 80C04A88: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C04A8C:
    ctx->pc = 0x80C04A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A8Cu)) return;
    // 80C04A8C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80C04A90:
    ctx->pc = 0x80C04A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A90u)) return;
    // 80C04A90: bl      0x8041E63C
    {
            ctx->lr = 0x80C04A94u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80C04A94:
    ctx->pc = 0x80C04A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04A94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04A98:
    ctx->pc = 0x80C04A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04A98: lwz     r31, 12(r1)
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
label_80C04A9C:
    ctx->pc = 0x80C04A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04A9C: lwz     r0, 20(r1)
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
label_80C04AA0:
    ctx->pc = 0x80C04AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04AA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04AA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04AA4:
    ctx->pc = 0x80C04AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AA4u)) return;
    // 80C04AA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04AA8:
    ctx->pc = 0x80C04AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AA8u)) return;
    // 80C04AA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04AAC:
    ctx->pc = 0x80C04AACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04AACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04AAC: stwu     r1, -16(r1)
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
label_80C04AB0:
    ctx->pc = 0x80C04AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04AB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04AB4:
    ctx->pc = 0x80C04AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04AB4: stw     r0, 20(r1)
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
label_80C04AB8:
    ctx->pc = 0x80C04AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04AB8: stw     r31, 12(r1)
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
label_80C04ABC:
    ctx->pc = 0x80C04ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04ABCu)) return;
    // 80C04ABC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C04AC0:
    ctx->pc = 0x80C04AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AC0u)) return;
    // 80C04AC0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C04AC4:
    ctx->pc = 0x80C04AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AC4u)) return;
    // 80C04AC4: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80C04AC8:
    ctx->pc = 0x80C04AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AC8u)) return;
    // 80C04AC8: addi    r5, r5, 18940
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18940);

label_80C04ACC:
    ctx->pc = 0x80C04ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04ACCu)) return;
    // 80C04ACC: bl      0x8050FD60
    {
            ctx->lr = 0x80C04AD0u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C04AD0:
    ctx->pc = 0x80C04AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04AD0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C04AD4:
    ctx->pc = 0x80C04AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04AD4: lwz     r3, 32(r31)
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
label_80C04AD8:
    ctx->pc = 0x80C04AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AD8u)) return;
    // 80C04AD8: bl      0x80462174
    {
            ctx->lr = 0x80C04ADCu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80C04ADC:
    ctx->pc = 0x80C04ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C04ADC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04AE0:
    ctx->pc = 0x80C04AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AE0u)) return;
    // 80C04AE0: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04AE4:
    ctx->pc = 0x80C04AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AE4u)) return;
    // 80C04AE4: addi    r4, r4, -25744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25744);

label_80C04AE8:
    ctx->pc = 0x80C04AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AE8u)) return;
    // 80C04AE8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C04AEC:
    ctx->pc = 0x80C04AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AECu)) return;
    // 80C04AEC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80C04AF0:
    ctx->pc = 0x80C04AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AF0u)) return;
    // 80C04AF0: bl      0x8041E63C
    {
            ctx->lr = 0x80C04AF4u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80C04AF4:
    ctx->pc = 0x80C04AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04AF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04AF8:
    ctx->pc = 0x80C04AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04AF8: lwz     r31, 12(r1)
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
label_80C04AFC:
    ctx->pc = 0x80C04AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04AFC: lwz     r0, 20(r1)
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
label_80C04B00:
    ctx->pc = 0x80C04B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04B00: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04B04:
    ctx->pc = 0x80C04B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B04u)) return;
    // 80C04B04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04B08:
    ctx->pc = 0x80C04B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B08u)) return;
    // 80C04B08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

label_80C04B0C:
    ctx->pc = 0x80C04B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C04B0C: stwu     r1, -16(r1)
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
label_80C04B10:
    ctx->pc = 0x80C04B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C04B10: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04B14:
    ctx->pc = 0x80C04B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C04B14: stw     r0, 20(r1)
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
label_80C04B18:
    ctx->pc = 0x80C04B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04B18: stw     r31, 12(r1)
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
label_80C04B1C:
    ctx->pc = 0x80C04B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B1Cu)) return;
    // 80C04B1C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C04B20:
    ctx->pc = 0x80C04B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B20u)) return;
    // 80C04B20: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C04B24:
    ctx->pc = 0x80C04B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B24u)) return;
    // 80C04B24: lis     r5, -32576
    ctx->gpr[5] = ((u32)(s32)(-32576) << 16);

label_80C04B28:
    ctx->pc = 0x80C04B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B28u)) return;
    // 80C04B28: addi    r5, r5, 18980
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18980);

label_80C04B2C:
    ctx->pc = 0x80C04B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B2Cu)) return;
    // 80C04B2C: bl      0x8050FD60
    {
            ctx->lr = 0x80C04B30u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C04B30:
    ctx->pc = 0x80C04B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C04B30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C04B34:
    ctx->pc = 0x80C04B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C04B34: lwz     r3, 32(r31)
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
label_80C04B38:
    ctx->pc = 0x80C04B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B38u)) return;
    // 80C04B38: bl      0x80462174
    {
            ctx->lr = 0x80C04B3Cu;
            ctx->pc = 0x80462174u;
            return;
    }

label_80C04B3C:
    ctx->pc = 0x80C04B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C04B3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04B40:
    ctx->pc = 0x80C04B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B40u)) return;
    // 80C04B40: lis     r4, -27477
    ctx->gpr[4] = ((u32)(s32)(-27477) << 16);

label_80C04B44:
    ctx->pc = 0x80C04B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B44u)) return;
    // 80C04B44: addi    r4, r4, -25744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25744);

label_80C04B48:
    ctx->pc = 0x80C04B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B48u)) return;
    // 80C04B48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C04B4C:
    ctx->pc = 0x80C04B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B4Cu)) return;
    // 80C04B4C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80C04B50:
    ctx->pc = 0x80C04B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B50u)) return;
    // 80C04B50: bl      0x8041E63C
    {
            ctx->lr = 0x80C04B54u;
            ctx->pc = 0x8041E63Cu;
            return;
    }

label_80C04B54:
    ctx->pc = 0x80C04B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C04B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C04B54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C04B58:
    ctx->pc = 0x80C04B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C04B58: lwz     r31, 12(r1)
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
label_80C04B5C:
    ctx->pc = 0x80C04B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C04B5C: lwz     r0, 20(r1)
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
label_80C04B60:
    ctx->pc = 0x80C04B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C04B60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C04B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C04B64:
    ctx->pc = 0x80C04B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B64u)) return;
    // 80C04B64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C04B68:
    ctx->pc = 0x80C04B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C04B68u)) return;
    // 80C04B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C03CA0;
        }
    }

    ctx->pc = 0x80C04B6Cu;
    return;
return_dispatch_80C03CA0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C03CD4u: goto label_80C03CD4;
    case 0x80C03CD8u: goto label_80C03CD8;
    case 0x80C03CDCu: goto label_80C03CDC;
    case 0x80C03CE4u: goto label_80C03CE4;
    case 0x80C03CECu: goto label_80C03CEC;
    case 0x80C03CF0u: goto label_80C03CF0;
    case 0x80C03D24u: goto label_80C03D24;
    case 0x80C03D40u: goto label_80C03D40;
    case 0x80C03D48u: goto label_80C03D48;
    case 0x80C03D5Cu: goto label_80C03D5C;
    case 0x80C03D90u: goto label_80C03D90;
    case 0x80C03DB0u: goto label_80C03DB0;
    case 0x80C03DC0u: goto label_80C03DC0;
    case 0x80C03DF4u: goto label_80C03DF4;
    case 0x80C03DFCu: goto label_80C03DFC;
    case 0x80C03E24u: goto label_80C03E24;
    case 0x80C03E2Cu: goto label_80C03E2C;
    case 0x80C03E40u: goto label_80C03E40;
    case 0x80C03E48u: goto label_80C03E48;
    case 0x80C03E50u: goto label_80C03E50;
    case 0x80C03E90u: goto label_80C03E90;
    case 0x80C03E98u: goto label_80C03E98;
    case 0x80C03EC0u: goto label_80C03EC0;
    case 0x80C03EF0u: goto label_80C03EF0;
    case 0x80C03F0Cu: goto label_80C03F0C;
    case 0x80C03F14u: goto label_80C03F14;
    case 0x80C03F1Cu: goto label_80C03F1C;
    case 0x80C03F44u: goto label_80C03F44;
    case 0x80C03F4Cu: goto label_80C03F4C;
    case 0x80C03F7Cu: goto label_80C03F7C;
    case 0x80C03F98u: goto label_80C03F98;
    case 0x80C03FA0u: goto label_80C03FA0;
    case 0x80C03FA8u: goto label_80C03FA8;
    case 0x80C03FACu: goto label_80C03FAC;
    case 0x80C03FB4u: goto label_80C03FB4;
    case 0x80C03FC0u: goto label_80C03FC0;
    case 0x80C03FC8u: goto label_80C03FC8;
    case 0x80C03FF0u: goto label_80C03FF0;
    case 0x80C03FF8u: goto label_80C03FF8;
    case 0x80C04028u: goto label_80C04028;
    case 0x80C04044u: goto label_80C04044;
    case 0x80C04074u: goto label_80C04074;
    case 0x80C04090u: goto label_80C04090;
    case 0x80C04098u: goto label_80C04098;
    case 0x80C040C8u: goto label_80C040C8;
    case 0x80C040E4u: goto label_80C040E4;
    case 0x80C040ECu: goto label_80C040EC;
    case 0x80C040F8u: goto label_80C040F8;
    case 0x80C04100u: goto label_80C04100;
    case 0x80C04128u: goto label_80C04128;
    case 0x80C04130u: goto label_80C04130;
    case 0x80C04158u: goto label_80C04158;
    case 0x80C04160u: goto label_80C04160;
    case 0x80C04168u: goto label_80C04168;
    case 0x80C04190u: goto label_80C04190;
    case 0x80C04198u: goto label_80C04198;
    case 0x80C041A0u: goto label_80C041A0;
    case 0x80C041C8u: goto label_80C041C8;
    case 0x80C041D0u: goto label_80C041D0;
    case 0x80C041D4u: goto label_80C041D4;
    case 0x80C041DCu: goto label_80C041DC;
    case 0x80C04204u: goto label_80C04204;
    case 0x80C0420Cu: goto label_80C0420C;
    case 0x80C04234u: goto label_80C04234;
    case 0x80C0423Cu: goto label_80C0423C;
    case 0x80C04244u: goto label_80C04244;
    case 0x80C04250u: goto label_80C04250;
    case 0x80C04258u: goto label_80C04258;
    case 0x80C04280u: goto label_80C04280;
    case 0x80C04288u: goto label_80C04288;
    case 0x80C0428Cu: goto label_80C0428C;
    case 0x80C04294u: goto label_80C04294;
    case 0x80C042A0u: goto label_80C042A0;
    case 0x80C042ACu: goto label_80C042AC;
    case 0x80C042B4u: goto label_80C042B4;
    case 0x80C042DCu: goto label_80C042DC;
    case 0x80C042E4u: goto label_80C042E4;
    case 0x80C042F8u: goto label_80C042F8;
    case 0x80C04300u: goto label_80C04300;
    case 0x80C04304u: goto label_80C04304;
    case 0x80C04308u: goto label_80C04308;
    case 0x80C04330u: goto label_80C04330;
    case 0x80C04390u: goto label_80C04390;
    case 0x80C043D0u: goto label_80C043D0;
    case 0x80C04410u: goto label_80C04410;
    case 0x80C0446Cu: goto label_80C0446C;
    case 0x80C04490u: goto label_80C04490;
    case 0x80C0452Cu: goto label_80C0452C;
    case 0x80C0457Cu: goto label_80C0457C;
    case 0x80C045CCu: goto label_80C045CC;
    case 0x80C04618u: goto label_80C04618;
    case 0x80C0469Cu: goto label_80C0469C;
    case 0x80C046C0u: goto label_80C046C0;
    case 0x80C0473Cu: goto label_80C0473C;
    case 0x80C047A4u: goto label_80C047A4;
    case 0x80C0480Cu: goto label_80C0480C;
    case 0x80C0485Cu: goto label_80C0485C;
    case 0x80C048ACu: goto label_80C048AC;
    case 0x80C048F0u: goto label_80C048F0;
    case 0x80C04918u: goto label_80C04918;
    case 0x80C04924u: goto label_80C04924;
    case 0x80C04930u: goto label_80C04930;
    case 0x80C0493Cu: goto label_80C0493C;
    case 0x80C049B8u: goto label_80C049B8;
    case 0x80C049C0u: goto label_80C049C0;
    case 0x80C049ECu: goto label_80C049EC;
    case 0x80C04A14u: goto label_80C04A14;
    case 0x80C04A3Cu: goto label_80C04A3C;
    case 0x80C04A70u: goto label_80C04A70;
    case 0x80C04A7Cu: goto label_80C04A7C;
    case 0x80C04A94u: goto label_80C04A94;
    case 0x80C04AD0u: goto label_80C04AD0;
    case 0x80C04ADCu: goto label_80C04ADC;
    case 0x80C04AF4u: goto label_80C04AF4;
    case 0x80C04B30u: goto label_80C04B30;
    case 0x80C04B3Cu: goto label_80C04B3C;
    case 0x80C04B54u: goto label_80C04B54;
    default: return;
    }
}

