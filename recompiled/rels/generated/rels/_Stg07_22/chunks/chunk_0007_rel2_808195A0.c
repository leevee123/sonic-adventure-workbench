// DolRecomp output
#include "../generated.h"

void func_808195A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_808195A0[1013] = {
        &&label_808195A0,
        &&label_808195A4,
        &&label_808195A8,
        &&label_808195AC,
        &&label_808195B0,
        &&label_808195B4,
        &&label_808195B8,
        &&label_808195BC,
        &&label_808195C0,
        &&label_808195C4,
        &&label_808195C8,
        &&label_808195CC,
        &&label_808195D0,
        &&label_808195D4,
        &&label_808195D8,
        &&label_808195DC,
        &&label_808195E0,
        &&label_808195E4,
        &&label_808195E8,
        &&label_808195EC,
        &&label_808195F0,
        &&label_808195F4,
        &&label_808195F8,
        &&label_808195FC,
        &&label_80819600,
        &&label_80819604,
        &&label_80819608,
        &&label_8081960C,
        &&label_80819610,
        &&label_80819614,
        &&label_80819618,
        &&label_8081961C,
        &&label_80819620,
        &&label_80819624,
        &&label_80819628,
        &&label_8081962C,
        &&label_80819630,
        &&label_80819634,
        &&label_80819638,
        &&label_8081963C,
        &&label_80819640,
        &&label_80819644,
        &&label_80819648,
        &&label_8081964C,
        &&label_80819650,
        &&label_80819654,
        &&label_80819658,
        &&label_8081965C,
        &&label_80819660,
        &&label_80819664,
        &&label_80819668,
        &&label_8081966C,
        &&label_80819670,
        &&label_80819674,
        &&label_80819678,
        &&label_8081967C,
        &&label_80819680,
        &&label_80819684,
        &&label_80819688,
        &&label_8081968C,
        &&label_80819690,
        &&label_80819694,
        &&label_80819698,
        &&label_8081969C,
        &&label_808196A0,
        &&label_808196A4,
        &&label_808196A8,
        &&label_808196AC,
        &&label_808196B0,
        &&label_808196B4,
        &&label_808196B8,
        &&label_808196BC,
        &&label_808196C0,
        &&label_808196C4,
        &&label_808196C8,
        &&label_808196CC,
        &&label_808196D0,
        &&label_808196D4,
        &&label_808196D8,
        &&label_808196DC,
        &&label_808196E0,
        &&label_808196E4,
        &&label_808196E8,
        &&label_808196EC,
        &&label_808196F0,
        &&label_808196F4,
        &&label_808196F8,
        &&label_808196FC,
        &&label_80819700,
        &&label_80819704,
        &&label_80819708,
        &&label_8081970C,
        &&label_80819710,
        &&label_80819714,
        &&label_80819718,
        &&label_8081971C,
        &&label_80819720,
        &&label_80819724,
        &&label_80819728,
        &&label_8081972C,
        &&label_80819730,
        &&label_80819734,
        &&label_80819738,
        &&label_8081973C,
        &&label_80819740,
        &&label_80819744,
        &&label_80819748,
        &&label_8081974C,
        &&label_80819750,
        &&label_80819754,
        &&label_80819758,
        &&label_8081975C,
        &&label_80819760,
        &&label_80819764,
        &&label_80819768,
        &&label_8081976C,
        &&label_80819770,
        &&label_80819774,
        &&label_80819778,
        &&label_8081977C,
        &&label_80819780,
        &&label_80819784,
        &&label_80819788,
        &&label_8081978C,
        &&label_80819790,
        &&label_80819794,
        &&label_80819798,
        &&label_8081979C,
        &&label_808197A0,
        &&label_808197A4,
        &&label_808197A8,
        &&label_808197AC,
        &&label_808197B0,
        &&label_808197B4,
        &&label_808197B8,
        &&label_808197BC,
        &&label_808197C0,
        &&label_808197C4,
        &&label_808197C8,
        &&label_808197CC,
        &&label_808197D0,
        &&label_808197D4,
        &&label_808197D8,
        &&label_808197DC,
        &&label_808197E0,
        &&label_808197E4,
        &&label_808197E8,
        &&label_808197EC,
        &&label_808197F0,
        &&label_808197F4,
        &&label_808197F8,
        &&label_808197FC,
        &&label_80819800,
        &&label_80819804,
        &&label_80819808,
        &&label_8081980C,
        &&label_80819810,
        &&label_80819814,
        &&label_80819818,
        &&label_8081981C,
        &&label_80819820,
        &&label_80819824,
        &&label_80819828,
        &&label_8081982C,
        &&label_80819830,
        &&label_80819834,
        &&label_80819838,
        &&label_8081983C,
        &&label_80819840,
        &&label_80819844,
        &&label_80819848,
        &&label_8081984C,
        &&label_80819850,
        &&label_80819854,
        &&label_80819858,
        &&label_8081985C,
        &&label_80819860,
        &&label_80819864,
        &&label_80819868,
        &&label_8081986C,
        &&label_80819870,
        &&label_80819874,
        &&label_80819878,
        &&label_8081987C,
        &&label_80819880,
        &&label_80819884,
        &&label_80819888,
        &&label_8081988C,
        &&label_80819890,
        &&label_80819894,
        &&label_80819898,
        &&label_8081989C,
        &&label_808198A0,
        &&label_808198A4,
        &&label_808198A8,
        &&label_808198AC,
        &&label_808198B0,
        &&label_808198B4,
        &&label_808198B8,
        &&label_808198BC,
        &&label_808198C0,
        &&label_808198C4,
        &&label_808198C8,
        &&label_808198CC,
        &&label_808198D0,
        &&label_808198D4,
        &&label_808198D8,
        &&label_808198DC,
        &&label_808198E0,
        &&label_808198E4,
        &&label_808198E8,
        &&label_808198EC,
        &&label_808198F0,
        &&label_808198F4,
        &&label_808198F8,
        &&label_808198FC,
        &&label_80819900,
        &&label_80819904,
        &&label_80819908,
        &&label_8081990C,
        &&label_80819910,
        &&label_80819914,
        &&label_80819918,
        &&label_8081991C,
        &&label_80819920,
        &&label_80819924,
        &&label_80819928,
        &&label_8081992C,
        &&label_80819930,
        &&label_80819934,
        &&label_80819938,
        &&label_8081993C,
        &&label_80819940,
        &&label_80819944,
        &&label_80819948,
        &&label_8081994C,
        &&label_80819950,
        &&label_80819954,
        &&label_80819958,
        &&label_8081995C,
        &&label_80819960,
        &&label_80819964,
        &&label_80819968,
        &&label_8081996C,
        &&label_80819970,
        &&label_80819974,
        &&label_80819978,
        &&label_8081997C,
        &&label_80819980,
        &&label_80819984,
        &&label_80819988,
        &&label_8081998C,
        &&label_80819990,
        &&label_80819994,
        &&label_80819998,
        &&label_8081999C,
        &&label_808199A0,
        &&label_808199A4,
        &&label_808199A8,
        &&label_808199AC,
        &&label_808199B0,
        &&label_808199B4,
        &&label_808199B8,
        &&label_808199BC,
        &&label_808199C0,
        &&label_808199C4,
        &&label_808199C8,
        &&label_808199CC,
        &&label_808199D0,
        &&label_808199D4,
        &&label_808199D8,
        &&label_808199DC,
        &&label_808199E0,
        &&label_808199E4,
        &&label_808199E8,
        &&label_808199EC,
        &&label_808199F0,
        &&label_808199F4,
        &&label_808199F8,
        &&label_808199FC,
        &&label_80819A00,
        &&label_80819A04,
        &&label_80819A08,
        &&label_80819A0C,
        &&label_80819A10,
        &&label_80819A14,
        &&label_80819A18,
        &&label_80819A1C,
        &&label_80819A20,
        &&label_80819A24,
        &&label_80819A28,
        &&label_80819A2C,
        &&label_80819A30,
        &&label_80819A34,
        &&label_80819A38,
        &&label_80819A3C,
        &&label_80819A40,
        &&label_80819A44,
        &&label_80819A48,
        &&label_80819A4C,
        &&label_80819A50,
        &&label_80819A54,
        &&label_80819A58,
        &&label_80819A5C,
        &&label_80819A60,
        &&label_80819A64,
        &&label_80819A68,
        &&label_80819A6C,
        &&label_80819A70,
        &&label_80819A74,
        &&label_80819A78,
        &&label_80819A7C,
        &&label_80819A80,
        &&label_80819A84,
        &&label_80819A88,
        &&label_80819A8C,
        &&label_80819A90,
        &&label_80819A94,
        &&label_80819A98,
        &&label_80819A9C,
        &&label_80819AA0,
        &&label_80819AA4,
        &&label_80819AA8,
        &&label_80819AAC,
        &&label_80819AB0,
        &&label_80819AB4,
        &&label_80819AB8,
        &&label_80819ABC,
        &&label_80819AC0,
        &&label_80819AC4,
        &&label_80819AC8,
        &&label_80819ACC,
        &&label_80819AD0,
        &&label_80819AD4,
        &&label_80819AD8,
        &&label_80819ADC,
        &&label_80819AE0,
        &&label_80819AE4,
        &&label_80819AE8,
        &&label_80819AEC,
        &&label_80819AF0,
        &&label_80819AF4,
        &&label_80819AF8,
        &&label_80819AFC,
        &&label_80819B00,
        &&label_80819B04,
        &&label_80819B08,
        &&label_80819B0C,
        &&label_80819B10,
        &&label_80819B14,
        &&label_80819B18,
        &&label_80819B1C,
        &&label_80819B20,
        &&label_80819B24,
        &&label_80819B28,
        &&label_80819B2C,
        &&label_80819B30,
        &&label_80819B34,
        &&label_80819B38,
        &&label_80819B3C,
        &&label_80819B40,
        &&label_80819B44,
        &&label_80819B48,
        &&label_80819B4C,
        &&label_80819B50,
        &&label_80819B54,
        &&label_80819B58,
        &&label_80819B5C,
        &&label_80819B60,
        &&label_80819B64,
        &&label_80819B68,
        &&label_80819B6C,
        &&label_80819B70,
        &&label_80819B74,
        &&label_80819B78,
        &&label_80819B7C,
        &&label_80819B80,
        &&label_80819B84,
        &&label_80819B88,
        &&label_80819B8C,
        &&label_80819B90,
        &&label_80819B94,
        &&label_80819B98,
        &&label_80819B9C,
        &&label_80819BA0,
        &&label_80819BA4,
        &&label_80819BA8,
        &&label_80819BAC,
        &&label_80819BB0,
        &&label_80819BB4,
        &&label_80819BB8,
        &&label_80819BBC,
        &&label_80819BC0,
        &&label_80819BC4,
        &&label_80819BC8,
        &&label_80819BCC,
        &&label_80819BD0,
        &&label_80819BD4,
        &&label_80819BD8,
        &&label_80819BDC,
        &&label_80819BE0,
        &&label_80819BE4,
        &&label_80819BE8,
        &&label_80819BEC,
        &&label_80819BF0,
        &&label_80819BF4,
        &&label_80819BF8,
        &&label_80819BFC,
        &&label_80819C00,
        &&label_80819C04,
        &&label_80819C08,
        &&label_80819C0C,
        &&label_80819C10,
        &&label_80819C14,
        &&label_80819C18,
        &&label_80819C1C,
        &&label_80819C20,
        &&label_80819C24,
        &&label_80819C28,
        &&label_80819C2C,
        &&label_80819C30,
        &&label_80819C34,
        &&label_80819C38,
        &&label_80819C3C,
        &&label_80819C40,
        &&label_80819C44,
        &&label_80819C48,
        &&label_80819C4C,
        &&label_80819C50,
        &&label_80819C54,
        &&label_80819C58,
        &&label_80819C5C,
        &&label_80819C60,
        &&label_80819C64,
        &&label_80819C68,
        &&label_80819C6C,
        &&label_80819C70,
        &&label_80819C74,
        &&label_80819C78,
        &&label_80819C7C,
        &&label_80819C80,
        &&label_80819C84,
        &&label_80819C88,
        &&label_80819C8C,
        &&label_80819C90,
        &&label_80819C94,
        &&label_80819C98,
        &&label_80819C9C,
        &&label_80819CA0,
        &&label_80819CA4,
        &&label_80819CA8,
        &&label_80819CAC,
        &&label_80819CB0,
        &&label_80819CB4,
        &&label_80819CB8,
        &&label_80819CBC,
        &&label_80819CC0,
        &&label_80819CC4,
        &&label_80819CC8,
        &&label_80819CCC,
        &&label_80819CD0,
        &&label_80819CD4,
        &&label_80819CD8,
        &&label_80819CDC,
        &&label_80819CE0,
        &&label_80819CE4,
        &&label_80819CE8,
        &&label_80819CEC,
        &&label_80819CF0,
        &&label_80819CF4,
        &&label_80819CF8,
        &&label_80819CFC,
        &&label_80819D00,
        &&label_80819D04,
        &&label_80819D08,
        &&label_80819D0C,
        &&label_80819D10,
        &&label_80819D14,
        &&label_80819D18,
        &&label_80819D1C,
        &&label_80819D20,
        &&label_80819D24,
        &&label_80819D28,
        &&label_80819D2C,
        &&label_80819D30,
        &&label_80819D34,
        &&label_80819D38,
        &&label_80819D3C,
        &&label_80819D40,
        &&label_80819D44,
        &&label_80819D48,
        &&label_80819D4C,
        &&label_80819D50,
        &&label_80819D54,
        &&label_80819D58,
        &&label_80819D5C,
        &&label_80819D60,
        &&label_80819D64,
        &&label_80819D68,
        &&label_80819D6C,
        &&label_80819D70,
        &&label_80819D74,
        &&label_80819D78,
        &&label_80819D7C,
        &&label_80819D80,
        &&label_80819D84,
        &&label_80819D88,
        &&label_80819D8C,
        &&label_80819D90,
        &&label_80819D94,
        &&label_80819D98,
        &&label_80819D9C,
        &&label_80819DA0,
        &&label_80819DA4,
        &&label_80819DA8,
        &&label_80819DAC,
        &&label_80819DB0,
        &&label_80819DB4,
        &&label_80819DB8,
        &&label_80819DBC,
        &&label_80819DC0,
        &&label_80819DC4,
        &&label_80819DC8,
        &&label_80819DCC,
        &&label_80819DD0,
        &&label_80819DD4,
        &&label_80819DD8,
        &&label_80819DDC,
        &&label_80819DE0,
        &&label_80819DE4,
        &&label_80819DE8,
        &&label_80819DEC,
        &&label_80819DF0,
        &&label_80819DF4,
        &&label_80819DF8,
        &&label_80819DFC,
        &&label_80819E00,
        &&label_80819E04,
        &&label_80819E08,
        &&label_80819E0C,
        &&label_80819E10,
        &&label_80819E14,
        &&label_80819E18,
        &&label_80819E1C,
        &&label_80819E20,
        &&label_80819E24,
        &&label_80819E28,
        &&label_80819E2C,
        &&label_80819E30,
        &&label_80819E34,
        &&label_80819E38,
        &&label_80819E3C,
        &&label_80819E40,
        &&label_80819E44,
        &&label_80819E48,
        &&label_80819E4C,
        &&label_80819E50,
        &&label_80819E54,
        &&label_80819E58,
        &&label_80819E5C,
        &&label_80819E60,
        &&label_80819E64,
        &&label_80819E68,
        &&label_80819E6C,
        &&label_80819E70,
        &&label_80819E74,
        &&label_80819E78,
        &&label_80819E7C,
        &&label_80819E80,
        &&label_80819E84,
        &&label_80819E88,
        &&label_80819E8C,
        &&label_80819E90,
        &&label_80819E94,
        &&label_80819E98,
        &&label_80819E9C,
        &&label_80819EA0,
        &&label_80819EA4,
        &&label_80819EA8,
        &&label_80819EAC,
        &&label_80819EB0,
        &&label_80819EB4,
        &&label_80819EB8,
        &&label_80819EBC,
        &&label_80819EC0,
        &&label_80819EC4,
        &&label_80819EC8,
        &&label_80819ECC,
        &&label_80819ED0,
        &&label_80819ED4,
        &&label_80819ED8,
        &&label_80819EDC,
        &&label_80819EE0,
        &&label_80819EE4,
        &&label_80819EE8,
        &&label_80819EEC,
        &&label_80819EF0,
        &&label_80819EF4,
        &&label_80819EF8,
        &&label_80819EFC,
        &&label_80819F00,
        &&label_80819F04,
        &&label_80819F08,
        &&label_80819F0C,
        &&label_80819F10,
        &&label_80819F14,
        &&label_80819F18,
        &&label_80819F1C,
        &&label_80819F20,
        &&label_80819F24,
        &&label_80819F28,
        &&label_80819F2C,
        &&label_80819F30,
        &&label_80819F34,
        &&label_80819F38,
        &&label_80819F3C,
        &&label_80819F40,
        &&label_80819F44,
        &&label_80819F48,
        &&label_80819F4C,
        &&label_80819F50,
        &&label_80819F54,
        &&label_80819F58,
        &&label_80819F5C,
        &&label_80819F60,
        &&label_80819F64,
        &&label_80819F68,
        &&label_80819F6C,
        &&label_80819F70,
        &&label_80819F74,
        &&label_80819F78,
        &&label_80819F7C,
        &&label_80819F80,
        &&label_80819F84,
        &&label_80819F88,
        &&label_80819F8C,
        &&label_80819F90,
        &&label_80819F94,
        &&label_80819F98,
        &&label_80819F9C,
        &&label_80819FA0,
        &&label_80819FA4,
        &&label_80819FA8,
        &&label_80819FAC,
        &&label_80819FB0,
        &&label_80819FB4,
        &&label_80819FB8,
        &&label_80819FBC,
        &&label_80819FC0,
        &&label_80819FC4,
        &&label_80819FC8,
        &&label_80819FCC,
        &&label_80819FD0,
        &&label_80819FD4,
        &&label_80819FD8,
        &&label_80819FDC,
        &&label_80819FE0,
        &&label_80819FE4,
        &&label_80819FE8,
        &&label_80819FEC,
        &&label_80819FF0,
        &&label_80819FF4,
        &&label_80819FF8,
        &&label_80819FFC,
        &&label_8081A000,
        &&label_8081A004,
        &&label_8081A008,
        &&label_8081A00C,
        &&label_8081A010,
        &&label_8081A014,
        &&label_8081A018,
        &&label_8081A01C,
        &&label_8081A020,
        &&label_8081A024,
        &&label_8081A028,
        &&label_8081A02C,
        &&label_8081A030,
        &&label_8081A034,
        &&label_8081A038,
        &&label_8081A03C,
        &&label_8081A040,
        &&label_8081A044,
        &&label_8081A048,
        &&label_8081A04C,
        &&label_8081A050,
        &&label_8081A054,
        &&label_8081A058,
        &&label_8081A05C,
        &&label_8081A060,
        &&label_8081A064,
        &&label_8081A068,
        &&label_8081A06C,
        &&label_8081A070,
        &&label_8081A074,
        &&label_8081A078,
        &&label_8081A07C,
        &&label_8081A080,
        &&label_8081A084,
        &&label_8081A088,
        &&label_8081A08C,
        &&label_8081A090,
        &&label_8081A094,
        &&label_8081A098,
        &&label_8081A09C,
        &&label_8081A0A0,
        &&label_8081A0A4,
        &&label_8081A0A8,
        &&label_8081A0AC,
        &&label_8081A0B0,
        &&label_8081A0B4,
        &&label_8081A0B8,
        &&label_8081A0BC,
        &&label_8081A0C0,
        &&label_8081A0C4,
        &&label_8081A0C8,
        &&label_8081A0CC,
        &&label_8081A0D0,
        &&label_8081A0D4,
        &&label_8081A0D8,
        &&label_8081A0DC,
        &&label_8081A0E0,
        &&label_8081A0E4,
        &&label_8081A0E8,
        &&label_8081A0EC,
        &&label_8081A0F0,
        &&label_8081A0F4,
        &&label_8081A0F8,
        &&label_8081A0FC,
        &&label_8081A100,
        &&label_8081A104,
        &&label_8081A108,
        &&label_8081A10C,
        &&label_8081A110,
        &&label_8081A114,
        &&label_8081A118,
        &&label_8081A11C,
        &&label_8081A120,
        &&label_8081A124,
        &&label_8081A128,
        &&label_8081A12C,
        &&label_8081A130,
        &&label_8081A134,
        &&label_8081A138,
        &&label_8081A13C,
        &&label_8081A140,
        &&label_8081A144,
        &&label_8081A148,
        &&label_8081A14C,
        &&label_8081A150,
        &&label_8081A154,
        &&label_8081A158,
        &&label_8081A15C,
        &&label_8081A160,
        &&label_8081A164,
        &&label_8081A168,
        &&label_8081A16C,
        &&label_8081A170,
        &&label_8081A174,
        &&label_8081A178,
        &&label_8081A17C,
        &&label_8081A180,
        &&label_8081A184,
        &&label_8081A188,
        &&label_8081A18C,
        &&label_8081A190,
        &&label_8081A194,
        &&label_8081A198,
        &&label_8081A19C,
        &&label_8081A1A0,
        &&label_8081A1A4,
        &&label_8081A1A8,
        &&label_8081A1AC,
        &&label_8081A1B0,
        &&label_8081A1B4,
        &&label_8081A1B8,
        &&label_8081A1BC,
        &&label_8081A1C0,
        &&label_8081A1C4,
        &&label_8081A1C8,
        &&label_8081A1CC,
        &&label_8081A1D0,
        &&label_8081A1D4,
        &&label_8081A1D8,
        &&label_8081A1DC,
        &&label_8081A1E0,
        &&label_8081A1E4,
        &&label_8081A1E8,
        &&label_8081A1EC,
        &&label_8081A1F0,
        &&label_8081A1F4,
        &&label_8081A1F8,
        &&label_8081A1FC,
        &&label_8081A200,
        &&label_8081A204,
        &&label_8081A208,
        &&label_8081A20C,
        &&label_8081A210,
        &&label_8081A214,
        &&label_8081A218,
        &&label_8081A21C,
        &&label_8081A220,
        &&label_8081A224,
        &&label_8081A228,
        &&label_8081A22C,
        &&label_8081A230,
        &&label_8081A234,
        &&label_8081A238,
        &&label_8081A23C,
        &&label_8081A240,
        &&label_8081A244,
        &&label_8081A248,
        &&label_8081A24C,
        &&label_8081A250,
        &&label_8081A254,
        &&label_8081A258,
        &&label_8081A25C,
        &&label_8081A260,
        &&label_8081A264,
        &&label_8081A268,
        &&label_8081A26C,
        &&label_8081A270,
        &&label_8081A274,
        &&label_8081A278,
        &&label_8081A27C,
        &&label_8081A280,
        &&label_8081A284,
        &&label_8081A288,
        &&label_8081A28C,
        &&label_8081A290,
        &&label_8081A294,
        &&label_8081A298,
        &&label_8081A29C,
        &&label_8081A2A0,
        &&label_8081A2A4,
        &&label_8081A2A8,
        &&label_8081A2AC,
        &&label_8081A2B0,
        &&label_8081A2B4,
        &&label_8081A2B8,
        &&label_8081A2BC,
        &&label_8081A2C0,
        &&label_8081A2C4,
        &&label_8081A2C8,
        &&label_8081A2CC,
        &&label_8081A2D0,
        &&label_8081A2D4,
        &&label_8081A2D8,
        &&label_8081A2DC,
        &&label_8081A2E0,
        &&label_8081A2E4,
        &&label_8081A2E8,
        &&label_8081A2EC,
        &&label_8081A2F0,
        &&label_8081A2F4,
        &&label_8081A2F8,
        &&label_8081A2FC,
        &&label_8081A300,
        &&label_8081A304,
        &&label_8081A308,
        &&label_8081A30C,
        &&label_8081A310,
        &&label_8081A314,
        &&label_8081A318,
        &&label_8081A31C,
        &&label_8081A320,
        &&label_8081A324,
        &&label_8081A328,
        &&label_8081A32C,
        &&label_8081A330,
        &&label_8081A334,
        &&label_8081A338,
        &&label_8081A33C,
        &&label_8081A340,
        &&label_8081A344,
        &&label_8081A348,
        &&label_8081A34C,
        &&label_8081A350,
        &&label_8081A354,
        &&label_8081A358,
        &&label_8081A35C,
        &&label_8081A360,
        &&label_8081A364,
        &&label_8081A368,
        &&label_8081A36C,
        &&label_8081A370,
        &&label_8081A374,
        &&label_8081A378,
        &&label_8081A37C,
        &&label_8081A380,
        &&label_8081A384,
        &&label_8081A388,
        &&label_8081A38C,
        &&label_8081A390,
        &&label_8081A394,
        &&label_8081A398,
        &&label_8081A39C,
        &&label_8081A3A0,
        &&label_8081A3A4,
        &&label_8081A3A8,
        &&label_8081A3AC,
        &&label_8081A3B0,
        &&label_8081A3B4,
        &&label_8081A3B8,
        &&label_8081A3BC,
        &&label_8081A3C0,
        &&label_8081A3C4,
        &&label_8081A3C8,
        &&label_8081A3CC,
        &&label_8081A3D0,
        &&label_8081A3D4,
        &&label_8081A3D8,
        &&label_8081A3DC,
        &&label_8081A3E0,
        &&label_8081A3E4,
        &&label_8081A3E8,
        &&label_8081A3EC,
        &&label_8081A3F0,
        &&label_8081A3F4,
        &&label_8081A3F8,
        &&label_8081A3FC,
        &&label_8081A400,
        &&label_8081A404,
        &&label_8081A408,
        &&label_8081A40C,
        &&label_8081A410,
        &&label_8081A414,
        &&label_8081A418,
        &&label_8081A41C,
        &&label_8081A420,
        &&label_8081A424,
        &&label_8081A428,
        &&label_8081A42C,
        &&label_8081A430,
        &&label_8081A434,
        &&label_8081A438,
        &&label_8081A43C,
        &&label_8081A440,
        &&label_8081A444,
        &&label_8081A448,
        &&label_8081A44C,
        &&label_8081A450,
        &&label_8081A454,
        &&label_8081A458,
        &&label_8081A45C,
        &&label_8081A460,
        &&label_8081A464,
        &&label_8081A468,
        &&label_8081A46C,
        &&label_8081A470,
        &&label_8081A474,
        &&label_8081A478,
        &&label_8081A47C,
        &&label_8081A480,
        &&label_8081A484,
        &&label_8081A488,
        &&label_8081A48C,
        &&label_8081A490,
        &&label_8081A494,
        &&label_8081A498,
        &&label_8081A49C,
        &&label_8081A4A0,
        &&label_8081A4A4,
        &&label_8081A4A8,
        &&label_8081A4AC,
        &&label_8081A4B0,
        &&label_8081A4B4,
        &&label_8081A4B8,
        &&label_8081A4BC,
        &&label_8081A4C0,
        &&label_8081A4C4,
        &&label_8081A4C8,
        &&label_8081A4CC,
        &&label_8081A4D0,
        &&label_8081A4D4,
        &&label_8081A4D8,
        &&label_8081A4DC,
        &&label_8081A4E0,
        &&label_8081A4E4,
        &&label_8081A4E8,
        &&label_8081A4EC,
        &&label_8081A4F0,
        &&label_8081A4F4,
        &&label_8081A4F8,
        &&label_8081A4FC,
        &&label_8081A500,
        &&label_8081A504,
        &&label_8081A508,
        &&label_8081A50C,
        &&label_8081A510,
        &&label_8081A514,
        &&label_8081A518,
        &&label_8081A51C,
        &&label_8081A520,
        &&label_8081A524,
        &&label_8081A528,
        &&label_8081A52C,
        &&label_8081A530,
        &&label_8081A534,
        &&label_8081A538,
        &&label_8081A53C,
        &&label_8081A540,
        &&label_8081A544,
        &&label_8081A548,
        &&label_8081A54C,
        &&label_8081A550,
        &&label_8081A554,
        &&label_8081A558,
        &&label_8081A55C,
        &&label_8081A560,
        &&label_8081A564,
        &&label_8081A568,
        &&label_8081A56C,
        &&label_8081A570
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x808195A0u && pc <= 0x8081A570u && ((pc - 0x808195A0u) & 3u) == 0u)
            goto *pc_table_808195A0[(pc - 0x808195A0u) >> 2];
    }
    return;
