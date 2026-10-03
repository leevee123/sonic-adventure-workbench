// DolRecomp output
#include "../generated.h"

void func_80C23860(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80C23860[1287] = {
        &&label_80C23860,
        &&label_80C23864,
        &&label_80C23868,
        &&label_80C2386C,
        &&label_80C23870,
        &&label_80C23874,
        &&label_80C23878,
        &&label_80C2387C,
        &&label_80C23880,
        &&label_80C23884,
        &&label_80C23888,
        &&label_80C2388C,
        &&label_80C23890,
        &&label_80C23894,
        &&label_80C23898,
        &&label_80C2389C,
        &&label_80C238A0,
        &&label_80C238A4,
        &&label_80C238A8,
        &&label_80C238AC,
        &&label_80C238B0,
        &&label_80C238B4,
        &&label_80C238B8,
        &&label_80C238BC,
        &&label_80C238C0,
        &&label_80C238C4,
        &&label_80C238C8,
        &&label_80C238CC,
        &&label_80C238D0,
        &&label_80C238D4,
        &&label_80C238D8,
        &&label_80C238DC,
        &&label_80C238E0,
        &&label_80C238E4,
        &&label_80C238E8,
        &&label_80C238EC,
        &&label_80C238F0,
        &&label_80C238F4,
        &&label_80C238F8,
        &&label_80C238FC,
        &&label_80C23900,
        &&label_80C23904,
        &&label_80C23908,
        &&label_80C2390C,
        &&label_80C23910,
        &&label_80C23914,
        &&label_80C23918,
        &&label_80C2391C,
        &&label_80C23920,
        &&label_80C23924,
        &&label_80C23928,
        &&label_80C2392C,
        &&label_80C23930,
        &&label_80C23934,
        &&label_80C23938,
        &&label_80C2393C,
        &&label_80C23940,
        &&label_80C23944,
        &&label_80C23948,
        &&label_80C2394C,
        &&label_80C23950,
        &&label_80C23954,
        &&label_80C23958,
        &&label_80C2395C,
        &&label_80C23960,
        &&label_80C23964,
        &&label_80C23968,
        &&label_80C2396C,
        &&label_80C23970,
        &&label_80C23974,
        &&label_80C23978,
        &&label_80C2397C,
        &&label_80C23980,
        &&label_80C23984,
        &&label_80C23988,
        &&label_80C2398C,
        &&label_80C23990,
        &&label_80C23994,
        &&label_80C23998,
        &&label_80C2399C,
        &&label_80C239A0,
        &&label_80C239A4,
        &&label_80C239A8,
        &&label_80C239AC,
        &&label_80C239B0,
        &&label_80C239B4,
        &&label_80C239B8,
        &&label_80C239BC,
        &&label_80C239C0,
        &&label_80C239C4,
        &&label_80C239C8,
        &&label_80C239CC,
        &&label_80C239D0,
        &&label_80C239D4,
        &&label_80C239D8,
        &&label_80C239DC,
        &&label_80C239E0,
        &&label_80C239E4,
        &&label_80C239E8,
        &&label_80C239EC,
        &&label_80C239F0,
        &&label_80C239F4,
        &&label_80C239F8,
        &&label_80C239FC,
        &&label_80C23A00,
        &&label_80C23A04,
        &&label_80C23A08,
        &&label_80C23A0C,
        &&label_80C23A10,
        &&label_80C23A14,
        &&label_80C23A18,
        &&label_80C23A1C,
        &&label_80C23A20,
        &&label_80C23A24,
        &&label_80C23A28,
        &&label_80C23A2C,
        &&label_80C23A30,
        &&label_80C23A34,
        &&label_80C23A38,
        &&label_80C23A3C,
        &&label_80C23A40,
        &&label_80C23A44,
        &&label_80C23A48,
        &&label_80C23A4C,
        &&label_80C23A50,
        &&label_80C23A54,
        &&label_80C23A58,
        &&label_80C23A5C,
        &&label_80C23A60,
        &&label_80C23A64,
        &&label_80C23A68,
        &&label_80C23A6C,
        &&label_80C23A70,
        &&label_80C23A74,
        &&label_80C23A78,
        &&label_80C23A7C,
        &&label_80C23A80,
        &&label_80C23A84,
        &&label_80C23A88,
        &&label_80C23A8C,
        &&label_80C23A90,
        &&label_80C23A94,
        &&label_80C23A98,
        &&label_80C23A9C,
        &&label_80C23AA0,
        &&label_80C23AA4,
        &&label_80C23AA8,
        &&label_80C23AAC,
        &&label_80C23AB0,
        &&label_80C23AB4,
        &&label_80C23AB8,
        &&label_80C23ABC,
        &&label_80C23AC0,
        &&label_80C23AC4,
        &&label_80C23AC8,
        &&label_80C23ACC,
        &&label_80C23AD0,
        &&label_80C23AD4,
        &&label_80C23AD8,
        &&label_80C23ADC,
        &&label_80C23AE0,
        &&label_80C23AE4,
        &&label_80C23AE8,
        &&label_80C23AEC,
        &&label_80C23AF0,
        &&label_80C23AF4,
        &&label_80C23AF8,
        &&label_80C23AFC,
        &&label_80C23B00,
        &&label_80C23B04,
        &&label_80C23B08,
        &&label_80C23B0C,
        &&label_80C23B10,
        &&label_80C23B14,
        &&label_80C23B18,
        &&label_80C23B1C,
        &&label_80C23B20,
        &&label_80C23B24,
        &&label_80C23B28,
        &&label_80C23B2C,
        &&label_80C23B30,
        &&label_80C23B34,
        &&label_80C23B38,
        &&label_80C23B3C,
        &&label_80C23B40,
        &&label_80C23B44,
        &&label_80C23B48,
        &&label_80C23B4C,
        &&label_80C23B50,
        &&label_80C23B54,
        &&label_80C23B58,
        &&label_80C23B5C,
        &&label_80C23B60,
        &&label_80C23B64,
        &&label_80C23B68,
        &&label_80C23B6C,
        &&label_80C23B70,
        &&label_80C23B74,
        &&label_80C23B78,
        &&label_80C23B7C,
        &&label_80C23B80,
        &&label_80C23B84,
        &&label_80C23B88,
        &&label_80C23B8C,
        &&label_80C23B90,
        &&label_80C23B94,
        &&label_80C23B98,
        &&label_80C23B9C,
        &&label_80C23BA0,
        &&label_80C23BA4,
        &&label_80C23BA8,
        &&label_80C23BAC,
        &&label_80C23BB0,
        &&label_80C23BB4,
        &&label_80C23BB8,
        &&label_80C23BBC,
        &&label_80C23BC0,
        &&label_80C23BC4,
        &&label_80C23BC8,
        &&label_80C23BCC,
        &&label_80C23BD0,
        &&label_80C23BD4,
        &&label_80C23BD8,
        &&label_80C23BDC,
        &&label_80C23BE0,
        &&label_80C23BE4,
        &&label_80C23BE8,
        &&label_80C23BEC,
        &&label_80C23BF0,
        &&label_80C23BF4,
        &&label_80C23BF8,
        &&label_80C23BFC,
        &&label_80C23C00,
        &&label_80C23C04,
        &&label_80C23C08,
        &&label_80C23C0C,
        &&label_80C23C10,
        &&label_80C23C14,
        &&label_80C23C18,
        &&label_80C23C1C,
        &&label_80C23C20,
        &&label_80C23C24,
        &&label_80C23C28,
        &&label_80C23C2C,
        &&label_80C23C30,
        &&label_80C23C34,
        &&label_80C23C38,
        &&label_80C23C3C,
        &&label_80C23C40,
        &&label_80C23C44,
        &&label_80C23C48,
        &&label_80C23C4C,
        &&label_80C23C50,
        &&label_80C23C54,
        &&label_80C23C58,
        &&label_80C23C5C,
        &&label_80C23C60,
        &&label_80C23C64,
        &&label_80C23C68,
        &&label_80C23C6C,
        &&label_80C23C70,
        &&label_80C23C74,
        &&label_80C23C78,
        &&label_80C23C7C,
        &&label_80C23C80,
        &&label_80C23C84,
        &&label_80C23C88,
        &&label_80C23C8C,
        &&label_80C23C90,
        &&label_80C23C94,
        &&label_80C23C98,
        &&label_80C23C9C,
        &&label_80C23CA0,
        &&label_80C23CA4,
        &&label_80C23CA8,
        &&label_80C23CAC,
        &&label_80C23CB0,
        &&label_80C23CB4,
        &&label_80C23CB8,
        &&label_80C23CBC,
        &&label_80C23CC0,
        &&label_80C23CC4,
        &&label_80C23CC8,
        &&label_80C23CCC,
        &&label_80C23CD0,
        &&label_80C23CD4,
        &&label_80C23CD8,
        &&label_80C23CDC,
        &&label_80C23CE0,
        &&label_80C23CE4,
        &&label_80C23CE8,
        &&label_80C23CEC,
        &&label_80C23CF0,
        &&label_80C23CF4,
        &&label_80C23CF8,
        &&label_80C23CFC,
        &&label_80C23D00,
        &&label_80C23D04,
        &&label_80C23D08,
        &&label_80C23D0C,
        &&label_80C23D10,
        &&label_80C23D14,
        &&label_80C23D18,
        &&label_80C23D1C,
        &&label_80C23D20,
        &&label_80C23D24,
        &&label_80C23D28,
        &&label_80C23D2C,
        &&label_80C23D30,
        &&label_80C23D34,
        &&label_80C23D38,
        &&label_80C23D3C,
        &&label_80C23D40,
        &&label_80C23D44,
        &&label_80C23D48,
        &&label_80C23D4C,
        &&label_80C23D50,
        &&label_80C23D54,
        &&label_80C23D58,
        &&label_80C23D5C,
        &&label_80C23D60,
        &&label_80C23D64,
        &&label_80C23D68,
        &&label_80C23D6C,
        &&label_80C23D70,
        &&label_80C23D74,
        &&label_80C23D78,
        &&label_80C23D7C,
        &&label_80C23D80,
        &&label_80C23D84,
        &&label_80C23D88,
        &&label_80C23D8C,
        &&label_80C23D90,
        &&label_80C23D94,
        &&label_80C23D98,
        &&label_80C23D9C,
        &&label_80C23DA0,
        &&label_80C23DA4,
        &&label_80C23DA8,
        &&label_80C23DAC,
        &&label_80C23DB0,
        &&label_80C23DB4,
        &&label_80C23DB8,
        &&label_80C23DBC,
        &&label_80C23DC0,
        &&label_80C23DC4,
        &&label_80C23DC8,
        &&label_80C23DCC,
        &&label_80C23DD0,
        &&label_80C23DD4,
        &&label_80C23DD8,
        &&label_80C23DDC,
        &&label_80C23DE0,
        &&label_80C23DE4,
        &&label_80C23DE8,
        &&label_80C23DEC,
        &&label_80C23DF0,
        &&label_80C23DF4,
        &&label_80C23DF8,
        &&label_80C23DFC,
        &&label_80C23E00,
        &&label_80C23E04,
        &&label_80C23E08,
        &&label_80C23E0C,
        &&label_80C23E10,
        &&label_80C23E14,
        &&label_80C23E18,
        &&label_80C23E1C,
        &&label_80C23E20,
        &&label_80C23E24,
        &&label_80C23E28,
        &&label_80C23E2C,
        &&label_80C23E30,
        &&label_80C23E34,
        &&label_80C23E38,
        &&label_80C23E3C,
        &&label_80C23E40,
        &&label_80C23E44,
        &&label_80C23E48,
        &&label_80C23E4C,
        &&label_80C23E50,
        &&label_80C23E54,
        &&label_80C23E58,
        &&label_80C23E5C,
        &&label_80C23E60,
        &&label_80C23E64,
        &&label_80C23E68,
        &&label_80C23E6C,
        &&label_80C23E70,
        &&label_80C23E74,
        &&label_80C23E78,
        &&label_80C23E7C,
        &&label_80C23E80,
        &&label_80C23E84,
        &&label_80C23E88,
        &&label_80C23E8C,
        &&label_80C23E90,
        &&label_80C23E94,
        &&label_80C23E98,
        &&label_80C23E9C,
        &&label_80C23EA0,
        &&label_80C23EA4,
        &&label_80C23EA8,
        &&label_80C23EAC,
        &&label_80C23EB0,
        &&label_80C23EB4,
        &&label_80C23EB8,
        &&label_80C23EBC,
        &&label_80C23EC0,
        &&label_80C23EC4,
        &&label_80C23EC8,
        &&label_80C23ECC,
        &&label_80C23ED0,
        &&label_80C23ED4,
        &&label_80C23ED8,
        &&label_80C23EDC,
        &&label_80C23EE0,
        &&label_80C23EE4,
        &&label_80C23EE8,
        &&label_80C23EEC,
        &&label_80C23EF0,
        &&label_80C23EF4,
        &&label_80C23EF8,
        &&label_80C23EFC,
        &&label_80C23F00,
        &&label_80C23F04,
        &&label_80C23F08,
        &&label_80C23F0C,
        &&label_80C23F10,
        &&label_80C23F14,
        &&label_80C23F18,
        &&label_80C23F1C,
        &&label_80C23F20,
        &&label_80C23F24,
        &&label_80C23F28,
        &&label_80C23F2C,
        &&label_80C23F30,
        &&label_80C23F34,
        &&label_80C23F38,
        &&label_80C23F3C,
        &&label_80C23F40,
        &&label_80C23F44,
        &&label_80C23F48,
        &&label_80C23F4C,
        &&label_80C23F50,
        &&label_80C23F54,
        &&label_80C23F58,
        &&label_80C23F5C,
        &&label_80C23F60,
        &&label_80C23F64,
        &&label_80C23F68,
        &&label_80C23F6C,
        &&label_80C23F70,
        &&label_80C23F74,
        &&label_80C23F78,
        &&label_80C23F7C,
        &&label_80C23F80,
        &&label_80C23F84,
        &&label_80C23F88,
        &&label_80C23F8C,
        &&label_80C23F90,
        &&label_80C23F94,
        &&label_80C23F98,
        &&label_80C23F9C,
        &&label_80C23FA0,
        &&label_80C23FA4,
        &&label_80C23FA8,
        &&label_80C23FAC,
        &&label_80C23FB0,
        &&label_80C23FB4,
        &&label_80C23FB8,
        &&label_80C23FBC,
        &&label_80C23FC0,
        &&label_80C23FC4,
        &&label_80C23FC8,
        &&label_80C23FCC,
        &&label_80C23FD0,
        &&label_80C23FD4,
        &&label_80C23FD8,
        &&label_80C23FDC,
        &&label_80C23FE0,
        &&label_80C23FE4,
        &&label_80C23FE8,
        &&label_80C23FEC,
        &&label_80C23FF0,
        &&label_80C23FF4,
        &&label_80C23FF8,
        &&label_80C23FFC,
        &&label_80C24000,
        &&label_80C24004,
        &&label_80C24008,
        &&label_80C2400C,
        &&label_80C24010,
        &&label_80C24014,
        &&label_80C24018,
        &&label_80C2401C,
        &&label_80C24020,
        &&label_80C24024,
        &&label_80C24028,
        &&label_80C2402C,
        &&label_80C24030,
        &&label_80C24034,
        &&label_80C24038,
        &&label_80C2403C,
        &&label_80C24040,
        &&label_80C24044,
        &&label_80C24048,
        &&label_80C2404C,
        &&label_80C24050,
        &&label_80C24054,
        &&label_80C24058,
        &&label_80C2405C,
        &&label_80C24060,
        &&label_80C24064,
        &&label_80C24068,
        &&label_80C2406C,
        &&label_80C24070,
        &&label_80C24074,
        &&label_80C24078,
        &&label_80C2407C,
        &&label_80C24080,
        &&label_80C24084,
        &&label_80C24088,
        &&label_80C2408C,
        &&label_80C24090,
        &&label_80C24094,
        &&label_80C24098,
        &&label_80C2409C,
        &&label_80C240A0,
        &&label_80C240A4,
        &&label_80C240A8,
        &&label_80C240AC,
        &&label_80C240B0,
        &&label_80C240B4,
        &&label_80C240B8,
        &&label_80C240BC,
        &&label_80C240C0,
        &&label_80C240C4,
        &&label_80C240C8,
        &&label_80C240CC,
        &&label_80C240D0,
        &&label_80C240D4,
        &&label_80C240D8,
        &&label_80C240DC,
        &&label_80C240E0,
        &&label_80C240E4,
        &&label_80C240E8,
        &&label_80C240EC,
        &&label_80C240F0,
        &&label_80C240F4,
        &&label_80C240F8,
        &&label_80C240FC,
        &&label_80C24100,
        &&label_80C24104,
        &&label_80C24108,
        &&label_80C2410C,
        &&label_80C24110,
        &&label_80C24114,
        &&label_80C24118,
        &&label_80C2411C,
        &&label_80C24120,
        &&label_80C24124,
        &&label_80C24128,
        &&label_80C2412C,
        &&label_80C24130,
        &&label_80C24134,
        &&label_80C24138,
        &&label_80C2413C,
        &&label_80C24140,
        &&label_80C24144,
        &&label_80C24148,
        &&label_80C2414C,
        &&label_80C24150,
        &&label_80C24154,
        &&label_80C24158,
        &&label_80C2415C,
        &&label_80C24160,
        &&label_80C24164,
        &&label_80C24168,
        &&label_80C2416C,
        &&label_80C24170,
        &&label_80C24174,
        &&label_80C24178,
        &&label_80C2417C,
        &&label_80C24180,
        &&label_80C24184,
        &&label_80C24188,
        &&label_80C2418C,
        &&label_80C24190,
        &&label_80C24194,
        &&label_80C24198,
        &&label_80C2419C,
        &&label_80C241A0,
        &&label_80C241A4,
        &&label_80C241A8,
        &&label_80C241AC,
        &&label_80C241B0,
        &&label_80C241B4,
        &&label_80C241B8,
        &&label_80C241BC,
        &&label_80C241C0,
        &&label_80C241C4,
        &&label_80C241C8,
        &&label_80C241CC,
        &&label_80C241D0,
        &&label_80C241D4,
        &&label_80C241D8,
        &&label_80C241DC,
        &&label_80C241E0,
        &&label_80C241E4,
        &&label_80C241E8,
        &&label_80C241EC,
        &&label_80C241F0,
        &&label_80C241F4,
        &&label_80C241F8,
        &&label_80C241FC,
        &&label_80C24200,
        &&label_80C24204,
        &&label_80C24208,
        &&label_80C2420C,
        &&label_80C24210,
        &&label_80C24214,
        &&label_80C24218,
        &&label_80C2421C,
        &&label_80C24220,
        &&label_80C24224,
        &&label_80C24228,
        &&label_80C2422C,
        &&label_80C24230,
        &&label_80C24234,
        &&label_80C24238,
        &&label_80C2423C,
        &&label_80C24240,
        &&label_80C24244,
        &&label_80C24248,
        &&label_80C2424C,
        &&label_80C24250,
        &&label_80C24254,
        &&label_80C24258,
        &&label_80C2425C,
        &&label_80C24260,
        &&label_80C24264,
        &&label_80C24268,
        &&label_80C2426C,
        &&label_80C24270,
        &&label_80C24274,
        &&label_80C24278,
        &&label_80C2427C,
        &&label_80C24280,
        &&label_80C24284,
        &&label_80C24288,
        &&label_80C2428C,
        &&label_80C24290,
        &&label_80C24294,
        &&label_80C24298,
        &&label_80C2429C,
        &&label_80C242A0,
        &&label_80C242A4,
        &&label_80C242A8,
        &&label_80C242AC,
        &&label_80C242B0,
        &&label_80C242B4,
        &&label_80C242B8,
        &&label_80C242BC,
        &&label_80C242C0,
        &&label_80C242C4,
        &&label_80C242C8,
        &&label_80C242CC,
        &&label_80C242D0,
        &&label_80C242D4,
        &&label_80C242D8,
        &&label_80C242DC,
        &&label_80C242E0,
        &&label_80C242E4,
        &&label_80C242E8,
        &&label_80C242EC,
        &&label_80C242F0,
        &&label_80C242F4,
        &&label_80C242F8,
        &&label_80C242FC,
        &&label_80C24300,
        &&label_80C24304,
        &&label_80C24308,
        &&label_80C2430C,
        &&label_80C24310,
        &&label_80C24314,
        &&label_80C24318,
        &&label_80C2431C,
        &&label_80C24320,
        &&label_80C24324,
        &&label_80C24328,
        &&label_80C2432C,
        &&label_80C24330,
        &&label_80C24334,
        &&label_80C24338,
        &&label_80C2433C,
        &&label_80C24340,
        &&label_80C24344,
        &&label_80C24348,
        &&label_80C2434C,
        &&label_80C24350,
        &&label_80C24354,
        &&label_80C24358,
        &&label_80C2435C,
        &&label_80C24360,
        &&label_80C24364,
        &&label_80C24368,
        &&label_80C2436C,
        &&label_80C24370,
        &&label_80C24374,
        &&label_80C24378,
        &&label_80C2437C,
        &&label_80C24380,
        &&label_80C24384,
        &&label_80C24388,
        &&label_80C2438C,
        &&label_80C24390,
        &&label_80C24394,
        &&label_80C24398,
        &&label_80C2439C,
        &&label_80C243A0,
        &&label_80C243A4,
        &&label_80C243A8,
        &&label_80C243AC,
        &&label_80C243B0,
        &&label_80C243B4,
        &&label_80C243B8,
        &&label_80C243BC,
        &&label_80C243C0,
        &&label_80C243C4,
        &&label_80C243C8,
        &&label_80C243CC,
        &&label_80C243D0,
        &&label_80C243D4,
        &&label_80C243D8,
        &&label_80C243DC,
        &&label_80C243E0,
        &&label_80C243E4,
        &&label_80C243E8,
        &&label_80C243EC,
        &&label_80C243F0,
        &&label_80C243F4,
        &&label_80C243F8,
        &&label_80C243FC,
        &&label_80C24400,
        &&label_80C24404,
        &&label_80C24408,
        &&label_80C2440C,
        &&label_80C24410,
        &&label_80C24414,
        &&label_80C24418,
        &&label_80C2441C,
        &&label_80C24420,
        &&label_80C24424,
        &&label_80C24428,
        &&label_80C2442C,
        &&label_80C24430,
        &&label_80C24434,
        &&label_80C24438,
        &&label_80C2443C,
        &&label_80C24440,
        &&label_80C24444,
        &&label_80C24448,
        &&label_80C2444C,
        &&label_80C24450,
        &&label_80C24454,
        &&label_80C24458,
        &&label_80C2445C,
        &&label_80C24460,
        &&label_80C24464,
        &&label_80C24468,
        &&label_80C2446C,
        &&label_80C24470,
        &&label_80C24474,
        &&label_80C24478,
        &&label_80C2447C,
        &&label_80C24480,
        &&label_80C24484,
        &&label_80C24488,
        &&label_80C2448C,
        &&label_80C24490,
        &&label_80C24494,
        &&label_80C24498,
        &&label_80C2449C,
        &&label_80C244A0,
        &&label_80C244A4,
        &&label_80C244A8,
        &&label_80C244AC,
        &&label_80C244B0,
        &&label_80C244B4,
        &&label_80C244B8,
        &&label_80C244BC,
        &&label_80C244C0,
        &&label_80C244C4,
        &&label_80C244C8,
        &&label_80C244CC,
        &&label_80C244D0,
        &&label_80C244D4,
        &&label_80C244D8,
        &&label_80C244DC,
        &&label_80C244E0,
        &&label_80C244E4,
        &&label_80C244E8,
        &&label_80C244EC,
        &&label_80C244F0,
        &&label_80C244F4,
        &&label_80C244F8,
        &&label_80C244FC,
        &&label_80C24500,
        &&label_80C24504,
        &&label_80C24508,
        &&label_80C2450C,
        &&label_80C24510,
        &&label_80C24514,
        &&label_80C24518,
        &&label_80C2451C,
        &&label_80C24520,
        &&label_80C24524,
        &&label_80C24528,
        &&label_80C2452C,
        &&label_80C24530,
        &&label_80C24534,
        &&label_80C24538,
        &&label_80C2453C,
        &&label_80C24540,
        &&label_80C24544,
        &&label_80C24548,
        &&label_80C2454C,
        &&label_80C24550,
        &&label_80C24554,
        &&label_80C24558,
        &&label_80C2455C,
        &&label_80C24560,
        &&label_80C24564,
        &&label_80C24568,
        &&label_80C2456C,
        &&label_80C24570,
        &&label_80C24574,
        &&label_80C24578,
        &&label_80C2457C,
        &&label_80C24580,
        &&label_80C24584,
        &&label_80C24588,
        &&label_80C2458C,
        &&label_80C24590,
        &&label_80C24594,
        &&label_80C24598,
        &&label_80C2459C,
        &&label_80C245A0,
        &&label_80C245A4,
        &&label_80C245A8,
        &&label_80C245AC,
        &&label_80C245B0,
        &&label_80C245B4,
        &&label_80C245B8,
        &&label_80C245BC,
        &&label_80C245C0,
        &&label_80C245C4,
        &&label_80C245C8,
        &&label_80C245CC,
        &&label_80C245D0,
        &&label_80C245D4,
        &&label_80C245D8,
        &&label_80C245DC,
        &&label_80C245E0,
        &&label_80C245E4,
        &&label_80C245E8,
        &&label_80C245EC,
        &&label_80C245F0,
        &&label_80C245F4,
        &&label_80C245F8,
        &&label_80C245FC,
        &&label_80C24600,
        &&label_80C24604,
        &&label_80C24608,
        &&label_80C2460C,
        &&label_80C24610,
        &&label_80C24614,
        &&label_80C24618,
        &&label_80C2461C,
        &&label_80C24620,
        &&label_80C24624,
        &&label_80C24628,
        &&label_80C2462C,
        &&label_80C24630,
        &&label_80C24634,
        &&label_80C24638,
        &&label_80C2463C,
        &&label_80C24640,
        &&label_80C24644,
        &&label_80C24648,
        &&label_80C2464C,
        &&label_80C24650,
        &&label_80C24654,
        &&label_80C24658,
        &&label_80C2465C,
        &&label_80C24660,
        &&label_80C24664,
        &&label_80C24668,
        &&label_80C2466C,
        &&label_80C24670,
        &&label_80C24674,
        &&label_80C24678,
        &&label_80C2467C,
        &&label_80C24680,
        &&label_80C24684,
        &&label_80C24688,
        &&label_80C2468C,
        &&label_80C24690,
        &&label_80C24694,
        &&label_80C24698,
        &&label_80C2469C,
        &&label_80C246A0,
        &&label_80C246A4,
        &&label_80C246A8,
        &&label_80C246AC,
        &&label_80C246B0,
        &&label_80C246B4,
        &&label_80C246B8,
        &&label_80C246BC,
        &&label_80C246C0,
        &&label_80C246C4,
        &&label_80C246C8,
        &&label_80C246CC,
        &&label_80C246D0,
        &&label_80C246D4,
        &&label_80C246D8,
        &&label_80C246DC,
        &&label_80C246E0,
        &&label_80C246E4,
        &&label_80C246E8,
        &&label_80C246EC,
        &&label_80C246F0,
        &&label_80C246F4,
        &&label_80C246F8,
        &&label_80C246FC,
        &&label_80C24700,
        &&label_80C24704,
        &&label_80C24708,
        &&label_80C2470C,
        &&label_80C24710,
        &&label_80C24714,
        &&label_80C24718,
        &&label_80C2471C,
        &&label_80C24720,
        &&label_80C24724,
        &&label_80C24728,
        &&label_80C2472C,
        &&label_80C24730,
        &&label_80C24734,
        &&label_80C24738,
        &&label_80C2473C,
        &&label_80C24740,
        &&label_80C24744,
        &&label_80C24748,
        &&label_80C2474C,
        &&label_80C24750,
        &&label_80C24754,
        &&label_80C24758,
        &&label_80C2475C,
        &&label_80C24760,
        &&label_80C24764,
        &&label_80C24768,
        &&label_80C2476C,
        &&label_80C24770,
        &&label_80C24774,
        &&label_80C24778,
        &&label_80C2477C,
        &&label_80C24780,
        &&label_80C24784,
        &&label_80C24788,
        &&label_80C2478C,
        &&label_80C24790,
        &&label_80C24794,
        &&label_80C24798,
        &&label_80C2479C,
        &&label_80C247A0,
        &&label_80C247A4,
        &&label_80C247A8,
        &&label_80C247AC,
        &&label_80C247B0,
        &&label_80C247B4,
        &&label_80C247B8,
        &&label_80C247BC,
        &&label_80C247C0,
        &&label_80C247C4,
        &&label_80C247C8,
        &&label_80C247CC,
        &&label_80C247D0,
        &&label_80C247D4,
        &&label_80C247D8,
        &&label_80C247DC,
        &&label_80C247E0,
        &&label_80C247E4,
        &&label_80C247E8,
        &&label_80C247EC,
        &&label_80C247F0,
        &&label_80C247F4,
        &&label_80C247F8,
        &&label_80C247FC,
        &&label_80C24800,
        &&label_80C24804,
        &&label_80C24808,
        &&label_80C2480C,
        &&label_80C24810,
        &&label_80C24814,
        &&label_80C24818,
        &&label_80C2481C,
        &&label_80C24820,
        &&label_80C24824,
        &&label_80C24828,
        &&label_80C2482C,
        &&label_80C24830,
        &&label_80C24834,
        &&label_80C24838,
        &&label_80C2483C,
        &&label_80C24840,
        &&label_80C24844,
        &&label_80C24848,
        &&label_80C2484C,
        &&label_80C24850,
        &&label_80C24854,
        &&label_80C24858,
        &&label_80C2485C,
        &&label_80C24860,
        &&label_80C24864,
        &&label_80C24868,
        &&label_80C2486C,
        &&label_80C24870,
        &&label_80C24874,
        &&label_80C24878,
        &&label_80C2487C,
        &&label_80C24880,
        &&label_80C24884,
        &&label_80C24888,
        &&label_80C2488C,
        &&label_80C24890,
        &&label_80C24894,
        &&label_80C24898,
        &&label_80C2489C,
        &&label_80C248A0,
        &&label_80C248A4,
        &&label_80C248A8,
        &&label_80C248AC,
        &&label_80C248B0,
        &&label_80C248B4,
        &&label_80C248B8,
        &&label_80C248BC,
        &&label_80C248C0,
        &&label_80C248C4,
        &&label_80C248C8,
        &&label_80C248CC,
        &&label_80C248D0,
        &&label_80C248D4,
        &&label_80C248D8,
        &&label_80C248DC,
        &&label_80C248E0,
        &&label_80C248E4,
        &&label_80C248E8,
        &&label_80C248EC,
        &&label_80C248F0,
        &&label_80C248F4,
        &&label_80C248F8,
        &&label_80C248FC,
        &&label_80C24900,
        &&label_80C24904,
        &&label_80C24908,
        &&label_80C2490C,
        &&label_80C24910,
        &&label_80C24914,
        &&label_80C24918,
        &&label_80C2491C,
        &&label_80C24920,
        &&label_80C24924,
        &&label_80C24928,
        &&label_80C2492C,
        &&label_80C24930,
        &&label_80C24934,
        &&label_80C24938,
        &&label_80C2493C,
        &&label_80C24940,
        &&label_80C24944,
        &&label_80C24948,
        &&label_80C2494C,
        &&label_80C24950,
        &&label_80C24954,
        &&label_80C24958,
        &&label_80C2495C,
        &&label_80C24960,
        &&label_80C24964,
        &&label_80C24968,
        &&label_80C2496C,
        &&label_80C24970,
        &&label_80C24974,
        &&label_80C24978,
        &&label_80C2497C,
        &&label_80C24980,
        &&label_80C24984,
        &&label_80C24988,
        &&label_80C2498C,
        &&label_80C24990,
        &&label_80C24994,
        &&label_80C24998,
        &&label_80C2499C,
        &&label_80C249A0,
        &&label_80C249A4,
        &&label_80C249A8,
        &&label_80C249AC,
        &&label_80C249B0,
        &&label_80C249B4,
        &&label_80C249B8,
        &&label_80C249BC,
        &&label_80C249C0,
        &&label_80C249C4,
        &&label_80C249C8,
        &&label_80C249CC,
        &&label_80C249D0,
        &&label_80C249D4,
        &&label_80C249D8,
        &&label_80C249DC,
        &&label_80C249E0,
        &&label_80C249E4,
        &&label_80C249E8,
        &&label_80C249EC,
        &&label_80C249F0,
        &&label_80C249F4,
        &&label_80C249F8,
        &&label_80C249FC,
        &&label_80C24A00,
        &&label_80C24A04,
        &&label_80C24A08,
        &&label_80C24A0C,
        &&label_80C24A10,
        &&label_80C24A14,
        &&label_80C24A18,
        &&label_80C24A1C,
        &&label_80C24A20,
        &&label_80C24A24,
        &&label_80C24A28,
        &&label_80C24A2C,
        &&label_80C24A30,
        &&label_80C24A34,
        &&label_80C24A38,
        &&label_80C24A3C,
        &&label_80C24A40,
        &&label_80C24A44,
        &&label_80C24A48,
        &&label_80C24A4C,
        &&label_80C24A50,
        &&label_80C24A54,
        &&label_80C24A58,
        &&label_80C24A5C,
        &&label_80C24A60,
        &&label_80C24A64,
        &&label_80C24A68,
        &&label_80C24A6C,
        &&label_80C24A70,
        &&label_80C24A74,
        &&label_80C24A78,
        &&label_80C24A7C,
        &&label_80C24A80,
        &&label_80C24A84,
        &&label_80C24A88,
        &&label_80C24A8C,
        &&label_80C24A90,
        &&label_80C24A94,
        &&label_80C24A98,
        &&label_80C24A9C,
        &&label_80C24AA0,
        &&label_80C24AA4,
        &&label_80C24AA8,
        &&label_80C24AAC,
        &&label_80C24AB0,
        &&label_80C24AB4,
        &&label_80C24AB8,
        &&label_80C24ABC,
        &&label_80C24AC0,
        &&label_80C24AC4,
        &&label_80C24AC8,
        &&label_80C24ACC,
        &&label_80C24AD0,
        &&label_80C24AD4,
        &&label_80C24AD8,
        &&label_80C24ADC,
        &&label_80C24AE0,
        &&label_80C24AE4,
        &&label_80C24AE8,
        &&label_80C24AEC,
        &&label_80C24AF0,
        &&label_80C24AF4,
        &&label_80C24AF8,
        &&label_80C24AFC,
        &&label_80C24B00,
        &&label_80C24B04,
        &&label_80C24B08,
        &&label_80C24B0C,
        &&label_80C24B10,
        &&label_80C24B14,
        &&label_80C24B18,
        &&label_80C24B1C,
        &&label_80C24B20,
        &&label_80C24B24,
        &&label_80C24B28,
        &&label_80C24B2C,
        &&label_80C24B30,
        &&label_80C24B34,
        &&label_80C24B38,
        &&label_80C24B3C,
        &&label_80C24B40,
        &&label_80C24B44,
        &&label_80C24B48,
        &&label_80C24B4C,
        &&label_80C24B50,
        &&label_80C24B54,
        &&label_80C24B58,
        &&label_80C24B5C,
        &&label_80C24B60,
        &&label_80C24B64,
        &&label_80C24B68,
        &&label_80C24B6C,
        &&label_80C24B70,
        &&label_80C24B74,
        &&label_80C24B78,
        &&label_80C24B7C,
        &&label_80C24B80,
        &&label_80C24B84,
        &&label_80C24B88,
        &&label_80C24B8C,
        &&label_80C24B90,
        &&label_80C24B94,
        &&label_80C24B98,
        &&label_80C24B9C,
        &&label_80C24BA0,
        &&label_80C24BA4,
        &&label_80C24BA8,
        &&label_80C24BAC,
        &&label_80C24BB0,
        &&label_80C24BB4,
        &&label_80C24BB8,
        &&label_80C24BBC,
        &&label_80C24BC0,
        &&label_80C24BC4,
        &&label_80C24BC8,
        &&label_80C24BCC,
        &&label_80C24BD0,
        &&label_80C24BD4,
        &&label_80C24BD8,
        &&label_80C24BDC,
        &&label_80C24BE0,
        &&label_80C24BE4,
        &&label_80C24BE8,
        &&label_80C24BEC,
        &&label_80C24BF0,
        &&label_80C24BF4,
        &&label_80C24BF8,
        &&label_80C24BFC,
        &&label_80C24C00,
        &&label_80C24C04,
        &&label_80C24C08,
        &&label_80C24C0C,
        &&label_80C24C10,
        &&label_80C24C14,
        &&label_80C24C18,
        &&label_80C24C1C,
        &&label_80C24C20,
        &&label_80C24C24,
        &&label_80C24C28,
        &&label_80C24C2C,
        &&label_80C24C30,
        &&label_80C24C34,
        &&label_80C24C38,
        &&label_80C24C3C,
        &&label_80C24C40,
        &&label_80C24C44,
        &&label_80C24C48,
        &&label_80C24C4C,
        &&label_80C24C50,
        &&label_80C24C54,
        &&label_80C24C58,
        &&label_80C24C5C,
        &&label_80C24C60,
        &&label_80C24C64,
        &&label_80C24C68,
        &&label_80C24C6C,
        &&label_80C24C70,
        &&label_80C24C74,
        &&label_80C24C78
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80C23860u && pc <= 0x80C24C78u && ((pc - 0x80C23860u) & 3u) == 0u)
            goto *pc_table_80C23860[(pc - 0x80C23860u) >> 2];
    }
    return;
