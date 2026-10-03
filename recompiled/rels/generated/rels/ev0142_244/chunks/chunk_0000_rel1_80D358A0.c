// DolRecomp output
#include "../generated.h"

void func_80D358A0(CPUState* ctx) {
    bool cycle_block_prepaid = false;
    static void* const pc_table_80D358A0[1505] = {
        &&label_80D358A0,
        &&label_80D358A4,
        &&label_80D358A8,
        &&label_80D358AC,
        &&label_80D358B0,
        &&label_80D358B4,
        &&label_80D358B8,
        &&label_80D358BC,
        &&label_80D358C0,
        &&label_80D358C4,
        &&label_80D358C8,
        &&label_80D358CC,
        &&label_80D358D0,
        &&label_80D358D4,
        &&label_80D358D8,
        &&label_80D358DC,
        &&label_80D358E0,
        &&label_80D358E4,
        &&label_80D358E8,
        &&label_80D358EC,
        &&label_80D358F0,
        &&label_80D358F4,
        &&label_80D358F8,
        &&label_80D358FC,
        &&label_80D35900,
        &&label_80D35904,
        &&label_80D35908,
        &&label_80D3590C,
        &&label_80D35910,
        &&label_80D35914,
        &&label_80D35918,
        &&label_80D3591C,
        &&label_80D35920,
        &&label_80D35924,
        &&label_80D35928,
        &&label_80D3592C,
        &&label_80D35930,
        &&label_80D35934,
        &&label_80D35938,
        &&label_80D3593C,
        &&label_80D35940,
        &&label_80D35944,
        &&label_80D35948,
        &&label_80D3594C,
        &&label_80D35950,
        &&label_80D35954,
        &&label_80D35958,
        &&label_80D3595C,
        &&label_80D35960,
        &&label_80D35964,
        &&label_80D35968,
        &&label_80D3596C,
        &&label_80D35970,
        &&label_80D35974,
        &&label_80D35978,
        &&label_80D3597C,
        &&label_80D35980,
        &&label_80D35984,
        &&label_80D35988,
        &&label_80D3598C,
        &&label_80D35990,
        &&label_80D35994,
        &&label_80D35998,
        &&label_80D3599C,
        &&label_80D359A0,
        &&label_80D359A4,
        &&label_80D359A8,
        &&label_80D359AC,
        &&label_80D359B0,
        &&label_80D359B4,
        &&label_80D359B8,
        &&label_80D359BC,
        &&label_80D359C0,
        &&label_80D359C4,
        &&label_80D359C8,
        &&label_80D359CC,
        &&label_80D359D0,
        &&label_80D359D4,
        &&label_80D359D8,
        &&label_80D359DC,
        &&label_80D359E0,
        &&label_80D359E4,
        &&label_80D359E8,
        &&label_80D359EC,
        &&label_80D359F0,
        &&label_80D359F4,
        &&label_80D359F8,
        &&label_80D359FC,
        &&label_80D35A00,
        &&label_80D35A04,
        &&label_80D35A08,
        &&label_80D35A0C,
        &&label_80D35A10,
        &&label_80D35A14,
        &&label_80D35A18,
        &&label_80D35A1C,
        &&label_80D35A20,
        &&label_80D35A24,
        &&label_80D35A28,
        &&label_80D35A2C,
        &&label_80D35A30,
        &&label_80D35A34,
        &&label_80D35A38,
        &&label_80D35A3C,
        &&label_80D35A40,
        &&label_80D35A44,
        &&label_80D35A48,
        &&label_80D35A4C,
        &&label_80D35A50,
        &&label_80D35A54,
        &&label_80D35A58,
        &&label_80D35A5C,
        &&label_80D35A60,
        &&label_80D35A64,
        &&label_80D35A68,
        &&label_80D35A6C,
        &&label_80D35A70,
        &&label_80D35A74,
        &&label_80D35A78,
        &&label_80D35A7C,
        &&label_80D35A80,
        &&label_80D35A84,
        &&label_80D35A88,
        &&label_80D35A8C,
        &&label_80D35A90,
        &&label_80D35A94,
        &&label_80D35A98,
        &&label_80D35A9C,
        &&label_80D35AA0,
        &&label_80D35AA4,
        &&label_80D35AA8,
        &&label_80D35AAC,
        &&label_80D35AB0,
        &&label_80D35AB4,
        &&label_80D35AB8,
        &&label_80D35ABC,
        &&label_80D35AC0,
        &&label_80D35AC4,
        &&label_80D35AC8,
        &&label_80D35ACC,
        &&label_80D35AD0,
        &&label_80D35AD4,
        &&label_80D35AD8,
        &&label_80D35ADC,
        &&label_80D35AE0,
        &&label_80D35AE4,
        &&label_80D35AE8,
        &&label_80D35AEC,
        &&label_80D35AF0,
        &&label_80D35AF4,
        &&label_80D35AF8,
        &&label_80D35AFC,
        &&label_80D35B00,
        &&label_80D35B04,
        &&label_80D35B08,
        &&label_80D35B0C,
        &&label_80D35B10,
        &&label_80D35B14,
        &&label_80D35B18,
        &&label_80D35B1C,
        &&label_80D35B20,
        &&label_80D35B24,
        &&label_80D35B28,
        &&label_80D35B2C,
        &&label_80D35B30,
        &&label_80D35B34,
        &&label_80D35B38,
        &&label_80D35B3C,
        &&label_80D35B40,
        &&label_80D35B44,
        &&label_80D35B48,
        &&label_80D35B4C,
        &&label_80D35B50,
        &&label_80D35B54,
        &&label_80D35B58,
        &&label_80D35B5C,
        &&label_80D35B60,
        &&label_80D35B64,
        &&label_80D35B68,
        &&label_80D35B6C,
        &&label_80D35B70,
        &&label_80D35B74,
        &&label_80D35B78,
        &&label_80D35B7C,
        &&label_80D35B80,
        &&label_80D35B84,
        &&label_80D35B88,
        &&label_80D35B8C,
        &&label_80D35B90,
        &&label_80D35B94,
        &&label_80D35B98,
        &&label_80D35B9C,
        &&label_80D35BA0,
        &&label_80D35BA4,
        &&label_80D35BA8,
        &&label_80D35BAC,
        &&label_80D35BB0,
        &&label_80D35BB4,
        &&label_80D35BB8,
        &&label_80D35BBC,
        &&label_80D35BC0,
        &&label_80D35BC4,
        &&label_80D35BC8,
        &&label_80D35BCC,
        &&label_80D35BD0,
        &&label_80D35BD4,
        &&label_80D35BD8,
        &&label_80D35BDC,
        &&label_80D35BE0,
        &&label_80D35BE4,
        &&label_80D35BE8,
        &&label_80D35BEC,
        &&label_80D35BF0,
        &&label_80D35BF4,
        &&label_80D35BF8,
        &&label_80D35BFC,
        &&label_80D35C00,
        &&label_80D35C04,
        &&label_80D35C08,
        &&label_80D35C0C,
        &&label_80D35C10,
        &&label_80D35C14,
        &&label_80D35C18,
        &&label_80D35C1C,
        &&label_80D35C20,
        &&label_80D35C24,
        &&label_80D35C28,
        &&label_80D35C2C,
        &&label_80D35C30,
        &&label_80D35C34,
        &&label_80D35C38,
        &&label_80D35C3C,
        &&label_80D35C40,
        &&label_80D35C44,
        &&label_80D35C48,
        &&label_80D35C4C,
        &&label_80D35C50,
        &&label_80D35C54,
        &&label_80D35C58,
        &&label_80D35C5C,
        &&label_80D35C60,
        &&label_80D35C64,
        &&label_80D35C68,
        &&label_80D35C6C,
        &&label_80D35C70,
        &&label_80D35C74,
        &&label_80D35C78,
        &&label_80D35C7C,
        &&label_80D35C80,
        &&label_80D35C84,
        &&label_80D35C88,
        &&label_80D35C8C,
        &&label_80D35C90,
        &&label_80D35C94,
        &&label_80D35C98,
        &&label_80D35C9C,
        &&label_80D35CA0,
        &&label_80D35CA4,
        &&label_80D35CA8,
        &&label_80D35CAC,
        &&label_80D35CB0,
        &&label_80D35CB4,
        &&label_80D35CB8,
        &&label_80D35CBC,
        &&label_80D35CC0,
        &&label_80D35CC4,
        &&label_80D35CC8,
        &&label_80D35CCC,
        &&label_80D35CD0,
        &&label_80D35CD4,
        &&label_80D35CD8,
        &&label_80D35CDC,
        &&label_80D35CE0,
        &&label_80D35CE4,
        &&label_80D35CE8,
        &&label_80D35CEC,
        &&label_80D35CF0,
        &&label_80D35CF4,
        &&label_80D35CF8,
        &&label_80D35CFC,
        &&label_80D35D00,
        &&label_80D35D04,
        &&label_80D35D08,
        &&label_80D35D0C,
        &&label_80D35D10,
        &&label_80D35D14,
        &&label_80D35D18,
        &&label_80D35D1C,
        &&label_80D35D20,
        &&label_80D35D24,
        &&label_80D35D28,
        &&label_80D35D2C,
        &&label_80D35D30,
        &&label_80D35D34,
        &&label_80D35D38,
        &&label_80D35D3C,
        &&label_80D35D40,
        &&label_80D35D44,
        &&label_80D35D48,
        &&label_80D35D4C,
        &&label_80D35D50,
        &&label_80D35D54,
        &&label_80D35D58,
        &&label_80D35D5C,
        &&label_80D35D60,
        &&label_80D35D64,
        &&label_80D35D68,
        &&label_80D35D6C,
        &&label_80D35D70,
        &&label_80D35D74,
        &&label_80D35D78,
        &&label_80D35D7C,
        &&label_80D35D80,
        &&label_80D35D84,
        &&label_80D35D88,
        &&label_80D35D8C,
        &&label_80D35D90,
        &&label_80D35D94,
        &&label_80D35D98,
        &&label_80D35D9C,
        &&label_80D35DA0,
        &&label_80D35DA4,
        &&label_80D35DA8,
        &&label_80D35DAC,
        &&label_80D35DB0,
        &&label_80D35DB4,
        &&label_80D35DB8,
        &&label_80D35DBC,
        &&label_80D35DC0,
        &&label_80D35DC4,
        &&label_80D35DC8,
        &&label_80D35DCC,
        &&label_80D35DD0,
        &&label_80D35DD4,
        &&label_80D35DD8,
        &&label_80D35DDC,
        &&label_80D35DE0,
        &&label_80D35DE4,
        &&label_80D35DE8,
        &&label_80D35DEC,
        &&label_80D35DF0,
        &&label_80D35DF4,
        &&label_80D35DF8,
        &&label_80D35DFC,
        &&label_80D35E00,
        &&label_80D35E04,
        &&label_80D35E08,
        &&label_80D35E0C,
        &&label_80D35E10,
        &&label_80D35E14,
        &&label_80D35E18,
        &&label_80D35E1C,
        &&label_80D35E20,
        &&label_80D35E24,
        &&label_80D35E28,
        &&label_80D35E2C,
        &&label_80D35E30,
        &&label_80D35E34,
        &&label_80D35E38,
        &&label_80D35E3C,
        &&label_80D35E40,
        &&label_80D35E44,
        &&label_80D35E48,
        &&label_80D35E4C,
        &&label_80D35E50,
        &&label_80D35E54,
        &&label_80D35E58,
        &&label_80D35E5C,
        &&label_80D35E60,
        &&label_80D35E64,
        &&label_80D35E68,
        &&label_80D35E6C,
        &&label_80D35E70,
        &&label_80D35E74,
        &&label_80D35E78,
        &&label_80D35E7C,
        &&label_80D35E80,
        &&label_80D35E84,
        &&label_80D35E88,
        &&label_80D35E8C,
        &&label_80D35E90,
        &&label_80D35E94,
        &&label_80D35E98,
        &&label_80D35E9C,
        &&label_80D35EA0,
        &&label_80D35EA4,
        &&label_80D35EA8,
        &&label_80D35EAC,
        &&label_80D35EB0,
        &&label_80D35EB4,
        &&label_80D35EB8,
        &&label_80D35EBC,
        &&label_80D35EC0,
        &&label_80D35EC4,
        &&label_80D35EC8,
        &&label_80D35ECC,
        &&label_80D35ED0,
        &&label_80D35ED4,
        &&label_80D35ED8,
        &&label_80D35EDC,
        &&label_80D35EE0,
        &&label_80D35EE4,
        &&label_80D35EE8,
        &&label_80D35EEC,
        &&label_80D35EF0,
        &&label_80D35EF4,
        &&label_80D35EF8,
        &&label_80D35EFC,
        &&label_80D35F00,
        &&label_80D35F04,
        &&label_80D35F08,
        &&label_80D35F0C,
        &&label_80D35F10,
        &&label_80D35F14,
        &&label_80D35F18,
        &&label_80D35F1C,
        &&label_80D35F20,
        &&label_80D35F24,
        &&label_80D35F28,
        &&label_80D35F2C,
        &&label_80D35F30,
        &&label_80D35F34,
        &&label_80D35F38,
        &&label_80D35F3C,
        &&label_80D35F40,
        &&label_80D35F44,
        &&label_80D35F48,
        &&label_80D35F4C,
        &&label_80D35F50,
        &&label_80D35F54,
        &&label_80D35F58,
        &&label_80D35F5C,
        &&label_80D35F60,
        &&label_80D35F64,
        &&label_80D35F68,
        &&label_80D35F6C,
        &&label_80D35F70,
        &&label_80D35F74,
        &&label_80D35F78,
        &&label_80D35F7C,
        &&label_80D35F80,
        &&label_80D35F84,
        &&label_80D35F88,
        &&label_80D35F8C,
        &&label_80D35F90,
        &&label_80D35F94,
        &&label_80D35F98,
        &&label_80D35F9C,
        &&label_80D35FA0,
        &&label_80D35FA4,
        &&label_80D35FA8,
        &&label_80D35FAC,
        &&label_80D35FB0,
        &&label_80D35FB4,
        &&label_80D35FB8,
        &&label_80D35FBC,
        &&label_80D35FC0,
        &&label_80D35FC4,
        &&label_80D35FC8,
        &&label_80D35FCC,
        &&label_80D35FD0,
        &&label_80D35FD4,
        &&label_80D35FD8,
        &&label_80D35FDC,
        &&label_80D35FE0,
        &&label_80D35FE4,
        &&label_80D35FE8,
        &&label_80D35FEC,
        &&label_80D35FF0,
        &&label_80D35FF4,
        &&label_80D35FF8,
        &&label_80D35FFC,
        &&label_80D36000,
        &&label_80D36004,
        &&label_80D36008,
        &&label_80D3600C,
        &&label_80D36010,
        &&label_80D36014,
        &&label_80D36018,
        &&label_80D3601C,
        &&label_80D36020,
        &&label_80D36024,
        &&label_80D36028,
        &&label_80D3602C,
        &&label_80D36030,
        &&label_80D36034,
        &&label_80D36038,
        &&label_80D3603C,
        &&label_80D36040,
        &&label_80D36044,
        &&label_80D36048,
        &&label_80D3604C,
        &&label_80D36050,
        &&label_80D36054,
        &&label_80D36058,
        &&label_80D3605C,
        &&label_80D36060,
        &&label_80D36064,
        &&label_80D36068,
        &&label_80D3606C,
        &&label_80D36070,
        &&label_80D36074,
        &&label_80D36078,
        &&label_80D3607C,
        &&label_80D36080,
        &&label_80D36084,
        &&label_80D36088,
        &&label_80D3608C,
        &&label_80D36090,
        &&label_80D36094,
        &&label_80D36098,
        &&label_80D3609C,
        &&label_80D360A0,
        &&label_80D360A4,
        &&label_80D360A8,
        &&label_80D360AC,
        &&label_80D360B0,
        &&label_80D360B4,
        &&label_80D360B8,
        &&label_80D360BC,
        &&label_80D360C0,
        &&label_80D360C4,
        &&label_80D360C8,
        &&label_80D360CC,
        &&label_80D360D0,
        &&label_80D360D4,
        &&label_80D360D8,
        &&label_80D360DC,
        &&label_80D360E0,
        &&label_80D360E4,
        &&label_80D360E8,
        &&label_80D360EC,
        &&label_80D360F0,
        &&label_80D360F4,
        &&label_80D360F8,
        &&label_80D360FC,
        &&label_80D36100,
        &&label_80D36104,
        &&label_80D36108,
        &&label_80D3610C,
        &&label_80D36110,
        &&label_80D36114,
        &&label_80D36118,
        &&label_80D3611C,
        &&label_80D36120,
        &&label_80D36124,
        &&label_80D36128,
        &&label_80D3612C,
        &&label_80D36130,
        &&label_80D36134,
        &&label_80D36138,
        &&label_80D3613C,
        &&label_80D36140,
        &&label_80D36144,
        &&label_80D36148,
        &&label_80D3614C,
        &&label_80D36150,
        &&label_80D36154,
        &&label_80D36158,
        &&label_80D3615C,
        &&label_80D36160,
        &&label_80D36164,
        &&label_80D36168,
        &&label_80D3616C,
        &&label_80D36170,
        &&label_80D36174,
        &&label_80D36178,
        &&label_80D3617C,
        &&label_80D36180,
        &&label_80D36184,
        &&label_80D36188,
        &&label_80D3618C,
        &&label_80D36190,
        &&label_80D36194,
        &&label_80D36198,
        &&label_80D3619C,
        &&label_80D361A0,
        &&label_80D361A4,
        &&label_80D361A8,
        &&label_80D361AC,
        &&label_80D361B0,
        &&label_80D361B4,
        &&label_80D361B8,
        &&label_80D361BC,
        &&label_80D361C0,
        &&label_80D361C4,
        &&label_80D361C8,
        &&label_80D361CC,
        &&label_80D361D0,
        &&label_80D361D4,
        &&label_80D361D8,
        &&label_80D361DC,
        &&label_80D361E0,
        &&label_80D361E4,
        &&label_80D361E8,
        &&label_80D361EC,
        &&label_80D361F0,
        &&label_80D361F4,
        &&label_80D361F8,
        &&label_80D361FC,
        &&label_80D36200,
        &&label_80D36204,
        &&label_80D36208,
        &&label_80D3620C,
        &&label_80D36210,
        &&label_80D36214,
        &&label_80D36218,
        &&label_80D3621C,
        &&label_80D36220,
        &&label_80D36224,
        &&label_80D36228,
        &&label_80D3622C,
        &&label_80D36230,
        &&label_80D36234,
        &&label_80D36238,
        &&label_80D3623C,
        &&label_80D36240,
        &&label_80D36244,
        &&label_80D36248,
        &&label_80D3624C,
        &&label_80D36250,
        &&label_80D36254,
        &&label_80D36258,
        &&label_80D3625C,
        &&label_80D36260,
        &&label_80D36264,
        &&label_80D36268,
        &&label_80D3626C,
        &&label_80D36270,
        &&label_80D36274,
        &&label_80D36278,
        &&label_80D3627C,
        &&label_80D36280,
        &&label_80D36284,
        &&label_80D36288,
        &&label_80D3628C,
        &&label_80D36290,
        &&label_80D36294,
        &&label_80D36298,
        &&label_80D3629C,
        &&label_80D362A0,
        &&label_80D362A4,
        &&label_80D362A8,
        &&label_80D362AC,
        &&label_80D362B0,
        &&label_80D362B4,
        &&label_80D362B8,
        &&label_80D362BC,
        &&label_80D362C0,
        &&label_80D362C4,
        &&label_80D362C8,
        &&label_80D362CC,
        &&label_80D362D0,
        &&label_80D362D4,
        &&label_80D362D8,
        &&label_80D362DC,
        &&label_80D362E0,
        &&label_80D362E4,
        &&label_80D362E8,
        &&label_80D362EC,
        &&label_80D362F0,
        &&label_80D362F4,
        &&label_80D362F8,
        &&label_80D362FC,
        &&label_80D36300,
        &&label_80D36304,
        &&label_80D36308,
        &&label_80D3630C,
        &&label_80D36310,
        &&label_80D36314,
        &&label_80D36318,
        &&label_80D3631C,
        &&label_80D36320,
        &&label_80D36324,
        &&label_80D36328,
        &&label_80D3632C,
        &&label_80D36330,
        &&label_80D36334,
        &&label_80D36338,
        &&label_80D3633C,
        &&label_80D36340,
        &&label_80D36344,
        &&label_80D36348,
        &&label_80D3634C,
        &&label_80D36350,
        &&label_80D36354,
        &&label_80D36358,
        &&label_80D3635C,
        &&label_80D36360,
        &&label_80D36364,
        &&label_80D36368,
        &&label_80D3636C,
        &&label_80D36370,
        &&label_80D36374,
        &&label_80D36378,
        &&label_80D3637C,
        &&label_80D36380,
        &&label_80D36384,
        &&label_80D36388,
        &&label_80D3638C,
        &&label_80D36390,
        &&label_80D36394,
        &&label_80D36398,
        &&label_80D3639C,
        &&label_80D363A0,
        &&label_80D363A4,
        &&label_80D363A8,
        &&label_80D363AC,
        &&label_80D363B0,
        &&label_80D363B4,
        &&label_80D363B8,
        &&label_80D363BC,
        &&label_80D363C0,
        &&label_80D363C4,
        &&label_80D363C8,
        &&label_80D363CC,
        &&label_80D363D0,
        &&label_80D363D4,
        &&label_80D363D8,
        &&label_80D363DC,
        &&label_80D363E0,
        &&label_80D363E4,
        &&label_80D363E8,
        &&label_80D363EC,
        &&label_80D363F0,
        &&label_80D363F4,
        &&label_80D363F8,
        &&label_80D363FC,
        &&label_80D36400,
        &&label_80D36404,
        &&label_80D36408,
        &&label_80D3640C,
        &&label_80D36410,
        &&label_80D36414,
        &&label_80D36418,
        &&label_80D3641C,
        &&label_80D36420,
        &&label_80D36424,
        &&label_80D36428,
        &&label_80D3642C,
        &&label_80D36430,
        &&label_80D36434,
        &&label_80D36438,
        &&label_80D3643C,
        &&label_80D36440,
        &&label_80D36444,
        &&label_80D36448,
        &&label_80D3644C,
        &&label_80D36450,
        &&label_80D36454,
        &&label_80D36458,
        &&label_80D3645C,
        &&label_80D36460,
        &&label_80D36464,
        &&label_80D36468,
        &&label_80D3646C,
        &&label_80D36470,
        &&label_80D36474,
        &&label_80D36478,
        &&label_80D3647C,
        &&label_80D36480,
        &&label_80D36484,
        &&label_80D36488,
        &&label_80D3648C,
        &&label_80D36490,
        &&label_80D36494,
        &&label_80D36498,
        &&label_80D3649C,
        &&label_80D364A0,
        &&label_80D364A4,
        &&label_80D364A8,
        &&label_80D364AC,
        &&label_80D364B0,
        &&label_80D364B4,
        &&label_80D364B8,
        &&label_80D364BC,
        &&label_80D364C0,
        &&label_80D364C4,
        &&label_80D364C8,
        &&label_80D364CC,
        &&label_80D364D0,
        &&label_80D364D4,
        &&label_80D364D8,
        &&label_80D364DC,
        &&label_80D364E0,
        &&label_80D364E4,
        &&label_80D364E8,
        &&label_80D364EC,
        &&label_80D364F0,
        &&label_80D364F4,
        &&label_80D364F8,
        &&label_80D364FC,
        &&label_80D36500,
        &&label_80D36504,
        &&label_80D36508,
        &&label_80D3650C,
        &&label_80D36510,
        &&label_80D36514,
        &&label_80D36518,
        &&label_80D3651C,
        &&label_80D36520,
        &&label_80D36524,
        &&label_80D36528,
        &&label_80D3652C,
        &&label_80D36530,
        &&label_80D36534,
        &&label_80D36538,
        &&label_80D3653C,
        &&label_80D36540,
        &&label_80D36544,
        &&label_80D36548,
        &&label_80D3654C,
        &&label_80D36550,
        &&label_80D36554,
        &&label_80D36558,
        &&label_80D3655C,
        &&label_80D36560,
        &&label_80D36564,
        &&label_80D36568,
        &&label_80D3656C,
        &&label_80D36570,
        &&label_80D36574,
        &&label_80D36578,
        &&label_80D3657C,
        &&label_80D36580,
        &&label_80D36584,
        &&label_80D36588,
        &&label_80D3658C,
        &&label_80D36590,
        &&label_80D36594,
        &&label_80D36598,
        &&label_80D3659C,
        &&label_80D365A0,
        &&label_80D365A4,
        &&label_80D365A8,
        &&label_80D365AC,
        &&label_80D365B0,
        &&label_80D365B4,
        &&label_80D365B8,
        &&label_80D365BC,
        &&label_80D365C0,
        &&label_80D365C4,
        &&label_80D365C8,
        &&label_80D365CC,
        &&label_80D365D0,
        &&label_80D365D4,
        &&label_80D365D8,
        &&label_80D365DC,
        &&label_80D365E0,
        &&label_80D365E4,
        &&label_80D365E8,
        &&label_80D365EC,
        &&label_80D365F0,
        &&label_80D365F4,
        &&label_80D365F8,
        &&label_80D365FC,
        &&label_80D36600,
        &&label_80D36604,
        &&label_80D36608,
        &&label_80D3660C,
        &&label_80D36610,
        &&label_80D36614,
        &&label_80D36618,
        &&label_80D3661C,
        &&label_80D36620,
        &&label_80D36624,
        &&label_80D36628,
        &&label_80D3662C,
        &&label_80D36630,
        &&label_80D36634,
        &&label_80D36638,
        &&label_80D3663C,
        &&label_80D36640,
        &&label_80D36644,
        &&label_80D36648,
        &&label_80D3664C,
        &&label_80D36650,
        &&label_80D36654,
        &&label_80D36658,
        &&label_80D3665C,
        &&label_80D36660,
        &&label_80D36664,
        &&label_80D36668,
        &&label_80D3666C,
        &&label_80D36670,
        &&label_80D36674,
        &&label_80D36678,
        &&label_80D3667C,
        &&label_80D36680,
        &&label_80D36684,
        &&label_80D36688,
        &&label_80D3668C,
        &&label_80D36690,
        &&label_80D36694,
        &&label_80D36698,
        &&label_80D3669C,
        &&label_80D366A0,
        &&label_80D366A4,
        &&label_80D366A8,
        &&label_80D366AC,
        &&label_80D366B0,
        &&label_80D366B4,
        &&label_80D366B8,
        &&label_80D366BC,
        &&label_80D366C0,
        &&label_80D366C4,
        &&label_80D366C8,
        &&label_80D366CC,
        &&label_80D366D0,
        &&label_80D366D4,
        &&label_80D366D8,
        &&label_80D366DC,
        &&label_80D366E0,
        &&label_80D366E4,
        &&label_80D366E8,
        &&label_80D366EC,
        &&label_80D366F0,
        &&label_80D366F4,
        &&label_80D366F8,
        &&label_80D366FC,
        &&label_80D36700,
        &&label_80D36704,
        &&label_80D36708,
        &&label_80D3670C,
        &&label_80D36710,
        &&label_80D36714,
        &&label_80D36718,
        &&label_80D3671C,
        &&label_80D36720,
        &&label_80D36724,
        &&label_80D36728,
        &&label_80D3672C,
        &&label_80D36730,
        &&label_80D36734,
        &&label_80D36738,
        &&label_80D3673C,
        &&label_80D36740,
        &&label_80D36744,
        &&label_80D36748,
        &&label_80D3674C,
        &&label_80D36750,
        &&label_80D36754,
        &&label_80D36758,
        &&label_80D3675C,
        &&label_80D36760,
        &&label_80D36764,
        &&label_80D36768,
        &&label_80D3676C,
        &&label_80D36770,
        &&label_80D36774,
        &&label_80D36778,
        &&label_80D3677C,
        &&label_80D36780,
        &&label_80D36784,
        &&label_80D36788,
        &&label_80D3678C,
        &&label_80D36790,
        &&label_80D36794,
        &&label_80D36798,
        &&label_80D3679C,
        &&label_80D367A0,
        &&label_80D367A4,
        &&label_80D367A8,
        &&label_80D367AC,
        &&label_80D367B0,
        &&label_80D367B4,
        &&label_80D367B8,
        &&label_80D367BC,
        &&label_80D367C0,
        &&label_80D367C4,
        &&label_80D367C8,
        &&label_80D367CC,
        &&label_80D367D0,
        &&label_80D367D4,
        &&label_80D367D8,
        &&label_80D367DC,
        &&label_80D367E0,
        &&label_80D367E4,
        &&label_80D367E8,
        &&label_80D367EC,
        &&label_80D367F0,
        &&label_80D367F4,
        &&label_80D367F8,
        &&label_80D367FC,
        &&label_80D36800,
        &&label_80D36804,
        &&label_80D36808,
        &&label_80D3680C,
        &&label_80D36810,
        &&label_80D36814,
        &&label_80D36818,
        &&label_80D3681C,
        &&label_80D36820,
        &&label_80D36824,
        &&label_80D36828,
        &&label_80D3682C,
        &&label_80D36830,
        &&label_80D36834,
        &&label_80D36838,
        &&label_80D3683C,
        &&label_80D36840,
        &&label_80D36844,
        &&label_80D36848,
        &&label_80D3684C,
        &&label_80D36850,
        &&label_80D36854,
        &&label_80D36858,
        &&label_80D3685C,
        &&label_80D36860,
        &&label_80D36864,
        &&label_80D36868,
        &&label_80D3686C,
        &&label_80D36870,
        &&label_80D36874,
        &&label_80D36878,
        &&label_80D3687C,
        &&label_80D36880,
        &&label_80D36884,
        &&label_80D36888,
        &&label_80D3688C,
        &&label_80D36890,
        &&label_80D36894,
        &&label_80D36898,
        &&label_80D3689C,
        &&label_80D368A0,
        &&label_80D368A4,
        &&label_80D368A8,
        &&label_80D368AC,
        &&label_80D368B0,
        &&label_80D368B4,
        &&label_80D368B8,
        &&label_80D368BC,
        &&label_80D368C0,
        &&label_80D368C4,
        &&label_80D368C8,
        &&label_80D368CC,
        &&label_80D368D0,
        &&label_80D368D4,
        &&label_80D368D8,
        &&label_80D368DC,
        &&label_80D368E0,
        &&label_80D368E4,
        &&label_80D368E8,
        &&label_80D368EC,
        &&label_80D368F0,
        &&label_80D368F4,
        &&label_80D368F8,
        &&label_80D368FC,
        &&label_80D36900,
        &&label_80D36904,
        &&label_80D36908,
        &&label_80D3690C,
        &&label_80D36910,
        &&label_80D36914,
        &&label_80D36918,
        &&label_80D3691C,
        &&label_80D36920,
        &&label_80D36924,
        &&label_80D36928,
        &&label_80D3692C,
        &&label_80D36930,
        &&label_80D36934,
        &&label_80D36938,
        &&label_80D3693C,
        &&label_80D36940,
        &&label_80D36944,
        &&label_80D36948,
        &&label_80D3694C,
        &&label_80D36950,
        &&label_80D36954,
        &&label_80D36958,
        &&label_80D3695C,
        &&label_80D36960,
        &&label_80D36964,
        &&label_80D36968,
        &&label_80D3696C,
        &&label_80D36970,
        &&label_80D36974,
        &&label_80D36978,
        &&label_80D3697C,
        &&label_80D36980,
        &&label_80D36984,
        &&label_80D36988,
        &&label_80D3698C,
        &&label_80D36990,
        &&label_80D36994,
        &&label_80D36998,
        &&label_80D3699C,
        &&label_80D369A0,
        &&label_80D369A4,
        &&label_80D369A8,
        &&label_80D369AC,
        &&label_80D369B0,
        &&label_80D369B4,
        &&label_80D369B8,
        &&label_80D369BC,
        &&label_80D369C0,
        &&label_80D369C4,
        &&label_80D369C8,
        &&label_80D369CC,
        &&label_80D369D0,
        &&label_80D369D4,
        &&label_80D369D8,
        &&label_80D369DC,
        &&label_80D369E0,
        &&label_80D369E4,
        &&label_80D369E8,
        &&label_80D369EC,
        &&label_80D369F0,
        &&label_80D369F4,
        &&label_80D369F8,
        &&label_80D369FC,
        &&label_80D36A00,
        &&label_80D36A04,
        &&label_80D36A08,
        &&label_80D36A0C,
        &&label_80D36A10,
        &&label_80D36A14,
        &&label_80D36A18,
        &&label_80D36A1C,
        &&label_80D36A20,
        &&label_80D36A24,
        &&label_80D36A28,
        &&label_80D36A2C,
        &&label_80D36A30,
        &&label_80D36A34,
        &&label_80D36A38,
        &&label_80D36A3C,
        &&label_80D36A40,
        &&label_80D36A44,
        &&label_80D36A48,
        &&label_80D36A4C,
        &&label_80D36A50,
        &&label_80D36A54,
        &&label_80D36A58,
        &&label_80D36A5C,
        &&label_80D36A60,
        &&label_80D36A64,
        &&label_80D36A68,
        &&label_80D36A6C,
        &&label_80D36A70,
        &&label_80D36A74,
        &&label_80D36A78,
        &&label_80D36A7C,
        &&label_80D36A80,
        &&label_80D36A84,
        &&label_80D36A88,
        &&label_80D36A8C,
        &&label_80D36A90,
        &&label_80D36A94,
        &&label_80D36A98,
        &&label_80D36A9C,
        &&label_80D36AA0,
        &&label_80D36AA4,
        &&label_80D36AA8,
        &&label_80D36AAC,
        &&label_80D36AB0,
        &&label_80D36AB4,
        &&label_80D36AB8,
        &&label_80D36ABC,
        &&label_80D36AC0,
        &&label_80D36AC4,
        &&label_80D36AC8,
        &&label_80D36ACC,
        &&label_80D36AD0,
        &&label_80D36AD4,
        &&label_80D36AD8,
        &&label_80D36ADC,
        &&label_80D36AE0,
        &&label_80D36AE4,
        &&label_80D36AE8,
        &&label_80D36AEC,
        &&label_80D36AF0,
        &&label_80D36AF4,
        &&label_80D36AF8,
        &&label_80D36AFC,
        &&label_80D36B00,
        &&label_80D36B04,
        &&label_80D36B08,
        &&label_80D36B0C,
        &&label_80D36B10,
        &&label_80D36B14,
        &&label_80D36B18,
        &&label_80D36B1C,
        &&label_80D36B20,
        &&label_80D36B24,
        &&label_80D36B28,
        &&label_80D36B2C,
        &&label_80D36B30,
        &&label_80D36B34,
        &&label_80D36B38,
        &&label_80D36B3C,
        &&label_80D36B40,
        &&label_80D36B44,
        &&label_80D36B48,
        &&label_80D36B4C,
        &&label_80D36B50,
        &&label_80D36B54,
        &&label_80D36B58,
        &&label_80D36B5C,
        &&label_80D36B60,
        &&label_80D36B64,
        &&label_80D36B68,
        &&label_80D36B6C,
        &&label_80D36B70,
        &&label_80D36B74,
        &&label_80D36B78,
        &&label_80D36B7C,
        &&label_80D36B80,
        &&label_80D36B84,
        &&label_80D36B88,
        &&label_80D36B8C,
        &&label_80D36B90,
        &&label_80D36B94,
        &&label_80D36B98,
        &&label_80D36B9C,
        &&label_80D36BA0,
        &&label_80D36BA4,
        &&label_80D36BA8,
        &&label_80D36BAC,
        &&label_80D36BB0,
        &&label_80D36BB4,
        &&label_80D36BB8,
        &&label_80D36BBC,
        &&label_80D36BC0,
        &&label_80D36BC4,
        &&label_80D36BC8,
        &&label_80D36BCC,
        &&label_80D36BD0,
        &&label_80D36BD4,
        &&label_80D36BD8,
        &&label_80D36BDC,
        &&label_80D36BE0,
        &&label_80D36BE4,
        &&label_80D36BE8,
        &&label_80D36BEC,
        &&label_80D36BF0,
        &&label_80D36BF4,
        &&label_80D36BF8,
        &&label_80D36BFC,
        &&label_80D36C00,
        &&label_80D36C04,
        &&label_80D36C08,
        &&label_80D36C0C,
        &&label_80D36C10,
        &&label_80D36C14,
        &&label_80D36C18,
        &&label_80D36C1C,
        &&label_80D36C20,
        &&label_80D36C24,
        &&label_80D36C28,
        &&label_80D36C2C,
        &&label_80D36C30,
        &&label_80D36C34,
        &&label_80D36C38,
        &&label_80D36C3C,
        &&label_80D36C40,
        &&label_80D36C44,
        &&label_80D36C48,
        &&label_80D36C4C,
        &&label_80D36C50,
        &&label_80D36C54,
        &&label_80D36C58,
        &&label_80D36C5C,
        &&label_80D36C60,
        &&label_80D36C64,
        &&label_80D36C68,
        &&label_80D36C6C,
        &&label_80D36C70,
        &&label_80D36C74,
        &&label_80D36C78,
        &&label_80D36C7C,
        &&label_80D36C80,
        &&label_80D36C84,
        &&label_80D36C88,
        &&label_80D36C8C,
        &&label_80D36C90,
        &&label_80D36C94,
        &&label_80D36C98,
        &&label_80D36C9C,
        &&label_80D36CA0,
        &&label_80D36CA4,
        &&label_80D36CA8,
        &&label_80D36CAC,
        &&label_80D36CB0,
        &&label_80D36CB4,
        &&label_80D36CB8,
        &&label_80D36CBC,
        &&label_80D36CC0,
        &&label_80D36CC4,
        &&label_80D36CC8,
        &&label_80D36CCC,
        &&label_80D36CD0,
        &&label_80D36CD4,
        &&label_80D36CD8,
        &&label_80D36CDC,
        &&label_80D36CE0,
        &&label_80D36CE4,
        &&label_80D36CE8,
        &&label_80D36CEC,
        &&label_80D36CF0,
        &&label_80D36CF4,
        &&label_80D36CF8,
        &&label_80D36CFC,
        &&label_80D36D00,
        &&label_80D36D04,
        &&label_80D36D08,
        &&label_80D36D0C,
        &&label_80D36D10,
        &&label_80D36D14,
        &&label_80D36D18,
        &&label_80D36D1C,
        &&label_80D36D20,
        &&label_80D36D24,
        &&label_80D36D28,
        &&label_80D36D2C,
        &&label_80D36D30,
        &&label_80D36D34,
        &&label_80D36D38,
        &&label_80D36D3C,
        &&label_80D36D40,
        &&label_80D36D44,
        &&label_80D36D48,
        &&label_80D36D4C,
        &&label_80D36D50,
        &&label_80D36D54,
        &&label_80D36D58,
        &&label_80D36D5C,
        &&label_80D36D60,
        &&label_80D36D64,
        &&label_80D36D68,
        &&label_80D36D6C,
        &&label_80D36D70,
        &&label_80D36D74,
        &&label_80D36D78,
        &&label_80D36D7C,
        &&label_80D36D80,
        &&label_80D36D84,
        &&label_80D36D88,
        &&label_80D36D8C,
        &&label_80D36D90,
        &&label_80D36D94,
        &&label_80D36D98,
        &&label_80D36D9C,
        &&label_80D36DA0,
        &&label_80D36DA4,
        &&label_80D36DA8,
        &&label_80D36DAC,
        &&label_80D36DB0,
        &&label_80D36DB4,
        &&label_80D36DB8,
        &&label_80D36DBC,
        &&label_80D36DC0,
        &&label_80D36DC4,
        &&label_80D36DC8,
        &&label_80D36DCC,
        &&label_80D36DD0,
        &&label_80D36DD4,
        &&label_80D36DD8,
        &&label_80D36DDC,
        &&label_80D36DE0,
        &&label_80D36DE4,
        &&label_80D36DE8,
        &&label_80D36DEC,
        &&label_80D36DF0,
        &&label_80D36DF4,
        &&label_80D36DF8,
        &&label_80D36DFC,
        &&label_80D36E00,
        &&label_80D36E04,
        &&label_80D36E08,
        &&label_80D36E0C,
        &&label_80D36E10,
        &&label_80D36E14,
        &&label_80D36E18,
        &&label_80D36E1C,
        &&label_80D36E20,
        &&label_80D36E24,
        &&label_80D36E28,
        &&label_80D36E2C,
        &&label_80D36E30,
        &&label_80D36E34,
        &&label_80D36E38,
        &&label_80D36E3C,
        &&label_80D36E40,
        &&label_80D36E44,
        &&label_80D36E48,
        &&label_80D36E4C,
        &&label_80D36E50,
        &&label_80D36E54,
        &&label_80D36E58,
        &&label_80D36E5C,
        &&label_80D36E60,
        &&label_80D36E64,
        &&label_80D36E68,
        &&label_80D36E6C,
        &&label_80D36E70,
        &&label_80D36E74,
        &&label_80D36E78,
        &&label_80D36E7C,
        &&label_80D36E80,
        &&label_80D36E84,
        &&label_80D36E88,
        &&label_80D36E8C,
        &&label_80D36E90,
        &&label_80D36E94,
        &&label_80D36E98,
        &&label_80D36E9C,
        &&label_80D36EA0,
        &&label_80D36EA4,
        &&label_80D36EA8,
        &&label_80D36EAC,
        &&label_80D36EB0,
        &&label_80D36EB4,
        &&label_80D36EB8,
        &&label_80D36EBC,
        &&label_80D36EC0,
        &&label_80D36EC4,
        &&label_80D36EC8,
        &&label_80D36ECC,
        &&label_80D36ED0,
        &&label_80D36ED4,
        &&label_80D36ED8,
        &&label_80D36EDC,
        &&label_80D36EE0,
        &&label_80D36EE4,
        &&label_80D36EE8,
        &&label_80D36EEC,
        &&label_80D36EF0,
        &&label_80D36EF4,
        &&label_80D36EF8,
        &&label_80D36EFC,
        &&label_80D36F00,
        &&label_80D36F04,
        &&label_80D36F08,
        &&label_80D36F0C,
        &&label_80D36F10,
        &&label_80D36F14,
        &&label_80D36F18,
        &&label_80D36F1C,
        &&label_80D36F20,
        &&label_80D36F24,
        &&label_80D36F28,
        &&label_80D36F2C,
        &&label_80D36F30,
        &&label_80D36F34,
        &&label_80D36F38,
        &&label_80D36F3C,
        &&label_80D36F40,
        &&label_80D36F44,
        &&label_80D36F48,
        &&label_80D36F4C,
        &&label_80D36F50,
        &&label_80D36F54,
        &&label_80D36F58,
        &&label_80D36F5C,
        &&label_80D36F60,
        &&label_80D36F64,
        &&label_80D36F68,
        &&label_80D36F6C,
        &&label_80D36F70,
        &&label_80D36F74,
        &&label_80D36F78,
        &&label_80D36F7C,
        &&label_80D36F80,
        &&label_80D36F84,
        &&label_80D36F88,
        &&label_80D36F8C,
        &&label_80D36F90,
        &&label_80D36F94,
        &&label_80D36F98,
        &&label_80D36F9C,
        &&label_80D36FA0,
        &&label_80D36FA4,
        &&label_80D36FA8,
        &&label_80D36FAC,
        &&label_80D36FB0,
        &&label_80D36FB4,
        &&label_80D36FB8,
        &&label_80D36FBC,
        &&label_80D36FC0,
        &&label_80D36FC4,
        &&label_80D36FC8,
        &&label_80D36FCC,
        &&label_80D36FD0,
        &&label_80D36FD4,
        &&label_80D36FD8,
        &&label_80D36FDC,
        &&label_80D36FE0,
        &&label_80D36FE4,
        &&label_80D36FE8,
        &&label_80D36FEC,
        &&label_80D36FF0,
        &&label_80D36FF4,
        &&label_80D36FF8,
        &&label_80D36FFC,
        &&label_80D37000,
        &&label_80D37004,
        &&label_80D37008,
        &&label_80D3700C,
        &&label_80D37010,
        &&label_80D37014,
        &&label_80D37018,
        &&label_80D3701C,
        &&label_80D37020
    };
    {
        const u32 pc = ctx->pc;
        if (pc >= 0x80D358A0u && pc <= 0x80D37020u && ((pc - 0x80D358A0u) & 3u) == 0u)
            goto *pc_table_80D358A0[(pc - 0x80D358A0u) >> 2];
    }
    return;
label_80D358A0:
    ctx->pc = 0x80D358A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D358A0: stwu     r1, -16(r1)
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
label_80D358A4:
    ctx->pc = 0x80D358A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D358A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D358A8:
    ctx->pc = 0x80D358A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D358A8: stw     r0, 20(r1)
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
label_80D358AC:
    ctx->pc = 0x80D358ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358ACu)) return;
    // 80D358AC: cmpwi   r3, 2
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