label_808195A0:
    ctx->pc = 0x808195A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808195A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 808195A0: addi    r4, r3, 3192
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3192);

label_808195A4:
    ctx->pc = 0x808195A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808195A4: lfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x808195A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
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
label_808195A8:
    ctx->pc = 0x808195A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195A8u)) return;
    // 808195A8: addi    r3, r1, 488
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(488);

label_808195AC:
    ctx->pc = 0x808195ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195ACu)) return;
    // 808195AC: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x808195ACu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_808195B0:
    ctx->pc = 0x808195B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808195B0: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808195B0u)) return;
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
label_808195B4:
    ctx->pc = 0x808195B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195B4u)) return;
    // 808195B4: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x808195B4u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_808195B8:
    ctx->pc = 0x808195B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195B8u)) return;
    // 808195B8: bl      0x8003A8BC
    {
            ctx->lr = 0x808195BCu;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_808195BC:
    ctx->pc = 0x808195BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808195BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808195BC: addi    r3, r1, 440
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(440);

label_808195C0:
    ctx->pc = 0x808195C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195C0u)) return;
    // 808195C0: addi    r4, r1, 488
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(488);

label_808195C4:
    ctx->pc = 0x808195C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195C4u)) return;
    // 808195C4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_808195C8:
    ctx->pc = 0x808195C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195C8u)) return;
    // 808195C8: bl      0x8003A434
    {
            ctx->lr = 0x808195CCu;
            ctx->pc = 0x8003A434u;
            return;
    }

label_808195CC:
    ctx->pc = 0x808195CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808195CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 808195CC: addi    r3, r1, 440
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(440);

label_808195D0:
    ctx->pc = 0x808195D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195D0u)) return;
    // 808195D0: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_808195D4:
    ctx->pc = 0x808195D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195D4u)) return;
    // 808195D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_808195D8:
    ctx->pc = 0x808195D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195D8u)) return;
    // 808195D8: bl      0x8003768C
    {
            ctx->lr = 0x808195DCu;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_808195DC:
    ctx->pc = 0x808195DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 42u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808195DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 42u : 1u;
    // 808195DC: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808195E0:
    ctx->pc = 0x808195E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195E0u)) return;
    // 808195E0: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808195E4:
    ctx->pc = 0x808195E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 808195E4: lfs     f1, 3192(r4)
    if (!ppc_fp_available_inline(ctx, 0x808195E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808195E8:
    ctx->pc = 0x808195E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195E8u)) return;
    // 808195E8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_808195EC:
    ctx->pc = 0x808195ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 808195EC: lfs     f0, 3208(r3)
    if (!ppc_fp_available_inline(ctx, 0x808195ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3208);
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
label_808195F0:
    ctx->pc = 0x808195F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195F0u)) return;
    // 808195F0: addi    r3, r1, 1736
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(1736);

label_808195F4:
    ctx->pc = 0x808195F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 808195F4: lfs     f7, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x808195F4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808195F8:
    ctx->pc = 0x808195F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195F8u)) return;
    // 808195F8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_808195FC:
    ctx->pc = 0x808195FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808195FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 808195FC: lfs     f6, 20(r29)
    if (!ppc_fp_available_inline(ctx, 0x808195FCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
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
label_80819600:
    ctx->pc = 0x80819600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80819600: lfs     f11, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819600u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819604:
    ctx->pc = 0x80819604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80819604: lfs     f10, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819604u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819608:
    ctx->pc = 0x80819608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819608u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80819608: lfs     f9, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819608u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081960C:
    ctx->pc = 0x8081960Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081960Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8081960C: lfs     f8, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x8081960Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819610:
    ctx->pc = 0x80819610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80819610: lfs     f5, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819610u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
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
label_80819614:
    ctx->pc = 0x80819614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80819614: lfs     f4, 28(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819614u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
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
label_80819618:
    ctx->pc = 0x80819618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819618u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80819618: lfs     f3, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819618u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
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
label_8081961C:
    ctx->pc = 0x8081961Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081961Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8081961C: lfs     f2, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x8081961Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_80819620:
    ctx->pc = 0x80819620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80819620: stfs     f11, 1736(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1736);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819624:
    ctx->pc = 0x80819624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80819624: stfs     f10, 1760(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819624u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1760);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819628:
    ctx->pc = 0x80819628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80819628: stfs     f9, 1784(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819628u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1784);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081962C:
    ctx->pc = 0x8081962Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081962Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8081962C: stfs     f8, 1808(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081962Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1808);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819630:
    ctx->pc = 0x80819630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819630u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80819630: stfs     f7, 1788(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819630u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1788);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819634:
    ctx->pc = 0x80819634u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819634u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80819634: stfs     f7, 1740(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819634u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1740);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819638:
    ctx->pc = 0x80819638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80819638: stfs     f6, 1812(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819638u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1812);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081963C:
    ctx->pc = 0x8081963Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081963Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8081963C: stfs     f6, 1764(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081963Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1764);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819640:
    ctx->pc = 0x80819640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819640u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80819640: stfs     f5, 1744(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819640u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1744);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819644:
    ctx->pc = 0x80819644u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819644u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80819644: stfs     f4, 1768(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1768);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819648:
    ctx->pc = 0x80819648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80819648: stfs     f3, 1792(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819648u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1792);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081964C:
    ctx->pc = 0x8081964Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081964Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8081964C: stfs     f2, 1816(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081964Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1816);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819650:
    ctx->pc = 0x80819650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80819650: stfs     f1, 1800(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819650u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1800);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819654:
    ctx->pc = 0x80819654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80819654: stfs     f1, 1752(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819654u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1752);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819658:
    ctx->pc = 0x80819658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80819658: stfs     f1, 1772(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819658u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1772);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081965C:
    ctx->pc = 0x8081965Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081965Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081965C: stfs     f1, 1748(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081965Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1748);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819660:
    ctx->pc = 0x80819660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80819660: stfs     f0, 1824(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819660u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1824);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819664:
    ctx->pc = 0x80819664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819664: stfs     f0, 1776(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819664u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1776);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819668:
    ctx->pc = 0x80819668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819668u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819668: stfs     f0, 1820(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819668u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1820);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081966C:
    ctx->pc = 0x8081966Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081966Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081966C: stfs     f0, 1796(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081966Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1796);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819670:
    ctx->pc = 0x80819670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819670: stw     r0, 1828(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819674:
    ctx->pc = 0x80819674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819674u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819674: stw     r0, 1804(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819678:
    ctx->pc = 0x80819678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819678: stw     r0, 1780(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081967C:
    ctx->pc = 0x8081967Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081967Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8081967C: stw     r0, 1756(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819680:
    ctx->pc = 0x80819680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819680u)) return;
    // 80819680: bl      0x80050070
    {
            ctx->lr = 0x80819684u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80819684:
    ctx->pc = 0x80819684u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819684u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80819684: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80819688:
    ctx->pc = 0x80819688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819688: lha     r0, -5412(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5412);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081968C:
    ctx->pc = 0x8081968Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081968Cu)) return;
    // 8081968C: cmpwi   r0, 15
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80819690:
    ctx->pc = 0x80819690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819690u)) return;
    // 80819690: bc    4, 2, 0x80819C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80819C28;
        }
    }

label_80819694:
    ctx->pc = 0x80819694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80819694: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819698:
    ctx->pc = 0x80819698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819698u)) return;
    // 80819698: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_8081969C:
    ctx->pc = 0x8081969Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081969Cu)) return;
    // 8081969C: addi    r7, r3, 3144
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(3144);

label_808196A0:
    ctx->pc = 0x808196A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 808196A0: lfs     f0, 3212(r4)
    if (!ppc_fp_available_inline(ctx, 0x808196A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3212);
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
label_808196A4:
    ctx->pc = 0x808196A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808196A4: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196A8:
    ctx->pc = 0x808196A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196A8u)) return;
    // 808196A8: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808196AC:
    ctx->pc = 0x808196ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808196AC: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196B0:
    ctx->pc = 0x808196B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 808196B0: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196B4:
    ctx->pc = 0x808196B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808196B4: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196B8:
    ctx->pc = 0x808196B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 808196B8: lfs     f1, 3216(r3)
    if (!ppc_fp_available_inline(ctx, 0x808196B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196BC:
    ctx->pc = 0x808196BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808196BC: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196C0:
    ctx->pc = 0x808196C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808196C0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196C4:
    ctx->pc = 0x808196C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 808196C4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x808196C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196C8:
    ctx->pc = 0x808196C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196C8u)) return;
    // 808196C8: bl      0x8050D868
    {
            ctx->lr = 0x808196CCu;
            ctx->pc = 0x8050D868u;
            return;
    }

label_808196CC:
    ctx->pc = 0x808196CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 808196CC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_808196D0:
    ctx->pc = 0x808196D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808196D0: lwz     r0, -26728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26728);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808196D4:
    ctx->pc = 0x808196D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196D4u)) return;
    // 808196D4: rlwinm r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
    }

label_808196D8:
    ctx->pc = 0x808196D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196D8u)) return;
    // 808196D8: cmpwi   r0, 2
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

label_808196DC:
    ctx->pc = 0x808196DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196DCu)) return;
    // 808196DC: bc    12, 2, 0x80819874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80819874;
        }
    }

label_808196E0:
    ctx->pc = 0x808196E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808196E0: bc    4, 0, 0x808196F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808196F4;
        }
    }

label_808196E4:
    ctx->pc = 0x808196E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808196E4: cmpwi   r0, 0
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

label_808196E8:
    ctx->pc = 0x808196E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196E8u)) return;
    // 808196E8: bc    12, 2, 0x80819700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80819700;
        }
    }

label_808196EC:
    ctx->pc = 0x808196ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808196EC: bc    4, 0, 0x808197D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_808197D4;
        }
    }

label_808196F0:
    ctx->pc = 0x808196F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808196F0: b       0x80819A4C
    {
            goto label_80819A4C;
    }

label_808196F4:
    ctx->pc = 0x808196F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 808196F4: cmpwi   r0, 4
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

label_808196F8:
    ctx->pc = 0x808196F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808196F8u)) return;
    // 808196F8: bc    4, 0, 0x80819A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80819A4C;
        }
    }

label_808196FC:
    ctx->pc = 0x808196FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808196FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808196FC: b       0x80819948
    {
            goto label_80819948;
    }