label_80C23860:
    ctx->pc = 0x80C23860u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23860u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C23860: stwu     r1, -48(r1)
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
label_80C23864:
    ctx->pc = 0x80C23864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23864: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C23868:
    ctx->pc = 0x80C23868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23868: stw     r0, 52(r1)
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
label_80C2386C:
    ctx->pc = 0x80C2386Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2386Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2386C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2386Cu)) return;
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
label_80C23870:
    ctx->pc = 0x80C23870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23870: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C23870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C23870u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C23874:
    ctx->pc = 0x80C23874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C23874: stfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C23874u)) return;
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
label_80C23878:
    ctx->pc = 0x80C23878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23878: psq_st   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C23878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C23878u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2387C:
    ctx->pc = 0x80C2387Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2387Cu)) return;
    // 80C2387C: cmpwi   r3, 2
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

label_80C23880:
    ctx->pc = 0x80C23880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23880u)) return;
    // 80C23880: bc    12, 2, 0x80C24290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24290;
        }
    }

label_80C23884:
    ctx->pc = 0x80C23884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23884: bc    4, 0, 0x80C23898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C23898;
        }
    }

label_80C23888:
    ctx->pc = 0x80C23888u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23888u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23888: cmpwi   r3, 0
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

label_80C2388C:
    ctx->pc = 0x80C2388Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2388Cu)) return;
    // 80C2388C: bc    12, 2, 0x80C242E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C242E0;
        }
    }

label_80C23890:
    ctx->pc = 0x80C23890u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23890u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23890: bc    4, 0, 0x80C238A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C238A0;
        }
    }

label_80C23894:
    ctx->pc = 0x80C23894u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23894u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23894: b       0x80C242E0
    {
            goto label_80C242E0;
    }

label_80C23898:
    ctx->pc = 0x80C23898u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23898u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23898: cmpwi   r3, 4
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

label_80C2389C:
    ctx->pc = 0x80C2389Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2389Cu)) return;
    // 80C2389C: b       0x80C242E0
    {
            goto label_80C242E0;
    }

label_80C238A0:
    ctx->pc = 0x80C238A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C238A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C238A4:
    ctx->pc = 0x80C238A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238A4u)) return;
    // 80C238A4: bl      0x80C248EC
    {
            ctx->lr = 0x80C238A8u;
            goto label_80C248EC;
    }

label_80C238A8:
    ctx->pc = 0x80C238A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C238A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C238AC:
    ctx->pc = 0x80C238ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238ACu)) return;
    // 80C238AC: bl      0x8045EC10
    {
            ctx->lr = 0x80C238B0u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C238B0:
    ctx->pc = 0x80C238B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C238B0: bl      0x8045DE7C
    {
            ctx->lr = 0x80C238B4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80C238B4:
    ctx->pc = 0x80C238B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C238B4: bl      0x80460A60
    {
            ctx->lr = 0x80C238B8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80C238B8:
    ctx->pc = 0x80C238B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C238B8: bl      0x80460A24
    {
            ctx->lr = 0x80C238BCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80C238BC:
    ctx->pc = 0x80C238BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C238BC: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80C238C0:
    ctx->pc = 0x80C238C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238C0u)) return;
    // 80C238C0: bl      0x80406090
    {
            ctx->lr = 0x80C238C4u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80C238C4:
    ctx->pc = 0x80C238C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C238C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C238C8:
    ctx->pc = 0x80C238C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238C8u)) return;
    // 80C238C8: bl      0x8045F220
    {
            ctx->lr = 0x80C238CCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C238CC:
    ctx->pc = 0x80C238CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80C238CC: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C238D0:
    ctx->pc = 0x80C238D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238D0u)) return;
    // 80C238D0: addi    r4, r4, -11664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11664);

label_80C238D4:
    ctx->pc = 0x80C238D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C238D4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C238D4u)) return;
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
label_80C238D8:
    ctx->pc = 0x80C238D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238D8u)) return;
    // 80C238D8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C238D8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C238DC:
    ctx->pc = 0x80C238DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238DCu)) return;
    // 80C238DC: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C238E0:
    ctx->pc = 0x80C238E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238E0u)) return;
    // 80C238E0: addi    r4, r4, -11660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11660);

label_80C238E4:
    ctx->pc = 0x80C238E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C238E4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C238E4u)) return;
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
label_80C238E8:
    ctx->pc = 0x80C238E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238E8u)) return;
    // 80C238E8: bl      0x8045EF2C
    {
            ctx->lr = 0x80C238ECu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80C238EC:
    ctx->pc = 0x80C238ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C238EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C238F0:
    ctx->pc = 0x80C238F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238F0u)) return;
    // 80C238F0: bl      0x8045F220
    {
            ctx->lr = 0x80C238F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C238F4:
    ctx->pc = 0x80C238F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C238F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C238F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C238F8:
    ctx->pc = 0x80C238F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238F8u)) return;
    // 80C238F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C238FC:
    ctx->pc = 0x80C238FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C238FCu)) return;
    // 80C238FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C23900:
    ctx->pc = 0x80C23900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23900u)) return;
    // 80C23900: bl      0x8045EEA8
    {
            ctx->lr = 0x80C23904u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C23904:
    ctx->pc = 0x80C23904u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 17u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23904u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 17u : 1u;
    // 80C23904: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23908:
    ctx->pc = 0x80C23908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23908u)) return;
    // 80C23908: lis     r4, -32625
    ctx->gpr[4] = ((u32)(s32)(-32625) << 16);

label_80C2390C:
    ctx->pc = 0x80C2390Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2390Cu)) return;
    // 80C2390C: addi    r4, r4, 18200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18200);

label_80C23910:
    ctx->pc = 0x80C23910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23910u)) return;
    // 80C23910: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23914:
    ctx->pc = 0x80C23914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23914u)) return;
    // 80C23914: addi    r5, r5, -11656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11656);

label_80C23918:
    ctx->pc = 0x80C23918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C23918: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23918u)) return;
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
label_80C2391C:
    ctx->pc = 0x80C2391Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2391Cu)) return;
    // 80C2391C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23920:
    ctx->pc = 0x80C23920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23920u)) return;
    // 80C23920: addi    r5, r5, -11664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11664);

label_80C23924:
    ctx->pc = 0x80C23924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C23924: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23924u)) return;
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
label_80C23928:
    ctx->pc = 0x80C23928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23928u)) return;
    // 80C23928: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C2392C:
    ctx->pc = 0x80C2392Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2392Cu)) return;
    // 80C2392C: addi    r5, r5, -11652
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11652);

label_80C23930:
    ctx->pc = 0x80C23930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C23930: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23930u)) return;
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
label_80C23934:
    ctx->pc = 0x80C23934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23934u)) return;
    // 80C23934: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C23938:
    ctx->pc = 0x80C23938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23938u)) return;
    // 80C23938: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C2393C:
    ctx->pc = 0x80C2393Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2393Cu)) return;
    // 80C2393C: addi    r6, r6, -6144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6144);

label_80C23940:
    ctx->pc = 0x80C23940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23940u)) return;
    // 80C23940: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23944:
    ctx->pc = 0x80C23944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23944u)) return;
    // 80C23944: bl      0x8045ED84
    {
            ctx->lr = 0x80C23948u;
            ctx->pc = 0x8045ED84u;
            return;
    }

label_80C23948:
    ctx->pc = 0x80C23948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23948: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C2394C:
    ctx->pc = 0x80C2394Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2394Cu)) return;
    // 80C2394C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23950u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23950:
    ctx->pc = 0x80C23950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23950: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23954:
    ctx->pc = 0x80C23954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23954u)) return;
    // 80C23954: bl      0x8045F220
    {
            ctx->lr = 0x80C23958u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23958:
    ctx->pc = 0x80C23958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23958: lwz     r3, 32(r3)
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
label_80C2395C:
    ctx->pc = 0x80C2395Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2395Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2395C: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2395Cu)) return;
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
label_80C23960:
    ctx->pc = 0x80C23960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23960u)) return;
    // 80C23960: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23964:
    ctx->pc = 0x80C23964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23964u)) return;
    // 80C23964: addi    r3, r3, -11648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11648);

label_80C23968:
    ctx->pc = 0x80C23968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C23968: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C23968u)) return;
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
label_80C2396C:
    ctx->pc = 0x80C2396Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2396Cu)) return;
    // 80C2396C: fadds   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2396Cu)) return;
    ppc_fadds(ctx, 30, 0, 1);

label_80C23970:
    ctx->pc = 0x80C23970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23970u)) return;
    // 80C23970: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23974:
    ctx->pc = 0x80C23974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23974u)) return;
    // 80C23974: bl      0x8045F220
    {
            ctx->lr = 0x80C23978u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23978:
    ctx->pc = 0x80C23978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23978: lwz     r3, 32(r3)
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
label_80C2397C:
    ctx->pc = 0x80C2397Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2397Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2397C: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2397Cu)) return;
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
label_80C23980:
    ctx->pc = 0x80C23980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23980u)) return;
    // 80C23980: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23984:
    ctx->pc = 0x80C23984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23984u)) return;
    // 80C23984: addi    r3, r3, -11644
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11644);

label_80C23988:
    ctx->pc = 0x80C23988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C23988: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C23988u)) return;
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
label_80C2398C:
    ctx->pc = 0x80C2398Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2398Cu)) return;
    // 80C2398C: fadds   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80C2398Cu)) return;
    ppc_fadds(ctx, 31, 0, 1);

label_80C23990:
    ctx->pc = 0x80C23990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23990u)) return;
    // 80C23990: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23994:
    ctx->pc = 0x80C23994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23994u)) return;
    // 80C23994: bl      0x8045F220
    {
            ctx->lr = 0x80C23998u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23998:
    ctx->pc = 0x80C23998u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23998u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C23998: lwz     r3, 32(r3)
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
label_80C2399C:
    ctx->pc = 0x80C2399Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2399Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2399C: lfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2399Cu)) return;
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
label_80C239A0:
    ctx->pc = 0x80C239A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239A0u)) return;
    // 80C239A0: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C239A4:
    ctx->pc = 0x80C239A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239A4u)) return;
    // 80C239A4: addi    r3, r3, -11648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11648);

label_80C239A8:
    ctx->pc = 0x80C239A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C239A8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C239A8u)) return;
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
label_80C239AC:
    ctx->pc = 0x80C239ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239ACu)) return;
    // 80C239AC: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C239ACu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_80C239B0:
    ctx->pc = 0x80C239B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239B0u)) return;
    // 80C239B0: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C239B4:
    ctx->pc = 0x80C239B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239B4u)) return;
    // 80C239B4: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C239B8:
    ctx->pc = 0x80C239B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239B8u)) return;
    // 80C239B8: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x80C239B8u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_80C239BC:
    ctx->pc = 0x80C239BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239BCu)) return;
    // 80C239BC: fmr    f3, f30
    if (!ppc_fp_available_inline(ctx, 0x80C239BCu)) return;
    ctx->fpr[3] = ctx->fpr[30];

label_80C239C0:
    ctx->pc = 0x80C239C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239C0u)) return;
    // 80C239C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C239C4:
    ctx->pc = 0x80C239C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239C4u)) return;
    // 80C239C4: li      r5, 14336
    ctx->gpr[5] = (u32)(s32)(14336);

label_80C239C8:
    ctx->pc = 0x80C239C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239C8u)) return;
    // 80C239C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C239CC:
    ctx->pc = 0x80C239CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239CCu)) return;
    // 80C239CC: bl      0x8045F170
    {
            ctx->lr = 0x80C239D0u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80C239D0:
    ctx->pc = 0x80C239D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C239D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C239D0: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C239D4:
    ctx->pc = 0x80C239D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239D4u)) return;
    // 80C239D4: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C239D8:
    ctx->pc = 0x80C239D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C239D8: lwz     r3, 0(r3)
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
label_80C239DC:
    ctx->pc = 0x80C239DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239DCu)) return;
    // 80C239DC: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C239E0:
    ctx->pc = 0x80C239E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239E0u)) return;
    // 80C239E0: addi    r4, r4, -3576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3576);

label_80C239E4:
    ctx->pc = 0x80C239E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239E4u)) return;
    // 80C239E4: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C239E8:
    ctx->pc = 0x80C239E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239E8u)) return;
    // 80C239E8: addi    r5, r5, -9172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9172);

label_80C239EC:
    ctx->pc = 0x80C239ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239ECu)) return;
    // 80C239EC: lis     r6, -27458
    ctx->gpr[6] = ((u32)(s32)(-27458) << 16);

label_80C239F0:
    ctx->pc = 0x80C239F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239F0u)) return;
    // 80C239F0: addi    r6, r6, -11640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11640);