label_80D358B0:
    ctx->pc = 0x80D358B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358B0u)) return;
    // 80D358B0: bc    12, 2, 0x80D3624C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3624C;
        }
    }

label_80D358B4:
    ctx->pc = 0x80D358B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D358B4: bc    4, 0, 0x80D358C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D358C8;
        }
    }

label_80D358B8:
    ctx->pc = 0x80D358B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D358B8: cmpwi   r3, 0
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

label_80D358BC:
    ctx->pc = 0x80D358BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358BCu)) return;
    // 80D358BC: bc    12, 2, 0x80D362E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D362E4;
        }
    }

label_80D358C0:
    ctx->pc = 0x80D358C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D358C0: bc    4, 0, 0x80D358D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D358D0;
        }
    }

label_80D358C4:
    ctx->pc = 0x80D358C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D358C4: b       0x80D362E4
    {
            goto label_80D362E4;
    }

label_80D358C8:
    ctx->pc = 0x80D358C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D358C8: cmpwi   r3, 4
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

label_80D358CC:
    ctx->pc = 0x80D358CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358CCu)) return;
    // 80D358CC: b       0x80D362E4
    {
            goto label_80D362E4;
    }

label_80D358D0:
    ctx->pc = 0x80D358D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D358D0: bl      0x8045DE7C
    {
            ctx->lr = 0x80D358D4u;
            ctx->pc = 0x8045DE7Cu;
            return;
    }

label_80D358D4:
    ctx->pc = 0x80D358D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D358D4: bl      0x80460A60
    {
            ctx->lr = 0x80D358D8u;
            ctx->pc = 0x80460A60u;
            return;
    }

label_80D358D8:
    ctx->pc = 0x80D358D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D358D8: bl      0x80460A24
    {
            ctx->lr = 0x80D358DCu;
            ctx->pc = 0x80460A24u;
            return;
    }

label_80D358DC:
    ctx->pc = 0x80D358DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D358DC: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D358E0:
    ctx->pc = 0x80D358E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358E0u)) return;
    // 80D358E0: addi    r3, r3, -11080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11080);

label_80D358E4:
    ctx->pc = 0x80D358E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358E4u)) return;
    // 80D358E4: bl      0x8050AF58
    {
            ctx->lr = 0x80D358E8u;
            ctx->pc = 0x8050AF58u;
            return;
    }

label_80D358E8:
    ctx->pc = 0x80D358E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D358E8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80D358EC:
    ctx->pc = 0x80D358ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358ECu)) return;
    // 80D358EC: bl      0x80D3697C
    {
            ctx->lr = 0x80D358F0u;
            goto label_80D3697C;
    }

label_80D358F0:
    ctx->pc = 0x80D358F0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358F0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D358F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D358F4:
    ctx->pc = 0x80D358F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358F4u)) return;
    // 80D358F4: bl      0x8045F220
    {
            ctx->lr = 0x80D358F8u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D358F8:
    ctx->pc = 0x80D358F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D358F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D358F8: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D358FC:
    ctx->pc = 0x80D358FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D358FCu)) return;
    // 80D358FC: addi    r4, r4, -13776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13776);

label_80D35900:
    ctx->pc = 0x80D35900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35900u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35900: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35900u)) return;
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
label_80D35904:
    ctx->pc = 0x80D35904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35904u)) return;
    // 80D35904: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35908:
    ctx->pc = 0x80D35908u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35908u)) return;
    // 80D35908: addi    r4, r4, -13772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13772);

label_80D3590C:
    ctx->pc = 0x80D3590Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3590Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3590C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3590Cu)) return;
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
label_80D35910:
    ctx->pc = 0x80D35910u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35910u)) return;
    // 80D35910: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35914:
    ctx->pc = 0x80D35914u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35914u)) return;
    // 80D35914: addi    r4, r4, -13768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13768);

label_80D35918:
    ctx->pc = 0x80D35918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35918: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35918u)) return;
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
label_80D3591C:
    ctx->pc = 0x80D3591Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3591Cu)) return;
    // 80D3591C: bl      0x8045EF2C
    {
            ctx->lr = 0x80D35920u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D35920:
    ctx->pc = 0x80D35920u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35920u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35920: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35924:
    ctx->pc = 0x80D35924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35924u)) return;
    // 80D35924: bl      0x8045F220
    {
            ctx->lr = 0x80D35928u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35928:
    ctx->pc = 0x80D35928u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35928u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D35928: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D3592C:
    ctx->pc = 0x80D3592Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3592Cu)) return;
    // 80D3592C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D35930:
    ctx->pc = 0x80D35930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35930u)) return;
    // 80D35930: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80D35934:
    ctx->pc = 0x80D35934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35934u)) return;
    // 80D35934: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D35938:
    ctx->pc = 0x80D35938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35938u)) return;
    // 80D35938: bl      0x8045EEA8
    {
            ctx->lr = 0x80D3593Cu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D3593C:
    ctx->pc = 0x80D3593Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3593Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3593C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35940:
    ctx->pc = 0x80D35940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35940u)) return;
    // 80D35940: bl      0x8045EC10
    {
            ctx->lr = 0x80D35944u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D35944:
    ctx->pc = 0x80D35944u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35944u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35944: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35948:
    ctx->pc = 0x80D35948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35948u)) return;
    // 80D35948: bl      0x8045F220
    {
            ctx->lr = 0x80D3594Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3594C:
    ctx->pc = 0x80D3594Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3594Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3594C: bl      0x8045EB8C
    {
            ctx->lr = 0x80D35950u;
            ctx->pc = 0x8045EB8Cu;
            return;
    }

label_80D35950:
    ctx->pc = 0x80D35950u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35950u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35950: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35954:
    ctx->pc = 0x80D35954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35954u)) return;
    // 80D35954: bl      0x8045F220
    {
            ctx->lr = 0x80D35958u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35958:
    ctx->pc = 0x80D35958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35958: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80D3595C:
    ctx->pc = 0x80D3595Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3595Cu)) return;
    // 80D3595C: addi    r4, r4, -9384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-9384);

label_80D35960:
    ctx->pc = 0x80D35960u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35960u)) return;
    // 80D35960: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D35964:
    ctx->pc = 0x80D35964u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35964u)) return;
    // 80D35964: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D35968:
    ctx->pc = 0x80D35968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35968u)) return;
    // 80D35968: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D3596C:
    ctx->pc = 0x80D3596Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3596Cu)) return;
    // 80D3596C: addi    r6, r6, -13764
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13764);

label_80D35970:
    ctx->pc = 0x80D35970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35970: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35970u)) return;
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
label_80D35974:
    ctx->pc = 0x80D35974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35974u)) return;
    // 80D35974: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D35978:
    ctx->pc = 0x80D35978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35978u)) return;
    // 80D35978: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D3597C:
    ctx->pc = 0x80D3597Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3597Cu)) return;
    // 80D3597C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35980u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35980:
    ctx->pc = 0x80D35980u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35980u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D35980: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35984:
    ctx->pc = 0x80D35984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35984u)) return;
    // 80D35984: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D35988:
    ctx->pc = 0x80D35988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35988u)) return;
    // 80D35988: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3598C:
    ctx->pc = 0x80D3598Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3598Cu)) return;
    // 80D3598C: addi    r4, r4, -13760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13760);

label_80D35990:
    ctx->pc = 0x80D35990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35990u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D35990: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35990u)) return;
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
label_80D35994:
    ctx->pc = 0x80D35994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35994u)) return;
    // 80D35994: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35998:
    ctx->pc = 0x80D35998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35998u)) return;
    // 80D35998: addi    r4, r4, -13756
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13756);

label_80D3599C:
    ctx->pc = 0x80D3599Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3599Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3599C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3599Cu)) return;
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
label_80D359A0:
    ctx->pc = 0x80D359A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359A0u)) return;
    // 80D359A0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D359A4:
    ctx->pc = 0x80D359A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359A4u)) return;
    // 80D359A4: addi    r4, r4, -13752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13752);

label_80D359A8:
    ctx->pc = 0x80D359A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D359A8: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D359A8u)) return;
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
label_80D359AC:
    ctx->pc = 0x80D359ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359ACu)) return;
    // 80D359AC: li      r4, 2560
    ctx->gpr[4] = (u32)(s32)(2560);

label_80D359B0:
    ctx->pc = 0x80D359B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359B0u)) return;
    // 80D359B0: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D359B4:
    ctx->pc = 0x80D359B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359B4u)) return;
    // 80D359B4: addi    r5, r5, -7392
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7392);

label_80D359B8:
    ctx->pc = 0x80D359B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359B8u)) return;
    // 80D359B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D359BC:
    ctx->pc = 0x80D359BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359BCu)) return;
    // 80D359BC: bl      0x8045F170
    {
            ctx->lr = 0x80D359C0u;
            ctx->pc = 0x8045F170u;
            return;
    }

label_80D359C0:
    ctx->pc = 0x80D359C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D359C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D359C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D359C4:
    ctx->pc = 0x80D359C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359C4u)) return;
    // 80D359C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D359C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D359C8:
    ctx->pc = 0x80D359C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D359C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D359C8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D359CC:
    ctx->pc = 0x80D359CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359CCu)) return;
    // 80D359CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D359D0:
    ctx->pc = 0x80D359D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359D0u)) return;
    // 80D359D0: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D359D4:
    ctx->pc = 0x80D359D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359D4u)) return;
    // 80D359D4: addi    r5, r5, -13748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13748);

label_80D359D8:
    ctx->pc = 0x80D359D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D359D8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D359D8u)) return;
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
label_80D359DC:
    ctx->pc = 0x80D359DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359DCu)) return;
    // 80D359DC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D359E0:
    ctx->pc = 0x80D359E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359E0u)) return;
    // 80D359E0: addi    r5, r5, -13744
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13744);

label_80D359E4:
    ctx->pc = 0x80D359E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D359E4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D359E4u)) return;
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
label_80D359E8:
    ctx->pc = 0x80D359E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359E8u)) return;
    // 80D359E8: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D359EC:
    ctx->pc = 0x80D359ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359ECu)) return;
    // 80D359EC: addi    r5, r5, -13740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13740);

label_80D359F0:
    ctx->pc = 0x80D359F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D359F0: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D359F0u)) return;
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
label_80D359F4:
    ctx->pc = 0x80D359F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359F4u)) return;
    // 80D359F4: bl      0x8045C750
    {
            ctx->lr = 0x80D359F8u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D359F8:
    ctx->pc = 0x80D359F8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D359F8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D359F8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D359FC:
    ctx->pc = 0x80D359FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D359FCu)) return;
    // 80D359FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35A00:
    ctx->pc = 0x80D35A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A00u)) return;
    // 80D35A00: li      r5, 3141
    ctx->gpr[5] = (u32)(s32)(3141);

label_80D35A04:
    ctx->pc = 0x80D35A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A04u)) return;
    // 80D35A04: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35A08:
    ctx->pc = 0x80D35A08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A08u)) return;
    // 80D35A08: addi    r6, r6, -29403
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29403);

label_80D35A0C:
    ctx->pc = 0x80D35A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A0Cu)) return;
    // 80D35A0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D35A10:
    ctx->pc = 0x80D35A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A10u)) return;
    // 80D35A10: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35A14u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35A14:
    ctx->pc = 0x80D35A14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35A14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35A18:
    ctx->pc = 0x80D35A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A18u)) return;
    // 80D35A18: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80D35A1C:
    ctx->pc = 0x80D35A1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A1Cu)) return;
    // 80D35A1C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35A20:
    ctx->pc = 0x80D35A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A20u)) return;
    // 80D35A20: addi    r5, r5, -13748
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13748);

label_80D35A24:
    ctx->pc = 0x80D35A24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35A24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35A24u)) return;
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
label_80D35A28:
    ctx->pc = 0x80D35A28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A28u)) return;
    // 80D35A28: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35A2C:
    ctx->pc = 0x80D35A2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A2Cu)) return;
    // 80D35A2C: addi    r5, r5, -13736
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13736);

label_80D35A30:
    ctx->pc = 0x80D35A30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35A30: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35A30u)) return;
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
label_80D35A34:
    ctx->pc = 0x80D35A34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A34u)) return;
    // 80D35A34: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35A38:
    ctx->pc = 0x80D35A38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A38u)) return;
    // 80D35A38: addi    r5, r5, -13740
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13740);

label_80D35A3C:
    ctx->pc = 0x80D35A3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35A3C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35A3Cu)) return;
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
label_80D35A40:
    ctx->pc = 0x80D35A40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A40u)) return;
    // 80D35A40: bl      0x8045C750
    {
            ctx->lr = 0x80D35A44u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35A44:
    ctx->pc = 0x80D35A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35A44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35A48:
    ctx->pc = 0x80D35A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A48u)) return;
    // 80D35A48: li      r4, 150
    ctx->gpr[4] = (u32)(s32)(150);

label_80D35A4C:
    ctx->pc = 0x80D35A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A4Cu)) return;
    // 80D35A4C: li      r5, 3141
    ctx->gpr[5] = (u32)(s32)(3141);

label_80D35A50:
    ctx->pc = 0x80D35A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A50u)) return;
    // 80D35A50: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35A54:
    ctx->pc = 0x80D35A54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A54u)) return;
    // 80D35A54: addi    r6, r6, -29403
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29403);

label_80D35A58:
    ctx->pc = 0x80D35A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A58u)) return;
    // 80D35A58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D35A5C:
    ctx->pc = 0x80D35A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A5Cu)) return;
    // 80D35A5C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35A60u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35A60:
    ctx->pc = 0x80D35A60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35A60: li      r3, 1311
    ctx->gpr[3] = (u32)(s32)(1311);

label_80D35A64:
    ctx->pc = 0x80D35A64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A64u)) return;
    // 80D35A64: bl      0x8045BFA0
    {
            ctx->lr = 0x80D35A68u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D35A68:
    ctx->pc = 0x80D35A68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D35A68: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35A6C:
    ctx->pc = 0x80D35A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A6Cu)) return;
    // 80D35A6C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35A70:
    ctx->pc = 0x80D35A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35A70: lwz     r0, 0(r3)
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
label_80D35A74:
    ctx->pc = 0x80D35A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A74u)) return;
    // 80D35A74: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35A78:
    ctx->pc = 0x80D35A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A78u)) return;
    // 80D35A78: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35A7C:
    ctx->pc = 0x80D35A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A7Cu)) return;
    // 80D35A7C: addi    r3, r3, -13088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13088);

label_80D35A80:
    ctx->pc = 0x80D35A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35A80: lwzx    r3, r3, r0
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
label_80D35A84:
    ctx->pc = 0x80D35A84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A84u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35A84: lwz     r3, 0(r3)
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
label_80D35A88:
    ctx->pc = 0x80D35A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A88u)) return;
    // 80D35A88: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35A8Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35A8C:
    ctx->pc = 0x80D35A8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35A8C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D35A90:
    ctx->pc = 0x80D35A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A90u)) return;
    // 80D35A90: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35A94u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35A94:
    ctx->pc = 0x80D35A94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35A94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35A98:
    ctx->pc = 0x80D35A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35A98u)) return;
    // 80D35A98: bl      0x8045F220
    {
            ctx->lr = 0x80D35A9Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35A9C:
    ctx->pc = 0x80D35A9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35A9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35A9C: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80D35AA0:
    ctx->pc = 0x80D35AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AA0u)) return;
    // 80D35AA0: addi    r4, r4, 892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(892);