label_80819700:
    ctx->pc = 0x80819700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819700: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819704:
    ctx->pc = 0x80819704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819704u)) return;
    // 80819704: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819708:
    ctx->pc = 0x80819708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819708u)) return;
    // 80819708: addi    r5, r3, 3220
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3220);

label_8081970C:
    ctx->pc = 0x8081970Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081970Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081970C: lfs     f0, 3224(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081970Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3224);
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
label_80819710:
    ctx->pc = 0x80819710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819710u)) return;
    // 80819710: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819714:
    ctx->pc = 0x80819714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819714u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819714: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819714u)) return;
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
label_80819718:
    ctx->pc = 0x80819718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819718u)) return;
    // 80819718: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_8081971C:
    ctx->pc = 0x8081971Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081971Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081971C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081971Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819720:
    ctx->pc = 0x80819720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819720u)) return;
    // 80819720: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819724:
    ctx->pc = 0x80819724u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819724u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819724: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819724u)) return;
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
label_80819728:
    ctx->pc = 0x80819728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819728: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819728u)) return;
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
label_8081972C:
    ctx->pc = 0x8081972Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081972Cu)) return;
    // 8081972C: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819730:
    ctx->pc = 0x80819730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819730u)) return;
    // 80819730: bl      0x8044F1A8
    {
            ctx->lr = 0x80819734u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819734:
    ctx->pc = 0x80819734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819734: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819738:
    ctx->pc = 0x80819738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819738u)) return;
    // 80819738: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_8081973C:
    ctx->pc = 0x8081973Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081973Cu)) return;
    // 8081973C: addi    r5, r3, 3232
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3232);

label_80819740:
    ctx->pc = 0x80819740u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819740u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819740: lfs     f0, 3236(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819740u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3236);
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
label_80819744:
    ctx->pc = 0x80819744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819744u)) return;
    // 80819744: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819748:
    ctx->pc = 0x80819748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819748: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819748u)) return;
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
label_8081974C:
    ctx->pc = 0x8081974Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081974Cu)) return;
    // 8081974C: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819750:
    ctx->pc = 0x80819750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819750: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819754:
    ctx->pc = 0x80819754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819754u)) return;
    // 80819754: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819758:
    ctx->pc = 0x80819758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819758u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819758: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819758u)) return;
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
label_8081975C:
    ctx->pc = 0x8081975Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081975Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081975C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081975Cu)) return;
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
label_80819760:
    ctx->pc = 0x80819760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819760u)) return;
    // 80819760: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819764:
    ctx->pc = 0x80819764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819764u)) return;
    // 80819764: bl      0x8044F1A8
    {
            ctx->lr = 0x80819768u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819768:
    ctx->pc = 0x80819768u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819768u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819768: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081976C:
    ctx->pc = 0x8081976Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081976Cu)) return;
    // 8081976C: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819770:
    ctx->pc = 0x80819770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819770u)) return;
    // 80819770: addi    r5, r3, 3240
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3240);

label_80819774:
    ctx->pc = 0x80819774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819774u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819774: lfs     f0, 3244(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819774u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3244);
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
label_80819778:
    ctx->pc = 0x80819778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819778u)) return;
    // 80819778: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081977C:
    ctx->pc = 0x8081977Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081977Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081977C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081977Cu)) return;
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
label_80819780:
    ctx->pc = 0x80819780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819780u)) return;
    // 80819780: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819784:
    ctx->pc = 0x80819784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819784u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819784: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819788:
    ctx->pc = 0x80819788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819788u)) return;
    // 80819788: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8081978C:
    ctx->pc = 0x8081978Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081978Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081978C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081978Cu)) return;
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
label_80819790:
    ctx->pc = 0x80819790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819790u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819790: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819790u)) return;
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
label_80819794:
    ctx->pc = 0x80819794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819794u)) return;
    // 80819794: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819798:
    ctx->pc = 0x80819798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819798u)) return;
    // 80819798: bl      0x8044F1A8
    {
            ctx->lr = 0x8081979Cu;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_8081979C:
    ctx->pc = 0x8081979Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081979Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8081979C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808197A0:
    ctx->pc = 0x808197A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197A0u)) return;
    // 808197A0: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808197A4:
    ctx->pc = 0x808197A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197A4u)) return;
    // 808197A4: addi    r5, r3, 3248
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3248);

label_808197A8:
    ctx->pc = 0x808197A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808197A8: lfs     f0, 3252(r4)
    if (!ppc_fp_available_inline(ctx, 0x808197A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3252);
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
label_808197AC:
    ctx->pc = 0x808197ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197ACu)) return;
    // 808197AC: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808197B0:
    ctx->pc = 0x808197B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808197B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808197B0u)) return;
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
label_808197B4:
    ctx->pc = 0x808197B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197B4u)) return;
    // 808197B4: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_808197B8:
    ctx->pc = 0x808197B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808197B8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808197B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808197BC:
    ctx->pc = 0x808197BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197BCu)) return;
    // 808197BC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_808197C0:
    ctx->pc = 0x808197C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808197C0: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808197C0u)) return;
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
label_808197C4:
    ctx->pc = 0x808197C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808197C4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808197C4u)) return;
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
label_808197C8:
    ctx->pc = 0x808197C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197C8u)) return;
    // 808197C8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_808197CC:
    ctx->pc = 0x808197CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197CCu)) return;
    // 808197CC: bl      0x8044F1A8
    {
            ctx->lr = 0x808197D0u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_808197D0:
    ctx->pc = 0x808197D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808197D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 808197D0: b       0x80819A4C
    {
            goto label_80819A4C;
    }

label_808197D4:
    ctx->pc = 0x808197D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808197D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 808197D4: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808197D8:
    ctx->pc = 0x808197D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197D8u)) return;
    // 808197D8: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808197DC:
    ctx->pc = 0x808197DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197DCu)) return;
    // 808197DC: addi    r5, r3, 3256
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3256);

label_808197E0:
    ctx->pc = 0x808197E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808197E0: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x808197E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_808197E4:
    ctx->pc = 0x808197E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197E4u)) return;
    // 808197E4: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808197E8:
    ctx->pc = 0x808197E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808197E8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808197E8u)) return;
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
label_808197EC:
    ctx->pc = 0x808197ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197ECu)) return;
    // 808197EC: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_808197F0:
    ctx->pc = 0x808197F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808197F0: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808197F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808197F4:
    ctx->pc = 0x808197F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197F4u)) return;
    // 808197F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_808197F8:
    ctx->pc = 0x808197F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808197F8: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808197F8u)) return;
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
label_808197FC:
    ctx->pc = 0x808197FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808197FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808197FC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808197FCu)) return;
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
label_80819800:
    ctx->pc = 0x80819800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819800u)) return;
    // 80819800: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819804:
    ctx->pc = 0x80819804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819804u)) return;
    // 80819804: bl      0x8044F1A8
    {
            ctx->lr = 0x80819808u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819808:
    ctx->pc = 0x80819808u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819808u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819808: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081980C:
    ctx->pc = 0x8081980Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081980Cu)) return;
    // 8081980C: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819810:
    ctx->pc = 0x80819810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819810u)) return;
    // 80819810: addi    r5, r3, 3264
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3264);

label_80819814:
    ctx->pc = 0x80819814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819814: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819814u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_80819818:
    ctx->pc = 0x80819818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819818u)) return;
    // 80819818: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081981C:
    ctx->pc = 0x8081981Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081981Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081981C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081981Cu)) return;
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
label_80819820:
    ctx->pc = 0x80819820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819820u)) return;
    // 80819820: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819824:
    ctx->pc = 0x80819824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819824u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819824: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819824u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819828:
    ctx->pc = 0x80819828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819828u)) return;
    // 80819828: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8081982C:
    ctx->pc = 0x8081982Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081982Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081982C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081982Cu)) return;
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
label_80819830:
    ctx->pc = 0x80819830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819830u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819830: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819830u)) return;
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
label_80819834:
    ctx->pc = 0x80819834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819834u)) return;
    // 80819834: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819838:
    ctx->pc = 0x80819838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819838u)) return;
    // 80819838: bl      0x8044F1A8
    {
            ctx->lr = 0x8081983Cu;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_8081983C:
    ctx->pc = 0x8081983Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081983Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8081983C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819840:
    ctx->pc = 0x80819840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819840u)) return;
    // 80819840: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819844:
    ctx->pc = 0x80819844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819844u)) return;
    // 80819844: addi    r5, r3, 3268
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3268);

label_80819848:
    ctx->pc = 0x80819848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819848: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819848u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_8081984C:
    ctx->pc = 0x8081984Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081984Cu)) return;
    // 8081984C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819850:
    ctx->pc = 0x80819850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819850: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819850u)) return;
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
label_80819854:
    ctx->pc = 0x80819854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819854u)) return;
    // 80819854: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819858:
    ctx->pc = 0x80819858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819858: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819858u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081985C:
    ctx->pc = 0x8081985Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081985Cu)) return;
    // 8081985C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819860:
    ctx->pc = 0x80819860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819860: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819860u)) return;
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
label_80819864:
    ctx->pc = 0x80819864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819864: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819864u)) return;
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
label_80819868:
    ctx->pc = 0x80819868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819868u)) return;
    // 80819868: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_8081986C:
    ctx->pc = 0x8081986Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081986Cu)) return;
    // 8081986C: bl      0x8044F1A8
    {
            ctx->lr = 0x80819870u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819870:
    ctx->pc = 0x80819870u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819870u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819870: b       0x80819A4C
    {
            goto label_80819A4C;
    }

label_80819874:
    ctx->pc = 0x80819874u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819874u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819874: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819878:
    ctx->pc = 0x80819878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819878u)) return;
    // 80819878: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_8081987C:
    ctx->pc = 0x8081987Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081987Cu)) return;
    // 8081987C: addi    r5, r3, 3272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3272);

label_80819880:
    ctx->pc = 0x80819880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819880: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819880u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_80819884:
    ctx->pc = 0x80819884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819884u)) return;
    // 80819884: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819888:
    ctx->pc = 0x80819888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819888: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819888u)) return;
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
label_8081988C:
    ctx->pc = 0x8081988Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081988Cu)) return;
    // 8081988C: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819890:
    ctx->pc = 0x80819890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819890: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819890u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819894:
    ctx->pc = 0x80819894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819894u)) return;
    // 80819894: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819898:
    ctx->pc = 0x80819898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819898: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819898u)) return;
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
label_8081989C:
    ctx->pc = 0x8081989Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081989Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081989C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081989Cu)) return;
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
label_808198A0:
    ctx->pc = 0x808198A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198A0u)) return;
    // 808198A0: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_808198A4:
    ctx->pc = 0x808198A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198A4u)) return;
    // 808198A4: bl      0x8044F1A8
    {
            ctx->lr = 0x808198A8u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_808198A8:
    ctx->pc = 0x808198A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808198A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 808198A8: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808198AC:
    ctx->pc = 0x808198ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198ACu)) return;
    // 808198AC: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808198B0:
    ctx->pc = 0x808198B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198B0u)) return;
    // 808198B0: addi    r5, r3, 3276
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3276);

label_808198B4:
    ctx->pc = 0x808198B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808198B4: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x808198B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_808198B8:
    ctx->pc = 0x808198B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198B8u)) return;
    // 808198B8: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808198BC:
    ctx->pc = 0x808198BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808198BC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808198BCu)) return;
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
label_808198C0:
    ctx->pc = 0x808198C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198C0u)) return;
    // 808198C0: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_808198C4:
    ctx->pc = 0x808198C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808198C4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808198C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808198C8:
    ctx->pc = 0x808198C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198C8u)) return;
    // 808198C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_808198CC:
    ctx->pc = 0x808198CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808198CC: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808198CCu)) return;
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
label_808198D0:
    ctx->pc = 0x808198D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808198D0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808198D0u)) return;
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
label_808198D4:
    ctx->pc = 0x808198D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198D4u)) return;
    // 808198D4: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_808198D8:
    ctx->pc = 0x808198D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198D8u)) return;
    // 808198D8: bl      0x8044F1A8
    {
            ctx->lr = 0x808198DCu;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_808198DC:
    ctx->pc = 0x808198DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808198DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 808198DC: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808198E0:
    ctx->pc = 0x808198E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198E0u)) return;
    // 808198E0: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808198E4:
    ctx->pc = 0x808198E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198E4u)) return;
    // 808198E4: addi    r5, r3, 3280
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3280);

label_808198E8:
    ctx->pc = 0x808198E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808198E8: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x808198E8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_808198EC:
    ctx->pc = 0x808198ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198ECu)) return;
    // 808198EC: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808198F0:
    ctx->pc = 0x808198F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808198F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808198F0u)) return;
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
label_808198F4:
    ctx->pc = 0x808198F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198F4u)) return;
    // 808198F4: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_808198F8:
    ctx->pc = 0x808198F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808198F8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808198F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808198FC:
    ctx->pc = 0x808198FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808198FCu)) return;
    // 808198FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819900:
    ctx->pc = 0x80819900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819900: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819900u)) return;
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
label_80819904:
    ctx->pc = 0x80819904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819904u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819904: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819904u)) return;
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
label_80819908:
    ctx->pc = 0x80819908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819908u)) return;
    // 80819908: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_8081990C:
    ctx->pc = 0x8081990Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081990Cu)) return;
    // 8081990C: bl      0x8044F1A8
    {
            ctx->lr = 0x80819910u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819910:
    ctx->pc = 0x80819910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819910: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819914:
    ctx->pc = 0x80819914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819914u)) return;
    // 80819914: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819918:
    ctx->pc = 0x80819918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819918u)) return;
    // 80819918: addi    r5, r3, 3284
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3284);

label_8081991C:
    ctx->pc = 0x8081991Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081991Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081991C: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081991Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_80819920:
    ctx->pc = 0x80819920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819920u)) return;
    // 80819920: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819924:
    ctx->pc = 0x80819924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819924: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819924u)) return;
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
label_80819928:
    ctx->pc = 0x80819928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819928u)) return;
    // 80819928: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_8081992C:
    ctx->pc = 0x8081992Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081992Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081992C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081992Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819930:
    ctx->pc = 0x80819930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819930u)) return;
    // 80819930: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819934:
    ctx->pc = 0x80819934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819934: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819934u)) return;
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
label_80819938:
    ctx->pc = 0x80819938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819938: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819938u)) return;
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
label_8081993C:
    ctx->pc = 0x8081993Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081993Cu)) return;
    // 8081993C: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819940:
    ctx->pc = 0x80819940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819940u)) return;
    // 80819940: bl      0x8044F1A8
    {
            ctx->lr = 0x80819944u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819944:
    ctx->pc = 0x80819944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819944: b       0x80819A4C
    {
            goto label_80819A4C;
    }

label_80819948:
    ctx->pc = 0x80819948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819948: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081994C:
    ctx->pc = 0x8081994Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081994Cu)) return;
    // 8081994C: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819950:
    ctx->pc = 0x80819950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819950u)) return;
    // 80819950: addi    r5, r3, 3288
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3288);

label_80819954:
    ctx->pc = 0x80819954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819954: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819954u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_80819958:
    ctx->pc = 0x80819958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819958u)) return;
    // 80819958: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081995C:
    ctx->pc = 0x8081995Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081995Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081995C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081995Cu)) return;
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
label_80819960:
    ctx->pc = 0x80819960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819960u)) return;
    // 80819960: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819964:
    ctx->pc = 0x80819964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819964u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819964: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819968:
    ctx->pc = 0x80819968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819968u)) return;
    // 80819968: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8081996C:
    ctx->pc = 0x8081996Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081996Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081996C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081996Cu)) return;
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
label_80819970:
    ctx->pc = 0x80819970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819970: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819970u)) return;
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
label_80819974:
    ctx->pc = 0x80819974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819974u)) return;
    // 80819974: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819978:
    ctx->pc = 0x80819978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819978u)) return;
    // 80819978: bl      0x8044F1A8
    {
            ctx->lr = 0x8081997Cu;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_8081997C:
    ctx->pc = 0x8081997Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081997Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 8081997C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819980:
    ctx->pc = 0x80819980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819980u)) return;
    // 80819980: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819984:
    ctx->pc = 0x80819984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819984u)) return;
    // 80819984: addi    r5, r3, 3292
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3292);

label_80819988:
    ctx->pc = 0x80819988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819988: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819988u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_8081998C:
    ctx->pc = 0x8081998Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081998Cu)) return;
    // 8081998C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819990:
    ctx->pc = 0x80819990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819990: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819990u)) return;
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
label_80819994:
    ctx->pc = 0x80819994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819994u)) return;
    // 80819994: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819998:
    ctx->pc = 0x80819998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819998: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081999C:
    ctx->pc = 0x8081999Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081999Cu)) return;
    // 8081999C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_808199A0:
    ctx->pc = 0x808199A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808199A0: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808199A0u)) return;
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
label_808199A4:
    ctx->pc = 0x808199A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808199A4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808199A4u)) return;
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
label_808199A8:
    ctx->pc = 0x808199A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199A8u)) return;
    // 808199A8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_808199AC:
    ctx->pc = 0x808199ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199ACu)) return;
    // 808199AC: bl      0x8044F1A8
    {
            ctx->lr = 0x808199B0u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_808199B0:
    ctx->pc = 0x808199B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808199B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 808199B0: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808199B4:
    ctx->pc = 0x808199B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199B4u)) return;
    // 808199B4: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808199B8:
    ctx->pc = 0x808199B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199B8u)) return;
    // 808199B8: addi    r5, r3, 3296
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3296);

label_808199BC:
    ctx->pc = 0x808199BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808199BC: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x808199BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_808199C0:
    ctx->pc = 0x808199C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199C0u)) return;
    // 808199C0: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808199C4:
    ctx->pc = 0x808199C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808199C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808199C4u)) return;
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
label_808199C8:
    ctx->pc = 0x808199C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199C8u)) return;
    // 808199C8: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_808199CC:
    ctx->pc = 0x808199CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 808199CC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x808199CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_808199D0:
    ctx->pc = 0x808199D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199D0u)) return;
    // 808199D0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_808199D4:
    ctx->pc = 0x808199D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 808199D4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x808199D4u)) return;
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
label_808199D8:
    ctx->pc = 0x808199D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 808199D8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x808199D8u)) return;
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
label_808199DC:
    ctx->pc = 0x808199DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199DCu)) return;
    // 808199DC: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_808199E0:
    ctx->pc = 0x808199E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199E0u)) return;
    // 808199E0: bl      0x8044F1A8
    {
            ctx->lr = 0x808199E4u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_808199E4:
    ctx->pc = 0x808199E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x808199E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 808199E4: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808199E8:
    ctx->pc = 0x808199E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199E8u)) return;
    // 808199E8: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_808199EC:
    ctx->pc = 0x808199ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199ECu)) return;
    // 808199EC: addi    r5, r3, 3300
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3300);

label_808199F0:
    ctx->pc = 0x808199F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 808199F0: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x808199F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_808199F4:
    ctx->pc = 0x808199F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199F4u)) return;
    // 808199F4: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_808199F8:
    ctx->pc = 0x808199F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 808199F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x808199F8u)) return;
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
label_808199FC:
    ctx->pc = 0x808199FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x808199FCu)) return;
    // 808199FC: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819A00:
    ctx->pc = 0x80819A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819A00: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A04:
    ctx->pc = 0x80819A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A04u)) return;
    // 80819A04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819A08:
    ctx->pc = 0x80819A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819A08: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A08u)) return;
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
label_80819A0C:
    ctx->pc = 0x80819A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819A0C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819A0Cu)) return;
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
label_80819A10:
    ctx->pc = 0x80819A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A10u)) return;
    // 80819A10: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819A14:
    ctx->pc = 0x80819A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A14u)) return;
    // 80819A14: bl      0x8044F1A8
    {
            ctx->lr = 0x80819A18u;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819A18:
    ctx->pc = 0x80819A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80819A18: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819A1C:
    ctx->pc = 0x80819A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A1Cu)) return;
    // 80819A1C: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819A20:
    ctx->pc = 0x80819A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A20u)) return;
    // 80819A20: addi    r5, r3, 3304
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3304);