label_80C239F4:
    ctx->pc = 0x80C239F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C239F4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C239F4u)) return;
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
label_80C239F8:
    ctx->pc = 0x80C239F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239F8u)) return;
    // 80C239F8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C239FC:
    ctx->pc = 0x80C239FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C239FCu)) return;
    // 80C239FC: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80C23A00:
    ctx->pc = 0x80C23A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A00u)) return;
    // 80C23A00: bl      0x8045EBE4
    {
            ctx->lr = 0x80C23A04u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C23A04:
    ctx->pc = 0x80C23A04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C23A04: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C23A08:
    ctx->pc = 0x80C23A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A08u)) return;
    // 80C23A08: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C23A0C:
    ctx->pc = 0x80C23A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23A0C: lwz     r3, 0(r3)
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
label_80C23A10:
    ctx->pc = 0x80C23A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A10u)) return;
    // 80C23A10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23A14:
    ctx->pc = 0x80C23A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A14u)) return;
    // 80C23A14: bl      0x8045EE90
    {
            ctx->lr = 0x80C23A18u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80C23A18:
    ctx->pc = 0x80C23A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C23A18: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C23A1C:
    ctx->pc = 0x80C23A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A1Cu)) return;
    // 80C23A1C: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C23A20:
    ctx->pc = 0x80C23A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23A20: lwz     r3, 0(r3)
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
label_80C23A24:
    ctx->pc = 0x80C23A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A24u)) return;
    // 80C23A24: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23A28:
    ctx->pc = 0x80C23A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A28u)) return;
    // 80C23A28: addi    r4, r4, -11640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11640);

label_80C23A2C:
    ctx->pc = 0x80C23A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23A2C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C23A2Cu)) return;
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
label_80C23A30:
    ctx->pc = 0x80C23A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A30u)) return;
    // 80C23A30: bl      0x8045EE44
    {
            ctx->lr = 0x80C23A34u;
            ctx->pc = 0x8045EE44u;
            return;
    }

label_80C23A34:
    ctx->pc = 0x80C23A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23A34: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23A38:
    ctx->pc = 0x80C23A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A38u)) return;
    // 80C23A38: bl      0x8045F220
    {
            ctx->lr = 0x80C23A3Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23A3C:
    ctx->pc = 0x80C23A3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C23A3C: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C23A40:
    ctx->pc = 0x80C23A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A40u)) return;
    // 80C23A40: addi    r4, r4, 18368
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18368);

label_80C23A44:
    ctx->pc = 0x80C23A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A44u)) return;
    // 80C23A44: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80C23A48:
    ctx->pc = 0x80C23A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A48u)) return;
    // 80C23A48: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80C23A4C:
    ctx->pc = 0x80C23A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A4Cu)) return;
    // 80C23A4C: lis     r6, -27458
    ctx->gpr[6] = ((u32)(s32)(-27458) << 16);

label_80C23A50:
    ctx->pc = 0x80C23A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A50u)) return;
    // 80C23A50: addi    r6, r6, -11640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11640);

label_80C23A54:
    ctx->pc = 0x80C23A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C23A54: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C23A54u)) return;
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
label_80C23A58:
    ctx->pc = 0x80C23A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A58u)) return;
    // 80C23A58: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C23A5C:
    ctx->pc = 0x80C23A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A5Cu)) return;
    // 80C23A5C: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80C23A60:
    ctx->pc = 0x80C23A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A60u)) return;
    // 80C23A60: bl      0x8045EBE4
    {
            ctx->lr = 0x80C23A64u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C23A64:
    ctx->pc = 0x80C23A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23A64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23A68:
    ctx->pc = 0x80C23A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A68u)) return;
    // 80C23A68: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23A6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23A6C:
    ctx->pc = 0x80C23A6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23A6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23A70:
    ctx->pc = 0x80C23A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A70u)) return;
    // 80C23A70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23A74:
    ctx->pc = 0x80C23A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A74u)) return;
    // 80C23A74: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23A78:
    ctx->pc = 0x80C23A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A78u)) return;
    // 80C23A78: addi    r5, r5, -11664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11664);

label_80C23A7C:
    ctx->pc = 0x80C23A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23A7C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23A7Cu)) return;
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
label_80C23A80:
    ctx->pc = 0x80C23A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A80u)) return;
    // 80C23A80: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23A84:
    ctx->pc = 0x80C23A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A84u)) return;
    // 80C23A84: addi    r5, r5, -11636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11636);

label_80C23A88:
    ctx->pc = 0x80C23A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23A88: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23A88u)) return;
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
label_80C23A8C:
    ctx->pc = 0x80C23A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A8Cu)) return;
    // 80C23A8C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23A90:
    ctx->pc = 0x80C23A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A90u)) return;
    // 80C23A90: addi    r5, r5, -11632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11632);

label_80C23A94:
    ctx->pc = 0x80C23A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23A94: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23A94u)) return;
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
label_80C23A98:
    ctx->pc = 0x80C23A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23A98u)) return;
    // 80C23A98: bl      0x8045C750
    {
            ctx->lr = 0x80C23A9Cu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23A9C:
    ctx->pc = 0x80C23A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C23A9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23AA0:
    ctx->pc = 0x80C23AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AA0u)) return;
    // 80C23AA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23AA4:
    ctx->pc = 0x80C23AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AA4u)) return;
    // 80C23AA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C23AA8:
    ctx->pc = 0x80C23AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AA8u)) return;
    // 80C23AA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C23AAC:
    ctx->pc = 0x80C23AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AACu)) return;
    // 80C23AAC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23AB0:
    ctx->pc = 0x80C23AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AB0u)) return;
    // 80C23AB0: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23AB4u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23AB4:
    ctx->pc = 0x80C23AB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23AB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C23AB4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23AB8:
    ctx->pc = 0x80C23AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AB8u)) return;
    // 80C23AB8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C23ABC:
    ctx->pc = 0x80C23ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23ABCu)) return;
    // 80C23ABC: li      r5, 910
    ctx->gpr[5] = (u32)(s32)(910);

label_80C23AC0:
    ctx->pc = 0x80C23AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AC0u)) return;
    // 80C23AC0: bl      0x8045C0F8
    {
            ctx->lr = 0x80C23AC4u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C23AC4:
    ctx->pc = 0x80C23AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23AC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23AC8:
    ctx->pc = 0x80C23AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AC8u)) return;
    // 80C23AC8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23ACCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23ACC:
    ctx->pc = 0x80C23ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C23ACC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C23AD0:
    ctx->pc = 0x80C23AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AD0u)) return;
    // 80C23AD0: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80C23AD4:
    ctx->pc = 0x80C23AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AD4u)) return;
    // 80C23AD4: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80C23AD8:
    ctx->pc = 0x80C23AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AD8u)) return;
    // 80C23AD8: bl      0x8045C0F8
    {
            ctx->lr = 0x80C23ADCu;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C23ADC:
    ctx->pc = 0x80C23ADCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23ADCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23ADC: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_80C23AE0:
    ctx->pc = 0x80C23AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AE0u)) return;
    // 80C23AE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23AE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23AE4:
    ctx->pc = 0x80C23AE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23AE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23AE4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23AE8:
    ctx->pc = 0x80C23AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AE8u)) return;
    // 80C23AE8: bl      0x8045F220
    {
            ctx->lr = 0x80C23AECu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23AEC:
    ctx->pc = 0x80C23AECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23AECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C23AEC: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23AF0:
    ctx->pc = 0x80C23AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AF0u)) return;
    // 80C23AF0: addi    r4, r4, -9636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9636);

label_80C23AF4:
    ctx->pc = 0x80C23AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AF4u)) return;
    // 80C23AF4: bl      0x8045C060
    {
            ctx->lr = 0x80C23AF8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C23AF8:
    ctx->pc = 0x80C23AF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23AF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23AF8: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_80C23AFC:
    ctx->pc = 0x80C23AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23AFCu)) return;
    // 80C23AFC: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23B00u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23B00:
    ctx->pc = 0x80C23B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23B00: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23B04:
    ctx->pc = 0x80C23B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B04u)) return;
    // 80C23B04: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C23B08:
    ctx->pc = 0x80C23B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23B08: lwz     r0, 0(r3)
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
label_80C23B0C:
    ctx->pc = 0x80C23B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B0Cu)) return;
    // 80C23B0C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C23B10:
    ctx->pc = 0x80C23B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B10u)) return;
    // 80C23B10: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23B14:
    ctx->pc = 0x80C23B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B14u)) return;
    // 80C23B14: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C23B18:
    ctx->pc = 0x80C23B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23B18: lwzx    r3, r3, r0
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
label_80C23B1C:
    ctx->pc = 0x80C23B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23B1C: lwz     r3, 0(r3)
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
label_80C23B20:
    ctx->pc = 0x80C23B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B20u)) return;
    // 80C23B20: bl      0x8045F6FC
    {
            ctx->lr = 0x80C23B24u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C23B24:
    ctx->pc = 0x80C23B24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23B24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23B28:
    ctx->pc = 0x80C23B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B28u)) return;
    // 80C23B28: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23B2Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23B2C:
    ctx->pc = 0x80C23B2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23B2C: bl      0x8045BFF4
    {
            ctx->lr = 0x80C23B30u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C23B30:
    ctx->pc = 0x80C23B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23B30: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23B34:
    ctx->pc = 0x80C23B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B34u)) return;
    // 80C23B34: bl      0x8045F220
    {
            ctx->lr = 0x80C23B38u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23B38:
    ctx->pc = 0x80C23B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23B38: bl      0x8045C034
    {
            ctx->lr = 0x80C23B3Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C23B3C:
    ctx->pc = 0x80C23B3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23B3C: bl      0x8045F32C
    {
            ctx->lr = 0x80C23B40u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C23B40:
    ctx->pc = 0x80C23B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23B40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23B44:
    ctx->pc = 0x80C23B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B44u)) return;
    // 80C23B44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23B48:
    ctx->pc = 0x80C23B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B48u)) return;
    // 80C23B48: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23B4C:
    ctx->pc = 0x80C23B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B4Cu)) return;
    // 80C23B4C: addi    r5, r5, -11628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11628);

label_80C23B50:
    ctx->pc = 0x80C23B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23B50: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23B50u)) return;
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
label_80C23B54:
    ctx->pc = 0x80C23B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B54u)) return;
    // 80C23B54: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23B58:
    ctx->pc = 0x80C23B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B58u)) return;
    // 80C23B58: addi    r5, r5, -11624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11624);

label_80C23B5C:
    ctx->pc = 0x80C23B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23B5C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23B5Cu)) return;
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
label_80C23B60:
    ctx->pc = 0x80C23B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B60u)) return;
    // 80C23B60: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23B64:
    ctx->pc = 0x80C23B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B64u)) return;
    // 80C23B64: addi    r5, r5, -11620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11620);

label_80C23B68:
    ctx->pc = 0x80C23B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23B68: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23B68u)) return;
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
label_80C23B6C:
    ctx->pc = 0x80C23B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B6Cu)) return;
    // 80C23B6C: bl      0x8045C750
    {
            ctx->lr = 0x80C23B70u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23B70:
    ctx->pc = 0x80C23B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C23B70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23B74:
    ctx->pc = 0x80C23B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B74u)) return;
    // 80C23B74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23B78:
    ctx->pc = 0x80C23B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B78u)) return;
    // 80C23B78: li      r5, 3328
    ctx->gpr[5] = (u32)(s32)(3328);

label_80C23B7C:
    ctx->pc = 0x80C23B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B7Cu)) return;
    // 80C23B7C: li      r6, 15360
    ctx->gpr[6] = (u32)(s32)(15360);

label_80C23B80:
    ctx->pc = 0x80C23B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B80u)) return;
    // 80C23B80: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23B84:
    ctx->pc = 0x80C23B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B84u)) return;
    // 80C23B84: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23B88u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23B88:
    ctx->pc = 0x80C23B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C23B88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C23B8C:
    ctx->pc = 0x80C23B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B8Cu)) return;
    // 80C23B8C: li      r4, 160
    ctx->gpr[4] = (u32)(s32)(160);

label_80C23B90:
    ctx->pc = 0x80C23B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B90u)) return;
    // 80C23B90: li      r5, 3328
    ctx->gpr[5] = (u32)(s32)(3328);

label_80C23B94:
    ctx->pc = 0x80C23B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B94u)) return;
    // 80C23B94: li      r6, 12288
    ctx->gpr[6] = (u32)(s32)(12288);

label_80C23B98:
    ctx->pc = 0x80C23B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B98u)) return;
    // 80C23B98: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23B9C:
    ctx->pc = 0x80C23B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23B9Cu)) return;
    // 80C23B9C: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23BA0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23BA0:
    ctx->pc = 0x80C23BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23BA0: li      r3, 1025
    ctx->gpr[3] = (u32)(s32)(1025);

label_80C23BA4:
    ctx->pc = 0x80C23BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BA4u)) return;
    // 80C23BA4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23BA8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23BA8:
    ctx->pc = 0x80C23BA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23BA8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23BAC:
    ctx->pc = 0x80C23BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BACu)) return;
    // 80C23BAC: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C23BB0:
    ctx->pc = 0x80C23BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23BB0: lwz     r0, 0(r3)
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
label_80C23BB4:
    ctx->pc = 0x80C23BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BB4u)) return;
    // 80C23BB4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C23BB8:
    ctx->pc = 0x80C23BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BB8u)) return;
    // 80C23BB8: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23BBC:
    ctx->pc = 0x80C23BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BBCu)) return;
    // 80C23BBC: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C23BC0:
    ctx->pc = 0x80C23BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23BC0: lwzx    r3, r3, r0
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
label_80C23BC4:
    ctx->pc = 0x80C23BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23BC4: lwz     r3, 4(r3)
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
label_80C23BC8:
    ctx->pc = 0x80C23BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BC8u)) return;
    // 80C23BC8: bl      0x8045F6FC
    {
            ctx->lr = 0x80C23BCCu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C23BCC:
    ctx->pc = 0x80C23BCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23BCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23BD0:
    ctx->pc = 0x80C23BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BD0u)) return;
    // 80C23BD0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23BD4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23BD4:
    ctx->pc = 0x80C23BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23BD4: bl      0x8045BFF4
    {
            ctx->lr = 0x80C23BD8u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C23BD8:
    ctx->pc = 0x80C23BD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23BD8: bl      0x8045F32C
    {
            ctx->lr = 0x80C23BDCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C23BDC:
    ctx->pc = 0x80C23BDCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BDCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23BDC: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C23BE0:
    ctx->pc = 0x80C23BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BE0u)) return;
    // 80C23BE0: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23BE4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23BE4:
    ctx->pc = 0x80C23BE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23BE4: li      r3, 1026
    ctx->gpr[3] = (u32)(s32)(1026);

label_80C23BE8:
    ctx->pc = 0x80C23BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BE8u)) return;
    // 80C23BE8: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23BECu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23BEC:
    ctx->pc = 0x80C23BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23BEC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23BF0:
    ctx->pc = 0x80C23BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BF0u)) return;
    // 80C23BF0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C23BF4:
    ctx->pc = 0x80C23BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23BF4: lwz     r0, 0(r3)
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
label_80C23BF8:
    ctx->pc = 0x80C23BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BF8u)) return;
    // 80C23BF8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C23BFC:
    ctx->pc = 0x80C23BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23BFCu)) return;
    // 80C23BFC: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23C00:
    ctx->pc = 0x80C23C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C00u)) return;
    // 80C23C00: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C23C04:
    ctx->pc = 0x80C23C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23C04: lwzx    r3, r3, r0
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
label_80C23C08:
    ctx->pc = 0x80C23C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23C08: lwz     r3, 8(r3)
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
label_80C23C0C:
    ctx->pc = 0x80C23C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C0Cu)) return;
    // 80C23C0C: bl      0x8045F6FC
    {
            ctx->lr = 0x80C23C10u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C23C10:
    ctx->pc = 0x80C23C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23C10: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80C23C14:
    ctx->pc = 0x80C23C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C14u)) return;
    // 80C23C14: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23C18u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23C18:
    ctx->pc = 0x80C23C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23C18: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23C1C:
    ctx->pc = 0x80C23C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C1Cu)) return;
    // 80C23C1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23C20:
    ctx->pc = 0x80C23C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C20u)) return;
    // 80C23C20: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23C24:
    ctx->pc = 0x80C23C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C24u)) return;
    // 80C23C24: addi    r5, r5, -11616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11616);

label_80C23C28:
    ctx->pc = 0x80C23C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23C28: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23C28u)) return;
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
label_80C23C2C:
    ctx->pc = 0x80C23C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C2Cu)) return;
    // 80C23C2C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23C30:
    ctx->pc = 0x80C23C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C30u)) return;
    // 80C23C30: addi    r5, r5, -11612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11612);

label_80C23C34:
    ctx->pc = 0x80C23C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23C34: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23C34u)) return;
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
label_80C23C38:
    ctx->pc = 0x80C23C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C38u)) return;
    // 80C23C38: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23C3C:
    ctx->pc = 0x80C23C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C3Cu)) return;
    // 80C23C3C: addi    r5, r5, -11608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11608);

label_80C23C40:
    ctx->pc = 0x80C23C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23C40: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23C40u)) return;
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
label_80C23C44:
    ctx->pc = 0x80C23C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C44u)) return;
    // 80C23C44: bl      0x8045C750
    {
            ctx->lr = 0x80C23C48u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23C48:
    ctx->pc = 0x80C23C48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23C48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C23C48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23C4C:
    ctx->pc = 0x80C23C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C4Cu)) return;
    // 80C23C4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23C50:
    ctx->pc = 0x80C23C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C50u)) return;
    // 80C23C50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C23C54:
    ctx->pc = 0x80C23C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C54u)) return;
    // 80C23C54: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C23C58:
    ctx->pc = 0x80C23C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C58u)) return;
    // 80C23C58: addi    r6, r6, -6912
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6912);

label_80C23C5C:
    ctx->pc = 0x80C23C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C5Cu)) return;
    // 80C23C5C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23C60:
    ctx->pc = 0x80C23C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C60u)) return;
    // 80C23C60: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23C64u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23C64:
    ctx->pc = 0x80C23C64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23C64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23C64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23C68:
    ctx->pc = 0x80C23C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C68u)) return;
    // 80C23C68: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23C6Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23C6C:
    ctx->pc = 0x80C23C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23C6C: bl      0x8045BFF4
    {
            ctx->lr = 0x80C23C70u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C23C70:
    ctx->pc = 0x80C23C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C23C74:
    ctx->pc = 0x80C23C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C74u)) return;
    // 80C23C74: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C23C78:
    ctx->pc = 0x80C23C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C78u)) return;
    // 80C23C78: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23C7C:
    ctx->pc = 0x80C23C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C7Cu)) return;
    // 80C23C7C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C23C80:
    ctx->pc = 0x80C23C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23C80: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23C80u)) return;
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
label_80C23C84:
    ctx->pc = 0x80C23C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C84u)) return;
    // 80C23C84: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23C88:
    ctx->pc = 0x80C23C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C88u)) return;
    // 80C23C88: addi    r5, r5, -11600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11600);

label_80C23C8C:
    ctx->pc = 0x80C23C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23C8C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23C8Cu)) return;
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
label_80C23C90:
    ctx->pc = 0x80C23C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C90u)) return;
    // 80C23C90: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23C94:
    ctx->pc = 0x80C23C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C94u)) return;
    // 80C23C94: addi    r5, r5, -11596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11596);

label_80C23C98:
    ctx->pc = 0x80C23C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23C98: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23C98u)) return;
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
label_80C23C9C:
    ctx->pc = 0x80C23C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23C9Cu)) return;
    // 80C23C9C: bl      0x8045C750
    {
            ctx->lr = 0x80C23CA0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23CA0:
    ctx->pc = 0x80C23CA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23CA0: li      r3, 1027
    ctx->gpr[3] = (u32)(s32)(1027);

label_80C23CA4:
    ctx->pc = 0x80C23CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CA4u)) return;
    // 80C23CA4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23CA8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23CA8:
    ctx->pc = 0x80C23CA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23CA8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23CAC:
    ctx->pc = 0x80C23CACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CACu)) return;
    // 80C23CAC: bl      0x8045F220
    {
            ctx->lr = 0x80C23CB0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23CB0:
    ctx->pc = 0x80C23CB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C23CB0: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23CB4:
    ctx->pc = 0x80C23CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CB4u)) return;
    // 80C23CB4: addi    r4, r4, -9632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9632);

label_80C23CB8:
    ctx->pc = 0x80C23CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CB8u)) return;
    // 80C23CB8: bl      0x8045C060
    {
            ctx->lr = 0x80C23CBCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C23CBC:
    ctx->pc = 0x80C23CBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23CBC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23CC0:
    ctx->pc = 0x80C23CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CC0u)) return;
    // 80C23CC0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C23CC4:
    ctx->pc = 0x80C23CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23CC4: lwz     r0, 0(r3)
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
label_80C23CC8:
    ctx->pc = 0x80C23CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CC8u)) return;
    // 80C23CC8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C23CCC:
    ctx->pc = 0x80C23CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CCCu)) return;
    // 80C23CCC: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23CD0:
    ctx->pc = 0x80C23CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CD0u)) return;
    // 80C23CD0: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C23CD4:
    ctx->pc = 0x80C23CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23CD4: lwzx    r3, r3, r0
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
label_80C23CD8:
    ctx->pc = 0x80C23CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23CD8: lwz     r3, 12(r3)
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
label_80C23CDC:
    ctx->pc = 0x80C23CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CDCu)) return;
    // 80C23CDC: bl      0x8045F6FC
    {
            ctx->lr = 0x80C23CE0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C23CE0:
    ctx->pc = 0x80C23CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23CE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23CE4:
    ctx->pc = 0x80C23CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CE4u)) return;
    // 80C23CE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23CE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23CE8:
    ctx->pc = 0x80C23CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23CE8: bl      0x8045BFF4
    {
            ctx->lr = 0x80C23CECu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C23CEC:
    ctx->pc = 0x80C23CECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23CEC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23CF0:
    ctx->pc = 0x80C23CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23CF0u)) return;
    // 80C23CF0: bl      0x8045F220
    {
            ctx->lr = 0x80C23CF4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23CF4:
    ctx->pc = 0x80C23CF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23CF4: bl      0x8045C034
    {
            ctx->lr = 0x80C23CF8u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C23CF8:
    ctx->pc = 0x80C23CF8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CF8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23CF8: bl      0x8045F32C
    {
            ctx->lr = 0x80C23CFCu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C23CFC:
    ctx->pc = 0x80C23CFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23CFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23CFC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23D00:
    ctx->pc = 0x80C23D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D00u)) return;
    // 80C23D00: bl      0x8045F220
    {
            ctx->lr = 0x80C23D04u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23D04:
    ctx->pc = 0x80C23D04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23D04: bl      0x8045EB8C
    {
            ctx->lr = 0x80C23D08u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80C23D08:
    ctx->pc = 0x80C23D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23D08: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23D0C:
    ctx->pc = 0x80C23D0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D0Cu)) return;
    // 80C23D0C: bl      0x8045F220
    {
            ctx->lr = 0x80C23D10u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23D10:
    ctx->pc = 0x80C23D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C23D10: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C23D14:
    ctx->pc = 0x80C23D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D14u)) return;
    // 80C23D14: addi    r4, r4, 2220
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2220);

label_80C23D18:
    ctx->pc = 0x80C23D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D18u)) return;
    // 80C23D18: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80C23D1C:
    ctx->pc = 0x80C23D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D1Cu)) return;
    // 80C23D1C: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80C23D20:
    ctx->pc = 0x80C23D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D20u)) return;
    // 80C23D20: lis     r6, -27458
    ctx->gpr[6] = ((u32)(s32)(-27458) << 16);

label_80C23D24:
    ctx->pc = 0x80C23D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D24u)) return;
    // 80C23D24: addi    r6, r6, -11592
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11592);

label_80C23D28:
    ctx->pc = 0x80C23D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C23D28: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C23D28u)) return;
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
label_80C23D2C:
    ctx->pc = 0x80C23D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D2Cu)) return;
    // 80C23D2C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C23D30:
    ctx->pc = 0x80C23D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D30u)) return;
    // 80C23D30: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23D34:
    ctx->pc = 0x80C23D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D34u)) return;
    // 80C23D34: bl      0x8045EBE4
    {
            ctx->lr = 0x80C23D38u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C23D38:
    ctx->pc = 0x80C23D38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23D38: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23D3C:
    ctx->pc = 0x80C23D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D3Cu)) return;
    // 80C23D3C: bl      0x8045F220
    {
            ctx->lr = 0x80C23D40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23D40:
    ctx->pc = 0x80C23D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C23D40: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C23D44:
    ctx->pc = 0x80C23D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D44u)) return;
    // 80C23D44: addi    r4, r4, 24356
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24356);

label_80C23D48:
    ctx->pc = 0x80C23D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D48u)) return;
    // 80C23D48: lis     r5, -27864
    ctx->gpr[5] = ((u32)(s32)(-27864) << 16);

label_80C23D4C:
    ctx->pc = 0x80C23D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D4Cu)) return;
    // 80C23D4C: addi    r5, r5, -24080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24080);

label_80C23D50:
    ctx->pc = 0x80C23D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D50u)) return;
    // 80C23D50: lis     r6, -27458
    ctx->gpr[6] = ((u32)(s32)(-27458) << 16);