label_80D35AA4:
    ctx->pc = 0x80D35AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AA4u)) return;
    // 80D35AA4: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D35AA8:
    ctx->pc = 0x80D35AA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AA8u)) return;
    // 80D35AA8: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D35AAC:
    ctx->pc = 0x80D35AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AACu)) return;
    // 80D35AAC: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35AB0:
    ctx->pc = 0x80D35AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AB0u)) return;
    // 80D35AB0: addi    r6, r6, -13732
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13732);

label_80D35AB4:
    ctx->pc = 0x80D35AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35AB4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35AB4u)) return;
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
label_80D35AB8:
    ctx->pc = 0x80D35AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AB8u)) return;
    // 80D35AB8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D35ABC:
    ctx->pc = 0x80D35ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35ABCu)) return;
    // 80D35ABC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D35AC0:
    ctx->pc = 0x80D35AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AC0u)) return;
    // 80D35AC0: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35AC4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35AC4:
    ctx->pc = 0x80D35AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35AC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35AC8:
    ctx->pc = 0x80D35AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AC8u)) return;
    // 80D35AC8: bl      0x8045F220
    {
            ctx->lr = 0x80D35ACCu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35ACC:
    ctx->pc = 0x80D35ACCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35ACCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35ACC: lis     r4, -28557
    ctx->gpr[4] = ((u32)(s32)(-28557) << 16);

label_80D35AD0:
    ctx->pc = 0x80D35AD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AD0u)) return;
    // 80D35AD0: addi    r4, r4, 5568
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5568);

label_80D35AD4:
    ctx->pc = 0x80D35AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AD4u)) return;
    // 80D35AD4: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D35AD8:
    ctx->pc = 0x80D35AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AD8u)) return;
    // 80D35AD8: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D35ADC:
    ctx->pc = 0x80D35ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35ADCu)) return;
    // 80D35ADC: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35AE0:
    ctx->pc = 0x80D35AE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AE0u)) return;
    // 80D35AE0: addi    r6, r6, -13728
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13728);

label_80D35AE4:
    ctx->pc = 0x80D35AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35AE4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35AE4u)) return;
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
label_80D35AE8:
    ctx->pc = 0x80D35AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AE8u)) return;
    // 80D35AE8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D35AEC:
    ctx->pc = 0x80D35AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AECu)) return;
    // 80D35AEC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D35AF0:
    ctx->pc = 0x80D35AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AF0u)) return;
    // 80D35AF0: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35AF4u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35AF4:
    ctx->pc = 0x80D35AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35AF4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_80D35AF8:
    ctx->pc = 0x80D35AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35AF8u)) return;
    // 80D35AF8: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35AFCu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35AFC:
    ctx->pc = 0x80D35AFCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35AFCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35AFC: bl      0x8045BFF4
    {
            ctx->lr = 0x80D35B00u;
            ctx->pc = 0x8045BFF4u;
            return;
    }

label_80D35B00:
    ctx->pc = 0x80D35B00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35B00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35B04:
    ctx->pc = 0x80D35B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B04u)) return;
    // 80D35B04: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80D35B08:
    ctx->pc = 0x80D35B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B08u)) return;
    // 80D35B08: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35B0C:
    ctx->pc = 0x80D35B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B0Cu)) return;
    // 80D35B0C: addi    r5, r5, -13724
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13724);

label_80D35B10:
    ctx->pc = 0x80D35B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35B10: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35B10u)) return;
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
label_80D35B14:
    ctx->pc = 0x80D35B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B14u)) return;
    // 80D35B14: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35B18:
    ctx->pc = 0x80D35B18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B18u)) return;
    // 80D35B18: addi    r5, r5, -13720
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13720);

label_80D35B1C:
    ctx->pc = 0x80D35B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35B1C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35B1Cu)) return;
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
label_80D35B20:
    ctx->pc = 0x80D35B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B20u)) return;
    // 80D35B20: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35B24:
    ctx->pc = 0x80D35B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B24u)) return;
    // 80D35B24: addi    r5, r5, -13716
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13716);

label_80D35B28:
    ctx->pc = 0x80D35B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35B28: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35B28u)) return;
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
label_80D35B2C:
    ctx->pc = 0x80D35B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B2Cu)) return;
    // 80D35B2C: bl      0x8045C750
    {
            ctx->lr = 0x80D35B30u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35B30:
    ctx->pc = 0x80D35B30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35B30: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35B34:
    ctx->pc = 0x80D35B34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B34u)) return;
    // 80D35B34: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_80D35B38:
    ctx->pc = 0x80D35B38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B38u)) return;
    // 80D35B38: li      r5, 5189
    ctx->gpr[5] = (u32)(s32)(5189);

label_80D35B3C:
    ctx->pc = 0x80D35B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B3Cu)) return;
    // 80D35B3C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35B40:
    ctx->pc = 0x80D35B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B40u)) return;
    // 80D35B40: addi    r6, r6, -26075
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26075);

label_80D35B44:
    ctx->pc = 0x80D35B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B44u)) return;
    // 80D35B44: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D35B48:
    ctx->pc = 0x80D35B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B48u)) return;
    // 80D35B48: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35B4Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35B4C:
    ctx->pc = 0x80D35B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35B4C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D35B50:
    ctx->pc = 0x80D35B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B50u)) return;
    // 80D35B50: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35B54u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35B54:
    ctx->pc = 0x80D35B54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35B54: li      r3, 1312
    ctx->gpr[3] = (u32)(s32)(1312);

label_80D35B58:
    ctx->pc = 0x80D35B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B58u)) return;
    // 80D35B58: bl      0x8045BFA0
    {
            ctx->lr = 0x80D35B5Cu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D35B5C:
    ctx->pc = 0x80D35B5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D35B5C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35B60:
    ctx->pc = 0x80D35B60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B60u)) return;
    // 80D35B60: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35B64:
    ctx->pc = 0x80D35B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35B64: lwz     r0, 0(r3)
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
label_80D35B68:
    ctx->pc = 0x80D35B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B68u)) return;
    // 80D35B68: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35B6C:
    ctx->pc = 0x80D35B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B6Cu)) return;
    // 80D35B6C: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35B70:
    ctx->pc = 0x80D35B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B70u)) return;
    // 80D35B70: addi    r3, r3, -13088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13088);

label_80D35B74:
    ctx->pc = 0x80D35B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35B74: lwzx    r3, r3, r0
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
label_80D35B78:
    ctx->pc = 0x80D35B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35B78: lwz     r3, 4(r3)
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
label_80D35B7C:
    ctx->pc = 0x80D35B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B7Cu)) return;
    // 80D35B7C: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35B80u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35B80:
    ctx->pc = 0x80D35B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35B80: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D35B84:
    ctx->pc = 0x80D35B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B84u)) return;
    // 80D35B84: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35B88u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35B88:
    ctx->pc = 0x80D35B88u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B88u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35B88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35B8C:
    ctx->pc = 0x80D35B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B8Cu)) return;
    // 80D35B8C: bl      0x8045F220
    {
            ctx->lr = 0x80D35B90u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35B90:
    ctx->pc = 0x80D35B90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35B90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35B90: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35B94:
    ctx->pc = 0x80D35B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B94u)) return;
    // 80D35B94: addi    r4, r4, 25420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25420);

label_80D35B98:
    ctx->pc = 0x80D35B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B98u)) return;
    // 80D35B98: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D35B9C:
    ctx->pc = 0x80D35B9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35B9Cu)) return;
    // 80D35B9C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D35BA0:
    ctx->pc = 0x80D35BA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BA0u)) return;
    // 80D35BA0: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35BA4:
    ctx->pc = 0x80D35BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BA4u)) return;
    // 80D35BA4: addi    r6, r6, -13712
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13712);

label_80D35BA8:
    ctx->pc = 0x80D35BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35BA8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35BA8u)) return;
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
label_80D35BAC:
    ctx->pc = 0x80D35BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BACu)) return;
    // 80D35BAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D35BB0:
    ctx->pc = 0x80D35BB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BB0u)) return;
    // 80D35BB0: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_80D35BB4:
    ctx->pc = 0x80D35BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BB4u)) return;
    // 80D35BB4: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35BB8u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35BB8:
    ctx->pc = 0x80D35BB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35BB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35BB8: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_80D35BBC:
    ctx->pc = 0x80D35BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BBCu)) return;
    // 80D35BBC: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35BC0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35BC0:
    ctx->pc = 0x80D35BC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35BC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35BC0: bl      0x8045F32C
    {
            ctx->lr = 0x80D35BC4u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D35BC4:
    ctx->pc = 0x80D35BC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35BC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D35BC4: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35BC8:
    ctx->pc = 0x80D35BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BC8u)) return;
    // 80D35BC8: addi    r3, r3, 7536
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7536);

label_80D35BCC:
    ctx->pc = 0x80D35BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BCCu)) return;
    // 80D35BCC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D35BD0:
    ctx->pc = 0x80D35BD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BD0u)) return;
    // 80D35BD0: bl      0x80D36EC0
    {
            ctx->lr = 0x80D35BD4u;
            goto label_80D36EC0;
    }

label_80D35BD4:
    ctx->pc = 0x80D35BD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35BD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35BD4: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D35BD8:
    ctx->pc = 0x80D35BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BD8u)) return;
    // 80D35BD8: addi    r4, r4, 7616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7616);

label_80D35BDC:
    ctx->pc = 0x80D35BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35BDC: stw     r3, 0(r4)
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
label_80D35BE0:
    ctx->pc = 0x80D35BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BE0u)) return;
    // 80D35BE0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35BE4:
    ctx->pc = 0x80D35BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BE4u)) return;
    // 80D35BE4: addi    r4, r4, -13708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13708);

label_80D35BE8:
    ctx->pc = 0x80D35BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35BE8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35BE8u)) return;
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
label_80D35BEC:
    ctx->pc = 0x80D35BECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BECu)) return;
    // 80D35BEC: bl      0x80D36FC0
    {
            ctx->lr = 0x80D35BF0u;
            goto label_80D36FC0;
    }

label_80D35BF0:
    ctx->pc = 0x80D35BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D35BF0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35BF4:
    ctx->pc = 0x80D35BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BF4u)) return;
    // 80D35BF4: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D35BF8:
    ctx->pc = 0x80D35BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35BF8: lwz     r3, 0(r3)
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
label_80D35BFC:
    ctx->pc = 0x80D35BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35BFCu)) return;
    // 80D35BFC: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35C00:
    ctx->pc = 0x80D35C00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C00u)) return;
    // 80D35C00: addi    r4, r4, -13712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13712);

label_80D35C04:
    ctx->pc = 0x80D35C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35C04: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35C04u)) return;
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
label_80D35C08:
    ctx->pc = 0x80D35C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C08u)) return;
    // 80D35C08: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80D35C0C:
    ctx->pc = 0x80D35C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C0Cu)) return;
    // 80D35C0C: bl      0x80D36FB0
    {
            ctx->lr = 0x80D35C10u;
            goto label_80D36FB0;
    }

label_80D35C10:
    ctx->pc = 0x80D35C10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35C10: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D35C14:
    ctx->pc = 0x80D35C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C14u)) return;
    // 80D35C14: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35C18u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35C18:
    ctx->pc = 0x80D35C18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D35C18: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80D35C1C:
    ctx->pc = 0x80D35C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C1Cu)) return;
    // 80D35C1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35C20:
    ctx->pc = 0x80D35C20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C20u)) return;
    // 80D35C20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D35C24:
    ctx->pc = 0x80D35C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C24u)) return;
    // 80D35C24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D35C28:
    ctx->pc = 0x80D35C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C28u)) return;
    // 80D35C28: bl      0x80D36C50
    {
            ctx->lr = 0x80D35C2Cu;
            goto label_80D36C50;
    }

label_80D35C2C:
    ctx->pc = 0x80D35C2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D35C2C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80D35C30:
    ctx->pc = 0x80D35C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C30u)) return;
    // 80D35C30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35C34:
    ctx->pc = 0x80D35C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C34u)) return;
    // 80D35C34: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80D35C38:
    ctx->pc = 0x80D35C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C38u)) return;
    // 80D35C38: li      r6, 85
    ctx->gpr[6] = (u32)(s32)(85);

label_80D35C3C:
    ctx->pc = 0x80D35C3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C3Cu)) return;
    // 80D35C3C: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80D35C40:
    ctx->pc = 0x80D35C40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C40u)) return;
    // 80D35C40: bl      0x80D362F4
    {
            ctx->lr = 0x80D35C44u;
            goto label_80D362F4;
    }

label_80D35C44:
    ctx->pc = 0x80D35C44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35C44: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D35C48:
    ctx->pc = 0x80D35C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C48u)) return;
    // 80D35C48: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35C4Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35C4C:
    ctx->pc = 0x80D35C4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D35C4C: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35C50:
    ctx->pc = 0x80D35C50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C50u)) return;
    // 80D35C50: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D35C54:
    ctx->pc = 0x80D35C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35C54: lwz     r3, 0(r3)
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
label_80D35C58:
    ctx->pc = 0x80D35C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C58u)) return;
    // 80D35C58: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35C5C:
    ctx->pc = 0x80D35C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C5Cu)) return;
    // 80D35C5C: addi    r4, r4, -13704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13704);

label_80D35C60:
    ctx->pc = 0x80D35C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35C60: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35C60u)) return;
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
label_80D35C64:
    ctx->pc = 0x80D35C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C64u)) return;
    // 80D35C64: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80D35C68:
    ctx->pc = 0x80D35C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C68u)) return;
    // 80D35C68: bl      0x80D36FB0
    {
            ctx->lr = 0x80D35C6Cu;
            goto label_80D36FB0;
    }

label_80D35C6C:
    ctx->pc = 0x80D35C6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35C6C: bl      0x80D36390
    {
            ctx->lr = 0x80D35C70u;
            goto label_80D36390;
    }

label_80D35C70:
    ctx->pc = 0x80D35C70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35C70: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D35C74:
    ctx->pc = 0x80D35C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C74u)) return;
    // 80D35C74: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35C78u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35C78:
    ctx->pc = 0x80D35C78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D35C78: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35C7C:
    ctx->pc = 0x80D35C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C7Cu)) return;
    // 80D35C7C: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D35C80:
    ctx->pc = 0x80D35C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35C80: lwz     r3, 0(r3)
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
label_80D35C84:
    ctx->pc = 0x80D35C84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C84u)) return;
    // 80D35C84: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D35C88:
    ctx->pc = 0x80D35C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C88u)) return;
    // 80D35C88: bl      0x80D36FCC
    {
            ctx->lr = 0x80D35C8Cu;
            goto label_80D36FCC;
    }

label_80D35C8C:
    ctx->pc = 0x80D35C8Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35C8Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D35C8C: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35C90:
    ctx->pc = 0x80D35C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C90u)) return;
    // 80D35C90: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D35C94:
    ctx->pc = 0x80D35C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C94u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35C94: lwz     r3, 0(r3)
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
label_80D35C98:
    ctx->pc = 0x80D35C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C98u)) return;
    // 80D35C98: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35C9C:
    ctx->pc = 0x80D35C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35C9Cu)) return;
    // 80D35C9C: addi    r4, r4, -13712
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13712);

label_80D35CA0:
    ctx->pc = 0x80D35CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35CA0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35CA0u)) return;
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
label_80D35CA4:
    ctx->pc = 0x80D35CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CA4u)) return;
    // 80D35CA4: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80D35CA8:
    ctx->pc = 0x80D35CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CA8u)) return;
    // 80D35CA8: bl      0x80D36FB0
    {
            ctx->lr = 0x80D35CACu;
            goto label_80D36FB0;
    }

label_80D35CAC:
    ctx->pc = 0x80D35CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35CAC: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D35CB0:
    ctx->pc = 0x80D35CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CB0u)) return;
    // 80D35CB0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35CB4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35CB4:
    ctx->pc = 0x80D35CB4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35CB4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D35CB4: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80D35CB8:
    ctx->pc = 0x80D35CB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CB8u)) return;
    // 80D35CB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35CBC:
    ctx->pc = 0x80D35CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CBCu)) return;
    // 80D35CBC: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_80D35CC0:
    ctx->pc = 0x80D35CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CC0u)) return;
    // 80D35CC0: li      r6, 85
    ctx->gpr[6] = (u32)(s32)(85);

label_80D35CC4:
    ctx->pc = 0x80D35CC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CC4u)) return;
    // 80D35CC4: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80D35CC8:
    ctx->pc = 0x80D35CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CC8u)) return;
    // 80D35CC8: bl      0x80D362F4
    {
            ctx->lr = 0x80D35CCCu;
            goto label_80D362F4;
    }

label_80D35CCC:
    ctx->pc = 0x80D35CCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35CCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D35CCC: li      r3, 1333
    ctx->gpr[3] = (u32)(s32)(1333);

label_80D35CD0:
    ctx->pc = 0x80D35CD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CD0u)) return;
    // 80D35CD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35CD4:
    ctx->pc = 0x80D35CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CD4u)) return;
    // 80D35CD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D35CD8:
    ctx->pc = 0x80D35CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CD8u)) return;
    // 80D35CD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D35CDC:
    ctx->pc = 0x80D35CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CDCu)) return;
    // 80D35CDC: bl      0x80D36C50
    {
            ctx->lr = 0x80D35CE0u;
            goto label_80D36C50;
    }

label_80D35CE0:
    ctx->pc = 0x80D35CE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35CE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35CE0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D35CE4:
    ctx->pc = 0x80D35CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CE4u)) return;
    // 80D35CE4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35CE8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35CE8:
    ctx->pc = 0x80D35CE8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35CE8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D35CE8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35CEC:
    ctx->pc = 0x80D35CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CECu)) return;
    // 80D35CEC: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D35CF0:
    ctx->pc = 0x80D35CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35CF0: lwz     r3, 0(r3)
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
label_80D35CF4:
    ctx->pc = 0x80D35CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CF4u)) return;
    // 80D35CF4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35CF8:
    ctx->pc = 0x80D35CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CF8u)) return;
    // 80D35CF8: addi    r4, r4, -13704
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13704);

label_80D35CFC:
    ctx->pc = 0x80D35CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35CFC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35CFCu)) return;
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
label_80D35D00:
    ctx->pc = 0x80D35D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D00u)) return;
    // 80D35D00: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80D35D04:
    ctx->pc = 0x80D35D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D04u)) return;
    // 80D35D04: bl      0x80D36FB0
    {
            ctx->lr = 0x80D35D08u;
            goto label_80D36FB0;
    }

label_80D35D08:
    ctx->pc = 0x80D35D08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35D08: bl      0x80D36390
    {
            ctx->lr = 0x80D35D0Cu;
            goto label_80D36390;
    }

label_80D35D0C:
    ctx->pc = 0x80D35D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35D0C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_80D35D10:
    ctx->pc = 0x80D35D10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D10u)) return;
    // 80D35D10: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35D14u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35D14:
    ctx->pc = 0x80D35D14u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D14u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35D14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35D18:
    ctx->pc = 0x80D35D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D18u)) return;
    // 80D35D18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35D1C:
    ctx->pc = 0x80D35D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D1Cu)) return;
    // 80D35D1C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35D20:
    ctx->pc = 0x80D35D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D20u)) return;
    // 80D35D20: addi    r5, r5, -13700
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13700);

label_80D35D24:
    ctx->pc = 0x80D35D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D24u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35D24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35D24u)) return;
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
label_80D35D28:
    ctx->pc = 0x80D35D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D28u)) return;
    // 80D35D28: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35D2C:
    ctx->pc = 0x80D35D2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D2Cu)) return;
    // 80D35D2C: addi    r5, r5, -13696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13696);

label_80D35D30:
    ctx->pc = 0x80D35D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35D30: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35D30u)) return;
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
label_80D35D34:
    ctx->pc = 0x80D35D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D34u)) return;
    // 80D35D34: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35D38:
    ctx->pc = 0x80D35D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D38u)) return;
    // 80D35D38: addi    r5, r5, -13692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13692);

label_80D35D3C:
    ctx->pc = 0x80D35D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35D3C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35D3Cu)) return;
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
label_80D35D40:
    ctx->pc = 0x80D35D40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D40u)) return;
    // 80D35D40: bl      0x8045C750
    {
            ctx->lr = 0x80D35D44u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35D44:
    ctx->pc = 0x80D35D44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35D44: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35D48:
    ctx->pc = 0x80D35D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D48u)) return;
    // 80D35D48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35D4C:
    ctx->pc = 0x80D35D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D4Cu)) return;
    // 80D35D4C: li      r5, 2885
    ctx->gpr[5] = (u32)(s32)(2885);

label_80D35D50:
    ctx->pc = 0x80D35D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D50u)) return;
    // 80D35D50: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35D54:
    ctx->pc = 0x80D35D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D54u)) return;
    // 80D35D54: addi    r6, r6, -28891
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28891);

label_80D35D58:
    ctx->pc = 0x80D35D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D58u)) return;
    // 80D35D58: li      r7, 256
    ctx->gpr[7] = (u32)(s32)(256);

label_80D35D5C:
    ctx->pc = 0x80D35D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D5Cu)) return;
    // 80D35D5C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35D60u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35D60:
    ctx->pc = 0x80D35D60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35D60: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D35D64:
    ctx->pc = 0x80D35D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D64u)) return;
    // 80D35D64: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35D68u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35D68:
    ctx->pc = 0x80D35D68u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D68u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35D68: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35D6C:
    ctx->pc = 0x80D35D6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D6Cu)) return;
    // 80D35D6C: bl      0x8045F220
    {
            ctx->lr = 0x80D35D70u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35D70:
    ctx->pc = 0x80D35D70u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D70u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35D70: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35D74:
    ctx->pc = 0x80D35D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D74u)) return;
    // 80D35D74: addi    r4, r4, 6676
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6676);

label_80D35D78:
    ctx->pc = 0x80D35D78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D78u)) return;
    // 80D35D78: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D35D7C:
    ctx->pc = 0x80D35D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D7Cu)) return;
    // 80D35D7C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D35D80:
    ctx->pc = 0x80D35D80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D80u)) return;
    // 80D35D80: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35D84:
    ctx->pc = 0x80D35D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D84u)) return;
    // 80D35D84: addi    r6, r6, -13688
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13688);

label_80D35D88:
    ctx->pc = 0x80D35D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35D88: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35D88u)) return;
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
label_80D35D8C:
    ctx->pc = 0x80D35D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D8Cu)) return;
    // 80D35D8C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D35D90:
    ctx->pc = 0x80D35D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D90u)) return;
    // 80D35D90: li      r7, 72
    ctx->gpr[7] = (u32)(s32)(72);

label_80D35D94:
    ctx->pc = 0x80D35D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D94u)) return;
    // 80D35D94: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35D98u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35D98:
    ctx->pc = 0x80D35D98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35D98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35D98: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80D35D9C:
    ctx->pc = 0x80D35D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35D9Cu)) return;
    // 80D35D9C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35DA0u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35DA0:
    ctx->pc = 0x80D35DA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35DA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35DA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35DA4:
    ctx->pc = 0x80D35DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DA4u)) return;
    // 80D35DA4: li      r4, 95
    ctx->gpr[4] = (u32)(s32)(95);

label_80D35DA8:
    ctx->pc = 0x80D35DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DA8u)) return;
    // 80D35DA8: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35DAC:
    ctx->pc = 0x80D35DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DACu)) return;
    // 80D35DAC: addi    r5, r5, -13684
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13684);

label_80D35DB0:
    ctx->pc = 0x80D35DB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35DB0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35DB0u)) return;
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
label_80D35DB4:
    ctx->pc = 0x80D35DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DB4u)) return;
    // 80D35DB4: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35DB8:
    ctx->pc = 0x80D35DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DB8u)) return;
    // 80D35DB8: addi    r5, r5, -13680
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13680);

label_80D35DBC:
    ctx->pc = 0x80D35DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DBCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35DBC: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35DBCu)) return;
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
label_80D35DC0:
    ctx->pc = 0x80D35DC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DC0u)) return;
    // 80D35DC0: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35DC4:
    ctx->pc = 0x80D35DC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DC4u)) return;
    // 80D35DC4: addi    r5, r5, -13676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13676);

label_80D35DC8:
    ctx->pc = 0x80D35DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35DC8: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35DC8u)) return;
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
label_80D35DCC:
    ctx->pc = 0x80D35DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DCCu)) return;
    // 80D35DCC: bl      0x8045C750
    {
            ctx->lr = 0x80D35DD0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35DD0:
    ctx->pc = 0x80D35DD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35DD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35DD0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35DD4:
    ctx->pc = 0x80D35DD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DD4u)) return;
    // 80D35DD4: li      r4, 95
    ctx->gpr[4] = (u32)(s32)(95);

label_80D35DD8:
    ctx->pc = 0x80D35DD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DD8u)) return;
    // 80D35DD8: li      r5, 2885
    ctx->gpr[5] = (u32)(s32)(2885);

label_80D35DDC:
    ctx->pc = 0x80D35DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DDCu)) return;
    // 80D35DDC: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35DE0:
    ctx->pc = 0x80D35DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DE0u)) return;
    // 80D35DE0: addi    r6, r6, -26075
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-26075);

label_80D35DE4:
    ctx->pc = 0x80D35DE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DE4u)) return;
    // 80D35DE4: li      r7, 512
    ctx->gpr[7] = (u32)(s32)(512);

label_80D35DE8:
    ctx->pc = 0x80D35DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DE8u)) return;
    // 80D35DE8: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35DECu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35DEC:
    ctx->pc = 0x80D35DECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35DECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35DEC: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_80D35DF0:
    ctx->pc = 0x80D35DF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DF0u)) return;
    // 80D35DF0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35DF4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35DF4:
    ctx->pc = 0x80D35DF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35DF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35DF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35DF8:
    ctx->pc = 0x80D35DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DF8u)) return;
    // 80D35DF8: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D35DFC:
    ctx->pc = 0x80D35DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35DFCu)) return;
    // 80D35DFC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35E00:
    ctx->pc = 0x80D35E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E00u)) return;
    // 80D35E00: addi    r5, r5, -13672
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13672);

label_80D35E04:
    ctx->pc = 0x80D35E04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35E04: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35E04u)) return;
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
label_80D35E08:
    ctx->pc = 0x80D35E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E08u)) return;
    // 80D35E08: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35E0C:
    ctx->pc = 0x80D35E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E0Cu)) return;
    // 80D35E0C: addi    r5, r5, -13668
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13668);

label_80D35E10:
    ctx->pc = 0x80D35E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35E10: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35E10u)) return;
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
label_80D35E14:
    ctx->pc = 0x80D35E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E14u)) return;
    // 80D35E14: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35E18:
    ctx->pc = 0x80D35E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E18u)) return;
    // 80D35E18: addi    r5, r5, -13664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13664);

label_80D35E1C:
    ctx->pc = 0x80D35E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35E1C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35E1Cu)) return;
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
label_80D35E20:
    ctx->pc = 0x80D35E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E20u)) return;
    // 80D35E20: bl      0x8045C750
    {
            ctx->lr = 0x80D35E24u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35E24:
    ctx->pc = 0x80D35E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35E24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35E28:
    ctx->pc = 0x80D35E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E28u)) return;
    // 80D35E28: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D35E2C:
    ctx->pc = 0x80D35E2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E2Cu)) return;
    // 80D35E2C: li      r5, 2885
    ctx->gpr[5] = (u32)(s32)(2885);

label_80D35E30:
    ctx->pc = 0x80D35E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E30u)) return;
    // 80D35E30: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35E34:
    ctx->pc = 0x80D35E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E34u)) return;
    // 80D35E34: addi    r6, r6, -25307
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25307);

label_80D35E38:
    ctx->pc = 0x80D35E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E38u)) return;
    // 80D35E38: li      r7, 512
    ctx->gpr[7] = (u32)(s32)(512);

label_80D35E3C:
    ctx->pc = 0x80D35E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E3Cu)) return;
    // 80D35E3C: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35E40u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35E40:
    ctx->pc = 0x80D35E40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D35E40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D35E44:
    ctx->pc = 0x80D35E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E44u)) return;
    // 80D35E44: li      r4, 120
    ctx->gpr[4] = (u32)(s32)(120);

label_80D35E48:
    ctx->pc = 0x80D35E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E48u)) return;
    // 80D35E48: li      r5, 12925
    ctx->gpr[5] = (u32)(s32)(12925);

label_80D35E4C:
    ctx->pc = 0x80D35E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E4Cu)) return;
    // 80D35E4C: bl      0x8045C0F8
    {
            ctx->lr = 0x80D35E50u;
            ctx->pc = 0x8045C0F8u;
            return;
    }

label_80D35E50:
    ctx->pc = 0x80D35E50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35E50: li      r3, 1313
    ctx->gpr[3] = (u32)(s32)(1313);

label_80D35E54:
    ctx->pc = 0x80D35E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E54u)) return;
    // 80D35E54: bl      0x8045BFA0
    {
            ctx->lr = 0x80D35E58u;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D35E58:
    ctx->pc = 0x80D35E58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D35E58: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D35E5C:
    ctx->pc = 0x80D35E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E5Cu)) return;
    // 80D35E5C: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D35E60:
    ctx->pc = 0x80D35E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D35E60: lwz     r0, 0(r3)
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
label_80D35E64:
    ctx->pc = 0x80D35E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E64u)) return;
    // 80D35E64: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D35E68:
    ctx->pc = 0x80D35E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E68u)) return;
    // 80D35E68: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D35E6C:
    ctx->pc = 0x80D35E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E6Cu)) return;
    // 80D35E6C: addi    r3, r3, -13088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13088);