label_80819A24:
    ctx->pc = 0x80819A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819A24: lfs     f0, 3260(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819A24u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3260);
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
label_80819A28:
    ctx->pc = 0x80819A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A28u)) return;
    // 80819A28: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819A2C:
    ctx->pc = 0x80819A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819A2C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819A2Cu)) return;
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
label_80819A30:
    ctx->pc = 0x80819A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A30u)) return;
    // 80819A30: addi    r4, r3, 3228
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3228);

label_80819A34:
    ctx->pc = 0x80819A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819A34: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A38:
    ctx->pc = 0x80819A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A38u)) return;
    // 80819A38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80819A3C:
    ctx->pc = 0x80819A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819A3C: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A3Cu)) return;
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
label_80819A40:
    ctx->pc = 0x80819A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819A40: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819A40u)) return;
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
label_80819A44:
    ctx->pc = 0x80819A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A44u)) return;
    // 80819A44: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80819A48:
    ctx->pc = 0x80819A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A48u)) return;
    // 80819A48: bl      0x8044F1A8
    {
            ctx->lr = 0x80819A4Cu;
            ctx->pc = 0x8044F1A8u;
            return;
    }

label_80819A4C:
    ctx->pc = 0x80819A4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819A4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80819A4C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819A50:
    ctx->pc = 0x80819A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80819A50: lfs     f1, 3192(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819A50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A54:
    ctx->pc = 0x80819A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A54u)) return;
    // 80819A54: bl      0x8050D868
    {
            ctx->lr = 0x80819A58u;
            ctx->pc = 0x8050D868u;
            return;
    }

label_80819A58:
    ctx->pc = 0x80819A58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819A58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819A58: b       0x80819C28
    {
            goto label_80819C28;
    }

label_80819A5C:
    ctx->pc = 0x80819A5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819A5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    // 80819A5C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819A60:
    ctx->pc = 0x80819A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A60u)) return;
    // 80819A60: addi    r4, r31, 420
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(420);

label_80819A64:
    ctx->pc = 0x80819A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80819A64: lfs     f1, 48(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819A64u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A68:
    ctx->pc = 0x80819A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A68u)) return;
    // 80819A68: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80819A6C:
    ctx->pc = 0x80819A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819A6C: lfs     f0, 3192(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819A6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3192);
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
label_80819A70:
    ctx->pc = 0x80819A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A70u)) return;
    // 80819A70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80819A74:
    ctx->pc = 0x80819A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819A74: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A78:
    ctx->pc = 0x80819A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A78u)) return;
    // 80819A78: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80819A7C:
    ctx->pc = 0x80819A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819A7C: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A80:
    ctx->pc = 0x80819A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819A80: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A80u)) return;
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
label_80819A84:
    ctx->pc = 0x80819A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819A84: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A88:
    ctx->pc = 0x80819A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819A88: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A8C:
    ctx->pc = 0x80819A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80819A8C: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819A90:
    ctx->pc = 0x80819A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A90u)) return;
    // 80819A90: bl      0x80035FF4
    {
            ctx->lr = 0x80819A94u;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_80819A94:
    ctx->pc = 0x80819A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80819A94: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80819A98:
    ctx->pc = 0x80819A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A98u)) return;
    // 80819A98: addi    r29, r31, 420
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(420);

label_80819A9C:
    ctx->pc = 0x80819A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80819A9C: lwz     r5, -26724(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-26724);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AA0:
    ctx->pc = 0x80819AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AA0u)) return;
    // 80819AA0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80819AA4:
    ctx->pc = 0x80819AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80819AA4: lbz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AA8:
    ctx->pc = 0x80819AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AA8u)) return;
    // 80819AA8: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819AAC:
    ctx->pc = 0x80819AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80819AAC: stw     r0, 3008(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3008);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AB0:
    ctx->pc = 0x80819AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AB0u)) return;
    // 80819AB0: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819AB4:
    ctx->pc = 0x80819AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AB4u)) return;
    // 80819AB4: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80819AB8:
    ctx->pc = 0x80819AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819AB8: lfd     f1, 3320(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819AB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3320);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819ABC:
    ctx->pc = 0x80819ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ABCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819ABC: stw     r0, 3012(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3012);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AC0:
    ctx->pc = 0x80819AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819AC0: lfd     f2, 3200(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819AC0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AC4:
    ctx->pc = 0x80819AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819AC4: lfd     f0, 3008(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819AC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3008);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AC8:
    ctx->pc = 0x80819AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AC8u)) return;
    // 80819AC8: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80819AC8u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_80819ACC:
    ctx->pc = 0x80819ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ACCu)) return;
    // 80819ACC: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x80819ACCu)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_80819AD0:
    ctx->pc = 0x80819AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AD0u)) return;
    // 80819AD0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80819AD0u)) return;
    ppc_frsp(ctx, 1, 1);

label_80819AD4:
    ctx->pc = 0x80819AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AD4u)) return;
    // 80819AD4: bl      0x80014034
    {
            ctx->lr = 0x80819AD8u;
            ctx->pc = 0x80014034u;
            return;
    }

label_80819AD8:
    ctx->pc = 0x80819AD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819AD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80819AD8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_80819ADC:
    ctx->pc = 0x80819ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ADCu)) return;
    // 80819ADC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_80819AE0:
    ctx->pc = 0x80819AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AE0u)) return;
    // 80819AE0: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_80819AE4:
    ctx->pc = 0x80819AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80819AE4: stw     r0, 3000(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AE8:
    ctx->pc = 0x80819AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80819AE8: lwz     r5, 0(r4)
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
label_80819AEC:
    ctx->pc = 0x80819AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AECu)) return;
    // 80819AEC: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819AF0:
    ctx->pc = 0x80819AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80819AF0: lbz     r4, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819AF4:
    ctx->pc = 0x80819AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AF4u)) return;
    // 80819AF4: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819AF8:
    ctx->pc = 0x80819AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AF8u)) return;
    // 80819AF8: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80819AF8u)) return;
    ppc_frsp(ctx, 31, 1);

label_80819AFC:
    ctx->pc = 0x80819AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80819AFC: lfd     f2, 3320(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819AFCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3320);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B00:
    ctx->pc = 0x80819B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B00u)) return;
    // 80819B00: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_80819B04:
    ctx->pc = 0x80819B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819B04: lfd     f1, 3200(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819B04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B08:
    ctx->pc = 0x80819B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819B08: stw     r0, 3004(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B0C:
    ctx->pc = 0x80819B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819B0C: lfd     f0, 3000(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3000);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B10:
    ctx->pc = 0x80819B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B10u)) return;
    // 80819B10: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80819B10u)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_80819B14:
    ctx->pc = 0x80819B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B14u)) return;
    // 80819B14: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80819B14u)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_80819B18:
    ctx->pc = 0x80819B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B18u)) return;
    // 80819B18: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80819B18u)) return;
    ppc_frsp(ctx, 1, 1);

label_80819B1C:
    ctx->pc = 0x80819B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B1Cu)) return;
    // 80819B1C: bl      0x80013948
    {
            ctx->lr = 0x80819B20u;
            ctx->pc = 0x80013948u;
            return;
    }

label_80819B20:
    ctx->pc = 0x80819B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80819B20: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819B24:
    ctx->pc = 0x80819B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B24u)) return;
    // 80819B24: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80819B24u)) return;
    ppc_frsp(ctx, 1, 1);

label_80819B28:
    ctx->pc = 0x80819B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819B28: lfs     f3, 3192(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819B28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3192);
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
label_80819B2C:
    ctx->pc = 0x80819B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B2Cu)) return;
    // 80819B2C: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80819B2Cu)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80819B30:
    ctx->pc = 0x80819B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B30u)) return;
    // 80819B30: addi    r3, r1, 344
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(344);

label_80819B34:
    ctx->pc = 0x80819B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B34u)) return;
    // 80819B34: bl      0x8003A888
    {
            ctx->lr = 0x80819B38u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_80819B38:
    ctx->pc = 0x80819B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819B38: lfs     f2, 52(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819B38u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
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
label_80819B3C:
    ctx->pc = 0x80819B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B3Cu)) return;
    // 80819B3C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819B40:
    ctx->pc = 0x80819B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819B40: lfs     f1, 40(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819B40u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B44:
    ctx->pc = 0x80819B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B44u)) return;
    // 80819B44: addi    r4, r3, 3192
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3192);

label_80819B48:
    ctx->pc = 0x80819B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819B48: lfs     f0, 44(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819B48u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
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
label_80819B4C:
    ctx->pc = 0x80819B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B4Cu)) return;
    // 80819B4C: addi    r3, r1, 392
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(392);

label_80819B50:
    ctx->pc = 0x80819B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B50u)) return;
    // 80819B50: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80819B50u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_80819B54:
    ctx->pc = 0x80819B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819B54: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819B54u)) return;
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
label_80819B58:
    ctx->pc = 0x80819B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B58u)) return;
    // 80819B58: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80819B58u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_80819B5C:
    ctx->pc = 0x80819B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B5Cu)) return;
    // 80819B5C: bl      0x8003A8BC
    {
            ctx->lr = 0x80819B60u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_80819B60:
    ctx->pc = 0x80819B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80819B60: addi    r3, r1, 344
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(344);

label_80819B64:
    ctx->pc = 0x80819B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B64u)) return;
    // 80819B64: addi    r4, r1, 392
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(392);

label_80819B68:
    ctx->pc = 0x80819B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B68u)) return;
    // 80819B68: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80819B6C:
    ctx->pc = 0x80819B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B6Cu)) return;
    // 80819B6C: bl      0x8003A434
    {
            ctx->lr = 0x80819B70u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_80819B70:
    ctx->pc = 0x80819B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80819B70: addi    r3, r1, 344
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(344);

label_80819B74:
    ctx->pc = 0x80819B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B74u)) return;
    // 80819B74: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_80819B78:
    ctx->pc = 0x80819B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B78u)) return;
    // 80819B78: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80819B7C:
    ctx->pc = 0x80819B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B7Cu)) return;
    // 80819B7C: bl      0x8003768C
    {
            ctx->lr = 0x80819B80u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_80819B80:
    ctx->pc = 0x80819B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 42u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 42u : 1u;
    // 80819B80: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_80819B84:
    ctx->pc = 0x80819B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B84u)) return;
    // 80819B84: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819B88:
    ctx->pc = 0x80819B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 80819B88: lfs     f1, 3192(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819B88u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B8C:
    ctx->pc = 0x80819B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B8Cu)) return;
    // 80819B8C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_80819B90:
    ctx->pc = 0x80819B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80819B90: lfs     f0, 3208(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819B90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3208);
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
label_80819B94:
    ctx->pc = 0x80819B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B94u)) return;
    // 80819B94: addi    r3, r1, 1640
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(1640);

label_80819B98:
    ctx->pc = 0x80819B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80819B98: lfs     f7, 16(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819B98u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819B9C:
    ctx->pc = 0x80819B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819B9Cu)) return;
    // 80819B9C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80819BA0:
    ctx->pc = 0x80819BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80819BA0: lfs     f6, 20(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BA0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
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
label_80819BA4:
    ctx->pc = 0x80819BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80819BA4: lfs     f11, 420(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819BA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BA8:
    ctx->pc = 0x80819BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80819BA8: lfs     f10, 4(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BA8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BAC:
    ctx->pc = 0x80819BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80819BAC: lfs     f9, 8(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BB0:
    ctx->pc = 0x80819BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80819BB0: lfs     f8, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BB0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BB4:
    ctx->pc = 0x80819BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80819BB4: lfs     f5, 24(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BB4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
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
label_80819BB8:
    ctx->pc = 0x80819BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80819BB8: lfs     f4, 28(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BB8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
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
label_80819BBC:
    ctx->pc = 0x80819BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80819BBC: lfs     f3, 32(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BBCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
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
label_80819BC0:
    ctx->pc = 0x80819BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80819BC0: lfs     f2, 36(r29)
    if (!ppc_fp_available_inline(ctx, 0x80819BC0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
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
label_80819BC4:
    ctx->pc = 0x80819BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80819BC4: stfs     f11, 1640(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1640);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BC8:
    ctx->pc = 0x80819BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80819BC8: stfs     f10, 1664(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1664);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BCC:
    ctx->pc = 0x80819BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80819BCC: stfs     f9, 1688(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1688);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BD0:
    ctx->pc = 0x80819BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80819BD0: stfs     f8, 1712(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1712);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BD4:
    ctx->pc = 0x80819BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80819BD4: stfs     f7, 1692(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1692);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BD8:
    ctx->pc = 0x80819BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80819BD8: stfs     f7, 1644(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1644);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BDC:
    ctx->pc = 0x80819BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80819BDC: stfs     f6, 1716(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1716);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BE0:
    ctx->pc = 0x80819BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80819BE0: stfs     f6, 1668(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1668);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BE4:
    ctx->pc = 0x80819BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80819BE4: stfs     f5, 1648(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1648);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BE8:
    ctx->pc = 0x80819BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80819BE8: stfs     f4, 1672(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1672);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BEC:
    ctx->pc = 0x80819BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80819BEC: stfs     f3, 1696(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1696);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BF0:
    ctx->pc = 0x80819BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80819BF0: stfs     f2, 1720(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1720);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BF4:
    ctx->pc = 0x80819BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80819BF4: stfs     f1, 1704(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1704);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BF8:
    ctx->pc = 0x80819BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80819BF8: stfs     f1, 1656(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1656);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819BFC:
    ctx->pc = 0x80819BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80819BFC: stfs     f1, 1676(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819BFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1676);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C00:
    ctx->pc = 0x80819C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819C00: stfs     f1, 1652(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1652);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C04:
    ctx->pc = 0x80819C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80819C04: stfs     f0, 1728(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1728);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C08:
    ctx->pc = 0x80819C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819C08: stfs     f0, 1680(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1680);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C0C:
    ctx->pc = 0x80819C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819C0C: stfs     f0, 1724(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1724);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C10:
    ctx->pc = 0x80819C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819C10: stfs     f0, 1700(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1700);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C14:
    ctx->pc = 0x80819C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819C14: stw     r0, 1732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1732);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C18:
    ctx->pc = 0x80819C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819C18: stw     r0, 1708(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C1C:
    ctx->pc = 0x80819C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819C1C: stw     r0, 1684(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1684);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C20:
    ctx->pc = 0x80819C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80819C20: stw     r0, 1660(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(1660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C24:
    ctx->pc = 0x80819C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C24u)) return;
    // 80819C24: bl      0x80050070
    {
            ctx->lr = 0x80819C28u;
            ctx->pc = 0x80050070u;
            return;
    }

label_80819C28:
    ctx->pc = 0x80819C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819C28: bl      0x80050050
    {
            ctx->lr = 0x80819C2Cu;
            ctx->pc = 0x80050050u;
            return;
    }

label_80819C2C:
    ctx->pc = 0x80819C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80819C2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80819C30:
    ctx->pc = 0x80819C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C30u)) return;
    // 80819C30: bl      0x8003640C
    {
            ctx->lr = 0x80819C34u;
            ctx->pc = 0x8003640Cu;
            return;
    }

label_80819C34:
    ctx->pc = 0x80819C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80819C34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80819C38:
    ctx->pc = 0x80819C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C38u)) return;
    // 80819C38: bl      0x800363E4
    {
            ctx->lr = 0x80819C3Cu;
            ctx->pc = 0x800363E4u;
            return;
    }

label_80819C3C:
    ctx->pc = 0x80819C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819C3C: bl      0x8004B824
    {
            ctx->lr = 0x80819C40u;
            ctx->pc = 0x8004B824u;
            return;
    }

label_80819C40:
    ctx->pc = 0x80819C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80819C40: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_80819C44:
    ctx->pc = 0x80819C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C44u)) return;
    // 80819C44: bl      0x8004D37C
    {
            ctx->lr = 0x80819C48u;
            ctx->pc = 0x8004D37Cu;
            return;
    }

label_80819C48:
    ctx->pc = 0x80819C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80819C48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80819C4C:
    ctx->pc = 0x80819C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C4Cu)) return;
    // 80819C4C: bl      0x8004D394
    {
            ctx->lr = 0x80819C50u;
            ctx->pc = 0x8004D394u;
            return;
    }

label_80819C50:
    ctx->pc = 0x80819C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819C50: psq_l   f31, -1048(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819C50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-1048);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80819C50u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C54:
    ctx->pc = 0x80819C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80819C54: lwz     r0, 3060(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3060);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C58:
    ctx->pc = 0x80819C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819C58: lfd     f31, 3040(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3040);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C5C:
    ctx->pc = 0x80819C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819C5C: lwz     r31, 3036(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3036);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C60:
    ctx->pc = 0x80819C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819C60: lwz     r30, 3032(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3032);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C64:
    ctx->pc = 0x80819C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819C64: lwz     r29, 3028(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(3028);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C68:
    ctx->pc = 0x80819C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80819C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C6C:
    ctx->pc = 0x80819C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C6Cu)) return;
    // 80819C6C: addi    r1, r1, 3056
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(3056);

label_80819C70:
    ctx->pc = 0x80819C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C70u)) return;
    // 80819C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808195A0;
        }
    }

label_80819C74:
    ctx->pc = 0x80819C74u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 22u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819C74u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 22u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80819C74: stwu     r1, -128(r1)
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
label_80819C78:
    ctx->pc = 0x80819C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80819C78: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C78u)) return;
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
label_80819C7C:
    ctx->pc = 0x80819C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80819C7C: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819C7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80819C7Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C80:
    ctx->pc = 0x80819C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80819C80: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C84:
    ctx->pc = 0x80819C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80819C84: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80819C84u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C88:
    ctx->pc = 0x80819C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80819C88: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C8C:
    ctx->pc = 0x80819C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80819C8C: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819C8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80819C8Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C90:
    ctx->pc = 0x80819C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80819C90: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C94:
    ctx->pc = 0x80819C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80819C94: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819C94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80819C94u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C98:
    ctx->pc = 0x80819C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80819C98: stfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819C98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819C9C:
    ctx->pc = 0x80819C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819C9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80819C9C: psq_st   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819C9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80819C9Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CA0:
    ctx->pc = 0x80819CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80819CA0: stfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819CA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CA4:
    ctx->pc = 0x80819CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819CA4: psq_st   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819CA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 26u, ea, false, 0u, false, 0x80819CA4u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CA8:
    ctx->pc = 0x80819CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80819CA8: stfd     f25, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80819CA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CAC:
    ctx->pc = 0x80819CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819CAC: psq_st   f25, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80819CACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 25u, ea, false, 0u, false, 0x80819CACu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CB0:
    ctx->pc = 0x80819CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819CB0: stw     r31, 12(r1)
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
label_80819CB4:
    ctx->pc = 0x80819CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CB4u)) return;
    // 80819CB4: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80819CB8:
    ctx->pc = 0x80819CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CB8u)) return;
    // 80819CB8: lis     r4, -28070
    ctx->gpr[4] = ((u32)(s32)(-28070) << 16);