label_80C23D54:
    ctx->pc = 0x80C23D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D54u)) return;
    // 80C23D54: addi    r6, r6, -11640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11640);

label_80C23D58:
    ctx->pc = 0x80C23D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C23D58: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C23D58u)) return;
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
label_80C23D5C:
    ctx->pc = 0x80C23D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D5Cu)) return;
    // 80C23D5C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C23D60:
    ctx->pc = 0x80C23D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D60u)) return;
    // 80C23D60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23D64:
    ctx->pc = 0x80C23D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D64u)) return;
    // 80C23D64: bl      0x8045EBE4
    {
            ctx->lr = 0x80C23D68u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C23D68:
    ctx->pc = 0x80C23D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23D68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23D6C:
    ctx->pc = 0x80C23D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D6Cu)) return;
    // 80C23D6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23D70:
    ctx->pc = 0x80C23D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D70u)) return;
    // 80C23D70: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23D74:
    ctx->pc = 0x80C23D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D74u)) return;
    // 80C23D74: addi    r5, r5, -11588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11588);

label_80C23D78:
    ctx->pc = 0x80C23D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23D78: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23D78u)) return;
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
label_80C23D7C:
    ctx->pc = 0x80C23D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D7Cu)) return;
    // 80C23D7C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23D80:
    ctx->pc = 0x80C23D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D80u)) return;
    // 80C23D80: addi    r5, r5, -11584
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11584);

label_80C23D84:
    ctx->pc = 0x80C23D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23D84: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23D84u)) return;
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
label_80C23D88:
    ctx->pc = 0x80C23D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D88u)) return;
    // 80C23D88: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23D8C:
    ctx->pc = 0x80C23D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D8Cu)) return;
    // 80C23D8C: addi    r5, r5, -11580
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11580);

label_80C23D90:
    ctx->pc = 0x80C23D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23D90: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23D90u)) return;
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
label_80C23D94:
    ctx->pc = 0x80C23D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D94u)) return;
    // 80C23D94: bl      0x8045C750
    {
            ctx->lr = 0x80C23D98u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23D98:
    ctx->pc = 0x80C23D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C23D98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23D9C:
    ctx->pc = 0x80C23D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23D9Cu)) return;
    // 80C23D9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23DA0:
    ctx->pc = 0x80C23DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DA0u)) return;
    // 80C23DA0: li      r5, 1536
    ctx->gpr[5] = (u32)(s32)(1536);

label_80C23DA4:
    ctx->pc = 0x80C23DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DA4u)) return;
    // 80C23DA4: li      r6, 768
    ctx->gpr[6] = (u32)(s32)(768);

label_80C23DA8:
    ctx->pc = 0x80C23DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DA8u)) return;
    // 80C23DA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23DAC:
    ctx->pc = 0x80C23DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DACu)) return;
    // 80C23DAC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23DB0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23DB0:
    ctx->pc = 0x80C23DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23DB0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23DB4:
    ctx->pc = 0x80C23DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DB4u)) return;
    // 80C23DB4: bl      0x8045F220
    {
            ctx->lr = 0x80C23DB8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23DB8:
    ctx->pc = 0x80C23DB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23DB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C23DB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23DBC:
    ctx->pc = 0x80C23DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DBCu)) return;
    // 80C23DBC: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80C23DC0:
    ctx->pc = 0x80C23DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DC0u)) return;
    // 80C23DC0: addi    r5, r5, -6144
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-6144);

label_80C23DC4:
    ctx->pc = 0x80C23DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DC4u)) return;
    // 80C23DC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C23DC8:
    ctx->pc = 0x80C23DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DC8u)) return;
    // 80C23DC8: bl      0x8045EEA8
    {
            ctx->lr = 0x80C23DCCu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80C23DCC:
    ctx->pc = 0x80C23DCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23DCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23DCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C23DD0:
    ctx->pc = 0x80C23DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DD0u)) return;
    // 80C23DD0: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80C23DD4:
    ctx->pc = 0x80C23DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DD4u)) return;
    // 80C23DD4: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23DD8:
    ctx->pc = 0x80C23DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DD8u)) return;
    // 80C23DD8: addi    r5, r5, -11576
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11576);

label_80C23DDC:
    ctx->pc = 0x80C23DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23DDC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23DDCu)) return;
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
label_80C23DE0:
    ctx->pc = 0x80C23DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DE0u)) return;
    // 80C23DE0: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23DE4:
    ctx->pc = 0x80C23DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DE4u)) return;
    // 80C23DE4: addi    r5, r5, -11572
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11572);

label_80C23DE8:
    ctx->pc = 0x80C23DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23DE8: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23DE8u)) return;
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
label_80C23DEC:
    ctx->pc = 0x80C23DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DECu)) return;
    // 80C23DEC: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23DF0:
    ctx->pc = 0x80C23DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DF0u)) return;
    // 80C23DF0: addi    r5, r5, -11568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11568);

label_80C23DF4:
    ctx->pc = 0x80C23DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23DF4: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23DF4u)) return;
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
label_80C23DF8:
    ctx->pc = 0x80C23DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23DF8u)) return;
    // 80C23DF8: bl      0x8045C750
    {
            ctx->lr = 0x80C23DFCu;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23DFC:
    ctx->pc = 0x80C23DFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23DFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C23DFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C23E00:
    ctx->pc = 0x80C23E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E00u)) return;
    // 80C23E00: li      r4, 200
    ctx->gpr[4] = (u32)(s32)(200);

label_80C23E04:
    ctx->pc = 0x80C23E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E04u)) return;
    // 80C23E04: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_80C23E08:
    ctx->pc = 0x80C23E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E08u)) return;
    // 80C23E08: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C23E0C:
    ctx->pc = 0x80C23E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E0Cu)) return;
    // 80C23E0C: addi    r6, r6, -22784
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-22784);

label_80C23E10:
    ctx->pc = 0x80C23E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E10u)) return;
    // 80C23E10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23E14:
    ctx->pc = 0x80C23E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E14u)) return;
    // 80C23E14: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23E18u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23E18:
    ctx->pc = 0x80C23E18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E18: li      r3, 1028
    ctx->gpr[3] = (u32)(s32)(1028);

label_80C23E1C:
    ctx->pc = 0x80C23E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E1Cu)) return;
    // 80C23E1C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23E20u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23E20:
    ctx->pc = 0x80C23E20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E20: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23E24:
    ctx->pc = 0x80C23E24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E24u)) return;
    // 80C23E24: bl      0x8045F220
    {
            ctx->lr = 0x80C23E28u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23E28:
    ctx->pc = 0x80C23E28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C23E28: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23E2C:
    ctx->pc = 0x80C23E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E2Cu)) return;
    // 80C23E2C: addi    r4, r4, -9628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9628);

label_80C23E30:
    ctx->pc = 0x80C23E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E30u)) return;
    // 80C23E30: bl      0x8045C060
    {
            ctx->lr = 0x80C23E34u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C23E34:
    ctx->pc = 0x80C23E34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23E34: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23E38:
    ctx->pc = 0x80C23E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E38u)) return;
    // 80C23E38: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C23E3C:
    ctx->pc = 0x80C23E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23E3C: lwz     r0, 0(r3)
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
label_80C23E40:
    ctx->pc = 0x80C23E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E40u)) return;
    // 80C23E40: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C23E44:
    ctx->pc = 0x80C23E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E44u)) return;
    // 80C23E44: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23E48:
    ctx->pc = 0x80C23E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E48u)) return;
    // 80C23E48: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C23E4C:
    ctx->pc = 0x80C23E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23E4C: lwzx    r3, r3, r0
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
label_80C23E50:
    ctx->pc = 0x80C23E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23E50: lwz     r3, 16(r3)
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
label_80C23E54:
    ctx->pc = 0x80C23E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E54u)) return;
    // 80C23E54: bl      0x8045F6FC
    {
            ctx->lr = 0x80C23E58u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C23E58:
    ctx->pc = 0x80C23E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23E5C:
    ctx->pc = 0x80C23E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E5Cu)) return;
    // 80C23E5C: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23E60u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23E60:
    ctx->pc = 0x80C23E60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23E60: bl      0x8045BFF4
    {
            ctx->lr = 0x80C23E64u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C23E64:
    ctx->pc = 0x80C23E64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E64: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23E68:
    ctx->pc = 0x80C23E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E68u)) return;
    // 80C23E68: bl      0x8045F220
    {
            ctx->lr = 0x80C23E6Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23E6C:
    ctx->pc = 0x80C23E6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23E6C: bl      0x8045C034
    {
            ctx->lr = 0x80C23E70u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C23E70:
    ctx->pc = 0x80C23E70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E70: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C23E74:
    ctx->pc = 0x80C23E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E74u)) return;
    // 80C23E74: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23E78u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23E78:
    ctx->pc = 0x80C23E78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E78: li      r3, 1029
    ctx->gpr[3] = (u32)(s32)(1029);

label_80C23E7C:
    ctx->pc = 0x80C23E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E7Cu)) return;
    // 80C23E7C: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23E80u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23E80:
    ctx->pc = 0x80C23E80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C23E80: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23E84:
    ctx->pc = 0x80C23E84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E84u)) return;
    // 80C23E84: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C23E88:
    ctx->pc = 0x80C23E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23E88: lwz     r0, 0(r3)
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
label_80C23E8C:
    ctx->pc = 0x80C23E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E8Cu)) return;
    // 80C23E8C: cmpwi   r0, 0
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

label_80C23E90:
    ctx->pc = 0x80C23E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E90u)) return;
    // 80C23E90: bc    4, 2, 0x80C23EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C23EA8;
        }
    }

label_80C23E94:
    ctx->pc = 0x80C23E94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23E94: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23E98:
    ctx->pc = 0x80C23E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23E98u)) return;
    // 80C23E98: bl      0x8045F220
    {
            ctx->lr = 0x80C23E9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23E9C:
    ctx->pc = 0x80C23E9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23E9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C23E9C: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23EA0:
    ctx->pc = 0x80C23EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EA0u)) return;
    // 80C23EA0: addi    r4, r4, -9620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9620);

label_80C23EA4:
    ctx->pc = 0x80C23EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EA4u)) return;
    // 80C23EA4: bl      0x8045C060
    {
            ctx->lr = 0x80C23EA8u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C23EA8:
    ctx->pc = 0x80C23EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C23EA8: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23EAC:
    ctx->pc = 0x80C23EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EACu)) return;
    // 80C23EAC: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C23EB0:
    ctx->pc = 0x80C23EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23EB0: lwz     r0, 0(r3)
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
label_80C23EB4:
    ctx->pc = 0x80C23EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EB4u)) return;
    // 80C23EB4: cmpwi   r0, 1
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

label_80C23EB8:
    ctx->pc = 0x80C23EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EB8u)) return;
    // 80C23EB8: bc    4, 2, 0x80C23ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C23ED0;
        }
    }

label_80C23EBC:
    ctx->pc = 0x80C23EBCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23EBCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23EBC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23EC0:
    ctx->pc = 0x80C23EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EC0u)) return;
    // 80C23EC0: bl      0x8045F220
    {
            ctx->lr = 0x80C23EC4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23EC4:
    ctx->pc = 0x80C23EC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23EC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C23EC4: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23EC8:
    ctx->pc = 0x80C23EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EC8u)) return;
    // 80C23EC8: addi    r4, r4, -9636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9636);

label_80C23ECC:
    ctx->pc = 0x80C23ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23ECCu)) return;
    // 80C23ECC: bl      0x8045C060
    {
            ctx->lr = 0x80C23ED0u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C23ED0:
    ctx->pc = 0x80C23ED0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23ED0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23ED0: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23ED4:
    ctx->pc = 0x80C23ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23ED4u)) return;
    // 80C23ED4: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C23ED8:
    ctx->pc = 0x80C23ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23ED8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C23ED8: lwz     r0, 0(r3)
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
label_80C23EDC:
    ctx->pc = 0x80C23EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EDCu)) return;
    // 80C23EDC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C23EE0:
    ctx->pc = 0x80C23EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EE0u)) return;
    // 80C23EE0: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C23EE4:
    ctx->pc = 0x80C23EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EE4u)) return;
    // 80C23EE4: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C23EE8:
    ctx->pc = 0x80C23EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23EE8: lwzx    r3, r3, r0
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
label_80C23EEC:
    ctx->pc = 0x80C23EECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23EEC: lwz     r3, 20(r3)
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
label_80C23EF0:
    ctx->pc = 0x80C23EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EF0u)) return;
    // 80C23EF0: bl      0x8045F6FC
    {
            ctx->lr = 0x80C23EF4u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C23EF4:
    ctx->pc = 0x80C23EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23EF4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23EF8:
    ctx->pc = 0x80C23EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23EF8u)) return;
    // 80C23EF8: bl      0x8045F7C8
    {
            ctx->lr = 0x80C23EFCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C23EFC:
    ctx->pc = 0x80C23EFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23EFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23EFC: bl      0x8045BFF4
    {
            ctx->lr = 0x80C23F00u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C23F00:
    ctx->pc = 0x80C23F00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23F00: bl      0x8045F32C
    {
            ctx->lr = 0x80C23F04u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C23F04:
    ctx->pc = 0x80C23F04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C23F04: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23F08:
    ctx->pc = 0x80C23F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F08u)) return;
    // 80C23F08: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C23F0C:
    ctx->pc = 0x80C23F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23F0C: lwz     r0, 0(r3)
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
label_80C23F10:
    ctx->pc = 0x80C23F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F10u)) return;
    // 80C23F10: cmpwi   r0, 0
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

label_80C23F14:
    ctx->pc = 0x80C23F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F14u)) return;
    // 80C23F14: bc    4, 2, 0x80C23F24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C23F24;
        }
    }

label_80C23F18:
    ctx->pc = 0x80C23F18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23F18: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23F1C:
    ctx->pc = 0x80C23F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F1Cu)) return;
    // 80C23F1C: bl      0x8045F220
    {
            ctx->lr = 0x80C23F20u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23F20:
    ctx->pc = 0x80C23F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23F20: bl      0x8045C034
    {
            ctx->lr = 0x80C23F24u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C23F24:
    ctx->pc = 0x80C23F24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C23F24: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C23F28:
    ctx->pc = 0x80C23F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F28u)) return;
    // 80C23F28: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C23F2C:
    ctx->pc = 0x80C23F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C23F2C: lwz     r0, 0(r3)
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
label_80C23F30:
    ctx->pc = 0x80C23F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F30u)) return;
    // 80C23F30: cmpwi   r0, 1
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

label_80C23F34:
    ctx->pc = 0x80C23F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F34u)) return;
    // 80C23F34: bc    4, 2, 0x80C23F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C23F44;
        }
    }

label_80C23F38:
    ctx->pc = 0x80C23F38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23F38: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23F3C:
    ctx->pc = 0x80C23F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F3Cu)) return;
    // 80C23F3C: bl      0x8045F220
    {
            ctx->lr = 0x80C23F40u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23F40:
    ctx->pc = 0x80C23F40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23F40: bl      0x8045C034
    {
            ctx->lr = 0x80C23F44u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C23F44:
    ctx->pc = 0x80C23F44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C23F44: bl      0x8045C4A4
    {
            ctx->lr = 0x80C23F48u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80C23F48:
    ctx->pc = 0x80C23F48u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F48u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23F48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23F4C:
    ctx->pc = 0x80C23F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F4Cu)) return;
    // 80C23F4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23F50:
    ctx->pc = 0x80C23F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F50u)) return;
    // 80C23F50: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23F54:
    ctx->pc = 0x80C23F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F54u)) return;
    // 80C23F54: addi    r5, r5, -11564
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11564);

label_80C23F58:
    ctx->pc = 0x80C23F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23F58: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23F58u)) return;
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
label_80C23F5C:
    ctx->pc = 0x80C23F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F5Cu)) return;
    // 80C23F5C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23F60:
    ctx->pc = 0x80C23F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F60u)) return;
    // 80C23F60: addi    r5, r5, -11560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11560);

label_80C23F64:
    ctx->pc = 0x80C23F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23F64: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23F64u)) return;
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
label_80C23F68:
    ctx->pc = 0x80C23F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F68u)) return;
    // 80C23F68: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23F6C:
    ctx->pc = 0x80C23F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F6Cu)) return;
    // 80C23F6C: addi    r5, r5, -11556
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11556);

label_80C23F70:
    ctx->pc = 0x80C23F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23F70: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23F70u)) return;
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
label_80C23F74:
    ctx->pc = 0x80C23F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F74u)) return;
    // 80C23F74: bl      0x8045C750
    {
            ctx->lr = 0x80C23F78u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23F78:
    ctx->pc = 0x80C23F78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C23F78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23F7C:
    ctx->pc = 0x80C23F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F7Cu)) return;
    // 80C23F7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C23F80:
    ctx->pc = 0x80C23F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F80u)) return;
    // 80C23F80: li      r5, 145
    ctx->gpr[5] = (u32)(s32)(145);

label_80C23F84:
    ctx->pc = 0x80C23F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F84u)) return;
    // 80C23F84: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C23F88:
    ctx->pc = 0x80C23F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F88u)) return;
    // 80C23F88: addi    r6, r6, -1680
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-1680);

label_80C23F8C:
    ctx->pc = 0x80C23F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F8Cu)) return;
    // 80C23F8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23F90:
    ctx->pc = 0x80C23F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F90u)) return;
    // 80C23F90: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23F94u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23F94:
    ctx->pc = 0x80C23F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C23F94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23F98:
    ctx->pc = 0x80C23F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F98u)) return;
    // 80C23F98: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80C23F9C:
    ctx->pc = 0x80C23F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23F9Cu)) return;
    // 80C23F9C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23FA0:
    ctx->pc = 0x80C23FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FA0u)) return;
    // 80C23FA0: addi    r5, r5, -11552
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11552);

label_80C23FA4:
    ctx->pc = 0x80C23FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C23FA4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23FA4u)) return;
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
label_80C23FA8:
    ctx->pc = 0x80C23FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FA8u)) return;
    // 80C23FA8: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23FAC:
    ctx->pc = 0x80C23FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FACu)) return;
    // 80C23FAC: addi    r5, r5, -11548
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11548);

label_80C23FB0:
    ctx->pc = 0x80C23FB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C23FB0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23FB0u)) return;
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
label_80C23FB4:
    ctx->pc = 0x80C23FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FB4u)) return;
    // 80C23FB4: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C23FB8:
    ctx->pc = 0x80C23FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FB8u)) return;
    // 80C23FB8: addi    r5, r5, -11544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11544);

label_80C23FBC:
    ctx->pc = 0x80C23FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C23FBC: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C23FBCu)) return;
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
label_80C23FC0:
    ctx->pc = 0x80C23FC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FC0u)) return;
    // 80C23FC0: bl      0x8045C750
    {
            ctx->lr = 0x80C23FC4u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C23FC4:
    ctx->pc = 0x80C23FC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23FC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C23FC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C23FC8:
    ctx->pc = 0x80C23FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FC8u)) return;
    // 80C23FC8: li      r4, 110
    ctx->gpr[4] = (u32)(s32)(110);

label_80C23FCC:
    ctx->pc = 0x80C23FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FCCu)) return;
    // 80C23FCC: li      r5, 145
    ctx->gpr[5] = (u32)(s32)(145);

label_80C23FD0:
    ctx->pc = 0x80C23FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FD0u)) return;
    // 80C23FD0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C23FD4:
    ctx->pc = 0x80C23FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FD4u)) return;
    // 80C23FD4: addi    r6, r6, -656
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-656);

label_80C23FD8:
    ctx->pc = 0x80C23FD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FD8u)) return;
    // 80C23FD8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C23FDC:
    ctx->pc = 0x80C23FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FDCu)) return;
    // 80C23FDC: bl      0x8045C7B4
    {
            ctx->lr = 0x80C23FE0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C23FE0:
    ctx->pc = 0x80C23FE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23FE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23FE0: li      r3, 1030
    ctx->gpr[3] = (u32)(s32)(1030);

label_80C23FE4:
    ctx->pc = 0x80C23FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FE4u)) return;
    // 80C23FE4: bl      0x8045BFA0
    {
            ctx->lr = 0x80C23FE8u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C23FE8:
    ctx->pc = 0x80C23FE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23FE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C23FE8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C23FEC:
    ctx->pc = 0x80C23FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FECu)) return;
    // 80C23FEC: bl      0x8045F220
    {
            ctx->lr = 0x80C23FF0u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C23FF0:
    ctx->pc = 0x80C23FF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23FF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C23FF0: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C23FF4:
    ctx->pc = 0x80C23FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FF4u)) return;
    // 80C23FF4: addi    r4, r4, -9616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9616);

label_80C23FF8:
    ctx->pc = 0x80C23FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C23FF8u)) return;
    // 80C23FF8: bl      0x8045C060
    {
            ctx->lr = 0x80C23FFCu;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C23FFC:
    ctx->pc = 0x80C23FFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C23FFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C23FFC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C24000:
    ctx->pc = 0x80C24000u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24000u)) return;
    // 80C24000: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C24004:
    ctx->pc = 0x80C24004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24004: lwz     r0, 0(r3)
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
label_80C24008:
    ctx->pc = 0x80C24008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24008u)) return;
    // 80C24008: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2400C:
    ctx->pc = 0x80C2400Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2400Cu)) return;
    // 80C2400C: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C24010:
    ctx->pc = 0x80C24010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24010u)) return;
    // 80C24010: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C24014:
    ctx->pc = 0x80C24014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24014u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24014: lwzx    r3, r3, r0
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
label_80C24018:
    ctx->pc = 0x80C24018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24018: lwz     r3, 24(r3)
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
label_80C2401C:
    ctx->pc = 0x80C2401Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2401Cu)) return;
    // 80C2401C: bl      0x8045F6FC
    {
            ctx->lr = 0x80C24020u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C24020:
    ctx->pc = 0x80C24020u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24020u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24020: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C24024:
    ctx->pc = 0x80C24024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24024u)) return;
    // 80C24024: bl      0x8045F7C8
    {
            ctx->lr = 0x80C24028u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C24028:
    ctx->pc = 0x80C24028u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24028u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C24028: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C2402C:
    ctx->pc = 0x80C2402Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2402Cu)) return;
    // 80C2402C: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C24030:
    ctx->pc = 0x80C24030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24030: lwz     r3, 0(r3)
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
label_80C24034:
    ctx->pc = 0x80C24034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24034u)) return;
    // 80C24034: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24038:
    ctx->pc = 0x80C24038u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24038u)) return;
    // 80C24038: addi    r4, r4, -20956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20956);

label_80C2403C:
    ctx->pc = 0x80C2403Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2403Cu)) return;
    // 80C2403C: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C24040:
    ctx->pc = 0x80C24040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24040u)) return;
    // 80C24040: addi    r5, r5, -9172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9172);

label_80C24044:
    ctx->pc = 0x80C24044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24044u)) return;
    // 80C24044: lis     r6, -27458
    ctx->gpr[6] = ((u32)(s32)(-27458) << 16);

label_80C24048:
    ctx->pc = 0x80C24048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24048u)) return;
    // 80C24048: addi    r6, r6, -11540
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11540);

label_80C2404C:
    ctx->pc = 0x80C2404Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2404Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2404C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C2404Cu)) return;
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
label_80C24050:
    ctx->pc = 0x80C24050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24050u)) return;
    // 80C24050: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C24054:
    ctx->pc = 0x80C24054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24054u)) return;
    // 80C24054: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80C24058:
    ctx->pc = 0x80C24058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24058u)) return;
    // 80C24058: bl      0x8045EBE4
    {
            ctx->lr = 0x80C2405Cu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C2405C:
    ctx->pc = 0x80C2405Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2405Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80C2405C: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C24060:
    ctx->pc = 0x80C24060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24060u)) return;
    // 80C24060: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C24064:
    ctx->pc = 0x80C24064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24064u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24064: lwz     r3, 0(r3)
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
label_80C24068:
    ctx->pc = 0x80C24068u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24068u)) return;
    // 80C24068: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C2406C:
    ctx->pc = 0x80C2406Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2406Cu)) return;
    // 80C2406C: addi    r4, r4, -3576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3576);

label_80C24070:
    ctx->pc = 0x80C24070u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24070u)) return;
    // 80C24070: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C24074:
    ctx->pc = 0x80C24074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24074u)) return;
    // 80C24074: addi    r5, r5, -9172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-9172);

label_80C24078:
    ctx->pc = 0x80C24078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24078u)) return;
    // 80C24078: lis     r6, -27458
    ctx->gpr[6] = ((u32)(s32)(-27458) << 16);

label_80C2407C:
    ctx->pc = 0x80C2407Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2407Cu)) return;
    // 80C2407C: addi    r6, r6, -11640
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11640);