label_80D35E70:
    ctx->pc = 0x80D35E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35E70: lwzx    r3, r3, r0
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
label_80D35E74:
    ctx->pc = 0x80D35E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35E74: lwz     r3, 8(r3)
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
label_80D35E78:
    ctx->pc = 0x80D35E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E78u)) return;
    // 80D35E78: bl      0x8045F6FC
    {
            ctx->lr = 0x80D35E7Cu;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D35E7C:
    ctx->pc = 0x80D35E7Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E7Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35E7C: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80D35E80:
    ctx->pc = 0x80D35E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E80u)) return;
    // 80D35E80: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35E84u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35E84:
    ctx->pc = 0x80D35E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D35E84: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35E88:
    ctx->pc = 0x80D35E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E88u)) return;
    // 80D35E88: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D35E8C:
    ctx->pc = 0x80D35E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35E8C: lwz     r3, 0(r3)
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
label_80D35E90:
    ctx->pc = 0x80D35E90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E90u)) return;
    // 80D35E90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D35E94:
    ctx->pc = 0x80D35E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E94u)) return;
    // 80D35E94: bl      0x8045EE90
    {
            ctx->lr = 0x80D35E98u;
            ctx->pc = 0x8045EE90u;
            return;
    }

label_80D35E98:
    ctx->pc = 0x80D35E98u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35E98u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D35E98: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35E9C:
    ctx->pc = 0x80D35E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35E9Cu)) return;
    // 80D35E9C: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D35EA0:
    ctx->pc = 0x80D35EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D35EA0: lwz     r3, 0(r3)
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
label_80D35EA4:
    ctx->pc = 0x80D35EA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EA4u)) return;
    // 80D35EA4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35EA8:
    ctx->pc = 0x80D35EA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EA8u)) return;
    // 80D35EA8: addi    r4, r4, -13660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13660);

label_80D35EAC:
    ctx->pc = 0x80D35EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35EAC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35EACu)) return;
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
label_80D35EB0:
    ctx->pc = 0x80D35EB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EB0u)) return;
    // 80D35EB0: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35EB4:
    ctx->pc = 0x80D35EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EB4u)) return;
    // 80D35EB4: addi    r4, r4, -13656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13656);

label_80D35EB8:
    ctx->pc = 0x80D35EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35EB8: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35EB8u)) return;
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
label_80D35EBC:
    ctx->pc = 0x80D35EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EBCu)) return;
    // 80D35EBC: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35EC0:
    ctx->pc = 0x80D35EC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EC0u)) return;
    // 80D35EC0: addi    r4, r4, -13652
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13652);

label_80D35EC4:
    ctx->pc = 0x80D35EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35EC4: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D35EC4u)) return;
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
label_80D35EC8:
    ctx->pc = 0x80D35EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EC8u)) return;
    // 80D35EC8: bl      0x8045EF2C
    {
            ctx->lr = 0x80D35ECCu;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D35ECC:
    ctx->pc = 0x80D35ECCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35ECCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    // 80D35ECC: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35ED0:
    ctx->pc = 0x80D35ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35ED0u)) return;
    // 80D35ED0: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D35ED4:
    ctx->pc = 0x80D35ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35ED4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D35ED4: lwz     r3, 0(r3)
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
label_80D35ED8:
    ctx->pc = 0x80D35ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35ED8u)) return;
    // 80D35ED8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_80D35EDC:
    ctx->pc = 0x80D35EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EDCu)) return;
    // 80D35EDC: addi    r4, r4, -1554
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1554);

label_80D35EE0:
    ctx->pc = 0x80D35EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EE0u)) return;
    // 80D35EE0: li      r5, 12624
    ctx->gpr[5] = (u32)(s32)(12624);

label_80D35EE4:
    ctx->pc = 0x80D35EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EE4u)) return;
    // 80D35EE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D35EE8:
    ctx->pc = 0x80D35EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EE8u)) return;
    // 80D35EE8: bl      0x8045EEA8
    {
            ctx->lr = 0x80D35EECu;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D35EEC:
    ctx->pc = 0x80D35EECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35EECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    // 80D35EEC: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35EF0:
    ctx->pc = 0x80D35EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EF0u)) return;
    // 80D35EF0: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D35EF4:
    ctx->pc = 0x80D35EF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D35EF4: lwz     r3, 0(r3)
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
label_80D35EF8:
    ctx->pc = 0x80D35EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EF8u)) return;
    // 80D35EF8: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D35EFC:
    ctx->pc = 0x80D35EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35EFCu)) return;
    // 80D35EFC: addi    r4, r4, 7488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7488);

label_80D35F00:
    ctx->pc = 0x80D35F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F00u)) return;
    // 80D35F00: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35F04:
    ctx->pc = 0x80D35F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F04u)) return;
    // 80D35F04: addi    r5, r5, 26248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26248);

label_80D35F08:
    ctx->pc = 0x80D35F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F08u)) return;
    // 80D35F08: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35F0C:
    ctx->pc = 0x80D35F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F0Cu)) return;
    // 80D35F0C: addi    r6, r6, -13712
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13712);

label_80D35F10:
    ctx->pc = 0x80D35F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F10u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35F10: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35F10u)) return;
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
label_80D35F14:
    ctx->pc = 0x80D35F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F14u)) return;
    // 80D35F14: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D35F18:
    ctx->pc = 0x80D35F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F18u)) return;
    // 80D35F18: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D35F1C:
    ctx->pc = 0x80D35F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F1Cu)) return;
    // 80D35F1C: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35F20u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35F20:
    ctx->pc = 0x80D35F20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35F20: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_80D35F24:
    ctx->pc = 0x80D35F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F24u)) return;
    // 80D35F24: bl      0x80406090
    {
            ctx->lr = 0x80D35F28u;
            ctx->pc = 0x80406090u;
            return;
    }

label_80D35F28:
    ctx->pc = 0x80D35F28u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F28u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35F28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35F2C:
    ctx->pc = 0x80D35F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F2Cu)) return;
    // 80D35F2C: bl      0x8045F220
    {
            ctx->lr = 0x80D35F30u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D35F30:
    ctx->pc = 0x80D35F30u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35F30: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35F34:
    ctx->pc = 0x80D35F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F34u)) return;
    // 80D35F34: addi    r4, r4, 15656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15656);

label_80D35F38:
    ctx->pc = 0x80D35F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F38u)) return;
    // 80D35F38: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D35F3C:
    ctx->pc = 0x80D35F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F3Cu)) return;
    // 80D35F3C: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D35F40:
    ctx->pc = 0x80D35F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F40u)) return;
    // 80D35F40: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D35F44:
    ctx->pc = 0x80D35F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F44u)) return;
    // 80D35F44: addi    r6, r6, -13712
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13712);

label_80D35F48:
    ctx->pc = 0x80D35F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D35F48: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D35F48u)) return;
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
label_80D35F4C:
    ctx->pc = 0x80D35F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F4Cu)) return;
    // 80D35F4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D35F50:
    ctx->pc = 0x80D35F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F50u)) return;
    // 80D35F50: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_80D35F54:
    ctx->pc = 0x80D35F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F54u)) return;
    // 80D35F54: bl      0x8045EBE4
    {
            ctx->lr = 0x80D35F58u;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D35F58:
    ctx->pc = 0x80D35F58u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F58u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D35F58: bl      0x8045F32C
    {
            ctx->lr = 0x80D35F5Cu;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D35F5C:
    ctx->pc = 0x80D35F5Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F5Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35F5C: li      r3, 30
    ctx->gpr[3] = (u32)(s32)(30);

label_80D35F60:
    ctx->pc = 0x80D35F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F60u)) return;
    // 80D35F60: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35F64u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35F64:
    ctx->pc = 0x80D35F64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D35F64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35F68:
    ctx->pc = 0x80D35F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F68u)) return;
    // 80D35F68: li      r4, 35
    ctx->gpr[4] = (u32)(s32)(35);

label_80D35F6C:
    ctx->pc = 0x80D35F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F6Cu)) return;
    // 80D35F6C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35F70:
    ctx->pc = 0x80D35F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F70u)) return;
    // 80D35F70: addi    r5, r5, -13648
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13648);

label_80D35F74:
    ctx->pc = 0x80D35F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35F74: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35F74u)) return;
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
label_80D35F78:
    ctx->pc = 0x80D35F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F78u)) return;
    // 80D35F78: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35F7C:
    ctx->pc = 0x80D35F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F7Cu)) return;
    // 80D35F7C: addi    r5, r5, -13644
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13644);

label_80D35F80:
    ctx->pc = 0x80D35F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D35F80: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35F80u)) return;
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
label_80D35F84:
    ctx->pc = 0x80D35F84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F84u)) return;
    // 80D35F84: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35F88:
    ctx->pc = 0x80D35F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F88u)) return;
    // 80D35F88: addi    r5, r5, -13640
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13640);

label_80D35F8C:
    ctx->pc = 0x80D35F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D35F8C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35F8Cu)) return;
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
label_80D35F90:
    ctx->pc = 0x80D35F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F90u)) return;
    // 80D35F90: bl      0x8045C750
    {
            ctx->lr = 0x80D35F94u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D35F94:
    ctx->pc = 0x80D35F94u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35F94u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D35F94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35F98:
    ctx->pc = 0x80D35F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F98u)) return;
    // 80D35F98: li      r4, 35
    ctx->gpr[4] = (u32)(s32)(35);

label_80D35F9C:
    ctx->pc = 0x80D35F9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35F9Cu)) return;
    // 80D35F9C: li      r5, 1861
    ctx->gpr[5] = (u32)(s32)(1861);

label_80D35FA0:
    ctx->pc = 0x80D35FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FA0u)) return;
    // 80D35FA0: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D35FA4:
    ctx->pc = 0x80D35FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FA4u)) return;
    // 80D35FA4: addi    r6, r6, -18651
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-18651);

label_80D35FA8:
    ctx->pc = 0x80D35FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FA8u)) return;
    // 80D35FA8: li      r7, 768
    ctx->gpr[7] = (u32)(s32)(768);

label_80D35FAC:
    ctx->pc = 0x80D35FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FACu)) return;
    // 80D35FAC: bl      0x8045C7B4
    {
            ctx->lr = 0x80D35FB0u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D35FB0:
    ctx->pc = 0x80D35FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D35FB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35FB4:
    ctx->pc = 0x80D35FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FB4u)) return;
    // 80D35FB4: li      r4, 1334
    ctx->gpr[4] = (u32)(s32)(1334);

label_80D35FB8:
    ctx->pc = 0x80D35FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FB8u)) return;
    // 80D35FB8: li      r5, 1800
    ctx->gpr[5] = (u32)(s32)(1800);

label_80D35FBC:
    ctx->pc = 0x80D35FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FBCu)) return;
    // 80D35FBC: bl      0x80D36A84
    {
            ctx->lr = 0x80D35FC0u;
            goto label_80D36A84;
    }

label_80D35FC0:
    ctx->pc = 0x80D35FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D35FC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D35FC4:
    ctx->pc = 0x80D35FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FC4u)) return;
    // 80D35FC4: li      r4, -40
    ctx->gpr[4] = (u32)(s32)(-40);

label_80D35FC8:
    ctx->pc = 0x80D35FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FC8u)) return;
    // 80D35FC8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D35FCC:
    ctx->pc = 0x80D35FCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FCCu)) return;
    // 80D35FCC: bl      0x80D36B60
    {
            ctx->lr = 0x80D35FD0u;
            goto label_80D36B60;
    }

label_80D35FD0:
    ctx->pc = 0x80D35FD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35FD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D35FD0: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80D35FD4:
    ctx->pc = 0x80D35FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FD4u)) return;
    // 80D35FD4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D35FD8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D35FD8:
    ctx->pc = 0x80D35FD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D35FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D35FD8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D35FDC:
    ctx->pc = 0x80D35FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FDCu)) return;
    // 80D35FDC: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D35FE0:
    ctx->pc = 0x80D35FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D35FE0: lwz     r3, 0(r3)
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
label_80D35FE4:
    ctx->pc = 0x80D35FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FE4u)) return;
    // 80D35FE4: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D35FE8:
    ctx->pc = 0x80D35FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FE8u)) return;
    // 80D35FE8: addi    r4, r4, -11132
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-11132);

label_80D35FEC:
    ctx->pc = 0x80D35FECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FECu)) return;
    // 80D35FEC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D35FF0:
    ctx->pc = 0x80D35FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FF0u)) return;
    // 80D35FF0: addi    r5, r5, -13732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13732);

label_80D35FF4:
    ctx->pc = 0x80D35FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D35FF4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D35FF4u)) return;
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
label_80D35FF8:
    ctx->pc = 0x80D35FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FF8u)) return;
    // 80D35FF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D35FFC:
    ctx->pc = 0x80D35FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D35FFCu)) return;
    // 80D35FFC: bl      0x8045EB14
    {
            ctx->lr = 0x80D36000u;
            ctx->pc = 0x8045EB14u;
            return;
    }

label_80D36000:
    ctx->pc = 0x80D36000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36000: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D36004:
    ctx->pc = 0x80D36004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36004u)) return;
    // 80D36004: bl      0x8045F7C8
    {
            ctx->lr = 0x80D36008u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D36008:
    ctx->pc = 0x80D36008u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36008u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D36008: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3600C:
    ctx->pc = 0x80D3600Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3600Cu)) return;
    // 80D3600C: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_80D36010:
    ctx->pc = 0x80D36010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36010u)) return;
    // 80D36010: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36014:
    ctx->pc = 0x80D36014u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36014u)) return;
    // 80D36014: addi    r5, r5, -13636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13636);

label_80D36018:
    ctx->pc = 0x80D36018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36018: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36018u)) return;
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
label_80D3601C:
    ctx->pc = 0x80D3601Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3601Cu)) return;
    // 80D3601C: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36020:
    ctx->pc = 0x80D36020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36020u)) return;
    // 80D36020: addi    r5, r5, -13632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13632);

label_80D36024:
    ctx->pc = 0x80D36024u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36024u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36024: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36024u)) return;
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
label_80D36028:
    ctx->pc = 0x80D36028u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36028u)) return;
    // 80D36028: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3602C:
    ctx->pc = 0x80D3602Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3602Cu)) return;
    // 80D3602C: addi    r5, r5, -13628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13628);

label_80D36030:
    ctx->pc = 0x80D36030u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36030u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36030: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36030u)) return;
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
label_80D36034:
    ctx->pc = 0x80D36034u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36034u)) return;
    // 80D36034: bl      0x8045C750
    {
            ctx->lr = 0x80D36038u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D36038:
    ctx->pc = 0x80D36038u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36038u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D36038: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3603C:
    ctx->pc = 0x80D3603Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3603Cu)) return;
    // 80D3603C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D36040:
    ctx->pc = 0x80D36040u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36040u)) return;
    // 80D36040: lis     r5, -27327
    ctx->gpr[5] = ((u32)(s32)(-27327) << 16);

label_80D36044:
    ctx->pc = 0x80D36044u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36044u)) return;
    // 80D36044: addi    r5, r5, 7620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7620);

label_80D36048:
    ctx->pc = 0x80D36048u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36048u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36048: lwz     r5, 0(r5)
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
label_80D3604C:
    ctx->pc = 0x80D3604Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3604Cu)) return;
    // 80D3604C: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D36050:
    ctx->pc = 0x80D36050u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36050u)) return;
    // 80D36050: addi    r6, r6, -13704
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13704);

label_80D36054:
    ctx->pc = 0x80D36054u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36054u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36054: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D36054u)) return;
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
label_80D36058:
    ctx->pc = 0x80D36058u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36058u)) return;
    // 80D36058: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x80D36058u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_80D3605C:
    ctx->pc = 0x80D3605Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3605Cu)) return;
    // 80D3605C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x80D3605Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_80D36060:
    ctx->pc = 0x80D36060u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36060u)) return;
    // 80D36060: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D36064:
    ctx->pc = 0x80D36064u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36064u)) return;
    // 80D36064: bl      0x8045C3C0
    {
            ctx->lr = 0x80D36068u;
            ctx->pc = 0x8045C3C0u;
            return;
    }

label_80D36068:
    ctx->pc = 0x80D36068u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36068u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36068: li      r3, 71
    ctx->gpr[3] = (u32)(s32)(71);

label_80D3606C:
    ctx->pc = 0x80D3606Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3606Cu)) return;
    // 80D3606C: bl      0x8045F7C8
    {
            ctx->lr = 0x80D36070u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D36070:
    ctx->pc = 0x80D36070u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36070u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D36070: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D36074:
    ctx->pc = 0x80D36074u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36074u)) return;
    // 80D36074: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36078:
    ctx->pc = 0x80D36078u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36078u)) return;
    // 80D36078: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3607C:
    ctx->pc = 0x80D3607Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3607Cu)) return;
    // 80D3607C: addi    r5, r5, -13624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13624);

label_80D36080:
    ctx->pc = 0x80D36080u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36080u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36080: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36080u)) return;
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
label_80D36084:
    ctx->pc = 0x80D36084u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36084u)) return;
    // 80D36084: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36088:
    ctx->pc = 0x80D36088u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36088u)) return;
    // 80D36088: addi    r5, r5, -13620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13620);

label_80D3608C:
    ctx->pc = 0x80D3608Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3608Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3608C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3608Cu)) return;
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
label_80D36090:
    ctx->pc = 0x80D36090u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36090u)) return;
    // 80D36090: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36094:
    ctx->pc = 0x80D36094u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36094u)) return;
    // 80D36094: addi    r5, r5, -13616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13616);

label_80D36098:
    ctx->pc = 0x80D36098u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36098u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36098: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36098u)) return;
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
label_80D3609C:
    ctx->pc = 0x80D3609Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3609Cu)) return;
    // 80D3609C: bl      0x8045C750
    {
            ctx->lr = 0x80D360A0u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D360A0:
    ctx->pc = 0x80D360A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D360A0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D360A4:
    ctx->pc = 0x80D360A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360A4u)) return;
    // 80D360A4: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D360A8:
    ctx->pc = 0x80D360A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D360A8: lwz     r3, 0(r3)
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
label_80D360AC:
    ctx->pc = 0x80D360ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360ACu)) return;
    // 80D360AC: bl      0x8045C360
    {
            ctx->lr = 0x80D360B0u;
            ctx->pc = 0x8045C360u;
            return;
    }

label_80D360B0:
    ctx->pc = 0x80D360B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D360B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D360B4:
    ctx->pc = 0x80D360B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360B4u)) return;
    // 80D360B4: li      r4, -10
    ctx->gpr[4] = (u32)(s32)(-10);

label_80D360B8:
    ctx->pc = 0x80D360B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360B8u)) return;
    // 80D360B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D360BC:
    ctx->pc = 0x80D360BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360BCu)) return;
    // 80D360BC: bl      0x80D36B60
    {
            ctx->lr = 0x80D360C0u;
            goto label_80D36B60;
    }

label_80D360C0:
    ctx->pc = 0x80D360C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D360C0: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_80D360C4:
    ctx->pc = 0x80D360C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360C4u)) return;
    // 80D360C4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D360C8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D360C8:
    ctx->pc = 0x80D360C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D360C8: bl      0x8045C3AC
    {
            ctx->lr = 0x80D360CCu;
            ctx->pc = 0x8045C3ACu;
            return;
    }

label_80D360CC:
    ctx->pc = 0x80D360CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D360CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D360D0:
    ctx->pc = 0x80D360D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360D0u)) return;
    // 80D360D0: li      r4, -40
    ctx->gpr[4] = (u32)(s32)(-40);

label_80D360D4:
    ctx->pc = 0x80D360D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360D4u)) return;
    // 80D360D4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D360D8:
    ctx->pc = 0x80D360D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360D8u)) return;
    // 80D360D8: bl      0x80D36B60
    {
            ctx->lr = 0x80D360DCu;
            goto label_80D36B60;
    }

label_80D360DC:
    ctx->pc = 0x80D360DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D360DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D360E0:
    ctx->pc = 0x80D360E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360E0u)) return;
    // 80D360E0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D360E4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D360E4:
    ctx->pc = 0x80D360E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D360E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D360E8:
    ctx->pc = 0x80D360E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360E8u)) return;
    // 80D360E8: li      r4, -90
    ctx->gpr[4] = (u32)(s32)(-90);

label_80D360EC:
    ctx->pc = 0x80D360ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360ECu)) return;
    // 80D360EC: li      r5, 70
    ctx->gpr[5] = (u32)(s32)(70);

label_80D360F0:
    ctx->pc = 0x80D360F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360F0u)) return;
    // 80D360F0: bl      0x80D36B60
    {
            ctx->lr = 0x80D360F4u;
            goto label_80D36B60;
    }

label_80D360F4:
    ctx->pc = 0x80D360F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D360F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D360F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D360F8:
    ctx->pc = 0x80D360F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360F8u)) return;
    // 80D360F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D360FC:
    ctx->pc = 0x80D360FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D360FCu)) return;
    // 80D360FC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36100:
    ctx->pc = 0x80D36100u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36100u)) return;
    // 80D36100: addi    r5, r5, -13636
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13636);

label_80D36104:
    ctx->pc = 0x80D36104u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36104u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36104: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36104u)) return;
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
label_80D36108:
    ctx->pc = 0x80D36108u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36108u)) return;
    // 80D36108: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3610C:
    ctx->pc = 0x80D3610Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3610Cu)) return;
    // 80D3610C: addi    r5, r5, -13612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13612);

label_80D36110:
    ctx->pc = 0x80D36110u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36110u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36110: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36110u)) return;
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
label_80D36114:
    ctx->pc = 0x80D36114u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36114u)) return;
    // 80D36114: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36118:
    ctx->pc = 0x80D36118u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36118u)) return;
    // 80D36118: addi    r5, r5, -13628
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13628);

label_80D3611C:
    ctx->pc = 0x80D3611Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3611Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3611C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3611Cu)) return;
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
label_80D36120:
    ctx->pc = 0x80D36120u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36120u)) return;
    // 80D36120: bl      0x8045C750
    {
            ctx->lr = 0x80D36124u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D36124:
    ctx->pc = 0x80D36124u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36124u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36124: li      r3, 70
    ctx->gpr[3] = (u32)(s32)(70);

label_80D36128:
    ctx->pc = 0x80D36128u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36128u)) return;
    // 80D36128: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3612Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3612C:
    ctx->pc = 0x80D3612Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3612Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3612C: bl      0x8045C4A4
    {
            ctx->lr = 0x80D36130u;
            ctx->pc = 0x8045C4A4u;
            return;
    }

label_80D36130:
    ctx->pc = 0x80D36130u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36130u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D36130: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36134:
    ctx->pc = 0x80D36134u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36134u)) return;
    // 80D36134: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36138:
    ctx->pc = 0x80D36138u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36138u)) return;
    // 80D36138: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3613C:
    ctx->pc = 0x80D3613Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3613Cu)) return;
    // 80D3613C: addi    r5, r5, -13608
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13608);

label_80D36140:
    ctx->pc = 0x80D36140u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36140u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36140: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36140u)) return;
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
label_80D36144:
    ctx->pc = 0x80D36144u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36144u)) return;
    // 80D36144: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36148:
    ctx->pc = 0x80D36148u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36148u)) return;
    // 80D36148: addi    r5, r5, -13604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13604);

label_80D3614C:
    ctx->pc = 0x80D3614Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3614Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3614C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D3614Cu)) return;
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
label_80D36150:
    ctx->pc = 0x80D36150u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36150u)) return;
    // 80D36150: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36154:
    ctx->pc = 0x80D36154u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36154u)) return;
    // 80D36154: addi    r5, r5, -13600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13600);

label_80D36158:
    ctx->pc = 0x80D36158u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36158u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36158: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36158u)) return;
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
label_80D3615C:
    ctx->pc = 0x80D3615Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3615Cu)) return;
    // 80D3615C: bl      0x8045C750
    {
            ctx->lr = 0x80D36160u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D36160:
    ctx->pc = 0x80D36160u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36160u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36164:
    ctx->pc = 0x80D36164u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36164u)) return;
    // 80D36164: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36168:
    ctx->pc = 0x80D36168u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36168u)) return;
    // 80D36168: li      r5, 3397
    ctx->gpr[5] = (u32)(s32)(3397);

label_80D3616C:
    ctx->pc = 0x80D3616Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3616Cu)) return;
    // 80D3616C: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D36170:
    ctx->pc = 0x80D36170u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36170u)) return;
    // 80D36170: addi    r6, r6, -31707
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31707);

label_80D36174:
    ctx->pc = 0x80D36174u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36174u)) return;
    // 80D36174: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D36178:
    ctx->pc = 0x80D36178u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36178u)) return;
    // 80D36178: bl      0x8045C7B4
    {
            ctx->lr = 0x80D3617Cu;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D3617C:
    ctx->pc = 0x80D3617Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3617Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D3617C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36180:
    ctx->pc = 0x80D36180u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36180u)) return;
    // 80D36180: bl      0x8045F220
    {
            ctx->lr = 0x80D36184u;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D36184:
    ctx->pc = 0x80D36184u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36184u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D36184: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D36188:
    ctx->pc = 0x80D36188u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36188u)) return;
    // 80D36188: addi    r4, r4, 25420
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25420);

label_80D3618C:
    ctx->pc = 0x80D3618Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3618Cu)) return;
    // 80D3618C: lis     r5, -28558
    ctx->gpr[5] = ((u32)(s32)(-28558) << 16);

label_80D36190:
    ctx->pc = 0x80D36190u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36190u)) return;
    // 80D36190: addi    r5, r5, -11604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-11604);

label_80D36194:
    ctx->pc = 0x80D36194u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36194u)) return;
    // 80D36194: lis     r6, -27328
    ctx->gpr[6] = ((u32)(s32)(-27328) << 16);

label_80D36198:
    ctx->pc = 0x80D36198u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36198u)) return;
    // 80D36198: addi    r6, r6, -13712
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-13712);

label_80D3619C:
    ctx->pc = 0x80D3619Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3619Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3619C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D3619Cu)) return;
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
label_80D361A0:
    ctx->pc = 0x80D361A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361A0u)) return;
    // 80D361A0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80D361A4:
    ctx->pc = 0x80D361A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361A4u)) return;
    // 80D361A4: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_80D361A8:
    ctx->pc = 0x80D361A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361A8u)) return;
    // 80D361A8: bl      0x8045EBE4
    {
            ctx->lr = 0x80D361ACu;
            ctx->pc = 0x8045EBE4u;
            return;
    }

label_80D361AC:
    ctx->pc = 0x80D361ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D361ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D361AC: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D361B0:
    ctx->pc = 0x80D361B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361B0u)) return;
    // 80D361B0: bl      0x8045F7C8
    {
            ctx->lr = 0x80D361B4u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D361B4:
    ctx->pc = 0x80D361B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D361B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D361B4: li      r3, 1314
    ctx->gpr[3] = (u32)(s32)(1314);

label_80D361B8:
    ctx->pc = 0x80D361B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361B8u)) return;
    // 80D361B8: bl      0x8045BFA0
    {
            ctx->lr = 0x80D361BCu;
            ctx->pc = 0x8045BFA0u;
            return;
    }

label_80D361BC:
    ctx->pc = 0x80D361BCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D361BCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D361BC: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D361C0:
    ctx->pc = 0x80D361C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361C0u)) return;
    // 80D361C0: addi    r3, r3, -5392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5392);

label_80D361C4:
    ctx->pc = 0x80D361C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D361C4: lwz     r0, 0(r3)
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
label_80D361C8:
    ctx->pc = 0x80D361C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361C8u)) return;
    // 80D361C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80D361CC:
    ctx->pc = 0x80D361CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361CCu)) return;
    // 80D361CC: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D361D0:
    ctx->pc = 0x80D361D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361D0u)) return;
    // 80D361D0: addi    r3, r3, -13088
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13088);

label_80D361D4:
    ctx->pc = 0x80D361D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D361D4: lwzx    r3, r3, r0
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
label_80D361D8:
    ctx->pc = 0x80D361D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D361D8: lwz     r3, 12(r3)
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
label_80D361DC:
    ctx->pc = 0x80D361DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361DCu)) return;
    // 80D361DC: bl      0x8045F6FC
    {
            ctx->lr = 0x80D361E0u;
            ctx->pc = 0x8045F6FCu;
            return;
    }

label_80D361E0:
    ctx->pc = 0x80D361E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D361E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D361E0: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_80D361E4:
    ctx->pc = 0x80D361E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361E4u)) return;
    // 80D361E4: bl      0x8045F7C8
    {
            ctx->lr = 0x80D361E8u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D361E8:
    ctx->pc = 0x80D361E8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D361E8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    // 80D361E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D361EC:
    ctx->pc = 0x80D361ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361ECu)) return;
    // 80D361EC: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D361F0:
    ctx->pc = 0x80D361F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361F0u)) return;
    // 80D361F0: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D361F4:
    ctx->pc = 0x80D361F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361F4u)) return;
    // 80D361F4: addi    r5, r5, -13596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13596);

label_80D361F8:
    ctx->pc = 0x80D361F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D361F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D361F8u)) return;
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
label_80D361FC:
    ctx->pc = 0x80D361FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D361FCu)) return;
    // 80D361FC: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36200:
    ctx->pc = 0x80D36200u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36200u)) return;
    // 80D36200: addi    r5, r5, -13592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13592);

label_80D36204:
    ctx->pc = 0x80D36204u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36204u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36204: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36204u)) return;
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
label_80D36208:
    ctx->pc = 0x80D36208u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36208u)) return;
    // 80D36208: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D3620C:
    ctx->pc = 0x80D3620Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3620Cu)) return;
    // 80D3620C: addi    r5, r5, -13588
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13588);

label_80D36210:
    ctx->pc = 0x80D36210u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36210u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36210: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36210u)) return;
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
label_80D36214:
    ctx->pc = 0x80D36214u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36214u)) return;
    // 80D36214: bl      0x8045C750
    {
            ctx->lr = 0x80D36218u;
            ctx->pc = 0x8045C750u;
            return;
    }