label_80819CBC:
    ctx->pc = 0x80819CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819CBC: lha     r0, -5404(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5404);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CC0:
    ctx->pc = 0x80819CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CC0u)) return;
    // 80819CC0: addi    r4, r4, -5592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5592);

label_80819CC4:
    ctx->pc = 0x80819CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CC4u)) return;
    // 80819CC4: cmpwi   r0, 1
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

label_80819CC8:
    ctx->pc = 0x80819CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CC8u)) return;
    // 80819CC8: bc    12, 2, 0x80819F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80819F24;
        }
    }

label_80819CCC:
    ctx->pc = 0x80819CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819CCC: bc    4, 0, 0x80819CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80819CDC;
        }
    }

label_80819CD0:
    ctx->pc = 0x80819CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80819CD0: cmpwi   r0, 0
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

label_80819CD4:
    ctx->pc = 0x80819CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CD4u)) return;
    // 80819CD4: bc    4, 0, 0x80819CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80819CE8;
        }
    }

label_80819CD8:
    ctx->pc = 0x80819CD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819CD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819CD8: b       0x8081A328
    {
            goto label_8081A328;
    }

label_80819CDC:
    ctx->pc = 0x80819CDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819CDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80819CDC: cmpwi   r0, 3
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

label_80819CE0:
    ctx->pc = 0x80819CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CE0u)) return;
    // 80819CE0: bc    4, 0, 0x8081A328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8081A328;
        }
    }

label_80819CE4:
    ctx->pc = 0x80819CE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819CE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80819CE4: b       0x8081A280
    {
            goto label_8081A280;
    }

label_80819CE8:
    ctx->pc = 0x80819CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 207u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 207u : 1u;
    // 80819CE8: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_80819CEC:
    ctx->pc = 0x80819CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CECu)) return;
    // 80819CEC: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819CF0:
    ctx->pc = 0x80819CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 204u : 0u;
    // 80819CF0: lfs     f7, 3328(r7)
    if (!ppc_fp_available_inline(ctx, 0x80819CF0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3328);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819CF4:
    ctx->pc = 0x80819CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CF4u)) return;
    // 80819CF4: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_80819CF8:
    ctx->pc = 0x80819CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 202u : 0u;
    // 80819CF8: lfs     f6, 3332(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819CF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3332);
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
label_80819CFC:
    ctx->pc = 0x80819CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819CFCu)) return;
    // 80819CFC: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819D00:
    ctx->pc = 0x80819D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 200u : 0u;
    // 80819D00: lfs     f5, 3336(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819D00u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3336);
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
label_80819D04:
    ctx->pc = 0x80819D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D04u)) return;
    // 80819D04: addi    r31, r4, 420
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(420);

label_80819D08:
    ctx->pc = 0x80819D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 198u : 0u;
    // 80819D08: lfs     f4, 3340(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819D08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3340);
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
label_80819D0C:
    ctx->pc = 0x80819D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D0Cu)) return;
    // 80819D0C: fsubs   f0, f6, f7
    if (!ppc_fp_available_inline(ctx, 0x80819D0Cu)) return;
    ppc_fsubs(ctx, 0, 6, 7);

label_80819D10:
    ctx->pc = 0x80819D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D10u)) return;
    // 80819D10: lis     r11, -28099
    ctx->gpr[11] = ((u32)(s32)(-28099) << 16);

label_80819D14:
    ctx->pc = 0x80819D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D14u)) return;
    // 80819D14: lis     r10, -28099
    ctx->gpr[10] = ((u32)(s32)(-28099) << 16);

label_80819D18:
    ctx->pc = 0x80819D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D18u)) return;
    // 80819D18: fsubs   f1, f4, f5
    if (!ppc_fp_available_inline(ctx, 0x80819D18u)) return;
    ppc_fsubs(ctx, 1, 4, 5);

label_80819D1C:
    ctx->pc = 0x80819D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D1Cu)) return;
    // 80819D1C: addi    r12, r11, 3344
    ctx->gpr[12] = ctx->gpr[11] + (u32)(s32)(3344);

label_80819D20:
    ctx->pc = 0x80819D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 192u : 0u;
    // 80819D20: lfs     f25, 0(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819D20u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[25] = value;
        ctx->ps1[25] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D24:
    ctx->pc = 0x80819D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D24u)) return;
    // 80819D24: addi    r11, r10, 3208
    ctx->gpr[11] = ctx->gpr[10] + (u32)(s32)(3208);

label_80819D28:
    ctx->pc = 0x80819D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D28u)) return;
    // 80819D28: lis     r9, -28099
    ctx->gpr[9] = ((u32)(s32)(-28099) << 16);

label_80819D2C:
    ctx->pc = 0x80819D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80819D2Cu)) return;
    // 80819D2C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80819D2Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80819D30:
    ctx->pc = 0x80819D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D30u)) return;
    // 80819D30: addi    r10, r9, 3348
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(3348);

label_80819D34:
    ctx->pc = 0x80819D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D34u)) return;
    // 80819D34: lis     r8, -28099
    ctx->gpr[8] = ((u32)(s32)(-28099) << 16);

label_80819D38:
    ctx->pc = 0x80819D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D38u)) return;
    // 80819D38: addi    r9, r8, 3352
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(3352);

label_80819D3C:
    ctx->pc = 0x80819D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D3Cu)) return;
    // 80819D3C: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_80819D40:
    ctx->pc = 0x80819D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 168u : 0u;
    // 80819D40: lfs     f28, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819D40u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D44:
    ctx->pc = 0x80819D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D44u)) return;
    // 80819D44: fabs    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80819D44u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_80819D48:
    ctx->pc = 0x80819D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D48u)) return;
    // 80819D48: addi    r8, r7, 3356
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(3356);

label_80819D4C:
    ctx->pc = 0x80819D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 165u : 0u;
    // 80819D4C: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819D4Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
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
label_80819D50:
    ctx->pc = 0x80819D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D50u)) return;
    // 80819D50: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819D54:
    ctx->pc = 0x80819D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D54u)) return;
    // 80819D54: addi    r7, r6, 3360
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(3360);

label_80819D58:
    ctx->pc = 0x80819D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D58u)) return;
    // 80819D58: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_80819D5C:
    ctx->pc = 0x80819D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D5Cu)) return;
    // 80819D5C: frsp    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80819D5Cu)) return;
    ppc_frsp(ctx, 1, 0);

label_80819D60:
    ctx->pc = 0x80819D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D60u)) return;
    // 80819D60: addi    r6, r5, 3364
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(3364);

label_80819D64:
    ctx->pc = 0x80819D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D64u)) return;
    // 80819D64: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819D68:
    ctx->pc = 0x80819D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 158u : 0u;
    // 80819D68: lfs     f26, 0(r11)
    if (!ppc_fp_available_inline(ctx, 0x80819D68u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[26] = value;
        ctx->ps1[26] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D6C:
    ctx->pc = 0x80819D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D6Cu)) return;
    // 80819D6C: addi    r5, r3, 3368
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(3368);

label_80819D70:
    ctx->pc = 0x80819D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 156u : 0u;
    // 80819D70: lfs     f27, 0(r10)
    if (!ppc_fp_available_inline(ctx, 0x80819D70u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D74:
    ctx->pc = 0x80819D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D74u)) return;
    // 80819D74: lis     r9, -32639
    ctx->gpr[9] = ((u32)(s32)(-32639) << 16);

label_80819D78:
    ctx->pc = 0x80819D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D78u)) return;
    // 80819D78: addi    r3, r4, 360
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(360);

label_80819D7C:
    ctx->pc = 0x80819D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 153u : 0u;
    // 80819D7C: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x80819D7Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
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
label_80819D80:
    ctx->pc = 0x80819D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D80u)) return;
    // 80819D80: li      r12, 5
    ctx->gpr[12] = (u32)(s32)(5);

label_80819D84:
    ctx->pc = 0x80819D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 151u : 0u;
    // 80819D84: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819D84u)) return;
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
label_80819D88:
    ctx->pc = 0x80819D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D88u)) return;
    // 80819D88: lis     r8, -28618
    ctx->gpr[8] = ((u32)(s32)(-28618) << 16);

label_80819D8C:
    ctx->pc = 0x80819D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 149u : 0u;
    // 80819D8C: lfs     f29, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819D8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D90:
    ctx->pc = 0x80819D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D90u)) return;
    // 80819D90: addi    r0, r9, 32440
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(32440);

label_80819D94:
    ctx->pc = 0x80819D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 147u : 0u;
    // 80819D94: stfs     f7, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819D94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D98:
    ctx->pc = 0x80819D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 146u : 0u;
    // 80819D98: stw     r0, 20448(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819D9C:
    ctx->pc = 0x80819D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819D9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 145u : 0u;
    // 80819D9C: stfs     f7, 420(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819D9Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(420);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DA0:
    ctx->pc = 0x80819DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 144u : 0u;
    // 80819DA0: stfs     f6, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DA4:
    ctx->pc = 0x80819DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 143u : 0u;
    // 80819DA4: stfs     f6, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DA8:
    ctx->pc = 0x80819DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 142u : 0u;
    // 80819DA8: stfs     f5, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DAC:
    ctx->pc = 0x80819DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 141u : 0u;
    // 80819DAC: stfs     f5, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DB0:
    ctx->pc = 0x80819DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 140u : 0u;
    // 80819DB0: stfs     f4, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DB4:
    ctx->pc = 0x80819DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 139u : 0u;
    // 80819DB4: stfs     f4, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DB8:
    ctx->pc = 0x80819DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 138u : 0u;
    // 80819DB8: stfs     f25, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DBC:
    ctx->pc = 0x80819DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 137u : 0u;
    // 80819DBC: stfs     f25, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DC0:
    ctx->pc = 0x80819DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 136u : 0u;
    // 80819DC0: stfs     f26, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DC4:
    ctx->pc = 0x80819DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 135u : 0u;
    // 80819DC4: stfs     f1, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DC8:
    ctx->pc = 0x80819DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 134u : 0u;
    // 80819DC8: stfs     f27, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DCC:
    ctx->pc = 0x80819DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 133u : 0u;
    // 80819DCC: stfs     f28, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80819DCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DD0:
    ctx->pc = 0x80819DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 132u : 0u;
    // 80819DD0: stb     r12, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DD4:
    ctx->pc = 0x80819DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 131u : 0u;
    // 80819DD4: stfs     f3, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DD8:
    ctx->pc = 0x80819DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 130u : 0u;
    // 80819DD8: stfs     f3, 360(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819DD8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DDC:
    ctx->pc = 0x80819DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 129u : 0u;
    // 80819DDC: stfs     f2, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DE0:
    ctx->pc = 0x80819DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 128u : 0u;
    // 80819DE0: stfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DE0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DE4:
    ctx->pc = 0x80819DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 127u : 0u;
    // 80819DE4: stfs     f0, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DE4u)) return;
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
label_80819DE8:
    ctx->pc = 0x80819DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 126u : 0u;
    // 80819DE8: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DE8u)) return;
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
label_80819DEC:
    ctx->pc = 0x80819DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 125u : 0u;
    // 80819DEC: stfs     f29, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DF0:
    ctx->pc = 0x80819DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 124u : 0u;
    // 80819DF0: stfs     f29, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819DF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819DF4:
    ctx->pc = 0x80819DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DF4u)) return;
    // 80819DF4: lis     r11, -28099
    ctx->gpr[11] = ((u32)(s32)(-28099) << 16);

label_80819DF8:
    ctx->pc = 0x80819DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DF8u)) return;
    // 80819DF8: lis     r10, -28099
    ctx->gpr[10] = ((u32)(s32)(-28099) << 16);

label_80819DFC:
    ctx->pc = 0x80819DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819DFCu)) return;
    // 80819DFC: lis     r9, -28099
    ctx->gpr[9] = ((u32)(s32)(-28099) << 16);

label_80819E00:
    ctx->pc = 0x80819E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E00u)) return;
    // 80819E00: lis     r8, -28099
    ctx->gpr[8] = ((u32)(s32)(-28099) << 16);

label_80819E04:
    ctx->pc = 0x80819E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 119u : 0u;
    // 80819E04: lfs     f9, 3392(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819E04u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E08:
    ctx->pc = 0x80819E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E08u)) return;
    // 80819E08: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_80819E0C:
    ctx->pc = 0x80819E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 117u : 0u;
    // 80819E0C: lfs     f6, 3396(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819E0Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3396);
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
label_80819E10:
    ctx->pc = 0x80819E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E10u)) return;
    // 80819E10: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819E14:
    ctx->pc = 0x80819E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E14u)) return;
    // 80819E14: fsubs   f1, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x80819E14u)) return;
    ppc_fsubs(ctx, 1, 29, 0);

label_80819E18:
    ctx->pc = 0x80819E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 114u : 0u;
    // 80819E18: lfs     f13, 3376(r11)
    if (!ppc_fp_available_inline(ctx, 0x80819E18u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(3376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[13] = value;
        ctx->ps1[13] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E1C:
    ctx->pc = 0x80819E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 113u : 0u;
    // 80819E1C: lfs     f11, 3384(r10)
    if (!ppc_fp_available_inline(ctx, 0x80819E1Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(3384);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E20:
    ctx->pc = 0x80819E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E20u)) return;
    // 80819E20: fsubs   f0, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x80819E20u)) return;
    ppc_fsubs(ctx, 0, 2, 3);

label_80819E24:
    ctx->pc = 0x80819E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E24u)) return;
    // 80819E24: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_80819E28:
    ctx->pc = 0x80819E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 110u : 0u;
    // 80819E28: lfs     f5, 3400(r7)
    if (!ppc_fp_available_inline(ctx, 0x80819E28u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3400);
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
label_80819E2C:
    ctx->pc = 0x80819E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80819E2Cu)) return;
    // 80819E2C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80819E2Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80819E30:
    ctx->pc = 0x80819E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 92u : 0u;
    // 80819E30: lfs     f4, 3404(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819E30u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3404);
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
label_80819E34:
    ctx->pc = 0x80819E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 91u : 0u;
    // 80819E34: lfs     f3, 3408(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819E34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3408);
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
label_80819E38:
    ctx->pc = 0x80819E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E38u)) return;
    // 80819E38: addi    r9, r4, 300
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(300);

label_80819E3C:
    ctx->pc = 0x80819E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E3Cu)) return;
    // 80819E3C: addi    r6, r4, 240
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(240);

label_80819E40:
    ctx->pc = 0x80819E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E40u)) return;
    // 80819E40: lis     r10, -28099
    ctx->gpr[10] = ((u32)(s32)(-28099) << 16);

label_80819E44:
    ctx->pc = 0x80819E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E44u)) return;
    // 80819E44: fabs    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80819E44u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_80819E48:
    ctx->pc = 0x80819E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E48u)) return;
    // 80819E48: lis     r8, -28099
    ctx->gpr[8] = ((u32)(s32)(-28099) << 16);

label_80819E4C:
    ctx->pc = 0x80819E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 85u : 0u;
    // 80819E4C: lfs     f31, 3372(r10)
    if (!ppc_fp_available_inline(ctx, 0x80819E4Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(3372);
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
label_80819E50:
    ctx->pc = 0x80819E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E50u)) return;
    // 80819E50: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_80819E54:
    ctx->pc = 0x80819E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 80819E54: lfs     f12, 3380(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819E54u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3380);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[12] = value;
        ctx->ps1[12] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E58:
    ctx->pc = 0x80819E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E58u)) return;
    // 80819E58: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80819E5C:
    ctx->pc = 0x80819E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E5Cu)) return;
    // 80819E5C: frsp    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x80819E5Cu)) return;
    ppc_frsp(ctx, 30, 0);

label_80819E60:
    ctx->pc = 0x80819E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E60u)) return;
    // 80819E60: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_80819E64:
    ctx->pc = 0x80819E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 79u : 0u;
    // 80819E64: lfs     f10, 3388(r7)
    if (!ppc_fp_available_inline(ctx, 0x80819E64u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E68:
    ctx->pc = 0x80819E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E68u)) return;
    // 80819E68: fsubs   f8, f9, f29
    if (!ppc_fp_available_inline(ctx, 0x80819E68u)) return;
    ppc_fsubs(ctx, 8, 9, 29);

label_80819E6C:
    ctx->pc = 0x80819E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E6Cu)) return;
    // 80819E6C: fsubs   f7, f11, f13
    if (!ppc_fp_available_inline(ctx, 0x80819E6Cu)) return;
    ppc_fsubs(ctx, 7, 11, 13);

label_80819E70:
    ctx->pc = 0x80819E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 80819E70: lfs     f0, 3412(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819E70u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3412);
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
label_80819E74:
    ctx->pc = 0x80819E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E74u)) return;
    // 80819E74: fsubs   f2, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x80819E74u)) return;
    ppc_fsubs(ctx, 2, 3, 4);

label_80819E78:
    ctx->pc = 0x80819E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 80819E78: stfs     f25, 16(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819E78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[25]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E7C:
    ctx->pc = 0x80819E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E7Cu)) return;
    // 80819E7C: fsubs   f1, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x80819E7Cu)) return;
    ppc_fsubs(ctx, 1, 5, 6);

label_80819E80:
    ctx->pc = 0x80819E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80819E80u)) return;
    // 80819E80: fdivs   f7, f8, f7
    if (!ppc_fp_available_inline(ctx, 0x80819E80u)) return;
    ppc_fdivs(ctx, 7, 8, 7);

label_80819E84:
    ctx->pc = 0x80819E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 80819E84: stfs     f31, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819E84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E88:
    ctx->pc = 0x80819E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 80819E88: stfs     f26, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819E88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E8C:
    ctx->pc = 0x80819E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 80819E8C: stfs     f30, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819E8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E90:
    ctx->pc = 0x80819E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 80819E90: stfs     f27, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819E90u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E94:
    ctx->pc = 0x80819E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80819E94: stfs     f28, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819E94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819E98:
    ctx->pc = 0x80819E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80819E98u)) return;
    // 80819E98: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80819E98u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_80819E9C:
    ctx->pc = 0x80819E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819E9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80819E9C: stb     r12, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EA0:
    ctx->pc = 0x80819EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80819EA0: stfs     f13, 300(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819EA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[13]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EA4:
    ctx->pc = 0x80819EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80819EA4: stfs     f12, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EA4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EA8:
    ctx->pc = 0x80819EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80819EA8: stfs     f11, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EA8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EAC:
    ctx->pc = 0x80819EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80819EAC: stfs     f10, 12(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EACu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EB0:
    ctx->pc = 0x80819EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EB0u)) return;
    // 80819EB0: fabs    f2, f7
    if (!ppc_fp_available_inline(ctx, 0x80819EB0u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[7]) & 0x7FFFFFFFFFFFFFFFull);

label_80819EB4:
    ctx->pc = 0x80819EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80819EB4: stfs     f29, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EB4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EB8:
    ctx->pc = 0x80819EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EB8u)) return;
    // 80819EB8: fabs    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80819EB8u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) & 0x7FFFFFFFFFFFFFFFull);

label_80819EBC:
    ctx->pc = 0x80819EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80819EBC: stfs     f9, 28(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EBCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EC0:
    ctx->pc = 0x80819EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EC0u)) return;
    // 80819EC0: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x80819EC0u)) return;
    ppc_frsp(ctx, 2, 2);

label_80819EC4:
    ctx->pc = 0x80819EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EC4u)) return;
    // 80819EC4: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x80819EC4u)) return;
    ppc_frsp(ctx, 1, 1);