label_80C24080:
    ctx->pc = 0x80C24080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24080: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80C24080u)) return;
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
label_80C24084:
    ctx->pc = 0x80C24084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24084u)) return;
    // 80C24084: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80C24088:
    ctx->pc = 0x80C24088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24088u)) return;
    // 80C24088: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_80C2408C:
    ctx->pc = 0x80C2408Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2408Cu)) return;
    // 80C2408C: bl      0x8045EBE4
    {
            ctx->lr = 0x80C24090u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80C24090:
    ctx->pc = 0x80C24090u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24090u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24090: bl      0x8045BFF4
    {
            ctx->lr = 0x80C24094u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C24094:
    ctx->pc = 0x80C24094u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24094u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24094: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C24098:
    ctx->pc = 0x80C24098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24098u)) return;
    // 80C24098: bl      0x8045F220
    {
            ctx->lr = 0x80C2409Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C2409C:
    ctx->pc = 0x80C2409Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2409Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2409C: bl      0x8045C034
    {
            ctx->lr = 0x80C240A0u;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C240A0:
    ctx->pc = 0x80C240A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C240A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C240A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C240A4:
    ctx->pc = 0x80C240A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240A4u)) return;
    // 80C240A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C240A8:
    ctx->pc = 0x80C240A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240A8u)) return;
    // 80C240A8: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C240AC:
    ctx->pc = 0x80C240ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240ACu)) return;
    // 80C240AC: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80C240B0:
    ctx->pc = 0x80C240B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C240B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C240B0u)) return;
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
label_80C240B4:
    ctx->pc = 0x80C240B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240B4u)) return;
    // 80C240B4: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C240B8:
    ctx->pc = 0x80C240B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240B8u)) return;
    // 80C240B8: addi    r5, r5, -11536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11536);

label_80C240BC:
    ctx->pc = 0x80C240BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C240BC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C240BCu)) return;
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
label_80C240C0:
    ctx->pc = 0x80C240C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240C0u)) return;
    // 80C240C0: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C240C4:
    ctx->pc = 0x80C240C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240C4u)) return;
    // 80C240C4: addi    r5, r5, -11596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11596);

label_80C240C8:
    ctx->pc = 0x80C240C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C240C8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C240C8u)) return;
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
label_80C240CC:
    ctx->pc = 0x80C240CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240CCu)) return;
    // 80C240CC: bl      0x8045C750
    {
            ctx->lr = 0x80C240D0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C240D0:
    ctx->pc = 0x80C240D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C240D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C240D0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C240D4:
    ctx->pc = 0x80C240D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240D4u)) return;
    // 80C240D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C240D8:
    ctx->pc = 0x80C240D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240D8u)) return;
    // 80C240D8: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80C240DC:
    ctx->pc = 0x80C240DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240DCu)) return;
    // 80C240DC: addi    r5, r6, -2048
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-2048);

label_80C240E0:
    ctx->pc = 0x80C240E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240E0u)) return;
    // 80C240E0: addi    r6, r6, -6912
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-6912);

label_80C240E4:
    ctx->pc = 0x80C240E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240E4u)) return;
    // 80C240E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C240E8:
    ctx->pc = 0x80C240E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240E8u)) return;
    // 80C240E8: bl      0x8045C7B4
    {
            ctx->lr = 0x80C240ECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C240EC:
    ctx->pc = 0x80C240ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C240ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C240EC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C240F0:
    ctx->pc = 0x80C240F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240F0u)) return;
    // 80C240F0: bl      0x8045F220
    {
            ctx->lr = 0x80C240F4u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C240F4:
    ctx->pc = 0x80C240F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C240F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C240F4: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C240F8:
    ctx->pc = 0x80C240F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240F8u)) return;
    // 80C240F8: addi    r4, r4, -9608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9608);

label_80C240FC:
    ctx->pc = 0x80C240FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C240FCu)) return;
    // 80C240FC: bl      0x8045C060
    {
            ctx->lr = 0x80C24100u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C24100:
    ctx->pc = 0x80C24100u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24100u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24100: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C24104:
    ctx->pc = 0x80C24104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24104u)) return;
    // 80C24104: bl      0x8045F220
    {
            ctx->lr = 0x80C24108u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C24108:
    ctx->pc = 0x80C24108u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24108u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24108: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C2410C:
    ctx->pc = 0x80C2410Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2410Cu)) return;
    // 80C2410C: addi    r4, r4, -9604
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9604);

label_80C24110:
    ctx->pc = 0x80C24110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24110u)) return;
    // 80C24110: bl      0x8045C060
    {
            ctx->lr = 0x80C24114u;
            ctx->pc = 0x8045C060u;
            return;
    }

label_80C24114:
    ctx->pc = 0x80C24114u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24114u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24114: li      r3, 1031
    ctx->gpr[3] = (u32)(s32)(1031);

label_80C24118:
    ctx->pc = 0x80C24118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24118u)) return;
    // 80C24118: bl      0x8045BFA0
    {
            ctx->lr = 0x80C2411Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80C2411C:
    ctx->pc = 0x80C2411Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2411Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C2411C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C24120:
    ctx->pc = 0x80C24120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24120u)) return;
    // 80C24120: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80C24124:
    ctx->pc = 0x80C24124u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24124u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24124: lwz     r0, 0(r3)
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
label_80C24128:
    ctx->pc = 0x80C24128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24128u)) return;
    // 80C24128: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80C2412C:
    ctx->pc = 0x80C2412Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2412Cu)) return;
    // 80C2412C: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C24130:
    ctx->pc = 0x80C24130u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24130u)) return;
    // 80C24130: addi    r3, r3, -9700
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-9700);

label_80C24134:
    ctx->pc = 0x80C24134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24134u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24134: lwzx    r3, r3, r0
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
label_80C24138:
    ctx->pc = 0x80C24138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24138u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24138: lwz     r3, 28(r3)
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
label_80C2413C:
    ctx->pc = 0x80C2413Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2413Cu)) return;
    // 80C2413C: bl      0x8045F6FC
    {
            ctx->lr = 0x80C24140u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80C24140:
    ctx->pc = 0x80C24140u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24140u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24140: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C24144:
    ctx->pc = 0x80C24144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24144u)) return;
    // 80C24144: bl      0x8045F7C8
    {
            ctx->lr = 0x80C24148u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C24148:
    ctx->pc = 0x80C24148u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24148u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24148: bl      0x8045BFF4
    {
            ctx->lr = 0x80C2414Cu;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80C2414C:
    ctx->pc = 0x80C2414Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2414Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2414C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C24150:
    ctx->pc = 0x80C24150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24150u)) return;
    // 80C24150: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C24154:
    ctx->pc = 0x80C24154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24154u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24154: lwz     r0, 0(r3)
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
label_80C24158:
    ctx->pc = 0x80C24158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24158u)) return;
    // 80C24158: cmpwi   r0, 0
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

label_80C2415C:
    ctx->pc = 0x80C2415Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2415Cu)) return;
    // 80C2415C: bc    4, 2, 0x80C2416C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2416C;
        }
    }

label_80C24160:
    ctx->pc = 0x80C24160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24160: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C24164:
    ctx->pc = 0x80C24164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24164u)) return;
    // 80C24164: bl      0x8045F220
    {
            ctx->lr = 0x80C24168u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C24168:
    ctx->pc = 0x80C24168u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24168u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24168: bl      0x8045C034
    {
            ctx->lr = 0x80C2416Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2416C:
    ctx->pc = 0x80C2416Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2416Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2416C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C24170:
    ctx->pc = 0x80C24170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24170u)) return;
    // 80C24170: addi    r3, r3, -5396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5396);

label_80C24174:
    ctx->pc = 0x80C24174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24174u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24174: lwz     r0, 0(r3)
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
label_80C24178:
    ctx->pc = 0x80C24178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24178u)) return;
    // 80C24178: cmpwi   r0, 1
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

label_80C2417C:
    ctx->pc = 0x80C2417Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2417Cu)) return;
    // 80C2417C: bc    4, 2, 0x80C2418C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2418C;
        }
    }

label_80C24180:
    ctx->pc = 0x80C24180u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24180u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24180: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C24184:
    ctx->pc = 0x80C24184u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24184u)) return;
    // 80C24184: bl      0x8045F220
    {
            ctx->lr = 0x80C24188u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80C24188:
    ctx->pc = 0x80C24188u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24188u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24188: bl      0x8045C034
    {
            ctx->lr = 0x80C2418Cu;
            ctx->pc = 0x8045C034u;
            return;
    }

label_80C2418C:
    ctx->pc = 0x80C2418Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2418Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2418C: bl      0x8045F32C
    {
            ctx->lr = 0x80C24190u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80C24190:
    ctx->pc = 0x80C24190u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24190u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C24190: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C24194:
    ctx->pc = 0x80C24194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24194u)) return;
    // 80C24194: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C24198:
    ctx->pc = 0x80C24198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24198u)) return;
    // 80C24198: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C2419C:
    ctx->pc = 0x80C2419Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2419Cu)) return;
    // 80C2419C: addi    r5, r5, -11532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11532);

label_80C241A0:
    ctx->pc = 0x80C241A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C241A0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C241A0u)) return;
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
label_80C241A4:
    ctx->pc = 0x80C241A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241A4u)) return;
    // 80C241A4: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C241A8:
    ctx->pc = 0x80C241A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241A8u)) return;
    // 80C241A8: addi    r5, r5, -11528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11528);

label_80C241AC:
    ctx->pc = 0x80C241ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C241AC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C241ACu)) return;
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
label_80C241B0:
    ctx->pc = 0x80C241B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241B0u)) return;
    // 80C241B0: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C241B4:
    ctx->pc = 0x80C241B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241B4u)) return;
    // 80C241B4: addi    r5, r5, -11524
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11524);

label_80C241B8:
    ctx->pc = 0x80C241B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C241B8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C241B8u)) return;
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
label_80C241BC:
    ctx->pc = 0x80C241BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241BCu)) return;
    // 80C241BC: bl      0x8045C750
    {
            ctx->lr = 0x80C241C0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C241C0:
    ctx->pc = 0x80C241C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C241C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C241C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C241C4:
    ctx->pc = 0x80C241C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241C4u)) return;
    // 80C241C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80C241C8:
    ctx->pc = 0x80C241C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241C8u)) return;
    // 80C241C8: li      r5, 1536
    ctx->gpr[5] = (u32)(s32)(1536);

label_80C241CC:
    ctx->pc = 0x80C241CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241CCu)) return;
    // 80C241CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C241D0:
    ctx->pc = 0x80C241D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241D0u)) return;
    // 80C241D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80C241D4:
    ctx->pc = 0x80C241D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241D4u)) return;
    // 80C241D4: bl      0x8045C7B4
    {
            ctx->lr = 0x80C241D8u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80C241D8:
    ctx->pc = 0x80C241D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C241D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C241D8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C241DC:
    ctx->pc = 0x80C241DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241DCu)) return;
    // 80C241DC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80C241E0:
    ctx->pc = 0x80C241E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241E0u)) return;
    // 80C241E0: li      r5, 20025
    ctx->gpr[5] = (u32)(s32)(20025);

label_80C241E4:
    ctx->pc = 0x80C241E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241E4u)) return;
    // 80C241E4: bl      0x8045C0F8
    {
            ctx->lr = 0x80C241E8u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C241E8:
    ctx->pc = 0x80C241E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C241E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C241E8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C241EC:
    ctx->pc = 0x80C241ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241ECu)) return;
    // 80C241EC: bl      0x8045F7C8
    {
            ctx->lr = 0x80C241F0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C241F0:
    ctx->pc = 0x80C241F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C241F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C241F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C241F4:
    ctx->pc = 0x80C241F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241F4u)) return;
    // 80C241F4: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C241F8:
    ctx->pc = 0x80C241F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241F8u)) return;
    // 80C241F8: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C241FC:
    ctx->pc = 0x80C241FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C241FCu)) return;
    // 80C241FC: addi    r5, r5, -11532
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11532);

label_80C24200:
    ctx->pc = 0x80C24200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24200u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24200: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24200u)) return;
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
label_80C24204:
    ctx->pc = 0x80C24204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24204u)) return;
    // 80C24204: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C24208:
    ctx->pc = 0x80C24208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24208u)) return;
    // 80C24208: addi    r5, r5, -11520
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11520);

label_80C2420C:
    ctx->pc = 0x80C2420Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2420Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2420C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2420Cu)) return;
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
label_80C24210:
    ctx->pc = 0x80C24210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24210u)) return;
    // 80C24210: lis     r5, -27458
    ctx->gpr[5] = ((u32)(s32)(-27458) << 16);

label_80C24214:
    ctx->pc = 0x80C24214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24214u)) return;
    // 80C24214: addi    r5, r5, -11516
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11516);

label_80C24218:
    ctx->pc = 0x80C24218u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24218u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24218: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24218u)) return;
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
label_80C2421C:
    ctx->pc = 0x80C2421Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2421Cu)) return;
    // 80C2421C: bl      0x8045C750
    {
            ctx->lr = 0x80C24220u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80C24220:
    ctx->pc = 0x80C24220u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24220u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C24220: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C24224:
    ctx->pc = 0x80C24224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24224u)) return;
    // 80C24224: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_80C24228:
    ctx->pc = 0x80C24228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24228u)) return;
    // 80C24228: li      r5, 12743
    ctx->gpr[5] = (u32)(s32)(12743);

label_80C2422C:
    ctx->pc = 0x80C2422Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2422Cu)) return;
    // 80C2422C: bl      0x8045C0F8
    {
            ctx->lr = 0x80C24230u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80C24230:
    ctx->pc = 0x80C24230u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24230u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24230: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80C24234:
    ctx->pc = 0x80C24234u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24234u)) return;
    // 80C24234: bl      0x8045F7C8
    {
            ctx->lr = 0x80C24238u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C24238:
    ctx->pc = 0x80C24238u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24238u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C24238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C2423C:
    ctx->pc = 0x80C2423Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2423Cu)) return;
    // 80C2423C: li      r4, 760
    ctx->gpr[4] = (u32)(s32)(760);

label_80C24240:
    ctx->pc = 0x80C24240u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24240u)) return;
    // 80C24240: li      r5, 88
    ctx->gpr[5] = (u32)(s32)(88);

label_80C24244:
    ctx->pc = 0x80C24244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24244u)) return;
    // 80C24244: bl      0x80C249F4
    {
            ctx->lr = 0x80C24248u;
            goto label_80C249F4;
    }

label_80C24248:
    ctx->pc = 0x80C24248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80C24248: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C2424C:
    ctx->pc = 0x80C2424Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2424Cu)) return;
    // 80C2424C: addi    r3, r3, -11512
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11512);

label_80C24250:
    ctx->pc = 0x80C24250u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24250u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24250: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C24250u)) return;
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
label_80C24254:
    ctx->pc = 0x80C24254u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24254u)) return;
    // 80C24254: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C24258:
    ctx->pc = 0x80C24258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24258u)) return;
    // 80C24258: addi    r3, r3, -11664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11664);

label_80C2425C:
    ctx->pc = 0x80C2425Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2425Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2425C: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2425Cu)) return;
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
label_80C24260:
    ctx->pc = 0x80C24260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24260u)) return;
    // 80C24260: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C24264:
    ctx->pc = 0x80C24264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24264u)) return;
    // 80C24264: addi    r3, r3, -11640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11640);

label_80C24268:
    ctx->pc = 0x80C24268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24268u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24268: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C24268u)) return;
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
label_80C2426C:
    ctx->pc = 0x80C2426Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2426Cu)) return;
    // 80C2426C: fmr    f4, f3
    if (!ppc_fp_available_inline(ctx, 0x80C2426Cu)) return;
    ctx->fpr[4] = ctx->fpr[3];

label_80C24270:
    ctx->pc = 0x80C24270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24270u)) return;
    // 80C24270: fmr    f5, f3
    if (!ppc_fp_available_inline(ctx, 0x80C24270u)) return;
    ctx->fpr[5] = ctx->fpr[3];

label_80C24274:
    ctx->pc = 0x80C24274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24274u)) return;
    // 80C24274: bl      0x80C24504
    {
            ctx->lr = 0x80C24278u;
            goto label_80C24504;
    }

label_80C24278:
    ctx->pc = 0x80C24278u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24278u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C24278: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C2427C:
    ctx->pc = 0x80C2427Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2427Cu)) return;
    // 80C2427C: addi    r4, r4, 24388
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24388);

label_80C24280:
    ctx->pc = 0x80C24280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24280u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24280: stw     r3, 0(r4)
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
label_80C24284:
    ctx->pc = 0x80C24284u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24284u)) return;
    // 80C24284: li      r3, 90
    ctx->gpr[3] = (u32)(s32)(90);

label_80C24288:
    ctx->pc = 0x80C24288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24288u)) return;
    // 80C24288: bl      0x8045F7C8
    {
            ctx->lr = 0x80C2428Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80C2428C:
    ctx->pc = 0x80C2428Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2428Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2428C: b       0x80C242E0
    {
            goto label_80C242E0;
    }

label_80C24290:
    ctx->pc = 0x80C24290u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24290u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24290: bl      0x8045DE34
    {
            ctx->lr = 0x80C24294u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80C24294:
    ctx->pc = 0x80C24294u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24294u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24294: bl      0x80460A80
    {
            ctx->lr = 0x80C24298u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80C24298:
    ctx->pc = 0x80C24298u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24298u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24298: bl      0x80C24948
    {
            ctx->lr = 0x80C2429Cu;
            goto label_80C24948;
    }

label_80C2429C:
    ctx->pc = 0x80C2429Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2429Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2429C: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C242A0:
    ctx->pc = 0x80C242A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242A0u)) return;
    // 80C242A0: addi    r3, r3, 24388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24388);

label_80C242A4:
    ctx->pc = 0x80C242A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C242A4: lwz     r3, 0(r3)
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
label_80C242A8:
    ctx->pc = 0x80C242A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242A8u)) return;
    // 80C242A8: cmplwi  r3, 0x0000
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

label_80C242AC:
    ctx->pc = 0x80C242ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242ACu)) return;
    // 80C242AC: bc    12, 2, 0x80C242C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C242C4;
        }
    }

label_80C242B0:
    ctx->pc = 0x80C242B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C242B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C242B0: bl      0x8050F9E0
    {
            ctx->lr = 0x80C242B4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C242B4:
    ctx->pc = 0x80C242B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C242B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C242B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C242B8:
    ctx->pc = 0x80C242B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242B8u)) return;
    // 80C242B8: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C242BC:
    ctx->pc = 0x80C242BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242BCu)) return;
    // 80C242BC: addi    r3, r3, 24388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24388);

label_80C242C0:
    ctx->pc = 0x80C242C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C242C0: stw     r0, 0(r3)
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
label_80C242C4:
    ctx->pc = 0x80C242C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C242C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C242C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C242C8:
    ctx->pc = 0x80C242C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242C8u)) return;
    // 80C242C8: bl      0x8045EC10
    {
            ctx->lr = 0x80C242CCu;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80C242CC:
    ctx->pc = 0x80C242CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C242CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C242CC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C242D0:
    ctx->pc = 0x80C242D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242D0u)) return;
    // 80C242D0: bl      0x8045ED54
    {
            ctx->lr = 0x80C242D4u;
            ctx->pc = 0x8045ED54u;
            return;
    }

label_80C242D4:
    ctx->pc = 0x80C242D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C242D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C242D4: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C242D8:
    ctx->pc = 0x80C242D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242D8u)) return;
    // 80C242D8: addi    r3, r3, 24384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24384);

label_80C242DC:
    ctx->pc = 0x80C242DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242DCu)) return;
    // 80C242DC: bl      0x8045F070
    {
            ctx->lr = 0x80C242E0u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80C242E0:
    ctx->pc = 0x80C242E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C242E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C242E0: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C242E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C242E0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C242E4:
    ctx->pc = 0x80C242E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C242E4: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C242E4u)) return;
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
label_80C242E8:
    ctx->pc = 0x80C242E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C242E8: psq_l   f30, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C242E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C242E8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C242EC:
    ctx->pc = 0x80C242ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C242EC: lfd     f30, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C242ECu)) return;
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
label_80C242F0:
    ctx->pc = 0x80C242F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C242F0: lwz     r0, 52(r1)
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
label_80C242F4:
    ctx->pc = 0x80C242F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C242F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C242F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C242F8:
    ctx->pc = 0x80C242F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242F8u)) return;
    // 80C242F8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80C242FC:
    ctx->pc = 0x80C242FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C242FCu)) return;
    // 80C242FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24300:
    ctx->pc = 0x80C24300u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24300u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24300: stwu     r1, -64(r1)
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
label_80C24304:
    ctx->pc = 0x80C24304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24304u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24304: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24308:
    ctx->pc = 0x80C24308u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24308u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24308: stw     r0, 68(r1)
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
label_80C2430C:
    ctx->pc = 0x80C2430Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2430Cu)) return;
    // 80C2430C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C24310:
    ctx->pc = 0x80C24310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24310u)) return;
    // 80C24310: bl      0x80006DD4
    {
            ctx->lr = 0x80C24314u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80C24314:
    ctx->pc = 0x80C24314u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 29u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24314u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 29u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80C24314: lwz     r27, 32(r3)
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
label_80C24318:
    ctx->pc = 0x80C24318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24318u)) return;
    // 80C24318: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C2431C:
    ctx->pc = 0x80C2431Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2431Cu)) return;
    // 80C2431C: addi    r3, r3, -11504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11504);

label_80C24320:
    ctx->pc = 0x80C24320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24320u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80C24320: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C24320u)) return;
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
label_80C24324:
    ctx->pc = 0x80C24324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24324u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C24324: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C24324u)) return;
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
label_80C24328:
    ctx->pc = 0x80C24328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24328u)) return;
    // 80C24328: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24328u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C2432C:
    ctx->pc = 0x80C2432Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2432Cu)) return;
    // 80C2432C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2432Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C24330:
    ctx->pc = 0x80C24330u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24330u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C24330: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24330u)) return;
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
label_80C24334:
    ctx->pc = 0x80C24334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24334u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C24334: lwz     r31, 12(r1)
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
label_80C24338:
    ctx->pc = 0x80C24338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C24338: lfs     f0, 32(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C24338u)) return;
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
label_80C2433C:
    ctx->pc = 0x80C2433Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2433Cu)) return;
    // 80C2433C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2433Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C24340:
    ctx->pc = 0x80C24340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24340u)) return;
    // 80C24340: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24340u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C24344:
    ctx->pc = 0x80C24344u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24344u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C24344: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24344u)) return;
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
label_80C24348:
    ctx->pc = 0x80C24348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24348u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C24348: lwz     r30, 20(r1)
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
label_80C2434C:
    ctx->pc = 0x80C2434Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2434Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C2434C: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C2434Cu)) return;
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
label_80C24350:
    ctx->pc = 0x80C24350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24350u)) return;
    // 80C24350: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24350u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C24354:
    ctx->pc = 0x80C24354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24354u)) return;
    // 80C24354: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24354u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C24358:
    ctx->pc = 0x80C24358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24358u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24358: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24358u)) return;
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
label_80C2435C:
    ctx->pc = 0x80C2435Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2435Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2435C: lwz     r29, 28(r1)
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
label_80C24360:
    ctx->pc = 0x80C24360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24360: lfs     f0, 40(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C24360u)) return;
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
label_80C24364:
    ctx->pc = 0x80C24364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24364u)) return;
    // 80C24364: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24364u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80C24368:
    ctx->pc = 0x80C24368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24368u)) return;
    // 80C24368: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24368u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80C2436C:
    ctx->pc = 0x80C2436Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2436Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2436C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2436Cu)) return;
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
label_80C24370:
    ctx->pc = 0x80C24370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24370: lwz     r28, 36(r1)
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
label_80C24374:
    ctx->pc = 0x80C24374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24374u)) return;
    // 80C24374: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80C24378:
    ctx->pc = 0x80C24378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24378u)) return;
    // 80C24378: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80C2437C:
    ctx->pc = 0x80C2437Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2437Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2437C: lwz     r0, 0(r3)
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
label_80C24380:
    ctx->pc = 0x80C24380u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24380u)) return;
    // 80C24380: cmpwi   r0, 0
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

label_80C24384:
    ctx->pc = 0x80C24384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24384u)) return;
    // 80C24384: bc    4, 2, 0x80C2443C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2443C;
        }
    }

label_80C24388:
    ctx->pc = 0x80C24388u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24388u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24388: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C2438C:
    ctx->pc = 0x80C2438Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2438Cu)) return;
    // 80C2438C: cmplwi  r0, 0x0000
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

label_80C24390:
    ctx->pc = 0x80C24390u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24390u)) return;
    // 80C24390: bc    12, 2, 0x80C2443C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C2443C;
        }
    }

label_80C24394:
    ctx->pc = 0x80C24394u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24394u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24394: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C24398:
    ctx->pc = 0x80C24398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24398u)) return;
    // 80C24398: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80C2439C:
    ctx->pc = 0x80C2439Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2439Cu)) return;
    // 80C2439C: bl      0x8060F4F8
    {
            ctx->lr = 0x80C243A0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C243A0:
    ctx->pc = 0x80C243A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C243A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C243A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80C243A4:
    ctx->pc = 0x80C243A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243A4u)) return;
    // 80C243A4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C243A8:
    ctx->pc = 0x80C243A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243A8u)) return;
    // 80C243A8: bl      0x8060F4F8
    {
            ctx->lr = 0x80C243ACu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80C243AC:
    ctx->pc = 0x80C243ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C243ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C243AC: lfs     f5, 52(r27)
    if (!ppc_fp_available_inline(ctx, 0x80C243ACu)) return;
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
label_80C243B0:
    ctx->pc = 0x80C243B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243B0u)) return;
    // 80C243B0: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C243B4:
    ctx->pc = 0x80C243B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243B4u)) return;
    // 80C243B4: addi    r3, r3, -11496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11496);

label_80C243B8:
    ctx->pc = 0x80C243B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C243B8: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C243B8u)) return;
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
label_80C243BC:
    ctx->pc = 0x80C243BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243BCu)) return;
    // 80C243BC: fcmpo   cr0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C243BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[5], ctx->fpr[0], true);