label_80D36218:
    ctx->pc = 0x80D36218u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36218u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36218: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D3621C:
    ctx->pc = 0x80D3621Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3621Cu)) return;
    // 80D3621C: li      r4, 130
    ctx->gpr[4] = (u32)(s32)(130);

label_80D36220:
    ctx->pc = 0x80D36220u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36220u)) return;
    // 80D36220: li      r5, 3230
    ctx->gpr[5] = (u32)(s32)(3230);

label_80D36224:
    ctx->pc = 0x80D36224u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36224u)) return;
    // 80D36224: lis     r6, 1
    ctx->gpr[6] = ((u32)(s32)(1) << 16);

label_80D36228:
    ctx->pc = 0x80D36228u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36228u)) return;
    // 80D36228: addi    r6, r6, -31707
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31707);

label_80D3622C:
    ctx->pc = 0x80D3622Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3622Cu)) return;
    // 80D3622C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80D36230:
    ctx->pc = 0x80D36230u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36230u)) return;
    // 80D36230: bl      0x8045C7B4
    {
            ctx->lr = 0x80D36234u;
            ctx->pc = 0x8045C7B4u;
            return;
    }

label_80D36234:
    ctx->pc = 0x80D36234u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36234u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36234: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_80D36238:
    ctx->pc = 0x80D36238u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36238u)) return;
    // 80D36238: bl      0x8045F7C8
    {
            ctx->lr = 0x80D3623Cu;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D3623C:
    ctx->pc = 0x80D3623Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3623Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3623C: bl      0x8045F32C
    {
            ctx->lr = 0x80D36240u;
            ctx->pc = 0x8045F32Cu;
            return;
    }

label_80D36240:
    ctx->pc = 0x80D36240u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36240u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36240: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_80D36244:
    ctx->pc = 0x80D36244u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36244u)) return;
    // 80D36244: bl      0x8045F7C8
    {
            ctx->lr = 0x80D36248u;
            ctx->pc = 0x8045F7C8u;
            return;
    }

label_80D36248:
    ctx->pc = 0x80D36248u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36248u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36248: b       0x80D362E4
    {
            goto label_80D362E4;
    }

label_80D3624C:
    ctx->pc = 0x80D3624Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3624Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D3624C: bl      0x8045DE34
    {
            ctx->lr = 0x80D36250u;
            ctx->pc = 0x8045DE34u;
            return;
    }

label_80D36250:
    ctx->pc = 0x80D36250u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36250u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36250: bl      0x80460A80
    {
            ctx->lr = 0x80D36254u;
            ctx->pc = 0x80460A80u;
            return;
    }

label_80D36254:
    ctx->pc = 0x80D36254u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36254u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36258:
    ctx->pc = 0x80D36258u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36258u)) return;
    // 80D36258: bl      0x8045F220
    {
            ctx->lr = 0x80D3625Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3625C:
    ctx->pc = 0x80D3625Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3625Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D3625C: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D36260:
    ctx->pc = 0x80D36260u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36260u)) return;
    // 80D36260: addi    r4, r4, -13776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13776);

label_80D36264:
    ctx->pc = 0x80D36264u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36264u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36264: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D36264u)) return;
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
label_80D36268:
    ctx->pc = 0x80D36268u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36268u)) return;
    // 80D36268: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D3626C:
    ctx->pc = 0x80D3626Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3626Cu)) return;
    // 80D3626C: addi    r4, r4, -13772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13772);

label_80D36270:
    ctx->pc = 0x80D36270u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36270u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36270: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D36270u)) return;
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
label_80D36274:
    ctx->pc = 0x80D36274u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36274u)) return;
    // 80D36274: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D36278:
    ctx->pc = 0x80D36278u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36278u)) return;
    // 80D36278: addi    r4, r4, -13768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13768);

label_80D3627C:
    ctx->pc = 0x80D3627Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3627Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D3627C: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D3627Cu)) return;
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
label_80D36280:
    ctx->pc = 0x80D36280u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36280u)) return;
    // 80D36280: bl      0x8045EF2C
    {
            ctx->lr = 0x80D36284u;
            ctx->pc = 0x8045EF2Cu;
            return;
    }

label_80D36284:
    ctx->pc = 0x80D36284u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36284u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36284: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36288:
    ctx->pc = 0x80D36288u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36288u)) return;
    // 80D36288: bl      0x8045F220
    {
            ctx->lr = 0x80D3628Cu;
            ctx->pc = 0x8045F220u;
            return;
    }

label_80D3628C:
    ctx->pc = 0x80D3628Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3628Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D3628C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36290:
    ctx->pc = 0x80D36290u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36290u)) return;
    // 80D36290: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_80D36294:
    ctx->pc = 0x80D36294u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36294u)) return;
    // 80D36294: addi    r5, r5, -32768
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32768);

label_80D36298:
    ctx->pc = 0x80D36298u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36298u)) return;
    // 80D36298: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D3629C:
    ctx->pc = 0x80D3629Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3629Cu)) return;
    // 80D3629C: bl      0x8045EEA8
    {
            ctx->lr = 0x80D362A0u;
            ctx->pc = 0x8045EEA8u;
            return;
    }

label_80D362A0:
    ctx->pc = 0x80D362A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D362A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D362A4:
    ctx->pc = 0x80D362A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362A4u)) return;
    // 80D362A4: bl      0x8045EC10
    {
            ctx->lr = 0x80D362A8u;
            ctx->pc = 0x8045EC10u;
            return;
    }

label_80D362A8:
    ctx->pc = 0x80D362A8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362A8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D362A8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D362AC:
    ctx->pc = 0x80D362ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362ACu)) return;
    // 80D362AC: addi    r3, r3, 7620
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7620);

label_80D362B0:
    ctx->pc = 0x80D362B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362B0u)) return;
    // 80D362B0: bl      0x8045F070
    {
            ctx->lr = 0x80D362B4u;
            ctx->pc = 0x8045F070u;
            return;
    }

label_80D362B4:
    ctx->pc = 0x80D362B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D362B4: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D362B8:
    ctx->pc = 0x80D362B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362B8u)) return;
    // 80D362B8: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D362BC:
    ctx->pc = 0x80D362BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D362BC: lwz     r3, 0(r3)
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
label_80D362C0:
    ctx->pc = 0x80D362C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362C0u)) return;
    // 80D362C0: cmplwi  r3, 0x0000
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

label_80D362C4:
    ctx->pc = 0x80D362C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362C4u)) return;
    // 80D362C4: bc    12, 2, 0x80D362DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D362DC;
        }
    }

label_80D362C8:
    ctx->pc = 0x80D362C8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362C8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D362C8: bl      0x8050F9E0
    {
            ctx->lr = 0x80D362CCu;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D362CC:
    ctx->pc = 0x80D362CCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362CCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D362CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D362D0:
    ctx->pc = 0x80D362D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362D0u)) return;
    // 80D362D0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D362D4:
    ctx->pc = 0x80D362D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362D4u)) return;
    // 80D362D4: addi    r3, r3, 7616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7616);

label_80D362D8:
    ctx->pc = 0x80D362D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D362D8: stw     r0, 0(r3)
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
label_80D362DC:
    ctx->pc = 0x80D362DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D362DC: bl      0x80D369D8
    {
            ctx->lr = 0x80D362E0u;
            goto label_80D369D8;
    }

label_80D362E0:
    ctx->pc = 0x80D362E0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362E0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D362E0: bl      0x80D36390
    {
            ctx->lr = 0x80D362E4u;
            goto label_80D36390;
    }

label_80D362E4:
    ctx->pc = 0x80D362E4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362E4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D362E4: lwz     r0, 20(r1)
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
label_80D362E8:
    ctx->pc = 0x80D362E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D362E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D362E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D362EC:
    ctx->pc = 0x80D362ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362ECu)) return;
    // 80D362EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D362F0:
    ctx->pc = 0x80D362F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362F0u)) return;
    // 80D362F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D362F4:
    ctx->pc = 0x80D362F4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D362F4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D362F4: stwu     r1, -32(r1)
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
label_80D362F8:
    ctx->pc = 0x80D362F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D362F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D362FC:
    ctx->pc = 0x80D362FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D362FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D362FC: stw     r0, 36(r1)
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
label_80D36300:
    ctx->pc = 0x80D36300u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36300u)) return;
    // 80D36300: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80D36304:
    ctx->pc = 0x80D36304u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36304u)) return;
    // 80D36304: bl      0x80006DD4
    {
            ctx->lr = 0x80D36308u;
            ctx->pc = 0x80006DD4u;
            return;
    }

label_80D36308:
    ctx->pc = 0x80D36308u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36308u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D36308: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D3630C:
    ctx->pc = 0x80D3630Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3630Cu)) return;
    // 80D3630C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36310:
    ctx->pc = 0x80D36310u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36310u)) return;
    // 80D36310: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D36314:
    ctx->pc = 0x80D36314u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36314u)) return;
    // 80D36314: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D36318:
    ctx->pc = 0x80D36318u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36318u)) return;
    // 80D36318: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80D3631C:
    ctx->pc = 0x80D3631Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3631Cu)) return;
    // 80D3631C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D36320:
    ctx->pc = 0x80D36320u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36320u)) return;
    // 80D36320: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D36324:
    ctx->pc = 0x80D36324u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36324u)) return;
    // 80D36324: lis     r5, -32557
    ctx->gpr[5] = ((u32)(s32)(-32557) << 16);

label_80D36328:
    ctx->pc = 0x80D36328u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36328u)) return;
    // 80D36328: addi    r5, r5, 25556
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25556);

label_80D3632C:
    ctx->pc = 0x80D3632Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3632Cu)) return;
    // 80D3632C: bl      0x8050FD60
    {
            ctx->lr = 0x80D36330u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D36330:
    ctx->pc = 0x80D36330u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36330u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36330: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36334:
    ctx->pc = 0x80D36334u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36334u)) return;
    // 80D36334: addi    r4, r4, 7624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7624);

label_80D36338:
    ctx->pc = 0x80D36338u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36338u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36338: stw     r3, 0(r4)
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
label_80D3633C:
    ctx->pc = 0x80D3633Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3633Cu)) return;
    // 80D3633C: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80D36340:
    ctx->pc = 0x80D36340u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36340u)) return;
    // 80D36340: bl      0x8050EF60
    {
            ctx->lr = 0x80D36344u;
            ctx->pc = 0x8050EF60u;
            return;
    }

label_80D36344:
    ctx->pc = 0x80D36344u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36344u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    // 80D36344: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36348:
    ctx->pc = 0x80D36348u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36348u)) return;
    // 80D36348: addi    r4, r4, 7624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7624);

label_80D3634C:
    ctx->pc = 0x80D3634Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3634Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D3634C: lwz     r4, 0(r4)
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
label_80D36350:
    ctx->pc = 0x80D36350u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36350u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D36350: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36354:
    ctx->pc = 0x80D36354u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36354u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36354: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36358:
    ctx->pc = 0x80D36358u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36358u)) return;
    // 80D36358: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D3635C:
    ctx->pc = 0x80D3635Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3635Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D3635C: stb     r0, 0(r4)
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
label_80D36360:
    ctx->pc = 0x80D36360u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36360u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36360: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36364:
    ctx->pc = 0x80D36364u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36364u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36364: stb     r27, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36368:
    ctx->pc = 0x80D36368u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36368u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36368: stb     r28, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3636C:
    ctx->pc = 0x80D3636Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3636Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3636C: stb     r29, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36370:
    ctx->pc = 0x80D36370u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36370u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36370: stb     r30, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36374:
    ctx->pc = 0x80D36374u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36374u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36374: stw     r31, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36378:
    ctx->pc = 0x80D36378u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36378u)) return;
    // 80D36378: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80D3637C:
    ctx->pc = 0x80D3637Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3637Cu)) return;
    // 80D3637C: bl      0x80006E20
    {
            ctx->lr = 0x80D36380u;
            ctx->pc = 0x80006E20u;
            return;
    }

label_80D36380:
    ctx->pc = 0x80D36380u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36380u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36380: lwz     r0, 36(r1)
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
label_80D36384:
    ctx->pc = 0x80D36384u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36384u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36384: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36388:
    ctx->pc = 0x80D36388u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36388u)) return;
    // 80D36388: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D3638C:
    ctx->pc = 0x80D3638Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3638Cu)) return;
    // 80D3638C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36390:
    ctx->pc = 0x80D36390u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36390u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36390: stwu     r1, -16(r1)
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
label_80D36394:
    ctx->pc = 0x80D36394u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36394u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36394: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36398:
    ctx->pc = 0x80D36398u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36398u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36398: stw     r0, 20(r1)
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
label_80D3639C:
    ctx->pc = 0x80D3639Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3639Cu)) return;
    // 80D3639C: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D363A0:
    ctx->pc = 0x80D363A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363A0u)) return;
    // 80D363A0: addi    r3, r3, 7624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7624);

label_80D363A4:
    ctx->pc = 0x80D363A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D363A4: lwz     r3, 0(r3)
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
label_80D363A8:
    ctx->pc = 0x80D363A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363A8u)) return;
    // 80D363A8: cmplwi  r3, 0x0000
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

label_80D363AC:
    ctx->pc = 0x80D363ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363ACu)) return;
    // 80D363AC: bc    12, 2, 0x80D363C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D363C4;
        }
    }

label_80D363B0:
    ctx->pc = 0x80D363B0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D363B0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D363B0: bl      0x8050F9E0
    {
            ctx->lr = 0x80D363B4u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D363B4:
    ctx->pc = 0x80D363B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D363B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D363B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D363B8:
    ctx->pc = 0x80D363B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363B8u)) return;
    // 80D363B8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D363BC:
    ctx->pc = 0x80D363BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363BCu)) return;
    // 80D363BC: addi    r3, r3, 7624
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7624);

label_80D363C0:
    ctx->pc = 0x80D363C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D363C0: stw     r0, 0(r3)
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
label_80D363C4:
    ctx->pc = 0x80D363C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D363C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D363C4: lwz     r0, 20(r1)
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
label_80D363C8:
    ctx->pc = 0x80D363C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D363C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D363C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D363CC:
    ctx->pc = 0x80D363CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363CCu)) return;
    // 80D363CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D363D0:
    ctx->pc = 0x80D363D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363D0u)) return;
    // 80D363D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D363D4:
    ctx->pc = 0x80D363D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D363D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D363D4: lis     r4, -32557
    ctx->gpr[4] = ((u32)(s32)(-32557) << 16);

label_80D363D8:
    ctx->pc = 0x80D363D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363D8u)) return;
    // 80D363D8: addi    r0, r4, 25596
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(25596);

label_80D363DC:
    ctx->pc = 0x80D363DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D363DC: stw     r0, 16(r3)
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
label_80D363E0:
    ctx->pc = 0x80D363E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363E0u)) return;
    // 80D363E0: lis     r4, -32557
    ctx->gpr[4] = ((u32)(s32)(-32557) << 16);

label_80D363E4:
    ctx->pc = 0x80D363E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363E4u)) return;
    // 80D363E4: addi    r0, r4, 26180
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(26180);

label_80D363E8:
    ctx->pc = 0x80D363E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D363E8: stw     r0, 20(r3)
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
label_80D363EC:
    ctx->pc = 0x80D363ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363ECu)) return;
    // 80D363EC: lis     r4, -32557
    ctx->gpr[4] = ((u32)(s32)(-32557) << 16);

label_80D363F0:
    ctx->pc = 0x80D363F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363F0u)) return;
    // 80D363F0: addi    r0, r4, 26236
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(26236);

label_80D363F4:
    ctx->pc = 0x80D363F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D363F4: stw     r0, 24(r3)
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
label_80D363F8:
    ctx->pc = 0x80D363F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D363F8u)) return;
    // 80D363F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D363FC:
    ctx->pc = 0x80D363FCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D363FCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D363FC: stwu     r1, -16(r1)
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
label_80D36400:
    ctx->pc = 0x80D36400u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36400u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36400: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36404:
    ctx->pc = 0x80D36404u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36404u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36404: stw     r0, 20(r1)
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
label_80D36408:
    ctx->pc = 0x80D36408u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36408u)) return;
    // 80D36408: bl      0x80D36644
    {
            ctx->lr = 0x80D3640Cu;
            goto label_80D36644;
    }

label_80D3640C:
    ctx->pc = 0x80D3640Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3640Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3640C: lwz     r0, 20(r1)
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
label_80D36410:
    ctx->pc = 0x80D36410u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36410u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36410: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36414:
    ctx->pc = 0x80D36414u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36414u)) return;
    // 80D36414: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36418:
    ctx->pc = 0x80D36418u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36418u)) return;
    // 80D36418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D3641C:
    ctx->pc = 0x80D3641Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 24u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3641Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 24u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D3641C: stwu     r1, -128(r1)
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
label_80D36420:
    ctx->pc = 0x80D36420u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36420u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D36420: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36424:
    ctx->pc = 0x80D36424u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36424u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D36424: stw     r0, 132(r1)
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
label_80D36428:
    ctx->pc = 0x80D36428u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36428u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D36428: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36428u)) return;
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
label_80D3642C:
    ctx->pc = 0x80D3642Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3642Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 19u : 0u;
    // 80D3642C: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D3642Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80D3642Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36430:
    ctx->pc = 0x80D36430u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36430u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D36430: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36430u)) return;
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
label_80D36434:
    ctx->pc = 0x80D36434u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36434u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D36434: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D36434u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x80D36434u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36438:
    ctx->pc = 0x80D36438u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36438u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D36438: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36438u)) return;
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
label_80D3643C:
    ctx->pc = 0x80D3643Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3643Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D3643C: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D3643Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x80D3643Cu);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36440:
    ctx->pc = 0x80D36440u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36440u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D36440: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36444:
    ctx->pc = 0x80D36444u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36444u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D36444: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36448:
    ctx->pc = 0x80D36448u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36448u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D36448: stw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3644C:
    ctx->pc = 0x80D3644Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3644Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3644C: stw     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36450:
    ctx->pc = 0x80D36450u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36450u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36450: lwz     r3, 32(r3)
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
label_80D36454:
    ctx->pc = 0x80D36454u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36454u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36454: lwz     r30, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36458:
    ctx->pc = 0x80D36458u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36458u)) return;
    // 80D36458: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_80D3645C:
    ctx->pc = 0x80D3645Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3645Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3645C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36460:
    ctx->pc = 0x80D36460u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36460u)) return;
    // 80D36460: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_80D36464:
    ctx->pc = 0x80D36464u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36464u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36464: stw     r0, 36(r1)
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
label_80D36468:
    ctx->pc = 0x80D36468u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36468u)) return;
    // 80D36468: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D3646C:
    ctx->pc = 0x80D3646Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3646Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3646C: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36470:
    ctx->pc = 0x80D36470u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36470u)) return;
    // 80D36470: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80D36474:
    ctx->pc = 0x80D36474u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36474u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36474: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36478:
    ctx->pc = 0x80D36478u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36478u)) return;
    // 80D36478: bl      0x80450D68
    {
            ctx->lr = 0x80D3647Cu;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80D3647C:
    ctx->pc = 0x80D3647Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3647Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D3647C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36480:
    ctx->pc = 0x80D36480u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36480u)) return;
    // 80D36480: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D36484:
    ctx->pc = 0x80D36484u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36484u)) return;
    // 80D36484: bl      0x8060F4F8
    {
            ctx->lr = 0x80D36488u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D36488:
    ctx->pc = 0x80D36488u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36488u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36488: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D3648C:
    ctx->pc = 0x80D3648Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3648Cu)) return;
    // 80D3648C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D36490:
    ctx->pc = 0x80D36490u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36490u)) return;
    // 80D36490: bl      0x8060F4F8
    {
            ctx->lr = 0x80D36494u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D36494:
    ctx->pc = 0x80D36494u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36494u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D36494: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36498:
    ctx->pc = 0x80D36498u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36498u)) return;
    // 80D36498: addi    r3, r3, 7628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7628);

label_80D3649C:
    ctx->pc = 0x80D3649Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3649Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D3649C: lwz     r29, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364A0:
    ctx->pc = 0x80D364A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364A0u)) return;
    // 80D364A0: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D364A4:
    ctx->pc = 0x80D364A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364A4u)) return;
    // 80D364A4: addi    r3, r3, -13584
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13584);

label_80D364A8:
    ctx->pc = 0x80D364A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D364A8: lfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D364A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
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
label_80D364AC:
    ctx->pc = 0x80D364ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364ACu)) return;
    // 80D364AC: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D364B0:
    ctx->pc = 0x80D364B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364B0u)) return;
    // 80D364B0: addi    r3, r3, -13568
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13568);

label_80D364B4:
    ctx->pc = 0x80D364B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D364B4: lfd     f30, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D364B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364B8:
    ctx->pc = 0x80D364B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364B8u)) return;
    // 80D364B8: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_80D364BC:
    ctx->pc = 0x80D364BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364BCu)) return;
    // 80D364BC: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D364C0:
    ctx->pc = 0x80D364C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364C0u)) return;
    // 80D364C0: addi    r3, r3, -13580
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13580);

label_80D364C4:
    ctx->pc = 0x80D364C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D364C4: lfs     f31, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D364C4u)) return;
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
label_80D364C8:
    ctx->pc = 0x80D364C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364C8u)) return;
    // 80D364C8: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D364CC:
    ctx->pc = 0x80D364CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364CCu)) return;
    // 80D364CC: addi    r28, r3, -13576
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(-13576);

label_80D364D0:
    ctx->pc = 0x80D364D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364D0u)) return;
    // 80D364D0: b       0x80D36598
    {
            goto label_80D36598;
    }

label_80D364D4:
    ctx->pc = 0x80D364D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 46u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D364D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 46u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 45u : 0u;
    // 80D364D4: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364D8:
    ctx->pc = 0x80D364D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 44u : 0u;
    // 80D364D8: stfs     f29, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D364D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[29]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364DC:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364DCu)) return;
    // 80D364DC: xoris   r4, r29, 0x8000
    ctx->gpr[4] = ctx->gpr[29] ^ (0x8000u << 16);

label_80D364E0:
    ctx->pc = 0x80D364E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 42u : 0u;
    // 80D364E0: stw     r4, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364E4:
    ctx->pc = 0x80D364E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 41u : 0u;
    // 80D364E4: stw     r31, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364E8:
    ctx->pc = 0x80D364E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 40u : 0u;
    // 80D364E8: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D364E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364EC:
    ctx->pc = 0x80D364ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364ECu)) return;
    // 80D364EC: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80D364ECu)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80D364F0:
    ctx->pc = 0x80D364F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 38u : 0u;
    // 80D364F0: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D364F4:
    ctx->pc = 0x80D364F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80D364F4: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D364F4u)) return;
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
label_80D364F8:
    ctx->pc = 0x80D364F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80D364F8: lbz     r0, 0(r30)
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
label_80D364FC:
    ctx->pc = 0x80D364FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D364FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 35u : 0u;
    // 80D364FC: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36500:
    ctx->pc = 0x80D36500u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36500u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 34u : 0u;
    // 80D36500: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36504:
    ctx->pc = 0x80D36504u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36504u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D36504: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36508:
    ctx->pc = 0x80D36508u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36508u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D36508: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3650C:
    ctx->pc = 0x80D3650Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3650Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 31u : 0u;
    // 80D3650C: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36510:
    ctx->pc = 0x80D36510u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36510u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D36510: lbz     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36514:
    ctx->pc = 0x80D36514u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36514u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 29u : 0u;
    // 80D36514: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36518:
    ctx->pc = 0x80D36518u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36518u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D36518: stb     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3651C:
    ctx->pc = 0x80D3651Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3651Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D3651C: lbz     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36520:
    ctx->pc = 0x80D36520u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36520u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80D36520: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36524:
    ctx->pc = 0x80D36524u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36524u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 25u : 0u;
    // 80D36524: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36528:
    ctx->pc = 0x80D36528u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36528u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D36528: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3652C:
    ctx->pc = 0x80D3652Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3652Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 23u : 0u;
    // 80D3652C: stfs     f31, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D3652Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36530:
    ctx->pc = 0x80D36530u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36530u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D36530: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36534:
    ctx->pc = 0x80D36534u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36534u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D36534: stw     r31, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36538:
    ctx->pc = 0x80D36538u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36538u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D36538: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3653C:
    ctx->pc = 0x80D3653Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3653Cu)) return;
    // 80D3653C: fsubs   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x80D3653Cu)) return;
    ppc_fsubs(ctx, 0, 0, 30);

label_80D36540:
    ctx->pc = 0x80D36540u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36540u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D36540: lwz     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36544:
    ctx->pc = 0x80D36544u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36544u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D36544: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36544u)) return;
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
label_80D36548:
    ctx->pc = 0x80D36548u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36548u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D36548: lbz     r0, 0(r30)
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
label_80D3654C:
    ctx->pc = 0x80D3654Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3654Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D3654C: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36550:
    ctx->pc = 0x80D36550u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36550u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D36550: stb     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36554:
    ctx->pc = 0x80D36554u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36554u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D36554: lbz     r0, 1(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36558:
    ctx->pc = 0x80D36558u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36558u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D36558: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3655C:
    ctx->pc = 0x80D3655Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3655Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3655C: stb     r0, 5(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36560:
    ctx->pc = 0x80D36560u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36560u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36560: lbz     r0, 2(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36564:
    ctx->pc = 0x80D36564u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36564u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36564: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36568:
    ctx->pc = 0x80D36568u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36568u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36568: stb     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3656C:
    ctx->pc = 0x80D3656Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3656Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3656C: lbz     r0, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36570:
    ctx->pc = 0x80D36570u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36570u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36570: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36574:
    ctx->pc = 0x80D36574u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36574u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36574: stb     r0, 7(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36578:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36578u)) return;
    // 80D36578: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80D3657C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3657Cu)) return;
    // 80D3657C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80D36580:
    ctx->pc = 0x80D36580u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36580u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36580: lfs     f1, 0(r28)
    if (!ppc_fp_available_inline(ctx, 0x80D36580u)) return;
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
label_80D36584:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36584u)) return;
    // 80D36584: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80D36588:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36588u)) return;
    // 80D36588: bl      0x800505F8
    {
            ctx->lr = 0x80D3658Cu;
            ctx->pc = 0x800505F8u;
            return;
    }

label_80D3658C:
    ctx->pc = 0x80D3658Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3658Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3658C: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36590:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36590u)) return;
    // 80D36590: add   r29, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80D36594:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36594u)) return;
    // 80D36594: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80D36598:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36598u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36598: cmpwi   r29, 480
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(480);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3659C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3659Cu)) return;
    // 80D3659C: bc    12, 0, 0x80D364D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D364D4u;
                return;
            }
            goto label_80D364D4;
        }
    }

label_80D365A0:
    ctx->pc = 0x80D365A0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 15u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D365A0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 15u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 14u : 0u;
    // 80D365A0: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D365A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80D365A0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365A4:
    ctx->pc = 0x80D365A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D365A4: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D365A4u)) return;
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
label_80D365A8:
    ctx->pc = 0x80D365A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D365A8: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D365A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x80D365A8u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365AC:
    ctx->pc = 0x80D365ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D365AC: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D365ACu)) return;
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
label_80D365B0:
    ctx->pc = 0x80D365B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D365B0: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80D365B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x80D365B0u);
        if (ctx->exception) return;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365B4:
    ctx->pc = 0x80D365B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D365B4: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D365B4u)) return;
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
label_80D365B8:
    ctx->pc = 0x80D365B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D365B8: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365BC:
    ctx->pc = 0x80D365BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D365BC: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365C0:
    ctx->pc = 0x80D365C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D365C0: lwz     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365C4:
    ctx->pc = 0x80D365C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D365C4: lwz     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365C8:
    ctx->pc = 0x80D365C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D365C8: lwz     r0, 132(r1)
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
label_80D365CC:
    ctx->pc = 0x80D365CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D365CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D365CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365D0:
    ctx->pc = 0x80D365D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365D0u)) return;
    // 80D365D0: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_80D365D4:
    ctx->pc = 0x80D365D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365D4u)) return;
    // 80D365D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D365D8:
    ctx->pc = 0x80D365D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 14u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D365D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 14u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D365D8: stwu     r1, -16(r1)
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
label_80D365DC:
    ctx->pc = 0x80D365DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D365DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365E0:
    ctx->pc = 0x80D365E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D365E0: stw     r0, 20(r1)
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
label_80D365E4:
    ctx->pc = 0x80D365E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365E4u)) return;
    // 80D365E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D365E8:
    ctx->pc = 0x80D365E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365E8u)) return;
    // 80D365E8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D365EC:
    ctx->pc = 0x80D365ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365ECu)) return;
    // 80D365EC: addi    r6, r3, 7628
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(7628);

label_80D365F0:
    ctx->pc = 0x80D365F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D365F0: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365F4:
    ctx->pc = 0x80D365F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365F4u)) return;
    // 80D365F4: addi    r5, r3, 1
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(1);

label_80D365F8:
    ctx->pc = 0x80D365F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D365F8: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D365FC:
    ctx->pc = 0x80D365FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D365FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D365FC: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36600:
    ctx->pc = 0x80D36600u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36600u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36600: lwz     r3, 16(r3)
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
label_80D36604:
    ctx->pc = 0x80D36604u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36604u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36604: lwz     r0, 4(r3)
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
label_80D36608:
    ctx->pc = 0x80D36608u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36608u)) return;
    // 80D36608: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D3660C:
    ctx->pc = 0x80D3660Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3660Cu)) return;
    // 80D3660C: bc    4, 2, 0x80D36618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36618;
        }
    }

label_80D36610:
    ctx->pc = 0x80D36610u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36610u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36610: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D36614:
    ctx->pc = 0x80D36614u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36614u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36614: stw     r0, 0(r6)
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
label_80D36618:
    ctx->pc = 0x80D36618u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36618u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36618: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D3661C:
    ctx->pc = 0x80D3661Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3661Cu)) return;
    // 80D3661C: addi    r3, r3, 25628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25628);

label_80D36620:
    ctx->pc = 0x80D36620u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36620u)) return;
    // 80D36620: lis     r5, -27328
    ctx->gpr[5] = ((u32)(s32)(-27328) << 16);