label_80819EC8:
    ctx->pc = 0x80819EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80819EC8: stfs     f29, 32(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EC8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819ECC:
    ctx->pc = 0x80819ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80819ECC: stfs     f9, 36(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819ECCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819ED0:
    ctx->pc = 0x80819ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80819ED0: stfs     f31, 20(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819ED0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819ED4:
    ctx->pc = 0x80819ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80819ED4: stfs     f31, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819ED4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819ED8:
    ctx->pc = 0x80819ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80819ED8: stfs     f26, 40(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819ED8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EDC:
    ctx->pc = 0x80819EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80819EDC: stfs     f2, 44(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EDCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EE0:
    ctx->pc = 0x80819EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80819EE0: stfs     f27, 48(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EE0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EE4:
    ctx->pc = 0x80819EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80819EE4: stfs     f28, 52(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819EE4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EE8:
    ctx->pc = 0x80819EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80819EE8: stb     r12, 56(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[12]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EEC:
    ctx->pc = 0x80819EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80819EEC: stfs     f6, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819EECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EF0:
    ctx->pc = 0x80819EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80819EF0: stfs     f6, 240(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819EF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EF4:
    ctx->pc = 0x80819EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80819EF4: stfs     f5, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819EF4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EF8:
    ctx->pc = 0x80819EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80819EF8: stfs     f5, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819EF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819EFC:
    ctx->pc = 0x80819EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80819EFC: stfs     f4, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819EFCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F00:
    ctx->pc = 0x80819F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80819F00: stfs     f4, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F04:
    ctx->pc = 0x80819F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80819F04: stfs     f3, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F08:
    ctx->pc = 0x80819F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80819F08: stfs     f3, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F08u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F0C:
    ctx->pc = 0x80819F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80819F0C: stfs     f26, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F0Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[26]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F10:
    ctx->pc = 0x80819F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80819F10: stfs     f1, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F10u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F14:
    ctx->pc = 0x80819F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80819F14: stfs     f27, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F14u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[27]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F18:
    ctx->pc = 0x80819F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80819F18: stfs     f0, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F18u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F1C:
    ctx->pc = 0x80819F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80819F1C: stb     r0, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F20:
    ctx->pc = 0x80819F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F20u)) return;
    // 80819F20: b       0x8081A328
    {
            goto label_8081A328;
    }

label_80819F24:
    ctx->pc = 0x80819F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 279u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80819F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 279u : 1u;
    // 80819F24: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_80819F28:
    ctx->pc = 0x80819F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F28u)) return;
    // 80819F28: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819F2C:
    ctx->pc = 0x80819F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 276u : 0u;
    // 80819F2C: lfs     f12, 3416(r7)
    if (!ppc_fp_available_inline(ctx, 0x80819F2Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[12] = value;
        ctx->ps1[12] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F30:
    ctx->pc = 0x80819F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F30u)) return;
    // 80819F30: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_80819F34:
    ctx->pc = 0x80819F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 274u : 0u;
    // 80819F34: lfs     f11, 3420(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F34u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F38:
    ctx->pc = 0x80819F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F38u)) return;
    // 80819F38: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819F3C:
    ctx->pc = 0x80819F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 272u : 0u;
    // 80819F3C: lfs     f10, 3424(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819F3Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F40:
    ctx->pc = 0x80819F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F40u)) return;
    // 80819F40: addi    r12, r4, 420
    ctx->gpr[12] = ctx->gpr[4] + (u32)(s32)(420);

label_80819F44:
    ctx->pc = 0x80819F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 270u : 0u;
    // 80819F44: lfs     f9, 3428(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819F44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3428);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F48:
    ctx->pc = 0x80819F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F48u)) return;
    // 80819F48: fsubs   f0, f11, f12
    if (!ppc_fp_available_inline(ctx, 0x80819F48u)) return;
    ppc_fsubs(ctx, 0, 11, 12);

label_80819F4C:
    ctx->pc = 0x80819F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F4Cu)) return;
    // 80819F4C: lis     r11, -28099
    ctx->gpr[11] = ((u32)(s32)(-28099) << 16);

label_80819F50:
    ctx->pc = 0x80819F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F50u)) return;
    // 80819F50: lis     r8, -28099
    ctx->gpr[8] = ((u32)(s32)(-28099) << 16);

label_80819F54:
    ctx->pc = 0x80819F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F54u)) return;
    // 80819F54: fsubs   f1, f9, f10
    if (!ppc_fp_available_inline(ctx, 0x80819F54u)) return;
    ppc_fsubs(ctx, 1, 9, 10);

label_80819F58:
    ctx->pc = 0x80819F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 265u : 0u;
    // 80819F58: lfs     f8, 3432(r11)
    if (!ppc_fp_available_inline(ctx, 0x80819F58u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(3432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F5C:
    ctx->pc = 0x80819F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 264u : 0u;
    // 80819F5C: lfs     f5, 3352(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819F5Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3352);
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
label_80819F60:
    ctx->pc = 0x80819F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F60u)) return;
    // 80819F60: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_80819F64:
    ctx->pc = 0x80819F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F64u)) return;
    // 80819F64: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_80819F68:
    ctx->pc = 0x80819F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80819F68u)) return;
    // 80819F68: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80819F68u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80819F6C:
    ctx->pc = 0x80819F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 244u : 0u;
    // 80819F6C: lfs     f6, 3436(r7)
    if (!ppc_fp_available_inline(ctx, 0x80819F6Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3436);
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
label_80819F70:
    ctx->pc = 0x80819F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F70u)) return;
    // 80819F70: lis     r10, -28099
    ctx->gpr[10] = ((u32)(s32)(-28099) << 16);

label_80819F74:
    ctx->pc = 0x80819F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F74u)) return;
    // 80819F74: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_80819F78:
    ctx->pc = 0x80819F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F78u)) return;
    // 80819F78: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_80819F7C:
    ctx->pc = 0x80819F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 240u : 0u;
    // 80819F7C: lfs     f1, 3208(r10)
    if (!ppc_fp_available_inline(ctx, 0x80819F7Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(3208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819F80:
    ctx->pc = 0x80819F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F80u)) return;
    // 80819F80: fabs    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80819F80u)) return;
    ctx->fpr[0] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[0]) & 0x7FFFFFFFFFFFFFFFull);

label_80819F84:
    ctx->pc = 0x80819F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F84u)) return;
    // 80819F84: lis     r9, -28099
    ctx->gpr[9] = ((u32)(s32)(-28099) << 16);

label_80819F88:
    ctx->pc = 0x80819F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F88u)) return;
    // 80819F88: addi    r8, r4, 360
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(360);

label_80819F8C:
    ctx->pc = 0x80819F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 236u : 0u;
    // 80819F8C: lfs     f4, 3440(r6)
    if (!ppc_fp_available_inline(ctx, 0x80819F8Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3440);
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
label_80819F90:
    ctx->pc = 0x80819F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 235u : 0u;
    // 80819F90: lfs     f3, 3444(r5)
    if (!ppc_fp_available_inline(ctx, 0x80819F90u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3444);
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
label_80819F94:
    ctx->pc = 0x80819F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F94u)) return;
    // 80819F94: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80819F98:
    ctx->pc = 0x80819F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F98u)) return;
    // 80819F98: frsp    f7, f0
    if (!ppc_fp_available_inline(ctx, 0x80819F98u)) return;
    ppc_frsp(ctx, 7, 0);

label_80819F9C:
    ctx->pc = 0x80819F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819F9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 232u : 0u;
    // 80819F9C: lfs     f0, 3348(r9)
    if (!ppc_fp_available_inline(ctx, 0x80819F9Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3348);
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
label_80819FA0:
    ctx->pc = 0x80819FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 231u : 0u;
    // 80819FA0: lfs     f2, 3448(r3)
    if (!ppc_fp_available_inline(ctx, 0x80819FA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3448);
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
label_80819FA4:
    ctx->pc = 0x80819FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FA4u)) return;
    // 80819FA4: lis     r9, -32639
    ctx->gpr[9] = ((u32)(s32)(-32639) << 16);

label_80819FA8:
    ctx->pc = 0x80819FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FA8u)) return;
    // 80819FA8: lis     r7, -28618
    ctx->gpr[7] = ((u32)(s32)(-28618) << 16);

label_80819FAC:
    ctx->pc = 0x80819FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 228u : 0u;
    // 80819FAC: stfs     f12, 4(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FACu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FB0:
    ctx->pc = 0x80819FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FB0u)) return;
    // 80819FB0: addi    r5, r9, 32440
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(32440);

label_80819FB4:
    ctx->pc = 0x80819FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 226u : 0u;
    // 80819FB4: stfs     f12, 420(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819FB4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(420);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FB8:
    ctx->pc = 0x80819FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 225u : 0u;
    // 80819FB8: stw     r5, 20448(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20448);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FBC:
    ctx->pc = 0x80819FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 224u : 0u;
    // 80819FBC: stfs     f11, 12(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FBCu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FC0:
    ctx->pc = 0x80819FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 223u : 0u;
    // 80819FC0: stfs     f11, 8(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FC0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FC4:
    ctx->pc = 0x80819FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 222u : 0u;
    // 80819FC4: stfs     f10, 32(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FC4u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FC8:
    ctx->pc = 0x80819FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 221u : 0u;
    // 80819FC8: stfs     f10, 24(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FC8u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FCC:
    ctx->pc = 0x80819FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 220u : 0u;
    // 80819FCC: stfs     f9, 36(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FCCu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FD0:
    ctx->pc = 0x80819FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 219u : 0u;
    // 80819FD0: stfs     f9, 28(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FD0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FD4:
    ctx->pc = 0x80819FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 218u : 0u;
    // 80819FD4: stfs     f8, 20(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FD4u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FD8:
    ctx->pc = 0x80819FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 217u : 0u;
    // 80819FD8: stfs     f8, 16(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FD8u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FDC:
    ctx->pc = 0x80819FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 216u : 0u;
    // 80819FDC: stfs     f1, 40(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FDCu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FE0:
    ctx->pc = 0x80819FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 215u : 0u;
    // 80819FE0: stfs     f7, 44(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FE0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FE4:
    ctx->pc = 0x80819FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 214u : 0u;
    // 80819FE4: stfs     f0, 48(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FE4u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FE8:
    ctx->pc = 0x80819FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 213u : 0u;
    // 80819FE8: stfs     f5, 52(r12)
    if (!ppc_fp_available_inline(ctx, 0x80819FE8u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FEC:
    ctx->pc = 0x80819FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 212u : 0u;
    // 80819FEC: stb     r0, 56(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FF0:
    ctx->pc = 0x80819FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 211u : 0u;
    // 80819FF0: stfs     f6, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819FF0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FF4:
    ctx->pc = 0x80819FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 210u : 0u;
    // 80819FF4: stfs     f6, 360(r4)
    if (!ppc_fp_available_inline(ctx, 0x80819FF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(360);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FF8:
    ctx->pc = 0x80819FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 209u : 0u;
    // 80819FF8: stfs     f4, 12(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819FF8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80819FFC:
    ctx->pc = 0x80819FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80819FFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 208u : 0u;
    // 80819FFC: stfs     f4, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x80819FFCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A000:
    ctx->pc = 0x8081A000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A000u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 207u : 0u;
    // 8081A000: stfs     f3, 32(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A000u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A004:
    ctx->pc = 0x8081A004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 206u : 0u;
    // 8081A004: stfs     f3, 24(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A004u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A008:
    ctx->pc = 0x8081A008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 205u : 0u;
    // 8081A008: stfs     f2, 36(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A008u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A00C:
    ctx->pc = 0x8081A00Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A00Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 204u : 0u;
    // 8081A00C: stfs     f2, 28(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A00Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A010:
    ctx->pc = 0x8081A010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A010u)) return;
    // 8081A010: fsubs   f3, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x8081A010u)) return;
    ppc_fsubs(ctx, 3, 2, 3);

label_8081A014:
    ctx->pc = 0x8081A014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A014u)) return;
    // 8081A014: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_8081A018:
    ctx->pc = 0x8081A018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A018u)) return;
    // 8081A018: fsubs   f2, f4, f6
    if (!ppc_fp_available_inline(ctx, 0x8081A018u)) return;
    ppc_fsubs(ctx, 2, 4, 6);

label_8081A01C:
    ctx->pc = 0x8081A01Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A01Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 200u : 0u;
    // 8081A01C: lfs     f5, 3460(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A01Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3460);
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
label_8081A020:
    ctx->pc = 0x8081A020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A020u)) return;
    // 8081A020: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A024:
    ctx->pc = 0x8081A024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A024u)) return;
    // 8081A024: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_8081A028:
    ctx->pc = 0x8081A028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8081A028u)) return;
    // 8081A028: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A028u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_8081A02C:
    ctx->pc = 0x8081A02Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A02Cu)) return;
    // 8081A02C: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A030:
    ctx->pc = 0x8081A030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 179u : 0u;
    // 8081A030: lfs     f31, 3464(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A030u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3464);
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
label_8081A034:
    ctx->pc = 0x8081A034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A034u)) return;
    // 8081A034: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_8081A038:
    ctx->pc = 0x8081A038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A038u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 177u : 0u;
    // 8081A038: lfs     f7, 3452(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A038u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3452);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A03C:
    ctx->pc = 0x8081A03Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A03Cu)) return;
    // 8081A03C: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A040:
    ctx->pc = 0x8081A040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A040u)) return;
    // 8081A040: fabs    f6, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A040u)) return;
    ctx->fpr[6] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_8081A044:
    ctx->pc = 0x8081A044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A044u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 174u : 0u;
    // 8081A044: lfs     f13, 3468(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A044u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[13] = value;
        ctx->ps1[13] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A048:
    ctx->pc = 0x8081A048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 173u : 0u;
    // 8081A048: lfs     f12, 3472(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A048u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[12] = value;
        ctx->ps1[12] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A04C:
    ctx->pc = 0x8081A04Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A04Cu)) return;
    // 8081A04C: fsubs   f2, f31, f5
    if (!ppc_fp_available_inline(ctx, 0x8081A04Cu)) return;
    ppc_fsubs(ctx, 2, 31, 5);

label_8081A050:
    ctx->pc = 0x8081A050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A050u)) return;
    // 8081A050: addi    r5, r4, 300
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(300);

label_8081A054:
    ctx->pc = 0x8081A054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 170u : 0u;
    // 8081A054: lfs     f30, 3456(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A054u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3456);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A058:
    ctx->pc = 0x8081A058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A058u)) return;
    // 8081A058: fsubs   f3, f12, f13
    if (!ppc_fp_available_inline(ctx, 0x8081A058u)) return;
    ppc_fsubs(ctx, 3, 12, 13);

label_8081A05C:
    ctx->pc = 0x8081A05Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A05Cu)) return;
    // 8081A05C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8081A060:
    ctx->pc = 0x8081A060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A060u)) return;
    // 8081A060: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A064:
    ctx->pc = 0x8081A064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A064u)) return;
    // 8081A064: frsp    f6, f6
    if (!ppc_fp_available_inline(ctx, 0x8081A064u)) return;
    ppc_frsp(ctx, 6, 6);

label_8081A068:
    ctx->pc = 0x8081A068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A068u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 165u : 0u;
    // 8081A068: lfs     f4, 3476(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A068u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3476);
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
label_8081A06C:
    ctx->pc = 0x8081A06Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8081A06Cu)) return;
    // 8081A06C: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A06Cu)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_8081A070:
    ctx->pc = 0x8081A070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A070u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 147u : 0u;
    // 8081A070: stfs     f1, 40(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A070u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A074:
    ctx->pc = 0x8081A074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A074u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 146u : 0u;
    // 8081A074: stfs     f7, 20(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A074u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A078:
    ctx->pc = 0x8081A078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A078u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 145u : 0u;
    // 8081A078: stfs     f7, 16(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A078u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A07C:
    ctx->pc = 0x8081A07Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A07Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 144u : 0u;
    // 8081A07C: stfs     f6, 44(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A07Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A080:
    ctx->pc = 0x8081A080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 143u : 0u;
    // 8081A080: stfs     f0, 48(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A080u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A084:
    ctx->pc = 0x8081A084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A084u)) return;
    // 8081A084: fabs    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A084u)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_8081A088:
    ctx->pc = 0x8081A088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A088u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 141u : 0u;
    // 8081A088: stfs     f30, 52(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A088u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A08C:
    ctx->pc = 0x8081A08Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A08Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 140u : 0u;
    // 8081A08C: stb     r0, 56(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A090:
    ctx->pc = 0x8081A090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A090u)) return;
    // 8081A090: frsp    f11, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A090u)) return;
    ppc_frsp(ctx, 11, 2);

label_8081A094:
    ctx->pc = 0x8081A094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A094u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 138u : 0u;
    // 8081A094: stfs     f5, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A094u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A098:
    ctx->pc = 0x8081A098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 137u : 0u;
    // 8081A098: stfs     f5, 300(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A098u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A09C:
    ctx->pc = 0x8081A09Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A09Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 136u : 0u;
    // 8081A09C: stfs     f31, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A09Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0A0:
    ctx->pc = 0x8081A0A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 135u : 0u;
    // 8081A0A0: stfs     f31, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0A4:
    ctx->pc = 0x8081A0A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 134u : 0u;
    // 8081A0A4: stfs     f13, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[13]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0A8:
    ctx->pc = 0x8081A0A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 133u : 0u;
    // 8081A0A8: stfs     f13, 24(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[13]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0AC:
    ctx->pc = 0x8081A0ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 132u : 0u;
    // 8081A0AC: stfs     f12, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0ACu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0B0:
    ctx->pc = 0x8081A0B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 131u : 0u;
    // 8081A0B0: stfs     f12, 28(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0B4:
    ctx->pc = 0x8081A0B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 130u : 0u;
    // 8081A0B4: stfs     f4, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0B8:
    ctx->pc = 0x8081A0B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 129u : 0u;
    // 8081A0B8: stfs     f4, 16(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0BC:
    ctx->pc = 0x8081A0BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 128u : 0u;
    // 8081A0BC: stfs     f1, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0C0:
    ctx->pc = 0x8081A0C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 127u : 0u;
    // 8081A0C0: stfs     f11, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0C0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0C4:
    ctx->pc = 0x8081A0C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 126u : 0u;
    // 8081A0C4: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0C4u)) return;
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
label_8081A0C8:
    ctx->pc = 0x8081A0C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 125u : 0u;
    // 8081A0C8: stfs     f30, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0CC:
    ctx->pc = 0x8081A0CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 124u : 0u;
    // 8081A0CC: stb     r0, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0D0:
    ctx->pc = 0x8081A0D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0D0u)) return;
    // 8081A0D0: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_8081A0D4:
    ctx->pc = 0x8081A0D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0D4u)) return;
    // 8081A0D4: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A0D8:
    ctx->pc = 0x8081A0D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 121u : 0u;
    // 8081A0D8: lfs     f10, 3480(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A0D8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0DC:
    ctx->pc = 0x8081A0DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0DCu)) return;
    // 8081A0DC: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_8081A0E0:
    ctx->pc = 0x8081A0E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 119u : 0u;
    // 8081A0E0: lfs     f9, 3484(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A0E0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0E4:
    ctx->pc = 0x8081A0E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0E4u)) return;
    // 8081A0E4: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A0E8:
    ctx->pc = 0x8081A0E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 117u : 0u;
    // 8081A0E8: lfs     f8, 3488(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A0E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0EC:
    ctx->pc = 0x8081A0ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0ECu)) return;
    // 8081A0EC: addi    r11, r4, 240
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(240);