label_80C243C0:
    ctx->pc = 0x80C243C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243C0u)) return;
    // 80C243C0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80C243C4:
    ctx->pc = 0x80C243C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243C4u)) return;
    // 80C243C4: bc    4, 2, 0x80C243D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C243D8;
        }
    }

label_80C243C8:
    ctx->pc = 0x80C243C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C243C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C243C8: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C243CC:
    ctx->pc = 0x80C243CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243CCu)) return;
    // 80C243CC: addi    r3, r3, -11500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11500);

label_80C243D0:
    ctx->pc = 0x80C243D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C243D0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C243D0u)) return;
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
label_80C243D4:
    ctx->pc = 0x80C243D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243D4u)) return;
    // 80C243D4: fadds   f5, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x80C243D4u)) return;
    ppc_fadds(ctx, 5, 5, 0);

label_80C243D8:
    ctx->pc = 0x80C243D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C243D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C243D8: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C243DC:
    ctx->pc = 0x80C243DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243DCu)) return;
    // 80C243DC: cmplwi  r0, 0x00FF
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

label_80C243E0:
    ctx->pc = 0x80C243E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243E0u)) return;
    // 80C243E0: bc    4, 1, 0x80C243E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C243E8;
        }
    }

label_80C243E4:
    ctx->pc = 0x80C243E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C243E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C243E4: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_80C243E8:
    ctx->pc = 0x80C243E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 21u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C243E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 21u : 1u;
    // 80C243E8: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C243EC:
    ctx->pc = 0x80C243ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243ECu)) return;
    // 80C243EC: addi    r3, r3, -11492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11492);

label_80C243F0:
    ctx->pc = 0x80C243F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C243F0: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C243F0u)) return;
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
label_80C243F4:
    ctx->pc = 0x80C243F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243F4u)) return;
    // 80C243F4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80C243F4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80C243F8:
    ctx->pc = 0x80C243F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243F8u)) return;
    // 80C243F8: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C243FC:
    ctx->pc = 0x80C243FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C243FCu)) return;
    // 80C243FC: addi    r3, r3, -11488
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11488);

label_80C24400:
    ctx->pc = 0x80C24400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C24400: lfs     f3, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C24400u)) return;
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
label_80C24404:
    ctx->pc = 0x80C24404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24404u)) return;
    // 80C24404: lis     r3, -27458
    ctx->gpr[3] = ((u32)(s32)(-27458) << 16);

label_80C24408:
    ctx->pc = 0x80C24408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24408u)) return;
    // 80C24408: addi    r3, r3, -11484
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11484);

label_80C2440C:
    ctx->pc = 0x80C2440Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2440Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C2440C: lfs     f4, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C2440Cu)) return;
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
label_80C24410:
    ctx->pc = 0x80C24410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24410u)) return;
    // 80C24410: rlwinm r5, r28, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_80C24414:
    ctx->pc = 0x80C24414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24414u)) return;
    // 80C24414: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80C24418:
    ctx->pc = 0x80C24418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24418u)) return;
    // 80C24418: rlwinm r4, r0, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80C2441C:
    ctx->pc = 0x80C2441Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2441Cu)) return;
    // 80C2441C: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80C24420:
    ctx->pc = 0x80C24420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24420u)) return;
    // 80C24420: rlwinm r3, r0, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80C24424:
    ctx->pc = 0x80C24424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24424u)) return;
    // 80C24424: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80C24428:
    ctx->pc = 0x80C24428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24428u)) return;
    // 80C24428: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80C2442C:
    ctx->pc = 0x80C2442Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2442Cu)) return;
    // 80C2442C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80C24430:
    ctx->pc = 0x80C24430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24430u)) return;
    // 80C24430: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80C24434:
    ctx->pc = 0x80C24434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24434u)) return;
    // 80C24434: or   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80C24438:
    ctx->pc = 0x80C24438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24438u)) return;
    // 80C24438: bl      0x80C245F8
    {
            ctx->lr = 0x80C2443Cu;
            goto label_80C245F8;
    }

label_80C2443C:
    ctx->pc = 0x80C2443Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2443Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C2443C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80C24440:
    ctx->pc = 0x80C24440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24440u)) return;
    // 80C24440: bl      0x80006E20
    {
            ctx->lr = 0x80C24444u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80C24444:
    ctx->pc = 0x80C24444u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24444u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24444: lwz     r0, 68(r1)
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
label_80C24448:
    ctx->pc = 0x80C24448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24448: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2444C:
    ctx->pc = 0x80C2444Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2444Cu)) return;
    // 80C2444C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80C24450:
    ctx->pc = 0x80C24450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24450u)) return;
    // 80C24450: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24454:
    ctx->pc = 0x80C24454u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24454u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24454: stwu     r1, -16(r1)
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
label_80C24458:
    ctx->pc = 0x80C24458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24458u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24458: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2445C:
    ctx->pc = 0x80C2445Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2445Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2445C: stw     r0, 20(r1)
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
label_80C24460:
    ctx->pc = 0x80C24460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24460u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24460: lwz     r5, 32(r3)
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
label_80C24464:
    ctx->pc = 0x80C24464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24464: lfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24464u)) return;
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
label_80C24468:
    ctx->pc = 0x80C24468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24468u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24468: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24468u)) return;
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
label_80C2446C:
    ctx->pc = 0x80C2446Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2446Cu)) return;
    // 80C2446C: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2446Cu)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_80C24470:
    ctx->pc = 0x80C24470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24470u)) return;
    // 80C24470: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C24474:
    ctx->pc = 0x80C24474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24474u)) return;
    // 80C24474: addi    r4, r4, -11480
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11480);

label_80C24478:
    ctx->pc = 0x80C24478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24478u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24478: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C24478u)) return;
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
label_80C2447C:
    ctx->pc = 0x80C2447Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2447Cu)) return;
    // 80C2447C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C2447Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C24480:
    ctx->pc = 0x80C24480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24480u)) return;
    // 80C24480: bc    4, 1, 0x80C2448C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C2448C;
        }
    }

label_80C24484:
    ctx->pc = 0x80C24484u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24484u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24484: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24484u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C24488:
    ctx->pc = 0x80C24488u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24488u)) return;
    // 80C24488: b       0x80C244A4
    {
            goto label_80C244A4;
    }

label_80C2448C:
    ctx->pc = 0x80C2448Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2448Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C2448C: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C24490:
    ctx->pc = 0x80C24490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24490u)) return;
    // 80C24490: addi    r4, r4, -11492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11492);

label_80C24494:
    ctx->pc = 0x80C24494u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24494u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24494: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C24494u)) return;
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
label_80C24498:
    ctx->pc = 0x80C24498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24498u)) return;
    // 80C24498: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C24498u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_80C2449C:
    ctx->pc = 0x80C2449Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2449Cu)) return;
    // 80C2449C: bc    4, 0, 0x80C244A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C244A4;
        }
    }

label_80C244A0:
    ctx->pc = 0x80C244A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C244A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C244A0: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80C244A0u)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_80C244A4:
    ctx->pc = 0x80C244A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C244A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C244A4: stfs     f1, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C244A4u)) return;
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
label_80C244A8:
    ctx->pc = 0x80C244A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244A8u)) return;
    // 80C244A8: bl      0x80C24300
    {
            ctx->lr = 0x80C244ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C24300u;
                return;
            }
            goto label_80C24300;
    }

label_80C244AC:
    ctx->pc = 0x80C244ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C244ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C244AC: lwz     r0, 20(r1)
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
label_80C244B0:
    ctx->pc = 0x80C244B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C244B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C244B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C244B4:
    ctx->pc = 0x80C244B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244B4u)) return;
    // 80C244B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C244B8:
    ctx->pc = 0x80C244B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244B8u)) return;
    // 80C244B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C244BC:
    ctx->pc = 0x80C244BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C244BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C244BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C244C0:
    ctx->pc = 0x80C244C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C244C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C244C0: stwu     r1, -16(r1)
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
label_80C244C4:
    ctx->pc = 0x80C244C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C244C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C244C8:
    ctx->pc = 0x80C244C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C244C8: stw     r0, 20(r1)
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
label_80C244CC:
    ctx->pc = 0x80C244CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244CCu)) return;
    // 80C244CC: lis     r4, -32574
    ctx->gpr[4] = ((u32)(s32)(-32574) << 16);

label_80C244D0:
    ctx->pc = 0x80C244D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244D0u)) return;
    // 80C244D0: addi    r0, r4, 17492
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(17492);

label_80C244D4:
    ctx->pc = 0x80C244D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C244D4: stw     r0, 16(r3)
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
label_80C244D8:
    ctx->pc = 0x80C244D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244D8u)) return;
    // 80C244D8: lis     r4, -32574
    ctx->gpr[4] = ((u32)(s32)(-32574) << 16);

label_80C244DC:
    ctx->pc = 0x80C244DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244DCu)) return;
    // 80C244DC: addi    r0, r4, 17152
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(17152);

label_80C244E0:
    ctx->pc = 0x80C244E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C244E0: stw     r0, 20(r3)
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
label_80C244E4:
    ctx->pc = 0x80C244E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244E4u)) return;
    // 80C244E4: lis     r4, -32574
    ctx->gpr[4] = ((u32)(s32)(-32574) << 16);

label_80C244E8:
    ctx->pc = 0x80C244E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244E8u)) return;
    // 80C244E8: addi    r0, r4, 17596
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(17596);

label_80C244EC:
    ctx->pc = 0x80C244ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C244EC: stw     r0, 24(r3)
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
label_80C244F0:
    ctx->pc = 0x80C244F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244F0u)) return;
    // 80C244F0: bl      0x80C24454
    {
            ctx->lr = 0x80C244F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C24454u;
                return;
            }
            goto label_80C24454;
    }

label_80C244F4:
    ctx->pc = 0x80C244F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C244F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C244F4: lwz     r0, 20(r1)
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
label_80C244F8:
    ctx->pc = 0x80C244F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C244F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C244F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C244FC:
    ctx->pc = 0x80C244FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C244FCu)) return;
    // 80C244FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24500:
    ctx->pc = 0x80C24500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24500u)) return;
    // 80C24500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24504:
    ctx->pc = 0x80C24504u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 23u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24504u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 23u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C24504: stwu     r1, -96(r1)
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
label_80C24508:
    ctx->pc = 0x80C24508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C24508: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2450C:
    ctx->pc = 0x80C2450Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2450Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C2450C: stw     r0, 100(r1)
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
label_80C24510:
    ctx->pc = 0x80C24510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C24510: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24510u)) return;
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
label_80C24514:
    ctx->pc = 0x80C24514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80C24514: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C24514u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80C24514u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24518:
    ctx->pc = 0x80C24518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80C24518: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24518u)) return;
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
label_80C2451C:
    ctx->pc = 0x80C2451Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2451Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C2451C: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2451Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80C2451Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24520:
    ctx->pc = 0x80C24520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C24520: stfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24520u)) return;
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
label_80C24524:
    ctx->pc = 0x80C24524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C24524: psq_st   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C24524u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80C24524u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24528:
    ctx->pc = 0x80C24528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C24528: stfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24528u)) return;
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
label_80C2452C:
    ctx->pc = 0x80C2452Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2452Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C2452C: psq_st   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C2452Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x80C2452Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24530:
    ctx->pc = 0x80C24530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24530: stfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24530u)) return;
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
label_80C24534:
    ctx->pc = 0x80C24534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24534: psq_st   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C24534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x80C24534u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24538:
    ctx->pc = 0x80C24538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24538u)) return;
    // 80C24538: fmr    f27, f1
    if (!ppc_fp_available_inline(ctx, 0x80C24538u)) return;
    ctx->fpr[27] = ctx->fpr[1];

label_80C2453C:
    ctx->pc = 0x80C2453Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2453Cu)) return;
    // 80C2453C: fmr    f28, f2
    if (!ppc_fp_available_inline(ctx, 0x80C2453Cu)) return;
    ctx->fpr[28] = ctx->fpr[2];

label_80C24540:
    ctx->pc = 0x80C24540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24540u)) return;
    // 80C24540: fmr    f29, f3
    if (!ppc_fp_available_inline(ctx, 0x80C24540u)) return;
    ctx->fpr[29] = ctx->fpr[3];

label_80C24544:
    ctx->pc = 0x80C24544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24544u)) return;
    // 80C24544: fmr    f30, f4
    if (!ppc_fp_available_inline(ctx, 0x80C24544u)) return;
    ctx->fpr[30] = ctx->fpr[4];

label_80C24548:
    ctx->pc = 0x80C24548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24548u)) return;
    // 80C24548: fmr    f31, f5
    if (!ppc_fp_available_inline(ctx, 0x80C24548u)) return;
    ctx->fpr[31] = ctx->fpr[5];

label_80C2454C:
    ctx->pc = 0x80C2454Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2454Cu)) return;
    // 80C2454C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C24550:
    ctx->pc = 0x80C24550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24550u)) return;
    // 80C24550: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80C24554:
    ctx->pc = 0x80C24554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24554u)) return;
    // 80C24554: lis     r5, -32574
    ctx->gpr[5] = ((u32)(s32)(-32574) << 16);

label_80C24558:
    ctx->pc = 0x80C24558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24558u)) return;
    // 80C24558: addi    r5, r5, 17600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17600);

label_80C2455C:
    ctx->pc = 0x80C2455Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2455Cu)) return;
    // 80C2455C: bl      0x8050FD60
    {
            ctx->lr = 0x80C24560u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C24560:
    ctx->pc = 0x80C24560u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 25u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24560u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 25u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80C24560: lwz     r5, 32(r3)
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
label_80C24564:
    ctx->pc = 0x80C24564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80C24564: stfs     f27, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24564u)) return;
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
label_80C24568:
    ctx->pc = 0x80C24568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80C24568: stfs     f28, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24568u)) return;
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
label_80C2456C:
    ctx->pc = 0x80C2456Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2456Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80C2456C: stfs     f29, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C2456Cu)) return;
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
label_80C24570:
    ctx->pc = 0x80C24570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80C24570: stfs     f30, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24570u)) return;
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
label_80C24574:
    ctx->pc = 0x80C24574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80C24574: stfs     f31, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24574u)) return;
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
label_80C24578:
    ctx->pc = 0x80C24578u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24578u)) return;
    // 80C24578: lis     r4, -27458
    ctx->gpr[4] = ((u32)(s32)(-27458) << 16);

label_80C2457C:
    ctx->pc = 0x80C2457Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2457Cu)) return;
    // 80C2457C: addi    r4, r4, -11496
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11496);

label_80C24580:
    ctx->pc = 0x80C24580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80C24580: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80C24580u)) return;
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
label_80C24584:
    ctx->pc = 0x80C24584u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24584u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C24584: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80C24584u)) return;
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
label_80C24588:
    ctx->pc = 0x80C24588u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24588u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80C24588: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C24588u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80C24588u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2458C:
    ctx->pc = 0x80C2458Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2458Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C2458C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2458Cu)) return;
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
label_80C24590:
    ctx->pc = 0x80C24590u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24590u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C24590: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C24590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80C24590u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24594:
    ctx->pc = 0x80C24594u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24594u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24594: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C24594u)) return;
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
label_80C24598:
    ctx->pc = 0x80C24598u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24598u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24598: psq_l   f29, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C24598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80C24598u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2459C:
    ctx->pc = 0x80C2459Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2459Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C2459C: lfd     f29, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C2459Cu)) return;
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
label_80C245A0:
    ctx->pc = 0x80C245A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C245A0: psq_l   f28, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C245A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x80C245A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C245A4:
    ctx->pc = 0x80C245A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C245A4: lfd     f28, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C245A4u)) return;
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
label_80C245A8:
    ctx->pc = 0x80C245A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C245A8: psq_l   f27, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80C245A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x80C245A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C245AC:
    ctx->pc = 0x80C245ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C245AC: lfd     f27, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80C245ACu)) return;
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
label_80C245B0:
    ctx->pc = 0x80C245B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C245B0: lwz     r0, 100(r1)
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
label_80C245B4:
    ctx->pc = 0x80C245B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C245B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C245B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C245B8:
    ctx->pc = 0x80C245B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245B8u)) return;
    // 80C245B8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80C245BC:
    ctx->pc = 0x80C245BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245BCu)) return;
    // 80C245BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C245C0:
    ctx->pc = 0x80C245C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C245C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C245C0: lwz     r3, 32(r3)
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
label_80C245C4:
    ctx->pc = 0x80C245C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C245C4: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C245C4u)) return;
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
label_80C245C8:
    ctx->pc = 0x80C245C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245C8u)) return;
    // 80C245C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C245CC:
    ctx->pc = 0x80C245CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C245CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C245CC: lwz     r3, 32(r3)
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
label_80C245D0:
    ctx->pc = 0x80C245D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C245D0: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C245D0u)) return;
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
label_80C245D4:
    ctx->pc = 0x80C245D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245D4u)) return;
    // 80C245D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C245D8:
    ctx->pc = 0x80C245D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C245D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C245D8: lwz     r3, 32(r3)
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
label_80C245DC:
    ctx->pc = 0x80C245DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C245DC: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C245DCu)) return;
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
label_80C245E0:
    ctx->pc = 0x80C245E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C245E0: stfs     f2, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C245E0u)) return;
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
label_80C245E4:
    ctx->pc = 0x80C245E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C245E4: stfs     f3, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C245E4u)) return;
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
label_80C245E8:
    ctx->pc = 0x80C245E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245E8u)) return;
    // 80C245E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C245EC:
    ctx->pc = 0x80C245ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C245ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C245EC: lwz     r3, 32(r3)
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
label_80C245F0:
    ctx->pc = 0x80C245F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C245F0: stfs     f1, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80C245F0u)) return;
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
label_80C245F4:
    ctx->pc = 0x80C245F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245F4u)) return;
    // 80C245F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C245F8:
    ctx->pc = 0x80C245F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C245F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C245F8: stwu     r1, -16(r1)
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
label_80C245FC:
    ctx->pc = 0x80C245FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C245FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C245FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24600:
    ctx->pc = 0x80C24600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24600: stw     r0, 20(r1)
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
label_80C24604:
    ctx->pc = 0x80C24604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24604u)) return;
    // 80C24604: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C24608:
    ctx->pc = 0x80C24608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24608u)) return;
    // 80C24608: bl      0x80607948
    {
            ctx->lr = 0x80C2460Cu;
            ctx->pc = 0x80607948u;
            return;
    }

label_80C2460C:
    ctx->pc = 0x80C2460Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2460Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2460C: lwz     r0, 20(r1)
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
label_80C24610:
    ctx->pc = 0x80C24610u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24610u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24610: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24614:
    ctx->pc = 0x80C24614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24614u)) return;
    // 80C24614: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24618:
    ctx->pc = 0x80C24618u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24618u)) return;
    // 80C24618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C2461C:
    ctx->pc = 0x80C2461Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2461Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2461C: stwu     r1, -16(r1)
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
label_80C24620:
    ctx->pc = 0x80C24620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24620u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24620: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24624:
    ctx->pc = 0x80C24624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24624u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24624: stw     r0, 20(r1)
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
label_80C24628:
    ctx->pc = 0x80C24628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24628: lwz     r3, 32(r3)
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
label_80C2462C:
    ctx->pc = 0x80C2462Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2462Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C2462C: lwz     r3, 16(r3)
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
label_80C24630:
    ctx->pc = 0x80C24630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24630u)) return;
    // 80C24630: bl      0x80509CF0
    {
            ctx->lr = 0x80C24634u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80C24634:
    ctx->pc = 0x80C24634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24634: lwz     r0, 20(r1)
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
label_80C24638:
    ctx->pc = 0x80C24638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24638: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2463C:
    ctx->pc = 0x80C2463Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2463Cu)) return;
    // 80C2463C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24640:
    ctx->pc = 0x80C24640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24640u)) return;
    // 80C24640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24644:
    ctx->pc = 0x80C24644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24644: stwu     r1, -32(r1)
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
label_80C24648:
    ctx->pc = 0x80C24648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24648: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C2464C:
    ctx->pc = 0x80C2464Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2464Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2464C: stw     r0, 36(r1)
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
label_80C24650:
    ctx->pc = 0x80C24650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24650: stw     r31, 28(r1)
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
label_80C24654:
    ctx->pc = 0x80C24654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24654: stw     r30, 24(r1)
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
label_80C24658:
    ctx->pc = 0x80C24658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24658u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24658: stw     r29, 20(r1)
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
label_80C2465C:
    ctx->pc = 0x80C2465Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2465Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2465C: lwz     r31, 32(r3)
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
label_80C24660:
    ctx->pc = 0x80C24660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24660u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24660: lwz     r30, 16(r31)
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
label_80C24664:
    ctx->pc = 0x80C24664u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24664u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24664: lwz     r5, 28(r31)
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
label_80C24668:
    ctx->pc = 0x80C24668u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24668u)) return;
    // 80C24668: cmpwi   r5, 0
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

label_80C2466C:
    ctx->pc = 0x80C2466Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2466Cu)) return;
    // 80C2466C: bc    4, 1, 0x80C246A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C246A4;
        }
    }

label_80C24670:
    ctx->pc = 0x80C24670u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24670u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C24670: lwz     r4, 24(r31)
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
label_80C24674:
    ctx->pc = 0x80C24674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24674u)) return;
    // 80C24674: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C24678:
    ctx->pc = 0x80C24678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24678u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C24678: lwz     r0, 20(r31)
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
label_80C2467C:
    ctx->pc = 0x80C2467Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C2467Cu)) return;
    // 80C2467C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C24680:
    ctx->pc = 0x80C24680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24680u)) return;
    // 80C24680: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C24684:
    ctx->pc = 0x80C24684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C24684u)) return;
    // 80C24684: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C24688:
    ctx->pc = 0x80C24688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24688u)) return;
    // 80C24688: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2468C:
    ctx->pc = 0x80C2468Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2468Cu)) return;
    // 80C2468C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C24690:
    ctx->pc = 0x80C24690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24690u)) return;
    // 80C24690: bl      0x80509C74
    {
            ctx->lr = 0x80C24694u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C24694:
    ctx->pc = 0x80C24694u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24694u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24694: stw     r29, 20(r31)
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
label_80C24698:
    ctx->pc = 0x80C24698u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24698u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24698: lwz     r3, 28(r31)
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
label_80C2469C:
    ctx->pc = 0x80C2469Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2469Cu)) return;
    // 80C2469C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C246A0:
    ctx->pc = 0x80C246A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C246A0: stw     r0, 28(r31)
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
label_80C246A4:
    ctx->pc = 0x80C246A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C246A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C246A4: lwz     r5, 40(r31)
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
label_80C246A8:
    ctx->pc = 0x80C246A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246A8u)) return;
    // 80C246A8: cmpwi   r5, 0
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

label_80C246AC:
    ctx->pc = 0x80C246ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246ACu)) return;
    // 80C246AC: bc    4, 1, 0x80C246E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C246E4;
        }
    }

label_80C246B0:
    ctx->pc = 0x80C246B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C246B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C246B0: lwz     r4, 36(r31)
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
label_80C246B4:
    ctx->pc = 0x80C246B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246B4u)) return;
    // 80C246B4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C246B8:
    ctx->pc = 0x80C246B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C246B8: lwz     r0, 32(r31)
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
label_80C246BC:
    ctx->pc = 0x80C246BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C246BCu)) return;
    // 80C246BC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C246C0:
    ctx->pc = 0x80C246C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246C0u)) return;
    // 80C246C0: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C246C4:
    ctx->pc = 0x80C246C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C246C4u)) return;
    // 80C246C4: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C246C8:
    ctx->pc = 0x80C246C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246C8u)) return;
    // 80C246C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C246CC:
    ctx->pc = 0x80C246CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246CCu)) return;
    // 80C246CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C246D0:
    ctx->pc = 0x80C246D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246D0u)) return;
    // 80C246D0: bl      0x80509BF8
    {
            ctx->lr = 0x80C246D4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C246D4:
    ctx->pc = 0x80C246D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C246D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C246D4: stw     r29, 32(r31)
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
label_80C246D8:
    ctx->pc = 0x80C246D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C246D8: lwz     r3, 40(r31)
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
label_80C246DC:
    ctx->pc = 0x80C246DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246DCu)) return;
    // 80C246DC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C246E0:
    ctx->pc = 0x80C246E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C246E0: stw     r0, 40(r31)
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
label_80C246E4:
    ctx->pc = 0x80C246E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C246E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C246E4: lwz     r5, 52(r31)
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
label_80C246E8:
    ctx->pc = 0x80C246E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246E8u)) return;
    // 80C246E8: cmpwi   r5, 0
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

label_80C246EC:
    ctx->pc = 0x80C246ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246ECu)) return;
    // 80C246EC: bc    4, 1, 0x80C24724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24724;
        }
    }