label_80D36624:
    ctx->pc = 0x80D36624u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36624u)) return;
    // 80D36624: addi    r5, r5, -13560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-13560);

label_80D36628:
    ctx->pc = 0x80D36628u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36628u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36628: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36628u)) return;
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
label_80D3662C:
    ctx->pc = 0x80D3662Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3662Cu)) return;
    // 80D3662C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80D36630:
    ctx->pc = 0x80D36630u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36630u)) return;
    // 80D36630: bl      0x80605D44
    {
            ctx->lr = 0x80D36634u;
            ctx->pc = 0x80605D44u;
            return;
    }

label_80D36634:
    ctx->pc = 0x80D36634u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36634u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36634: lwz     r0, 20(r1)
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
label_80D36638:
    ctx->pc = 0x80D36638u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36638u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36638: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3663C:
    ctx->pc = 0x80D3663Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3663Cu)) return;
    // 80D3663C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36640:
    ctx->pc = 0x80D36640u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36640u)) return;
    // 80D36640: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36644:
    ctx->pc = 0x80D36644u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36644u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36644: stwu     r1, -16(r1)
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
label_80D36648:
    ctx->pc = 0x80D36648u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36648u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36648: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3664C:
    ctx->pc = 0x80D3664Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3664Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D3664C: stw     r0, 20(r1)
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
label_80D36650:
    ctx->pc = 0x80D36650u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36650u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36650: lwz     r4, 32(r3)
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
label_80D36654:
    ctx->pc = 0x80D36654u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36654u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36654: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36658:
    ctx->pc = 0x80D36658u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36658u)) return;
    // 80D36658: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_80D3665C:
    ctx->pc = 0x80D3665Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3665Cu)) return;
    // 80D3665C: cmpwi   r0, 0
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

label_80D36660:
    ctx->pc = 0x80D36660u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36660u)) return;
    // 80D36660: bc    12, 2, 0x80D36668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36668;
        }
    }

label_80D36664:
    ctx->pc = 0x80D36664u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36664u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36664: b       0x80D3666C
    {
            goto label_80D3666C;
    }

label_80D36668:
    ctx->pc = 0x80D36668u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36668u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36668: bl      0x80D365D8
    {
            ctx->lr = 0x80D3666Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D365D8u;
                return;
            }
            goto label_80D365D8;
    }

label_80D3666C:
    ctx->pc = 0x80D3666Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3666Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3666C: lwz     r0, 20(r1)
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
label_80D36670:
    ctx->pc = 0x80D36670u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36670u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36670: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36674:
    ctx->pc = 0x80D36674u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36674u)) return;
    // 80D36674: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36678:
    ctx->pc = 0x80D36678u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36678u)) return;
    // 80D36678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D3667C:
    ctx->pc = 0x80D3667Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3667Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3667C: stwu     r1, -16(r1)
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
label_80D36680:
    ctx->pc = 0x80D36680u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36680u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36680: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36684:
    ctx->pc = 0x80D36684u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36684u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36684: stw     r0, 20(r1)
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
label_80D36688:
    ctx->pc = 0x80D36688u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36688u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36688: lwz     r3, 32(r3)
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
label_80D3668C:
    ctx->pc = 0x80D3668Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3668Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3668C: lwz     r3, 16(r3)
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
label_80D36690:
    ctx->pc = 0x80D36690u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36690u)) return;
    // 80D36690: cmplwi  r3, 0x0000
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

label_80D36694:
    ctx->pc = 0x80D36694u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36694u)) return;
    // 80D36694: bc    12, 2, 0x80D3669C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3669C;
        }
    }

label_80D36698:
    ctx->pc = 0x80D36698u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36698u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36698: bl      0x8050ED40
    {
            ctx->lr = 0x80D3669Cu;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D3669C:
    ctx->pc = 0x80D3669Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3669Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3669C: lwz     r0, 20(r1)
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
label_80D366A0:
    ctx->pc = 0x80D366A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D366A0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D366A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D366A4:
    ctx->pc = 0x80D366A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366A4u)) return;
    // 80D366A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D366A8:
    ctx->pc = 0x80D366A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366A8u)) return;
    // 80D366A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D366AC:
    ctx->pc = 0x80D366ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D366ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D366AC: stwu     r1, -16(r1)
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
label_80D366B0:
    ctx->pc = 0x80D366B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D366B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D366B4:
    ctx->pc = 0x80D366B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D366B4: stw     r0, 20(r1)
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
label_80D366B8:
    ctx->pc = 0x80D366B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D366B8: lwz     r3, 32(r3)
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
label_80D366BC:
    ctx->pc = 0x80D366BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D366BC: lwz     r3, 16(r3)
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
label_80D366C0:
    ctx->pc = 0x80D366C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366C0u)) return;
    // 80D366C0: bl      0x80509CF0
    {
            ctx->lr = 0x80D366C4u;
            ctx->pc = 0x80509CF0u;
            return;
    }

label_80D366C4:
    ctx->pc = 0x80D366C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D366C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D366C4: lwz     r0, 20(r1)
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
label_80D366C8:
    ctx->pc = 0x80D366C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D366C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D366C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D366CC:
    ctx->pc = 0x80D366CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366CCu)) return;
    // 80D366CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D366D0:
    ctx->pc = 0x80D366D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366D0u)) return;
    // 80D366D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D366D4:
    ctx->pc = 0x80D366D4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D366D4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D366D4: stwu     r1, -32(r1)
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
label_80D366D8:
    ctx->pc = 0x80D366D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D366D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D366DC:
    ctx->pc = 0x80D366DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D366DC: stw     r0, 36(r1)
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
label_80D366E0:
    ctx->pc = 0x80D366E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D366E0: stw     r31, 28(r1)
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
label_80D366E4:
    ctx->pc = 0x80D366E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D366E4: stw     r30, 24(r1)
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
label_80D366E8:
    ctx->pc = 0x80D366E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D366E8: stw     r29, 20(r1)
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
label_80D366EC:
    ctx->pc = 0x80D366ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D366EC: lwz     r31, 32(r3)
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
label_80D366F0:
    ctx->pc = 0x80D366F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D366F0: lwz     r30, 16(r31)
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
label_80D366F4:
    ctx->pc = 0x80D366F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D366F4: lwz     r5, 28(r31)
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
label_80D366F8:
    ctx->pc = 0x80D366F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366F8u)) return;
    // 80D366F8: cmpwi   r5, 0
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

label_80D366FC:
    ctx->pc = 0x80D366FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D366FCu)) return;
    // 80D366FC: bc    4, 1, 0x80D36734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36734;
        }
    }

label_80D36700:
    ctx->pc = 0x80D36700u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36700u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D36700: lwz     r4, 24(r31)
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
label_80D36704:
    ctx->pc = 0x80D36704u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36704u)) return;
    // 80D36704: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D36708:
    ctx->pc = 0x80D36708u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36708u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D36708: lwz     r0, 20(r31)
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
label_80D3670C:
    ctx->pc = 0x80D3670Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D3670Cu)) return;
    // 80D3670C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D36710:
    ctx->pc = 0x80D36710u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36710u)) return;
    // 80D36710: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D36714:
    ctx->pc = 0x80D36714u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D36714u)) return;
    // 80D36714: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D36718:
    ctx->pc = 0x80D36718u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36718u)) return;
    // 80D36718: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D3671C:
    ctx->pc = 0x80D3671Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3671Cu)) return;
    // 80D3671C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D36720:
    ctx->pc = 0x80D36720u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36720u)) return;
    // 80D36720: bl      0x80509C74
    {
            ctx->lr = 0x80D36724u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D36724:
    ctx->pc = 0x80D36724u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36724u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36724: stw     r29, 20(r31)
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
label_80D36728:
    ctx->pc = 0x80D36728u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36728u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36728: lwz     r3, 28(r31)
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
label_80D3672C:
    ctx->pc = 0x80D3672Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3672Cu)) return;
    // 80D3672C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D36730:
    ctx->pc = 0x80D36730u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36730u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36730: stw     r0, 28(r31)
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
label_80D36734:
    ctx->pc = 0x80D36734u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36734u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36734: lwz     r5, 40(r31)
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
label_80D36738:
    ctx->pc = 0x80D36738u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36738u)) return;
    // 80D36738: cmpwi   r5, 0
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

label_80D3673C:
    ctx->pc = 0x80D3673Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3673Cu)) return;
    // 80D3673C: bc    4, 1, 0x80D36774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36774;
        }
    }

label_80D36740:
    ctx->pc = 0x80D36740u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36740u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D36740: lwz     r4, 36(r31)
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
label_80D36744:
    ctx->pc = 0x80D36744u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36744u)) return;
    // 80D36744: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D36748:
    ctx->pc = 0x80D36748u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36748u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D36748: lwz     r0, 32(r31)
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
label_80D3674C:
    ctx->pc = 0x80D3674Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D3674Cu)) return;
    // 80D3674C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D36750:
    ctx->pc = 0x80D36750u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36750u)) return;
    // 80D36750: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D36754:
    ctx->pc = 0x80D36754u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D36754u)) return;
    // 80D36754: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D36758:
    ctx->pc = 0x80D36758u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36758u)) return;
    // 80D36758: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D3675C:
    ctx->pc = 0x80D3675Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3675Cu)) return;
    // 80D3675C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D36760:
    ctx->pc = 0x80D36760u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36760u)) return;
    // 80D36760: bl      0x80509BF8
    {
            ctx->lr = 0x80D36764u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D36764:
    ctx->pc = 0x80D36764u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36764u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36764: stw     r29, 32(r31)
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
label_80D36768:
    ctx->pc = 0x80D36768u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36768u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36768: lwz     r3, 40(r31)
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
label_80D3676C:
    ctx->pc = 0x80D3676Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3676Cu)) return;
    // 80D3676C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D36770:
    ctx->pc = 0x80D36770u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36770u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36770: stw     r0, 40(r31)
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
label_80D36774:
    ctx->pc = 0x80D36774u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36774u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36774: lwz     r5, 52(r31)
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
label_80D36778:
    ctx->pc = 0x80D36778u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36778u)) return;
    // 80D36778: cmpwi   r5, 0
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

label_80D3677C:
    ctx->pc = 0x80D3677Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3677Cu)) return;
    // 80D3677C: bc    4, 1, 0x80D367B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D367B4;
        }
    }

label_80D36780:
    ctx->pc = 0x80D36780u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 52u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36780u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 52u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 51u : 0u;
    // 80D36780: lwz     r4, 48(r31)
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
label_80D36784:
    ctx->pc = 0x80D36784u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36784u)) return;
    // 80D36784: addi    r3, r5, -1
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1);

label_80D36788:
    ctx->pc = 0x80D36788u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36788u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 49u : 0u;
    // 80D36788: lwz     r0, 44(r31)
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
label_80D3678C:
    ctx->pc = 0x80D3678Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 5u, 0x80D3678Cu)) return;
    // 80D3678C: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_80D36790:
    ctx->pc = 0x80D36790u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36790u)) return;
    // 80D36790: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80D36794:
    ctx->pc = 0x80D36794u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 40u, 0x80D36794u)) return;
    // 80D36794: divw   r29, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_80D36798:
    ctx->pc = 0x80D36798u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36798u)) return;
    // 80D36798: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D3679C:
    ctx->pc = 0x80D3679Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3679Cu)) return;
    // 80D3679C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D367A0:
    ctx->pc = 0x80D367A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367A0u)) return;
    // 80D367A0: bl      0x80509B94
    {
            ctx->lr = 0x80D367A4u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D367A4:
    ctx->pc = 0x80D367A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D367A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D367A4: stw     r29, 44(r31)
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
label_80D367A8:
    ctx->pc = 0x80D367A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D367A8: lwz     r3, 52(r31)
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
label_80D367AC:
    ctx->pc = 0x80D367ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367ACu)) return;
    // 80D367AC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_80D367B0:
    ctx->pc = 0x80D367B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367B0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D367B0: stw     r0, 52(r31)
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
label_80D367B4:
    ctx->pc = 0x80D367B4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D367B4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D367B4: lwz     r31, 28(r1)
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
label_80D367B8:
    ctx->pc = 0x80D367B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367B8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D367B8: lwz     r30, 24(r1)
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
label_80D367BC:
    ctx->pc = 0x80D367BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367BCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D367BC: lwz     r29, 20(r1)
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
label_80D367C0:
    ctx->pc = 0x80D367C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D367C0: lwz     r0, 36(r1)
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
label_80D367C4:
    ctx->pc = 0x80D367C4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D367C4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D367C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D367C8:
    ctx->pc = 0x80D367C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367C8u)) return;
    // 80D367C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D367CC:
    ctx->pc = 0x80D367CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367CCu)) return;
    // 80D367CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D367D0:
    ctx->pc = 0x80D367D0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D367D0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D367D0: stwu     r1, -32(r1)
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
label_80D367D4:
    ctx->pc = 0x80D367D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367D4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D367D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D367D8:
    ctx->pc = 0x80D367D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367D8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D367D8: stw     r0, 36(r1)
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
label_80D367DC:
    ctx->pc = 0x80D367DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D367DC: stw     r31, 28(r1)
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
label_80D367E0:
    ctx->pc = 0x80D367E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D367E0: stw     r30, 24(r1)
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
label_80D367E4:
    ctx->pc = 0x80D367E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D367E4: stw     r29, 20(r1)
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
label_80D367E8:
    ctx->pc = 0x80D367E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367E8u)) return;
    // 80D367E8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D367EC:
    ctx->pc = 0x80D367ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367ECu)) return;
    // 80D367EC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D367F0:
    ctx->pc = 0x80D367F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367F0u)) return;
    // 80D367F0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D367F4:
    ctx->pc = 0x80D367F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367F4u)) return;
    // 80D367F4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D367F8:
    ctx->pc = 0x80D367F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367F8u)) return;
    // 80D367F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D367FC:
    ctx->pc = 0x80D367FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D367FCu)) return;
    // 80D367FC: bl      0x8050FD60
    {
            ctx->lr = 0x80D36800u;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D36800:
    ctx->pc = 0x80D36800u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36800u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36800: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D36804:
    ctx->pc = 0x80D36804u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36804u)) return;
    // 80D36804: cmplwi  r31, 0x0000
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

label_80D36808:
    ctx->pc = 0x80D36808u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36808u)) return;
    // 80D36808: bc    12, 2, 0x80D3686C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D3686C;
        }
    }

label_80D3680C:
    ctx->pc = 0x80D3680Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3680Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D3680C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D36810:
    ctx->pc = 0x80D36810u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36810u)) return;
    // 80D36810: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D36814:
    ctx->pc = 0x80D36814u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36814u)) return;
    // 80D36814: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D36818:
    ctx->pc = 0x80D36818u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36818u)) return;
    // 80D36818: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D3681C:
    ctx->pc = 0x80D3681Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3681Cu)) return;
    // 80D3681C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D36820:
    ctx->pc = 0x80D36820u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36820u)) return;
    // 80D36820: bl      0x8050A0D4
    {
            ctx->lr = 0x80D36824u;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D36824:
    ctx->pc = 0x80D36824u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 18u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36824u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 18u : 1u;
    // 80D36824: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D36828:
    ctx->pc = 0x80D36828u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36828u)) return;
    // 80D36828: addi    r0, r3, 26324
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26324);

label_80D3682C:
    ctx->pc = 0x80D3682Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3682Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 15u : 0u;
    // 80D3682C: stw     r0, 16(r31)
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
label_80D36830:
    ctx->pc = 0x80D36830u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36830u)) return;
    // 80D36830: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D36834:
    ctx->pc = 0x80D36834u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36834u)) return;
    // 80D36834: addi    r0, r3, 26284
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26284);

label_80D36838:
    ctx->pc = 0x80D36838u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36838u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D36838: stw     r0, 24(r31)
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
label_80D3683C:
    ctx->pc = 0x80D3683Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3683Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D3683C: lwz     r3, 32(r31)
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
label_80D36840:
    ctx->pc = 0x80D36840u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36840u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36840: stw     r31, 16(r3)
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
label_80D36844:
    ctx->pc = 0x80D36844u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36844u)) return;
    // 80D36844: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D36848:
    ctx->pc = 0x80D36848u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36848u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36848: stw     r0, 20(r3)
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
label_80D3684C:
    ctx->pc = 0x80D3684Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3684Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D3684C: stw     r0, 24(r3)
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
label_80D36850:
    ctx->pc = 0x80D36850u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36850u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36850: stw     r0, 28(r3)
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
label_80D36854:
    ctx->pc = 0x80D36854u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36854u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36854: stw     r0, 32(r3)
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
label_80D36858:
    ctx->pc = 0x80D36858u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36858u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36858: stw     r0, 36(r3)
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
label_80D3685C:
    ctx->pc = 0x80D3685Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3685Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D3685C: stw     r0, 40(r3)
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
label_80D36860:
    ctx->pc = 0x80D36860u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36860u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36860: stw     r0, 44(r3)
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
label_80D36864:
    ctx->pc = 0x80D36864u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36864u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36864: stw     r0, 48(r3)
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
label_80D36868:
    ctx->pc = 0x80D36868u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36868u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36868: stw     r0, 52(r3)
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
label_80D3686C:
    ctx->pc = 0x80D3686Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3686Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    // 80D3686C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D36870:
    ctx->pc = 0x80D36870u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36870u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36870: lwz     r31, 28(r1)
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
label_80D36874:
    ctx->pc = 0x80D36874u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36874u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36874: lwz     r30, 24(r1)
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
label_80D36878:
    ctx->pc = 0x80D36878u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36878u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36878: lwz     r29, 20(r1)
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
label_80D3687C:
    ctx->pc = 0x80D3687Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3687Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3687C: lwz     r0, 36(r1)
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
label_80D36880:
    ctx->pc = 0x80D36880u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36880u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36880: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36884:
    ctx->pc = 0x80D36884u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36884u)) return;
    // 80D36884: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D36888:
    ctx->pc = 0x80D36888u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36888u)) return;
    // 80D36888: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D3688C:
    ctx->pc = 0x80D3688Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3688Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3688C: stwu     r1, -16(r1)
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
label_80D36890:
    ctx->pc = 0x80D36890u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36890u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36890: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36894:
    ctx->pc = 0x80D36894u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36894u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36894: stw     r0, 20(r1)
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
label_80D36898:
    ctx->pc = 0x80D36898u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36898u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36898: stw     r31, 12(r1)
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
label_80D3689C:
    ctx->pc = 0x80D3689Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3689Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3689C: stw     r30, 8(r1)
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
label_80D368A0:
    ctx->pc = 0x80D368A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368A0u)) return;
    // 80D368A0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D368A4:
    ctx->pc = 0x80D368A4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368A4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D368A4: lwz     r31, 32(r3)
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
label_80D368A8:
    ctx->pc = 0x80D368A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368A8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D368A8: stw     r30, 24(r31)
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
label_80D368AC:
    ctx->pc = 0x80D368ACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368ACu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D368AC: stw     r5, 28(r31)
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
label_80D368B0:
    ctx->pc = 0x80D368B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368B0u)) return;
    // 80D368B0: cmpwi   r5, 0
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

label_80D368B4:
    ctx->pc = 0x80D368B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368B4u)) return;
    // 80D368B4: bc    12, 1, 0x80D368C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D368C4;
        }
    }

label_80D368B8:
    ctx->pc = 0x80D368B8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D368B8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D368B8: lwz     r3, 16(r31)
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
label_80D368BC:
    ctx->pc = 0x80D368BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368BCu)) return;
    // 80D368BC: bl      0x80509C74
    {
            ctx->lr = 0x80D368C0u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D368C0:
    ctx->pc = 0x80D368C0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D368C0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D368C0: stw     r30, 20(r31)
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
label_80D368C4:
    ctx->pc = 0x80D368C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D368C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D368C4: lwz     r31, 12(r1)
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
label_80D368C8:
    ctx->pc = 0x80D368C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D368C8: lwz     r30, 8(r1)
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
label_80D368CC:
    ctx->pc = 0x80D368CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D368CC: lwz     r0, 20(r1)
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
label_80D368D0:
    ctx->pc = 0x80D368D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D368D0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D368D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D368D4:
    ctx->pc = 0x80D368D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368D4u)) return;
    // 80D368D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D368D8:
    ctx->pc = 0x80D368D8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368D8u)) return;
    // 80D368D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D368DC:
    ctx->pc = 0x80D368DCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D368DCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D368DC: stwu     r1, -16(r1)
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
label_80D368E0:
    ctx->pc = 0x80D368E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D368E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D368E4:
    ctx->pc = 0x80D368E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D368E4: stw     r0, 20(r1)
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
label_80D368E8:
    ctx->pc = 0x80D368E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D368E8: stw     r31, 12(r1)
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
label_80D368EC:
    ctx->pc = 0x80D368ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D368EC: stw     r30, 8(r1)
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
label_80D368F0:
    ctx->pc = 0x80D368F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368F0u)) return;
    // 80D368F0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D368F4:
    ctx->pc = 0x80D368F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368F4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D368F4: lwz     r31, 32(r3)
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
label_80D368F8:
    ctx->pc = 0x80D368F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368F8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D368F8: stw     r30, 36(r31)
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
label_80D368FC:
    ctx->pc = 0x80D368FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D368FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D368FC: stw     r5, 40(r31)
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
label_80D36900:
    ctx->pc = 0x80D36900u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36900u)) return;
    // 80D36900: cmpwi   r5, 0
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

label_80D36904:
    ctx->pc = 0x80D36904u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36904u)) return;
    // 80D36904: bc    12, 1, 0x80D36914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36914;
        }
    }

label_80D36908:
    ctx->pc = 0x80D36908u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36908u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36908: lwz     r3, 16(r31)
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
label_80D3690C:
    ctx->pc = 0x80D3690Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3690Cu)) return;
    // 80D3690C: bl      0x80509BF8
    {
            ctx->lr = 0x80D36910u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D36910:
    ctx->pc = 0x80D36910u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36910u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36910: stw     r30, 32(r31)
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
label_80D36914:
    ctx->pc = 0x80D36914u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36914u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36914: lwz     r31, 12(r1)
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
label_80D36918:
    ctx->pc = 0x80D36918u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36918u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36918: lwz     r30, 8(r1)
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
label_80D3691C:
    ctx->pc = 0x80D3691Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3691Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3691C: lwz     r0, 20(r1)
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
label_80D36920:
    ctx->pc = 0x80D36920u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36920u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36920: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36924:
    ctx->pc = 0x80D36924u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36924u)) return;
    // 80D36924: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36928:
    ctx->pc = 0x80D36928u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36928u)) return;
    // 80D36928: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D3692C:
    ctx->pc = 0x80D3692Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3692Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D3692C: stwu     r1, -16(r1)
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
label_80D36930:
    ctx->pc = 0x80D36930u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36930u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36930: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36934:
    ctx->pc = 0x80D36934u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36934u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36934: stw     r0, 20(r1)
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
label_80D36938:
    ctx->pc = 0x80D36938u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36938u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36938: stw     r31, 12(r1)
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
label_80D3693C:
    ctx->pc = 0x80D3693Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3693Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D3693C: stw     r30, 8(r1)
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
label_80D36940:
    ctx->pc = 0x80D36940u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36940u)) return;
    // 80D36940: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36944:
    ctx->pc = 0x80D36944u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36944u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36944: lwz     r31, 32(r3)
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
label_80D36948:
    ctx->pc = 0x80D36948u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36948u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36948: stw     r30, 48(r31)
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
label_80D3694C:
    ctx->pc = 0x80D3694Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3694Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D3694C: stw     r5, 52(r31)
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
label_80D36950:
    ctx->pc = 0x80D36950u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36950u)) return;
    // 80D36950: cmpwi   r5, 0
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

label_80D36954:
    ctx->pc = 0x80D36954u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36954u)) return;
    // 80D36954: bc    12, 1, 0x80D36964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36964;
        }
    }

label_80D36958:
    ctx->pc = 0x80D36958u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36958u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36958: lwz     r3, 16(r31)
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
label_80D3695C:
    ctx->pc = 0x80D3695Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3695Cu)) return;
    // 80D3695C: bl      0x80509B94
    {
            ctx->lr = 0x80D36960u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D36960:
    ctx->pc = 0x80D36960u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36960u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36960: stw     r30, 44(r31)
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
label_80D36964:
    ctx->pc = 0x80D36964u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36964u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36964: lwz     r31, 12(r1)
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
label_80D36968:
    ctx->pc = 0x80D36968u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36968u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36968: lwz     r30, 8(r1)
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
label_80D3696C:
    ctx->pc = 0x80D3696Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3696Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D3696C: lwz     r0, 20(r1)
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
label_80D36970:
    ctx->pc = 0x80D36970u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36970u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36970: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36974:
    ctx->pc = 0x80D36974u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36974u)) return;
    // 80D36974: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36978:
    ctx->pc = 0x80D36978u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36978u)) return;
    // 80D36978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D3697C:
    ctx->pc = 0x80D3697Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D3697Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D3697C: stwu     r1, -16(r1)
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
label_80D36980:
    ctx->pc = 0x80D36980u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36980u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36980: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36984:
    ctx->pc = 0x80D36984u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36984u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36984: stw     r0, 20(r1)
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
label_80D36988:
    ctx->pc = 0x80D36988u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36988u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36988: stw     r31, 12(r1)
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
label_80D3698C:
    ctx->pc = 0x80D3698Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3698Cu)) return;
    // 80D3698C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D36990:
    ctx->pc = 0x80D36990u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36990u)) return;
    // 80D36990: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36994:
    ctx->pc = 0x80D36994u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36994u)) return;
    // 80D36994: addi    r4, r4, 7636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7636);

label_80D36998:
    ctx->pc = 0x80D36998u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36998u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36998: lwz     r0, 0(r4)
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
label_80D3699C:
    ctx->pc = 0x80D3699Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3699Cu)) return;
    // 80D3699C: cmplwi  r0, 0x0000
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

label_80D369A0:
    ctx->pc = 0x80D369A0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369A0u)) return;
    // 80D369A0: bc    4, 2, 0x80D369C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D369C4;
        }
    }

label_80D369A4:
    ctx->pc = 0x80D369A4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D369A4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D369A4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80D369A8:
    ctx->pc = 0x80D369A8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369A8u)) return;
    // 80D369A8: bl      0x8050EEC0
    {
            ctx->lr = 0x80D369ACu;
            ctx->pc = 0x8050EEC0u;
            return;
    }

label_80D369AC:
    ctx->pc = 0x80D369ACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D369ACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    // 80D369AC: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D369B0:
    ctx->pc = 0x80D369B0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369B0u)) return;
    // 80D369B0: addi    r4, r4, 7636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7636);

label_80D369B4:
    ctx->pc = 0x80D369B4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369B4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D369B4: stw     r3, 0(r4)
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
label_80D369B8:
    ctx->pc = 0x80D369B8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369B8u)) return;
    // 80D369B8: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D369BC:
    ctx->pc = 0x80D369BCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369BCu)) return;
    // 80D369BC: addi    r3, r3, 7632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7632);

label_80D369C0:
    ctx->pc = 0x80D369C0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369C0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D369C0: stw     r31, 0(r3)
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
label_80D369C4:
    ctx->pc = 0x80D369C4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D369C4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D369C4: lwz     r31, 12(r1)
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
label_80D369C8:
    ctx->pc = 0x80D369C8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369C8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D369C8: lwz     r0, 20(r1)
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
label_80D369CC:
    ctx->pc = 0x80D369CCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D369CCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D369CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D369D0:
    ctx->pc = 0x80D369D0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369D0u)) return;
    // 80D369D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D369D4:
    ctx->pc = 0x80D369D4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369D4u)) return;
    // 80D369D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D369D8:
    ctx->pc = 0x80D369D8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D369D8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D369D8: stwu     r1, -32(r1)
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
label_80D369DC:
    ctx->pc = 0x80D369DCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369DCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D369DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D369E0:
    ctx->pc = 0x80D369E0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369E0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D369E0: stw     r0, 36(r1)
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
label_80D369E4:
    ctx->pc = 0x80D369E4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369E4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D369E4: stw     r31, 28(r1)
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
label_80D369E8:
    ctx->pc = 0x80D369E8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369E8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D369E8: stw     r30, 24(r1)
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
label_80D369EC:
    ctx->pc = 0x80D369ECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369ECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D369EC: stw     r29, 20(r1)
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
label_80D369F0:
    ctx->pc = 0x80D369F0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369F0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D369F0: stw     r28, 16(r1)
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
label_80D369F4:
    ctx->pc = 0x80D369F4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369F4u)) return;
    // 80D369F4: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D369F8:
    ctx->pc = 0x80D369F8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369F8u)) return;
    // 80D369F8: addi    r30, r3, 7636
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(7636);

label_80D369FC:
    ctx->pc = 0x80D369FCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D369FCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D369FC: lwz     r0, 0(r30)
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
label_80D36A00:
    ctx->pc = 0x80D36A00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A00u)) return;
    // 80D36A00: cmplwi  r0, 0x0000
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

label_80D36A04:
    ctx->pc = 0x80D36A04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A04u)) return;
    // 80D36A04: bc    12, 2, 0x80D36A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36A64;
        }
    }

label_80D36A08:
    ctx->pc = 0x80D36A08u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A08u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36A08: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80D36A0C:
    ctx->pc = 0x80D36A0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A0Cu)) return;
    // 80D36A0C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80D36A10:
    ctx->pc = 0x80D36A10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A10u)) return;
    // 80D36A10: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36A14:
    ctx->pc = 0x80D36A14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A14u)) return;
    // 80D36A14: addi    r31, r3, 7632
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(7632);

label_80D36A18:
    ctx->pc = 0x80D36A18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A18u)) return;
    // 80D36A18: b       0x80D36A38
    {
            goto label_80D36A38;
    }

label_80D36A1C:
    ctx->pc = 0x80D36A1Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A1Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36A1C: lwz     r3, 0(r30)
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
label_80D36A20:
    ctx->pc = 0x80D36A20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36A20: lwzx    r3, r3, r29
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
label_80D36A24:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A24u)) return;
    // 80D36A24: cmplwi  r3, 0x0000
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

label_80D36A28:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A28u)) return;
    // 80D36A28: bc    12, 2, 0x80D36A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36A30;
        }
    }