label_8081A0F0:
    ctx->pc = 0x8081A0F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 115u : 0u;
    // 8081A0F0: lfs     f7, 3492(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A0F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3492);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A0F4:
    ctx->pc = 0x8081A0F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0F4u)) return;
    // 8081A0F4: fsubs   f2, f9, f10
    if (!ppc_fp_available_inline(ctx, 0x8081A0F4u)) return;
    ppc_fsubs(ctx, 2, 9, 10);

label_8081A0F8:
    ctx->pc = 0x8081A0F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0F8u)) return;
    // 8081A0F8: addi    r9, r4, 0
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(0);

label_8081A0FC:
    ctx->pc = 0x8081A0FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A0FCu)) return;
    // 8081A0FC: addi    r7, r4, 180
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(180);

label_8081A100:
    ctx->pc = 0x8081A100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A100u)) return;
    // 8081A100: fsubs   f3, f7, f8
    if (!ppc_fp_available_inline(ctx, 0x8081A100u)) return;
    ppc_fsubs(ctx, 3, 7, 8);

label_8081A104:
    ctx->pc = 0x8081A104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A104u)) return;
    // 8081A104: addi    r6, r4, 120
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(120);

label_8081A108:
    ctx->pc = 0x8081A108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A108u)) return;
    // 8081A108: lis     r10, -28099
    ctx->gpr[10] = ((u32)(s32)(-28099) << 16);

label_8081A10C:
    ctx->pc = 0x8081A10Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A10Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 108u : 0u;
    // 8081A10C: lfs     f6, 3496(r10)
    if (!ppc_fp_available_inline(ctx, 0x8081A10Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(3496);
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
label_8081A110:
    ctx->pc = 0x8081A110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A110u)) return;
    // 8081A110: lis     r8, -28099
    ctx->gpr[8] = ((u32)(s32)(-28099) << 16);

label_8081A114:
    ctx->pc = 0x8081A114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8081A114u)) return;
    // 8081A114: fdivs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A114u)) return;
    ppc_fdivs(ctx, 2, 3, 2);

label_8081A118:
    ctx->pc = 0x8081A118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A118u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 89u : 0u;
    // 8081A118: lfs     f4, 3500(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A118u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(3500);
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
label_8081A11C:
    ctx->pc = 0x8081A11Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A11Cu)) return;
    // 8081A11C: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_8081A120:
    ctx->pc = 0x8081A120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A120u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 87u : 0u;
    // 8081A120: lfs     f3, 3504(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A120u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3504);
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
label_8081A124:
    ctx->pc = 0x8081A124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A124u)) return;
    // 8081A124: addi    r8, r4, 60
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(60);

label_8081A128:
    ctx->pc = 0x8081A128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A128u)) return;
    // 8081A128: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A12C:
    ctx->pc = 0x8081A12Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A12Cu)) return;
    // 8081A12C: fabs    f5, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A12Cu)) return;
    ctx->fpr[5] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_8081A130:
    ctx->pc = 0x8081A130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A130u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 83u : 0u;
    // 8081A130: lfs     f2, 3508(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A130u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3508);
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
label_8081A134:
    ctx->pc = 0x8081A134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 82u : 0u;
    // 8081A134: stfs     f10, 4(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A134u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A138:
    ctx->pc = 0x8081A138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A138u)) return;
    // 8081A138: frsp    f5, f5
    if (!ppc_fp_available_inline(ctx, 0x8081A138u)) return;
    ppc_frsp(ctx, 5, 5);

label_8081A13C:
    ctx->pc = 0x8081A13Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A13Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 80u : 0u;
    // 8081A13C: stfs     f10, 240(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A13Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(240);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A140:
    ctx->pc = 0x8081A140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 79u : 0u;
    // 8081A140: stfs     f9, 12(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A140u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A144:
    ctx->pc = 0x8081A144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A144u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 78u : 0u;
    // 8081A144: stfs     f9, 8(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A144u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A148:
    ctx->pc = 0x8081A148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A148u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 77u : 0u;
    // 8081A148: stfs     f8, 32(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A148u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A14C:
    ctx->pc = 0x8081A14Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A14Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 76u : 0u;
    // 8081A14C: stfs     f8, 24(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A14Cu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A150:
    ctx->pc = 0x8081A150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A150u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 75u : 0u;
    // 8081A150: stfs     f7, 36(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A150u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A154:
    ctx->pc = 0x8081A154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 74u : 0u;
    // 8081A154: stfs     f7, 28(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A154u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A158:
    ctx->pc = 0x8081A158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 73u : 0u;
    // 8081A158: stfs     f6, 20(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A158u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A15C:
    ctx->pc = 0x8081A15Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A15Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 72u : 0u;
    // 8081A15C: stfs     f6, 16(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A15Cu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A160:
    ctx->pc = 0x8081A160u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A160u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 71u : 0u;
    // 8081A160: stfs     f1, 40(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A160u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A164:
    ctx->pc = 0x8081A164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A164u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 70u : 0u;
    // 8081A164: stfs     f5, 44(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A164u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A168:
    ctx->pc = 0x8081A168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A168u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 69u : 0u;
    // 8081A168: stfs     f0, 48(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A168u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A16C:
    ctx->pc = 0x8081A16Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A16Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 68u : 0u;
    // 8081A16C: stfs     f30, 52(r11)
    if (!ppc_fp_available_inline(ctx, 0x8081A16Cu)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A170:
    ctx->pc = 0x8081A170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A170u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 67u : 0u;
    // 8081A170: stb     r0, 56(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A174:
    ctx->pc = 0x8081A174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 66u : 0u;
    // 8081A174: stfs     f4, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A174u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A178:
    ctx->pc = 0x8081A178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A178u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 65u : 0u;
    // 8081A178: stfs     f4, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A178u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A17C:
    ctx->pc = 0x8081A17Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A17Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 64u : 0u;
    // 8081A17C: stfs     f4, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A17Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A180:
    ctx->pc = 0x8081A180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A180u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 63u : 0u;
    // 8081A180: stfs     f4, 60(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A180u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A184:
    ctx->pc = 0x8081A184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A184u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 62u : 0u;
    // 8081A184: stfs     f4, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A184u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A188:
    ctx->pc = 0x8081A188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A188u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 61u : 0u;
    // 8081A188: stfs     f4, 180(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A188u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A18C:
    ctx->pc = 0x8081A18Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A18Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 60u : 0u;
    // 8081A18C: stfs     f31, 12(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A18Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A190:
    ctx->pc = 0x8081A190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A190u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 59u : 0u;
    // 8081A190: stfs     f31, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A190u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A194:
    ctx->pc = 0x8081A194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A194u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 58u : 0u;
    // 8081A194: stfs     f31, 12(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A194u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A198:
    ctx->pc = 0x8081A198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A198u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 57u : 0u;
    // 8081A198: stfs     f31, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A198u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A19C:
    ctx->pc = 0x8081A19Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A19Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 56u : 0u;
    // 8081A19C: stfs     f31, 12(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A19Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1A0:
    ctx->pc = 0x8081A1A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 8081A1A0: stfs     f31, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A1A0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1A4:
    ctx->pc = 0x8081A1A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 54u : 0u;
    // 8081A1A4: stfs     f3, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A1A4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1A8:
    ctx->pc = 0x8081A1A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 8081A1A8: stfs     f3, 120(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A1A8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1AC:
    ctx->pc = 0x8081A1ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 52u : 0u;
    // 8081A1AC: stfs     f2, 12(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A1ACu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1B0:
    ctx->pc = 0x8081A1B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 8081A1B0: stfs     f2, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A1B0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1B4:
    ctx->pc = 0x8081A1B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1B4u)) return;
    // 8081A1B4: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_8081A1B8:
    ctx->pc = 0x8081A1B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1B8u)) return;
    // 8081A1B8: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_8081A1BC:
    ctx->pc = 0x8081A1BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 48u : 0u;
    // 8081A1BC: lfs     f4, 3512(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A1BCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3512);
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
label_8081A1C0:
    ctx->pc = 0x8081A1C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1C0u)) return;
    // 8081A1C0: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A1C4:
    ctx->pc = 0x8081A1C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 46u : 0u;
    // 8081A1C4: lfs     f2, 3520(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A1C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3520);
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
label_8081A1C8:
    ctx->pc = 0x8081A1C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 8081A1C8: lfs     f3, 3516(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A1C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3516);
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
label_8081A1CC:
    ctx->pc = 0x8081A1CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 8081A1CC: stfs     f12, 36(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A1CCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1D0:
    ctx->pc = 0x8081A1D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8081A1D0: stfs     f4, 36(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A1D0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1D4:
    ctx->pc = 0x8081A1D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 8081A1D4: stfs     f4, 28(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A1D4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1D8:
    ctx->pc = 0x8081A1D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 8081A1D8: stfs     f4, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A1D8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1DC:
    ctx->pc = 0x8081A1DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 8081A1DC: stfs     f4, 28(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A1DCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1E0:
    ctx->pc = 0x8081A1E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8081A1E0: stfs     f4, 32(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A1E0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1E4:
    ctx->pc = 0x8081A1E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 8081A1E4: stfs     f4, 24(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A1E4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1E8:
    ctx->pc = 0x8081A1E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 8081A1E8: stfs     f3, 36(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A1E8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1EC:
    ctx->pc = 0x8081A1ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 8081A1EC: stfs     f3, 28(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A1ECu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1F0:
    ctx->pc = 0x8081A1F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8081A1F0: stfs     f3, 32(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A1F0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1F4:
    ctx->pc = 0x8081A1F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 8081A1F4: stfs     f3, 24(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A1F4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1F8:
    ctx->pc = 0x8081A1F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8081A1F8: stfs     f3, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A1F8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A1FC:
    ctx->pc = 0x8081A1FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A1FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 8081A1FC: stfs     f3, 24(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A1FCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A200:
    ctx->pc = 0x8081A200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8081A200: stfs     f12, 28(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A200u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[12]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A204:
    ctx->pc = 0x8081A204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8081A204: stfs     f13, 32(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A204u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[13]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A208:
    ctx->pc = 0x8081A208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A208u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8081A208: stfs     f13, 24(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A208u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[13]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A20C:
    ctx->pc = 0x8081A20Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A20Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8081A20C: stfs     f2, 20(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A20Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A210:
    ctx->pc = 0x8081A210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8081A210: stfs     f2, 16(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A210u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A214:
    ctx->pc = 0x8081A214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A214u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8081A214: stfs     f2, 20(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A214u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A218:
    ctx->pc = 0x8081A218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8081A218: stfs     f2, 16(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A218u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A21C:
    ctx->pc = 0x8081A21Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A21Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8081A21C: stfs     f2, 20(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A21Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A220:
    ctx->pc = 0x8081A220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A220u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8081A220: stfs     f2, 16(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A220u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A224:
    ctx->pc = 0x8081A224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A224u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8081A224: stfs     f2, 20(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A224u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A228:
    ctx->pc = 0x8081A228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A228u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8081A228: stfs     f2, 16(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A228u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A22C:
    ctx->pc = 0x8081A22Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A22Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8081A22C: stfs     f1, 40(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A22Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A230:
    ctx->pc = 0x8081A230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A230u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8081A230: stfs     f1, 40(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A230u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A234:
    ctx->pc = 0x8081A234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A234u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8081A234: stfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A234u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A238:
    ctx->pc = 0x8081A238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A238u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8081A238: stfs     f1, 40(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A238u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A23C:
    ctx->pc = 0x8081A23Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A23Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8081A23C: stfs     f11, 44(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A23Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A240:
    ctx->pc = 0x8081A240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A240u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8081A240: stfs     f11, 44(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A240u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A244:
    ctx->pc = 0x8081A244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A244u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8081A244: stfs     f11, 44(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A244u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A248:
    ctx->pc = 0x8081A248u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A248u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8081A248: stfs     f11, 44(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A248u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A24C:
    ctx->pc = 0x8081A24Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A24Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8081A24C: stfs     f0, 48(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A24Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A250:
    ctx->pc = 0x8081A250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8081A250: stfs     f0, 48(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A250u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A254:
    ctx->pc = 0x8081A254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A254u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8081A254: stfs     f0, 48(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A254u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A258:
    ctx->pc = 0x8081A258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A258u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A258: stfs     f0, 48(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A258u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A25C:
    ctx->pc = 0x8081A25Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A25Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8081A25C: stfs     f30, 52(r9)
    if (!ppc_fp_available_inline(ctx, 0x8081A25Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A260:
    ctx->pc = 0x8081A260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A260u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A260: stfs     f30, 52(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A260u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A264:
    ctx->pc = 0x8081A264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A264: stfs     f30, 52(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A264u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A268:
    ctx->pc = 0x8081A268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A268: stfs     f30, 52(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A268u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A26C:
    ctx->pc = 0x8081A26Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A26Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A26C: stb     r0, 56(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A270:
    ctx->pc = 0x8081A270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081A270: stb     r0, 56(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A274:
    ctx->pc = 0x8081A274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A274u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A274: stb     r0, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A278:
    ctx->pc = 0x8081A278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A278u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8081A278: stb     r0, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A27C:
    ctx->pc = 0x8081A27Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A27Cu)) return;
    // 8081A27C: b       0x8081A328
    {
            goto label_8081A328;
    }

label_8081A280:
    ctx->pc = 0x8081A280u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 58u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A280u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 58u : 1u;
    // 8081A280: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_8081A284:
    ctx->pc = 0x8081A284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A284u)) return;
    // 8081A284: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A288:
    ctx->pc = 0x8081A288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A288u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 55u : 0u;
    // 8081A288: lfs     f8, 3524(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A288u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A28C:
    ctx->pc = 0x8081A28Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A28Cu)) return;
    // 8081A28C: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_8081A290:
    ctx->pc = 0x8081A290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A290u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 53u : 0u;
    // 8081A290: lfs     f7, 3528(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A290u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A294:
    ctx->pc = 0x8081A294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A294u)) return;
    // 8081A294: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A298:
    ctx->pc = 0x8081A298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A298u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 8081A298: lfs     f6, 3532(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A298u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3532);
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
label_8081A29C:
    ctx->pc = 0x8081A29Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A29Cu)) return;
    // 8081A29C: addi    r8, r4, 420
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(420);

label_8081A2A0:
    ctx->pc = 0x8081A2A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 8081A2A0: lfs     f5, 3536(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A2A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3536);
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
label_8081A2A4:
    ctx->pc = 0x8081A2A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2A4u)) return;
    // 8081A2A4: fsubs   f0, f7, f8
    if (!ppc_fp_available_inline(ctx, 0x8081A2A4u)) return;
    ppc_fsubs(ctx, 0, 7, 8);

label_8081A2A8:
    ctx->pc = 0x8081A2A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2A8u)) return;
    // 8081A2A8: lis     r7, -28099
    ctx->gpr[7] = ((u32)(s32)(-28099) << 16);

label_8081A2AC:
    ctx->pc = 0x8081A2ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2ACu)) return;
    // 8081A2AC: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A2B0:
    ctx->pc = 0x8081A2B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2B0u)) return;
    // 8081A2B0: fsubs   f1, f5, f6
    if (!ppc_fp_available_inline(ctx, 0x8081A2B0u)) return;
    ppc_fsubs(ctx, 1, 5, 6);

label_8081A2B4:
    ctx->pc = 0x8081A2B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 8081A2B4: lfs     f4, 3540(r7)
    if (!ppc_fp_available_inline(ctx, 0x8081A2B4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(3540);
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
label_8081A2B8:
    ctx->pc = 0x8081A2B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8081A2B8: lfs     f3, 3208(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A2B8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3208);
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
label_8081A2BC:
    ctx->pc = 0x8081A2BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2BCu)) return;
    // 8081A2BC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_8081A2C0:
    ctx->pc = 0x8081A2C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2C0u)) return;
    // 8081A2C0: lis     r5, -28099
    ctx->gpr[5] = ((u32)(s32)(-28099) << 16);

label_8081A2C4:
    ctx->pc = 0x8081A2C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x8081A2C4u)) return;
    // 8081A2C4: fdivs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8081A2C4u)) return;
    ppc_fdivs(ctx, 2, 1, 0);

label_8081A2C8:
    ctx->pc = 0x8081A2C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8081A2C8: lfs     f1, 3348(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A2C8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A2CC:
    ctx->pc = 0x8081A2CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2CCu)) return;
    // 8081A2CC: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A2D0:
    ctx->pc = 0x8081A2D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8081A2D0: lfs     f0, 3352(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A2D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3352);
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
label_8081A2D4:
    ctx->pc = 0x8081A2D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2D4u)) return;
    // 8081A2D4: lis     r5, -32639
    ctx->gpr[5] = ((u32)(s32)(-32639) << 16);

label_8081A2D8:
    ctx->pc = 0x8081A2D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2D8u)) return;
    // 8081A2D8: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8081A2DC:
    ctx->pc = 0x8081A2DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2DCu)) return;
    // 8081A2DC: fabs    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A2DCu)) return;
    ctx->fpr[2] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[2]) & 0x7FFFFFFFFFFFFFFFull);

label_8081A2E0:
    ctx->pc = 0x8081A2E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2E0u)) return;
    // 8081A2E0: addi    r5, r5, 32440
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32440);

label_8081A2E4:
    ctx->pc = 0x8081A2E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8081A2E4: stfs     f8, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A2E4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A2E8:
    ctx->pc = 0x8081A2E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2E8u)) return;
    // 8081A2E8: frsp    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A2E8u)) return;
    ppc_frsp(ctx, 2, 2);

label_8081A2EC:
    ctx->pc = 0x8081A2ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8081A2EC: stw     r5, 20448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20448);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A2F0:
    ctx->pc = 0x8081A2F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8081A2F0: stfs     f8, 420(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A2F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(420);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A2F4:
    ctx->pc = 0x8081A2F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8081A2F4: stfs     f7, 12(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A2F4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A2F8:
    ctx->pc = 0x8081A2F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8081A2F8: stfs     f7, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A2F8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A2FC:
    ctx->pc = 0x8081A2FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A2FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8081A2FC: stfs     f6, 32(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A2FCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A300:
    ctx->pc = 0x8081A300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A300u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A300: stfs     f6, 24(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A300u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A304:
    ctx->pc = 0x8081A304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8081A304: stfs     f5, 36(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A304u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A308:
    ctx->pc = 0x8081A308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A308: stfs     f5, 28(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A308u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A30C:
    ctx->pc = 0x8081A30Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A30Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A30C: stfs     f4, 20(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A30Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A310:
    ctx->pc = 0x8081A310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A310u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A310: stfs     f4, 16(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A310u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A314:
    ctx->pc = 0x8081A314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A314u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A314: stfs     f3, 40(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A314u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A318:
    ctx->pc = 0x8081A318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A318u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081A318: stfs     f2, 44(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A318u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A31C:
    ctx->pc = 0x8081A31Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A31Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A31C: stfs     f1, 48(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A31Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A320:
    ctx->pc = 0x8081A320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8081A320: stfs     f0, 52(r8)
    if (!ppc_fp_available_inline(ctx, 0x8081A320u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A324:
    ctx->pc = 0x8081A324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 8081A324: stb     r0, 56(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(56);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A328:
    ctx->pc = 0x8081A328u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A328u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8081A328: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8081A328u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A32C:
    ctx->pc = 0x8081A32Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A32Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8081A32C: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A32Cu)) return;
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
label_8081A330:
    ctx->pc = 0x8081A330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8081A330: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A330u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x8081A330u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A334:
    ctx->pc = 0x8081A334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8081A334: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A334u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A338:
    ctx->pc = 0x8081A338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8081A338: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x8081A338u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A33C:
    ctx->pc = 0x8081A33Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A33Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8081A33C: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A33Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A340:
    ctx->pc = 0x8081A340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A340u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8081A340: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x8081A340u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A344:
    ctx->pc = 0x8081A344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A344: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A348:
    ctx->pc = 0x8081A348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8081A348: psq_l   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A348u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x8081A348u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A34C:
    ctx->pc = 0x8081A34Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A34Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A34C: lfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A34Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A350:
    ctx->pc = 0x8081A350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A350: psq_l   f26, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 26u, ea, false, 0u, false, 0x8081A350u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A354:
    ctx->pc = 0x8081A354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A354: lfd     f26, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[26] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A358:
    ctx->pc = 0x8081A358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A358: psq_l   f25, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A358u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 25u, ea, false, 0u, false, 0x8081A358u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A35C:
    ctx->pc = 0x8081A35Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A35Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081A35C: lfd     f25, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A35Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[25] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A360:
    ctx->pc = 0x8081A360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A360: lwz     r31, 12(r1)
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
label_8081A364:
    ctx->pc = 0x8081A364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A364u)) return;
    // 8081A364: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_8081A368:
    ctx->pc = 0x8081A368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A368u)) return;
    // 8081A368: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808195A0;
        }
    }

label_8081A36C:
    ctx->pc = 0x8081A36Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 20u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A36Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 20u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8081A36C: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A370:
    ctx->pc = 0x8081A370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8081A370: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A374:
    ctx->pc = 0x8081A374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8081A374: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A378:
    ctx->pc = 0x8081A378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A378u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8081A378: stfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A37C:
    ctx->pc = 0x8081A37Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A37Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8081A37C: psq_st   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A37Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8081A37Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A380:
    ctx->pc = 0x8081A380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A380u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8081A380: stw     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A384:
    ctx->pc = 0x8081A384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A384u)) return;
    // 8081A384: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_8081A388:
    ctx->pc = 0x8081A388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A388u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8081A388: lfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A388u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A38C:
    ctx->pc = 0x8081A38Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A38Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8081A38C: lfs     f0, 3192(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A38Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3192);
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
label_8081A390:
    ctx->pc = 0x8081A390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A390u)) return;
    // 8081A390: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8081A394:
    ctx->pc = 0x8081A394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A394: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A394u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A398:
    ctx->pc = 0x8081A398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A398u)) return;
    // 8081A398: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8081A39C:
    ctx->pc = 0x8081A39Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A39Cu)) return;
    // 8081A39C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8081A3A0:
    ctx->pc = 0x8081A3A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3A0u)) return;
    // 8081A3A0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8081A3A4:
    ctx->pc = 0x8081A3A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A3A4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A3A4u)) return;
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
label_8081A3A8:
    ctx->pc = 0x8081A3A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A3A8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A3A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3AC:
    ctx->pc = 0x8081A3ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081A3AC: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A3ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3B0:
    ctx->pc = 0x8081A3B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A3B0: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A3B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3B4:
    ctx->pc = 0x8081A3B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8081A3B4: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A3B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3B8:
    ctx->pc = 0x8081A3B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3B8u)) return;
    // 8081A3B8: bl      0x80035FF4
    {
            ctx->lr = 0x8081A3BCu;
            ctx->pc = 0x80035FF4u;
            return;
    }