label_80C246F0:
    ctx->pc = 0x80C246F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C246F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80C246F0: lwz     r4, 48(r31)
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
label_80C246F4:
    ctx->pc = 0x80C246F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246F4u)) return;
    // 80C246F4: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80C246F8:
    ctx->pc = 0x80C246F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C246F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80C246F8: lwz     r0, 44(r31)
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
label_80C246FC:
    ctx->pc = 0x80C246FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80C246FCu)) return;
    // 80C246FC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80C24700:
    ctx->pc = 0x80C24700u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24700u)) return;
    // 80C24700: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80C24704:
    ctx->pc = 0x80C24704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80C24704u)) return;
    // 80C24704: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80C24708:
    ctx->pc = 0x80C24708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24708u)) return;
    // 80C24708: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C2470C:
    ctx->pc = 0x80C2470Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2470Cu)) return;
    // 80C2470C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C24710:
    ctx->pc = 0x80C24710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24710u)) return;
    // 80C24710: bl      0x80509B94
    {
            ctx->lr = 0x80C24714u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C24714:
    ctx->pc = 0x80C24714u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24714u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24714: stw     r29, 44(r31)
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
label_80C24718:
    ctx->pc = 0x80C24718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24718u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24718: lwz     r3, 52(r31)
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
label_80C2471C:
    ctx->pc = 0x80C2471Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2471Cu)) return;
    // 80C2471C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80C24720:
    ctx->pc = 0x80C24720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24720u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C24720: stw     r0, 52(r31)
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
label_80C24724:
    ctx->pc = 0x80C24724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24724: lwz     r31, 28(r1)
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
label_80C24728:
    ctx->pc = 0x80C24728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24728: lwz     r30, 24(r1)
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
label_80C2472C:
    ctx->pc = 0x80C2472Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2472Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C2472C: lwz     r29, 20(r1)
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
label_80C24730:
    ctx->pc = 0x80C24730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24730: lwz     r0, 36(r1)
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
label_80C24734:
    ctx->pc = 0x80C24734u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24734u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24734: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24738:
    ctx->pc = 0x80C24738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24738u)) return;
    // 80C24738: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C2473C:
    ctx->pc = 0x80C2473Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2473Cu)) return;
    // 80C2473C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24740:
    ctx->pc = 0x80C24740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24740: stwu     r1, -32(r1)
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
label_80C24744:
    ctx->pc = 0x80C24744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24744u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24744: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24748:
    ctx->pc = 0x80C24748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24748: stw     r0, 36(r1)
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
label_80C2474C:
    ctx->pc = 0x80C2474Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2474Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C2474C: stw     r31, 28(r1)
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
label_80C24750:
    ctx->pc = 0x80C24750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24750u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24750: stw     r30, 24(r1)
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
label_80C24754:
    ctx->pc = 0x80C24754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24754u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24754: stw     r29, 20(r1)
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
label_80C24758:
    ctx->pc = 0x80C24758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24758u)) return;
    // 80C24758: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C2475C:
    ctx->pc = 0x80C2475Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2475Cu)) return;
    // 80C2475C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C24760:
    ctx->pc = 0x80C24760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24760u)) return;
    // 80C24760: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80C24764:
    ctx->pc = 0x80C24764u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24764u)) return;
    // 80C24764: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80C24768:
    ctx->pc = 0x80C24768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24768u)) return;
    // 80C24768: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80C2476C:
    ctx->pc = 0x80C2476Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2476Cu)) return;
    // 80C2476C: bl      0x8050FD60
    {
            ctx->lr = 0x80C24770u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80C24770:
    ctx->pc = 0x80C24770u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24770u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24770: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C24774:
    ctx->pc = 0x80C24774u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24774u)) return;
    // 80C24774: cmplwi  r31, 0x0000
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

label_80C24778:
    ctx->pc = 0x80C24778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24778u)) return;
    // 80C24778: bc    12, 2, 0x80C247DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C247DC;
        }
    }

label_80C2477C:
    ctx->pc = 0x80C2477Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2477Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2477C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C24780:
    ctx->pc = 0x80C24780u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24780u)) return;
    // 80C24780: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C24784:
    ctx->pc = 0x80C24784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24784u)) return;
    // 80C24784: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C24788:
    ctx->pc = 0x80C24788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24788u)) return;
    // 80C24788: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C2478C:
    ctx->pc = 0x80C2478Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2478Cu)) return;
    // 80C2478C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C24790:
    ctx->pc = 0x80C24790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24790u)) return;
    // 80C24790: bl      0x8050A0D4
    {
            ctx->lr = 0x80C24794u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C24794:
    ctx->pc = 0x80C24794u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24794u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80C24794: lis     r3, -32574
    ctx->gpr[3] = ((u32)(s32)(-32574) << 16);

label_80C24798:
    ctx->pc = 0x80C24798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24798u)) return;
    // 80C24798: addi    r0, r3, 17988
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17988);

label_80C2479C:
    ctx->pc = 0x80C2479Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2479Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80C2479C: stw     r0, 16(r31)
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
label_80C247A0:
    ctx->pc = 0x80C247A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247A0u)) return;
    // 80C247A0: lis     r3, -32574
    ctx->gpr[3] = ((u32)(s32)(-32574) << 16);

label_80C247A4:
    ctx->pc = 0x80C247A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247A4u)) return;
    // 80C247A4: addi    r0, r3, 17948
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17948);

label_80C247A8:
    ctx->pc = 0x80C247A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C247A8: stw     r0, 24(r31)
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
label_80C247AC:
    ctx->pc = 0x80C247ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C247AC: lwz     r3, 32(r31)
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
label_80C247B0:
    ctx->pc = 0x80C247B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C247B0: stw     r31, 16(r3)
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
label_80C247B4:
    ctx->pc = 0x80C247B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247B4u)) return;
    // 80C247B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C247B8:
    ctx->pc = 0x80C247B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C247B8: stw     r0, 20(r3)
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
label_80C247BC:
    ctx->pc = 0x80C247BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C247BC: stw     r0, 24(r3)
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
label_80C247C0:
    ctx->pc = 0x80C247C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C247C0: stw     r0, 28(r3)
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
label_80C247C4:
    ctx->pc = 0x80C247C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C247C4: stw     r0, 32(r3)
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
label_80C247C8:
    ctx->pc = 0x80C247C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C247C8: stw     r0, 36(r3)
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
label_80C247CC:
    ctx->pc = 0x80C247CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C247CC: stw     r0, 40(r3)
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
label_80C247D0:
    ctx->pc = 0x80C247D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C247D0: stw     r0, 44(r3)
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
label_80C247D4:
    ctx->pc = 0x80C247D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C247D4: stw     r0, 48(r3)
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
label_80C247D8:
    ctx->pc = 0x80C247D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C247D8: stw     r0, 52(r3)
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
label_80C247DC:
    ctx->pc = 0x80C247DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C247DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80C247DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C247E0:
    ctx->pc = 0x80C247E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C247E0: lwz     r31, 28(r1)
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
label_80C247E4:
    ctx->pc = 0x80C247E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C247E4: lwz     r30, 24(r1)
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
label_80C247E8:
    ctx->pc = 0x80C247E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C247E8: lwz     r29, 20(r1)
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
label_80C247EC:
    ctx->pc = 0x80C247ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C247EC: lwz     r0, 36(r1)
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
label_80C247F0:
    ctx->pc = 0x80C247F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C247F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C247F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C247F4:
    ctx->pc = 0x80C247F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247F4u)) return;
    // 80C247F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C247F8:
    ctx->pc = 0x80C247F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C247F8u)) return;
    // 80C247F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C247FC:
    ctx->pc = 0x80C247FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C247FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C247FC: stwu     r1, -16(r1)
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
label_80C24800:
    ctx->pc = 0x80C24800u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24800u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24800: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24804:
    ctx->pc = 0x80C24804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24804u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24804: stw     r0, 20(r1)
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
label_80C24808:
    ctx->pc = 0x80C24808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24808u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24808: stw     r31, 12(r1)
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
label_80C2480C:
    ctx->pc = 0x80C2480Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2480Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2480C: stw     r30, 8(r1)
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
label_80C24810:
    ctx->pc = 0x80C24810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24810u)) return;
    // 80C24810: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C24814:
    ctx->pc = 0x80C24814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24814u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24814: lwz     r31, 32(r3)
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
label_80C24818:
    ctx->pc = 0x80C24818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24818u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24818: stw     r30, 24(r31)
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
label_80C2481C:
    ctx->pc = 0x80C2481Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2481Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2481C: stw     r5, 28(r31)
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
label_80C24820:
    ctx->pc = 0x80C24820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24820u)) return;
    // 80C24820: cmpwi   r5, 0
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

label_80C24824:
    ctx->pc = 0x80C24824u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24824u)) return;
    // 80C24824: bc    12, 1, 0x80C24834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24834;
        }
    }

label_80C24828:
    ctx->pc = 0x80C24828u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24828u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24828: lwz     r3, 16(r31)
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
label_80C2482C:
    ctx->pc = 0x80C2482Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2482Cu)) return;
    // 80C2482C: bl      0x80509C74
    {
            ctx->lr = 0x80C24830u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C24830:
    ctx->pc = 0x80C24830u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24830u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C24830: stw     r30, 20(r31)
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
label_80C24834:
    ctx->pc = 0x80C24834u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24834u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24834: lwz     r31, 12(r1)
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
label_80C24838:
    ctx->pc = 0x80C24838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24838: lwz     r30, 8(r1)
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
label_80C2483C:
    ctx->pc = 0x80C2483Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2483Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2483C: lwz     r0, 20(r1)
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
label_80C24840:
    ctx->pc = 0x80C24840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24840: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24844:
    ctx->pc = 0x80C24844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24844u)) return;
    // 80C24844: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24848:
    ctx->pc = 0x80C24848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24848u)) return;
    // 80C24848: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C2484C:
    ctx->pc = 0x80C2484Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2484Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2484C: stwu     r1, -16(r1)
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
label_80C24850:
    ctx->pc = 0x80C24850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24850: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24854:
    ctx->pc = 0x80C24854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24854: stw     r0, 20(r1)
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
label_80C24858:
    ctx->pc = 0x80C24858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24858: stw     r31, 12(r1)
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
label_80C2485C:
    ctx->pc = 0x80C2485Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2485Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2485C: stw     r30, 8(r1)
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
label_80C24860:
    ctx->pc = 0x80C24860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24860u)) return;
    // 80C24860: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C24864:
    ctx->pc = 0x80C24864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24864: lwz     r31, 32(r3)
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
label_80C24868:
    ctx->pc = 0x80C24868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24868: stw     r30, 36(r31)
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
label_80C2486C:
    ctx->pc = 0x80C2486Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2486Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2486C: stw     r5, 40(r31)
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
label_80C24870:
    ctx->pc = 0x80C24870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24870u)) return;
    // 80C24870: cmpwi   r5, 0
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

label_80C24874:
    ctx->pc = 0x80C24874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24874u)) return;
    // 80C24874: bc    12, 1, 0x80C24884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24884;
        }
    }

label_80C24878:
    ctx->pc = 0x80C24878u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24878u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24878: lwz     r3, 16(r31)
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
label_80C2487C:
    ctx->pc = 0x80C2487Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2487Cu)) return;
    // 80C2487C: bl      0x80509BF8
    {
            ctx->lr = 0x80C24880u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C24880:
    ctx->pc = 0x80C24880u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24880u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C24880: stw     r30, 32(r31)
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
label_80C24884:
    ctx->pc = 0x80C24884u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24884u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24884: lwz     r31, 12(r1)
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
label_80C24888:
    ctx->pc = 0x80C24888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24888u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24888: lwz     r30, 8(r1)
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
label_80C2488C:
    ctx->pc = 0x80C2488Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2488Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C2488C: lwz     r0, 20(r1)
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
label_80C24890:
    ctx->pc = 0x80C24890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24890: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24894:
    ctx->pc = 0x80C24894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24894u)) return;
    // 80C24894: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24898:
    ctx->pc = 0x80C24898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24898u)) return;
    // 80C24898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C2489C:
    ctx->pc = 0x80C2489Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2489Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2489C: stwu     r1, -16(r1)
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
label_80C248A0:
    ctx->pc = 0x80C248A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C248A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C248A4:
    ctx->pc = 0x80C248A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C248A4: stw     r0, 20(r1)
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
label_80C248A8:
    ctx->pc = 0x80C248A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C248A8: stw     r31, 12(r1)
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
label_80C248AC:
    ctx->pc = 0x80C248ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C248AC: stw     r30, 8(r1)
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
label_80C248B0:
    ctx->pc = 0x80C248B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248B0u)) return;
    // 80C248B0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C248B4:
    ctx->pc = 0x80C248B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C248B4: lwz     r31, 32(r3)
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
label_80C248B8:
    ctx->pc = 0x80C248B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C248B8: stw     r30, 48(r31)
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
label_80C248BC:
    ctx->pc = 0x80C248BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C248BC: stw     r5, 52(r31)
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
label_80C248C0:
    ctx->pc = 0x80C248C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248C0u)) return;
    // 80C248C0: cmpwi   r5, 0
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

label_80C248C4:
    ctx->pc = 0x80C248C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248C4u)) return;
    // 80C248C4: bc    12, 1, 0x80C248D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C248D4;
        }
    }

label_80C248C8:
    ctx->pc = 0x80C248C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C248C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C248C8: lwz     r3, 16(r31)
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
label_80C248CC:
    ctx->pc = 0x80C248CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248CCu)) return;
    // 80C248CC: bl      0x80509B94
    {
            ctx->lr = 0x80C248D0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C248D0:
    ctx->pc = 0x80C248D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C248D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C248D0: stw     r30, 44(r31)
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
label_80C248D4:
    ctx->pc = 0x80C248D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C248D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C248D4: lwz     r31, 12(r1)
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
label_80C248D8:
    ctx->pc = 0x80C248D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C248D8: lwz     r30, 8(r1)
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
label_80C248DC:
    ctx->pc = 0x80C248DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C248DC: lwz     r0, 20(r1)
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
label_80C248E0:
    ctx->pc = 0x80C248E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C248E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C248E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C248E4:
    ctx->pc = 0x80C248E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248E4u)) return;
    // 80C248E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C248E8:
    ctx->pc = 0x80C248E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248E8u)) return;
    // 80C248E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C248EC:
    ctx->pc = 0x80C248ECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C248ECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C248EC: stwu     r1, -16(r1)
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
label_80C248F0:
    ctx->pc = 0x80C248F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C248F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C248F4:
    ctx->pc = 0x80C248F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C248F4: stw     r0, 20(r1)
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
label_80C248F8:
    ctx->pc = 0x80C248F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C248F8: stw     r31, 12(r1)
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
label_80C248FC:
    ctx->pc = 0x80C248FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C248FCu)) return;
    // 80C248FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C24900:
    ctx->pc = 0x80C24900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24900u)) return;
    // 80C24900: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24904:
    ctx->pc = 0x80C24904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24904u)) return;
    // 80C24904: addi    r4, r4, 24396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24396);

label_80C24908:
    ctx->pc = 0x80C24908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24908u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24908: lwz     r0, 0(r4)
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
label_80C2490C:
    ctx->pc = 0x80C2490Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2490Cu)) return;
    // 80C2490C: cmplwi  r0, 0x0000
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

label_80C24910:
    ctx->pc = 0x80C24910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24910u)) return;
    // 80C24910: bc    4, 2, 0x80C24934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24934;
        }
    }

label_80C24914:
    ctx->pc = 0x80C24914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C24914: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80C24918:
    ctx->pc = 0x80C24918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24918u)) return;
    // 80C24918: bl      0x8050EEC0
    {
            ctx->lr = 0x80C2491Cu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80C2491C:
    ctx->pc = 0x80C2491Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2491Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80C2491C: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24920:
    ctx->pc = 0x80C24920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24920u)) return;
    // 80C24920: addi    r4, r4, 24396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24396);

label_80C24924:
    ctx->pc = 0x80C24924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24924u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C24924: stw     r3, 0(r4)
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
label_80C24928:
    ctx->pc = 0x80C24928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24928u)) return;
    // 80C24928: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C2492C:
    ctx->pc = 0x80C2492Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2492Cu)) return;
    // 80C2492C: addi    r3, r3, 24392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24392);

label_80C24930:
    ctx->pc = 0x80C24930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C24930: stw     r31, 0(r3)
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
label_80C24934:
    ctx->pc = 0x80C24934u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24934u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24934: lwz     r31, 12(r1)
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
label_80C24938:
    ctx->pc = 0x80C24938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24938: lwz     r0, 20(r1)
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
label_80C2493C:
    ctx->pc = 0x80C2493Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C2493Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2493C: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24940:
    ctx->pc = 0x80C24940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24940u)) return;
    // 80C24940: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24944:
    ctx->pc = 0x80C24944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24944u)) return;
    // 80C24944: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24948:
    ctx->pc = 0x80C24948u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24948u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24948: stwu     r1, -32(r1)
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
label_80C2494C:
    ctx->pc = 0x80C2494Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2494Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C2494C: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24950:
    ctx->pc = 0x80C24950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24950u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24950: stw     r0, 36(r1)
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
label_80C24954:
    ctx->pc = 0x80C24954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24954u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24954: stw     r31, 28(r1)
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
label_80C24958:
    ctx->pc = 0x80C24958u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24958u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24958: stw     r30, 24(r1)
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
label_80C2495C:
    ctx->pc = 0x80C2495Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2495Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C2495C: stw     r29, 20(r1)
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
label_80C24960:
    ctx->pc = 0x80C24960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24960u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24960: stw     r28, 16(r1)
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
label_80C24964:
    ctx->pc = 0x80C24964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24964u)) return;
    // 80C24964: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C24968:
    ctx->pc = 0x80C24968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24968u)) return;
    // 80C24968: addi    r30, r3, 24396
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(24396);

label_80C2496C:
    ctx->pc = 0x80C2496Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2496Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C2496C: lwz     r0, 0(r30)
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
label_80C24970:
    ctx->pc = 0x80C24970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24970u)) return;
    // 80C24970: cmplwi  r0, 0x0000
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

label_80C24974:
    ctx->pc = 0x80C24974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24974u)) return;
    // 80C24974: bc    12, 2, 0x80C249D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C249D4;
        }
    }

label_80C24978:
    ctx->pc = 0x80C24978u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24978u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C24978: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80C2497C:
    ctx->pc = 0x80C2497Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C2497Cu)) return;
    // 80C2497C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80C24980:
    ctx->pc = 0x80C24980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24980u)) return;
    // 80C24980: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C24984:
    ctx->pc = 0x80C24984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24984u)) return;
    // 80C24984: addi    r31, r3, 24392
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(24392);

label_80C24988:
    ctx->pc = 0x80C24988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24988u)) return;
    // 80C24988: b       0x80C249A8
    {
            goto label_80C249A8;
    }

label_80C2498C:
    ctx->pc = 0x80C2498Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2498Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80C2498C: lwz     r3, 0(r30)
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
label_80C24990:
    ctx->pc = 0x80C24990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24990: lwzx    r3, r3, r29
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
label_80C24994:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24994u)) return;
    // 80C24994: cmplwi  r3, 0x0000
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

label_80C24998:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24998u)) return;
    // 80C24998: bc    12, 2, 0x80C249A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C249A0;
        }
    }

label_80C2499C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C2499Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C2499C: bl      0x8050F9E0
    {
            ctx->lr = 0x80C249A0u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C249A0:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C249A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80C249A0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80C249A4:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249A4u)) return;
    // 80C249A4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80C249A8:
    ctx->pc = 0x80C249A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C249A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C249A8: lwz     r0, 0(r31)
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
label_80C249AC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249ACu)) return;
    // 80C249AC: cmpw    r28, r0
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

label_80C249B0:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249B0u)) return;
    // 80C249B0: bc    12, 0, 0x80C2498C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2498Cu;
                return;
            }
            goto label_80C2498C;
        }
    }

label_80C249B4:
    ctx->pc = 0x80C249B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C249B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C249B4: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C249B8:
    ctx->pc = 0x80C249B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249B8u)) return;
    // 80C249B8: addi    r3, r3, 24396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24396);

label_80C249BC:
    ctx->pc = 0x80C249BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C249BC: lwz     r3, 0(r3)
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
label_80C249C0:
    ctx->pc = 0x80C249C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249C0u)) return;
    // 80C249C0: bl      0x8050ED40
    {
            ctx->lr = 0x80C249C4u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80C249C4:
    ctx->pc = 0x80C249C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C249C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C249C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C249C8:
    ctx->pc = 0x80C249C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249C8u)) return;
    // 80C249C8: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C249CC:
    ctx->pc = 0x80C249CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249CCu)) return;
    // 80C249CC: addi    r3, r3, 24396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24396);

label_80C249D0:
    ctx->pc = 0x80C249D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C249D0: stw     r0, 0(r3)
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
label_80C249D4:
    ctx->pc = 0x80C249D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C249D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C249D4: lwz     r31, 28(r1)
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
label_80C249D8:
    ctx->pc = 0x80C249D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C249D8: lwz     r30, 24(r1)
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
label_80C249DC:
    ctx->pc = 0x80C249DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C249DC: lwz     r29, 20(r1)
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
label_80C249E0:
    ctx->pc = 0x80C249E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C249E0: lwz     r28, 16(r1)
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
label_80C249E4:
    ctx->pc = 0x80C249E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C249E4: lwz     r0, 36(r1)
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
label_80C249E8:
    ctx->pc = 0x80C249E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C249E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C249E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C249EC:
    ctx->pc = 0x80C249ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249ECu)) return;
    // 80C249EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C249F0:
    ctx->pc = 0x80C249F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249F0u)) return;
    // 80C249F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C249F4:
    ctx->pc = 0x80C249F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C249F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C249F4: stwu     r1, -16(r1)
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
label_80C249F8:
    ctx->pc = 0x80C249F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C249F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C249FC:
    ctx->pc = 0x80C249FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C249FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C249FC: stw     r0, 20(r1)
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
label_80C24A00:
    ctx->pc = 0x80C24A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24A00: stw     r31, 12(r1)
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
label_80C24A04:
    ctx->pc = 0x80C24A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A04u)) return;
    // 80C24A04: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24A08:
    ctx->pc = 0x80C24A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A08u)) return;
    // 80C24A08: addi    r6, r6, 24392
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24392);

label_80C24A0C:
    ctx->pc = 0x80C24A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24A0C: lwz     r0, 0(r6)
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
label_80C24A10:
    ctx->pc = 0x80C24A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A10u)) return;
    // 80C24A10: cmpw    r3, r0
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

label_80C24A14:
    ctx->pc = 0x80C24A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A14u)) return;
    // 80C24A14: bc    4, 0, 0x80C24A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24A50;
        }
    }

label_80C24A18:
    ctx->pc = 0x80C24A18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24A18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C24A18: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24A1C:
    ctx->pc = 0x80C24A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A1Cu)) return;
    // 80C24A1C: addi    r6, r6, 24396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24396);

label_80C24A20:
    ctx->pc = 0x80C24A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24A20: lwz     r6, 0(r6)
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
label_80C24A24:
    ctx->pc = 0x80C24A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A24u)) return;
    // 80C24A24: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C24A28:
    ctx->pc = 0x80C24A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24A28: lwzx    r0, r6, r31
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
label_80C24A2C:
    ctx->pc = 0x80C24A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A2Cu)) return;
    // 80C24A2C: cmplwi  r0, 0x0000
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

label_80C24A30:
    ctx->pc = 0x80C24A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A30u)) return;
    // 80C24A30: bc    4, 2, 0x80C24A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24A50;
        }
    }

label_80C24A34:
    ctx->pc = 0x80C24A34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24A34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24A34: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C24A38:
    ctx->pc = 0x80C24A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A38u)) return;
    // 80C24A38: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C24A3C:
    ctx->pc = 0x80C24A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A3Cu)) return;
    // 80C24A3C: bl      0x80C24740
    {
            ctx->lr = 0x80C24A40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C24740u;
                return;
            }
            goto label_80C24740;
    }

label_80C24A40:
    ctx->pc = 0x80C24A40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24A40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80C24A40: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24A44:
    ctx->pc = 0x80C24A44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A44u)) return;
    // 80C24A44: addi    r4, r4, 24396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24396);

label_80C24A48:
    ctx->pc = 0x80C24A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24A48: lwz     r4, 0(r4)
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
label_80C24A4C:
    ctx->pc = 0x80C24A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C24A4C: stwx    r3, r4, r31
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
label_80C24A50:
    ctx->pc = 0x80C24A50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24A50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24A50: lwz     r31, 12(r1)
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
label_80C24A54:
    ctx->pc = 0x80C24A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24A54: lwz     r0, 20(r1)
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
label_80C24A58:
    ctx->pc = 0x80C24A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24A58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24A58: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24A5C:
    ctx->pc = 0x80C24A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A5Cu)) return;
    // 80C24A5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24A60:
    ctx->pc = 0x80C24A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A60u)) return;
    // 80C24A60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24A64:
    ctx->pc = 0x80C24A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24A64: stwu     r1, -16(r1)
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
label_80C24A68:
    ctx->pc = 0x80C24A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24A68: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24A6C:
    ctx->pc = 0x80C24A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24A6C: stw     r0, 20(r1)
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
label_80C24A70:
    ctx->pc = 0x80C24A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24A70: stw     r31, 12(r1)
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
label_80C24A74:
    ctx->pc = 0x80C24A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A74u)) return;
    // 80C24A74: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24A78:
    ctx->pc = 0x80C24A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A78u)) return;
    // 80C24A78: addi    r4, r4, 24392
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24392);

label_80C24A7C:
    ctx->pc = 0x80C24A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24A7C: lwz     r0, 0(r4)
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
label_80C24A80:
    ctx->pc = 0x80C24A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A80u)) return;
    // 80C24A80: cmpw    r3, r0
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

label_80C24A84:
    ctx->pc = 0x80C24A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A84u)) return;
    // 80C24A84: bc    4, 0, 0x80C24ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24ABC;
        }
    }