label_80D36A2C:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36A2C: bl      0x8050F9E0
    {
            ctx->lr = 0x80D36A30u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D36A30:
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A30u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36A30: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80D36A34:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A34u)) return;
    // 80D36A34: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80D36A38:
    ctx->pc = 0x80D36A38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36A38: lwz     r0, 0(r31)
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
label_80D36A3C:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A3Cu)) return;
    // 80D36A3C: cmpw    r28, r0
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

label_80D36A40:
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A40u)) return;
    // 80D36A40: bc    12, 0, 0x80D36A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D36A1Cu;
                return;
            }
            goto label_80D36A1C;
        }
    }

label_80D36A44:
    ctx->pc = 0x80D36A44u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A44u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D36A44: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36A48:
    ctx->pc = 0x80D36A48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A48u)) return;
    // 80D36A48: addi    r3, r3, 7636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7636);

label_80D36A4C:
    ctx->pc = 0x80D36A4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36A4C: lwz     r3, 0(r3)
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
label_80D36A50:
    ctx->pc = 0x80D36A50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A50u)) return;
    // 80D36A50: bl      0x8050ED40
    {
            ctx->lr = 0x80D36A54u;
            ctx->pc = 0x8050ED40u;
            return;
    }

label_80D36A54:
    ctx->pc = 0x80D36A54u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A54u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D36A54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D36A58:
    ctx->pc = 0x80D36A58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A58u)) return;
    // 80D36A58: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36A5C:
    ctx->pc = 0x80D36A5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A5Cu)) return;
    // 80D36A5C: addi    r3, r3, 7636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7636);

label_80D36A60:
    ctx->pc = 0x80D36A60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36A60: stw     r0, 0(r3)
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
label_80D36A64:
    ctx->pc = 0x80D36A64u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A64u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36A64: lwz     r31, 28(r1)
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
label_80D36A68:
    ctx->pc = 0x80D36A68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36A68: lwz     r30, 24(r1)
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
label_80D36A6C:
    ctx->pc = 0x80D36A6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36A6C: lwz     r29, 20(r1)
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
label_80D36A70:
    ctx->pc = 0x80D36A70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36A70: lwz     r28, 16(r1)
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
label_80D36A74:
    ctx->pc = 0x80D36A74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36A74: lwz     r0, 36(r1)
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
label_80D36A78:
    ctx->pc = 0x80D36A78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36A78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36A78: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36A7C:
    ctx->pc = 0x80D36A7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A7Cu)) return;
    // 80D36A7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D36A80:
    ctx->pc = 0x80D36A80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A80u)) return;
    // 80D36A80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36A84:
    ctx->pc = 0x80D36A84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36A84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36A84: stwu     r1, -16(r1)
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
label_80D36A88:
    ctx->pc = 0x80D36A88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36A88: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36A8C:
    ctx->pc = 0x80D36A8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36A8C: stw     r0, 20(r1)
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
label_80D36A90:
    ctx->pc = 0x80D36A90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36A90: stw     r31, 12(r1)
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
label_80D36A94:
    ctx->pc = 0x80D36A94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A94u)) return;
    // 80D36A94: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36A98:
    ctx->pc = 0x80D36A98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A98u)) return;
    // 80D36A98: addi    r6, r6, 7632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7632);

label_80D36A9C:
    ctx->pc = 0x80D36A9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36A9Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36A9C: lwz     r0, 0(r6)
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
label_80D36AA0:
    ctx->pc = 0x80D36AA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AA0u)) return;
    // 80D36AA0: cmpw    r3, r0
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

label_80D36AA4:
    ctx->pc = 0x80D36AA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AA4u)) return;
    // 80D36AA4: bc    4, 0, 0x80D36AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36AE0;
        }
    }

label_80D36AA8:
    ctx->pc = 0x80D36AA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36AA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36AA8: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36AAC:
    ctx->pc = 0x80D36AACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AACu)) return;
    // 80D36AAC: addi    r6, r6, 7636
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7636);

label_80D36AB0:
    ctx->pc = 0x80D36AB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AB0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36AB0: lwz     r6, 0(r6)
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
label_80D36AB4:
    ctx->pc = 0x80D36AB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AB4u)) return;
    // 80D36AB4: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D36AB8:
    ctx->pc = 0x80D36AB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36AB8: lwzx    r0, r6, r31
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
label_80D36ABC:
    ctx->pc = 0x80D36ABCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ABCu)) return;
    // 80D36ABC: cmplwi  r0, 0x0000
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

label_80D36AC0:
    ctx->pc = 0x80D36AC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AC0u)) return;
    // 80D36AC0: bc    4, 2, 0x80D36AE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36AE0;
        }
    }

label_80D36AC4:
    ctx->pc = 0x80D36AC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36AC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36AC4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36AC8:
    ctx->pc = 0x80D36AC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AC8u)) return;
    // 80D36AC8: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D36ACC:
    ctx->pc = 0x80D36ACCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ACCu)) return;
    // 80D36ACC: bl      0x80D367D0
    {
            ctx->lr = 0x80D36AD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D367D0u;
                return;
            }
            goto label_80D367D0;
    }

label_80D36AD0:
    ctx->pc = 0x80D36AD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36AD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D36AD0: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36AD4:
    ctx->pc = 0x80D36AD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AD4u)) return;
    // 80D36AD4: addi    r4, r4, 7636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7636);

label_80D36AD8:
    ctx->pc = 0x80D36AD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36AD8: lwz     r4, 0(r4)
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
label_80D36ADC:
    ctx->pc = 0x80D36ADCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ADCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36ADC: stwx    r3, r4, r31
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
label_80D36AE0:
    ctx->pc = 0x80D36AE0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36AE0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36AE0: lwz     r31, 12(r1)
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
label_80D36AE4:
    ctx->pc = 0x80D36AE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36AE4: lwz     r0, 20(r1)
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
label_80D36AE8:
    ctx->pc = 0x80D36AE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36AE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36AE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36AEC:
    ctx->pc = 0x80D36AECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AECu)) return;
    // 80D36AEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36AF0:
    ctx->pc = 0x80D36AF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AF0u)) return;
    // 80D36AF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36AF4:
    ctx->pc = 0x80D36AF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 9u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36AF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 9u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36AF4: stwu     r1, -16(r1)
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
label_80D36AF8:
    ctx->pc = 0x80D36AF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36AF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36AFC:
    ctx->pc = 0x80D36AFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36AFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36AFC: stw     r0, 20(r1)
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
label_80D36B00:
    ctx->pc = 0x80D36B00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36B00: stw     r31, 12(r1)
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
label_80D36B04:
    ctx->pc = 0x80D36B04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B04u)) return;
    // 80D36B04: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36B08:
    ctx->pc = 0x80D36B08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B08u)) return;
    // 80D36B08: addi    r4, r4, 7632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7632);

label_80D36B0C:
    ctx->pc = 0x80D36B0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36B0C: lwz     r0, 0(r4)
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
label_80D36B10:
    ctx->pc = 0x80D36B10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B10u)) return;
    // 80D36B10: cmpw    r3, r0
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

label_80D36B14:
    ctx->pc = 0x80D36B14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B14u)) return;
    // 80D36B14: bc    4, 0, 0x80D36B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36B4C;
        }
    }

label_80D36B18:
    ctx->pc = 0x80D36B18u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B18u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36B18: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36B1C:
    ctx->pc = 0x80D36B1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B1Cu)) return;
    // 80D36B1C: addi    r4, r4, 7636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7636);

label_80D36B20:
    ctx->pc = 0x80D36B20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36B20: lwz     r4, 0(r4)
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
label_80D36B24:
    ctx->pc = 0x80D36B24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B24u)) return;
    // 80D36B24: rlwinm r31, r3, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D36B28:
    ctx->pc = 0x80D36B28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36B28: lwzx    r3, r4, r31
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
label_80D36B2C:
    ctx->pc = 0x80D36B2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B2Cu)) return;
    // 80D36B2C: cmplwi  r3, 0x0000
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

label_80D36B30:
    ctx->pc = 0x80D36B30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B30u)) return;
    // 80D36B30: bc    12, 2, 0x80D36B4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36B4C;
        }
    }

label_80D36B34:
    ctx->pc = 0x80D36B34u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B34u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36B34: bl      0x8050F9E0
    {
            ctx->lr = 0x80D36B38u;
            ctx->pc = 0x8050F9E0u;
            return;
    }

label_80D36B38:
    ctx->pc = 0x80D36B38u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B38u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36B38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80D36B3C:
    ctx->pc = 0x80D36B3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B3Cu)) return;
    // 80D36B3C: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36B40:
    ctx->pc = 0x80D36B40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B40u)) return;
    // 80D36B40: addi    r3, r3, 7636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7636);

label_80D36B44:
    ctx->pc = 0x80D36B44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36B44: lwz     r3, 0(r3)
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
label_80D36B48:
    ctx->pc = 0x80D36B48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36B48: stwx    r0, r3, r31
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
label_80D36B4C:
    ctx->pc = 0x80D36B4Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B4Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36B4C: lwz     r31, 12(r1)
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
label_80D36B50:
    ctx->pc = 0x80D36B50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36B50: lwz     r0, 20(r1)
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
label_80D36B54:
    ctx->pc = 0x80D36B54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36B54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36B54: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36B58:
    ctx->pc = 0x80D36B58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B58u)) return;
    // 80D36B58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36B5C:
    ctx->pc = 0x80D36B5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B5Cu)) return;
    // 80D36B5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36B60:
    ctx->pc = 0x80D36B60u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B60u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36B60: stwu     r1, -16(r1)
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
label_80D36B64:
    ctx->pc = 0x80D36B64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36B64: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36B68:
    ctx->pc = 0x80D36B68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36B68: stw     r0, 20(r1)
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
label_80D36B6C:
    ctx->pc = 0x80D36B6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B6Cu)) return;
    // 80D36B6C: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36B70:
    ctx->pc = 0x80D36B70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B70u)) return;
    // 80D36B70: addi    r6, r6, 7632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7632);

label_80D36B74:
    ctx->pc = 0x80D36B74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36B74: lwz     r0, 0(r6)
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
label_80D36B78:
    ctx->pc = 0x80D36B78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B78u)) return;
    // 80D36B78: cmpw    r3, r0
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

label_80D36B7C:
    ctx->pc = 0x80D36B7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B7Cu)) return;
    // 80D36B7C: bc    4, 0, 0x80D36BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36BA0;
        }
    }

label_80D36B80:
    ctx->pc = 0x80D36B80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36B80: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36B84:
    ctx->pc = 0x80D36B84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B84u)) return;
    // 80D36B84: addi    r6, r6, 7636
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7636);

label_80D36B88:
    ctx->pc = 0x80D36B88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36B88: lwz     r6, 0(r6)
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
label_80D36B8C:
    ctx->pc = 0x80D36B8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B8Cu)) return;
    // 80D36B8C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D36B90:
    ctx->pc = 0x80D36B90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36B90: lwzx    r3, r6, r0
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
label_80D36B94:
    ctx->pc = 0x80D36B94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B94u)) return;
    // 80D36B94: cmplwi  r3, 0x0000
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

label_80D36B98:
    ctx->pc = 0x80D36B98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36B98u)) return;
    // 80D36B98: bc    12, 2, 0x80D36BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36BA0;
        }
    }

label_80D36B9C:
    ctx->pc = 0x80D36B9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36B9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36B9C: bl      0x80D3688C
    {
            ctx->lr = 0x80D36BA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3688Cu;
                return;
            }
            goto label_80D3688C;
    }

label_80D36BA0:
    ctx->pc = 0x80D36BA0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36BA0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36BA0: lwz     r0, 20(r1)
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
label_80D36BA4:
    ctx->pc = 0x80D36BA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36BA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36BA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36BA8:
    ctx->pc = 0x80D36BA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BA8u)) return;
    // 80D36BA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36BAC:
    ctx->pc = 0x80D36BACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BACu)) return;
    // 80D36BAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36BB0:
    ctx->pc = 0x80D36BB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36BB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36BB0: stwu     r1, -16(r1)
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
label_80D36BB4:
    ctx->pc = 0x80D36BB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36BB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36BB8:
    ctx->pc = 0x80D36BB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36BB8: stw     r0, 20(r1)
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
label_80D36BBC:
    ctx->pc = 0x80D36BBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BBCu)) return;
    // 80D36BBC: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36BC0:
    ctx->pc = 0x80D36BC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BC0u)) return;
    // 80D36BC0: addi    r6, r6, 7632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7632);

label_80D36BC4:
    ctx->pc = 0x80D36BC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36BC4: lwz     r0, 0(r6)
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
label_80D36BC8:
    ctx->pc = 0x80D36BC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BC8u)) return;
    // 80D36BC8: cmpw    r3, r0
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

label_80D36BCC:
    ctx->pc = 0x80D36BCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BCCu)) return;
    // 80D36BCC: bc    4, 0, 0x80D36BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36BF0;
        }
    }

label_80D36BD0:
    ctx->pc = 0x80D36BD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36BD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36BD0: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36BD4:
    ctx->pc = 0x80D36BD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BD4u)) return;
    // 80D36BD4: addi    r6, r6, 7636
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7636);

label_80D36BD8:
    ctx->pc = 0x80D36BD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36BD8: lwz     r6, 0(r6)
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
label_80D36BDC:
    ctx->pc = 0x80D36BDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BDCu)) return;
    // 80D36BDC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D36BE0:
    ctx->pc = 0x80D36BE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36BE0: lwzx    r3, r6, r0
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
label_80D36BE4:
    ctx->pc = 0x80D36BE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BE4u)) return;
    // 80D36BE4: cmplwi  r3, 0x0000
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

label_80D36BE8:
    ctx->pc = 0x80D36BE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BE8u)) return;
    // 80D36BE8: bc    12, 2, 0x80D36BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36BF0;
        }
    }

label_80D36BEC:
    ctx->pc = 0x80D36BECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36BECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36BEC: bl      0x80D368DC
    {
            ctx->lr = 0x80D36BF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D368DCu;
                return;
            }
            goto label_80D368DC;
    }

label_80D36BF0:
    ctx->pc = 0x80D36BF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36BF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36BF0: lwz     r0, 20(r1)
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
label_80D36BF4:
    ctx->pc = 0x80D36BF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36BF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36BF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36BF8:
    ctx->pc = 0x80D36BF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BF8u)) return;
    // 80D36BF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36BFC:
    ctx->pc = 0x80D36BFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36BFCu)) return;
    // 80D36BFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36C00:
    ctx->pc = 0x80D36C00u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36C00u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36C00: stwu     r1, -16(r1)
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
label_80D36C04:
    ctx->pc = 0x80D36C04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C04u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36C04: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36C08:
    ctx->pc = 0x80D36C08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36C08: stw     r0, 20(r1)
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
label_80D36C0C:
    ctx->pc = 0x80D36C0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C0Cu)) return;
    // 80D36C0C: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36C10:
    ctx->pc = 0x80D36C10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C10u)) return;
    // 80D36C10: addi    r6, r6, 7632
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7632);

label_80D36C14:
    ctx->pc = 0x80D36C14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36C14: lwz     r0, 0(r6)
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
label_80D36C18:
    ctx->pc = 0x80D36C18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C18u)) return;
    // 80D36C18: cmpw    r3, r0
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

label_80D36C1C:
    ctx->pc = 0x80D36C1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C1Cu)) return;
    // 80D36C1C: bc    4, 0, 0x80D36C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36C40;
        }
    }

label_80D36C20:
    ctx->pc = 0x80D36C20u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36C20u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    // 80D36C20: lis     r6, -27327
    ctx->gpr[6] = ((u32)(s32)(-27327) << 16);

label_80D36C24:
    ctx->pc = 0x80D36C24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C24u)) return;
    // 80D36C24: addi    r6, r6, 7636
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7636);

label_80D36C28:
    ctx->pc = 0x80D36C28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36C28: lwz     r6, 0(r6)
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
label_80D36C2C:
    ctx->pc = 0x80D36C2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C2Cu)) return;
    // 80D36C2C: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80D36C30:
    ctx->pc = 0x80D36C30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36C30: lwzx    r3, r6, r0
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
label_80D36C34:
    ctx->pc = 0x80D36C34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C34u)) return;
    // 80D36C34: cmplwi  r3, 0x0000
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

label_80D36C38:
    ctx->pc = 0x80D36C38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C38u)) return;
    // 80D36C38: bc    12, 2, 0x80D36C40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36C40;
        }
    }

label_80D36C3C:
    ctx->pc = 0x80D36C3Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36C3Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36C3C: bl      0x80D3692C
    {
            ctx->lr = 0x80D36C40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D3692Cu;
                return;
            }
            goto label_80D3692C;
    }

label_80D36C40:
    ctx->pc = 0x80D36C40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36C40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36C40: lwz     r0, 20(r1)
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
label_80D36C44:
    ctx->pc = 0x80D36C44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36C44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36C44: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36C48:
    ctx->pc = 0x80D36C48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C48u)) return;
    // 80D36C48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36C4C:
    ctx->pc = 0x80D36C4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C4Cu)) return;
    // 80D36C4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36C50:
    ctx->pc = 0x80D36C50u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 13u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36C50u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 13u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D36C50: stwu     r1, -32(r1)
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
label_80D36C54:
    ctx->pc = 0x80D36C54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D36C54: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36C58:
    ctx->pc = 0x80D36C58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36C58: stw     r0, 36(r1)
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
label_80D36C5C:
    ctx->pc = 0x80D36C5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36C5C: stw     r31, 28(r1)
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
label_80D36C60:
    ctx->pc = 0x80D36C60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36C60: stw     r30, 24(r1)
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
label_80D36C64:
    ctx->pc = 0x80D36C64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36C64: stw     r29, 20(r1)
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
label_80D36C68:
    ctx->pc = 0x80D36C68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36C68: stw     r28, 16(r1)
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
label_80D36C6C:
    ctx->pc = 0x80D36C6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C6Cu)) return;
    // 80D36C6C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D36C70:
    ctx->pc = 0x80D36C70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C70u)) return;
    // 80D36C70: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36C74:
    ctx->pc = 0x80D36C74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C74u)) return;
    // 80D36C74: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80D36C78:
    ctx->pc = 0x80D36C78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C78u)) return;
    // 80D36C78: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80D36C7C:
    ctx->pc = 0x80D36C7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C7Cu)) return;
    // 80D36C7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36C80:
    ctx->pc = 0x80D36C80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C80u)) return;
    // 80D36C80: bl      0x80401DB0
    {
            ctx->lr = 0x80D36C84u;
            ctx->pc = 0x80401DB0u;
            return;
    }

label_80D36C84:
    ctx->pc = 0x80D36C84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 10u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36C84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 10u : 1u;
    // 80D36C84: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36C88:
    ctx->pc = 0x80D36C88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C88u)) return;
    // 80D36C88: addi    r4, r4, 7640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7640);

label_80D36C8C:
    ctx->pc = 0x80D36C8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36C8C: lwz     r0, 0(r4)
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
label_80D36C90:
    ctx->pc = 0x80D36C90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C90u)) return;
    // 80D36C90: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80D36C94:
    ctx->pc = 0x80D36C94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C94u)) return;
    // 80D36C94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D36C98:
    ctx->pc = 0x80D36C98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C98u)) return;
    // 80D36C98: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36C9C:
    ctx->pc = 0x80D36C9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36C9Cu)) return;
    // 80D36C9C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D36CA0:
    ctx->pc = 0x80D36CA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CA0u)) return;
    // 80D36CA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80D36CA4:
    ctx->pc = 0x80D36CA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CA4u)) return;
    // 80D36CA4: li      r7, 120
    ctx->gpr[7] = (u32)(s32)(120);

label_80D36CA8:
    ctx->pc = 0x80D36CA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CA8u)) return;
    // 80D36CA8: bl      0x8050A0D4
    {
            ctx->lr = 0x80D36CACu;
            ctx->pc = 0x8050A0D4u;
            return;
    }

label_80D36CAC:
    ctx->pc = 0x80D36CACu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36CACu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36CAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D36CB0:
    ctx->pc = 0x80D36CB0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CB0u)) return;
    // 80D36CB0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80D36CB4:
    ctx->pc = 0x80D36CB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CB4u)) return;
    // 80D36CB4: bl      0x80509C74
    {
            ctx->lr = 0x80D36CB8u;
            ctx->pc = 0x80509C74u;
            return;
    }

label_80D36CB8:
    ctx->pc = 0x80D36CB8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36CB8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36CB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D36CBC:
    ctx->pc = 0x80D36CBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CBCu)) return;
    // 80D36CBC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80D36CC0:
    ctx->pc = 0x80D36CC0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CC0u)) return;
    // 80D36CC0: bl      0x80509BF8
    {
            ctx->lr = 0x80D36CC4u;
            ctx->pc = 0x80509BF8u;
            return;
    }

label_80D36CC4:
    ctx->pc = 0x80D36CC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36CC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36CC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80D36CC8:
    ctx->pc = 0x80D36CC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CC8u)) return;
    // 80D36CC8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80D36CCC:
    ctx->pc = 0x80D36CCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CCCu)) return;
    // 80D36CCC: bl      0x80509B94
    {
            ctx->lr = 0x80D36CD0u;
            ctx->pc = 0x80509B94u;
            return;
    }

label_80D36CD0:
    ctx->pc = 0x80D36CD0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 16u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36CD0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 16u : 1u;
    // 80D36CD0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36CD4:
    ctx->pc = 0x80D36CD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CD4u)) return;
    // 80D36CD4: addi    r4, r3, 7640
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7640);

label_80D36CD8:
    ctx->pc = 0x80D36CD8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CD8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D36CD8: lwz     r3, 0(r4)
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
label_80D36CDC:
    ctx->pc = 0x80D36CDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CDCu)) return;
    // 80D36CDC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80D36CE0:
    ctx->pc = 0x80D36CE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CE0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D36CE0: stw     r0, 0(r4)
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
label_80D36CE4:
    ctx->pc = 0x80D36CE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CE4u)) return;
    // 80D36CE4: rlwinm r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
    }

label_80D36CE8:
    ctx->pc = 0x80D36CE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CE8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36CE8: stw     r0, 0(r4)
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
label_80D36CEC:
    ctx->pc = 0x80D36CECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CECu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36CEC: lwz     r31, 28(r1)
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
label_80D36CF0:
    ctx->pc = 0x80D36CF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CF0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36CF0: lwz     r30, 24(r1)
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
label_80D36CF4:
    ctx->pc = 0x80D36CF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36CF4: lwz     r29, 20(r1)
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
label_80D36CF8:
    ctx->pc = 0x80D36CF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36CF8: lwz     r28, 16(r1)
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
label_80D36CFC:
    ctx->pc = 0x80D36CFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36CFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36CFC: lwz     r0, 36(r1)
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
label_80D36D00:
    ctx->pc = 0x80D36D00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36D00u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36D00: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D04:
    ctx->pc = 0x80D36D04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D04u)) return;
    // 80D36D04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D36D08:
    ctx->pc = 0x80D36D08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D08u)) return;
    // 80D36D08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36D0C:
    ctx->pc = 0x80D36D0Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D0Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36D0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36D10:
    ctx->pc = 0x80D36D10u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D10u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36D10: stwu     r1, -32(r1)
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
label_80D36D14:
    ctx->pc = 0x80D36D14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36D14: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D18:
    ctx->pc = 0x80D36D18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36D18: stw     r0, 36(r1)
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
label_80D36D1C:
    ctx->pc = 0x80D36D1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D1Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36D1C: stw     r31, 28(r1)
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
label_80D36D20:
    ctx->pc = 0x80D36D20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36D20: lwz     r31, 32(r3)
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
label_80D36D24:
    ctx->pc = 0x80D36D24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D24u)) return;
    // 80D36D24: cmplwi  r31, 0x0000
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

label_80D36D28:
    ctx->pc = 0x80D36D28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D28u)) return;
    // 80D36D28: bc    12, 2, 0x80D36DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36DF0;
        }
    }

label_80D36D2C:
    ctx->pc = 0x80D36D2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36D2C: lis     r3, -28634
    ctx->gpr[3] = ((u32)(s32)(-28634) << 16);

label_80D36D30:
    ctx->pc = 0x80D36D30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D30u)) return;
    // 80D36D30: addi    r3, r3, 4120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4120);

label_80D36D34:
    ctx->pc = 0x80D36D34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D34u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36D34: lwz     r0, 0(r3)
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
label_80D36D38:
    ctx->pc = 0x80D36D38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D38u)) return;
    // 80D36D38: cmpwi   r0, 0
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

label_80D36D3C:
    ctx->pc = 0x80D36D3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D3Cu)) return;
    // 80D36D3C: bc    4, 2, 0x80D36DF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36DF0;
        }
    }

label_80D36D40:
    ctx->pc = 0x80D36D40u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D40u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36D40: lfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D36D40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
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
label_80D36D44:
    ctx->pc = 0x80D36D44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D44u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36D44: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36D44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D48:
    ctx->pc = 0x80D36D48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36D48: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D36D48u)) return;
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
label_80D36D4C:
    ctx->pc = 0x80D36D4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36D4C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36D4Cu)) return;
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
label_80D36D50:
    ctx->pc = 0x80D36D50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36D50: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D36D50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
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
label_80D36D54:
    ctx->pc = 0x80D36D54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36D54: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36D54u)) return;
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
label_80D36D58:
    ctx->pc = 0x80D36D58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36D58: lfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D36D58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
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
label_80D36D5C:
    ctx->pc = 0x80D36D5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D5Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36D5C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36D5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D60:
    ctx->pc = 0x80D36D60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D60u)) return;
    // 80D36D60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36D64:
    ctx->pc = 0x80D36D64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36D64: lbz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D68:
    ctx->pc = 0x80D36D68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D68u)) return;
    // 80D36D68: bl      0x8060F4F8
    {
            ctx->lr = 0x80D36D6Cu;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D36D6C:
    ctx->pc = 0x80D36D6Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D6Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36D6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D36D70:
    ctx->pc = 0x80D36D70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36D70: lbz     r4, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D74:
    ctx->pc = 0x80D36D74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D74u)) return;
    // 80D36D74: bl      0x8060F4F8
    {
            ctx->lr = 0x80D36D78u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D36D78:
    ctx->pc = 0x80D36D78u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D78u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36D78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80D36D7C:
    ctx->pc = 0x80D36D7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D7Cu)) return;
    // 80D36D7C: bl      0x8060F5C8
    {
            ctx->lr = 0x80D36D80u;
            ctx->pc = 0x8060F5C8u;
            return;
    }

label_80D36D80:
    ctx->pc = 0x80D36D80u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 12u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36D80u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 12u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 11u : 0u;
    // 80D36D80: lwz     r0, 16(r31)
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
label_80D36D84:
    ctx->pc = 0x80D36D84u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D84u)) return;
    // 80D36D84: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36D88:
    ctx->pc = 0x80D36D88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D88u)) return;
    // 80D36D88: addi    r3, r3, 7564
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7564);

label_80D36D8C:
    ctx->pc = 0x80D36D8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36D8C: stw     r0, 24(r3)
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
label_80D36D90:
    ctx->pc = 0x80D36D90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36D90: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36D94:
    ctx->pc = 0x80D36D94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D94u)) return;
    // 80D36D94: extsh r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_80D36D98:
    ctx->pc = 0x80D36D98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D98u)) return;
    // 80D36D98: lis     r4, -27327
    ctx->gpr[4] = ((u32)(s32)(-27327) << 16);

label_80D36D9C:
    ctx->pc = 0x80D36D9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36D9Cu)) return;
    // 80D36D9C: addi    r4, r4, 7544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7544);

label_80D36DA0:
    ctx->pc = 0x80D36DA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36DA0: sth     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36DA4:
    ctx->pc = 0x80D36DA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36DA4: lbz     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36DA8:
    ctx->pc = 0x80D36DA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DA8u)) return;
    // 80D36DA8: cmplwi  r0, 0x0000
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

label_80D36DAC:
    ctx->pc = 0x80D36DACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DACu)) return;
    // 80D36DAC: bc    4, 2, 0x80D36DC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36DC4;
        }
    }

label_80D36DB0:
    ctx->pc = 0x80D36DB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D36DB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36DB4:
    ctx->pc = 0x80D36DB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36DB4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D36DB4u)) return;
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
label_80D36DB8:
    ctx->pc = 0x80D36DB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36DB8: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36DBC:
    ctx->pc = 0x80D36DBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DBCu)) return;
    // 80D36DBC: bl      0x8060B0FC
    {
            ctx->lr = 0x80D36DC0u;
            ctx->pc = 0x8060B0FCu;
            return;
    }

label_80D36DC0:
    ctx->pc = 0x80D36DC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36DC0: b       0x80D36DD4
    {
            goto label_80D36DD4;
    }

label_80D36DC4:
    ctx->pc = 0x80D36DC4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DC4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    // 80D36DC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36DC8:
    ctx->pc = 0x80D36DC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36DC8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x80D36DC8u)) return;
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
label_80D36DCC:
    ctx->pc = 0x80D36DCCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DCCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36DCC: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36DD0:
    ctx->pc = 0x80D36DD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DD0u)) return;
    // 80D36DD0: bl      0x80D37000
    {
            ctx->lr = 0x80D36DD4u;
            goto label_80D37000;
    }

label_80D36DD4:
    ctx->pc = 0x80D36DD4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DD4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36DD4: bl      0x80450D68
    {
            ctx->lr = 0x80D36DD8u;
            ctx->pc = 0x80450D68u;
            return;
    }

label_80D36DD8:
    ctx->pc = 0x80D36DD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36DD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80D36DDC:
    ctx->pc = 0x80D36DDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DDCu)) return;
    // 80D36DDC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80D36DE0:
    ctx->pc = 0x80D36DE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DE0u)) return;
    // 80D36DE0: bl      0x8060F4F8
    {
            ctx->lr = 0x80D36DE4u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D36DE4:
    ctx->pc = 0x80D36DE4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DE4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    // 80D36DE4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80D36DE8:
    ctx->pc = 0x80D36DE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DE8u)) return;
    // 80D36DE8: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80D36DEC:
    ctx->pc = 0x80D36DECu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DECu)) return;
    // 80D36DEC: bl      0x8060F4F8
    {
            ctx->lr = 0x80D36DF0u;
            ctx->pc = 0x8060F4F8u;
            return;
    }