label_8081A3BC:
    ctx->pc = 0x8081A3BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A3BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 8081A3BC: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8081A3C0:
    ctx->pc = 0x8081A3C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3C0u)) return;
    // 8081A3C0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8081A3C4:
    ctx->pc = 0x8081A3C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3C4u)) return;
    // 8081A3C4: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_8081A3C8:
    ctx->pc = 0x8081A3C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3C8u)) return;
    // 8081A3C8: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A3CC:
    ctx->pc = 0x8081A3CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8081A3CC: lwz     r5, 0(r4)
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
label_8081A3D0:
    ctx->pc = 0x8081A3D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3D0u)) return;
    // 8081A3D0: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A3D4:
    ctx->pc = 0x8081A3D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8081A3D4: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3D8:
    ctx->pc = 0x8081A3D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A3D8: stw     r0, 224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3DC:
    ctx->pc = 0x8081A3DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3DCu)) return;
    // 8081A3DC: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_8081A3E0:
    ctx->pc = 0x8081A3E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A3E0: lfd     f1, 3320(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A3E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3320);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3E4:
    ctx->pc = 0x8081A3E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A3E4: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3E8:
    ctx->pc = 0x8081A3E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A3E8: lfd     f2, 3200(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A3E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3200);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3EC:
    ctx->pc = 0x8081A3ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A3EC: lfd     f0, 224(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A3ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(224);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A3F0:
    ctx->pc = 0x8081A3F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3F0u)) return;
    // 8081A3F0: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8081A3F0u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_8081A3F4:
    ctx->pc = 0x8081A3F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3F4u)) return;
    // 8081A3F4: fmul   f1, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x8081A3F4u)) return;
    ppc_fmul(ctx, 1, 2, 0);

label_8081A3F8:
    ctx->pc = 0x8081A3F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3F8u)) return;
    // 8081A3F8: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8081A3F8u)) return;
    ppc_frsp(ctx, 1, 1);

label_8081A3FC:
    ctx->pc = 0x8081A3FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A3FCu)) return;
    // 8081A3FC: bl      0x80014034
    {
            ctx->lr = 0x8081A400u;
            ctx->pc = 0x80014034u;
            return;
    }

label_8081A400:
    ctx->pc = 0x8081A400u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A400u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 8081A400: lis     r3, -28618
    ctx->gpr[3] = ((u32)(s32)(-28618) << 16);

label_8081A404:
    ctx->pc = 0x8081A404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A404u)) return;
    // 8081A404: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8081A408:
    ctx->pc = 0x8081A408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A408u)) return;
    // 8081A408: addi    r4, r3, -26724
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26724);

label_8081A40C:
    ctx->pc = 0x8081A40Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A40Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8081A40C: stw     r0, 232(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A410:
    ctx->pc = 0x8081A410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8081A410: lwz     r5, 0(r4)
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
label_8081A414:
    ctx->pc = 0x8081A414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A414u)) return;
    // 8081A414: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A418:
    ctx->pc = 0x8081A418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A418u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8081A418: lbz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A41C:
    ctx->pc = 0x8081A41Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A41Cu)) return;
    // 8081A41C: lis     r6, -28099
    ctx->gpr[6] = ((u32)(s32)(-28099) << 16);

label_8081A420:
    ctx->pc = 0x8081A420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A420u)) return;
    // 8081A420: frsp    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x8081A420u)) return;
    ppc_frsp(ctx, 31, 1);

label_8081A424:
    ctx->pc = 0x8081A424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8081A424: lfd     f2, 3320(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A424u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3320);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A428:
    ctx->pc = 0x8081A428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A428u)) return;
    // 8081A428: slw   r0, r5, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[5] << sh);
    }

label_8081A42C:
    ctx->pc = 0x8081A42Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A42Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A42C: lfd     f1, 3200(r6)
    if (!ppc_fp_available_inline(ctx, 0x8081A42Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3200);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A430:
    ctx->pc = 0x8081A430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A430: stw     r0, 236(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A434:
    ctx->pc = 0x8081A434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A434: lfd     f0, 232(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(232);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A438:
    ctx->pc = 0x8081A438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A438u)) return;
    // 8081A438: fsub   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A438u)) return;
    ppc_fsub(ctx, 0, 0, 2);

label_8081A43C:
    ctx->pc = 0x8081A43Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A43Cu)) return;
    // 8081A43C: fmul   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8081A43Cu)) return;
    ppc_fmul(ctx, 1, 1, 0);

label_8081A440:
    ctx->pc = 0x8081A440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A440u)) return;
    // 8081A440: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8081A440u)) return;
    ppc_frsp(ctx, 1, 1);

label_8081A444:
    ctx->pc = 0x8081A444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A444u)) return;
    // 8081A444: bl      0x80013948
    {
            ctx->lr = 0x8081A448u;
            ctx->pc = 0x80013948u;
            return;
    }

label_8081A448:
    ctx->pc = 0x8081A448u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A448u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 8081A448: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A44C:
    ctx->pc = 0x8081A44Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A44Cu)) return;
    // 8081A44C: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x8081A44Cu)) return;
    ppc_frsp(ctx, 1, 1);

label_8081A450:
    ctx->pc = 0x8081A450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081A450: lfs     f3, 3192(r3)
    if (!ppc_fp_available_inline(ctx, 0x8081A450u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3192);
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
label_8081A454:
    ctx->pc = 0x8081A454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A454u)) return;
    // 8081A454: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x8081A454u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_8081A458:
    ctx->pc = 0x8081A458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A458u)) return;
    // 8081A458: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8081A45C:
    ctx->pc = 0x8081A45Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A45Cu)) return;
    // 8081A45C: bl      0x8003A888
    {
            ctx->lr = 0x8081A460u;
            ctx->pc = 0x8003A888u;
            return;
    }

label_8081A460:
    ctx->pc = 0x8081A460u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A460u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A460: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A460u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
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
label_8081A464:
    ctx->pc = 0x8081A464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A464u)) return;
    // 8081A464: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A468:
    ctx->pc = 0x8081A468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A468: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A468u)) return;
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
label_8081A46C:
    ctx->pc = 0x8081A46Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A46Cu)) return;
    // 8081A46C: addi    r4, r3, 3192
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3192);

label_8081A470:
    ctx->pc = 0x8081A470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A470u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A470: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A470u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
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
label_8081A474:
    ctx->pc = 0x8081A474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A474u)) return;
    // 8081A474: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_8081A478:
    ctx->pc = 0x8081A478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A478u)) return;
    // 8081A478: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A478u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8081A47C:
    ctx->pc = 0x8081A47Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A47Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A47C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A47Cu)) return;
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
label_8081A480:
    ctx->pc = 0x8081A480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A480u)) return;
    // 8081A480: fmuls   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x8081A480u)) return;
    ppc_fmuls(ctx, 2, 0, 2);

label_8081A484:
    ctx->pc = 0x8081A484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A484u)) return;
    // 8081A484: bl      0x8003A8BC
    {
            ctx->lr = 0x8081A488u;
            ctx->pc = 0x8003A8BCu;
            return;
    }

label_8081A488:
    ctx->pc = 0x8081A488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8081A488: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8081A48C:
    ctx->pc = 0x8081A48Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A48Cu)) return;
    // 8081A48C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8081A490:
    ctx->pc = 0x8081A490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A490u)) return;
    // 8081A490: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8081A494:
    ctx->pc = 0x8081A494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A494u)) return;
    // 8081A494: bl      0x8003A434
    {
            ctx->lr = 0x8081A498u;
            ctx->pc = 0x8003A434u;
            return;
    }

label_8081A498:
    ctx->pc = 0x8081A498u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A498u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 8081A498: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_8081A49C:
    ctx->pc = 0x8081A49Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A49Cu)) return;
    // 8081A49C: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_8081A4A0:
    ctx->pc = 0x8081A4A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4A0u)) return;
    // 8081A4A0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8081A4A4:
    ctx->pc = 0x8081A4A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4A4u)) return;
    // 8081A4A4: bl      0x8003768C
    {
            ctx->lr = 0x8081A4A8u;
            ctx->pc = 0x8003768Cu;
            return;
    }

label_8081A4A8:
    ctx->pc = 0x8081A4A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 44u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A4A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 44u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 43u : 0u;
    // 8081A4A8: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A4A8u)) return;
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
label_8081A4AC:
    ctx->pc = 0x8081A4ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4ACu)) return;
    // 8081A4AC: lis     r4, -28099
    ctx->gpr[4] = ((u32)(s32)(-28099) << 16);

label_8081A4B0:
    ctx->pc = 0x8081A4B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4B0u)) return;
    // 8081A4B0: lis     r3, -28099
    ctx->gpr[3] = ((u32)(s32)(-28099) << 16);

label_8081A4B4:
    ctx->pc = 0x8081A4B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4B4u)) return;
    // 8081A4B4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8081A4B8:
    ctx->pc = 0x8081A4B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 39u : 0u;
    // 8081A4B8: stfs     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A4BC:
    ctx->pc = 0x8081A4BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4BCu)) return;
    // 8081A4BC: addi    r5, r4, 3192
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(3192);

label_8081A4C0:
    ctx->pc = 0x8081A4C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4C0u)) return;
    // 8081A4C0: addi    r4, r3, 3208
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3208);

label_8081A4C4:
    ctx->pc = 0x8081A4C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 8081A4C4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x8081A4C4u)) return;
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
label_8081A4C8:
    ctx->pc = 0x8081A4C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 8081A4C8: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A4C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
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
label_8081A4CC:
    ctx->pc = 0x8081A4CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4CCu)) return;
    // 8081A4CC: addi    r3, r1, 128
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(128);

label_8081A4D0:
    ctx->pc = 0x8081A4D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 8081A4D0: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x8081A4D0u)) return;
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
label_8081A4D4:
    ctx->pc = 0x8081A4D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4D4u)) return;
    // 8081A4D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8081A4D8:
    ctx->pc = 0x8081A4D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 8081A4D8: stfs     f2, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A4DC:
    ctx->pc = 0x8081A4DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 8081A4DC: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A4DCu)) return;
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
label_8081A4E0:
    ctx->pc = 0x8081A4E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 8081A4E0: stfs     f2, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A4E4:
    ctx->pc = 0x8081A4E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 8081A4E4: lfs     f2, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A4E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
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
label_8081A4E8:
    ctx->pc = 0x8081A4E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 8081A4E8: stfs     f2, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A4EC:
    ctx->pc = 0x8081A4ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 8081A4EC: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A4ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
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
label_8081A4F0:
    ctx->pc = 0x8081A4F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 8081A4F0: stfs     f2, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A4F4:
    ctx->pc = 0x8081A4F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 8081A4F4: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A4F8:
    ctx->pc = 0x8081A4F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 8081A4F8: lfs     f2, 20(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A4F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
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
label_8081A4FC:
    ctx->pc = 0x8081A4FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A4FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 8081A4FC: stfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A4FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A500:
    ctx->pc = 0x8081A500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 8081A500: stfs     f2, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A500u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A504:
    ctx->pc = 0x8081A504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 8081A504: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A504u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
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
label_8081A508:
    ctx->pc = 0x8081A508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 8081A508: stfs     f2, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A508u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A50C:
    ctx->pc = 0x8081A50Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A50Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 8081A50C: lfs     f2, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A50Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
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
label_8081A510:
    ctx->pc = 0x8081A510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 8081A510: stfs     f2, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A510u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A514:
    ctx->pc = 0x8081A514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 8081A514: lfs     f2, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A514u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_8081A518:
    ctx->pc = 0x8081A518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 8081A518: stfs     f2, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A518u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A51C:
    ctx->pc = 0x8081A51Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A51Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 8081A51C: lfs     f2, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x8081A51Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
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
label_8081A520:
    ctx->pc = 0x8081A520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 8081A520: stfs     f2, 208(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A520u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(208);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A524:
    ctx->pc = 0x8081A524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 8081A524: stfs     f1, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A524u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A528:
    ctx->pc = 0x8081A528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 8081A528: stfs     f1, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A528u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A52C:
    ctx->pc = 0x8081A52Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A52Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 8081A52C: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A52Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A530:
    ctx->pc = 0x8081A530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 8081A530: stfs     f1, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A534:
    ctx->pc = 0x8081A534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 8081A534: stfs     f0, 216(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(216);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A538:
    ctx->pc = 0x8081A538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A538: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A53C:
    ctx->pc = 0x8081A53Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A53Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A53C: stfs     f0, 212(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A53Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A540:
    ctx->pc = 0x8081A540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A540: stfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A544:
    ctx->pc = 0x8081A544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A544: stw     r0, 220(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A548:
    ctx->pc = 0x8081A548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 8081A548: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A54C:
    ctx->pc = 0x8081A54Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A54Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A54C: stw     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A550:
    ctx->pc = 0x8081A550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 8081A550: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A554:
    ctx->pc = 0x8081A554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A554u)) return;
    // 8081A554: bl      0x80050070
    {
            ctx->lr = 0x8081A558u;
            ctx->pc = 0x80050070u;
            return;
    }

label_8081A558:
    ctx->pc = 0x8081A558u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x8081A558u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 8081A558: psq_l   f31, 264(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8081A558u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(264);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8081A558u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A55C:
    ctx->pc = 0x8081A55Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A55Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 8081A55C: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A560:
    ctx->pc = 0x8081A560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 8081A560: lfd     f31, 256(r1)
    if (!ppc_fp_available_inline(ctx, 0x8081A560u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(256);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A564:
    ctx->pc = 0x8081A564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 8081A564: lwz     r31, 252(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(252);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A568:
    ctx->pc = 0x8081A568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x8081A568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 8081A568: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_8081A56C:
    ctx->pc = 0x8081A56Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A56Cu)) return;
    // 8081A56C: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_8081A570:
    ctx->pc = 0x8081A570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x8081A570u)) return;
    // 8081A570: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_808195A0;
        }
    }

    ctx->pc = 0x8081A574u;
    return;
return_dispatch_808195A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x808195BCu: goto label_808195BC;
    case 0x808195CCu: goto label_808195CC;
    case 0x808195DCu: goto label_808195DC;
    case 0x80819684u: goto label_80819684;
    case 0x808196CCu: goto label_808196CC;
    case 0x80819734u: goto label_80819734;
    case 0x80819768u: goto label_80819768;
    case 0x8081979Cu: goto label_8081979C;
    case 0x808197D0u: goto label_808197D0;
    case 0x80819808u: goto label_80819808;
    case 0x8081983Cu: goto label_8081983C;
    case 0x80819870u: goto label_80819870;
    case 0x808198A8u: goto label_808198A8;
    case 0x808198DCu: goto label_808198DC;
    case 0x80819910u: goto label_80819910;
    case 0x80819944u: goto label_80819944;
    case 0x8081997Cu: goto label_8081997C;
    case 0x808199B0u: goto label_808199B0;
    case 0x808199E4u: goto label_808199E4;
    case 0x80819A18u: goto label_80819A18;
    case 0x80819A4Cu: goto label_80819A4C;
    case 0x80819A58u: goto label_80819A58;
    case 0x80819A94u: goto label_80819A94;
    case 0x80819AD8u: goto label_80819AD8;
    case 0x80819B20u: goto label_80819B20;
    case 0x80819B38u: goto label_80819B38;
    case 0x80819B60u: goto label_80819B60;
    case 0x80819B70u: goto label_80819B70;
    case 0x80819B80u: goto label_80819B80;
    case 0x80819C28u: goto label_80819C28;
    case 0x80819C2Cu: goto label_80819C2C;
    case 0x80819C34u: goto label_80819C34;
    case 0x80819C3Cu: goto label_80819C3C;
    case 0x80819C40u: goto label_80819C40;
    case 0x80819C48u: goto label_80819C48;
    case 0x80819C50u: goto label_80819C50;
    case 0x8081A3BCu: goto label_8081A3BC;
    case 0x8081A400u: goto label_8081A400;
    case 0x8081A448u: goto label_8081A448;
    case 0x8081A460u: goto label_8081A460;
    case 0x8081A488u: goto label_8081A488;
    case 0x8081A498u: goto label_8081A498;
    case 0x8081A4A8u: goto label_8081A4A8;
    case 0x8081A558u: goto label_8081A558;
    default: return;
    }
}