label_80C24A88:
    ctx->pc = 0x80C24A88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24A88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C24A88: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24A8C:
    ctx->pc = 0x80C24A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A8Cu)) return;
    // 80C24A8C: addi    r4, r4, 24396
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24396);

label_80C24A90:
    ctx->pc = 0x80C24A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24A90: lwz     r4, 0(r4)
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
label_80C24A94:
    ctx->pc = 0x80C24A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A94u)) return;
    // 80C24A94: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C24A98:
    ctx->pc = 0x80C24A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24A98: lwzx    r3, r4, r31
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
label_80C24A9C:
    ctx->pc = 0x80C24A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24A9Cu)) return;
    // 80C24A9C: cmplwi  r3, 0x0000
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

label_80C24AA0:
    ctx->pc = 0x80C24AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AA0u)) return;
    // 80C24AA0: bc    12, 2, 0x80C24ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24ABC;
        }
    }

label_80C24AA4:
    ctx->pc = 0x80C24AA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24AA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24AA4: bl      0x8050F9E0
    {
            ctx->lr = 0x80C24AA8u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80C24AA8:
    ctx->pc = 0x80C24AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80C24AA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80C24AAC:
    ctx->pc = 0x80C24AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AACu)) return;
    // 80C24AAC: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C24AB0:
    ctx->pc = 0x80C24AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AB0u)) return;
    // 80C24AB0: addi    r3, r3, 24396
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24396);

label_80C24AB4:
    ctx->pc = 0x80C24AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80C24AB4: lwz     r3, 0(r3)
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
label_80C24AB8:
    ctx->pc = 0x80C24AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80C24AB8: stwx    r0, r3, r31
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
label_80C24ABC:
    ctx->pc = 0x80C24ABCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24ABCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24ABC: lwz     r31, 12(r1)
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
label_80C24AC0:
    ctx->pc = 0x80C24AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AC0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24AC0: lwz     r0, 20(r1)
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
label_80C24AC4:
    ctx->pc = 0x80C24AC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24AC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24AC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24AC8:
    ctx->pc = 0x80C24AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AC8u)) return;
    // 80C24AC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24ACC:
    ctx->pc = 0x80C24ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24ACCu)) return;
    // 80C24ACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24AD0:
    ctx->pc = 0x80C24AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24AD0: stwu     r1, -16(r1)
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
label_80C24AD4:
    ctx->pc = 0x80C24AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24AD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24AD8:
    ctx->pc = 0x80C24AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24AD8: stw     r0, 20(r1)
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
label_80C24ADC:
    ctx->pc = 0x80C24ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24ADCu)) return;
    // 80C24ADC: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24AE0:
    ctx->pc = 0x80C24AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AE0u)) return;
    // 80C24AE0: addi    r6, r6, 24392
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24392);

label_80C24AE4:
    ctx->pc = 0x80C24AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24AE4: lwz     r0, 0(r6)
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
label_80C24AE8:
    ctx->pc = 0x80C24AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AE8u)) return;
    // 80C24AE8: cmpw    r3, r0
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

label_80C24AEC:
    ctx->pc = 0x80C24AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AECu)) return;
    // 80C24AEC: bc    4, 0, 0x80C24B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24B10;
        }
    }

label_80C24AF0:
    ctx->pc = 0x80C24AF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24AF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C24AF0: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24AF4:
    ctx->pc = 0x80C24AF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AF4u)) return;
    // 80C24AF4: addi    r6, r6, 24396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24396);

label_80C24AF8:
    ctx->pc = 0x80C24AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24AF8: lwz     r6, 0(r6)
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
label_80C24AFC:
    ctx->pc = 0x80C24AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24AFCu)) return;
    // 80C24AFC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C24B00:
    ctx->pc = 0x80C24B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24B00: lwzx    r3, r6, r0
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
label_80C24B04:
    ctx->pc = 0x80C24B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B04u)) return;
    // 80C24B04: cmplwi  r3, 0x0000
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

label_80C24B08:
    ctx->pc = 0x80C24B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B08u)) return;
    // 80C24B08: bc    12, 2, 0x80C24B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24B10;
        }
    }

label_80C24B0C:
    ctx->pc = 0x80C24B0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24B0C: bl      0x80C247FC
    {
            ctx->lr = 0x80C24B10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C247FCu;
                return;
            }
            goto label_80C247FC;
    }

label_80C24B10:
    ctx->pc = 0x80C24B10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24B10: lwz     r0, 20(r1)
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
label_80C24B14:
    ctx->pc = 0x80C24B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24B14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24B14: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24B18:
    ctx->pc = 0x80C24B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B18u)) return;
    // 80C24B18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24B1C:
    ctx->pc = 0x80C24B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B1Cu)) return;
    // 80C24B1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24B20:
    ctx->pc = 0x80C24B20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24B20: stwu     r1, -16(r1)
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
label_80C24B24:
    ctx->pc = 0x80C24B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24B24: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24B28:
    ctx->pc = 0x80C24B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24B28: stw     r0, 20(r1)
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
label_80C24B2C:
    ctx->pc = 0x80C24B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B2Cu)) return;
    // 80C24B2C: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24B30:
    ctx->pc = 0x80C24B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B30u)) return;
    // 80C24B30: addi    r6, r6, 24392
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24392);

label_80C24B34:
    ctx->pc = 0x80C24B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24B34: lwz     r0, 0(r6)
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
label_80C24B38:
    ctx->pc = 0x80C24B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B38u)) return;
    // 80C24B38: cmpw    r3, r0
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

label_80C24B3C:
    ctx->pc = 0x80C24B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B3Cu)) return;
    // 80C24B3C: bc    4, 0, 0x80C24B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24B60;
        }
    }

label_80C24B40:
    ctx->pc = 0x80C24B40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C24B40: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24B44:
    ctx->pc = 0x80C24B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B44u)) return;
    // 80C24B44: addi    r6, r6, 24396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24396);

label_80C24B48:
    ctx->pc = 0x80C24B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24B48: lwz     r6, 0(r6)
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
label_80C24B4C:
    ctx->pc = 0x80C24B4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B4Cu)) return;
    // 80C24B4C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C24B50:
    ctx->pc = 0x80C24B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24B50: lwzx    r3, r6, r0
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
label_80C24B54:
    ctx->pc = 0x80C24B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B54u)) return;
    // 80C24B54: cmplwi  r3, 0x0000
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

label_80C24B58:
    ctx->pc = 0x80C24B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B58u)) return;
    // 80C24B58: bc    12, 2, 0x80C24B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24B60;
        }
    }

label_80C24B5C:
    ctx->pc = 0x80C24B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24B5C: bl      0x80C2484C
    {
            ctx->lr = 0x80C24B60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2484Cu;
                return;
            }
            goto label_80C2484C;
    }

label_80C24B60:
    ctx->pc = 0x80C24B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24B60: lwz     r0, 20(r1)
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
label_80C24B64:
    ctx->pc = 0x80C24B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24B64: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24B68:
    ctx->pc = 0x80C24B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B68u)) return;
    // 80C24B68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24B6C:
    ctx->pc = 0x80C24B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B6Cu)) return;
    // 80C24B6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24B70:
    ctx->pc = 0x80C24B70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24B70: stwu     r1, -16(r1)
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
label_80C24B74:
    ctx->pc = 0x80C24B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24B74: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24B78:
    ctx->pc = 0x80C24B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24B78: stw     r0, 20(r1)
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
label_80C24B7C:
    ctx->pc = 0x80C24B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B7Cu)) return;
    // 80C24B7C: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24B80:
    ctx->pc = 0x80C24B80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B80u)) return;
    // 80C24B80: addi    r6, r6, 24392
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24392);

label_80C24B84:
    ctx->pc = 0x80C24B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24B84: lwz     r0, 0(r6)
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
label_80C24B88:
    ctx->pc = 0x80C24B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B88u)) return;
    // 80C24B88: cmpw    r3, r0
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

label_80C24B8C:
    ctx->pc = 0x80C24B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B8Cu)) return;
    // 80C24B8C: bc    4, 0, 0x80C24BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80C24BB0;
        }
    }

label_80C24B90:
    ctx->pc = 0x80C24B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80C24B90: lis     r6, -27457
    ctx->gpr[6] = ((u32)(s32)(-27457) << 16);

label_80C24B94:
    ctx->pc = 0x80C24B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B94u)) return;
    // 80C24B94: addi    r6, r6, 24396
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(24396);

label_80C24B98:
    ctx->pc = 0x80C24B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24B98: lwz     r6, 0(r6)
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
label_80C24B9C:
    ctx->pc = 0x80C24B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24B9Cu)) return;
    // 80C24B9C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80C24BA0:
    ctx->pc = 0x80C24BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24BA0: lwzx    r3, r6, r0
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
label_80C24BA4:
    ctx->pc = 0x80C24BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BA4u)) return;
    // 80C24BA4: cmplwi  r3, 0x0000
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

label_80C24BA8:
    ctx->pc = 0x80C24BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BA8u)) return;
    // 80C24BA8: bc    12, 2, 0x80C24BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80C24BB0;
        }
    }

label_80C24BAC:
    ctx->pc = 0x80C24BACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24BACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80C24BAC: bl      0x80C2489C
    {
            ctx->lr = 0x80C24BB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80C2489Cu;
                return;
            }
            goto label_80C2489C;
    }

label_80C24BB0:
    ctx->pc = 0x80C24BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24BB0: lwz     r0, 20(r1)
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
label_80C24BB4:
    ctx->pc = 0x80C24BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24BB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24BB8:
    ctx->pc = 0x80C24BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BB8u)) return;
    // 80C24BB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80C24BBC:
    ctx->pc = 0x80C24BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BBCu)) return;
    // 80C24BBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

label_80C24BC0:
    ctx->pc = 0x80C24BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80C24BC0: stwu     r1, -32(r1)
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
label_80C24BC4:
    ctx->pc = 0x80C24BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24BC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24BC8:
    ctx->pc = 0x80C24BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80C24BC8: stw     r0, 36(r1)
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
label_80C24BCC:
    ctx->pc = 0x80C24BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24BCC: stw     r31, 28(r1)
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
label_80C24BD0:
    ctx->pc = 0x80C24BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24BD0: stw     r30, 24(r1)
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
label_80C24BD4:
    ctx->pc = 0x80C24BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BD4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24BD4: stw     r29, 20(r1)
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
label_80C24BD8:
    ctx->pc = 0x80C24BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24BD8: stw     r28, 16(r1)
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
label_80C24BDC:
    ctx->pc = 0x80C24BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BDCu)) return;
    // 80C24BDC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80C24BE0:
    ctx->pc = 0x80C24BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BE0u)) return;
    // 80C24BE0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C24BE4:
    ctx->pc = 0x80C24BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BE4u)) return;
    // 80C24BE4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80C24BE8:
    ctx->pc = 0x80C24BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BE8u)) return;
    // 80C24BE8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80C24BEC:
    ctx->pc = 0x80C24BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BECu)) return;
    // 80C24BEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80C24BF0:
    ctx->pc = 0x80C24BF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BF0u)) return;
    // 80C24BF0: bl      0x80401DB0
    {
            ctx->lr = 0x80C24BF4u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80C24BF4:
    ctx->pc = 0x80C24BF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24BF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80C24BF4: lis     r4, -27457
    ctx->gpr[4] = ((u32)(s32)(-27457) << 16);

label_80C24BF8:
    ctx->pc = 0x80C24BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BF8u)) return;
    // 80C24BF8: addi    r4, r4, 24400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24400);

label_80C24BFC:
    ctx->pc = 0x80C24BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24BFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24BFC: lwz     r0, 0(r4)
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
label_80C24C00:
    ctx->pc = 0x80C24C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C00u)) return;
    // 80C24C00: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80C24C04:
    ctx->pc = 0x80C24C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C04u)) return;
    // 80C24C04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C24C08:
    ctx->pc = 0x80C24C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C08u)) return;
    // 80C24C08: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80C24C0C:
    ctx->pc = 0x80C24C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C0Cu)) return;
    // 80C24C0C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80C24C10:
    ctx->pc = 0x80C24C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C10u)) return;
    // 80C24C10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80C24C14:
    ctx->pc = 0x80C24C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C14u)) return;
    // 80C24C14: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80C24C18:
    ctx->pc = 0x80C24C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C18u)) return;
    // 80C24C18: bl      0x8050A0D4
    {
            ctx->lr = 0x80C24C1Cu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80C24C1C:
    ctx->pc = 0x80C24C1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24C1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24C1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C24C20:
    ctx->pc = 0x80C24C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C20u)) return;
    // 80C24C20: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80C24C24:
    ctx->pc = 0x80C24C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C24u)) return;
    // 80C24C24: bl      0x80509C74
    {
            ctx->lr = 0x80C24C28u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80C24C28:
    ctx->pc = 0x80C24C28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24C28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24C28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C24C2C:
    ctx->pc = 0x80C24C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C2Cu)) return;
    // 80C24C2C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80C24C30:
    ctx->pc = 0x80C24C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C30u)) return;
    // 80C24C30: bl      0x80509BF8
    {
            ctx->lr = 0x80C24C34u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80C24C34:
    ctx->pc = 0x80C24C34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24C34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80C24C34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80C24C38:
    ctx->pc = 0x80C24C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C38u)) return;
    // 80C24C38: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80C24C3C:
    ctx->pc = 0x80C24C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C3Cu)) return;
    // 80C24C3C: bl      0x80509B94
    {
            ctx->lr = 0x80C24C40u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80C24C40:
    ctx->pc = 0x80C24C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80C24C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80C24C40: lis     r3, -27457
    ctx->gpr[3] = ((u32)(s32)(-27457) << 16);

label_80C24C44:
    ctx->pc = 0x80C24C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C44u)) return;
    // 80C24C44: addi    r4, r3, 24400
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24400);

label_80C24C48:
    ctx->pc = 0x80C24C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80C24C48: lwz     r3, 0(r4)
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
label_80C24C4C:
    ctx->pc = 0x80C24C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C4Cu)) return;
    // 80C24C4C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80C24C50:
    ctx->pc = 0x80C24C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80C24C50: stw     r0, 0(r4)
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
label_80C24C54:
    ctx->pc = 0x80C24C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C54u)) return;
    // 80C24C54: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80C24C58:
    ctx->pc = 0x80C24C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80C24C58: stw     r0, 0(r4)
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
label_80C24C5C:
    ctx->pc = 0x80C24C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80C24C5C: lwz     r31, 28(r1)
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
label_80C24C60:
    ctx->pc = 0x80C24C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80C24C60: lwz     r30, 24(r1)
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
label_80C24C64:
    ctx->pc = 0x80C24C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80C24C64: lwz     r29, 20(r1)
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
label_80C24C68:
    ctx->pc = 0x80C24C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80C24C68: lwz     r28, 16(r1)
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
label_80C24C6C:
    ctx->pc = 0x80C24C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80C24C6C: lwz     r0, 36(r1)
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
label_80C24C70:
    ctx->pc = 0x80C24C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80C24C70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80C24C70: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80C24C74:
    ctx->pc = 0x80C24C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C74u)) return;
    // 80C24C74: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80C24C78:
    ctx->pc = 0x80C24C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80C24C78u)) return;
    // 80C24C78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80C23860;
        }
    }

    ctx->pc = 0x80C24C7Cu;
    return;
return_dispatch_80C23860:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80C238A8u: goto label_80C238A8;
    case 0x80C238B0u: goto label_80C238B0;
    case 0x80C238B4u: goto label_80C238B4;
    case 0x80C238B8u: goto label_80C238B8;
    case 0x80C238BCu: goto label_80C238BC;
    case 0x80C238C4u: goto label_80C238C4;
    case 0x80C238CCu: goto label_80C238CC;
    case 0x80C238ECu: goto label_80C238EC;
    case 0x80C238F4u: goto label_80C238F4;
    case 0x80C23904u: goto label_80C23904;
    case 0x80C23948u: goto label_80C23948;
    case 0x80C23950u: goto label_80C23950;
    case 0x80C23958u: goto label_80C23958;
    case 0x80C23978u: goto label_80C23978;
    case 0x80C23998u: goto label_80C23998;
    case 0x80C239D0u: goto label_80C239D0;
    case 0x80C23A04u: goto label_80C23A04;
    case 0x80C23A18u: goto label_80C23A18;
    case 0x80C23A34u: goto label_80C23A34;
    case 0x80C23A3Cu: goto label_80C23A3C;
    case 0x80C23A64u: goto label_80C23A64;
    case 0x80C23A6Cu: goto label_80C23A6C;
    case 0x80C23A9Cu: goto label_80C23A9C;
    case 0x80C23AB4u: goto label_80C23AB4;
    case 0x80C23AC4u: goto label_80C23AC4;
    case 0x80C23ACCu: goto label_80C23ACC;
    case 0x80C23ADCu: goto label_80C23ADC;
    case 0x80C23AE4u: goto label_80C23AE4;
    case 0x80C23AECu: goto label_80C23AEC;
    case 0x80C23AF8u: goto label_80C23AF8;
    case 0x80C23B00u: goto label_80C23B00;
    case 0x80C23B24u: goto label_80C23B24;
    case 0x80C23B2Cu: goto label_80C23B2C;
    case 0x80C23B30u: goto label_80C23B30;
    case 0x80C23B38u: goto label_80C23B38;
    case 0x80C23B3Cu: goto label_80C23B3C;
    case 0x80C23B40u: goto label_80C23B40;
    case 0x80C23B70u: goto label_80C23B70;
    case 0x80C23B88u: goto label_80C23B88;
    case 0x80C23BA0u: goto label_80C23BA0;
    case 0x80C23BA8u: goto label_80C23BA8;
    case 0x80C23BCCu: goto label_80C23BCC;
    case 0x80C23BD4u: goto label_80C23BD4;
    case 0x80C23BD8u: goto label_80C23BD8;
    case 0x80C23BDCu: goto label_80C23BDC;
    case 0x80C23BE4u: goto label_80C23BE4;
    case 0x80C23BECu: goto label_80C23BEC;
    case 0x80C23C10u: goto label_80C23C10;
    case 0x80C23C18u: goto label_80C23C18;
    case 0x80C23C48u: goto label_80C23C48;
    case 0x80C23C64u: goto label_80C23C64;
    case 0x80C23C6Cu: goto label_80C23C6C;
    case 0x80C23C70u: goto label_80C23C70;
    case 0x80C23CA0u: goto label_80C23CA0;
    case 0x80C23CA8u: goto label_80C23CA8;
    case 0x80C23CB0u: goto label_80C23CB0;
    case 0x80C23CBCu: goto label_80C23CBC;
    case 0x80C23CE0u: goto label_80C23CE0;
    case 0x80C23CE8u: goto label_80C23CE8;
    case 0x80C23CECu: goto label_80C23CEC;
    case 0x80C23CF4u: goto label_80C23CF4;
    case 0x80C23CF8u: goto label_80C23CF8;
    case 0x80C23CFCu: goto label_80C23CFC;
    case 0x80C23D04u: goto label_80C23D04;
    case 0x80C23D08u: goto label_80C23D08;
    case 0x80C23D10u: goto label_80C23D10;
    case 0x80C23D38u: goto label_80C23D38;
    case 0x80C23D40u: goto label_80C23D40;
    case 0x80C23D68u: goto label_80C23D68;
    case 0x80C23D98u: goto label_80C23D98;
    case 0x80C23DB0u: goto label_80C23DB0;
    case 0x80C23DB8u: goto label_80C23DB8;
    case 0x80C23DCCu: goto label_80C23DCC;
    case 0x80C23DFCu: goto label_80C23DFC;
    case 0x80C23E18u: goto label_80C23E18;
    case 0x80C23E20u: goto label_80C23E20;
    case 0x80C23E28u: goto label_80C23E28;
    case 0x80C23E34u: goto label_80C23E34;
    case 0x80C23E58u: goto label_80C23E58;
    case 0x80C23E60u: goto label_80C23E60;
    case 0x80C23E64u: goto label_80C23E64;
    case 0x80C23E6Cu: goto label_80C23E6C;
    case 0x80C23E70u: goto label_80C23E70;
    case 0x80C23E78u: goto label_80C23E78;
    case 0x80C23E80u: goto label_80C23E80;
    case 0x80C23E9Cu: goto label_80C23E9C;
    case 0x80C23EA8u: goto label_80C23EA8;
    case 0x80C23EC4u: goto label_80C23EC4;
    case 0x80C23ED0u: goto label_80C23ED0;
    case 0x80C23EF4u: goto label_80C23EF4;
    case 0x80C23EFCu: goto label_80C23EFC;
    case 0x80C23F00u: goto label_80C23F00;
    case 0x80C23F04u: goto label_80C23F04;
    case 0x80C23F20u: goto label_80C23F20;
    case 0x80C23F24u: goto label_80C23F24;
    case 0x80C23F40u: goto label_80C23F40;
    case 0x80C23F44u: goto label_80C23F44;
    case 0x80C23F48u: goto label_80C23F48;
    case 0x80C23F78u: goto label_80C23F78;
    case 0x80C23F94u: goto label_80C23F94;
    case 0x80C23FC4u: goto label_80C23FC4;
    case 0x80C23FE0u: goto label_80C23FE0;
    case 0x80C23FE8u: goto label_80C23FE8;
    case 0x80C23FF0u: goto label_80C23FF0;
    case 0x80C23FFCu: goto label_80C23FFC;
    case 0x80C24020u: goto label_80C24020;
    case 0x80C24028u: goto label_80C24028;
    case 0x80C2405Cu: goto label_80C2405C;
    case 0x80C24090u: goto label_80C24090;
    case 0x80C24094u: goto label_80C24094;
    case 0x80C2409Cu: goto label_80C2409C;
    case 0x80C240A0u: goto label_80C240A0;
    case 0x80C240D0u: goto label_80C240D0;
    case 0x80C240ECu: goto label_80C240EC;
    case 0x80C240F4u: goto label_80C240F4;
    case 0x80C24100u: goto label_80C24100;
    case 0x80C24108u: goto label_80C24108;
    case 0x80C24114u: goto label_80C24114;
    case 0x80C2411Cu: goto label_80C2411C;
    case 0x80C24140u: goto label_80C24140;
    case 0x80C24148u: goto label_80C24148;
    case 0x80C2414Cu: goto label_80C2414C;
    case 0x80C24168u: goto label_80C24168;
    case 0x80C2416Cu: goto label_80C2416C;
    case 0x80C24188u: goto label_80C24188;
    case 0x80C2418Cu: goto label_80C2418C;
    case 0x80C24190u: goto label_80C24190;
    case 0x80C241C0u: goto label_80C241C0;
    case 0x80C241D8u: goto label_80C241D8;
    case 0x80C241E8u: goto label_80C241E8;
    case 0x80C241F0u: goto label_80C241F0;
    case 0x80C24220u: goto label_80C24220;
    case 0x80C24230u: goto label_80C24230;
    case 0x80C24238u: goto label_80C24238;
    case 0x80C24248u: goto label_80C24248;
    case 0x80C24278u: goto label_80C24278;
    case 0x80C2428Cu: goto label_80C2428C;
    case 0x80C24294u: goto label_80C24294;
    case 0x80C24298u: goto label_80C24298;
    case 0x80C2429Cu: goto label_80C2429C;
    case 0x80C242B4u: goto label_80C242B4;
    case 0x80C242CCu: goto label_80C242CC;
    case 0x80C242D4u: goto label_80C242D4;
    case 0x80C242E0u: goto label_80C242E0;
    case 0x80C24314u: goto label_80C24314;
    case 0x80C243A0u: goto label_80C243A0;
    case 0x80C243ACu: goto label_80C243AC;
    case 0x80C2443Cu: goto label_80C2443C;
    case 0x80C24444u: goto label_80C24444;
    case 0x80C244ACu: goto label_80C244AC;
    case 0x80C244F4u: goto label_80C244F4;
    case 0x80C24560u: goto label_80C24560;
    case 0x80C2460Cu: goto label_80C2460C;
    case 0x80C24634u: goto label_80C24634;
    case 0x80C24694u: goto label_80C24694;
    case 0x80C246D4u: goto label_80C246D4;
    case 0x80C24714u: goto label_80C24714;
    case 0x80C24770u: goto label_80C24770;
    case 0x80C24794u: goto label_80C24794;
    case 0x80C24830u: goto label_80C24830;
    case 0x80C24880u: goto label_80C24880;
    case 0x80C248D0u: goto label_80C248D0;
    case 0x80C2491Cu: goto label_80C2491C;
    case 0x80C249A0u: goto label_80C249A0;
    case 0x80C249C4u: goto label_80C249C4;
    case 0x80C24A40u: goto label_80C24A40;
    case 0x80C24AA8u: goto label_80C24AA8;
    case 0x80C24B10u: goto label_80C24B10;
    case 0x80C24B60u: goto label_80C24B60;
    case 0x80C24BB0u: goto label_80C24BB0;
    case 0x80C24BF4u: goto label_80C24BF4;
    case 0x80C24C1Cu: goto label_80C24C1C;
    case 0x80C24C28u: goto label_80C24C28;
    case 0x80C24C34u: goto label_80C24C34;
    case 0x80C24C40u: goto label_80C24C40;
    default: return;
    }
}