label_80D36DF0:
    ctx->pc = 0x80D36DF0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 6u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36DF0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 6u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36DF0: lwz     r31, 28(r1)
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
label_80D36DF4:
    ctx->pc = 0x80D36DF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DF4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36DF4: lwz     r0, 36(r1)
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
label_80D36DF8:
    ctx->pc = 0x80D36DF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36DF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36DF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36DFC:
    ctx->pc = 0x80D36DFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36DFCu)) return;
    // 80D36DFC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D36E00:
    ctx->pc = 0x80D36E00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E00u)) return;
    // 80D36E00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36E04:
    ctx->pc = 0x80D36E04u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 8u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36E04u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 8u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36E04: stwu     r1, -32(r1)
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
label_80D36E08:
    ctx->pc = 0x80D36E08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36E08: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E0C:
    ctx->pc = 0x80D36E0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E0Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36E0C: stw     r0, 36(r1)
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
label_80D36E10:
    ctx->pc = 0x80D36E10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E10u)) return;
    // 80D36E10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D36E14:
    ctx->pc = 0x80D36E14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36E14: lwz     r6, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E18:
    ctx->pc = 0x80D36E18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36E18: lwz     r7, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E1C:
    ctx->pc = 0x80D36E1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E1Cu)) return;
    // 80D36E1C: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D36E20:
    ctx->pc = 0x80D36E20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E20u)) return;
    // 80D36E20: bc    12, 2, 0x80D36EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36EB0;
        }
    }

label_80D36E24:
    ctx->pc = 0x80D36E24u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36E24u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36E24: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80D36E28:
    ctx->pc = 0x80D36E28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E28u)) return;
    // 80D36E28: bc    4, 1, 0x80D36E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36E84;
        }
    }

label_80D36E2C:
    ctx->pc = 0x80D36E2Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 38u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36E2Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 38u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 37u : 0u;
    // 80D36E2C: lfs     f3, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D36E2Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
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
label_80D36E30:
    ctx->pc = 0x80D36E30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E30u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 36u : 0u;
    // 80D36E30: lfs     f1, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D36E30u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E34:
    ctx->pc = 0x80D36E34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E34u)) return;
    // 80D36E34: addi    r5, r7, -1
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(-1);

label_80D36E38:
    ctx->pc = 0x80D36E38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E38u)) return;
    // 80D36E38: lis     r3, -27328
    ctx->gpr[3] = ((u32)(s32)(-27328) << 16);

label_80D36E3C:
    ctx->pc = 0x80D36E3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E3Cu)) return;
    // 80D36E3C: addi    r3, r3, -13552
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13552);

label_80D36E40:
    ctx->pc = 0x80D36E40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 32u : 0u;
    // 80D36E40: lfd     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36E40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E44:
    ctx->pc = 0x80D36E44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E44u)) return;
    // 80D36E44: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_80D36E48:
    ctx->pc = 0x80D36E48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E48u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D36E48: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E4C:
    ctx->pc = 0x80D36E4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E4Cu)) return;
    // 80D36E4C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80D36E50:
    ctx->pc = 0x80D36E50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 28u : 0u;
    // 80D36E50: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E54:
    ctx->pc = 0x80D36E54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E54u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D36E54: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36E54u)) return;
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
label_80D36E58:
    ctx->pc = 0x80D36E58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E58u)) return;
    // 80D36E58: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80D36E58u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80D36E5C:
    ctx->pc = 0x80D36E5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E5Cu)) return;
    // 80D36E5C: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D36E5Cu)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_80D36E60:
    ctx->pc = 0x80D36E60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E60u)) return;
    // 80D36E60: fadds   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x80D36E60u)) return;
    ppc_fadds(ctx, 1, 3, 0);

label_80D36E64:
    ctx->pc = 0x80D36E64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E64u)) return;
    // 80D36E64: xoris   r0, r7, 0x8000
    ctx->gpr[0] = ctx->gpr[7] ^ (0x8000u << 16);

label_80D36E68:
    ctx->pc = 0x80D36E68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E68u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D36E68: stw     r0, 20(r1)
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
label_80D36E6C:
    ctx->pc = 0x80D36E6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E6Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D36E6C: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E70:
    ctx->pc = 0x80D36E70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 20u : 0u;
    // 80D36E70: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80D36E70u)) return;
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
label_80D36E74:
    ctx->pc = 0x80D36E74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E74u)) return;
    // 80D36E74: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80D36E74u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80D36E78:
    ctx->pc = 0x80D36E78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 17u, 0x80D36E78u)) return;
    // 80D36E78: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80D36E78u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_80D36E7C:
    ctx->pc = 0x80D36E7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36E7C: stfs     f0, 32(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D36E7Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E80:
    ctx->pc = 0x80D36E80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36E80: stw     r5, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E84:
    ctx->pc = 0x80D36E84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36E84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36E84: lbz     r0, 10(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E88:
    ctx->pc = 0x80D36E88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E88u)) return;
    // 80D36E88: cmplwi  r0, 0x0000
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

label_80D36E8C:
    ctx->pc = 0x80D36E8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E8Cu)) return;
    // 80D36E8C: bc    4, 2, 0x80D36EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80D36EA8;
        }
    }

label_80D36E90:
    ctx->pc = 0x80D36E90u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36E90u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36E90: lis     r3, -32557
    ctx->gpr[3] = ((u32)(s32)(-32557) << 16);

label_80D36E94:
    ctx->pc = 0x80D36E94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E94u)) return;
    // 80D36E94: addi    r3, r3, 27920
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27920);

label_80D36E98:
    ctx->pc = 0x80D36E98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E98u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36E98: lfs     f1, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x80D36E98u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36E9C:
    ctx->pc = 0x80D36E9Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36E9Cu)) return;
    // 80D36E9C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80D36EA0:
    ctx->pc = 0x80D36EA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EA0u)) return;
    // 80D36EA0: bl      0x80605D44
    {
            ctx->lr = 0x80D36EA4u;
            ctx->pc = 0x80605D44u;
            return;
    }

label_80D36EA4:
    ctx->pc = 0x80D36EA4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 1u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36EA4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 1u : 1u;
    // 80D36EA4: b       0x80D36EB0
    {
            goto label_80D36EB0;
    }

label_80D36EA8:
    ctx->pc = 0x80D36EA8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36EA8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36EA8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36EAC:
    ctx->pc = 0x80D36EACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EACu)) return;
    // 80D36EAC: bl      0x80D36D10
    {
            ctx->lr = 0x80D36EB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80D36D10u;
                return;
            }
            goto label_80D36D10;
    }

label_80D36EB0:
    ctx->pc = 0x80D36EB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36EB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36EB0: lwz     r0, 36(r1)
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
label_80D36EB4:
    ctx->pc = 0x80D36EB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36EB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36EB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36EB8:
    ctx->pc = 0x80D36EB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EB8u)) return;
    // 80D36EB8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80D36EBC:
    ctx->pc = 0x80D36EBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EBCu)) return;
    // 80D36EBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36EC0:
    ctx->pc = 0x80D36EC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 11u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36EC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 11u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36EC0: stwu     r1, -16(r1)
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
label_80D36EC4:
    ctx->pc = 0x80D36EC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 9u : 0u;
    // 80D36EC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36EC8:
    ctx->pc = 0x80D36EC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EC8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36EC8: stw     r0, 20(r1)
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
label_80D36ECC:
    ctx->pc = 0x80D36ECCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ECCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36ECC: stw     r31, 12(r1)
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
label_80D36ED0:
    ctx->pc = 0x80D36ED0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ED0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36ED0: stw     r30, 8(r1)
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
label_80D36ED4:
    ctx->pc = 0x80D36ED4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ED4u)) return;
    // 80D36ED4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80D36ED8:
    ctx->pc = 0x80D36ED8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36ED8u)) return;
    // 80D36ED8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80D36EDC:
    ctx->pc = 0x80D36EDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EDCu)) return;
    // 80D36EDC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80D36EE0:
    ctx->pc = 0x80D36EE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EE0u)) return;
    // 80D36EE0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80D36EE4:
    ctx->pc = 0x80D36EE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EE4u)) return;
    // 80D36EE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80D36EE8:
    ctx->pc = 0x80D36EE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EE8u)) return;
    // 80D36EE8: bl      0x8050FD60
    {
            ctx->lr = 0x80D36EECu;
            ctx->pc = 0x8050FD60u;
            return;
    }

label_80D36EEC:
    ctx->pc = 0x80D36EECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 2u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36EECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 2u : 1u;
    // 80D36EEC: cmplwi  r3, 0x0000
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

label_80D36EF0:
    ctx->pc = 0x80D36EF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EF0u)) return;
    // 80D36EF0: bc    12, 2, 0x80D36F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80D36F84;
        }
    }

label_80D36EF4:
    ctx->pc = 0x80D36EF4u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 36u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36EF4u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 36u : 1u;
    // 80D36EF4: lis     r4, -32557
    ctx->gpr[4] = ((u32)(s32)(-32557) << 16);

label_80D36EF8:
    ctx->pc = 0x80D36EF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EF8u)) return;
    // 80D36EF8: addi    r0, r4, 28164
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28164);

label_80D36EFC:
    ctx->pc = 0x80D36EFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36EFCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 33u : 0u;
    // 80D36EFC: stw     r0, 16(r3)
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
label_80D36F00:
    ctx->pc = 0x80D36F00u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F00u)) return;
    // 80D36F00: lis     r4, -32557
    ctx->gpr[4] = ((u32)(s32)(-32557) << 16);

label_80D36F04:
    ctx->pc = 0x80D36F04u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F04u)) return;
    // 80D36F04: addi    r0, r4, 27920
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(27920);

label_80D36F08:
    ctx->pc = 0x80D36F08u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F08u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 30u : 0u;
    // 80D36F08: stw     r0, 20(r3)
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
label_80D36F0C:
    ctx->pc = 0x80D36F0Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F0Cu)) return;
    // 80D36F0C: lis     r4, -32557
    ctx->gpr[4] = ((u32)(s32)(-32557) << 16);

label_80D36F10:
    ctx->pc = 0x80D36F10u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F10u)) return;
    // 80D36F10: addi    r0, r4, 27916
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(27916);

label_80D36F14:
    ctx->pc = 0x80D36F14u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F14u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 27u : 0u;
    // 80D36F14: stw     r0, 24(r3)
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
label_80D36F18:
    ctx->pc = 0x80D36F18u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F18u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 26u : 0u;
    // 80D36F18: lwz     r5, 32(r3)
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
label_80D36F1C:
    ctx->pc = 0x80D36F1Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F1Cu)) return;
    // 80D36F1C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_80D36F20:
    ctx->pc = 0x80D36F20u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F20u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 24u : 0u;
    // 80D36F20: stb     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F24:
    ctx->pc = 0x80D36F24u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F24u)) return;
    // 80D36F24: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_80D36F28:
    ctx->pc = 0x80D36F28u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F28u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 22u : 0u;
    // 80D36F28: stb     r0, 9(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F2C:
    ctx->pc = 0x80D36F2Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F2Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 21u : 0u;
    // 80D36F2C: stw     r30, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F30:
    ctx->pc = 0x80D36F30u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F30u)) return;
    // 80D36F30: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D36F34:
    ctx->pc = 0x80D36F34u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F34u)) return;
    // 80D36F34: addi    r4, r4, -13544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13544);

label_80D36F38:
    ctx->pc = 0x80D36F38u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F38u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 18u : 0u;
    // 80D36F38: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D36F38u)) return;
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
label_80D36F3C:
    ctx->pc = 0x80D36F3Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F3Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 17u : 0u;
    // 80D36F3C: stfs     f0, 32(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36F3Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F40:
    ctx->pc = 0x80D36F40u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F40u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 16u : 0u;
    // 80D36F40: stfs     f0, 36(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36F40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F44:
    ctx->pc = 0x80D36F44u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F44u)) return;
    // 80D36F44: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D36F48:
    ctx->pc = 0x80D36F48u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F48u)) return;
    // 80D36F48: addi    r4, r4, -13540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13540);

label_80D36F4C:
    ctx->pc = 0x80D36F4Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F4Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 13u : 0u;
    // 80D36F4C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D36F4Cu)) return;
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
label_80D36F50:
    ctx->pc = 0x80D36F50u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F50u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 12u : 0u;
    // 80D36F50: stfs     f0, 40(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36F50u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F54:
    ctx->pc = 0x80D36F54u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F54u)) return;
    // 80D36F54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80D36F58:
    ctx->pc = 0x80D36F58u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F58u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 10u : 0u;
    // 80D36F58: stw     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F5C:
    ctx->pc = 0x80D36F5Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F5Cu)) return;
    // 80D36F5C: li      r0, 34
    ctx->gpr[0] = (u32)(s32)(34);

label_80D36F60:
    ctx->pc = 0x80D36F60u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F60u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 8u : 0u;
    // 80D36F60: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F64:
    ctx->pc = 0x80D36F64u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F64u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 7u : 0u;
    // 80D36F64: stw     r4, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F68:
    ctx->pc = 0x80D36F68u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F68u)) return;
    // 80D36F68: lis     r4, -27328
    ctx->gpr[4] = ((u32)(s32)(-27328) << 16);

label_80D36F6C:
    ctx->pc = 0x80D36F6Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F6Cu)) return;
    // 80D36F6C: addi    r4, r4, -13536
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-13536);

label_80D36F70:
    ctx->pc = 0x80D36F70u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F70u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36F70: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80D36F70u)) return;
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
label_80D36F74:
    ctx->pc = 0x80D36F74u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F74u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36F74: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36F74u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F78:
    ctx->pc = 0x80D36F78u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F78u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36F78: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36F78u)) return;
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
label_80D36F7C:
    ctx->pc = 0x80D36F7Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F7Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36F7C: stfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x80D36F7Cu)) return;
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
label_80D36F80:
    ctx->pc = 0x80D36F80u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F80u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 0u : 0u;
    // 80D36F80: stb     r31, 10(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F84:
    ctx->pc = 0x80D36F84u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 7u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36F84u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 7u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 6u : 0u;
    // 80D36F84: lwz     r31, 12(r1)
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
label_80D36F88:
    ctx->pc = 0x80D36F88u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F88u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 5u : 0u;
    // 80D36F88: lwz     r30, 8(r1)
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
label_80D36F8C:
    ctx->pc = 0x80D36F8Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F8Cu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36F8C: lwz     r0, 20(r1)
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
label_80D36F90:
    ctx->pc = 0x80D36F90u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D36F90u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36F90: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36F94:
    ctx->pc = 0x80D36F94u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F94u)) return;
    // 80D36F94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D36F98:
    ctx->pc = 0x80D36F98u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36F98u)) return;
    // 80D36F98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36F9C:
    ctx->pc = 0x80D36F9Cu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36F9Cu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D36F9C: lwz     r3, 32(r3)
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
label_80D36FA0:
    ctx->pc = 0x80D36FA0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FA0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36FA0: stfs     f1, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36FA0u)) return;
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
label_80D36FA4:
    ctx->pc = 0x80D36FA4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FA4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36FA4: stfs     f2, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36FA4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FA8:
    ctx->pc = 0x80D36FA8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FA8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36FA8: stfs     f3, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36FA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FAC:
    ctx->pc = 0x80D36FACu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FACu)) return;
    // 80D36FAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36FB0:
    ctx->pc = 0x80D36FB0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 4u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36FB0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 4u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36FB0: lwz     r3, 32(r3)
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
label_80D36FB4:
    ctx->pc = 0x80D36FB4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FB4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36FB4: stfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36FB4u)) return;
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
label_80D36FB8:
    ctx->pc = 0x80D36FB8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FB8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36FB8: stw     r4, 20(r3)
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
label_80D36FBC:
    ctx->pc = 0x80D36FBCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FBCu)) return;
    // 80D36FBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36FC0:
    ctx->pc = 0x80D36FC0u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36FC0u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36FC0: lwz     r3, 32(r3)
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
label_80D36FC4:
    ctx->pc = 0x80D36FC4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FC4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36FC4: stfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x80D36FC4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FC8:
    ctx->pc = 0x80D36FC8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FC8u)) return;
    // 80D36FC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36FCC:
    ctx->pc = 0x80D36FCCu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 3u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36FCCu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 3u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D36FCC: lwz     r3, 32(r3)
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
label_80D36FD0:
    ctx->pc = 0x80D36FD0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FD0u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36FD0: stw     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FD4:
    ctx->pc = 0x80D36FD4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FD4u)) return;
    // 80D36FD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36FD8:
    ctx->pc = 0x80D36FD8u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36FD8u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36FD8: rlwinm r5, r5, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_80D36FDC:
    ctx->pc = 0x80D36FDCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FDCu)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D36FDC: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FE0:
    ctx->pc = 0x80D36FE0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FE0u)) return;
    // 80D36FE0: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80D36FE4:
    ctx->pc = 0x80D36FE4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FE4u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36FE4: stb     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FE8:
    ctx->pc = 0x80D36FE8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FE8u)) return;
    // 80D36FE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D36FEC:
    ctx->pc = 0x80D36FECu;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D36FECu;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    // 80D36FEC: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_80D36FF0:
    ctx->pc = 0x80D36FF0u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FF0u)) return;
    // 80D36FF0: lis     r3, -27327
    ctx->gpr[3] = ((u32)(s32)(-27327) << 16);

label_80D36FF4:
    ctx->pc = 0x80D36FF4u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FF4u)) return;
    // 80D36FF4: addi    r3, r3, 7544
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7544);

label_80D36FF8:
    ctx->pc = 0x80D36FF8u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FF8u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 1u : 0u;
    // 80D36FF8: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D36FFC:
    ctx->pc = 0x80D36FFCu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D36FFCu)) return;
    // 80D36FFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

label_80D37000:
    ctx->pc = 0x80D37000u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37000u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D37000: stwu     r1, -16(r1)
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
label_80D37004:
    ctx->pc = 0x80D37004u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37004u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 3u : 0u;
    // 80D37004: mflr    r0
    ctx->gpr[0] = ctx->lr;

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D37008:
    ctx->pc = 0x80D37008u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37008u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D37008: stw     r0, 20(r1)
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
label_80D3700C:
    ctx->pc = 0x80D3700Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3700Cu)) return;
    // 80D3700C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80D37010:
    ctx->pc = 0x80D37010u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37010u)) return;
    // 80D37010: bl      0x80606508
    {
            ctx->lr = 0x80D37014u;
            ctx->pc = 0x80606508u;
            return;
    }

label_80D37014:
    ctx->pc = 0x80D37014u;
    cycle_block_prepaid = dolrecomp_block_can_precharge(ctx, 5u);
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
        ctx->pc = 0x80D37014u;
        return;
    }
    ctx->downcount -= cycle_block_prepaid ? 5u : 1u;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 4u : 0u;
    // 80D37014: lwz     r0, 20(r1)
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
label_80D37018:
    ctx->pc = 0x80D37018u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 2u, 0x80D37018u)) return;
    ctx->cycle_observation_suffix = cycle_block_prepaid ? 2u : 0u;
    // 80D37018: mtlr    r0
    ctx->lr = ctx->gpr[0];

    if (cycle_block_prepaid &&
        ctx->cycle_deadline_budget > 0 &&
        (s64)ctx->cycle_observation_suffix > ctx->cycle_deadline_budget) {
        ctx->downcount += (s64)ctx->cycle_observation_suffix;
        cycle_block_prepaid = false;
    }
label_80D3701C:
    ctx->pc = 0x80D3701Cu;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D3701Cu)) return;
    // 80D3701C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80D37020:
    ctx->pc = 0x80D37020u;
    if (!cycle_block_prepaid && !dolrecomp_charge_precise(ctx, 1u, 0x80D37020u)) return;
    // 80D37020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80D358A0;
        }
    }

    ctx->pc = 0x80D37024u;
    return;
return_dispatch_80D358A0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80D358D4u: goto label_80D358D4;
    case 0x80D358D8u: goto label_80D358D8;
    case 0x80D358DCu: goto label_80D358DC;
    case 0x80D358E8u: goto label_80D358E8;
    case 0x80D358F0u: goto label_80D358F0;
    case 0x80D358F8u: goto label_80D358F8;
    case 0x80D35920u: goto label_80D35920;
    case 0x80D35928u: goto label_80D35928;
    case 0x80D3593Cu: goto label_80D3593C;
    case 0x80D35944u: goto label_80D35944;
    case 0x80D3594Cu: goto label_80D3594C;
    case 0x80D35950u: goto label_80D35950;
    case 0x80D35958u: goto label_80D35958;
    case 0x80D35980u: goto label_80D35980;
    case 0x80D359C0u: goto label_80D359C0;
    case 0x80D359C8u: goto label_80D359C8;
    case 0x80D359F8u: goto label_80D359F8;
    case 0x80D35A14u: goto label_80D35A14;
    case 0x80D35A44u: goto label_80D35A44;
    case 0x80D35A60u: goto label_80D35A60;
    case 0x80D35A68u: goto label_80D35A68;
    case 0x80D35A8Cu: goto label_80D35A8C;
    case 0x80D35A94u: goto label_80D35A94;
    case 0x80D35A9Cu: goto label_80D35A9C;
    case 0x80D35AC4u: goto label_80D35AC4;
    case 0x80D35ACCu: goto label_80D35ACC;
    case 0x80D35AF4u: goto label_80D35AF4;
    case 0x80D35AFCu: goto label_80D35AFC;
    case 0x80D35B00u: goto label_80D35B00;
    case 0x80D35B30u: goto label_80D35B30;
    case 0x80D35B4Cu: goto label_80D35B4C;
    case 0x80D35B54u: goto label_80D35B54;
    case 0x80D35B5Cu: goto label_80D35B5C;
    case 0x80D35B80u: goto label_80D35B80;
    case 0x80D35B88u: goto label_80D35B88;
    case 0x80D35B90u: goto label_80D35B90;
    case 0x80D35BB8u: goto label_80D35BB8;
    case 0x80D35BC0u: goto label_80D35BC0;
    case 0x80D35BC4u: goto label_80D35BC4;
    case 0x80D35BD4u: goto label_80D35BD4;
    case 0x80D35BF0u: goto label_80D35BF0;
    case 0x80D35C10u: goto label_80D35C10;
    case 0x80D35C18u: goto label_80D35C18;
    case 0x80D35C2Cu: goto label_80D35C2C;
    case 0x80D35C44u: goto label_80D35C44;
    case 0x80D35C4Cu: goto label_80D35C4C;
    case 0x80D35C6Cu: goto label_80D35C6C;
    case 0x80D35C70u: goto label_80D35C70;
    case 0x80D35C78u: goto label_80D35C78;
    case 0x80D35C8Cu: goto label_80D35C8C;
    case 0x80D35CACu: goto label_80D35CAC;
    case 0x80D35CB4u: goto label_80D35CB4;
    case 0x80D35CCCu: goto label_80D35CCC;
    case 0x80D35CE0u: goto label_80D35CE0;
    case 0x80D35CE8u: goto label_80D35CE8;
    case 0x80D35D08u: goto label_80D35D08;
    case 0x80D35D0Cu: goto label_80D35D0C;
    case 0x80D35D14u: goto label_80D35D14;
    case 0x80D35D44u: goto label_80D35D44;
    case 0x80D35D60u: goto label_80D35D60;
    case 0x80D35D68u: goto label_80D35D68;
    case 0x80D35D70u: goto label_80D35D70;
    case 0x80D35D98u: goto label_80D35D98;
    case 0x80D35DA0u: goto label_80D35DA0;
    case 0x80D35DD0u: goto label_80D35DD0;
    case 0x80D35DECu: goto label_80D35DEC;
    case 0x80D35DF4u: goto label_80D35DF4;
    case 0x80D35E24u: goto label_80D35E24;
    case 0x80D35E40u: goto label_80D35E40;
    case 0x80D35E50u: goto label_80D35E50;
    case 0x80D35E58u: goto label_80D35E58;
    case 0x80D35E7Cu: goto label_80D35E7C;
    case 0x80D35E84u: goto label_80D35E84;
    case 0x80D35E98u: goto label_80D35E98;
    case 0x80D35ECCu: goto label_80D35ECC;
    case 0x80D35EECu: goto label_80D35EEC;
    case 0x80D35F20u: goto label_80D35F20;
    case 0x80D35F28u: goto label_80D35F28;
    case 0x80D35F30u: goto label_80D35F30;
    case 0x80D35F58u: goto label_80D35F58;
    case 0x80D35F5Cu: goto label_80D35F5C;
    case 0x80D35F64u: goto label_80D35F64;
    case 0x80D35F94u: goto label_80D35F94;
    case 0x80D35FB0u: goto label_80D35FB0;
    case 0x80D35FC0u: goto label_80D35FC0;
    case 0x80D35FD0u: goto label_80D35FD0;
    case 0x80D35FD8u: goto label_80D35FD8;
    case 0x80D36000u: goto label_80D36000;
    case 0x80D36008u: goto label_80D36008;
    case 0x80D36038u: goto label_80D36038;
    case 0x80D36068u: goto label_80D36068;
    case 0x80D36070u: goto label_80D36070;
    case 0x80D360A0u: goto label_80D360A0;
    case 0x80D360B0u: goto label_80D360B0;
    case 0x80D360C0u: goto label_80D360C0;
    case 0x80D360C8u: goto label_80D360C8;
    case 0x80D360CCu: goto label_80D360CC;
    case 0x80D360DCu: goto label_80D360DC;
    case 0x80D360E4u: goto label_80D360E4;
    case 0x80D360F4u: goto label_80D360F4;
    case 0x80D36124u: goto label_80D36124;
    case 0x80D3612Cu: goto label_80D3612C;
    case 0x80D36130u: goto label_80D36130;
    case 0x80D36160u: goto label_80D36160;
    case 0x80D3617Cu: goto label_80D3617C;
    case 0x80D36184u: goto label_80D36184;
    case 0x80D361ACu: goto label_80D361AC;
    case 0x80D361B4u: goto label_80D361B4;
    case 0x80D361BCu: goto label_80D361BC;
    case 0x80D361E0u: goto label_80D361E0;
    case 0x80D361E8u: goto label_80D361E8;
    case 0x80D36218u: goto label_80D36218;
    case 0x80D36234u: goto label_80D36234;
    case 0x80D3623Cu: goto label_80D3623C;
    case 0x80D36240u: goto label_80D36240;
    case 0x80D36248u: goto label_80D36248;
    case 0x80D36250u: goto label_80D36250;
    case 0x80D36254u: goto label_80D36254;
    case 0x80D3625Cu: goto label_80D3625C;
    case 0x80D36284u: goto label_80D36284;
    case 0x80D3628Cu: goto label_80D3628C;
    case 0x80D362A0u: goto label_80D362A0;
    case 0x80D362A8u: goto label_80D362A8;
    case 0x80D362B4u: goto label_80D362B4;
    case 0x80D362CCu: goto label_80D362CC;
    case 0x80D362E0u: goto label_80D362E0;
    case 0x80D362E4u: goto label_80D362E4;
    case 0x80D36308u: goto label_80D36308;
    case 0x80D36330u: goto label_80D36330;
    case 0x80D36344u: goto label_80D36344;
    case 0x80D36380u: goto label_80D36380;
    case 0x80D363B4u: goto label_80D363B4;
    case 0x80D3640Cu: goto label_80D3640C;
    case 0x80D3647Cu: goto label_80D3647C;
    case 0x80D36488u: goto label_80D36488;
    case 0x80D36494u: goto label_80D36494;
    case 0x80D3658Cu: goto label_80D3658C;
    case 0x80D36634u: goto label_80D36634;
    case 0x80D3666Cu: goto label_80D3666C;
    case 0x80D3669Cu: goto label_80D3669C;
    case 0x80D366C4u: goto label_80D366C4;
    case 0x80D36724u: goto label_80D36724;
    case 0x80D36764u: goto label_80D36764;
    case 0x80D367A4u: goto label_80D367A4;
    case 0x80D36800u: goto label_80D36800;
    case 0x80D36824u: goto label_80D36824;
    case 0x80D368C0u: goto label_80D368C0;
    case 0x80D36910u: goto label_80D36910;
    case 0x80D36960u: goto label_80D36960;
    case 0x80D369ACu: goto label_80D369AC;
    case 0x80D36A30u: goto label_80D36A30;
    case 0x80D36A54u: goto label_80D36A54;
    case 0x80D36AD0u: goto label_80D36AD0;
    case 0x80D36B38u: goto label_80D36B38;
    case 0x80D36BA0u: goto label_80D36BA0;
    case 0x80D36BF0u: goto label_80D36BF0;
    case 0x80D36C40u: goto label_80D36C40;
    case 0x80D36C84u: goto label_80D36C84;
    case 0x80D36CACu: goto label_80D36CAC;
    case 0x80D36CB8u: goto label_80D36CB8;
    case 0x80D36CC4u: goto label_80D36CC4;
    case 0x80D36CD0u: goto label_80D36CD0;
    case 0x80D36D6Cu: goto label_80D36D6C;
    case 0x80D36D78u: goto label_80D36D78;
    case 0x80D36D80u: goto label_80D36D80;
    case 0x80D36DC0u: goto label_80D36DC0;
    case 0x80D36DD4u: goto label_80D36DD4;
    case 0x80D36DD8u: goto label_80D36DD8;
    case 0x80D36DE4u: goto label_80D36DE4;
    case 0x80D36DF0u: goto label_80D36DF0;
    case 0x80D36EA4u: goto label_80D36EA4;
    case 0x80D36EB0u: goto label_80D36EB0;
    case 0x80D36EECu: goto label_80D36EEC;
    case 0x80D37014u: goto label_80D37014;
    default: return;
    }
}

